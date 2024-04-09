#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_18/H_mass_tagFirst_SR_18
//=========  (Mon Apr  8 13:43:42 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-31.84443,315.7258,31822.58);
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
   st->SetMaximum(28637.14);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",1000,0,2000);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(28637.14);
   st_stack_116->SetDirectory(nullptr);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->SetLineWidth(0);
   st_stack_116->GetXaxis()->SetRange(1,150);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetTitleOffset(1);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetTitleOffset(1);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,6419.913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,12886.71);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,12783.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,12752.84);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,12512.13);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,12367.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,12404.67);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,12449.6);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,12238.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,12278.89);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,12143.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,12056.57);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,12031.81);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,11789.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,11742.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,11768.39);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,11610.18);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,11531.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,11632.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,11599.09);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,11484.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,11394.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,11292.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,11122.68);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,10992.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,11047.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,10924.77);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,10880.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,10758.15);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,10638.47);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,5325.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,46.35387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,21593.74);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(5,0.07404959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(7,0.0785996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(8,0.08371779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.1080575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.699554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.7828569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.281627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,8.893762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,15.64583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,24.07276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,31.48833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,39.38487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,47.08496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,55.09272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,61.99972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,68.59765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,73.87491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,78.64067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,82.25208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,85.70869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,87.72603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,89.63074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,91.30833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,92.66079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,93.46986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,94.34696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,93.92281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,94.2992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,94.72846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,93.94008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,94.18059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,94.77496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,93.86666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,93.32342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,93.7914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,93.94036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,92.18467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,91.45224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,91.64198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,91.15148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,90.91982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,89.92714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,89.4558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,89.71514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,88.9758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,89.02275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,88.09642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,87.62886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,87.85184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,87.38441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,86.60917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,87.57547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,86.18659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,85.77747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,86.39867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,85.43762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,85.34761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,84.90633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,84.4211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,84.86277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,84.36361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,84.38398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,83.88149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,83.52543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,83.07772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,82.89118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,83.95831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,82.75006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,81.94231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,82.03947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,82.01878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,80.94389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,81.13841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,79.98728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,80.33149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,79.81787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,79.85076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,79.43873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,78.84863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,78.40812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,77.75208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,77.88026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,77.97077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,78.33092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,78.18941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,77.43388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,76.54914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,76.75856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,75.83783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,75.55237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,75.50581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,75.45063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,75.92917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,74.83983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,74.75433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,74.39587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,73.75222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,73.52675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,73.82852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,73.84893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,75.14133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,72.78274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,72.72805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,72.16085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,72.00706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,72.4413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,72.54087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,71.49477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,73.16674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,72.40041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,71.89442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,70.72196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,70.5919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,77.12471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,70.58679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,71.01708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,70.33715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,69.96476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,70.08882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,71.03767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,69.61732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,69.08504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,68.59307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,72.28427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,68.3501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,69.18868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,68.82929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,67.93469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,68.07798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,69.49634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,67.66133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,67.45571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,67.3623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,68.03885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,67.35748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,67.18471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,66.74581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,67.04119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,67.84042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,66.45117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,66.50047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,66.32833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,66.82717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,66.12451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,66.16101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,67.42452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,66.17905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,64.68841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,65.5045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,66.43639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,65.2597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,65.09426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,65.09725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,64.32578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,64.57599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,65.22504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,63.77996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,64.36879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,64.21233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,63.92196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,63.88933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,63.51516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,63.42945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,62.89378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,62.97605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,63.27462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,62.86019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,63.66717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,61.97228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,62.47648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,62.86116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,62.16856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,61.82564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,61.72597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,61.46344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,60.95823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,61.52472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,61.58099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,60.98864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,61.24151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,61.0505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,60.76191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,60.93287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,60.05467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,60.50402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,60.17111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,60.14271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,60.37985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,59.64234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,59.51382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,59.63872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,59.41253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,59.30191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,58.97746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,58.99437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,58.76968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,58.53366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,58.59076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,57.97001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,58.03155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,57.54793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,58.00585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,57.90102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,58.21119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,58.02144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,57.2376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,57.24293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,57.00841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,57.05616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,56.87345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,56.89516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,57.16504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,55.80893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,56.6869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,56.29673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,56.25223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,56.5875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,57.57811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,66.73345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,55.62814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,55.94035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,54.91278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,55.47219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,55.0249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,54.65245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,55.48001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,54.61107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,54.88409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,54.29749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,54.43794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,53.47278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,53.80226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,54.22797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,53.32876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,53.63342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,53.57607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,53.17048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,53.78876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,52.99611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,53.04365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,52.44181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,52.2579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,52.73547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,52.38421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,51.84808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,52.96633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,52.4074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,51.51944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,51.71234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,53.46283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,51.55228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,51.30921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,51.81774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,51.20453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,51.07092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,50.72735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,50.09353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,51.36307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,50.40151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,50.35275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,50.3266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,51.33111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,50.12871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,50.84821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,49.61945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,49.0709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,49.5064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,49.58732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,59.1762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,49.32545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,49.00333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,48.26801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,48.66149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,48.41701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,49.78744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,48.593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,48.22641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,49.17968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,47.51357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,47.55603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,47.74793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,47.64551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,47.30046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,47.04161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,47.13451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,46.64869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,47.08107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,46.4378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,46.47562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,46.85813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,45.49504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,45.72597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,46.18013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,45.44671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,45.57564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,45.54901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,46.87425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,44.80862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,45.09804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,44.76516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,44.934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,44.74895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,44.43339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,44.3525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,44.86378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,44.13837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,44.60253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,44.18973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,44.09718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,44.07893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,43.93471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,43.33762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,43.42747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,42.9414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,43.80398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,42.90882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,43.07639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,42.59926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,43.41946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,42.26671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,42.19686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,42.15858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,42.55935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,42.00526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,41.79798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,42.6813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,41.41459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,41.77164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,40.97666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,41.33166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,40.79795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,41.46141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,39.93461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,41.06636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,40.4541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,40.27984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,40.31169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,40.36157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,39.94109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,39.8424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,40.16738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,40.04863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,39.8176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,39.83436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,39.69859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,41.38276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,39.46175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,39.05307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,38.90272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,39.00273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,38.75842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,40.03629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,38.84395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,38.28349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,38.20968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,38.0328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,39.45256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,38.26111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,38.29314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,37.69362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,37.43924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,37.49051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,37.25002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,37.6166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,39.25068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,37.21328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,37.13901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,36.66051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,36.92355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,36.53736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,36.91602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,36.18463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,35.95908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,36.42266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,35.86586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,35.88942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,36.14967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,35.6756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,61.36504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,35.39779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,35.37607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,35.40341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,34.9094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,35.23402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,35.03768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,34.61131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,34.93665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,35.53981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,34.5937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,34.54692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,34.55629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,44.75143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,38.23105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,33.77224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,33.90387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,33.45057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,34.12918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,33.7035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,33.48079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,33.58004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,33.94647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,33.69047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,32.80771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,32.75894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,32.87113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,33.13207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,33.06085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,33.11984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,32.32642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,32.6105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,32.36622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,32.31657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,32.45985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,32.05696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,32.23771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,32.34022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,31.99451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,31.69419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,31.06868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,31.55554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,33.8187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,31.27164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,31.53364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,31.2497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,30.45792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,30.43157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,31.14034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,30.42512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,31.01054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,30.89048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,30.14436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,30.9583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,30.83339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,29.95573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,29.85002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,29.84056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,29.83842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,30.10155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,29.7731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,29.68287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,28.96477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,29.46896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,29.46692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,29.37579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,29.34646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,29.41593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,29.15736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,28.77947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,28.85175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,29.09737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,28.19626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,28.54744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,28.86855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,27.71963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,29.08113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,28.23385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,28.32407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,27.96368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,28.19705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,28.14807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,28.0965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,27.57852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,28.31372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,27.0831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,27.31571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,27.30604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,27.22055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,27.41149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,27.16779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,26.59845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,26.85498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,27.07674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,26.70655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,26.93858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,26.8454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,26.51684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,26.51213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,26.59524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,26.81719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,26.10448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,26.10837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,26.33917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,26.44858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,26.07118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,26.03972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,25.77315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,25.88173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,26.02727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,25.80907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,25.94313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,26.14685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,25.90291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,25.41365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,25.16116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,25.21291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,24.92847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,25.25302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,24.73398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,25.34889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,24.53735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,25.6383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,24.51146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,24.50612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,24.43872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,24.69242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,24.42236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,24.11402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,24.61533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,23.95184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,24.88874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,23.92555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,23.68574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,23.55813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,24.03756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,23.25865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,23.96479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,23.62277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,23.94395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,22.97361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,23.25116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,23.44669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,23.35417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,23.15918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,22.99421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,23.02483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,22.87145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,22.88525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,22.86585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,23.05971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,22.65433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,22.97186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,23.37798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,22.86023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,23.64377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,22.52527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,22.53577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,22.23832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,22.21373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,22.42421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,22.44214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,22.03493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,21.81263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,22.20761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,21.87693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,21.9236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,21.80499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,21.84023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,21.31734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,22.33427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,21.46937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,20.96982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,21.32022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,21.35478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,21.45401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,21.5541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,20.85509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,21.55904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,21.3303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,20.77912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,21.05821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,20.53624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,21.02543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,20.39323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,20.47318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,20.87352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,20.58703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,20.88885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,21.0755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,22.03532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,20.30884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,20.04548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,19.99779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,19.86315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,19.64542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,19.76491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,19.63102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,20.12277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,19.69469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,19.83897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,20.11479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,19.6355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,19.89712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,19.69031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,19.73455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,19.43682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,19.37132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,19.09217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,19.67577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,19.44313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,19.61823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,19.793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,19.33157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,19.23169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,19.0494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,19.27521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,19.6712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,18.5959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,18.8458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,19.07679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,18.78175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,19.1183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,18.58178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,18.82899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,18.33332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,18.90729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,18.18834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,18.45075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,18.36047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,18.32012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,18.33473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,18.36279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,17.81748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,17.67571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,18.14143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,17.77443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,17.65425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,17.79185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,18.07239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,17.99054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,17.83961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,17.53627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,17.8559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,17.72907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,17.39784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,17.55102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,17.27534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,17.334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,17.2649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,17.25074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,17.10728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,18.02911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,17.24815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,16.9863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,17.07384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,17.12802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,16.91779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,16.94779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,17.471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,16.54103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,16.71451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,17.12292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,16.67371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,16.96238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,16.4605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,16.61997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,16.23697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,16.66094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,16.35388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,16.26987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,15.92552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,16.11787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,16.37661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,16.23325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,16.07217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,16.64541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,16.10906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,16.57105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,15.98814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,15.98266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,15.81534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,15.47132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,15.90557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,15.72476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,15.74699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,15.5881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,15.94915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,15.55251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,15.6215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,15.95551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,15.85946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,15.51692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,15.85495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,15.20971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,15.45896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,15.34447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,15.16437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,15.59761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,15.21027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,15.08353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,14.99198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,15.46458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,14.89953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,14.7654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,15.05415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,14.82997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,14.95724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,14.72824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,14.79332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,14.44319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,14.69165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,14.28075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,14.62008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,14.63125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,14.53131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,14.83651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,14.25673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,14.89753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,14.41652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,14.74184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,14.18251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,14.13541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,14.58419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,14.01815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,14.21745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,14.2656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,14.58656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,14.33036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,14.56296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,14.12414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,14.58352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,14.17547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,13.91268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,14.43698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,14.24513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,14.01109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,13.98467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,13.37109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,13.77624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,13.79772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,13.37458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,13.93032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,13.4079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,13.92905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,13.40283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,13.21418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,14.13525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,13.33607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,12.68686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,13.11962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,13.40291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,13.20025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,12.82233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,14.75155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,13.62868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,13.29376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,13.18676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,12.96301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,12.7371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,13.1372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,12.81741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,12.85326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,13.16751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,12.39569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,13.02327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,12.83307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,13.01193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,12.92052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,12.52336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,12.83792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,12.91659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,12.72289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,12.70502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,12.91583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,12.86568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,12.2562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,12.25632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,12.43383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,12.75883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,12.39239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,12.14719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,12.3416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,12.07793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,11.78601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,11.74769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,12.04288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,12.02957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,12.0182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,12.44517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,11.88954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,12.23469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,12.30032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,11.62507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,11.38292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,12.11172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,12.24897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,11.80252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,11.73855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,12.72104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,11.46631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,11.82308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,11.73531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,11.65703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,11.98717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,11.75031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,12.03596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,11.39192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,11.71001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,11.52992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,10.89713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,11.37876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,11.6562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,11.21401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,11.46056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,11.06814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,11.04889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,11.42032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,11.14505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,11.48565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,11.4436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,10.63299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,12.03691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,11.30563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,11.26612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,11.32307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,11.2229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,10.90947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,10.99987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,10.84847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,11.19274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,10.71541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,10.7777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,10.68143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,10.90681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,10.70092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,10.91888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,10.63444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,10.33691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,10.68829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,10.88163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,10.78384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,10.76286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,10.4977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,10.51086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,10.69694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,11.13425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,10.61721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,10.52031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,10.21423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,10.3166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,10.29525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,10.67191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,10.52376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,10.91745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,10.24418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,10.32403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,10.34849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,10.38677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,10.58858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,10.33133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,10.39411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,9.796899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,10.09928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,9.658969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,11.40306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,10.14433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,10.08649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,9.623228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,9.911184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,10.31942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,10.60461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,10.03455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,9.698976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,9.817768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,9.768294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,10.15154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,9.837825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,9.251779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,9.667807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,9.518216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,9.384011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,9.756458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,9.523209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,10.01499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,9.636854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,9.397335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,10.13669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,9.516259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,9.39441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,9.349732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,9.311553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,9.277296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,9.892979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,9.114332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,9.171549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,9.374231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,9.571144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,9.237644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,9.404781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,9.26399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,9.321169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,9.12442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,10.00021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,9.33094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,9.020838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,9.146537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,8.622266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,9.013686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,8.949544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,8.80799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,8.608411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,9.20426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,9.001715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.91135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,8.425808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,8.808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,8.968497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,8.444995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.992034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,9.027336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,9.063235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,8.900609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.91798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,8.6612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,8.81168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,8.167063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,8.595073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,8.217445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,8.567358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,8.572395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,8.304917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,8.276681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,8.847046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,8.415606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,8.521893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,8.631109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,8.378996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,8.589645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,8.519211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,8.323827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,8.440107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,8.411665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,8.605551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,8.559639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,8.63411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,8.333304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,8.344839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,8.210409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.894059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,8.07682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,8.139595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,8.050497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,8.017047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,8.348588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.813706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,8.016471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,8.18395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,8.18105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.880356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.975845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,8.077334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,8.218716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.838538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.780334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,8.097615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,8.021754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,8.000175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,7.629537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,7.955946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,7.893848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,8.033691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,7.76972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,7.768425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,7.663995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,7.552906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,7.390177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.883556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,7.469628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,7.670165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,8.003319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,7.517513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.898794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.92191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.955918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,7.202012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,7.919733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,7.804366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,7.213905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,7.046293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,7.648749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,7.367097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,7.413917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,7.102956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,7.539366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.94098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,7.080938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,8.009485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,6.62462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,7.291751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.948375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,7.60195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,7.285582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,7.849152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,7.45595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,7.080594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,7.642442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,7.375978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,7.021572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,7.254801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,7.23794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,7.126831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,7.514388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.606476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,7.102032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,7.117437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.911523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,110.4946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(4045373);

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
   
   TH1D *VH_tagFirst_H_mass__231 = new TH1D("VH_tagFirst_H_mass__231","",1000,0,2000);
   VH_tagFirst_H_mass__231->SetBinContent(1000,81);
   VH_tagFirst_H_mass__231->SetBinContent(1001,41830);
   VH_tagFirst_H_mass__231->SetEntries(3002745);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__231->SetLineColor(ci);
   VH_tagFirst_H_mass__231->SetLineWidth(2);
   VH_tagFirst_H_mass__231->SetMarkerStyle(20);
   VH_tagFirst_H_mass__231->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__231->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__231->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__231->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__231->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__231->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__231->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__231->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__231->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__231->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__231->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1231[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1231[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6419.913, 12886.71,
   12783.63, 12752.84, 12512.13, 12367.62, 12404.67, 12449.6, 12238.26, 12278.89, 12143.12, 12056.57, 12031.81, 11789.65, 11742.62, 11768.39, 11610.18, 11531.2,
   11632.72, 11599.09, 11484.62, 11394.28, 11292.32, 11122.68, 10992.4, 11047.02, 10924.77, 10880.99, 10758.15, 10638.47, 5325.1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 46.35387 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1231[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1231[1000] = { 0, 0, 0, 0, 0.07404959, 0, 0.0785996, 0.08371779, 0.1080575, 0.699554, 0.7828569, 3.281627, 8.893762, 15.64583, 24.07276, 31.48833, 39.38487,
   47.08496, 55.09272, 61.99972, 68.59765, 73.87491, 78.64067, 82.25208, 85.70869, 87.72603, 89.63074, 91.30833, 92.66079, 93.46986, 94.34696, 93.92281, 94.2992,
   94.72846, 93.94008, 94.18059, 94.77496, 93.86666, 93.32342, 93.7914, 93.94036, 92.18467, 91.45224, 91.64198, 91.15148, 90.91982, 89.92714, 89.4558, 89.71514,
   88.9758, 89.02275, 88.09642, 87.62886, 87.85184, 87.38441, 86.60917, 87.57547, 86.18659, 85.77747, 86.39867, 85.43762, 85.34761, 84.90633, 84.4211, 84.86277,
   84.36361, 84.38398, 83.88149, 83.52543, 83.07772, 82.89118, 83.95831, 82.75006, 81.94231, 82.03947, 82.01878, 80.94389, 81.13841, 79.98728, 80.33149, 79.81787,
   79.85076, 79.43873, 78.84863, 78.40812, 77.75208, 77.88026, 77.97077, 78.33092, 78.18941, 77.43388, 76.54914, 76.75856, 75.83783, 75.55237, 75.50581, 75.45063,
   75.92917, 74.83983, 74.75433, 74.39587, 73.75222, 73.52675, 73.82852, 73.84893, 75.14133, 72.78274, 72.72805, 72.16085, 72.00706, 72.4413, 72.54087, 71.49477,
   73.16674, 72.40041, 71.89442, 70.72196, 70.5919, 77.12471, 70.58679, 71.01708, 70.33715, 69.96476, 70.08882, 71.03767, 69.61732, 69.08504, 68.59307, 72.28427,
   68.3501, 69.18868, 68.82929, 67.93469, 68.07798, 69.49634, 67.66133, 67.45571, 67.3623, 68.03885, 67.35748, 67.18471, 66.74581, 67.04119, 67.84042, 66.45117,
   66.50047, 66.32833, 66.82717, 66.12451, 66.16101, 67.42452, 66.17905, 64.68841, 65.5045, 66.43639, 65.2597, 65.09426, 65.09725, 64.32578, 64.57599, 65.22504,
   63.77996, 64.36879, 64.21233, 63.92196, 63.88933, 63.51516, 63.42945, 62.89378, 62.97605, 63.27462, 62.86019, 63.66717, 61.97228, 62.47648, 62.86116, 62.16856,
   61.82564, 61.72597, 61.46344, 60.95823, 61.52472, 61.58099, 60.98864, 61.24151, 61.0505, 60.76191, 60.93287, 60.05467, 60.50402, 60.17111, 60.14271, 60.37985,
   59.64234, 59.51382, 59.63872, 59.41253, 59.30191, 58.97746, 58.99437, 58.76968, 58.53366, 58.59076, 57.97001, 58.03155, 57.54793, 58.00585, 57.90102, 58.21119,
   58.02144, 57.2376, 57.24293, 57.00841, 57.05616, 56.87345, 56.89516, 57.16504, 55.80893, 56.6869, 56.29673, 56.25223, 56.5875, 57.57811, 66.73345, 55.62814,
   55.94035, 54.91278, 55.47219, 55.0249, 54.65245, 55.48001, 54.61107, 54.88409, 54.29749, 54.43794, 53.47278, 53.80226, 54.22797, 53.32876, 53.63342, 53.57607,
   53.17048, 53.78876, 52.99611, 53.04365, 52.44181, 52.2579, 52.73547, 52.38421, 51.84808, 52.96633, 52.4074, 51.51944, 51.71234, 53.46283, 51.55228, 51.30921,
   51.81774, 51.20453, 51.07092, 50.72735, 50.09353, 51.36307, 50.40151, 50.35275, 50.3266, 51.33111, 50.12871, 50.84821, 49.61945, 49.0709, 49.5064, 49.58732,
   59.1762, 49.32545, 49.00333, 48.26801, 48.66149, 48.41701, 49.78744, 48.593, 48.22641, 49.17968, 47.51357, 47.55603, 47.74793, 47.64551, 47.30046, 47.04161,
   47.13451, 46.64869, 47.08107, 46.4378, 46.47562, 46.85813, 45.49504, 45.72597, 46.18013, 45.44671, 45.57564, 45.54901, 46.87425, 44.80862, 45.09804, 44.76516,
   44.934, 44.74895, 44.43339, 44.3525, 44.86378, 44.13837, 44.60253, 44.18973, 44.09718, 44.07893, 43.93471, 43.33762, 43.42747, 42.9414, 43.80398, 42.90882,
   43.07639, 42.59926, 43.41946, 42.26671, 42.19686, 42.15858, 42.55935, 42.00526, 41.79798, 42.6813, 41.41459, 41.77164, 40.97666, 41.33166, 40.79795, 41.46141,
   39.93461, 41.06636, 40.4541, 40.27984, 40.31169, 40.36157, 39.94109, 39.8424, 40.16738, 40.04863, 39.8176, 39.83436, 39.69859, 41.38276, 39.46175, 39.05307,
   38.90272, 39.00273, 38.75842, 40.03629, 38.84395, 38.28349, 38.20968, 38.0328, 39.45256, 38.26111, 38.29314, 37.69362, 37.43924, 37.49051, 37.25002, 37.6166,
   39.25068, 37.21328, 37.13901, 36.66051, 36.92355, 36.53736, 36.91602, 36.18463, 35.95908, 36.42266, 35.86586, 35.88942, 36.14967, 35.6756, 61.36504, 35.39779,
   35.37607, 35.40341, 34.9094, 35.23402, 35.03768, 34.61131, 34.93665, 35.53981, 34.5937, 34.54692, 34.55629, 44.75143, 38.23105, 33.77224, 33.90387, 33.45057,
   34.12918, 33.7035, 33.48079, 33.58004, 33.94647, 33.69047, 32.80771, 32.75894, 32.87113, 33.13207, 33.06085, 33.11984, 32.32642, 32.6105, 32.36622, 32.31657,
   32.45985, 32.05696, 32.23771, 32.34022, 31.99451, 31.69419, 31.06868, 31.55554, 33.8187, 31.27164, 31.53364, 31.2497, 30.45792, 30.43157, 31.14034, 30.42512,
   31.01054, 30.89048, 30.14436, 30.9583, 30.83339, 29.95573, 29.85002, 29.84056, 29.83842, 30.10155, 29.7731, 29.68287, 28.96477, 29.46896, 29.46692, 29.37579,
   29.34646, 29.41593, 29.15736, 28.77947, 28.85175, 29.09737, 28.19626, 28.54744, 28.86855, 27.71963, 29.08113, 28.23385, 28.32407, 27.96368, 28.19705, 28.14807,
   28.0965, 27.57852, 28.31372, 27.0831, 27.31571, 27.30604, 27.22055, 27.41149, 27.16779, 26.59845, 26.85498, 27.07674, 26.70655, 26.93858, 26.8454, 26.51684,
   26.51213, 26.59524, 26.81719, 26.10448, 26.10837, 26.33917, 26.44858, 26.07118, 26.03972, 25.77315, 25.88173, 26.02727, 25.80907, 25.94313, 26.14685, 25.90291,
   25.41365, 25.16116, 25.21291, 24.92847, 25.25302, 24.73398, 25.34889, 24.53735, 25.6383, 24.51146, 24.50612, 24.43872, 24.69242, 24.42236, 24.11402, 24.61533,
   23.95184, 24.88874, 23.92555, 23.68574, 23.55813, 24.03756, 23.25865, 23.96479, 23.62277, 23.94395, 22.97361, 23.25116, 23.44669, 23.35417, 23.15918, 22.99421,
   23.02483, 22.87145, 22.88525, 22.86585, 23.05971, 22.65433, 22.97186, 23.37798, 22.86023, 23.64377, 22.52527, 22.53577, 22.23832, 22.21373, 22.42421, 22.44214,
   22.03493, 21.81263, 22.20761, 21.87693, 21.9236, 21.80499, 21.84023, 21.31734, 22.33427, 21.46937, 20.96982, 21.32022, 21.35478, 21.45401, 21.5541, 20.85509,
   21.55904, 21.3303, 20.77912, 21.05821, 20.53624, 21.02543, 20.39323, 20.47318, 20.87352, 20.58703, 20.88885, 21.0755, 22.03532, 20.30884, 20.04548, 19.99779,
   19.86315, 19.64542, 19.76491, 19.63102, 20.12277, 19.69469, 19.83897, 20.11479, 19.6355, 19.89712, 19.69031, 19.73455, 19.43682, 19.37132, 19.09217, 19.67577,
   19.44313, 19.61823, 19.793, 19.33157, 19.23169, 19.0494, 19.27521, 19.6712, 18.5959, 18.8458, 19.07679, 18.78175, 19.1183, 18.58178, 18.82899, 18.33332,
   18.90729, 18.18834, 18.45075, 18.36047, 18.32012, 18.33473, 18.36279, 17.81748, 17.67571, 18.14143, 17.77443, 17.65425, 17.79185, 18.07239, 17.99054, 17.83961,
   17.53627, 17.8559, 17.72907, 17.39784, 17.55102, 17.27534, 17.334, 17.2649, 17.25074, 17.10728, 18.02911, 17.24815, 16.9863, 17.07384, 17.12802, 16.91779,
   16.94779, 17.471, 16.54103, 16.71451, 17.12292, 16.67371, 16.96238, 16.4605, 16.61997, 16.23697, 16.66094, 16.35388, 16.26987, 15.92552, 16.11787, 16.37661,
   16.23325, 16.07217, 16.64541, 16.10906, 16.57105, 15.98814, 15.98266, 15.81534, 15.47132, 15.90557, 15.72476, 15.74699, 15.5881, 15.94915, 15.55251, 15.6215,
   15.95551, 15.85946, 15.51692, 15.85495, 15.20971, 15.45896, 15.34447, 15.16437, 15.59761, 15.21027, 15.08353, 14.99198, 15.46458, 14.89953, 14.7654, 15.05415,
   14.82997, 14.95724, 14.72824, 14.79332, 14.44319, 14.69165, 14.28075, 14.62008, 14.63125, 14.53131, 14.83651, 14.25673, 14.89753, 14.41652, 14.74184, 14.18251,
   14.13541, 14.58419, 14.01815, 14.21745, 14.2656, 14.58656, 14.33036, 14.56296, 14.12414, 14.58352, 14.17547, 13.91268, 14.43698, 14.24513, 14.01109, 13.98467,
   13.37109, 13.77624, 13.79772, 13.37458, 13.93032, 13.4079, 13.92905, 13.40283, 13.21418, 14.13525, 13.33607, 12.68686, 13.11962, 13.40291, 13.20025, 12.82233,
   14.75155, 13.62868, 13.29376, 13.18676, 12.96301, 12.7371, 13.1372, 12.81741, 12.85326, 13.16751, 12.39569, 13.02327, 12.83307, 13.01193, 12.92052, 12.52336,
   12.83792, 12.91659, 12.72289, 12.70502, 12.91583, 12.86568, 12.2562, 12.25632, 12.43383, 12.75883, 12.39239, 12.14719, 12.3416, 12.07793, 11.78601, 11.74769,
   12.04288, 12.02957, 12.0182, 12.44517, 11.88954, 12.23469, 12.30032, 11.62507, 11.38292, 12.11172, 12.24897, 11.80252, 11.73855, 12.72104, 11.46631, 11.82308,
   11.73531, 11.65703, 11.98717, 11.75031, 12.03596, 11.39192, 11.71001, 11.52992, 10.89713, 11.37876, 11.6562, 11.21401, 11.46056, 11.06814, 11.04889, 11.42032,
   11.14505, 11.48565, 11.4436, 10.63299, 12.03691, 11.30563, 11.26612, 11.32307, 11.2229, 10.90947, 10.99987, 10.84847, 11.19274, 10.71541, 10.7777, 10.68143,
   10.90681, 10.70092, 10.91888, 10.63444, 10.33691, 10.68829, 10.88163, 10.78384, 10.76286, 10.4977, 10.51086, 10.69694, 11.13425, 10.61721, 10.52031, 10.21423,
   10.3166, 10.29525, 10.67191, 10.52376, 10.91745, 10.24418, 10.32403, 10.34849, 10.38677, 10.58858, 10.33133, 10.39411, 9.796899, 10.09928, 9.658969, 11.40306,
   10.14433, 10.08649, 9.623228, 9.911184, 10.31942, 10.60461, 10.03455, 9.698976, 9.817768, 9.768294, 10.15154, 9.837825, 9.251779, 9.667807, 9.518216, 9.384011,
   9.756458, 9.523209, 10.01499, 9.636854, 9.397335, 10.13669, 9.516259, 9.39441, 9.349732, 9.311553, 9.277296, 9.892979, 9.114332, 9.171549, 9.374231, 9.571144,
   9.237644, 9.404781, 9.26399, 9.321169, 9.12442, 10.00021, 9.33094, 9.020838, 9.146537, 8.622266, 9.013686, 8.949544, 8.80799, 8.608411, 9.20426, 9.001715,
   8.91135, 8.425808, 8.808, 8.968497, 8.444995, 8.992034, 9.027336, 9.063235, 8.900609, 8.91798, 8.6612, 8.81168, 8.167063, 8.595073, 8.217445, 8.567358,
   8.572395, 8.304917, 8.276681, 8.847046, 8.415606, 8.521893, 8.631109, 8.378996, 8.589645, 8.519211, 8.323827, 8.440107, 8.411665, 8.605551, 8.559639, 8.63411,
   8.333304, 8.344839, 8.210409, 7.894059, 8.07682, 8.139595, 8.050497, 8.017047, 8.348588, 7.813706, 8.016471, 8.18395, 8.18105, 7.880356, 7.975845, 8.077334,
   8.218716, 7.838538, 7.780334, 8.097615, 8.021754, 8.000175, 7.629537, 7.955946, 7.893848, 8.033691, 7.76972, 7.768425, 7.663995, 7.552906, 7.390177, 7.883556,
   7.469628, 7.670165, 8.003319, 7.517513, 7.898794, 7.92191, 7.955918, 7.202012, 7.919733, 7.804366, 7.213905, 7.046293, 7.648749, 7.367097, 7.413917, 7.102956,
   7.539366, 6.94098, 7.080938, 8.009485, 6.62462, 7.291751, 6.948375, 7.60195, 7.285582, 7.849152, 7.45595, 7.080594, 7.642442, 7.375978, 7.021572, 7.254801,
   7.23794, 7.126831, 7.514388, 6.606476, 7.102032, 7.117437, 6.911523 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1231,Graph_from_VH_tagFirst_2b1c_H_mass_fy1231,Graph_from_VH_tagFirst_2b1c_H_mass_fex1231,Graph_from_VH_tagFirst_2b1c_H_mass_fey1231);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->SetMinimum(-1401.895);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->SetMaximum(14283.55);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1231);
   
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",1000,0,2000);
   data_mc_ratio__232->SetBinContent(1000,1.747427);
   data_mc_ratio__232->SetBinContent(1001,1.937135);
   data_mc_ratio__232->SetBinError(1000,0.1941586);
   data_mc_ratio__232->SetBinError(1001,0.0137099);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(28.92052);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__232->GetXaxis()->SetRange(1,150);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1232[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1232[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1232[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01393411, 0.006961834,
   0.006960134, 0.006980624, 0.007040882, 0.007085345, 0.007082158, 0.007019055, 0.007076918, 0.007132198, 0.007097564, 0.007114584, 0.007180856, 0.007246835, 0.007268191, 0.007214777, 0.007271302, 0.007359405,
   0.007252267, 0.007275054, 0.007303809, 0.007330471, 0.007357009, 0.007452447, 0.007637847, 0.007490714, 0.007500595, 0.007539705, 0.007623877, 0.007608604, 0.01523697, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1491035 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0.8210758);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(1.178924);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->SetSelected(H_mass_tagFirst_SR_18);
}
