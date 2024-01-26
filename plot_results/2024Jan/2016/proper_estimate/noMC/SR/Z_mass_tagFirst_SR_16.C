#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Fri Jan 26 12:50:33 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-62.41006,315.7258,62357.65);
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
   st->SetMaximum(56115.64);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",1000,0,2000);
   st_stack_28->SetMinimum(0.01);
   st_stack_28->SetMaximum(56115.64);
   st_stack_28->SetDirectory(nullptr);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->SetLineWidth(0);
   st_stack_28->GetXaxis()->SetRange(1,150);
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetLabelSize(0.05);
   st_stack_28->GetYaxis()->SetTitleSize(0.057);
   st_stack_28->GetYaxis()->SetTitleOffset(1.2);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,25252.04);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,25243.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,25240.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,25006.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,24630.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,24296.7);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,23901.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,23514.32);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,22971.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,22509.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,21939.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,21210.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,20832.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,20493.86);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,20187.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,19848.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,19613.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,19053.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,18919.88);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,18817.42);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,18600.6);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,18330.98);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,18063.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,17866.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,17650.06);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,17441.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,17340.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,17213.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,17031.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,16755.31);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,92.80465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,46867.81);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01220293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01905401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.04933392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01605402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.02303938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,1.159672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,3.392593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.954149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,13.11181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,20.18035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,28.28111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.95914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,45.17336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,53.57523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.89438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,68.87114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,75.33163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,80.51891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,85.25318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,89.55993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,92.46412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,94.60584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,96.79971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.5444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,99.008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,99.11757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,99.32596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,99.26859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,98.85735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,98.49574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,98.16798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,98.1466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,97.53275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,97.30158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.7256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,96.09334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,95.70004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,95.1519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,94.68905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,93.78238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.13761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,91.75147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,91.04297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,90.43618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.60662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,88.66351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.78964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.09988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,86.38953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.76413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,85.41304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.89922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.49306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.75639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,83.31192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,83.04641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,82.37474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,82.1203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,82.13446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,81.12509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.69382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.95409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.80034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.66021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.96205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.70969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,78.25551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,78.08473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,77.22727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.79799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.51593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.94667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.56984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,75.01744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.54242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.8408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,73.28965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.44486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,72.30932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.65342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.34077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.86269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.33782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,70.10155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.45384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.60288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.36947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.32023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.85032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,67.37363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.47325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.48259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.83291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,65.06531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,65.10259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.49332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,64.01213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.4592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,63.20336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.78087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.26946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,61.71677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,61.67994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.99881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,61.00586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.84565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.88319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,59.50555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,59.25537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.89099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,58.51578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,58.22975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,58.00301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,57.3118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,57.34142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.76756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,56.56554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,56.21346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,55.49934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,55.33468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,55.11129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,55.00045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,54.56326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,54.18445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,54.33587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,53.55045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,53.3788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,53.11142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,52.54694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,52.73318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,52.61007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,52.26983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.9638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.71069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.52975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,51.21357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,50.71307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,50.47976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,50.51564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.85309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.97516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,49.56384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,49.32021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,49.28023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.64411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.79583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.76833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,48.16329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,48.33621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.96861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.72795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,47.42591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,47.44204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,47.13927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,47.02799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.89109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.79975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.97507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,46.40732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,46.19335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.92511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,45.64401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.83551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,45.2855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,45.61904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,45.38178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.83154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,45.21246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,45.022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,44.51044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,44.4453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.94896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,44.48152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,44.06005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,44.04076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.84609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.79224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.6595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.7604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.84465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.60343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.72995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,43.2341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.55142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,43.15903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,43.03418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.82191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,43.17659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.77588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,42.33267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,42.5525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.62328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.87809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,42.25073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,42.00578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,42.12221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.7644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.86259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.98007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.65637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.75631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,41.45858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.59274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,41.19074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,41.04404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,41.09083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.37279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,41.20342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.91013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.80521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.47002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.5253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,40.21153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.3746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,40.25484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,40.33154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,40.11963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.35782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,40.26986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.93747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.94953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.86854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.66716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.75386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.67835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,39.06758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.54129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,39.12764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,39.24192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,39.03142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,39.14601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,39.15051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.20164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.80312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.69443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.70304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.64848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.65168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.45942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.69683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,38.30791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,38.12376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,38.23038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.66293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.88481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,38.03153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.71984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,38.07378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,38.03902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.60711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.79475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,37.41068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.71619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,37.48559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.49941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,37.27749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,37.18964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,37.13994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.89057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.44827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.9846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.99299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.89042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.73256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.6673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.6829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.42064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.54633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,36.29255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,36.43972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.27279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,36.13062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,36.27559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,36.05191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,36.06492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,36.04267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.95204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.63267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.52887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.82056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.45878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,35.39617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.67531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,35.05482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,35.2963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,35.07339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,35.26597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,35.0949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.97799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,35.01098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,35.0559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.81207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.52635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.74398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.54728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,34.32236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.47586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,34.11692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.62059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,34.46187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,34.27141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,34.11137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.8209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.91898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.87817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,34.25977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.58718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.89535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.62112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,33.22455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.52347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.50278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,33.33034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,33.10913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,33.28022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.48718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,33.39348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,33.24786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.81058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.87869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.81634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.56162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.86907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.66398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.58687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.69071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,32.27671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.51719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,32.28132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,32.31688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,32.24748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,32.35303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,32.13295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,32.12249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.93336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,32.25211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.9852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.76735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.7831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.82598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.60704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.45884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,31.46256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.64059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.40724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,31.22231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,31.25194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,31.3043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,31.11252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.92274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,31.02975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,31.17967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.93954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.52373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.74859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.44101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.78762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.43566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.40523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,30.29271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,30.15733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,30.08624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,30.02237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,30.21718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,30.16325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.99211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.72408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.93366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.68625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,30.09019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.66126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.86568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,30.03123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,30.05557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,29.39694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,29.26364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.59311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,29.12115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.52731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,29.4084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.55042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,29.19868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.42493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,29.09289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.86256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,29.0286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.90347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.86878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.64767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.78297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.47162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.55773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.49058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.55815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,28.30877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.34287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.22928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,28.35759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,28.11158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,28.16926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.30026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,28.02939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,28.04285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.37332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,28.01486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.77133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.99061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.62734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.58266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.71604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.59625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.32179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.49051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.20418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.44796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.42281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.3858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.54279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.19385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,27.0705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,27.11733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.96252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,27.10543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.89566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.97196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.6851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.96853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.66709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.73869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.43345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.74307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.81709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.79626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.68693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,26.09828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.19081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.38651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.35796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.38578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.18533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.11502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,26.0311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.99403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.64147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.90673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.67683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,26.01647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,26.10418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.61292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.72732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.53895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.40542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.36381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.64511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.63991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.41552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.31471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,25.17149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,25.01995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,25.14255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.99294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.28523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.15164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,25.10351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.63466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.62999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.72759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.91609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.81856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.68325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.67329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.59244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.34962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.34086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.36499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,24.04848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,24.09659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.93837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,24.21147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.94458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.86297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.19744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.98834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.93002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,24.01517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,24.27065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,24.02494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.87966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.23011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.7961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.55198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.69897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.51428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,23.28829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,23.0671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.36285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,23.23337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.9601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,23.00023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.79435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.5269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,23.04324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.70235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.65534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.81805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,23.00107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.78005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.5448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.66056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.85464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.82858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.73646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,22.25597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.35714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.6413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.47208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.85213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,22.2469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.35357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,22.15225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,22.07657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.58901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.98118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,22.18661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,22.03241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.58894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,22.19564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.89261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,22.15287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.82126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.59459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.54572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.46348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.68287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.69707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.36316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.41692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.41634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,21.23024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,21.21308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.40176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,21.01051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.31111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.97822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.31408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,21.04625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.32345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,21.04931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.93171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.96787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.98366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.65927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.90064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.70348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.85962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.53056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.5603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.49115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.61423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.73022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.68426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,20.16166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.32425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,20.06776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,20.18468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.36031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.44937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,20.2105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.26088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.42997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,20.26917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.74721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.88366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,20.17657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.89501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.90419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.65196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.59731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.77418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.79729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.78078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.49698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.62405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.38268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.66981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,19.19728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.45975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.54024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.24028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,19.05207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,19.1208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,19.20916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,19.00961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.2344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,19.04403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.88045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.99644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.78683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.91432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.62196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.36095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.70798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.91198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.68795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.62375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.28699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.42173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.40436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.33552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.35655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.54464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.48975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.24379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,18.35044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,18.16435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.35663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.19529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.46273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,18.07039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.79029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.85532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.96774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.55931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.82572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.72198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.58757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,18.00619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.62784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.57289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.76882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.66566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.44818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.35325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.40546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.47533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.41367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.94599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.3449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.39685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.26335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.43815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.68502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.80928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.54418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.98081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.93122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.7026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.42958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.98041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.75407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.74486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.73899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.86187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.7248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.71018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.59893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.7969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.53765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.23972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.38445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.25134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.44703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.60419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,16.09493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,16.33614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.35195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.29811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.44917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.21615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.34332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.17256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,16.19233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.06548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.26946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.99471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.70288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.85179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.74477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.69451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.88092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,16.2175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.87818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.90138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.53964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.67512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.37672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.62032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.74504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.48676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.43728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.65572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,15.10507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.52944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.4536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.4645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,15.14137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.5921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.25134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.30142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.46789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.4691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.44864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,15.03034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,15.0845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,15.09871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.18501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.89739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.56052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.90908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.69556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.69599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.86319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,15.0012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.88638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.66915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.62824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.5573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.31418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.68008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.27225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.39747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.50831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.20552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.48284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.1711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,15.01755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.41043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.32458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.32836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.4181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.33636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,14.05892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.96424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.17915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.9327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.11904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.12786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.93997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.79769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.9874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.93877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.07089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.79007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.56563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.94685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.8837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.69441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.65712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.93767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,14.01552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.82829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.83114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.71547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.64959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.47539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.7912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,13.06594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.60355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.41192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,13.23031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.19113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.23785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.38919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.39563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.53495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.22178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.4104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.40332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.32878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.31013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,13.08461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.91628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.68934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.67866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.13647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,12.99784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.88059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.75403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.8097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.11804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.84464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.91207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.92396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.06678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,13.04741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.69584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.46743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.54513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.50043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.51743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.67622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.17483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.70717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.51929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.18546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.29842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.27082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.30806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.16386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.14531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.78941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.68411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.7863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.40834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.89099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.17708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.20958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,12.17414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.95813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.82197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.15376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.0942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,12.08933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.9443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.84831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.75903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.89136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.53966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.80004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.63245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.92674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.84759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.55255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.76114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.82994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.50671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.92484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.34812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.67316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.78678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.44555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.38516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.51748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.32614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.16228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.30656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.23159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.50661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.15715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.04366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.27998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.35419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.31643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.98914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.30876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.20276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.90106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,11.01313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.2606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.98825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.82224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.90701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.80231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.83213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.99939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.0629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.87429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.76058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.02451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.79547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.86658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.7156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.71759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.58959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.74269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.67377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.57155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.66772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.67957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.64039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.41414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.55174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.24947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.61093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.48529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.34683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.80658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.28338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.41349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.52799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.23414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.42238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.37376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.36062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.48897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.2175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.12349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,10.02224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.19085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.893751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.27853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.22515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.0455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.32087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.14342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.847824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.947784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.965051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.681027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.87261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.983059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.923478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.936635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.792632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.678259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.910332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.799433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.972491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.942334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.655058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.665234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.405315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.730035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.337229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.436133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.747764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.730869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.315217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.178062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.802978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.54839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.458158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.212488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.250611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.301434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.755353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.264535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.357563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.112151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.232114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.562034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.342477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.596915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.3728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.125364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.323122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.535812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.072866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.184679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.159353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.25157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.874888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.873548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.042296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.268146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.822186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.97385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.781605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.787911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.935501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.798176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.784569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.54703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.539669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.56405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.750824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.684729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.610187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.950013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.64596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.062735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.962178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.686324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.701935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.90179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.531813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.525368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.647062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.529163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.771822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.603399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.019584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.472648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.740436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.190517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.391923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.64532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.969141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.544484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.477832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.81421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.676735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.380601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,137.2306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(7334482);

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
   
   TH1D *VH_tagFirst_Z_mass__55 = new TH1D("VH_tagFirst_Z_mass__55","",1000,0,2000);
   VH_tagFirst_Z_mass__55->SetBinContent(1000,114);
   VH_tagFirst_Z_mass__55->SetBinContent(1001,62283);
   VH_tagFirst_Z_mass__55->SetEntries(3657448);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__55->SetLineColor(ci);
   VH_tagFirst_Z_mass__55->SetLineWidth(2);
   VH_tagFirst_Z_mass__55->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__55->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1055[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1055[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25252.04, 25243.62, 25240.39,
   25006.3, 24630.18, 24296.7, 23901.91, 23514.32, 22971.21, 22509.01, 21939.74, 21210.92, 20832.01, 20493.86, 20187.73, 19848.3, 19613.74, 19053.38, 18919.88,
   18817.42, 18600.6, 18330.98, 18063.54, 17866.48, 17650.06, 17441.71, 17340.91, 17213.36, 17031.25, 16755.31, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 92.80465 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1055[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1055[1000] = { 0, 0, 0, 0, 0, 0, 0.01220293, 0.01905401, 0.04933392, 0.01605402, 0.02303938, 1.159672, 3.392593, 6.954149, 13.11181, 20.18035, 28.28111,
   36.95914, 45.17336, 53.57523, 60.89438, 68.87114, 75.33163, 80.51891, 85.25318, 89.55993, 92.46412, 94.60584, 96.79971, 97.5444, 99.008, 99.11757, 99.32596,
   99.26859, 98.85735, 98.49574, 98.16798, 98.1466, 97.53275, 97.30158, 96.7256, 96.09334, 95.70004, 95.1519, 94.68905, 93.78238, 93.13761, 91.75147, 91.04297,
   90.43618, 89.60662, 88.66351, 87.78964, 87.09988, 86.38953, 85.76413, 85.41304, 84.89922, 84.49306, 83.75639, 83.31192, 83.04641, 82.37474, 82.1203, 82.13446,
   81.12509, 80.69382, 79.95409, 79.80034, 79.66021, 78.96205, 78.70969, 78.25551, 78.08473, 77.22727, 76.79799, 76.51593, 75.94667, 75.56984, 75.01744, 74.54242,
   73.897, 73.8408, 73.28965, 72.44486, 72.30932, 71.65342, 71.34077, 70.86269, 70.33782, 70.10155, 69.45384, 68.60288, 68.36947, 68.32023, 67.85032, 67.37363,
   66.47325, 66.48259, 65.83291, 65.06531, 65.10259, 64.49332, 64.01213, 63.4592, 63.20336, 62.78087, 62.26946, 61.71677, 61.67994, 60.99881, 61.00586, 60.84565,
   59.88319, 59.50555, 59.25537, 58.89099, 58.51578, 58.22975, 58.00301, 57.3118, 57.34142, 56.76756, 56.56554, 56.21346, 55.49934, 55.33468, 55.11129, 55.00045,
   54.56326, 54.18445, 54.33587, 53.55045, 53.3788, 53.11142, 52.54694, 52.73318, 52.61007, 52.26983, 51.9638, 51.71069, 51.52975, 51.21357, 50.71307, 50.47976,
   50.51564, 49.85309, 49.97516, 49.56384, 49.32021, 49.28023, 48.64411, 48.79583, 48.76833, 48.16329, 48.33621, 47.96861, 47.72795, 47.42591, 47.44204, 47.13927,
   47.02799, 46.89109, 46.79975, 46.97507, 46.40732, 46.19335, 45.92511, 45.64401, 45.83551, 45.2855, 45.61904, 45.38178, 44.83154, 45.21246, 45.022, 44.51044,
   44.4453, 44.94896, 44.48152, 44.06005, 44.04076, 43.84609, 43.79224, 43.6595, 43.7604, 43.84465, 43.60343, 43.72995, 43.2341, 43.55142, 43.15903, 43.03418,
   42.82191, 43.17659, 42.77588, 42.33267, 42.5525, 42.62328, 41.87809, 42.25073, 42.00578, 42.12221, 41.7644, 41.86259, 41.98007, 41.65637, 41.75631, 41.45858,
   41.59274, 41.19074, 41.04404, 41.09083, 41.37279, 41.20342, 40.91013, 40.80521, 40.47002, 40.5253, 40.21153, 40.3746, 40.25484, 40.33154, 40.11963, 40.35782,
   40.26986, 39.93747, 39.94953, 39.86854, 39.66716, 39.75386, 39.67835, 39.06758, 39.54129, 39.12764, 39.24192, 39.03142, 39.14601, 39.15051, 39.20164, 38.80312,
   38.69443, 38.70304, 38.64848, 38.65168, 38.45942, 38.69683, 38.30791, 38.12376, 38.23038, 38.66293, 37.88481, 38.03153, 37.71984, 38.07378, 38.03902, 37.60711,
   37.79475, 37.41068, 37.71619, 37.48559, 37.49941, 37.27749, 37.18964, 37.13994, 36.89057, 37.44827, 36.9846, 36.99299, 36.89042, 36.73256, 36.6673, 36.6829,
   36.42064, 36.54633, 36.29255, 36.43972, 36.27279, 36.13062, 36.27559, 36.05191, 36.06492, 36.04267, 35.95204, 35.63267, 35.52887, 35.82056, 35.841, 35.45878,
   35.39617, 35.67531, 35.05482, 35.2963, 35.07339, 35.26597, 35.0949, 34.97799, 35.01098, 35.0559, 34.81207, 34.52635, 34.74398, 34.54728, 34.32236, 34.47586,
   34.11692, 34.62059, 34.46187, 34.27141, 34.11137, 33.8209, 33.91898, 33.87817, 34.25977, 33.58718, 33.89535, 33.62112, 33.22455, 33.52347, 33.50278, 33.33034,
   33.10913, 33.28022, 33.48718, 33.39348, 33.24786, 32.81058, 32.87869, 32.964, 32.81634, 32.56162, 32.86907, 32.66398, 32.58687, 32.69071, 32.27671, 32.51719,
   32.28132, 32.31688, 32.24748, 32.35303, 32.13295, 32.12249, 31.93336, 32.25211, 31.9852, 31.76735, 31.7831, 31.82598, 31.60704, 31.45884, 31.46256, 31.64059,
   31.40724, 31.22231, 31.25194, 31.3043, 31.11252, 30.92274, 31.02975, 31.17967, 30.93954, 30.52373, 30.74859, 30.44101, 30.78762, 30.43566, 30.40523, 30.29271,
   30.15733, 30.08624, 30.02237, 30.21718, 30.16325, 29.99211, 29.72408, 29.93366, 29.68625, 30.09019, 29.66126, 29.86568, 30.03123, 30.05557, 29.39694, 29.26364,
   29.59311, 29.12115, 29.52731, 29.4084, 29.55042, 29.19868, 29.42493, 29.09289, 28.86256, 29.0286, 28.90347, 28.86878, 28.64767, 28.78297, 28.47162, 28.55773,
   28.49058, 28.55815, 28.30877, 28.34287, 28.22928, 28.35759, 28.11158, 28.16926, 28.30026, 28.02939, 28.04285, 28.37332, 28.01486, 27.77133, 27.99061, 27.62734,
   27.58266, 27.71604, 27.59625, 27.32179, 27.49051, 28.20418, 27.44796, 27.42281, 27.3858, 27.54279, 27.19385, 27.0705, 27.11733, 26.96252, 27.10543, 26.89566,
   26.97196, 26.6851, 26.96853, 26.66709, 26.73869, 26.43345, 26.74307, 26.81709, 26.79626, 26.68693, 26.09828, 26.19081, 26.38651, 26.35796, 26.38578, 26.18533,
   26.11502, 26.0311, 25.99403, 25.64147, 25.90673, 25.67683, 26.01647, 26.10418, 25.61292, 25.72732, 25.53895, 25.40542, 25.36381, 25.64511, 25.63991, 25.41552,
   25.31471, 25.17149, 25.01995, 25.14255, 24.99294, 25.28523, 25.15164, 25.10351, 24.962, 24.63466, 24.62999, 24.72759, 24.91609, 24.81856, 24.68325, 24.67329,
   24.59244, 24.34962, 24.34086, 24.36499, 24.04848, 24.09659, 23.93837, 24.21147, 23.94458, 23.86297, 24.19744, 23.98834, 23.93002, 24.01517, 24.27065, 24.02494,
   23.87966, 23.23011, 23.7961, 23.55198, 23.69897, 23.628, 23.51428, 23.28829, 23.0671, 23.36285, 23.23337, 22.9601, 23.00023, 22.79435, 23.5269, 23.04324,
   22.70235, 22.65534, 22.81805, 23.00107, 22.78005, 22.5448, 22.66056, 22.85464, 22.82858, 22.73646, 22.25597, 22.35714, 22.6413, 22.47208, 22.85213, 22.2469,
   22.35357, 22.15225, 22.07657, 21.58901, 21.98118, 22.18661, 22.03241, 21.58894, 22.19564, 21.89261, 22.15287, 21.82126, 21.59459, 21.54572, 21.46348, 21.68287,
   21.69707, 21.36316, 21.41692, 21.41634, 21.23024, 21.21308, 21.40176, 21.01051, 21.31111, 20.97822, 21.31408, 21.04625, 21.32345, 21.04931, 20.93171, 20.96787,
   20.98366, 20.65927, 20.90064, 20.70348, 20.85962, 20.53056, 20.5603, 20.49115, 20.61423, 20.73022, 20.68426, 20.16166, 20.32425, 20.06776, 20.18468, 20.36031,
   20.44937, 20.2105, 20.26088, 20.42997, 20.26917, 19.74721, 19.88366, 20.17657, 19.89501, 19.90419, 19.65196, 19.59731, 19.77418, 19.79729, 19.78078, 19.49698,
   19.62405, 19.38268, 19.66981, 19.19728, 19.45975, 19.54024, 19.24028, 19.05207, 19.1208, 19.20916, 19.00961, 19.2344, 19.04403, 18.88045, 18.99644, 18.873,
   18.78683, 18.91432, 18.62196, 18.36095, 18.70798, 18.91198, 18.68795, 18.62375, 18.28699, 18.42173, 18.40436, 18.33552, 18.35655, 18.54464, 18.48975, 18.24379,
   18.35044, 18.16435, 18.35663, 18.19529, 18.46273, 18.07039, 17.79029, 17.85532, 17.96774, 17.55931, 17.82572, 17.72198, 17.58757, 18.00619, 17.62784, 17.57289,
   17.76882, 17.66566, 17.44818, 17.35325, 17.40546, 17.47533, 17.41367, 17.94599, 17.3449, 17.39685, 17.511, 17.26335, 17.43815, 16.68502, 16.80928, 17.54418,
   16.98081, 16.93122, 16.7026, 17.42958, 16.98041, 16.75407, 16.74486, 16.73899, 16.86187, 16.7248, 16.71018, 16.59893, 16.7969, 16.53765, 16.23972, 16.38445,
   16.25134, 16.44703, 16.60419, 16.09493, 16.33614, 16.35195, 16.29811, 16.44917, 16.21615, 16.34332, 16.17256, 16.19233, 16.06548, 16.26946, 15.99471, 15.70288,
   15.85179, 15.74477, 15.69451, 15.88092, 16.2175, 15.87818, 15.90138, 15.53964, 15.67512, 15.37672, 15.62032, 15.74504, 15.48676, 15.43728, 15.65572, 15.10507,
   15.52944, 15.4536, 15.4645, 15.14137, 15.5921, 15.25134, 15.30142, 15.46789, 15.4691, 15.44864, 15.03034, 15.0845, 15.09871, 15.18501, 14.89739, 14.56052,
   14.90908, 14.69556, 14.69599, 14.86319, 15.0012, 14.88638, 14.66915, 14.62824, 14.5573, 14.31418, 14.68008, 14.27225, 14.39747, 14.50831, 14.20552, 14.48284,
   14.1711, 15.01755, 14.41043, 14.32458, 14.32836, 14.4181, 14.33636, 14.05892, 13.96424, 14.17915, 13.9327, 14.11904, 14.12786, 13.93997, 13.79769, 13.9874,
   13.93877, 14.07089, 13.79007, 13.56563, 13.94685, 13.8837, 13.69441, 13.65712, 13.93767, 14.01552, 13.82829, 13.83114, 13.71547, 13.64959, 13.47539, 13.7912,
   13.06594, 13.60355, 13.41192, 13.23031, 13.19113, 13.23785, 13.38919, 13.63, 13.39563, 13.53495, 13.22178, 13.4104, 13.40332, 13.32878, 13.31013, 13.08461,
   12.91628, 12.68934, 12.67866, 13.13647, 12.99784, 12.88059, 12.75403, 12.8097, 13.11804, 12.84464, 12.682, 12.91207, 12.92396, 13.06678, 13.04741, 12.69584,
   12.941, 12.46743, 12.54513, 12.50043, 12.51743, 12.67622, 12.17483, 12.70717, 12.51929, 12.18546, 12.29842, 12.27082, 12.30806, 12.16386, 12.14531, 11.78941,
   11.68411, 11.7863, 12.40834, 11.89099, 12.17708, 12.20958, 12.17414, 11.95813, 11.82197, 12.15376, 12.0942, 12.08933, 11.9443, 11.84831, 11.75903, 11.89136,
   11.53966, 11.80004, 11.63245, 11.92674, 11.84759, 11.55255, 11.76114, 11.82994, 11.50671, 11.92484, 11.34812, 11.67316, 11.78678, 11.44555, 11.38516, 11.51748,
   11.32614, 11.16228, 11.30656, 11.23159, 11.50661, 11.15715, 11.04366, 11.27998, 11.35419, 11.31643, 10.98914, 11.30876, 11.20276, 10.90106, 11.01313, 11.2606,
   10.98825, 10.82224, 10.90701, 10.80231, 10.83213, 10.99939, 11.0629, 10.87429, 10.76058, 11.02451, 10.79547, 10.86658, 10.7156, 10.71759, 10.58959, 10.74269,
   10.67377, 10.57155, 10.66772, 10.67957, 10.64039, 10.41414, 10.55174, 10.24947, 10.61093, 10.48529, 10.34683, 10.80658, 10.28338, 10.41349, 10.52799, 10.23414,
   10.42238, 10.37376, 10.36062, 10.48897, 10.2175, 10.12349, 10.02224, 10.19085, 9.893751, 10.27853, 10.22515, 10.0455, 10.32087, 10.14342, 9.847824, 9.947784,
   9.965051, 9.681027, 9.87261, 10.19, 9.983059, 9.923478, 9.936635, 9.792632, 9.678259, 9.910332, 9.799433, 9.972491, 9.942334, 9.655058, 9.665234, 9.405315,
   9.730035, 9.337229, 9.436133, 9.747764, 9.730869, 9.315217, 9.178062, 9.802978, 9.54839, 9.458158, 9.212488, 9.250611, 9.301434, 9.755353, 9.264535, 9.357563,
   9.112151, 9.232114, 9.562034, 9.342477, 9.596915, 9.3728, 9.125364, 9.323122, 9.535812, 9.072866, 9.184679, 9.159353, 9.25157, 8.874888, 8.873548, 9.042296,
   9.268146, 8.822186, 8.97385, 8.781605, 8.787911, 8.935501, 8.798176, 8.784569, 8.54703, 8.539669, 8.56405, 8.750824, 8.684729, 8.610187, 8.950013, 8.64596,
   9.062735, 8.962178, 8.686324, 8.701935, 8.90179, 8.531813, 8.525368, 8.647062, 8.529163, 8.771822, 8.603399, 8.019584, 8.472648, 8.740436, 8.190517, 8.391923,
   8.64532, 7.969141, 8.544484, 8.477832, 8.81421, 8.676735, 8.380601 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1055);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetMinimum(-2642.403);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetMaximum(27895.91);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055);
   
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
   
   TH1D *data_mc_ratio__56 = new TH1D("data_mc_ratio__56","",1000,0,2000);
   data_mc_ratio__56->SetBinContent(1000,1.228387);
   data_mc_ratio__56->SetBinContent(1001,1.328908);
   data_mc_ratio__56->SetBinError(1000,0.115049);
   data_mc_ratio__56->SetBinError(1001,0.00659507);
   data_mc_ratio__56->SetMinimum(0.4);
   data_mc_ratio__56->SetMaximum(1.6);
   data_mc_ratio__56->SetEntries(59.07832);
   data_mc_ratio__56->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__56->SetLineColor(ci);
   data_mc_ratio__56->SetLineWidth(2);
   data_mc_ratio__56->SetMarkerStyle(20);
   data_mc_ratio__56->SetMarkerSize(1.2);
   data_mc_ratio__56->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__56->GetXaxis()->SetRange(1,150);
   data_mc_ratio__56->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__56->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__56->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__56->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__56->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__56->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__56->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__56->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__56->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__56->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__56->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__56->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__56->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1056[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1056[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1056[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1056[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003920793, 0.00392644, 0.0039352,
   0.003969743, 0.004013667, 0.004053874, 0.004107119, 0.004173908, 0.004245869, 0.004322783, 0.004408695, 0.004530371, 0.004593894, 0.004642947, 0.004690426, 0.004724958, 0.004748589, 0.004815497, 0.004812028,
   0.004805982, 0.004817405, 0.004836814, 0.004860045, 0.004875044, 0.004894574, 0.004917185, 0.004925522, 0.004932169, 0.004961059, 0.004998797, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09030368 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1056,Graph_from_mc_statistical_error_fy1056,Graph_from_mc_statistical_error_fex1056,Graph_from_mc_statistical_error_fey1056);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1056 = new TH1F("Graph_Graph_from_mc_statistical_error1056","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1056->SetMinimum(0.8916356);
   Graph_Graph_from_mc_statistical_error1056->SetMaximum(1.108364);
   Graph_Graph_from_mc_statistical_error1056->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1056->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1056);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
