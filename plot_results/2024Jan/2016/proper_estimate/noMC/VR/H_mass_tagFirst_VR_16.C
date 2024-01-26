#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Fri Jan 26 12:50:32 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-45.44049,315.7258,45405.05);
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
   st->SetMaximum(40860);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",1000,0,2000);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(40860);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetRange(1,150);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7735.665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15770.81);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,15521.45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,15292.47);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,15243.24);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7582.68);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6419.227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,12776.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,12637.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,12676.15);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,12399.43);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6266.966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,28.42023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,18487.85);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5176022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,1.037569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.229825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.934281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.56216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,25.28856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.54884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.8075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,50.00556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,57.35476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,63.65594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,69.62094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,74.12062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,77.74388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,80.76632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,82.83692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,84.06035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,84.54376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,85.11865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,85.32773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,85.10463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.94733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.54447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,84.29204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,84.18173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,83.3653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,83.23182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,82.71521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,82.30879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,81.94925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,81.45358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,81.37199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,80.87537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,80.46398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,80.54364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,80.00433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,79.32659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,79.22108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.9205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.81476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.95991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.8347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,78.39519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,78.37421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.60646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,78.11643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,78.03934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.62486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.52141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,77.16781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,77.37224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,77.02289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,76.92723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.95607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.42131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.85946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.91144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.39923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,75.07776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,75.21614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.80453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.62951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.37771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.95192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.81971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.62824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,73.13349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.96436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.68225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,72.46747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,72.0435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,72.01148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,71.30897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,71.31502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.9139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.81114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,70.11266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,70.26316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,70.31216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.88773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.68143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,69.00144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,69.21726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,69.28418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.79495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.40026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,68.26696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.81377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.96181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,68.09943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.5868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.5609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.50435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.7408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.87034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.47347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.79919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.42089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,66.37017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.90286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.61451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.59477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.81041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,65.64022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,65.38347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,65.52048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,65.15856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,65.33478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.97531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,65.02624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,64.60247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,64.50341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,64.62317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.43564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,64.37988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.9862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,63.75189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.95586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.75534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.76837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,63.77791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.8484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,63.22919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,63.25556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.85001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.93756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.80091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.65621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,62.24711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,62.3894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,62.20228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,62.04786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.54651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.71201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,61.50916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,61.56355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,61.34799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,61.0813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.79446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.77573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.94139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.79858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,60.37574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,60.21684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,60.10423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,60.18991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,59.74182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.97368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,59.27687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,59.58423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.86451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.74857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,58.59276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.56528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,58.70233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,58.37969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.96042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,58.15943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.82671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.60453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,57.26078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,57.59655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.93573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.87646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,57.17838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.80582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.5096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,56.19333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,56.41483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,56.02271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.94256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.72862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.68034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.61275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.88584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.91117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,55.04286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.67625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.31038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.51662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.75849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.73285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,54.02335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.77189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.36586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.37666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,53.17651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,53.3716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,53.23554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.48798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,52.19237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.40313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.92766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.76796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.34028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.37028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.44122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.38391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.37948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.01428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.84906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.70049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.43659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.70005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,50.07773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.84456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.97872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.90332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.8169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.83074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,49.12397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,49.14067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.84685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,48.24228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,48.5408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.62663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,48.22735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,48.14465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,48.00323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,47.38414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,47.44988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,47.4084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,47.14618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,47.24213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.71418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,47.12542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.6561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,46.44216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.97718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.39088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.76872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.89437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,45.40727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,45.41765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,45.61489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,45.48632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,45.00849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,45.12277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.89367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.92097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.68842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,44.39081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,44.33657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,44.1424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.95178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.75344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.87001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,43.37388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,43.32346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,43.34372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,43.0474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.73883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,43.16125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,43.02961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,42.13327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,42.30212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,42.12106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,42.28955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.80333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.61076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,41.61085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.5585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,41.22141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,41.15769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,41.18972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.82265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.73654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.46156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,40.28722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,40.1815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.69377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,40.39131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,40.35093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.67911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.79117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.83288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,39.35134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.53655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,39.09722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.33412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.64782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.45896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.90961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.45169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.42033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,38.19038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.26539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.99845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.89192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.95693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.56776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.3559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.32997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.47823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,37.05739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.27903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,37.21113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.76463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.50514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.59702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.7589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.25169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.27977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,36.03243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.81385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.71356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.69601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.83086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.45673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.63907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,35.11349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.61105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.24961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,35.00986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.63272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.7822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.55491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.59957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,34.082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.6866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.65287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.98246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,34.09893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.99554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.90306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.88583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.45011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,33.35005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.28225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.29876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.41437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,33.04394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.95459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.96047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.90606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.66958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.57237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.42533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.12071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,32.04754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.95378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.96027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.69372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.65324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.65363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,31.31889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.35834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,31.40047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.99561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.58245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,31.01694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,31.10681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.80263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.70568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,30.39294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.41213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.61678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,30.4577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,30.0795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.29154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,30.35312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.99069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.67383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.84103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.37105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.44191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.51772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,29.29653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.56231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,29.05478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,29.04802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.96428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.89229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.69311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.91415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.71363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,28.26781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.98075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,28.15327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,28.13425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,28.02452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.92804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.58885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,28.14677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.55956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.46868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.65463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,27.25591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,27.36524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.39667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,27.11321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.32575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.97804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.92494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.69234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.46389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,27.09059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.78963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.68019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.48648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,26.25565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.42574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,26.39546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.37884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,26.1916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,26.01804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.91193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.84289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.69463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.46787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.30889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,25.34781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,25.22448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,25.0827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.31058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.87213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.44656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.58813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.96108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.93284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.87241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.71274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.50835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.66293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,24.08981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.42393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,24.33856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.94422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.54572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.40253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.6975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.86799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.88641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.9957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.6367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.6054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.63025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.51936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.58379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,23.05362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.94348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.70041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,23.03596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,23.34328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.78062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,23.20272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.8995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.68355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.56071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.51495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.69108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.41373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.80362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.55437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,22.20081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,22.03091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,22.08308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.87927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.91027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,22.00017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.94535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.43277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.73055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.49677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.56608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.66205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,21.21856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,21.13385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,21.12565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,21.15454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.38331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,21.07784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.96071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.71602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.76566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.61471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,21.05153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.89237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.52128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.45986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.51633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.63428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.58889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,20.25761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,20.20108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,20.23246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,20.12228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.73541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.59428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.9445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.90043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.69744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.93483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.73846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.42424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.72259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.56856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.54168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,19.21147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.89779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.34445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.69374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,19.16982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,19.20874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.91177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.56224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.35693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.81467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.93332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.7372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.9447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.67178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.59762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.55118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.50985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.42531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,18.10844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,18.14925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.56731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,18.04613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,18.18759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.73115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.45636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.57976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.90598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.8397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.30196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.59281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.69099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.96138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.39197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.75974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.25811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.40623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.48333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.3425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.32715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,17.06355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.18757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.52099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.28962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.93962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.96039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.82867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.72753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.45162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.8647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.55137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.73826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.82718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.21562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.4821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.32622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.32917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,16.22423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.36704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.99986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.25396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.58679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.20696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,16.08675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.97388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,16.16934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,16.23726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.8322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,16.07396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.6907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.84112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.81071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.64337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.41638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.50557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.40332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.64992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,15.15335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.73753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,15.13888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.39764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.32256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,15.12219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.94965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,15.20978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.23312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.87485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.80298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.8795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.83629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.66849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.8601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.45027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.72947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.77146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.65312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.56967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.35876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.36608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.50299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.34333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.45521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.48092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.26324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,14.07059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,14.00932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.97501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,14.02992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.95598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,14.15746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,14.09004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,14.02335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.88533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,14.03209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.92347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.80216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,14.11385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.70689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.28354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.58072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.55215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.52678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,13.00227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.40065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.59207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.43847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.62253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.83592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,13.07736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,13.05974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.21328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,13.10797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.26583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.91963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,13.08005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.19955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.65516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.8095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.68391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,13.17182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.92688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.88034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.95324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.56373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.49122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.56314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.73679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.55868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.1314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.43279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.48476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.27687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.76808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.47005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.38485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.96105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,12.1832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,12.03421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.4526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.97238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.14718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.85868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.93135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,12.06619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.90884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.7913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.77265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.97391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.82484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.23152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.91313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.59333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.6362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.6029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.75591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.56313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.29966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.53824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.51482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.73212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.74856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.64452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.79951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.23057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.30989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.13015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.4085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.32973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,11.17302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.38021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.44727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.12482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,11.08392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,11.08019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.30736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,11.08317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.95149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.87765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.74144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.99885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.91078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,11.01739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.54925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.79559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,11.00259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.60796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.61075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.82897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.51194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.5285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.49573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.62629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.68849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.48867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.55581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.68176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.41497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.18806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.4292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.19961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.19797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.24184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.26609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.986977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.53544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.918311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.87989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.03791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.01172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.22148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,10.10226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.11379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.30599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.29032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,10.00534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.938948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.836495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.791309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.722258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.09412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.868399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.878715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.479457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.777798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.621303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.707954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.232428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.323895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.447026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.54712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.283882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.50519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.868352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.559116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.258969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.342655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.324082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.248702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.125396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.458732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.289581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.07965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.133109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.999674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.060061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.289562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.252024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.925421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.10564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.631138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,9.008355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.096219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.033887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.979434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.217647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.979159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.265927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.692449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.858545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.815964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.752376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.83473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.622782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.891024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.575705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.811674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.706097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.83349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.735632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.537259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.766666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.565971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.277872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.688568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.464398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.718658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.488026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.418119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.570989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.520151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.279781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.484973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.43572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,8.006292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.261031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.278982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.24006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.198047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.195265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.153186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.22515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.236552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.178039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.038242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.014718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.979238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.164936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.725201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.749162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,7.989507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.69654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.836803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.136963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.722184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.528937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.618542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.893253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.601198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.705517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.67392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.467224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.621526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.89958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.763558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.560749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.382471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.748756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.715382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.665821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.240226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.781701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.358668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.705271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.555752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.204586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.447847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.519173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.633058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.029149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.19922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.960147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.971733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.066231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.438601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.123492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.688241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.390242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.273321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.365797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.143819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.168321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.310268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.290678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.301688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.05936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.018375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.141881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.943968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.213427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.312542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.066861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.233607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.021275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.853754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.006485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.94821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,7.02978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.834216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.705584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.234481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.881165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.186747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.759619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.764792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.70589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.930894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.407727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.776637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.932958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.98405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.948087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.579253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.666222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.471415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.631415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.171777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.358455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.490393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.498375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.583953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.672928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.461099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.384229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.511587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.450248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.409087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.584412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.392156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.39857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.322259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.626069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.171181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.415877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.302417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.355904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.984352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.064476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.896146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,5.895294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.033755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.438654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.268156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.179824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.38521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.998773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.986448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.258426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.338032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.065861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.029632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.139519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.869557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.140524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.049204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.039056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,5.960337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.311833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.332239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,6.018113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.928465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.84226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.926289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.860309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.771903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.916924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.687988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.846131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.709644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.719478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.577461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.661878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.517208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.696532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.615015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.96088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.625792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.707304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.645811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.742958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.901818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.671262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.602182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.777578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.778642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.800404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.332318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.419729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.881145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.331589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.668286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.669788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.539297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.552428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.672663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.577284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.647326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.445793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.414528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.139291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.237308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.611688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.527519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.591634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.137261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.707092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.548333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.894383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.681743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.056962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.203597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,85.60592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(7406459);

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
   
   TH1D *VH_tagFirst_H_mass__5 = new TH1D("VH_tagFirst_H_mass__5","",1000,0,2000);
   VH_tagFirst_H_mass__5->SetBinContent(43,9038);
   VH_tagFirst_H_mass__5->SetBinContent(44,18387);
   VH_tagFirst_H_mass__5->SetBinContent(45,17903);
   VH_tagFirst_H_mass__5->SetBinContent(46,17593);
   VH_tagFirst_H_mass__5->SetBinContent(47,17888);
   VH_tagFirst_H_mass__5->SetBinContent(48,8706);
   VH_tagFirst_H_mass__5->SetBinContent(78,7331);
   VH_tagFirst_H_mass__5->SetBinContent(79,14747);
   VH_tagFirst_H_mass__5->SetBinContent(80,14471);
   VH_tagFirst_H_mass__5->SetBinContent(81,14490);
   VH_tagFirst_H_mass__5->SetBinContent(82,14444);
   VH_tagFirst_H_mass__5->SetBinContent(83,7186);
   VH_tagFirst_H_mass__5->SetBinContent(1000,25);
   VH_tagFirst_H_mass__5->SetBinContent(1001,23616);
   VH_tagFirst_H_mass__5->SetEntries(3658448);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__5->SetLineColor(ci);
   VH_tagFirst_H_mass__5->SetLineWidth(2);
   VH_tagFirst_H_mass__5->SetMarkerStyle(20);
   VH_tagFirst_H_mass__5->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__5->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1005[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7735.665, 15770.81, 15521.45, 15292.47, 15243.24, 7582.68, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6419.227, 12776.41, 12637.72, 12676.15,
   12399.43, 6266.966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 28.42023 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1005[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5176022, 1.037569, 4.229825, 9.934281, 17.56216, 25.28856, 33.54884, 41.8075,
   50.00556, 57.35476, 63.65594, 69.62094, 74.12062, 77.74388, 80.76632, 82.83692, 84.06035, 84.54376, 85.11865, 85.32773, 85.10463, 84.94733, 84.54447, 84.29204,
   84.18173, 83.3653, 83.23182, 82.71521, 82.30879, 81.94925, 81.45358, 81.37199, 80.87537, 80.46398, 80.54364, 80.00433, 79.32659, 79.22108, 78.9205, 78.81476,
   78.95991, 78.8347, 78.39519, 78.37421, 78.60646, 78.11643, 78.03934, 77.62486, 77.52141, 77.16781, 77.37224, 77.02289, 76.92723, 76.95607, 76.42131, 75.85946,
   75.91144, 75.39923, 75.07776, 75.21614, 74.80453, 74.62951, 74.37771, 73.95192, 73.81971, 73.62824, 73.13349, 72.96436, 72.68225, 72.46747, 72.0435, 72.01148,
   71.30897, 71.31502, 70.9139, 70.81114, 70.11266, 70.26316, 70.31216, 69.88773, 69.68143, 69.00144, 69.21726, 69.28418, 68.79495, 68.40026, 68.26696, 67.81377,
   67.96181, 68.09943, 67.5868, 67.5609, 67.50435, 66.7408, 66.87034, 66.47347, 66.79919, 66.42089, 66.37017, 65.90286, 65.61451, 65.59477, 65.81041, 65.64022,
   65.38347, 65.52048, 65.15856, 65.33478, 64.97531, 65.02624, 64.60247, 64.50341, 64.62317, 64.43564, 64.37988, 63.9862, 63.75189, 63.95586, 63.75534, 63.76837,
   63.77791, 62.8484, 63.22919, 63.25556, 62.85001, 62.93756, 62.80091, 62.65621, 62.24711, 62.3894, 62.20228, 62.04786, 61.54651, 61.71201, 61.50916, 61.56355,
   61.34799, 61.0813, 60.79446, 60.77573, 60.94139, 60.79858, 60.37574, 60.21684, 60.10423, 60.18991, 59.74182, 59.97368, 59.27687, 59.58423, 58.86451, 58.74857,
   58.59276, 58.56528, 58.70233, 58.37969, 57.96042, 58.15943, 57.82671, 57.60453, 57.26078, 57.59655, 56.93573, 56.87646, 57.17838, 56.80582, 56.5096, 56.19333,
   56.41483, 56.02271, 55.94256, 55.72862, 55.68034, 55.61275, 54.88584, 54.91117, 55.04286, 54.67625, 54.31038, 54.51662, 53.75849, 53.73285, 54.02335, 53.77189,
   53.36586, 53.37666, 53.17651, 53.3716, 53.23554, 52.48798, 52.19237, 52.40313, 51.92766, 51.76796, 52.34028, 51.37028, 51.44122, 51.38391, 51.37948, 51.01428,
   50.84906, 50.70049, 50.43659, 50.70005, 50.07773, 49.84456, 49.97872, 49.90332, 49.8169, 48.83074, 49.12397, 49.14067, 48.84685, 48.24228, 48.5408, 47.62663,
   48.22735, 48.14465, 48.00323, 47.38414, 47.44988, 47.4084, 47.14618, 47.24213, 46.71418, 47.12542, 46.6561, 46.44216, 45.97718, 46.39088, 45.76872, 45.89437,
   45.40727, 45.41765, 45.61489, 45.48632, 45.00849, 45.12277, 44.89367, 44.92097, 44.68842, 44.39081, 44.33657, 44.1424, 43.95178, 43.75344, 43.87001, 43.37388,
   43.32346, 43.34372, 43.0474, 42.73883, 43.16125, 43.02961, 42.13327, 42.30212, 42.12106, 42.28955, 41.80333, 41.61076, 41.61085, 41.5585, 41.22141, 41.15769,
   41.18972, 40.82265, 40.73654, 40.46156, 40.28722, 40.1815, 40.69377, 40.39131, 40.35093, 39.67911, 39.79117, 39.83288, 39.35134, 39.53655, 39.09722, 39.33412,
   38.64782, 38.45896, 38.90961, 38.45169, 38.42033, 38.19038, 38.26539, 37.99845, 37.89192, 37.95693, 37.56776, 37.3559, 37.32997, 37.47823, 37.05739, 37.27903,
   37.21113, 36.76463, 36.50514, 36.59702, 36.7589, 36.25169, 36.27977, 36.03243, 35.81385, 35.71356, 35.69601, 35.83086, 35.45673, 35.63907, 35.11349, 35.61105,
   35.24961, 35.00986, 34.63272, 34.7822, 34.55491, 34.59957, 34.082, 34.6866, 34.65287, 33.98246, 34.09893, 33.99554, 33.90306, 33.88583, 33.45011, 33.35005,
   33.28225, 33.29876, 33.41437, 33.04394, 32.95459, 32.96047, 32.90606, 32.66958, 32.57237, 32.42533, 32.12071, 32.04754, 31.95378, 31.96027, 31.69372, 31.65324,
   31.65363, 31.31889, 31.35834, 31.40047, 30.99561, 31.58245, 31.01694, 31.10681, 30.80263, 30.70568, 30.39294, 30.41213, 30.61678, 30.4577, 30.0795, 30.29154,
   30.35312, 29.99069, 29.67383, 29.84103, 29.37105, 29.44191, 29.51772, 29.29653, 29.56231, 29.05478, 29.04802, 28.96428, 28.89229, 28.69311, 28.91415, 28.71363,
   28.26781, 27.98075, 28.15327, 28.13425, 28.02452, 27.92804, 28.58885, 28.14677, 27.55956, 27.46868, 27.65463, 27.25591, 27.36524, 27.39667, 27.11321, 27.32575,
   26.97804, 26.92494, 26.69234, 26.46389, 27.09059, 26.78963, 26.68019, 26.48648, 26.25565, 26.42574, 26.39546, 26.37884, 26.1916, 26.01804, 25.91193, 25.84289,
   25.69463, 25.46787, 25.30889, 25.34781, 25.22448, 25.0827, 25.31058, 24.87213, 25.44656, 24.58813, 24.96108, 24.93284, 24.87241, 24.71274, 24.50835, 24.66293,
   24.08981, 24.42393, 24.33856, 23.94422, 24.54572, 24.40253, 23.6975, 23.86799, 23.88641, 23.9957, 23.6367, 23.6054, 23.63025, 23.51936, 23.58379, 23.05362,
   22.94348, 22.70041, 23.03596, 23.34328, 22.78062, 23.20272, 22.8995, 22.68355, 22.56071, 22.51495, 22.69108, 22.41373, 22.80362, 22.55437, 22.20081, 22.03091,
   22.08308, 21.87927, 21.91027, 22.00017, 21.94535, 21.43277, 21.73055, 21.49677, 21.56608, 21.66205, 21.21856, 21.13385, 21.12565, 21.15454, 21.38331, 21.07784,
   20.96071, 20.71602, 20.76566, 20.61471, 21.05153, 20.89237, 20.52128, 20.45986, 20.51633, 20.63428, 20.58889, 20.25761, 20.20108, 20.23246, 20.12228, 19.73541,
   19.59428, 19.9445, 19.90043, 19.69744, 19.93483, 19.73846, 19.42424, 19.72259, 19.56856, 19.54168, 19.21147, 18.89779, 19.34445, 18.69374, 19.16982, 19.20874,
   18.91177, 18.56224, 19.35693, 18.81467, 18.93332, 18.7372, 18.9447, 18.67178, 18.59762, 18.55118, 18.50985, 18.42531, 18.10844, 18.14925, 18.56731, 18.04613,
   18.18759, 17.73115, 18.45636, 17.57976, 17.90598, 17.8397, 18.30196, 17.59281, 17.69099, 17.96138, 17.39197, 17.75974, 17.25811, 17.40623, 17.48333, 17.3425,
   17.32715, 17.06355, 17.18757, 17.52099, 17.28962, 16.93962, 16.96039, 16.82867, 16.72753, 16.45162, 16.8647, 16.55137, 16.73826, 16.82718, 16.21562, 16.4821,
   16.32622, 16.32917, 16.328, 16.22423, 16.36704, 15.99986, 16.25396, 16.58679, 16.20696, 16.08675, 15.97388, 16.16934, 16.23726, 15.8322, 16.07396, 15.6907,
   15.84112, 15.81071, 15.64337, 15.377, 15.41638, 15.50557, 15.40332, 15.64992, 15.15335, 15.73753, 15.13888, 15.39764, 15.32256, 15.12219, 14.94965, 15.20978,
   15.23312, 14.87485, 14.80298, 14.8795, 14.83629, 14.66849, 14.8601, 14.45027, 14.72947, 14.77146, 14.65312, 14.56967, 14.35876, 14.36608, 14.50299, 14.34333,
   14.45521, 14.48092, 14.26324, 14.07059, 14.00932, 13.97501, 14.02992, 13.95598, 14.15746, 14.09004, 14.02335, 13.88533, 14.03209, 13.819, 13.92347, 13.80216,
   14.11385, 13.70689, 13.28354, 13.58072, 13.55215, 13.52678, 13.00227, 13.40065, 13.59207, 13.43847, 13.62253, 12.83592, 13.07736, 13.05974, 13.21328, 13.10797,
   13.26583, 12.91963, 13.08005, 13.19955, 12.65516, 12.8095, 12.68391, 13.17182, 12.92688, 12.88034, 12.95324, 12.56373, 12.49122, 12.56314, 12.73679, 12.55868,
   12.1314, 12.43279, 12.48476, 13.27687, 12.76808, 12.47005, 12.38485, 11.96105, 12.1832, 12.03421, 12.4526, 11.97238, 12.14718, 11.85868, 11.93135, 12.06619,
   11.90884, 11.7913, 11.77265, 11.97391, 11.82484, 11.23152, 11.91313, 11.59333, 11.6362, 11.6029, 11.75591, 11.56313, 11.29966, 11.53824, 11.51482, 11.73212,
   11.74856, 11.64452, 11.79951, 11.23057, 11.30989, 11.13015, 11.4085, 11.32973, 11.17302, 11.38021, 11.44727, 11.12482, 11.08392, 11.08019, 11.30736, 11.08317,
   10.873, 10.95149, 10.87765, 10.74144, 10.99885, 10.91078, 11.01739, 10.54925, 10.79559, 11.00259, 10.60796, 10.61075, 10.82897, 10.51194, 10.5285, 10.49573,
   10.62629, 10.68849, 10.48867, 10.55581, 10.68176, 10.41497, 10.18806, 10.4292, 10.19961, 10.19797, 10.24184, 10.26609, 9.986977, 10.53544, 9.918311, 9.87989,
   10.03791, 10.01172, 10.22148, 10.10226, 10.11379, 10.30599, 10.29032, 10.00534, 9.938948, 9.836495, 9.791309, 9.722258, 10.09412, 9.868399, 9.878715, 9.479457,
   9.777798, 9.621303, 9.707954, 9.232428, 9.323895, 9.447026, 9.54712, 9.283882, 9.50519, 8.868352, 9.559116, 9.258969, 9.342655, 9.324082, 9.248702, 9.125396,
   9.458732, 9.289581, 9.07965, 9.133109, 8.999674, 9.060061, 9.289562, 9.252024, 8.925421, 9.10564, 8.631138, 9.008355, 9.096219, 9.033887, 8.979434, 9.217647,
   8.979159, 9.265927, 8.692449, 8.858545, 8.815964, 8.752376, 8.83473, 8.622782, 8.891024, 8.575705, 8.811674, 8.706097, 8.83349, 8.735632, 8.537259, 8.766666,
   8.565971, 8.277872, 8.688568, 8.464398, 8.718658, 8.488026, 8.418119, 8.570989, 8.520151, 8.279781, 8.484973, 8.43572, 8.006292, 8.261031, 8.278982, 8.24006,
   8.198047, 8.195265, 8.153186, 8.22515, 8.236552, 8.178039, 8.038242, 8.014718, 7.979238, 8.164936, 7.725201, 7.749162, 7.989507, 7.69654, 7.836803, 8.136963,
   7.722184, 7.528937, 7.618542, 7.893253, 7.601198, 7.705517, 7.67392, 7.467224, 7.621526, 7.89958, 7.763558, 7.560749, 7.382471, 7.748756, 7.715382, 7.665821,
   7.240226, 7.781701, 7.358668, 7.705271, 7.555752, 7.204586, 7.447847, 7.519173, 7.633058, 7.029149, 7.19922, 6.960147, 6.971733, 7.066231, 7.438601, 7.123492,
   7.688241, 7.390242, 7.273321, 7.365797, 7.143819, 7.168321, 7.310268, 7.290678, 7.301688, 7.05936, 7.018375, 7.141881, 6.943968, 7.213427, 7.312542, 7.066861,
   7.233607, 7.021275, 6.853754, 7.006485, 6.94821, 7.02978, 6.834216, 6.705584, 7.234481, 6.881165, 7.186747, 6.759619, 6.764792, 6.70589, 6.930894, 6.407727,
   6.776637, 6.932958, 6.98405, 6.948087, 6.579253, 6.666222, 6.471415, 6.631415, 6.171777, 6.358455, 6.490393, 6.498375, 6.583953, 6.672928, 6.461099, 6.384229,
   6.511587, 6.450248, 6.409087, 6.584412, 6.392156, 6.39857, 6.322259, 6.626069, 6.171181, 6.415877, 6.302417, 6.355904, 5.984352, 6.064476, 5.896146, 5.895294,
   6.033755, 6.438654, 6.268156, 6.179824, 6.38521, 5.998773, 5.986448, 6.258426, 6.338032, 6.065861, 6.029632, 6.139519, 5.869557, 6.140524, 6.049204, 6.039056,
   5.960337, 6.311833, 6.332239, 6.018113, 5.928465, 5.84226, 5.926289, 5.860309, 5.771903, 5.916924, 5.687988, 5.846131, 5.709644, 5.719478, 5.577461, 5.661878,
   5.517208, 5.696532, 5.615015, 5.96088, 5.625792, 5.707304, 5.645811, 5.742958, 5.901818, 5.671262, 5.602182, 5.777578, 5.778642, 5.800404, 5.332318, 5.419729,
   5.881145, 5.331589, 5.668286, 5.669788, 5.539297, 5.552428, 5.672663, 5.577284, 5.647326, 5.445793, 5.414528, 5.139291, 5.237308, 5.611688, 5.527519, 5.591634,
   5.137261, 5.707092, 5.548333, 4.894383, 5.681743, 5.056962, 5.203597 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1005,Graph_from_VH_tagFirst_2b1c_H_mass_fy1005,Graph_from_VH_tagFirst_2b1c_H_mass_fex1005,Graph_from_VH_tagFirst_2b1c_H_mass_fey1005);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetMinimum(-1678.996);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetMaximum(17445.02);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005);
   
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",1000,0,2000);
   data_mc_ratio__6->SetBinContent(43,1.168355);
   data_mc_ratio__6->SetBinContent(44,1.165888);
   data_mc_ratio__6->SetBinContent(45,1.153436);
   data_mc_ratio__6->SetBinContent(46,1.150436);
   data_mc_ratio__6->SetBinContent(47,1.173504);
   data_mc_ratio__6->SetBinContent(48,1.148143);
   data_mc_ratio__6->SetBinContent(78,1.142038);
   data_mc_ratio__6->SetBinContent(79,1.154237);
   data_mc_ratio__6->SetBinContent(80,1.145064);
   data_mc_ratio__6->SetBinContent(81,1.143091);
   data_mc_ratio__6->SetBinContent(82,1.164892);
   data_mc_ratio__6->SetBinContent(83,1.146647);
   data_mc_ratio__6->SetBinContent(1000,0.879655);
   data_mc_ratio__6->SetBinContent(1001,1.27738);
   data_mc_ratio__6->SetBinError(43,0.01228962);
   data_mc_ratio__6->SetBinError(44,0.008598081);
   data_mc_ratio__6->SetBinError(45,0.008620463);
   data_mc_ratio__6->SetBinError(46,0.008673459);
   data_mc_ratio__6->SetBinError(47,0.008774121);
   data_mc_ratio__6->SetBinError(48,0.01230514);
   data_mc_ratio__6->SetBinError(78,0.01333825);
   data_mc_ratio__6->SetBinError(79,0.009504803);
   data_mc_ratio__6->SetBinError(80,0.009518762);
   data_mc_ratio__6->SetBinError(81,0.009496131);
   data_mc_ratio__6->SetBinError(82,0.009692635);
   data_mc_ratio__6->SetBinError(83,0.01352653);
   data_mc_ratio__6->SetBinError(1000,0.175931);
   data_mc_ratio__6->SetBinError(1001,0.01020183);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(3669.93);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__6->GetXaxis()->SetRange(1,150);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1006[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01040169, 0.005107135, 0.005154436, 0.005187298, 0.005197129, 0.01040799, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01132259, 0.005671976, 0.005700671, 0.005680863,
   0.005750986, 0.01137951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1830948 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.7802863);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.219714);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
