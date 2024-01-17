#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_16/H_mass_tagFirst_SR_16
//=========  (Mon Jan  8 11:15:25 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-40.99522,315.7258,40964.22);
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
   st->SetMaximum(36863.7);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",1000,0,2000);
   st_stack_16->SetMinimum(0.01);
   st_stack_16->SetMaximum(36863.7);
   st_stack_16->SetDirectory(nullptr);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->SetLineWidth(0);
   st_stack_16->GetXaxis()->SetRange(1,150);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8295.998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,16588.66);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,16577.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,16534.24);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,16380.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,16426.13);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,16489.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,16303.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,16232.49);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,16102.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,16058.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,15951.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,16002.94);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,15833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,15755.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,15783.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,15608.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,15424.25);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,15397.23);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,15238.76);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,15109.18);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,15121.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,14978.85);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,14911.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,14795.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,14655.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,14559.37);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,14476.07);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,14259.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,14221.34);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,7095.305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,30.73003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19677.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5236003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.9795665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.253749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.900062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.61275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,25.24166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.6007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,49.84939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,57.14684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,63.45617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,69.32021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,73.85735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,77.47516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,80.46683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,82.5223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,83.74578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,84.25167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,84.8911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,85.17724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,84.79497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.64368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.2118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,83.8333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.74659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,82.901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.73879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,82.32273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,81.74707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,81.32172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,81.00674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,80.79579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,80.27666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,79.90525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,79.98498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,79.42259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,78.87531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,78.6264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.42739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.36969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.34345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.24103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,77.87664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.98482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.13496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.69336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.5238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.21197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.10715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.84983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.9737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.5639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,76.37748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.44296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.01948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.56915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.50291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.11338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.79333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.82357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.47007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.30145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.01309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.66221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.41989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.20955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.65886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.56258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.3649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.89645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.58595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.63476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,70.8681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.91161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.61328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.45781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.74309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.79123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.9227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.51768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.34592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.60863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.84797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.88181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.42857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.07106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.93601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.41646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.60733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.19447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.23526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.08728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.37654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.51167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.09404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.40544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.07226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,66.03906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.50657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.32635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.24552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.50133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,65.2245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,65.03824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,65.11197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.70861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.95705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.53255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,64.57501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,64.31978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,64.1843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,64.19925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.10951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,64.08064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.62336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,63.3989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.5781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.34482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.43888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,63.3091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.47871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.74253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.77311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.48858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.59488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.41285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.19063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,61.9156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,62.03946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.79371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.60598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.1044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.22207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,61.07972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,61.15262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.96628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.65068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.39361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.27547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.27434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.4628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.87616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.82234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.80171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.81317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,59.31493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.62955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,59.17147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.48641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.40198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,58.34444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.23391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,58.30096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,58.0323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.59485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.80628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.49241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.39338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.95583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,57.22834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.6324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.48213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.80641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.38619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.20844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.81933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.88805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.68902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.59171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.30989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.28882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.41265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.5676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.68303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.76569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.47834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.12366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.06665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.43802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.40723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.63518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.49955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.11899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.03247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.90177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.9911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.83695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.12782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,51.86551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.02517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.58726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.53009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.12388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.04633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,50.96705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.0329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.03425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.81352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.56337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.46296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.02644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.25609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,49.75305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.6924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.60543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.45321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.56949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.46486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,48.73282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,48.97972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.52705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,47.94447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,48.23379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.30693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,47.88725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,47.8715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,47.5987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,47.09057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,47.12694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,47.05853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,46.94333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,46.96231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.36746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,46.95355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.41474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,46.19568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.76638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.09765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.37534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.6329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,45.2301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,45.01745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,45.38893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,45.15882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,44.75022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,44.8573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.51527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.59987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.42125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,44.23726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,44.0665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.89507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.58324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.42096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.68691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,43.1359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,43.08343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,43.08661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.78811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.47945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.83454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,42.62923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.77825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,42.0122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.87166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.89457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.50833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.3694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,41.26821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.31469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.9146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,40.94307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.81564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.50379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.50549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.08365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,40.06826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,39.94491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.31382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,40.13662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,40.02718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.4181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.52055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.6089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,39.10211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.34849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.84536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.05125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.49798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.33384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.5709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.23896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.12227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,38.00523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.01064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.75009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.59727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.77006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.26401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.09811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.1018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.21064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,36.85343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.03154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,36.98153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.54715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.24963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.37044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.42317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.09616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.08286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,35.77382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.66445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.44662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.59905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.55666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.19046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.44275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,34.85385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.33041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.07927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,34.84008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.37068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.6863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.35672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.38464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,33.8786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.47223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.45234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.78947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,33.87051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.85634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.64921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.69806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.26614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,33.18982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.05739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.11746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.16916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,32.89944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.82853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.80973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.73026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.36384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.41039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.27477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.04032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,31.90527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.81707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.78474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.55968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.47705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.52057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,31.08264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.15532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,31.22125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.84135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.34613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,30.8369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,30.91903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.4927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.55108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,30.25123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.18773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.34398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,30.1741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,29.79695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.09222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,30.19227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.77164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.46619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.63088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.27951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.25609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.30525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,29.08693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.33798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,28.83607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,28.89069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.79564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.62854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.55423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.70744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.48453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,28.0725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.8642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,27.95996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,27.90353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,27.87649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.79524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.4219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,28.01629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.40536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.42036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.52764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,27.17682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,27.26244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.29761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,26.99971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.19699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.62908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.75234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.59818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.42756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,26.90817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.56981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.4949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.34443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,26.17478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.34443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,26.23494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.14596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,26.08034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,25.856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.72578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.72844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.59222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.28778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.16552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,25.16824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,25.07001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,24.97414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.1873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.70373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.28236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.47797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.69263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.78682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.55903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.28682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.55066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,24.00295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.23031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,24.21899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.85975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.34882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.30374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.61722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.76765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.65781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.88846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.53582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.41905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.48334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.3751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.45414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,22.95795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.73897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.44163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,22.88619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,23.15415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.65744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,23.03544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.81119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.59382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.52699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.37434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.59079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.37128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.35902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,21.97562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,21.92567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,21.9881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.84424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.81284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,21.89438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.85051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.32989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.49952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.42607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.53456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,21.13621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,20.99304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,21.05498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,21.15242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.23972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,21.01262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.78634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.63743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.73682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.5242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,20.99304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.7236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.48409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.29585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.4506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.35991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.50415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,20.17391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,20.14671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,20.23497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,20.07855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.70644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.50719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.82434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.87268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.68208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.95872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.7134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.20264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.65769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.50016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.45793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,19.16334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.82414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.26323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.61913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,19.11679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,19.12754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.80957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.4713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.24543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.74021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.80593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.69994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.7804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.53797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.50466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.50836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.4713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.26232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,18.12293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,18.13427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.49355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.91754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,18.06611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.74843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.33723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.47994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.82165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.78315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.24355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.40134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.61664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.87158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.31052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.61664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.15141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.34611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.47602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.26691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.29071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.9221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.19929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.47994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.26691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.81238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.90589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.70605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.63616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.73474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.48302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.61142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.79199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.1257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.45805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.32004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.19779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.26114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,16.1342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.27378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.93759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.19779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.5204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.1172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,16.03192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.89453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,16.07462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,16.16391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.82105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,15.98482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.6205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.77332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.80805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.58096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.30132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.27442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.48831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.28787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.6205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,15.0256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.58096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,15.0256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.29236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.31475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,15.15278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.83278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,15.1573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.22048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.81428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.74007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.79576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.74007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.61867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.81428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.43941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.74472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.74937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.51988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.6046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.21939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.24347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.46786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.35372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.40139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.40139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.20974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,14.01059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.98121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.91241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.98121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.83336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,14.07891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,14.06917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.95176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.8284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.92226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.75386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.83831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.69393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,14.02526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.5985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.2047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.52268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.4719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.43114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.94257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.3081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.55811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.35951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.50747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.90013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,13.03754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.97959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.13705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,13.13705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.16831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.85756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,13.04805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.16831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.68583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.66961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.63169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,13.14226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.84156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.70742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.94786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.52817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.44584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.41827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.73436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.48982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.11657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.41275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.50079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.00596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.79879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.45134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.41275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.88815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,12.1561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.96859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.45685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.89391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.07691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.83615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.87661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,12.08825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.90543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.69048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.79554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.9514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.87084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.20554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.82456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.52516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.68462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.59039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.67288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.51921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.2787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.41761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.48942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.71391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.78973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.63171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.71391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.18104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.24827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.08871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.48942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.32721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,11.1319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.3393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.4116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.09489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,11.08253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,11.04536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.32721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,11.06396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.87653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.87653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.87023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.7625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.9331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.83233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.98313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.47855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.88283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.92055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.60856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.55675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.76887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.49162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.46546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.38657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.62793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.63437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.43923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.6021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.65369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.45891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.15974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.42609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.15974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.16648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.17995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.26043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.92081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.45891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.774652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.886206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.05803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.0444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.30043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.989658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.17995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.21356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.26711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.927716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.927716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.92081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.781661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.697214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.07846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.830587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.92081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.417531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.711339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.569145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.711339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.263435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.263435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.446597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.569145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.241212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.482805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.854885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.597752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.263435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.315084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.359127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.211497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.151779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.446597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.189148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.000749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.129284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.993131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.015966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.189148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.218935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.901206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.114256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.714446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.962594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.099204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.000749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.931952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.129284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.908902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.263435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.738009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.893502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.901206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.698702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.808321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.603631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.722308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.539663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.847141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.682929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.753683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.682929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.49137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.738009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.547685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.262274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.643371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.42655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.714446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.459022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.253974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.611594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.547685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.229025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.459022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.442802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.914856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.21235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.23735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.270565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.162121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.043701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.270565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.23735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.187274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.060725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.009545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.914856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.094665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.668555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.730866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.000983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.533297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.792679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.120027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.68641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.533297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.596717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.854005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.605734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.766248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.659612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.386292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.596717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.940792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.792679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.460156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.404827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.713114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.677488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.68641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.2363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.560542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.404827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.748577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.578651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.188786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.460156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.505953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.623736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.073451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.092804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.946343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.975881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.112104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.404827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.083134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.650659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.339749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.169693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.330405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.121734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.112104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.292909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.26466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.20783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.092804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.034585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.083134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.946343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.160127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.283504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.063755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.20783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.063755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.846963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.005295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,7.005295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.975881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.836945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.71557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.169693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.906763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.092804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.75627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.786636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.59196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.796728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.380624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.725768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.956203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.956203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.956203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.560693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.71557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.465987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.602349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.139758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.369873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.487152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.434109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.654052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.581554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.571132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.348317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.476578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.487152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.348317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.602349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.348317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.455378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.315844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.654052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.261349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.402071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.294103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.348317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.969962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.061112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.865726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.004306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.027092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.359104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.228423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.239418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.380624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.900676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.049793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.239418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.391356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.004306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.01571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.128585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.889049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.128585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.038454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.049793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.01571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.283204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.304983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.981432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.807009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.923861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.91228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.830566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.771491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.93542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.55362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.818799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.735754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.747691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.675692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.504033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.687755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.614988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.969962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.723792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.711805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.723792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.889049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.651489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.830566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.759604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.339697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.390795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.830566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.326845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.639348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.675692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.441414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.528882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.699793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.541265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.403494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.466548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.103425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.249077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.541265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.541265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.627181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.170139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.675692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.651489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.85567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.663603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.062974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.236003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,85.35488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(9235223);

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
   
   TH1D *VH_tagFirst_H_mass__31 = new TH1D("VH_tagFirst_H_mass__31","",1000,0,2000);
   VH_tagFirst_H_mass__31->SetBinContent(1000,25);
   VH_tagFirst_H_mass__31->SetBinContent(1001,23051);
   VH_tagFirst_H_mass__31->SetEntries(3572384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__31->SetLineColor(ci);
   VH_tagFirst_H_mass__31->SetLineWidth(2);
   VH_tagFirst_H_mass__31->SetMarkerStyle(20);
   VH_tagFirst_H_mass__31->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__31->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__31->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__31->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__31->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__31->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__31->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__31->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__31->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__31->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__31->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1031[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1031[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8295.998, 16588.66,
   16577.56, 16534.24, 16380.59, 16426.13, 16489.44, 16303.58, 16232.49, 16102.17, 16058.48, 15951.48, 16002.94, 15833, 15755.99, 15783.02, 15608.63, 15424.25,
   15397.23, 15238.76, 15109.18, 15121.4, 14978.85, 14911.1, 14795.58, 14655.63, 14559.37, 14476.07, 14259.1, 14221.34, 7095.305, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 30.73003 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1031[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1031[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5236003, 0.9795665, 4.253749, 9.900062, 17.61275, 25.24166, 33.332, 41.6007,
   49.84939, 57.14684, 63.45617, 69.32021, 73.85735, 77.47516, 80.46683, 82.5223, 83.74578, 84.25167, 84.8911, 85.17724, 84.79497, 84.64368, 84.2118, 83.8333,
   83.74659, 82.901, 82.73879, 82.32273, 81.74707, 81.32172, 81.00674, 80.79579, 80.27666, 79.90525, 79.98498, 79.42259, 78.87531, 78.6264, 78.42739, 78.36969,
   78.34345, 78.24103, 77.87664, 77.98482, 78.13496, 77.69336, 77.5238, 77.21197, 77.10715, 76.84983, 76.9737, 76.5639, 76.37748, 76.44296, 76.01948, 75.56915,
   75.50291, 75.11338, 74.79333, 74.82357, 74.47007, 74.30145, 74.01309, 73.66221, 73.41989, 73.20955, 72.65886, 72.56258, 72.3649, 71.89645, 71.58595, 71.63476,
   70.8681, 70.91161, 70.61328, 70.45781, 69.74309, 69.79123, 69.9227, 69.51768, 69.34592, 68.60863, 68.84797, 68.88181, 68.42857, 68.07106, 67.93601, 67.41646,
   67.60733, 67.584, 67.19447, 67.23526, 67.08728, 66.37654, 66.51167, 66.09404, 66.40544, 66.07226, 66.03906, 65.50657, 65.32635, 65.24552, 65.50133, 65.2245,
   65.03824, 65.11197, 64.70861, 64.95705, 64.53255, 64.57501, 64.31978, 64.1843, 64.19925, 64.10951, 64.08064, 63.62336, 63.3989, 63.5781, 63.34482, 63.43888,
   63.3091, 62.47871, 62.74253, 62.77311, 62.48858, 62.59488, 62.41285, 62.19063, 61.9156, 62.03946, 61.79371, 61.60598, 61.1044, 61.22207, 61.07972, 61.15262,
   60.96628, 60.65068, 60.39361, 60.27547, 60.27434, 60.4628, 59.87616, 59.82234, 59.80171, 59.81317, 59.31493, 59.62955, 58.887, 59.17147, 58.48641, 58.40198,
   58.34444, 58.23391, 58.30096, 58.0323, 57.59485, 57.80628, 57.49241, 57.39338, 56.95583, 57.22834, 56.6324, 56.48213, 56.80641, 56.38619, 56.20844, 55.81933,
   55.88805, 55.68902, 55.59171, 55.30989, 55.28882, 55.41265, 54.5676, 54.68303, 54.76569, 54.47834, 54.12366, 54.06665, 53.43802, 53.40723, 53.63518, 53.49955,
   53.11899, 53.03247, 52.90177, 52.9911, 52.83695, 52.12782, 51.86551, 52.02517, 51.58726, 51.53009, 52.12388, 51.04633, 50.96705, 51.0329, 51.03425, 50.81352,
   50.56337, 50.46296, 50.02644, 50.25609, 49.75305, 49.6924, 49.60543, 49.45321, 49.56949, 48.46486, 48.73282, 48.97972, 48.52705, 47.94447, 48.23379, 47.30693,
   47.88725, 47.8715, 47.5987, 47.09057, 47.12694, 47.05853, 46.94333, 46.96231, 46.36746, 46.95355, 46.41474, 46.19568, 45.76638, 46.09765, 45.37534, 45.6329,
   45.2301, 45.01745, 45.38893, 45.15882, 44.75022, 44.8573, 44.51527, 44.59987, 44.42125, 44.23726, 44.0665, 43.89507, 43.58324, 43.42096, 43.68691, 43.1359,
   43.08343, 43.08661, 42.78811, 42.47945, 42.83454, 42.62923, 41.77825, 42.0122, 41.87166, 41.89457, 41.50833, 41.3694, 41.26821, 41.31469, 40.9146, 40.94307,
   40.81564, 40.50379, 40.50549, 40.08365, 40.06826, 39.94491, 40.31382, 40.13662, 40.02718, 39.4181, 39.52055, 39.6089, 39.10211, 39.34849, 38.84536, 39.05125,
   38.49798, 38.33384, 38.5709, 38.23896, 38.12227, 38.00523, 38.01064, 37.75009, 37.59727, 37.77006, 37.26401, 37.09811, 37.1018, 37.21064, 36.85343, 37.03154,
   36.98153, 36.54715, 36.24963, 36.37044, 36.42317, 36.09616, 36.08286, 35.77382, 35.66445, 35.44662, 35.59905, 35.55666, 35.19046, 35.44275, 34.85385, 35.33041,
   35.07927, 34.84008, 34.37068, 34.6863, 34.35672, 34.38464, 33.8786, 34.47223, 34.45234, 33.78947, 33.87051, 33.85634, 33.64921, 33.69806, 33.26614, 33.18982,
   33.05739, 33.11746, 33.16916, 32.89944, 32.82853, 32.80973, 32.73026, 32.36384, 32.41039, 32.27477, 32.04032, 31.90527, 31.81707, 31.78474, 31.55968, 31.47705,
   31.52057, 31.08264, 31.15532, 31.22125, 30.84135, 31.34613, 30.8369, 30.91903, 30.4927, 30.55108, 30.25123, 30.18773, 30.34398, 30.1741, 29.79695, 30.09222,
   30.19227, 29.77164, 29.46619, 29.63088, 29.27951, 29.25609, 29.30525, 29.08693, 29.33798, 28.83607, 28.89069, 28.79564, 28.62854, 28.55423, 28.70744, 28.48453,
   28.0725, 27.8642, 27.95996, 27.90353, 27.87649, 27.79524, 28.4219, 28.01629, 27.40536, 27.42036, 27.52764, 27.17682, 27.26244, 27.29761, 26.99971, 27.19699,
   26.62908, 26.75234, 26.59818, 26.42756, 26.90817, 26.56981, 26.4949, 26.34443, 26.17478, 26.34443, 26.23494, 26.14596, 26.08034, 25.856, 25.72578, 25.72844,
   25.59222, 25.28778, 25.16552, 25.16824, 25.07001, 24.97414, 25.1873, 24.70373, 25.28236, 24.47797, 24.69263, 24.737, 24.78682, 24.55903, 24.28682, 24.55066,
   24.00295, 24.23031, 24.21899, 23.85975, 24.34882, 24.30374, 23.61722, 23.76765, 23.65781, 23.88846, 23.53582, 23.41905, 23.48334, 23.3751, 23.45414, 22.95795,
   22.73897, 22.44163, 22.88619, 23.15415, 22.65744, 23.03544, 22.81119, 22.59382, 22.52699, 22.37434, 22.59079, 22.37128, 22.745, 22.35902, 21.97562, 21.92567,
   21.9881, 21.84424, 21.81284, 21.89438, 21.85051, 21.32989, 21.49952, 21.42607, 21.53456, 21.56, 21.13621, 20.99304, 21.05498, 21.15242, 21.23972, 21.01262,
   20.78634, 20.63743, 20.73682, 20.5242, 20.99304, 20.7236, 20.48409, 20.29585, 20.4506, 20.35991, 20.50415, 20.17391, 20.14671, 20.23497, 20.07855, 19.70644,
   19.50719, 19.82434, 19.87268, 19.68208, 19.95872, 19.7134, 19.20264, 19.65769, 19.50016, 19.45793, 19.16334, 18.82414, 19.26323, 18.61913, 19.11679, 19.12754,
   18.80957, 18.4713, 19.24543, 18.74021, 18.80593, 18.69994, 18.7804, 18.53797, 18.50466, 18.50836, 18.4713, 18.26232, 18.12293, 18.13427, 18.49355, 17.91754,
   18.06611, 17.74843, 18.33723, 17.47994, 17.82165, 17.78315, 18.24355, 17.40134, 17.61664, 17.87158, 17.31052, 17.61664, 17.15141, 17.34611, 17.47602, 17.26691,
   17.29071, 16.9221, 17.19929, 17.47994, 17.26691, 16.81238, 16.90589, 16.70605, 16.63616, 16.408, 16.73474, 16.48302, 16.61142, 16.79199, 16.1257, 16.45805,
   16.32004, 16.19779, 16.26114, 16.1342, 16.27378, 15.93759, 16.19779, 16.5204, 16.1172, 16.03192, 15.89453, 16.07462, 16.16391, 15.82105, 15.98482, 15.6205,
   15.77332, 15.80805, 15.58096, 15.30132, 15.27442, 15.48831, 15.28787, 15.6205, 15.0256, 15.58096, 15.0256, 15.29236, 15.31475, 15.15278, 14.83278, 15.1573,
   15.22048, 14.81428, 14.74007, 14.79576, 14.74007, 14.61867, 14.81428, 14.43941, 14.74472, 14.74937, 14.51988, 14.6046, 14.21939, 14.24347, 14.46786, 14.35372,
   14.40139, 14.40139, 14.20974, 14.01059, 13.98121, 13.91241, 13.98121, 13.83336, 14.07891, 14.06917, 13.95176, 13.8284, 13.92226, 13.75386, 13.83831, 13.69393,
   14.02526, 13.5985, 13.2047, 13.52268, 13.4719, 13.43114, 12.94257, 13.3081, 13.55811, 13.35951, 13.50747, 12.90013, 13.03754, 12.97959, 13.13705, 13.13705,
   13.16831, 12.85756, 13.04805, 13.16831, 12.68583, 12.66961, 12.63169, 13.14226, 12.84156, 12.70742, 12.94786, 12.52817, 12.44584, 12.41827, 12.73436, 12.48982,
   12.11657, 12.41275, 12.50079, 13.00596, 12.79879, 12.45134, 12.41275, 11.88815, 12.1561, 11.96859, 12.45685, 11.89391, 12.07691, 11.83615, 11.87661, 12.08825,
   11.90543, 11.69048, 11.79554, 11.9514, 11.87084, 11.20554, 11.82456, 11.52516, 11.68462, 11.59039, 11.67288, 11.51921, 11.2787, 11.41761, 11.48942, 11.71391,
   11.78973, 11.63171, 11.71391, 11.18104, 11.24827, 11.08871, 11.48942, 11.32721, 11.1319, 11.3393, 11.4116, 11.09489, 11.08253, 11.04536, 11.32721, 11.06396,
   10.87653, 10.87653, 10.87023, 10.7625, 10.9331, 10.83233, 10.98313, 10.47855, 10.88283, 10.92055, 10.60856, 10.55675, 10.76887, 10.49162, 10.46546, 10.38657,
   10.62793, 10.63437, 10.43923, 10.6021, 10.65369, 10.45891, 10.15974, 10.42609, 10.15974, 10.16648, 10.17995, 10.26043, 9.92081, 10.45891, 9.774652, 9.886206,
   10.05803, 10.0444, 10.30043, 9.989658, 10.17995, 10.21356, 10.26711, 9.927716, 9.927716, 9.92081, 9.781661, 9.697214, 10.07846, 9.830587, 9.92081, 9.417531,
   9.711339, 9.569145, 9.711339, 9.263435, 9.263435, 9.446597, 9.569145, 9.241212, 9.482805, 8.854885, 9.597752, 9.263435, 9.315084, 9.359127, 9.211497, 9.151779,
   9.446597, 9.189148, 9.000749, 9.129284, 8.993131, 9.015966, 9.189148, 9.218935, 8.901206, 9.114256, 8.714446, 8.962594, 9.099204, 9.000749, 8.931952, 9.129284,
   8.908902, 9.263435, 8.738009, 8.893502, 8.901206, 8.698702, 8.808321, 8.603631, 8.722308, 8.539663, 8.847141, 8.682929, 8.753683, 8.682929, 8.49137, 8.738009,
   8.547685, 8.262274, 8.643371, 8.42655, 8.714446, 8.459022, 8.253974, 8.611594, 8.547685, 8.229025, 8.459022, 8.442802, 7.914856, 8.21235, 8.23735, 8.270565,
   8.162121, 8.043701, 8.204, 8.270565, 8.23735, 8.187274, 8.060725, 8.009545, 7.914856, 8.094665, 7.668555, 7.730866, 8.000983, 7.533297, 7.792679, 8.120027,
   7.68641, 7.533297, 7.596717, 7.854005, 7.605734, 7.766248, 7.659612, 7.386292, 7.596717, 7.940792, 7.792679, 7.460156, 7.404827, 7.713114, 7.677488, 7.68641,
   7.2363, 7.560542, 7.404827, 7.748577, 7.578651, 7.188786, 7.460156, 7.505953, 7.623736, 7.073451, 7.092804, 6.946343, 6.975881, 7.112104, 7.404827, 7.083134,
   7.650659, 7.339749, 7.169693, 7.330405, 7.121734, 7.112104, 7.292909, 7.26466, 7.20783, 7.092804, 7.034585, 7.083134, 6.946343, 7.160127, 7.283504, 7.063755,
   7.20783, 7.063755, 6.846963, 7.005295, 7.005295, 6.975881, 6.836945, 6.71557, 7.169693, 6.906763, 7.092804, 6.75627, 6.786636, 6.59196, 6.796728, 6.380624,
   6.725768, 6.956203, 6.956203, 6.956203, 6.560693, 6.71557, 6.465987, 6.602349, 6.139758, 6.369873, 6.487152, 6.434109, 6.654052, 6.581554, 6.571132, 6.348317,
   6.476578, 6.487152, 6.348317, 6.602349, 6.348317, 6.455378, 6.315844, 6.654052, 6.261349, 6.402071, 6.294103, 6.348317, 5.969962, 6.061112, 5.865726, 6.004306,
   6.027092, 6.359104, 6.228423, 6.239418, 6.380624, 5.900676, 6.049793, 6.239418, 6.391356, 6.004306, 6.01571, 6.128585, 5.889049, 6.128585, 6.038454, 6.049793,
   6.01571, 6.283204, 6.304983, 5.981432, 5.807009, 5.923861, 5.91228, 5.830566, 5.771491, 5.93542, 5.55362, 5.818799, 5.735754, 5.747691, 5.663603, 5.675692,
   5.504033, 5.687755, 5.614988, 5.969962, 5.663603, 5.723792, 5.711805, 5.723792, 5.889049, 5.663603, 5.651489, 5.663603, 5.830566, 5.759604, 5.339697, 5.390795,
   5.830566, 5.326845, 5.639348, 5.675692, 5.441414, 5.528882, 5.699793, 5.541265, 5.663603, 5.403494, 5.466548, 5.103425, 5.249077, 5.541265, 5.541265, 5.627181,
   5.170139, 5.675692, 5.651489, 4.85567, 5.663603, 5.062974, 5.236003 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1031,Graph_from_VH_tagFirst_2b1c_H_mass_fy1031,Graph_from_VH_tagFirst_2b1c_H_mass_fex1031,Graph_from_VH_tagFirst_2b1c_H_mass_fey1031);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->SetMinimum(-1760.398);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->SetMaximum(18342.25);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1031);
   
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",1000,0,2000);
   data_mc_ratio__32->SetBinContent(1000,0.8135364);
   data_mc_ratio__32->SetBinContent(1001,1.171434);
   data_mc_ratio__32->SetBinError(1000,0.1627073);
   data_mc_ratio__32->SetBinError(1001,0.009238559);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(14.48608);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(1,150);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1032[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1032[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1032[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009453642, 0.004724292,
   0.004725875, 0.004732061, 0.004754203, 0.004747608, 0.004738485, 0.004765418, 0.004775841, 0.004795129, 0.004801647, 0.004817725, 0.004809972, 0.004835717, 0.00484752, 0.004843368, 0.004870348, 0.004899371,
   0.00490367, 0.0049291, 0.004950192, 0.004948192, 0.00497168, 0.004982962, 0.005002377, 0.005026205, 0.005042793, 0.005057282, 0.005095612, 0.005102373, 0.01019898, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1703872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.7955354);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(1.204465);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->SetSelected(H_mass_tagFirst_SR_16);
}
