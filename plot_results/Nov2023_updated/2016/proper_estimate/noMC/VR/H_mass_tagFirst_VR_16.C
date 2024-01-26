#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Thu Jan 25 12:40:54 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-44.37264,315.7258,44338.26);
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
   st->SetMaximum(39900);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",1000,0,2000);
   st_stack_86->SetMinimum(0.01);
   st_stack_86->SetMaximum(39900);
   st_stack_86->SetDirectory(nullptr);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->SetLineWidth(0);
   st_stack_86->GetXaxis()->SetRange(1,150);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetTitleOffset(1);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetLabelSize(0.05);
   st_stack_86->GetYaxis()->SetTitleSize(0.057);
   st_stack_86->GetYaxis()->SetTitleOffset(1.2);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetTitleOffset(1);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7697.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15634.78);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,15415.69);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,15203.98);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,15108.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7525.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6377.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,12632.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,12523.64);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,12540.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,12273.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6206.545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,27.805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,17804.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.4737615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.8863267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.848857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,8.957727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,15.93628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,22.83904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,30.1593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,37.64094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,45.10449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,51.70733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,57.41611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,62.72198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,66.82725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,70.1007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,72.80761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,74.66743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,75.77445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,76.23219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,76.81076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,77.06966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,76.72378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,76.58689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,76.19612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,75.85365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,75.77519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,75.01008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,74.86332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,74.48686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,73.966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,73.58113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,73.29613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,73.10526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,72.63554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,72.29949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,72.37163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,71.86277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,71.36758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,71.14236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,70.9623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,70.91009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,70.88635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,70.79367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,70.46397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,70.56185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,70.6977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,70.29814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,70.14471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,69.86256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,69.76772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,69.5349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,69.64698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,69.27619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,69.1075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,69.16675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,68.78358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,68.37612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,68.31618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,67.96373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,67.67415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,67.7015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,67.38165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,67.22908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,66.96817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,66.65069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,66.43144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,66.24111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,65.74284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,65.65573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,65.47686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,65.053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,64.77206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,64.81622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,64.12254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,64.1619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,63.89197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,63.7513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,63.10461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,63.14817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,63.26712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,62.90065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,62.74524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,62.07813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,62.29469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,62.32531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,61.91521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,61.59173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,61.46953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,60.99944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,61.17214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,61.15104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,60.79858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,60.83548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,60.70159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,60.0585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,60.18077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,59.8029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,60.08466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,59.78319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,59.75315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,59.27134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,59.10828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,59.03514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,59.2666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,59.01612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,58.84759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,58.9143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,58.54934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,58.77412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,58.39003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,58.42846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,58.19751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,58.07493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,58.08846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,58.00726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,57.98114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,57.56739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,57.36429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,57.52644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,57.31536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,57.40047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,57.28304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,56.53168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,56.77039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,56.79806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,56.54062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,56.6368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,56.4721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,56.27103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,56.02218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,56.13425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,55.91189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,55.74203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,55.2882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,55.39466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,55.26586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,55.33182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,55.16322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,54.87766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,54.64506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,54.53816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,54.53714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,54.70766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,54.17686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,54.12816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,54.1095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,54.11987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,53.66905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,53.95372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,53.28185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,53.53925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,52.9194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,52.843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,52.79094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,52.69093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,52.7516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,52.50851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,52.11269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,52.304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,52.02001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,51.9304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,51.5345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,51.78107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,51.24186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,51.10589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,51.39931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,51.01908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,50.85825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,50.50618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,50.56836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,50.38828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,50.30022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,50.04523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,50.02617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,50.13821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,49.37359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,49.47804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,49.55283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,49.29283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,48.97191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,48.92032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,48.35154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,48.32368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,48.52993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,48.40721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,48.06287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,47.98458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,47.86633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,47.94715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,47.80768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,47.16605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,46.92871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,47.07316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,46.67693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,46.62521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,47.16248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,46.1875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,46.11576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,46.17535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,46.17656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,45.97684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,45.7505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,45.65965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,45.26469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,45.47247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,45.01732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,44.96244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,44.88375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,44.74602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,44.85123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,43.85174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,44.0942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,44.3176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,43.90801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,43.38088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,43.64267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,42.80403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,43.32911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,43.31487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,43.06803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,42.60826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,42.64117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,42.57928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,42.47504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,42.49221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,41.95399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,42.48429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,41.99676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,41.79855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,41.41012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,41.70985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,41.0563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,41.28934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,40.92488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,40.73247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,41.0686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,40.86039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,40.49068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,40.58757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,40.27809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,40.35464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,40.19302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,40.02654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,39.87204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,39.71693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,39.43478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,39.28795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,39.52858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,39.03002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,38.98254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,38.98542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,38.71533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,38.43605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,38.75734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,38.57158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,37.8016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,38.01328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,37.88612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,37.90685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,37.55737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,37.43166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,37.3401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,37.38216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,37.02015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,37.04591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,36.93062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,36.64845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,36.64998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,36.2683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,36.25437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,36.14276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,36.47656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,36.31623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,36.2172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,35.6661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,35.7588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,35.83874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,35.38019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,35.60311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,35.14787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,35.33416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,34.83356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,34.68504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,34.89954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,34.59919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,34.49361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,34.38771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,34.39261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,34.15686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,34.01859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,34.17493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,33.71705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,33.56693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,33.57028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,33.66875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,33.34554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,33.5067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,33.46145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,33.06842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,32.79922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,32.90853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,32.95624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,32.66035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,32.64832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,32.3687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,32.26973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,32.07264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,32.21056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,32.17221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,31.84086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,32.06914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,31.5363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,31.9675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,31.74026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,31.52384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,31.09912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,31.38469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,31.08648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,31.11174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,30.65387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,31.191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,31.17301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,30.57322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,30.64655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,30.63373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,30.44632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,30.49052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,30.09971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,30.03065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,29.91083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,29.96518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,30.01196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,29.76791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,29.70375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,29.68675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,29.61483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,29.28329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,29.32542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,29.2027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,28.99057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,28.86837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,28.78857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,28.75932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,28.55568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,28.48091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,28.52029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,28.12404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,28.18981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,28.24946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,27.90572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,28.36245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,27.9017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,27.97601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,27.59026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,27.64308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,27.37178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,27.31431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,27.4557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,27.30199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,26.96074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,27.2279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,27.31842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,26.93783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,26.66145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,26.81047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,26.49255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,26.47136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,26.51584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,26.3183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,26.54545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,26.09132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,26.14073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,26.05473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,25.90354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,25.8363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,25.97492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,25.77324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,25.40042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,25.21195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,25.2986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,25.24753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,25.22308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,25.14955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,25.71657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,25.34956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,24.79679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,24.81036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,24.90742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,24.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,24.66747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,24.69929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,24.42975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,24.60825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,24.0944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,24.20592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,24.06643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,23.91206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,24.34692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,24.04077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,23.97299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,23.83684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,23.68334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,23.83684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,23.73777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,23.65726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,23.59789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,23.3949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,23.27708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,23.27949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,23.15623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,22.88077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,22.77014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,22.77261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,22.68373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,22.59699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,22.78985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,22.35231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,22.87586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,22.14804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,22.34226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,22.38241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,22.42749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,22.22139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,21.97508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,22.21381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,21.71823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,21.92395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,21.91371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,21.58866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,22.03119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,21.9904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,21.36922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,21.50533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,21.40595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,21.61464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,21.29557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,21.18991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,21.24809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,21.15015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,21.22166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,20.7727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,20.57456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,20.30553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,20.70777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,20.95023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,20.5008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,20.84282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,20.63992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,20.44324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,20.38276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,20.24465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,20.44049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,20.24187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,20.58002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,20.23078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,19.88388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,19.83868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,19.89516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,19.765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,19.73659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,19.81037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,19.77068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,19.29961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,19.45309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,19.38663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,19.48479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,19.50782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,19.12436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,18.99482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,19.05087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,19.13903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,19.21802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,19.01254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,18.8078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,18.67306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,18.76299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,18.57061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,18.99482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,18.75102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,18.53431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,18.36399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,18.50401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,18.42195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,18.55247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,18.25366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,18.22905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,18.30891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,18.16738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,17.83069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,17.6504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,17.93737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,17.98111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,17.80865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,18.05895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,17.83698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,17.37485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,17.78658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,17.64404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,17.60584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,17.33928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,17.03237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,17.42966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,16.84687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,17.29716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,17.30689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,17.01919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,16.71311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,17.41356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,16.95643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,17.01589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,16.91999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,16.99279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,16.77343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,16.7433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,16.74665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,16.71311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,16.52403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,16.3979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,16.40816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,16.73324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,16.21206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,16.34649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,16.05905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,16.5918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,15.81612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,16.1253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,16.09047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,16.50704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,15.745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,15.93981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,16.17047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,15.66282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,15.93981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,15.51885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,15.69503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,15.81257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,15.62336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,15.64489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,15.31137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,15.56218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,15.81612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,15.62336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,15.2121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,15.2967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,15.11589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,15.05265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,14.84621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,15.14185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,14.91409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,15.03027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,15.19364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,14.59078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,14.89149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,14.76662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,14.65601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,14.71333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,14.59847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,14.72476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,14.42057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,14.65601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,14.94791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,14.58309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,14.50593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,14.38161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,14.54456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,14.62535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,14.31513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,14.46331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,14.13367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,14.27194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,14.30336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,14.09789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,13.84487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,13.82053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,14.01406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,13.8327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,14.13367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,13.59539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,14.09789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,13.59539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,13.83676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,13.85702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,13.71047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,13.42092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,13.71456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,13.77172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,13.40419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,13.33704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,13.38743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,13.33704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,13.2272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,13.40419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,13.065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,13.34125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,13.34545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,13.13781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,13.21447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,12.86592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,12.88771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,13.09074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,12.98746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,13.0306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,13.0306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,12.85719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,12.67699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,12.65041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,12.58816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,12.65041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,12.51663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,12.73881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,12.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,12.62377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,12.51215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,12.59707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,12.4447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,12.52112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,12.39047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,12.69027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,12.30413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,11.94781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,12.23553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,12.18958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,12.1527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,11.71063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,12.04137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,12.26759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,12.08788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,12.22176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,11.67224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,11.79657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,11.74413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,11.8866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,11.8866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,11.91489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,11.63372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,11.80608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,11.91489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,11.47833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,11.46366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,11.42934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,11.89132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,11.61924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,11.49787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,11.71542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,11.33568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,11.26118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,11.23624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,11.52225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,11.30098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,10.96326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,11.23125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,11.3109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,11.76799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,11.58054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,11.26617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,11.23125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,10.75658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,10.99902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,10.82936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,11.27114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,10.76179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,10.92737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,10.70953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,10.74614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,10.93763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,10.77222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,10.57773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,10.67279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,10.81381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,10.74092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,10.13894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,10.69904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,10.42814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,10.57242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,10.48716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,10.5618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,10.42275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,10.20514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,10.33083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,10.3958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,10.59893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,10.66753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,10.52455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,10.59893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,10.11678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,10.17761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,10.03324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,10.3958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,10.24903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,10.07231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,10.25997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,10.32539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,10.03883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,10.02764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,9.994011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,10.24903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,10.01084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,9.841249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,9.841249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,9.835545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,9.738076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,9.892431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,9.801255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,9.937706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,9.481151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,9.846949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,9.88108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,9.598788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,9.551907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,9.743837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,9.49298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,9.469307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,9.397929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,9.616309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,9.622142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,9.445574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,9.59294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,9.639621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,9.463379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,9.192683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,9.433686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,9.192683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,9.198785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,9.210977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,9.283792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,8.9765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,9.463379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,8.844254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,8.94519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,9.100662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,9.088322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,9.319987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.038794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,9.210977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,9.241387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,9.289834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,8.982749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,8.982749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,8.9765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,8.850596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,8.774187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,9.119141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,8.894865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,8.9765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,8.521125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,8.786968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,8.658308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,8.786968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,8.381697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,8.381697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,8.547425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,8.658308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,8.361589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,8.580186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.012035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,8.684193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,8.381697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,8.42843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,8.468281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,8.334703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,8.280669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,8.547425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,8.314481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,8.144015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,8.260315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.137122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,8.157783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,8.314481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,8.341433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.053946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,8.246718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,7.884964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.109491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,8.233098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,8.144015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.081767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,8.260315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.06091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,8.381697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,7.906284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.046976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.053946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,7.870718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,7.969903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,7.784697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,7.892077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,7.726817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.005028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,7.856446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,7.920466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,7.856446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,7.683121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,7.906284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,7.734076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,7.475831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,7.820654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,7.62447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,7.884964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,7.653852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,7.468321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,7.791901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,7.734076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,7.445747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,7.653852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,7.639175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.161482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,7.430659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,7.453279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,7.483333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,7.385212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,7.278063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,7.423104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,7.483333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,7.453279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,7.40797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,7.293466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,7.247158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.161482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,7.324176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.938626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,6.995005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,7.239411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,6.816242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.050934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,7.347124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,6.954781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,6.816242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,6.873625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.106423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,6.881784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.027019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.930534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,6.683229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,6.873625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.18495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.050934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,6.750063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,6.7);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,6.978943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,6.946708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,6.954781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,6.547515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,6.840894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,6.7);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.011031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,6.857279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,6.504523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,6.750063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,6.7915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,6.898072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,6.400166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,6.417677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.285157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.311884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,6.43514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,6.7);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,6.408927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,6.922433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,6.641116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,6.487247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,6.632662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,6.443854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,6.43514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,6.598735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,6.573175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,6.521754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,6.417677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,6.365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,6.408927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.285157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,6.478592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,6.590226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,6.391393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,6.521754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,6.391393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.195236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,6.338497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.338497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.311884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.186172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.07635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,6.487247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.249344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,6.417677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.113176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.140651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,5.964505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.149783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,5.773285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.085577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.294079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.294079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.294079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,5.936215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.07635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,5.850523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,5.973906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,5.555347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.763558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,5.869674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,5.821679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.020687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,5.95509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,5.94566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,5.744053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,5.860107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,5.869674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,5.744053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,5.973906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,5.744053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,5.840925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,5.714672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.020687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,5.665364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,5.792692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,5.695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,5.744053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.401713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,5.484186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.307398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,5.432787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,5.453405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,5.753814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,5.635572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,5.64552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,5.773285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.339021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.473945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,5.64552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,5.782997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.432787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,5.443106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,5.545237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.328501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,5.545237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,5.463685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,5.473945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,5.443106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,5.685139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,5.704844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.412091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.25427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.36);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.349521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.275585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.222133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.370459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.264938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.189798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.200599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.135453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.980133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.146368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.080527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.401713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.178974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.168128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.178974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.328501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.113553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.275585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.211377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,4.831439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.877674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.275585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,4.819811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.102568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.135453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,4.923474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.002617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.157259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.013821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,4.889164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.946216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,4.617656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,4.749445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.013821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.013821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.091559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,4.67802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.135453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.113553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.393484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.124515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,4.581056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.737615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,77.2304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(9237222);

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
   
   TH1D *VH_tagFirst_H_mass__171 = new TH1D("VH_tagFirst_H_mass__171","",1000,0,2000);
   VH_tagFirst_H_mass__171->SetBinContent(43,8825);
   VH_tagFirst_H_mass__171->SetBinContent(44,17955);
   VH_tagFirst_H_mass__171->SetBinContent(45,17540);
   VH_tagFirst_H_mass__171->SetBinContent(46,17248);
   VH_tagFirst_H_mass__171->SetBinContent(47,17470);
   VH_tagFirst_H_mass__171->SetBinContent(48,8550);
   VH_tagFirst_H_mass__171->SetBinContent(78,7206);
   VH_tagFirst_H_mass__171->SetBinContent(79,14405);
   VH_tagFirst_H_mass__171->SetBinContent(80,14133);
   VH_tagFirst_H_mass__171->SetBinContent(81,14153);
   VH_tagFirst_H_mass__171->SetBinContent(82,14116);
   VH_tagFirst_H_mass__171->SetBinContent(83,7000);
   VH_tagFirst_H_mass__171->SetBinContent(1000,25);
   VH_tagFirst_H_mass__171->SetBinContent(1001,23051);
   VH_tagFirst_H_mass__171->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__171->SetLineColor(ci);
   VH_tagFirst_H_mass__171->SetLineWidth(2);
   VH_tagFirst_H_mass__171->SetMarkerStyle(20);
   VH_tagFirst_H_mass__171->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__171->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__171->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__171->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__171->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__171->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__171->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__171->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__171->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__171->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__171->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1171[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1171[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7697.63, 15634.78, 15415.69, 15203.98, 15108.17, 7525.44, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6377.73, 12632.52, 12523.64, 12540.73,
   12273.73, 6206.545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 27.805 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1171[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1171[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4737615, 0.8863267, 3.848857, 8.957727, 15.93628, 22.83904, 30.1593, 37.64094,
   45.10449, 51.70733, 57.41611, 62.72198, 66.82725, 70.1007, 72.80761, 74.66743, 75.77445, 76.23219, 76.81076, 77.06966, 76.72378, 76.58689, 76.19612, 75.85365,
   75.77519, 75.01008, 74.86332, 74.48686, 73.966, 73.58113, 73.29613, 73.10526, 72.63554, 72.29949, 72.37163, 71.86277, 71.36758, 71.14236, 70.9623, 70.91009,
   70.88635, 70.79367, 70.46397, 70.56185, 70.6977, 70.29814, 70.14471, 69.86256, 69.76772, 69.5349, 69.64698, 69.27619, 69.1075, 69.16675, 68.78358, 68.37612,
   68.31618, 67.96373, 67.67415, 67.7015, 67.38165, 67.22908, 66.96817, 66.65069, 66.43144, 66.24111, 65.74284, 65.65573, 65.47686, 65.053, 64.77206, 64.81622,
   64.12254, 64.1619, 63.89197, 63.7513, 63.10461, 63.14817, 63.26712, 62.90065, 62.74524, 62.07813, 62.29469, 62.32531, 61.91521, 61.59173, 61.46953, 60.99944,
   61.17214, 61.15104, 60.79858, 60.83548, 60.70159, 60.0585, 60.18077, 59.8029, 60.08466, 59.78319, 59.75315, 59.27134, 59.10828, 59.03514, 59.2666, 59.01612,
   58.84759, 58.9143, 58.54934, 58.77412, 58.39003, 58.42846, 58.19751, 58.07493, 58.08846, 58.00726, 57.98114, 57.56739, 57.36429, 57.52644, 57.31536, 57.40047,
   57.28304, 56.53168, 56.77039, 56.79806, 56.54062, 56.6368, 56.4721, 56.27103, 56.02218, 56.13425, 55.91189, 55.74203, 55.2882, 55.39466, 55.26586, 55.33182,
   55.16322, 54.87766, 54.64506, 54.53816, 54.53714, 54.70766, 54.17686, 54.12816, 54.1095, 54.11987, 53.66905, 53.95372, 53.28185, 53.53925, 52.9194, 52.843,
   52.79094, 52.69093, 52.7516, 52.50851, 52.11269, 52.304, 52.02001, 51.9304, 51.5345, 51.78107, 51.24186, 51.10589, 51.39931, 51.01908, 50.85825, 50.50618,
   50.56836, 50.38828, 50.30022, 50.04523, 50.02617, 50.13821, 49.37359, 49.47804, 49.55283, 49.29283, 48.97191, 48.92032, 48.35154, 48.32368, 48.52993, 48.40721,
   48.06287, 47.98458, 47.86633, 47.94715, 47.80768, 47.16605, 46.92871, 47.07316, 46.67693, 46.62521, 47.16248, 46.1875, 46.11576, 46.17535, 46.17656, 45.97684,
   45.7505, 45.65965, 45.26469, 45.47247, 45.01732, 44.96244, 44.88375, 44.74602, 44.85123, 43.85174, 44.0942, 44.3176, 43.90801, 43.38088, 43.64267, 42.80403,
   43.32911, 43.31487, 43.06803, 42.60826, 42.64117, 42.57928, 42.47504, 42.49221, 41.95399, 42.48429, 41.99676, 41.79855, 41.41012, 41.70985, 41.0563, 41.28934,
   40.92488, 40.73247, 41.0686, 40.86039, 40.49068, 40.58757, 40.27809, 40.35464, 40.19302, 40.02654, 39.87204, 39.71693, 39.43478, 39.28795, 39.52858, 39.03002,
   38.98254, 38.98542, 38.71533, 38.43605, 38.75734, 38.57158, 37.8016, 38.01328, 37.88612, 37.90685, 37.55737, 37.43166, 37.3401, 37.38216, 37.02015, 37.04591,
   36.93062, 36.64845, 36.64998, 36.2683, 36.25437, 36.14276, 36.47656, 36.31623, 36.2172, 35.6661, 35.7588, 35.83874, 35.38019, 35.60311, 35.14787, 35.33416,
   34.83356, 34.68504, 34.89954, 34.59919, 34.49361, 34.38771, 34.39261, 34.15686, 34.01859, 34.17493, 33.71705, 33.56693, 33.57028, 33.66875, 33.34554, 33.5067,
   33.46145, 33.06842, 32.79922, 32.90853, 32.95624, 32.66035, 32.64832, 32.3687, 32.26973, 32.07264, 32.21056, 32.17221, 31.84086, 32.06914, 31.5363, 31.9675,
   31.74026, 31.52384, 31.09912, 31.38469, 31.08648, 31.11174, 30.65387, 31.191, 31.17301, 30.57322, 30.64655, 30.63373, 30.44632, 30.49052, 30.09971, 30.03065,
   29.91083, 29.96518, 30.01196, 29.76791, 29.70375, 29.68675, 29.61483, 29.28329, 29.32542, 29.2027, 28.99057, 28.86837, 28.78857, 28.75932, 28.55568, 28.48091,
   28.52029, 28.12404, 28.18981, 28.24946, 27.90572, 28.36245, 27.9017, 27.97601, 27.59026, 27.64308, 27.37178, 27.31431, 27.4557, 27.30199, 26.96074, 27.2279,
   27.31842, 26.93783, 26.66145, 26.81047, 26.49255, 26.47136, 26.51584, 26.3183, 26.54545, 26.09132, 26.14073, 26.05473, 25.90354, 25.8363, 25.97492, 25.77324,
   25.40042, 25.21195, 25.2986, 25.24753, 25.22308, 25.14955, 25.71657, 25.34956, 24.79679, 24.81036, 24.90742, 24.59, 24.66747, 24.69929, 24.42975, 24.60825,
   24.0944, 24.20592, 24.06643, 23.91206, 24.34692, 24.04077, 23.97299, 23.83684, 23.68334, 23.83684, 23.73777, 23.65726, 23.59789, 23.3949, 23.27708, 23.27949,
   23.15623, 22.88077, 22.77014, 22.77261, 22.68373, 22.59699, 22.78985, 22.35231, 22.87586, 22.14804, 22.34226, 22.38241, 22.42749, 22.22139, 21.97508, 22.21381,
   21.71823, 21.92395, 21.91371, 21.58866, 22.03119, 21.9904, 21.36922, 21.50533, 21.40595, 21.61464, 21.29557, 21.18991, 21.24809, 21.15015, 21.22166, 20.7727,
   20.57456, 20.30553, 20.70777, 20.95023, 20.5008, 20.84282, 20.63992, 20.44324, 20.38276, 20.24465, 20.44049, 20.24187, 20.58002, 20.23078, 19.88388, 19.83868,
   19.89516, 19.765, 19.73659, 19.81037, 19.77068, 19.29961, 19.45309, 19.38663, 19.48479, 19.50782, 19.12436, 18.99482, 19.05087, 19.13903, 19.21802, 19.01254,
   18.8078, 18.67306, 18.76299, 18.57061, 18.99482, 18.75102, 18.53431, 18.36399, 18.50401, 18.42195, 18.55247, 18.25366, 18.22905, 18.30891, 18.16738, 17.83069,
   17.6504, 17.93737, 17.98111, 17.80865, 18.05895, 17.83698, 17.37485, 17.78658, 17.64404, 17.60584, 17.33928, 17.03237, 17.42966, 16.84687, 17.29716, 17.30689,
   17.01919, 16.71311, 17.41356, 16.95643, 17.01589, 16.91999, 16.99279, 16.77343, 16.7433, 16.74665, 16.71311, 16.52403, 16.3979, 16.40816, 16.73324, 16.21206,
   16.34649, 16.05905, 16.5918, 15.81612, 16.1253, 16.09047, 16.50704, 15.745, 15.93981, 16.17047, 15.66282, 15.93981, 15.51885, 15.69503, 15.81257, 15.62336,
   15.64489, 15.31137, 15.56218, 15.81612, 15.62336, 15.2121, 15.2967, 15.11589, 15.05265, 14.84621, 15.14185, 14.91409, 15.03027, 15.19364, 14.59078, 14.89149,
   14.76662, 14.65601, 14.71333, 14.59847, 14.72476, 14.42057, 14.65601, 14.94791, 14.58309, 14.50593, 14.38161, 14.54456, 14.62535, 14.31513, 14.46331, 14.13367,
   14.27194, 14.30336, 14.09789, 13.84487, 13.82053, 14.01406, 13.8327, 14.13367, 13.59539, 14.09789, 13.59539, 13.83676, 13.85702, 13.71047, 13.42092, 13.71456,
   13.77172, 13.40419, 13.33704, 13.38743, 13.33704, 13.2272, 13.40419, 13.065, 13.34125, 13.34545, 13.13781, 13.21447, 12.86592, 12.88771, 13.09074, 12.98746,
   13.0306, 13.0306, 12.85719, 12.67699, 12.65041, 12.58816, 12.65041, 12.51663, 12.73881, 12.73, 12.62377, 12.51215, 12.59707, 12.4447, 12.52112, 12.39047,
   12.69027, 12.30413, 11.94781, 12.23553, 12.18958, 12.1527, 11.71063, 12.04137, 12.26759, 12.08788, 12.22176, 11.67224, 11.79657, 11.74413, 11.8866, 11.8866,
   11.91489, 11.63372, 11.80608, 11.91489, 11.47833, 11.46366, 11.42934, 11.89132, 11.61924, 11.49787, 11.71542, 11.33568, 11.26118, 11.23624, 11.52225, 11.30098,
   10.96326, 11.23125, 11.3109, 11.76799, 11.58054, 11.26617, 11.23125, 10.75658, 10.99902, 10.82936, 11.27114, 10.76179, 10.92737, 10.70953, 10.74614, 10.93763,
   10.77222, 10.57773, 10.67279, 10.81381, 10.74092, 10.13894, 10.69904, 10.42814, 10.57242, 10.48716, 10.5618, 10.42275, 10.20514, 10.33083, 10.3958, 10.59893,
   10.66753, 10.52455, 10.59893, 10.11678, 10.17761, 10.03324, 10.3958, 10.24903, 10.07231, 10.25997, 10.32539, 10.03883, 10.02764, 9.994011, 10.24903, 10.01084,
   9.841249, 9.841249, 9.835545, 9.738076, 9.892431, 9.801255, 9.937706, 9.481151, 9.846949, 9.88108, 9.598788, 9.551907, 9.743837, 9.49298, 9.469307, 9.397929,
   9.616309, 9.622142, 9.445574, 9.59294, 9.639621, 9.463379, 9.192683, 9.433686, 9.192683, 9.198785, 9.210977, 9.283792, 8.9765, 9.463379, 8.844254, 8.94519,
   9.100662, 9.088322, 9.319987, 9.038794, 9.210977, 9.241387, 9.289834, 8.982749, 8.982749, 8.9765, 8.850596, 8.774187, 9.119141, 8.894865, 8.9765, 8.521125,
   8.786968, 8.658308, 8.786968, 8.381697, 8.381697, 8.547425, 8.658308, 8.361589, 8.580186, 8.012035, 8.684193, 8.381697, 8.42843, 8.468281, 8.334703, 8.280669,
   8.547425, 8.314481, 8.144015, 8.260315, 8.137122, 8.157783, 8.314481, 8.341433, 8.053946, 8.246718, 7.884964, 8.109491, 8.233098, 8.144015, 8.081767, 8.260315,
   8.06091, 8.381697, 7.906284, 8.046976, 8.053946, 7.870718, 7.969903, 7.784697, 7.892077, 7.726817, 8.005028, 7.856446, 7.920466, 7.856446, 7.683121, 7.906284,
   7.734076, 7.475831, 7.820654, 7.62447, 7.884964, 7.653852, 7.468321, 7.791901, 7.734076, 7.445747, 7.653852, 7.639175, 7.161482, 7.430659, 7.453279, 7.483333,
   7.385212, 7.278063, 7.423104, 7.483333, 7.453279, 7.40797, 7.293466, 7.247158, 7.161482, 7.324176, 6.938626, 6.995005, 7.239411, 6.816242, 7.050934, 7.347124,
   6.954781, 6.816242, 6.873625, 7.106423, 6.881784, 7.027019, 6.930534, 6.683229, 6.873625, 7.18495, 7.050934, 6.750063, 6.7, 6.978943, 6.946708, 6.954781,
   6.547515, 6.840894, 6.7, 7.011031, 6.857279, 6.504523, 6.750063, 6.7915, 6.898072, 6.400166, 6.417677, 6.285157, 6.311884, 6.43514, 6.7, 6.408927,
   6.922433, 6.641116, 6.487247, 6.632662, 6.443854, 6.43514, 6.598735, 6.573175, 6.521754, 6.417677, 6.365, 6.408927, 6.285157, 6.478592, 6.590226, 6.391393,
   6.521754, 6.391393, 6.195236, 6.338497, 6.338497, 6.311884, 6.186172, 6.07635, 6.487247, 6.249344, 6.417677, 6.113176, 6.140651, 5.964505, 6.149783, 5.773285,
   6.085577, 6.294079, 6.294079, 6.294079, 5.936215, 6.07635, 5.850523, 5.973906, 5.555347, 5.763558, 5.869674, 5.821679, 6.020687, 5.95509, 5.94566, 5.744053,
   5.860107, 5.869674, 5.744053, 5.973906, 5.744053, 5.840925, 5.714672, 6.020687, 5.665364, 5.792692, 5.695, 5.744053, 5.401713, 5.484186, 5.307398, 5.432787,
   5.453405, 5.753814, 5.635572, 5.64552, 5.773285, 5.339021, 5.473945, 5.64552, 5.782997, 5.432787, 5.443106, 5.545237, 5.328501, 5.545237, 5.463685, 5.473945,
   5.443106, 5.685139, 5.704844, 5.412091, 5.25427, 5.36, 5.349521, 5.275585, 5.222133, 5.370459, 5.025, 5.264938, 5.189798, 5.200599, 5.124515, 5.135453,
   4.980133, 5.146368, 5.080527, 5.401713, 5.124515, 5.178974, 5.168128, 5.178974, 5.328501, 5.124515, 5.113553, 5.124515, 5.275585, 5.211377, 4.831439, 4.877674,
   5.275585, 4.819811, 5.102568, 5.135453, 4.923474, 5.002617, 5.157259, 5.013821, 5.124515, 4.889164, 4.946216, 4.617656, 4.749445, 5.013821, 5.013821, 5.091559,
   4.67802, 5.135453, 5.113553, 4.393484, 5.124515, 4.581056, 4.737615 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1171,Graph_from_VH_tagFirst_2b1c_H_mass_fy1171,Graph_from_VH_tagFirst_2b1c_H_mass_fex1171,Graph_from_VH_tagFirst_2b1c_H_mass_fey1171);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->SetMinimum(-1655.492);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->SetMaximum(17285.58);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1171);
   
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
   
   TH1D *data_mc_ratio__172 = new TH1D("data_mc_ratio__172","",1000,0,2000);
   data_mc_ratio__172->SetBinContent(43,1.146457);
   data_mc_ratio__172->SetBinContent(44,1.148401);
   data_mc_ratio__172->SetBinContent(45,1.137801);
   data_mc_ratio__172->SetBinContent(46,1.13444);
   data_mc_ratio__172->SetBinContent(47,1.156328);
   data_mc_ratio__172->SetBinContent(48,1.136146);
   data_mc_ratio__172->SetBinContent(78,1.129869);
   data_mc_ratio__172->SetBinContent(79,1.140311);
   data_mc_ratio__172->SetBinContent(80,1.128506);
   data_mc_ratio__172->SetBinContent(81,1.128563);
   data_mc_ratio__172->SetBinContent(82,1.150099);
   data_mc_ratio__172->SetBinContent(83,1.127842);
   data_mc_ratio__172->SetBinContent(1000,0.8991189);
   data_mc_ratio__172->SetBinContent(1001,1.294667);
   data_mc_ratio__172->SetBinError(43,0.01220395);
   data_mc_ratio__172->SetBinError(44,0.008570394);
   data_mc_ratio__172->SetBinError(45,0.008591158);
   data_mc_ratio__172->SetBinError(46,0.008637981);
   data_mc_ratio__172->SetBinError(47,0.008748523);
   data_mc_ratio__172->SetBinError(48,0.01228715);
   data_mc_ratio__172->SetBinError(78,0.01331009);
   data_mc_ratio__172->SetBinError(79,0.009500945);
   data_mc_ratio__172->SetBinError(80,0.009492631);
   data_mc_ratio__172->SetBinError(81,0.009486404);
   data_mc_ratio__172->SetBinError(82,0.009680087);
   data_mc_ratio__172->SetBinError(83,0.01348029);
   data_mc_ratio__172->SetBinError(1000,0.1798238);
   data_mc_ratio__172->SetBinError(1001,0.01021044);
   data_mc_ratio__172->SetMinimum(0.4);
   data_mc_ratio__172->SetMaximum(1.6);
   data_mc_ratio__172->SetEntries(3664.474);
   data_mc_ratio__172->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__172->SetLineColor(ci);
   data_mc_ratio__172->SetLineWidth(2);
   data_mc_ratio__172->SetMarkerStyle(20);
   data_mc_ratio__172->SetMarkerSize(1.2);
   data_mc_ratio__172->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__172->GetXaxis()->SetRange(1,150);
   data_mc_ratio__172->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__172->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__172->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__172->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__172->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__172->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__172->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__172->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__172->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__172->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__172->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__172->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__172->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1172[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1172[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1172[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1172[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009392435, 0.004628886, 0.004661663, 0.004694008, 0.004708868, 0.009429655, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01026648, 0.005149647, 0.005171983, 0.005168459,
   0.005224372, 0.01033778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1172,Graph_from_mc_statistical_error_fy1172,Graph_from_mc_statistical_error_fex1172,Graph_from_mc_statistical_error_fey1172);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1172 = new TH1F("Graph_Graph_from_mc_statistical_error1172","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1172->SetMinimum(0.7955354);
   Graph_Graph_from_mc_statistical_error1172->SetMaximum(1.204465);
   Graph_Graph_from_mc_statistical_error1172->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1172->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1172->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1172);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
