#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Mon Apr  8 13:43:41 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_16 = new TCanvas("H_mass_tagFirst_VR_16", "H_mass_tagFirst_VR_16",0,0,600,600);
   H_mass_tagFirst_VR_16->SetHighLightColor(2);
   H_mass_tagFirst_VR_16->Range(0,0,1,1);
   H_mass_tagFirst_VR_16->SetFillColor(0);
   H_mass_tagFirst_VR_16->SetFillStyle(4000);
   H_mass_tagFirst_VR_16->SetBorderMode(0);
   H_mass_tagFirst_VR_16->SetBorderSize(2);
   H_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-46.35262,315.7258,46316.26);
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
   st->SetMaximum(41680);
   
   TH1F *st_stack_99 = new TH1F("st_stack_99","",1000,0,2000);
   st_stack_99->SetMinimum(0.01);
   st_stack_99->SetMaximum(41680);
   st_stack_99->SetDirectory(nullptr);
   st_stack_99->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_99->SetLineColor(ci);
   st_stack_99->SetLineWidth(0);
   st_stack_99->GetXaxis()->SetRange(1,150);
   st_stack_99->GetXaxis()->SetLabelFont(42);
   st_stack_99->GetXaxis()->SetTitleOffset(1);
   st_stack_99->GetXaxis()->SetTitleFont(42);
   st_stack_99->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_99->GetYaxis()->SetLabelFont(42);
   st_stack_99->GetYaxis()->SetLabelSize(0.05);
   st_stack_99->GetYaxis()->SetTitleSize(0.057);
   st_stack_99->GetYaxis()->SetTitleOffset(1.2);
   st_stack_99->GetYaxis()->SetTitleFont(42);
   st_stack_99->GetZaxis()->SetLabelFont(42);
   st_stack_99->GetZaxis()->SetTitleOffset(1);
   st_stack_99->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_99);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,8289.434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,16965.71);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,16692.04);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,16470.8);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,16432.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8175.773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6895.485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,13737.83);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,13557.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,13612.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,13296.57);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6719.111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,31.50256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,20302.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5670996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,1.136698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.564551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,10.67618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,18.93068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,27.29734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,36.21372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,45.28924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,54.07491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,62.04726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,68.86527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,75.38517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,80.37575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,84.27452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,87.50228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,89.70632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,91.11735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,91.65778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,92.39333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,92.66793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,92.38156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,92.22434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,91.85761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,91.52042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,91.34087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,90.54814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,90.4068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,89.87856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,89.46674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,89.06829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,88.62069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,88.44268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,87.88782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,87.51052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,87.58838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,87.002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,86.35553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,86.22758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,85.83023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,85.70445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,86.01016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,85.69432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,85.23712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,85.29051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,85.4679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,85.01461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,84.74908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,84.42869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,84.35092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,83.86128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,84.03386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,83.7077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,83.67134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,83.64829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,82.99748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,82.53604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,82.57471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,81.86368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,81.5402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,81.66665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,81.33258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,81.0835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,80.93126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,80.41342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,80.1849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,80.08295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,79.43478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,79.3366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,78.92906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,78.76694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,78.22025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,78.23498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,77.40291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,77.51144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,76.98204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,76.85877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,76.20925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,76.33586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,76.30937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,75.82847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,75.64376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,74.86441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,75.11747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,75.25553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,74.6919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,74.24374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,74.10195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,73.61348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,73.72436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,73.87568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,73.3593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,73.33544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,73.13568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,72.39515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,72.55077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,72.05301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,72.49516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,72.06061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,72.06944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,71.49112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,71.16625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,71.14938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,71.40015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,71.19065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,70.8959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,70.95653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,70.62177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,70.84797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,70.488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,70.51505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,69.97042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,69.94008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,70.04353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,69.93618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,69.82594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,69.41262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,69.13137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,69.35304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,69.18117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,69.16819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,69.08381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,68.18224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,68.62478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,68.58097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,68.12974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,68.20652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,68.10155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,67.84558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,67.47256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,67.68232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,67.3192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,67.19866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,66.67942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,66.81056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,66.642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,66.6205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,66.41064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,66.22047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,65.90661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,65.80157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,65.94513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,65.79614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,65.38156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,65.18178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,65.19862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,65.15905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,64.7701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,64.91141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,64.23178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,64.58116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,63.81345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,63.64515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,63.52547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,63.50653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,63.57023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,63.24888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,62.82343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,62.97389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,62.65329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,62.35923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,62.04991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,62.42759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,61.70003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,61.5937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,61.9572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,61.55144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,61.2373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,60.8548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,61.13656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,60.75702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,60.58841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,60.31895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,60.29612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,60.3305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,59.41919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,59.48592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,59.59684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,59.22288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,58.89984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,59.09462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,58.20345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,58.26045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,58.57041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,58.28273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,57.82478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,57.86313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,57.65241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,57.8083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,57.76518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,56.95167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,56.6477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,56.76753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,56.29808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,56.11101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,56.72559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,55.64755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,55.75539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,55.69497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,55.73918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,55.3336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,55.17317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,55.02533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,54.66411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,54.93835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,54.24997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,53.93038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,54.15894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,54.0759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,54.08439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,52.93502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,53.262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,53.24696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,52.94036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,52.32021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,52.65597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,51.64858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,52.23024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,52.12952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,52.04878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,51.3772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,51.44442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,51.28989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,51.16568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,51.2286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,50.7427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,51.05022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,50.63601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,50.37663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,49.80876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,50.30251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,49.62168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,49.80479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,49.11666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,49.26522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,49.51857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,49.31264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,48.87207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,48.96224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,48.63962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,48.6971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,48.57946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,48.1915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,48.15203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,47.9219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,47.62942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,47.47791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,47.67028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,47.02487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,47.00039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,47.00245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,46.66918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,46.43465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,46.86792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,46.7201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,45.70402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,45.8882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,45.6657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.89153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,45.29784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,45.17903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,45.13976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,45.07199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,44.67202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,44.65911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,44.74147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,44.28904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,44.23066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.89781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,43.70992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.57919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,44.18499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.86655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,43.8048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.03749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,43.16145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,43.14196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.78836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.87559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,42.4042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,42.69141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,41.90995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,41.73545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,42.2978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.79537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.70858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,41.4498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,41.54169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,41.30299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.19394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,41.20343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,40.72089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,40.56175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,40.55747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,40.71157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.16935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,40.5488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.50114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,39.93983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,39.63158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,39.68789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,39.79007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.29717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.45346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.05922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,38.82259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,38.70474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,38.80469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,38.88863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,38.47715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.71579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.13768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.65825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.27615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,38.02948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,37.59466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,37.77823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.52399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.53634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,36.96536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,37.68708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.64639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,36.95773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.07304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,36.9508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,36.83952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,36.74547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.3285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.19787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,36.18287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,36.17712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.28458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,35.85796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,35.70198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,35.71358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.79881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,35.47247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,35.40031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,35.28494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,34.96603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,34.90456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,34.71285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,34.67462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,34.41914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,34.40661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.34813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,34.09072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,34.09219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,34.04958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,33.72582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.34363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,33.70916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,33.82222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,33.48185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,33.40675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,33.14667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.08031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.22241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.03266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,32.58889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,32.93423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,32.98375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,32.59648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,32.17097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,32.39001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,31.88439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,31.99619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,32.1706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,31.80524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.11468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,31.62517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,31.58065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,31.44704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,31.44037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,31.11887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,31.50992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.20949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,30.70206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,30.40127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,30.67523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,30.59681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,30.52922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,30.38103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,31.0375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,30.61042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,30.01787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,29.84965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,30.13971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,29.57714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,29.78701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,29.78257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,29.5683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,29.70837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,29.32526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,29.19603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,29.04857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,28.8227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,29.47261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,29.10933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,28.97833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,28.80919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,28.57708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,28.81571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,28.64945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,28.69757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,28.45044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,28.30256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,28.21593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,28.10148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,27.87756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,27.74132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,27.50965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,27.45491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,27.45613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,27.32477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,27.51958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,27.03758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,27.68963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,26.75602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,27.17506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,27.10432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.07688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,26.89964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,26.66617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,26.77489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,26.33001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,26.53938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,26.43865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,26.19086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,26.65428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.59428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,25.80823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,25.96597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,25.89063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,26.15759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,25.73119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,25.75279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,25.73179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,25.61563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,25.7159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,25.17743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,25.05027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,24.69678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,24.99164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.41863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,24.87032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.19815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,24.92972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,24.77544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,24.5997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,24.46583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,24.72353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,24.43846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,24.75437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,24.48498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,24.17893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,23.98962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,24.12356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,23.88682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,23.893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,23.98873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,23.94273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,23.29499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,23.67575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,23.44433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,23.47239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.53132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,23.11076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,22.96685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,22.99634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,23.02635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,23.27429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,23.02236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,22.7679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,22.6582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,22.65517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,22.45628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,22.90481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,22.74828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,22.37079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,22.26753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,22.34435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,22.44053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,22.33005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,21.98986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,22.00733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,22.00548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,21.90195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,21.47663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,21.37862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,21.69916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,21.63532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,21.54821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,21.70305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,21.56206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,21.13462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,21.43803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,21.35664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,21.31414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,20.87449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,20.61357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,21.12219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,20.3869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,20.87074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,20.84474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,20.63391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,20.19663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.05779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,20.46783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,20.62348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,20.52775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,20.52001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,20.30804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,20.23875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,20.25383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.23225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,20.04322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,19.82176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,19.86546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.22691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,19.66878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,19.75349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,19.35393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.05224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,19.20038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,19.5016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,19.39444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,19.83967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,19.10139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,19.29766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,19.64743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,18.95751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,19.3309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,18.78242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,18.95374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,19.13115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,18.90047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,18.91457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,18.59113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,18.70781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.03951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,18.7959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,18.45593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,18.41515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,18.40592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,18.25946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,17.95241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.38618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,18.03891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,18.21757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,18.46946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,17.67056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,17.99222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,17.84476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,17.87724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,17.76973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,17.72312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,17.86693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,17.39857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,17.71967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.01079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,17.63012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,17.52412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,17.41145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,17.63682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,17.64099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,17.33479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,17.49816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,17.15242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,17.15755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.25046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.08205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,16.77061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,16.86735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,16.92339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,16.8163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,16.99835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,16.64825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.1919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,16.48077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,16.79923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,16.67018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,16.45812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,16.28601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,16.57356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,16.6135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,16.12342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,16.06616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,16.19185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,16.1576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,15.95244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,16.16368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,15.683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.13927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.11735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,15.97547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,15.83779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,15.60113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,15.70585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,15.76964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,15.65518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,15.72189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,15.88373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,15.54105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,15.35545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,15.34049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,15.29788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,15.27853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,15.18663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,15.46081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,15.3812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,15.3189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,15.10835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,15.28144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,15.08935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,15.16285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,15.1434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.38627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,15.01572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,14.45643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,14.7848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,14.75199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,14.68576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,14.21862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,14.71105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,14.88366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,14.65435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,14.77027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,14.01317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,14.29042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,14.19071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,14.43362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,14.24573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,14.58625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,14.08222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.15263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,14.45287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,13.84364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,13.96782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,13.87636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.43001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,14.05043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.07396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,14.22254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,13.72649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,13.58121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,13.71346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,13.94495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,13.65508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,13.257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,13.52835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,13.59141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.53978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,13.93347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,13.60416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,13.52942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,13.01376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.29537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,13.22731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,13.60921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,13.02034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,13.25133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,12.97702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.05552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,13.07501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,13.03059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,12.87032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,12.93081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,13.10117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,12.95716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,12.31342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,12.93246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,12.65239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,12.76318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,12.55003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,12.84452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,12.62553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,12.26488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,12.66227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,12.59202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,12.84709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,12.87906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,12.65099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,12.78636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,12.27451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,12.26887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,12.14862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,12.48789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,12.36258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,12.2374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,12.44352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,12.46698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,12.11691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,12.07914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.04974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,12.30543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.15124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,11.77813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,11.89229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,11.83095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,11.71465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,11.93154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,11.86078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.00574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,11.55298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,11.78206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,12.03656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,11.63719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,11.61574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,11.73814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,11.52538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,11.48109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,11.44475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,11.62334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,11.59427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,11.38726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,11.50424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,11.57379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,11.41292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,11.07713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,11.33614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,11.21268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,11.08789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,11.16462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.1334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,10.86254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,11.48114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,10.84598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,10.88626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,11.00647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.93381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,11.23713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,10.98236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.0611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.2566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.2682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,10.91208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,10.86853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,10.74123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,10.63895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,10.6388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.98424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,10.81426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,10.84679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,10.36379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,10.68371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,10.54963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,10.55503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,10.06075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,10.20908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,10.24299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,10.43874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,10.18105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,10.42432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,9.685511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,10.48944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.17014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,10.23044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.16183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.10989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.958501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.41089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.10024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.97331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,10.08047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,9.886195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.879099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,10.02383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.0584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,9.69026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.961987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,9.534491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,9.894958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.967471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.785067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,9.781772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.08479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,9.814289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.11369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,9.566989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,9.740837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,9.701046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,9.574074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,9.705379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,9.406729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.760167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,9.448991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,9.630455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,9.557428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,9.570668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,9.530106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.242054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,9.622804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,9.386127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,9.053226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,9.427296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.197045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,9.536773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,9.318747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,9.243988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,9.374562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,9.319964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.064619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,9.289341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.208594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,8.830806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.025605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.053775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.046323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.991284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.980506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.897485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.030908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.944385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.915559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.826018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.837882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,8.706525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.929321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,8.379694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,8.500597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.680635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,8.463082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,8.633678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.916111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,8.376327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,8.201441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,8.395823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,8.555708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,8.396466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,8.491707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,8.409077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,8.163258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,8.362025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,8.610487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,8.41223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,8.353665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.050125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,8.537685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.377763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,8.409201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.923105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,8.519567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.043462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.414983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,8.172243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.936268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,8.091717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.200476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.37284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.693145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.827566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,7.669622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,7.57676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.732989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.248516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.816502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.347394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.06936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.940387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.101575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.838316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.835742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.032416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.928967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.930694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.735557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.639132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.785519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,7.523792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.893969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.961685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.805675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.844747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.66237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,7.554267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.614553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,7.645442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,7.682068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,7.57338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,7.498983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.824984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.529432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.792434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,7.342076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.401763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.424648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,7.594799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.0785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,7.446789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.608369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.599805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,7.551565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.187002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,7.348422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,7.146595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,7.211044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.739015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,7.00274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.201741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.176581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.22573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.234434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.045314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.972541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.191857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.091226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.895751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.226454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.993304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.000226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.892348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.239978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.738847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.019657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.894756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.986628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,6.606371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.631766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,6.386919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.447085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.671641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.066608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.821813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.807691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.904995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,6.573551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.572884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.915685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.003139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.586643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.582814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.727753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,6.483641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.764573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.713776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.665746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.507084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.939677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.85775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,6.571429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,6.520611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,6.299933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.51891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,6.384457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.350324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,6.459398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,6.245398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,6.394267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.230235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.281139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.058975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,6.230254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.00551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.203838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,6.127581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.507514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,6.1131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,6.317797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,6.251074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.382133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.429569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,6.227471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.059937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.318386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.331729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.394222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.856695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.872536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.519068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.786808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.250225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.201004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,6.043093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.071047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.202857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.151344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.175809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.98029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.919677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.631783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.725094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.188767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.057539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.178598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.686402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.355548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.013623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,5.408281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.14776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.58508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.67385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,94.131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(7227109);

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
   
   TH1D *VH_tagFirst_H_mass__197 = new TH1D("VH_tagFirst_H_mass__197","",1000,0,2000);
   VH_tagFirst_H_mass__197->SetBinContent(43,9457);
   VH_tagFirst_H_mass__197->SetBinContent(44,18756);
   VH_tagFirst_H_mass__197->SetBinContent(45,18441);
   VH_tagFirst_H_mass__197->SetBinContent(46,18161);
   VH_tagFirst_H_mass__197->SetBinContent(47,18037);
   VH_tagFirst_H_mass__197->SetBinContent(48,8836);
   VH_tagFirst_H_mass__197->SetBinContent(78,7789);
   VH_tagFirst_H_mass__197->SetBinContent(79,15450);
   VH_tagFirst_H_mass__197->SetBinContent(80,15217);
   VH_tagFirst_H_mass__197->SetBinContent(81,15326);
   VH_tagFirst_H_mass__197->SetBinContent(82,15167);
   VH_tagFirst_H_mass__197->SetBinContent(83,7585);
   VH_tagFirst_H_mass__197->SetBinContent(1000,69);
   VH_tagFirst_H_mass__197->SetBinContent(1001,39187);
   VH_tagFirst_H_mass__197->SetEntries(3591155);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__197->SetLineColor(ci);
   VH_tagFirst_H_mass__197->SetLineWidth(2);
   VH_tagFirst_H_mass__197->SetMarkerStyle(20);
   VH_tagFirst_H_mass__197->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__197->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__197->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__197->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__197->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__197->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__197->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__197->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__197->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__197->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__197->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1197[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1197[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 8289.434, 16965.71, 16692.04, 16470.8, 16432.48, 8175.773, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6895.485, 13737.83, 13557.59, 13612.26,
   13296.57, 6719.111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 31.50256 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1197[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1197[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5670996, 1.136698, 4.564551, 10.67618, 18.93068, 27.29734, 36.21372, 45.28924,
   54.07491, 62.04726, 68.86527, 75.38517, 80.37575, 84.27452, 87.50228, 89.70632, 91.11735, 91.65778, 92.39333, 92.66793, 92.38156, 92.22434, 91.85761, 91.52042,
   91.34087, 90.54814, 90.4068, 89.87856, 89.46674, 89.06829, 88.62069, 88.44268, 87.88782, 87.51052, 87.58838, 87.002, 86.35553, 86.22758, 85.83023, 85.70445,
   86.01016, 85.69432, 85.23712, 85.29051, 85.4679, 85.01461, 84.74908, 84.42869, 84.35092, 83.86128, 84.03386, 83.7077, 83.67134, 83.64829, 82.99748, 82.53604,
   82.57471, 81.86368, 81.5402, 81.66665, 81.33258, 81.0835, 80.93126, 80.41342, 80.1849, 80.08295, 79.43478, 79.3366, 78.92906, 78.76694, 78.22025, 78.23498,
   77.40291, 77.51144, 76.98204, 76.85877, 76.20925, 76.33586, 76.30937, 75.82847, 75.64376, 74.86441, 75.11747, 75.25553, 74.6919, 74.24374, 74.10195, 73.61348,
   73.72436, 73.87568, 73.3593, 73.33544, 73.13568, 72.39515, 72.55077, 72.05301, 72.49516, 72.06061, 72.06944, 71.49112, 71.16625, 71.14938, 71.40015, 71.19065,
   70.8959, 70.95653, 70.62177, 70.84797, 70.488, 70.51505, 69.97042, 69.94008, 70.04353, 69.93618, 69.82594, 69.41262, 69.13137, 69.35304, 69.18117, 69.16819,
   69.08381, 68.18224, 68.62478, 68.58097, 68.12974, 68.20652, 68.10155, 67.84558, 67.47256, 67.68232, 67.3192, 67.19866, 66.67942, 66.81056, 66.642, 66.6205,
   66.41064, 66.22047, 65.90661, 65.80157, 65.94513, 65.79614, 65.38156, 65.18178, 65.19862, 65.15905, 64.7701, 64.91141, 64.23178, 64.58116, 63.81345, 63.64515,
   63.52547, 63.50653, 63.57023, 63.24888, 62.82343, 62.97389, 62.65329, 62.35923, 62.04991, 62.42759, 61.70003, 61.5937, 61.9572, 61.55144, 61.2373, 60.8548,
   61.13656, 60.75702, 60.58841, 60.31895, 60.29612, 60.3305, 59.41919, 59.48592, 59.59684, 59.22288, 58.89984, 59.09462, 58.20345, 58.26045, 58.57041, 58.28273,
   57.82478, 57.86313, 57.65241, 57.8083, 57.76518, 56.95167, 56.6477, 56.76753, 56.29808, 56.11101, 56.72559, 55.64755, 55.75539, 55.69497, 55.73918, 55.3336,
   55.17317, 55.02533, 54.66411, 54.93835, 54.24997, 53.93038, 54.15894, 54.0759, 54.08439, 52.93502, 53.262, 53.24696, 52.94036, 52.32021, 52.65597, 51.64858,
   52.23024, 52.12952, 52.04878, 51.3772, 51.44442, 51.28989, 51.16568, 51.2286, 50.7427, 51.05022, 50.63601, 50.37663, 49.80876, 50.30251, 49.62168, 49.80479,
   49.11666, 49.26522, 49.51857, 49.31264, 48.87207, 48.96224, 48.63962, 48.6971, 48.57946, 48.1915, 48.15203, 47.9219, 47.62942, 47.47791, 47.67028, 47.02487,
   47.00039, 47.00245, 46.66918, 46.43465, 46.86792, 46.7201, 45.70402, 45.8882, 45.6657, 45.89153, 45.29784, 45.17903, 45.13976, 45.07199, 44.67202, 44.65911,
   44.74147, 44.28904, 44.23066, 43.89781, 43.70992, 43.57919, 44.18499, 43.86655, 43.8048, 43.03749, 43.16145, 43.14196, 42.78836, 42.87559, 42.4042, 42.69141,
   41.90995, 41.73545, 42.2978, 41.79537, 41.70858, 41.4498, 41.54169, 41.30299, 41.19394, 41.20343, 40.72089, 40.56175, 40.55747, 40.71157, 40.16935, 40.5488,
   40.50114, 39.93983, 39.63158, 39.68789, 39.79007, 39.29717, 39.45346, 39.05922, 38.82259, 38.70474, 38.80469, 38.88863, 38.47715, 38.71579, 38.13768, 38.65825,
   38.27615, 38.02948, 37.59466, 37.77823, 37.52399, 37.53634, 36.96536, 37.68708, 37.64639, 36.95773, 37.07304, 36.9508, 36.83952, 36.74547, 36.3285, 36.19787,
   36.18287, 36.17712, 36.28458, 35.85796, 35.70198, 35.71358, 35.79881, 35.47247, 35.40031, 35.28494, 34.96603, 34.90456, 34.71285, 34.67462, 34.41914, 34.40661,
   34.34813, 34.09072, 34.09219, 34.04958, 33.72582, 34.34363, 33.70916, 33.82222, 33.48185, 33.40675, 33.14667, 33.08031, 33.22241, 33.03266, 32.58889, 32.93423,
   32.98375, 32.59648, 32.17097, 32.39001, 31.88439, 31.99619, 32.1706, 31.80524, 32.11468, 31.62517, 31.58065, 31.44704, 31.44037, 31.11887, 31.50992, 31.20949,
   30.70206, 30.40127, 30.67523, 30.59681, 30.52922, 30.38103, 31.0375, 30.61042, 30.01787, 29.84965, 30.13971, 29.57714, 29.78701, 29.78257, 29.5683, 29.70837,
   29.32526, 29.19603, 29.04857, 28.8227, 29.47261, 29.10933, 28.97833, 28.80919, 28.57708, 28.81571, 28.64945, 28.69757, 28.45044, 28.30256, 28.21593, 28.10148,
   27.87756, 27.74132, 27.50965, 27.45491, 27.45613, 27.32477, 27.51958, 27.03758, 27.68963, 26.75602, 27.17506, 27.10432, 27.07688, 26.89964, 26.66617, 26.77489,
   26.33001, 26.53938, 26.43865, 26.19086, 26.65428, 26.59428, 25.80823, 25.96597, 25.89063, 26.15759, 25.73119, 25.75279, 25.73179, 25.61563, 25.7159, 25.17743,
   25.05027, 24.69678, 24.99164, 25.41863, 24.87032, 25.19815, 24.92972, 24.77544, 24.5997, 24.46583, 24.72353, 24.43846, 24.75437, 24.48498, 24.17893, 23.98962,
   24.12356, 23.88682, 23.893, 23.98873, 23.94273, 23.29499, 23.67575, 23.44433, 23.47239, 23.53132, 23.11076, 22.96685, 22.99634, 23.02635, 23.27429, 23.02236,
   22.7679, 22.6582, 22.65517, 22.45628, 22.90481, 22.74828, 22.37079, 22.26753, 22.34435, 22.44053, 22.33005, 21.98986, 22.00733, 22.00548, 21.90195, 21.47663,
   21.37862, 21.69916, 21.63532, 21.54821, 21.70305, 21.56206, 21.13462, 21.43803, 21.35664, 21.31414, 20.87449, 20.61357, 21.12219, 20.3869, 20.87074, 20.84474,
   20.63391, 20.19663, 21.05779, 20.46783, 20.62348, 20.52775, 20.52001, 20.30804, 20.23875, 20.25383, 20.23225, 20.04322, 19.82176, 19.86546, 20.22691, 19.66878,
   19.75349, 19.35393, 20.05224, 19.20038, 19.5016, 19.39444, 19.83967, 19.10139, 19.29766, 19.64743, 18.95751, 19.3309, 18.78242, 18.95374, 19.13115, 18.90047,
   18.91457, 18.59113, 18.70781, 19.03951, 18.7959, 18.45593, 18.41515, 18.40592, 18.25946, 17.95241, 18.38618, 18.03891, 18.21757, 18.46946, 17.67056, 17.99222,
   17.84476, 17.87724, 17.76973, 17.72312, 17.86693, 17.39857, 17.71967, 18.01079, 17.63012, 17.52412, 17.41145, 17.63682, 17.64099, 17.33479, 17.49816, 17.15242,
   17.15755, 17.25046, 17.08205, 16.77061, 16.86735, 16.92339, 16.8163, 16.99835, 16.64825, 17.1919, 16.48077, 16.79923, 16.67018, 16.45812, 16.28601, 16.57356,
   16.6135, 16.12342, 16.06616, 16.19185, 16.1576, 15.95244, 16.16368, 15.683, 16.13927, 16.11735, 15.97547, 15.83779, 15.60113, 15.70585, 15.76964, 15.65518,
   15.72189, 15.88373, 15.54105, 15.35545, 15.34049, 15.29788, 15.27853, 15.18663, 15.46081, 15.3812, 15.3189, 15.10835, 15.28144, 15.08935, 15.16285, 15.1434,
   15.38627, 15.01572, 14.45643, 14.7848, 14.75199, 14.68576, 14.21862, 14.71105, 14.88366, 14.65435, 14.77027, 14.01317, 14.29042, 14.19071, 14.43362, 14.24573,
   14.58625, 14.08222, 14.15263, 14.45287, 13.84364, 13.96782, 13.87636, 14.43001, 14.05043, 14.07396, 14.22254, 13.72649, 13.58121, 13.71346, 13.94495, 13.65508,
   13.257, 13.52835, 13.59141, 14.53978, 13.93347, 13.60416, 13.52942, 13.01376, 13.29537, 13.22731, 13.60921, 13.02034, 13.25133, 12.97702, 13.05552, 13.07501,
   13.03059, 12.87032, 12.93081, 13.10117, 12.95716, 12.31342, 12.93246, 12.65239, 12.76318, 12.55003, 12.84452, 12.62553, 12.26488, 12.66227, 12.59202, 12.84709,
   12.87906, 12.65099, 12.78636, 12.27451, 12.26887, 12.14862, 12.48789, 12.36258, 12.2374, 12.44352, 12.46698, 12.11691, 12.07914, 12.04974, 12.30543, 12.15124,
   11.77813, 11.89229, 11.83095, 11.71465, 11.93154, 11.86078, 12.00574, 11.55298, 11.78206, 12.03656, 11.63719, 11.61574, 11.73814, 11.52538, 11.48109, 11.44475,
   11.62334, 11.59427, 11.38726, 11.50424, 11.57379, 11.41292, 11.07713, 11.33614, 11.21268, 11.08789, 11.16462, 11.1334, 10.86254, 11.48114, 10.84598, 10.88626,
   11.00647, 10.93381, 11.23713, 10.98236, 11.0611, 11.2566, 11.2682, 10.91208, 10.86853, 10.74123, 10.63895, 10.6388, 10.98424, 10.81426, 10.84679, 10.36379,
   10.68371, 10.54963, 10.55503, 10.06075, 10.20908, 10.24299, 10.43874, 10.18105, 10.42432, 9.685511, 10.48944, 10.17014, 10.23044, 10.16183, 10.10989, 9.958501,
   10.41089, 10.10024, 9.97331, 10.08047, 9.886195, 9.879099, 10.02383, 10.0584, 9.69026, 9.961987, 9.534491, 9.894958, 9.967471, 9.785067, 9.781772, 10.08479,
   9.814289, 10.11369, 9.566989, 9.740837, 9.701046, 9.574074, 9.705379, 9.406729, 9.760167, 9.448991, 9.630455, 9.557428, 9.570668, 9.530106, 9.242054, 9.622804,
   9.386127, 9.053226, 9.427296, 9.197045, 9.536773, 9.318747, 9.243988, 9.374562, 9.319964, 9.064619, 9.289341, 9.208594, 8.830806, 9.025605, 9.053775, 9.046323,
   8.991284, 8.980506, 8.897485, 9.030908, 8.944385, 8.915559, 8.826018, 8.837882, 8.706525, 8.929321, 8.379694, 8.500597, 8.680635, 8.463082, 8.633678, 8.916111,
   8.376327, 8.201441, 8.395823, 8.555708, 8.396466, 8.491707, 8.409077, 8.163258, 8.362025, 8.610487, 8.41223, 8.353665, 8.050125, 8.537685, 8.377763, 8.409201,
   7.923105, 8.519567, 8.043462, 8.414983, 8.172243, 7.936268, 8.091717, 8.200476, 8.37284, 7.693145, 7.827566, 7.669622, 7.57676, 7.732989, 8.248516, 7.816502,
   8.347394, 8.06936, 7.940387, 8.101575, 7.838316, 7.835742, 8.032416, 7.928967, 7.930694, 7.735557, 7.639132, 7.785519, 7.523792, 7.893969, 7.961685, 7.805675,
   7.844747, 7.66237, 7.554267, 7.614553, 7.645442, 7.682068, 7.57338, 7.498983, 7.824984, 7.529432, 7.792434, 7.342076, 7.401763, 7.424648, 7.594799, 7.0785,
   7.446789, 7.608369, 7.599805, 7.551565, 7.187002, 7.348422, 7.146595, 7.211044, 6.739015, 7.00274, 7.201741, 7.176581, 7.22573, 7.234434, 7.045314, 6.972541,
   7.191857, 7.091226, 6.895751, 7.226454, 6.993304, 7.000226, 6.892348, 7.239978, 6.738847, 7.019657, 6.894756, 6.986628, 6.606371, 6.631766, 6.386919, 6.447085,
   6.671641, 7.066608, 6.821813, 6.807691, 6.904995, 6.573551, 6.572884, 6.915685, 7.003139, 6.586643, 6.582814, 6.727753, 6.483641, 6.764573, 6.713776, 6.665746,
   6.507084, 6.939677, 6.85775, 6.571429, 6.520611, 6.299933, 6.51891, 6.384457, 6.350324, 6.459398, 6.245398, 6.394267, 6.230235, 6.281139, 6.058975, 6.230254,
   6.00551, 6.203838, 6.127581, 6.507514, 6.1131, 6.317797, 6.251074, 6.382133, 6.429569, 6.227471, 6.059937, 6.318386, 6.331729, 6.394222, 5.856695, 5.872536,
   6.519068, 5.786808, 6.250225, 6.201004, 6.043093, 6.071047, 6.202857, 6.151344, 6.175809, 5.98029, 5.919677, 5.631783, 5.725094, 6.188767, 6.057539, 6.178598,
   5.686402, 6.355548, 6.013623, 5.408281, 6.14776, 5.58508, 5.67385 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1197,Graph_from_VH_tagFirst_2b1c_H_mass_fy1197,Graph_from_VH_tagFirst_2b1c_H_mass_fex1197,Graph_from_VH_tagFirst_2b1c_H_mass_fey1197);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->SetMinimum(-1807.265);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->SetMaximum(18767.9);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1197);
   
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
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   H_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__198 = new TH1D("data_mc_ratio__198","",1000,0,2000);
   data_mc_ratio__198->SetBinContent(43,1.14085);
   data_mc_ratio__198->SetBinContent(44,1.105524);
   data_mc_ratio__198->SetBinContent(45,1.104778);
   data_mc_ratio__198->SetBinContent(46,1.102618);
   data_mc_ratio__198->SetBinContent(47,1.097643);
   data_mc_ratio__198->SetBinContent(48,1.080754);
   data_mc_ratio__198->SetBinContent(78,1.12958);
   data_mc_ratio__198->SetBinContent(79,1.124632);
   data_mc_ratio__198->SetBinContent(80,1.122397);
   data_mc_ratio__198->SetBinContent(81,1.125897);
   data_mc_ratio__198->SetBinContent(82,1.14067);
   data_mc_ratio__198->SetBinContent(83,1.12887);
   data_mc_ratio__198->SetBinContent(1000,2.190298);
   data_mc_ratio__198->SetBinContent(1001,1.930117);
   data_mc_ratio__198->SetBinError(43,0.01173145);
   data_mc_ratio__198->SetBinError(44,0.008072314);
   data_mc_ratio__198->SetBinError(45,0.008135473);
   data_mc_ratio__198->SetBinError(46,0.008181918);
   data_mc_ratio__198->SetBinError(47,0.008172953);
   data_mc_ratio__198->SetBinError(48,0.01149738);
   data_mc_ratio__198->SetBinError(78,0.012799);
   data_mc_ratio__198->SetBinError(79,0.009047864);
   data_mc_ratio__198->SetBinError(80,0.009098754);
   data_mc_ratio__198->SetBinError(81,0.009094611);
   data_mc_ratio__198->SetBinError(82,0.009262113);
   data_mc_ratio__198->SetBinError(83,0.01296182);
   data_mc_ratio__198->SetBinError(1000,0.2636809);
   data_mc_ratio__198->SetBinError(1001,0.01323422);
   data_mc_ratio__198->SetMinimum(0.4);
   data_mc_ratio__198->SetMaximum(1.6);
   data_mc_ratio__198->SetEntries(1070.082);
   data_mc_ratio__198->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__198->SetLineColor(ci);
   data_mc_ratio__198->SetLineWidth(2);
   data_mc_ratio__198->SetMarkerStyle(20);
   data_mc_ratio__198->SetMarkerSize(1.2);
   data_mc_ratio__198->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__198->GetXaxis()->SetRange(1,150);
   data_mc_ratio__198->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__198->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__198->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__198->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__198->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__198->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__198->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__198->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__198->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__198->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__198->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__198->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__198->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__198->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1198[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1198[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1198[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1198[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01055687, 0.005162671, 0.005212185, 0.005242946, 0.005247386, 0.01049812, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01144648, 0.005733579, 0.005769479, 0.00574739,
   0.005821266, 0.01153597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1801076 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1198,Graph_from_mc_statistical_error_fy1198,Graph_from_mc_statistical_error_fex1198,Graph_from_mc_statistical_error_fey1198);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1198 = new TH1F("Graph_Graph_from_mc_statistical_error1198","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1198->SetMinimum(0.7838709);
   Graph_Graph_from_mc_statistical_error1198->SetMaximum(1.216129);
   Graph_Graph_from_mc_statistical_error1198->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1198->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1198->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1198->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1198);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
