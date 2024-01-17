#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_17/Z_mass_tagFirst_VR_17
//=========  (Sat Dec  9 13:50:18 2023) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_17 = new TCanvas("Z_mass_tagFirst_VR_17", "Z_mass_tagFirst_VR_17",0,0,600,600);
   Z_mass_tagFirst_VR_17->SetHighLightColor(2);
   Z_mass_tagFirst_VR_17->Range(0,0,1,1);
   Z_mass_tagFirst_VR_17->SetFillColor(0);
   Z_mass_tagFirst_VR_17->SetFillStyle(4000);
   Z_mass_tagFirst_VR_17->SetBorderMode(0);
   Z_mass_tagFirst_VR_17->SetBorderSize(2);
   Z_mass_tagFirst_VR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-21.41627,315.7258,21404.85);
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
   st->SetMaximum(19262.22);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",1000,0,2000);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(19262.22);
   st_stack_114->SetDirectory(nullptr);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->SetLineWidth(0);
   st_stack_114->GetXaxis()->SetRange(1,150);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetTitleOffset(1);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetTitleOffset(1);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,6286.482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,6903.756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,7568.742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,8091.444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,8545.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,6850.506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,6770.418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,6706.518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,6690.33);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,6623.022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,42.6);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,22948.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.952565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7378536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.447184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.488626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.813157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,13.00522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,17.466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,22.34775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,26.64459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,31.70196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,36.25257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,40.49466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,44.6691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,48.14742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,51.7498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,54.23099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,56.78278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,58.71078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,60.3358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,61.7362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,62.66835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,63.58683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,63.39246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,63.6011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,63.95961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,64.23707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,64.02059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,63.62392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,63.53116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,63.55686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,63.40105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,62.76529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,62.93564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,62.55821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,62.32716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,61.30405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,60.89565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,59.9526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,59.60347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,58.88362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,58.01738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,57.95792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,56.762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,56.56343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,56.30618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,55.63012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,55.16494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,54.87138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,54.33964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,54.02144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,53.70473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,53.45069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,53.38615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,53.11692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,52.83946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,52.53117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,51.97025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,51.7305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,51.45967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,51.16436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,50.82628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,50.82271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,50.82628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,50.1632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,49.85656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,49.68702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,49.43252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,48.97518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,48.76723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,48.64614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,48.28668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,48.29983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,47.5138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,47.32053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,47.19188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,47.10335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,46.95865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,46.43205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,46.35381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,45.61583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,45.49632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,45.25034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,45.28642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,44.69144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,44.75839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,44.33266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,44.26507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,43.68526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,43.47079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,43.13973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,42.8273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,42.80187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,41.94748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,42.09863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,41.748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,41.66315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,41.71974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,41.00457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,40.72925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,41.08416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,40.38696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,40.05306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,39.81904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,39.76431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,39.55152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,39.08535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,38.45343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,38.52651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,38.24522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,38.24284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,37.82055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,37.98573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,37.6691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,36.96639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,37.37407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,36.93201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,36.83853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,36.57403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,36.24006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,35.91309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,35.94844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,36.06688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,35.28864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,35.29121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,35.37596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,34.8722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,34.66604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,34.74708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,34.85138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,34.51915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,34.42966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,33.99202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,34.12523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,33.52163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,33.49996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,33.26075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,33.3071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,33.15419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,32.94553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,33.04179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,33.06649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,32.45158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,32.24401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,32.3816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,32.40121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,31.77629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,31.70482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,31.25226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,31.80198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,31.18832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,31.53263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,30.99571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,31.19705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,31.38553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,30.81662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,30.81956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,30.94297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,30.44932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,30.40458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,30.33886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,29.76213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,29.98386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,29.78346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,29.98386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,29.60317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,29.77737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,29.56636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,29.92025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,29.394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,29.29195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.22062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,29.17711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,29.25166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,29.02433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,28.75421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,29.00869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,28.67838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,28.50701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,28.59282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,28.45285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,28.63721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,28.31218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,28.36661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,28.76052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,28.20944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,28.05461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,27.92494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,27.85011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,27.49268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,27.68345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,27.94768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,27.7031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,27.74892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,27.77834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,27.68672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,27.34708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,27.16397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,27.3172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,27.01995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,26.81771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,27.53885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,27.33712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,26.89204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,26.62415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,26.73977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,26.92239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.51829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,26.89879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,26.77707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,26.44633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,26.74995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,26.28458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,26.41544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,25.98949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,26.25004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,26.32597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,26.1496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,26.13224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,26.08359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,26.31908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,26.28113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,25.95455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,25.81785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,25.49602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,26.19813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,25.68042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,25.90907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,25.70867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,25.70867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,25.76508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,25.1917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,24.8362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,25.45684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,25.33178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,25.28876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,25.38545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,25.14844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,25.3282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,25.48534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,25.08341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,25.2133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,24.98918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,25.07979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,24.82524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,25.15204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,24.54588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,24.4273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,24.7557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,24.63444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.3678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,24.77768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,24.75936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,24.63813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,24.22588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,24.39013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,24.73002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,25.04358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,24.34172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,24.0869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,24.31188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,24.23337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,24.42359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.53109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,23.8978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,24.13958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,23.69954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,23.92816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,24.30814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,23.88261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,23.5613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,23.77599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,24.18089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,23.68039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,23.92437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.44936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,23.74544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,23.43774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,23.9054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,23.46096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,23.68422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.51505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,23.37572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,23.23165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,23.30964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,23.36019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,23.34853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,23.2082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,22.96057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,23.02765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,23.12203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,23.2082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,22.97637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,22.94476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,23.03553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,22.63419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.45307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,22.94476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,23.03947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,22.77009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,22.23377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.52167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.58604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,22.84568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,22.65423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,22.6382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,22.6382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,22.67825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,22.45711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,22.33963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.46115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,22.27862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,22.31524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,22.21744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,22.37615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,22.34775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,22.10279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,22.22561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,22.17656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,21.98754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,22.38426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,22.27047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,21.84678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.52167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,22.03701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,21.89657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,21.73018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,21.84263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.5246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.5246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.55829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,21.92142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.46127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,21.86754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,21.65488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,21.90071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,21.4655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,21.07301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,21.18038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,21.04285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,21.1375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,21.61294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,20.81741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,21.27442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,21.08592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,21.1761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,21.3638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,20.80433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,21.22746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,20.8392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,20.83049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,20.8479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,20.66868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,20.83484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,20.63353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,20.76941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,20.51445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,20.27867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,20.31444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,20.32783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,20.37242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,20.8566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,20.06275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,20.29656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,20.4258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,20.26972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,20.08083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.54539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.52772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,20.08535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,20.32783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,19.99479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,20.26972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,20.18898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,20.22939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,19.95845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,19.963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,19.65149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,19.68378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,19.69761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,19.80785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.54036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.49386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,19.70221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.53107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,19.25972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.42859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,19.32557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,20.04012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.51712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,19.74362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,19.08461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,19.2503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,19.43326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.50317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,19.66995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,19.32087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,19.28327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,19.4099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,18.802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.42859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.24087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,18.76335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.24087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,19.10837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,19.19838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,18.85501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.00361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.15579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.11786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,18.94144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,18.9845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,18.90307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.29818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,18.74884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,18.92227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,18.70523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,18.96537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,18.68582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.54935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,18.18376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,18.1538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,18.3477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.51018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,18.4168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.52978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,17.82595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.09372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.22364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.56443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.52488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.09372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,17.82595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.22862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.17378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.00323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,17.96286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.0887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,17.97296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,17.91227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,17.38268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.20371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,17.88693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,17.74943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.04853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,17.75454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.52305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.60571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.27796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.42439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,17.44001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,17.68798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.66231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.5696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.10378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.47119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.45561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.04532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.45561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.28846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.05597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.2359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,16.76081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.25694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.14088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.07723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.05597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,16.92244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,16.95994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,16.74456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,16.96529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.59761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.14617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.55929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,16.96529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.08255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,16.99201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.32197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,16.73372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.28858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.29972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.09807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.49891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.62492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.66308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.41068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.32197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.42173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.18239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.06421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.15433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.32197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.32753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.23278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,16.17118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.38301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,16.14872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,15.98494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.34974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.00763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.74472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.01896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,15.84812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.67541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.16556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.40095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.72742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,15.73896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,15.81946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.43626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.65224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.64644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.65224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.62903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,15.80225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,14.86734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,15.40095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,15.06137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.69855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.1155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,14.94647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.72165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.27672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.49493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,15.03122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.1335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.09748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,15.15147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,14.89173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,15.04932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,14.91608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,15.28859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,15.02518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.62117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,14.95861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,14.85513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.57144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.34551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.65217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.67074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.73246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.55898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.68928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,14.29482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.75707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,14.88564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.72013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.69546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.38972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,14.33919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.52154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,14.19929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.64598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,14.80005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,14.30117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.37079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,13.99331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,14.27577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,14.01275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,14.32653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,13.98033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,13.98682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,13.84991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.37079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.55189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,14.1929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,13.96734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.62534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,14.03216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,13.81055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,13.96085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.72487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.68515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.61202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.58533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.49149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.49822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.55858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.58533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,13.37667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.49149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.51837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.45782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.66524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.54519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.3291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.3291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.45782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.6984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.37667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.43758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.55858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.3291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.48477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.39701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.47804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,13.25401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,13.23346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.42407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,12.83667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,13.0748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,12.92122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.26769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,13.1716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.06786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.03309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.26085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,12.94227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.69451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.39799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,12.88606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.80128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.79419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.74445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,12.87902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.57241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,12.98427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,12.81545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.7302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,12.92122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.41993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.7088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,12.82253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.55074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.28033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.44183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.63002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.41993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.57963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.39067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.30985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.28772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,12.19878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,11.88227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.31722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,11.99627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,12.1092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,12.3393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,12.20622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.38334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,11.86699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,12.33195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,11.90516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.7088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.22108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.64313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.39067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.11669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.0942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.61973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.81334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.05663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.41489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.26555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.00383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.65092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.43078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.48621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.57278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,11.82869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.65871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.01894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.74401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.61192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.4704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.52564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.4704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.30306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.3671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,11.2709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.58062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.35112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.65092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,11.24672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,11.10055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.58845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.15762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.09237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,11.2144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.47831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,10.86091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.24672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,10.85255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,11.25479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.14949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.61973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.52142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.0596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,10.86091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.03496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.78546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.28699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,11.00202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.04318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.71794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.69252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.0185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.67553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,10.9026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,10.91924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.68403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.56446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,10.88595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.49552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.79387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.40871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.49552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.65852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,10.61587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.53866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.70947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.36503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.52142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.24173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.57304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.53004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.30357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.75175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.60731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.33873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.13486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,10.17061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.32995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,10.10797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.39999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,10.25944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,9.999664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.41742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.18844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.40871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.00873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.25944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.25059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,9.908507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.601552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.5128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.09899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.02685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,9.963301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.16169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.788735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.658088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.742276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.63928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,9.890175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,9.798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,9.94507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.779461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.751586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.52565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.601552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.844195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.554184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.816504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,9.890175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.24528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.294223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.592097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.610998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.458735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,9.096871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.648688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.333192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,9.096871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,9.096871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.401001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.760886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,9.30398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.333192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.686232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.196076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.196076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.166427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.294223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.284455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.516119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.410648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,9.01672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,8.905336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,8.946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.792541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.066897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.026778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,8.884934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,8.976377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.056884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.823446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.116798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.730402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.313728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.036825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,8.98648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.116798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.342909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.326093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.854244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.854244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.771877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,8.946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.709591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,8.905336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.530643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.740789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.823446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.04686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.720003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.636355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.238448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.864486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.466583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,8.194274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.573085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,8.91552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.604778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.562494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,8.21639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.541273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.615317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.530643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.127562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.573085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.751164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.293335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.249455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,7.96973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.138719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.326093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.21639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.11639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.249455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.358724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.082782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.183193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.498673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.423605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.271424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.138719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.026455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.878121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,7.946927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,8.026455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.843492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,8.037752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.14986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,7.912599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,7.958337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.855052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.071548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.194274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.866595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,7.981107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.464123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.608603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.843492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.548739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.21639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,7.912599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,8.015142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.808709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.79708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.715188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.679824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.608603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.366229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.52466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,7.153756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.548739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.329181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.536709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.329181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.656158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.31679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,7.166429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.656158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.512592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.025772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.166429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.378536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.291945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.366229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.869044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.17908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.427564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.366229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.56075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.3539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.43977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.128343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,6.934778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.077244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.842573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,6.94785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.254519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.329181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.22946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.279491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.090053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.051555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.31679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.681549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.632417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,6.986919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.254519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.488397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,6.999894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.789323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,7.038675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,7.025772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.544336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.038675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.802674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.695116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.882241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,6.986919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,6.94785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.681549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.869044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.166429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.115603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.260896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.44655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.789323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.530456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,6.934778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,6.908559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.8293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.695116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.5858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.667955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,6.986919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.749109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.572008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.404184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.882241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.502608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.708655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.530456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.599564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.599564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.842573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.654333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.735651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.304224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.46061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.516547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.084497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.76254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.246386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.304224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.332945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.418337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.735651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.432459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.735651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.02455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.530456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.289815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.304224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.217265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.202654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.246386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.231843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.474639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.304224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.00947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.887437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.143859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.173326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.71539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.275372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.260896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,5.979195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.00947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.488639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.651529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.099392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,5.994351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,98.87331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3075643);

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
   
   TH1D *VH_tagFirst_Z_mass__227 = new TH1D("VH_tagFirst_Z_mass__227","",1000,0,2000);
   VH_tagFirst_Z_mass__227->SetBinContent(26,6490);
   VH_tagFirst_Z_mass__227->SetBinContent(27,6897);
   VH_tagFirst_Z_mass__227->SetBinContent(28,7643);
   VH_tagFirst_Z_mass__227->SetBinContent(29,8022);
   VH_tagFirst_Z_mass__227->SetBinContent(30,8668);
   VH_tagFirst_Z_mass__227->SetBinContent(61,7108);
   VH_tagFirst_Z_mass__227->SetBinContent(62,6894);
   VH_tagFirst_Z_mass__227->SetBinContent(63,6910);
   VH_tagFirst_Z_mass__227->SetBinContent(64,6834);
   VH_tagFirst_Z_mass__227->SetBinContent(65,6844);
   VH_tagFirst_Z_mass__227->SetBinContent(1000,50);
   VH_tagFirst_Z_mass__227->SetBinContent(1001,26893);
   VH_tagFirst_Z_mass__227->SetEntries(1360367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__227->SetLineColor(ci);
   VH_tagFirst_Z_mass__227->SetLineWidth(2);
   VH_tagFirst_Z_mass__227->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__227->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__227->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__227->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__227->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__227->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__227->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__227->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__227->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__227->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__227->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__227->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1227[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1227[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 6286.482, 6903.756, 7568.742, 8091.444, 8545.56, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6850.506, 6770.418, 6706.518, 6690.33, 6623.022,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 42.6 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1227[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1227[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.952565, 0.7378536, 2.447184, 5.488626, 8.813157, 13.00522,
   17.466, 22.34775, 26.64459, 31.70196, 36.25257, 40.49466, 44.6691, 48.14742, 51.7498, 54.23099, 56.78278, 58.71078, 60.3358, 61.7362, 62.66835, 63.58683,
   63.39246, 63.6011, 63.95961, 64.23707, 64.02059, 63.62392, 63.53116, 63.55686, 63.40105, 62.76529, 62.93564, 62.55821, 62.32716, 61.30405, 60.89565, 59.9526,
   59.60347, 58.88362, 58.01738, 57.95792, 56.762, 56.56343, 56.30618, 55.63012, 55.16494, 54.87138, 54.33964, 54.02144, 53.70473, 53.45069, 53.38615, 53.11692,
   52.83946, 52.53117, 51.97025, 51.7305, 51.45967, 51.16436, 50.82628, 50.82271, 50.82628, 50.1632, 49.85656, 49.68702, 49.43252, 48.97518, 48.76723, 48.64614,
   48.28668, 48.29983, 47.5138, 47.32053, 47.19188, 47.10335, 46.95865, 46.43205, 46.35381, 45.61583, 45.49632, 45.25034, 45.28642, 44.69144, 44.75839, 44.33266,
   44.26507, 43.68526, 43.47079, 43.13973, 42.8273, 42.80187, 41.94748, 42.09863, 41.748, 41.66315, 41.71974, 41.00457, 40.72925, 41.08416, 40.38696, 40.05306,
   39.81904, 39.76431, 39.55152, 39.08535, 38.45343, 38.52651, 38.24522, 38.24284, 37.82055, 37.98573, 37.6691, 36.96639, 37.37407, 36.93201, 36.83853, 36.57403,
   36.24006, 35.91309, 35.94844, 36.06688, 35.28864, 35.29121, 35.37596, 34.8722, 34.66604, 34.74708, 34.85138, 34.51915, 34.42966, 33.99202, 34.12523, 33.52163,
   33.49996, 33.26075, 33.3071, 33.15419, 32.94553, 33.04179, 33.06649, 32.45158, 32.24401, 32.3816, 32.40121, 31.77629, 31.70482, 31.25226, 31.80198, 31.18832,
   31.53263, 30.99571, 31.19705, 31.38553, 30.81662, 30.81956, 30.94297, 30.44932, 30.40458, 30.33886, 29.76213, 29.98386, 29.78346, 29.98386, 29.60317, 29.77737,
   29.56636, 29.92025, 29.394, 29.29195, 29.22062, 29.17711, 29.25166, 29.02433, 28.75421, 29.00869, 28.67838, 28.50701, 28.59282, 28.45285, 28.63721, 28.31218,
   28.36661, 28.76052, 28.20944, 28.05461, 27.92494, 27.85011, 27.49268, 27.68345, 27.94768, 27.7031, 27.74892, 27.77834, 27.68672, 27.34708, 27.16397, 27.3172,
   27.01995, 26.81771, 27.53885, 27.33712, 26.89204, 26.62415, 26.73977, 26.92239, 26.51829, 26.89879, 26.77707, 26.44633, 26.74995, 26.28458, 26.41544, 25.98949,
   26.25004, 26.32597, 26.1496, 26.13224, 26.08359, 26.31908, 26.28113, 25.95455, 25.81785, 25.49602, 26.19813, 25.68042, 25.90907, 25.70867, 25.70867, 25.76508,
   25.1917, 24.8362, 25.45684, 25.33178, 25.28876, 25.38545, 25.14844, 25.3282, 25.48534, 25.08341, 25.2133, 24.98918, 25.07979, 24.82524, 25.15204, 24.54588,
   24.4273, 24.7557, 24.63444, 24.3678, 24.77768, 24.75936, 24.63813, 24.22588, 24.39013, 24.73002, 25.04358, 24.34172, 24.0869, 24.31188, 24.23337, 24.42359,
   24.53109, 23.8978, 24.13958, 23.69954, 23.92816, 24.30814, 23.88261, 23.5613, 23.77599, 24.18089, 23.68039, 23.92437, 23.44936, 23.74544, 23.43774, 23.9054,
   23.46096, 23.68422, 23.51505, 23.37572, 23.23165, 23.30964, 23.36019, 23.34853, 23.2082, 22.96057, 23.02765, 23.12203, 23.2082, 22.97637, 22.94476, 23.03553,
   22.63419, 22.45307, 22.94476, 23.03947, 22.77009, 22.23377, 22.52167, 22.58604, 22.84568, 22.65423, 22.6382, 22.6382, 22.67825, 22.45711, 22.33963, 22.46115,
   22.27862, 22.31524, 22.21744, 22.37615, 22.34775, 22.10279, 22.22561, 22.17656, 21.98754, 22.38426, 22.27047, 21.84678, 22.52167, 22.03701, 21.89657, 21.73018,
   21.84263, 21.5246, 21.5246, 21.55829, 21.92142, 21.46127, 21.86754, 21.65488, 21.90071, 21.4655, 21.07301, 21.18038, 21.04285, 21.1375, 21.61294, 20.81741,
   21.27442, 21.08592, 21.1761, 21.3638, 20.80433, 21.22746, 20.8392, 20.83049, 20.8479, 20.66868, 20.83484, 20.63353, 20.76941, 20.51445, 20.27867, 20.31444,
   20.32783, 20.37242, 20.8566, 20.06275, 20.29656, 20.4258, 20.26972, 20.08083, 20.54539, 20.52772, 20.08535, 20.32783, 19.99479, 20.26972, 20.18898, 20.22939,
   19.95845, 19.963, 19.65149, 19.68378, 19.69761, 19.80785, 19.54036, 19.49386, 19.70221, 19.53107, 19.25972, 19.42859, 19.32557, 20.04012, 19.51712, 19.74362,
   19.08461, 19.2503, 19.43326, 19.50317, 19.66995, 19.32087, 19.28327, 19.4099, 18.802, 19.42859, 19.24087, 18.76335, 19.24087, 19.10837, 19.19838, 18.85501,
   19.00361, 19.15579, 19.11786, 18.94144, 18.9845, 18.90307, 18.29818, 18.74884, 18.92227, 18.70523, 18.96537, 18.68582, 18.54935, 18.18376, 18.1538, 18.3477,
   18.51018, 18.4168, 18.52978, 17.82595, 18.09372, 18.22364, 17.56443, 18.52488, 18.09372, 17.82595, 18.22862, 18.17378, 18.00323, 17.96286, 18.0887, 17.97296,
   17.91227, 17.38268, 18.20371, 17.88693, 17.74943, 18.04853, 17.75454, 17.52305, 17.60571, 17.27796, 17.42439, 17.44001, 17.68798, 17.66231, 17.5696, 17.10378,
   17.47119, 17.45561, 17.04532, 17.45561, 17.28846, 17.05597, 17.2359, 16.76081, 17.25694, 17.14088, 17.07723, 17.05597, 16.92244, 16.95994, 16.74456, 16.96529,
   16.59761, 17.14617, 16.55929, 16.96529, 17.08255, 16.99201, 16.32197, 16.73372, 16.28858, 16.29972, 16.09807, 16.49891, 16.62492, 16.66308, 16.41068, 16.32197,
   16.42173, 16.18239, 16.06421, 16.15433, 16.32197, 16.32753, 16.23278, 16.17118, 16.38301, 16.14872, 15.98494, 16.34974, 16.00763, 15.74472, 16.01896, 15.84812,
   15.67541, 16.16556, 15.40095, 15.72742, 15.73896, 15.81946, 15.43626, 15.65224, 15.64644, 15.65224, 15.62903, 15.80225, 14.86734, 15.40095, 15.06137, 15.69855,
   15.1155, 14.94647, 15.72165, 15.27672, 15.49493, 15.03122, 15.1335, 15.09748, 15.15147, 14.89173, 15.04932, 14.91608, 15.28859, 15.02518, 14.62117, 14.95861,
   14.85513, 14.57144, 14.34551, 14.65217, 14.67074, 14.73246, 14.55898, 14.68928, 14.29482, 14.75707, 14.88564, 14.72013, 14.69546, 14.38972, 14.33919, 14.52154,
   14.19929, 14.64598, 14.80005, 14.30117, 14.37079, 13.99331, 14.27577, 14.01275, 14.32653, 13.98033, 13.98682, 13.84991, 14.37079, 13.55189, 14.1929, 13.96734,
   13.62534, 14.03216, 13.81055, 13.96085, 13.72487, 13.68515, 13.61202, 13.58533, 13.49149, 13.49822, 13.55858, 13.58533, 13.37667, 13.49149, 13.51837, 13.45782,
   13.66524, 13.54519, 13.3291, 13.3291, 13.45782, 13.6984, 13.37667, 13.43758, 13.55858, 13.3291, 13.48477, 13.39701, 13.47804, 13.25401, 13.23346, 13.42407,
   12.83667, 13.0748, 12.92122, 13.26769, 13.1716, 13.06786, 13.03309, 13.26085, 12.94227, 12.69451, 12.39799, 12.88606, 12.80128, 12.79419, 12.74445, 12.87902,
   12.57241, 12.98427, 12.81545, 12.7302, 12.92122, 12.41993, 12.7088, 12.82253, 12.55074, 12.28033, 12.44183, 12.63002, 12.41993, 12.57963, 12.39067, 12.30985,
   12.28772, 12.19878, 11.88227, 12.31722, 11.99627, 12.1092, 12.3393, 12.20622, 12.38334, 11.86699, 12.33195, 11.90516, 12.7088, 12.22108, 11.64313, 12.39067,
   12.11669, 12.0942, 11.61973, 11.81334, 12.05663, 11.41489, 12.26555, 12.00383, 11.65092, 11.43078, 11.502, 11.48621, 11.57278, 11.82869, 11.65871, 12.01894,
   11.74401, 11.61192, 11.4704, 11.52564, 11.4704, 11.30306, 11.3671, 11.2709, 11.58062, 11.35112, 11.65092, 11.24672, 11.10055, 11.58845, 11.15762, 11.09237,
   11.2144, 11.47831, 10.86091, 11.24672, 10.85255, 11.25479, 11.14949, 11.61973, 10.52142, 11.0596, 10.86091, 11.03496, 10.78546, 11.28699, 11.00202, 10.701,
   11.04318, 10.71794, 10.69252, 11.0185, 10.67553, 10.9026, 10.91924, 10.68403, 10.56446, 10.88595, 10.49552, 10.79387, 10.40871, 10.49552, 10.65852, 10.61587,
   10.53866, 10.70947, 10.36503, 10.52142, 10.24173, 10.57304, 10.53004, 10.30357, 10.75175, 10.60731, 10.33873, 10.13486, 10.081, 10.17061, 10.32995, 10.10797,
   10.39999, 10.25944, 9.999664, 10.41742, 10.18844, 10.40871, 10.00873, 10.25944, 10.25059, 9.908507, 9.601552, 10.5128, 10.09899, 10.02685, 9.963301, 10.16169,
   9.788735, 9.658088, 9.742276, 9.63928, 9.890175, 9.798, 9.94507, 9.779461, 9.751586, 9.52565, 9.601552, 9.844195, 9.554184, 9.816504, 9.372, 9.890175,
   9.24528, 9.294223, 9.592097, 9.610998, 9.458735, 9.096871, 9.648688, 9.333192, 9.096871, 9.096871, 9.401001, 9.760886, 9.30398, 9.333192, 9.686232, 9.196076,
   9.196076, 9.166427, 9.294223, 9.284455, 9.516119, 9.410648, 9.01672, 8.905336, 8.946, 8.792541, 9.066897, 9.026778, 8.884934, 8.976377, 9.056884, 8.823446,
   9.116798, 8.730402, 9.313728, 9.036825, 8.98648, 9.116798, 9.342909, 8.326093, 8.854244, 8.854244, 8.771877, 8.946, 8.709591, 8.905336, 8.530643, 8.740789,
   8.823446, 9.04686, 8.720003, 8.636355, 8.238448, 8.864486, 8.466583, 8.194274, 8.573085, 8.91552, 8.604778, 8.562494, 8.21639, 8.541273, 8.615317, 8.530643,
   8.127562, 8.573085, 8.751164, 7.958337, 8.293335, 8.249455, 7.96973, 8.138719, 8.326093, 8.21639, 8.11639, 8.249455, 8.358724, 8.082782, 8.183193, 8.498673,
   8.423605, 7.958337, 8.271424, 8.138719, 8.026455, 7.878121, 7.958337, 7.668, 7.958337, 7.946927, 8.026455, 7.843492, 8.037752, 7.958337, 8.14986, 7.912599,
   7.958337, 7.855052, 8.071548, 8.194274, 7.866595, 7.981107, 7.464123, 7.608603, 7.843492, 7.548739, 8.21639, 7.912599, 8.015142, 7.808709, 7.79708, 7.715188,
   7.679824, 7.608603, 7.366229, 7.52466, 7.153756, 7.548739, 7.329181, 7.536709, 7.329181, 7.656158, 7.31679, 7.166429, 7.656158, 7.512592, 7.025772, 7.166429,
   7.378536, 7.291945, 7.366229, 6.869044, 7.17908, 7.427564, 7.366229, 7.56075, 7.3539, 7.43977, 7.242, 7.128343, 6.934778, 7.077244, 6.842573, 6.94785,
   7.254519, 7.329181, 7.22946, 7.279491, 7.090053, 7.051555, 7.31679, 6.681549, 7.632417, 6.986919, 7.254519, 7.488397, 6.999894, 6.789323, 7.038675, 7.025772,
   6.544336, 7.038675, 6.802674, 6.695116, 6.882241, 6.986919, 6.816, 6.94785, 6.681549, 6.869044, 7.166429, 7.115603, 6.260896, 6.44655, 6.789323, 6.530456,
   6.934778, 6.908559, 6.8293, 6.695116, 6.5858, 6.667955, 6.986919, 6.749109, 6.572008, 6.404184, 6.882241, 6.502608, 6.708655, 6.530456, 6.599564, 6.599564,
   6.842573, 6.654333, 6.735651, 6.304224, 6.46061, 6.516547, 6.084497, 6.76254, 6.246386, 6.304224, 6.332945, 6.418337, 6.735651, 6.432459, 6.735651, 6.02455,
   6.530456, 6.289815, 6.304224, 6.217265, 6.202654, 6.246386, 6.231843, 6.474639, 6.304224, 6.00947, 5.887437, 6.39, 6.143859, 6.173326, 5.71539, 6.275372,
   6.260896, 5.979195, 6.00947, 6.488639, 5.651529, 6.099392, 5.994351 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1227,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1227,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1227,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1227);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->SetMinimum(-931.2504);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->SetMaximum(9472.909);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1227);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__228 = new TH1D("data_mc_ratio__228","",1000,0,2000);
   data_mc_ratio__228->SetBinContent(26,1.032374);
   data_mc_ratio__228->SetBinContent(27,0.9990214);
   data_mc_ratio__228->SetBinContent(28,1.009811);
   data_mc_ratio__228->SetBinContent(29,0.9914176);
   data_mc_ratio__228->SetBinContent(30,1.014328);
   data_mc_ratio__228->SetBinContent(61,1.037588);
   data_mc_ratio__228->SetBinContent(62,1.018253);
   data_mc_ratio__228->SetBinContent(63,1.030341);
   data_mc_ratio__228->SetBinContent(64,1.021474);
   data_mc_ratio__228->SetBinContent(65,1.033365);
   data_mc_ratio__228->SetBinContent(1000,1.173709);
   data_mc_ratio__228->SetBinContent(1001,1.1719);
   data_mc_ratio__228->SetBinError(26,0.01281488);
   data_mc_ratio__228->SetBinError(27,0.01202942);
   data_mc_ratio__228->SetBinError(28,0.0115507);
   data_mc_ratio__228->SetBinError(29,0.01106918);
   data_mc_ratio__228->SetBinError(30,0.01089479);
   data_mc_ratio__228->SetBinError(61,0.01230697);
   data_mc_ratio__228->SetBinError(62,0.01226366);
   data_mc_ratio__228->SetBinError(63,0.01239487);
   data_mc_ratio__228->SetBinError(64,0.01235634);
   data_mc_ratio__228->SetBinError(65,0.01249105);
   data_mc_ratio__228->SetBinError(1000,0.1659875);
   data_mc_ratio__228->SetBinError(1001,0.008749942);
   data_mc_ratio__228->SetMinimum(0.4);
   data_mc_ratio__228->SetMaximum(1.6);
   data_mc_ratio__228->SetEntries(2268.482);
   data_mc_ratio__228->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__228->SetLineColor(ci);
   data_mc_ratio__228->SetLineWidth(2);
   data_mc_ratio__228->SetMarkerStyle(20);
   data_mc_ratio__228->SetMarkerSize(1.2);
   data_mc_ratio__228->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__228->GetXaxis()->SetRange(1,150);
   data_mc_ratio__228->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__228->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__228->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__228->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__228->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__228->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__228->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1228[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1228[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1228[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.008231917, 0.007855287, 0.007502274, 0.007255908, 0.007060485, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007885759, 0.007932262, 0.007969962, 0.007979598, 0.008020043,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.831145);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.168855);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->SetSelected(Z_mass_tagFirst_VR_17);
}
