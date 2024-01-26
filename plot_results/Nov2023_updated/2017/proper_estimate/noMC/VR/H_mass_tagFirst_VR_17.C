#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_17/H_mass_tagFirst_VR_17
//=========  (Thu Jan 25 12:40:55 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_17 = new TCanvas("H_mass_tagFirst_VR_17", "H_mass_tagFirst_VR_17",0,0,600,600);
   H_mass_tagFirst_VR_17->SetHighLightColor(2);
   H_mass_tagFirst_VR_17->Range(0,0,1,1);
   H_mass_tagFirst_VR_17->SetFillColor(0);
   H_mass_tagFirst_VR_17->SetFillStyle(4000);
   H_mass_tagFirst_VR_17->SetBorderMode(0);
   H_mass_tagFirst_VR_17->SetBorderSize(2);
   H_mass_tagFirst_VR_17->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-16.4898,315.7258,16483.31);
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
   st->SetMaximum(14833.33);
   
   TH1F *st_stack_93 = new TH1F("st_stack_93","",1000,0,2000);
   st_stack_93->SetMinimum(0.01);
   st_stack_93->SetMaximum(14833.33);
   st_stack_93->SetDirectory(nullptr);
   st_stack_93->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_93->SetLineColor(ci);
   st_stack_93->SetLineWidth(0);
   st_stack_93->GetXaxis()->SetRange(1,150);
   st_stack_93->GetXaxis()->SetLabelFont(42);
   st_stack_93->GetXaxis()->SetTitleOffset(1);
   st_stack_93->GetXaxis()->SetTitleFont(42);
   st_stack_93->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_93->GetYaxis()->SetLabelFont(42);
   st_stack_93->GetYaxis()->SetLabelSize(0.05);
   st_stack_93->GetYaxis()->SetTitleSize(0.057);
   st_stack_93->GetYaxis()->SetTitleOffset(1.2);
   st_stack_93->GetYaxis()->SetTitleFont(42);
   st_stack_93->GetZaxis()->SetLabelFont(42);
   st_stack_93->GetZaxis()->SetTitleOffset(1);
   st_stack_93->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_93);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,2663.032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,5315.827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,5284.763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,5225.459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,5099.791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,2599.492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2037.869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,4255.768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,4231.764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,4136.807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,4162.929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,2063.285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,18.709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,6773.364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.497652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,3.599908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,7.579231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,10.99412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,15.11318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,19.26358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,23.1639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,27.31134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,30.96758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,34.04758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,36.77305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,39.32426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,40.9206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,42.57566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,43.48066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,44.63601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,45.52742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,45.60809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,45.70907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,45.82342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,45.75267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,45.58623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,45.3368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,45.31481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,45.09152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,44.80459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,44.70993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,44.40229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,44.37141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,44.16029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,43.25511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,43.31556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,43.31844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,43.19168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,42.94866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,42.42907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,42.44522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,42.24954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,41.89859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,41.88669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,41.92386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,41.71976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,41.83906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,41.48013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,41.45308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,41.13927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,41.04071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,41.2255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,41.09381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,40.59347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,40.63028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,40.66401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,40.63795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,40.58118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,40.25438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,40.18312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,40.08843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,40.04489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,39.61786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,39.69799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,39.61629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,39.183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,39.03803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,39.29573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,39.09385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,39.09704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,38.38946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,38.75934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,38.64987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,38.21378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,38.33424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,38.04384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,37.74955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,37.97499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,37.87313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,37.14224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,37.43964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,37.12043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,37.40801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,37.07676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,36.74423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,36.70861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,36.57428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,36.24745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,36.52655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,36.1114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,36.21821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,36.09069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,35.99562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,35.63027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,35.67746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,35.46728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,35.42685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,35.5059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,35.53046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,35.35291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,35.11064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,35.13547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,34.79871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,34.74854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,34.72881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,34.76109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,34.71087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,34.43515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,34.84165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,34.80945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,34.45866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,34.1973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,33.90454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,33.93577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,34.40256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,33.95963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,34.02195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,33.561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,33.73136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,33.55914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,33.95045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,33.87329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,33.32066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,33.17824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,33.02013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,33.09175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,33.0239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,33.1181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,33.50898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,32.96158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,33.20077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,33.09175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,33.19889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,32.66538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,32.44721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,32.62339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,32.63485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,32.70541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,32.428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,32.28937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,32.2121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,32.33372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,32.35298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,32.36261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,32.04921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,32.09583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,31.99863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,31.86204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,31.73272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,31.81899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,31.9811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,32.01031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,31.38128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,31.69342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,31.70718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,31.53774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,31.4507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,31.15412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,31.04394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,31.16212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,31.08405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,31.30376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,30.90514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,31.12211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,30.71709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,30.66227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,30.54827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,30.49111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,30.47885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,30.37647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,30.21193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,30.21193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,29.95512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,30.09416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,30.33131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,29.98215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,30.22224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,30.45431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,30.16446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,29.53832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,29.89266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,29.6478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,29.8238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,29.6646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,29.63939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,29.00835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,29.29049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,29.44325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,29.10699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,28.72127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,28.93524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,28.90507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,28.69306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,28.88135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,28.89645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,28.62784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,28.85977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,28.42034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,28.4532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,28.51445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,28.0274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,28.00294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,28.16268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,28.15382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,28.02962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,27.81093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,27.54984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,27.73915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,27.85123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,27.4229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,27.5023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,27.24968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,27.51363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,27.29309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,27.02007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,27.02929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,27.16954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,27.21307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,27.12134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,27.06384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,27.04542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,26.39014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,26.57834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,26.58538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,26.72795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,26.3807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,26.30738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,26.16252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,26.22674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,26.06469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,26.02163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,26.07903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,25.89201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,25.66725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,26.11484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,25.66968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,25.59919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,25.31037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,25.6624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,25.28821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,25.23395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,25.41355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,25.40374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,25.3276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,24.82571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,25.09033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,24.99828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,24.94839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,24.41576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,24.43107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,24.49728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,24.50746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,24.47438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,24.60894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,24.30835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,24.20304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,24.39279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,24.16697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,23.81115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,23.98842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,24.30322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,23.8373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,23.68785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,23.77973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,23.56655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,23.67996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,23.68785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,23.63255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,23.20958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,23.40739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,23.23105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,23.08037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,23.00466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,23.16121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,22.75687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,22.96671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,22.92327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,22.97485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,22.56717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,22.73495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,22.6113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,22.16323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,22.267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,22.38421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,22.21097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,22.09002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,21.92582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,22.14073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,21.67431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,22.00524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,21.46635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,21.63691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,21.90876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,21.58213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,21.42858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,21.14762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,21.42568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,21.16529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,21.32073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,21.16823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,21.51274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,21.0827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,21.04425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,21.10633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,20.64069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,21.10043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,20.66784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,20.70097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,20.6588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,20.77008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,20.54084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,20.36721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,20.5196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,20.43135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,19.87487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,20.32741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,20.23217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,20.09001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,19.87487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,19.70486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,20.02789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,19.92809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,19.73646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,19.52061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,19.12074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,19.31849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,19.32494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,19.42142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,19.40537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,19.46308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,19.47588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,19.17606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,18.91764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,19.13703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,18.83512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,19.05546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,19.08487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,18.97026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,18.85165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,18.69567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,18.64896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,18.65564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,18.30842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,18.44742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,18.76553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,18.18207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,18.15807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,18.19577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,18.0962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,18.2573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,18.04793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,18.03412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,17.79764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,18.34242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,17.54378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,17.88495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,17.78013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,17.56508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,17.52957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,17.76961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,18.20604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,17.55088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,17.06856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,17.14505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,17.47261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,17.17047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,17.09774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,17.09045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,17.14141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,17.00273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,16.96238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,17.04665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,17.03568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,16.72565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,17.03568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,16.63975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,16.49307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,16.61352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,16.47417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,16.23416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,16.32601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,16.36794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,16.5044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,16.33746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,16.46661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,16.11475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,16.14179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,16.11088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,16.07216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,15.88892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,15.96325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,15.71544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,16.07604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,15.37071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,15.84573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,15.60803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,15.75108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,15.62798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,15.50791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,15.41523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,15.43543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,15.54403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,15.10906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,15.03879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,14.89309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,15.41523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,15.03465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,15.03465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,15.09256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,15.1173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,15.17079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,14.90145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,14.847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,14.67818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,14.63567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,14.93903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,14.93069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,14.43852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,14.73749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,14.85958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,14.7797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,14.37365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,14.44715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,14.30412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,14.41261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,14.48591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,14.29977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,14.00481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,13.97809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,14.19481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,14.10676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,14.05809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,14.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,13.84822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,14.0137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,13.92002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,13.74889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,13.55722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,14.10676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,13.89762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,13.85272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,13.35348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,13.42793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,13.5158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,13.16553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,13.78961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,13.52501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,13.68074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,13.32078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,13.08959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,13.20333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,13.37679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,13.32546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,13.1371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,12.93156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,12.89296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,12.64903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,12.7862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,13.08959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,12.47045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,12.55013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,12.85909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,12.81054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,12.50537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,12.56006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,12.50537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,12.19256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,12.46045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,12.48043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,12.33481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,12.44544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,12.33481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,12.30953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,12.29434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,12.4954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,12.14648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,12.21298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,12.25881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,12.01238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,12.38522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,11.68638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,12.34996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,11.80309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,11.882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,12.01756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,11.68638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,11.70769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,12.04863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,11.80309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,11.9604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,11.73426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,11.87151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,11.74488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,11.37843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,11.57388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,11.61686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,11.68638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,11.36748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,11.30151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,11.17957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,11.57926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,11.16284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,11.18514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,11.06192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,11.34004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,11.14049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,11.1237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,11.09566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,11.14049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,11.15167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,10.88592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,11.0788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,11.1349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,10.89736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,10.96575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,10.83428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,10.74768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,11.08442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,11.06192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,10.64867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,10.73027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,10.68372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,10.71284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,10.6311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,10.37604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,10.54874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,10.74188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,10.75347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,10.21873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,10.39404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,10.20652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,10.20652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,10.35199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,10.34597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,10.25524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,9.769877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,10.31582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,10.28557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,10.04656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,10.07133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,10.08987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,10.26739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,10.10222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,9.744335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,10.13915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,10.04656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,10.08987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,9.78899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,9.511369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,10.0837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,10.10838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,9.763498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,9.498259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,10.04035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,9.359494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,9.465404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,9.934301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,9.680184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,9.884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,9.725134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,9.491697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,9.171209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,9.339502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,9.372798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,9.693048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,9.782623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,9.524461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,9.699474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,9.465404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,9.352835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,9.103021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,9.372798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,9.061861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,9.272551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,8.832057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,8.874282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,9.550591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,8.839109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,8.916308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,9.089322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,9.027419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,8.916308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,9.013605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,8.930272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,8.853195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,8.775441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,8.86023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,8.803795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,8.617828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,8.732738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,8.668289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,8.937246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,8.596112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,8.711308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,8.457279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,8.732738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,8.661098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,8.523324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,8.19538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,8.972035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,8.675473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,8.501366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,8.12667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,8.472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,8.53063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,8.390714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,8.149638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,8.874282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,8.383286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,8.218155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,8.149638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,8.255975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,8.331099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,8.248425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,8.255975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,8.390714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,7.979674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,8.003064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,8.003064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,8.111322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,8.202979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,8.141989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,8.157279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,7.853754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,8.248425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,7.885423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,7.845817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,7.853754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,7.652858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,8.003064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,7.717714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,7.869604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,7.798025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,7.636558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,7.940539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,7.995275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,7.813988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,7.677243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,7.4214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,7.488261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,7.199816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,7.446543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,7.821957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,7.51318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,7.345454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,7.446543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,7.701551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,7.413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,7.709636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,7.471602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,7.538017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,7.32847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,7.268715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,7.217102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,7.345454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,7.251551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,7.496576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,7.00685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,7.242954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,7.496576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,7.587447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,6.944327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,7.217102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,7.165117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,7.336967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,6.953294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,6.93535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,7.077628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,7.217102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,7.086426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,6.771714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,7.033475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,7.156417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,7.277281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,7.015736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,7.173808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,6.971191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,6.944327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,6.944327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,6.899322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,6.899322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,6.679073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,6.826695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,6.808417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,6.734811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,6.716283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,6.944327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,7.042328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,6.393102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,6.65103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,6.725553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,6.707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,7.033475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,6.613453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,6.594584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,6.556684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,6.528114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,6.58513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,6.65103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,6.314656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,6.575661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,6.324515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,6.45131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,6.412563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,6.480219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,6.508998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,6.489826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,6.255176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,6.344187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,6.16488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,6.275065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,6.383349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,6.431966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,6.144634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,6.245208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,6.174978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,6.174978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,6.052689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,6.431966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,6.324515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,6.215206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,6.073242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,6.16488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,6.373581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,6.18506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,6.114139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,6.021729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,5.927878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,5.990609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,6.042387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,5.832517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,6.103941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,6.205174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,5.885686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,6.205174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,5.959326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,5.724698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,6.195125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,5.927878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,5.768068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,5.592572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,5.648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,5.938379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,6.154765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,5.811113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,5.938379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,5.917358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,6.042387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,5.959326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,5.800382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,6.134486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,5.713804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,5.735571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,5.614809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,5.55905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,5.800382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,5.502725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,5.502725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,6.093725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,5.800382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,5.502725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,5.625894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,5.614809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,5.318481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,5.502725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,5.502725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,5.223923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,5.28322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,5.54783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,5.724698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,5.139758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,4.979678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,5.54783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,5.151865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,5.58142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,5.821825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,5.341859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,5.28322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,5.445819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,5.35351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,5.592572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,5.200015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,5.457248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,5.271414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,5.306754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,5.259582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,5.365136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,5.054191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,5.35351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,4.775295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,5.041848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,5.306754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,5.271414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,5.017073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,5.054191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,5.017073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,4.929377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,5.200015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,5.091038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,4.65639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,5.235836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,4.65639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,4.64299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,5.115456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,4.616074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,4.929377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,4.709607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,4.775295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,5.35351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,4.827202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,4.942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,4.827202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,5.004639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,5.054191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,4.852948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,4.852948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,4.916721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,4.878557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,4.840092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,4.929377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,5.247722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,4.65639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,5.004639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,4.852948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,4.735992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,4.852948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,4.775295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,4.865769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,4.629552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,4.616074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,4.64299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,4.561765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,5.004639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,4.629552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,4.629552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,4.814278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,4.709607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,4.709607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,4.366369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,4.337737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,4.465136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,4.65639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,4.589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,4.683074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,4.709607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,4.534367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,4.602557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,4.146811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,4.602557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,4.366369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,4.465136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,4.891311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,4.308914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,4.65639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,4.176752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,4.423077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,4.366369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,4.775295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,4.221266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.070995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.024819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,4.20648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,4.323349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.070995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,4.176752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,4.116652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,4.548087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,4.29443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,4.250683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,4.131759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,4.265315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,3.883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,4.265315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,4.131759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,4.250683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,3.850775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,4.176752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,4.146811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,4.176752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,4.380615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,4.250683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,4.191643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,4.191643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,4.08627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.070995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,4.236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,3.930842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,3.914959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,4.479068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,3.899012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,3.850775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,3.719086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,4.116652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,3.978108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,4.131759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,3.962415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,3.769009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,3.752441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.009309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,4.221266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.024819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,3.883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.070995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,3.850775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.070995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,4.116652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,3.752441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,3.866921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,3.993739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,3.582559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,3.330195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,3.883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,3.818279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,3.769009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,3.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,3.685428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.009309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,3.440618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,3.899012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.08627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,3.494522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,3.801926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,3.719086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.235298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,3.702295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,3.719086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,3.422462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,3.978108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,3.769009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,3.769009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,3.735801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,3.65146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,3.685428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,3.818279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,3.292565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,3.45868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,3.599908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,3.292565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,3.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,3.565125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,3.476647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,3.719086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,3.404209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,3.702295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,3.547606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,3.292565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,3.582559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,3.599908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,3.422462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,3.599908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,3.348852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,3.440618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,3.330195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,3.494522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,3.801926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,3.404209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.235298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.077383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,3.565125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.196551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.077383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,3.367405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,3.494522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,3.494522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,3.367405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,3.404209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,3.617174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,3.273587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.235298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,3.348852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,3.385857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,3.273587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.117612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,3.476647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.137533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.235298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,2.95341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.016033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.254499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,3.404209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,2.974431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.077383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,2.974431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,3.422462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.117612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,2.974431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,2.974431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,3.367405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.077383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.05707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,3.45868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,48.89783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(3075643);

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
   
   TH1D *VH_tagFirst_H_mass__185 = new TH1D("VH_tagFirst_H_mass__185","",1000,0,2000);
   VH_tagFirst_H_mass__185->SetBinContent(43,3356);
   VH_tagFirst_H_mass__185->SetBinContent(44,6675);
   VH_tagFirst_H_mass__185->SetBinContent(45,6502);
   VH_tagFirst_H_mass__185->SetBinContent(46,6537);
   VH_tagFirst_H_mass__185->SetBinContent(47,6234);
   VH_tagFirst_H_mass__185->SetBinContent(48,3242);
   VH_tagFirst_H_mass__185->SetBinContent(78,2542);
   VH_tagFirst_H_mass__185->SetBinContent(79,5315);
   VH_tagFirst_H_mass__185->SetBinContent(80,5131);
   VH_tagFirst_H_mass__185->SetBinContent(81,5115);
   VH_tagFirst_H_mass__185->SetBinContent(82,5163);
   VH_tagFirst_H_mass__185->SetBinContent(83,2526);
   VH_tagFirst_H_mass__185->SetBinContent(1000,26);
   VH_tagFirst_H_mass__185->SetBinContent(1001,9229);
   VH_tagFirst_H_mass__185->SetEntries(1360367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__185->SetLineColor(ci);
   VH_tagFirst_H_mass__185->SetLineWidth(2);
   VH_tagFirst_H_mass__185->SetMarkerStyle(20);
   VH_tagFirst_H_mass__185->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__185->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__185->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__185->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__185->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__185->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__185->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__185->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__185->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__185->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__185->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1185[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1185[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 2663.032, 5315.827, 5284.763, 5225.459, 5099.791, 2599.492, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2037.869, 4255.768, 4231.764, 4136.807,
   4162.929, 2063.285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 18.709 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1185[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1185[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.497652, 3.599908, 7.579231, 10.99412, 15.11318, 19.26358,
   23.1639, 27.31134, 30.96758, 34.04758, 36.77305, 39.32426, 40.9206, 42.57566, 43.48066, 44.63601, 45.52742, 45.60809, 45.70907, 45.82342, 45.75267, 45.58623,
   45.3368, 45.31481, 45.09152, 44.80459, 44.70993, 44.40229, 44.37141, 44.16029, 43.25511, 43.31556, 43.31844, 43.19168, 42.94866, 42.42907, 42.44522, 42.24954,
   41.89859, 41.88669, 41.92386, 41.71976, 41.83906, 41.48013, 41.45308, 41.13927, 41.04071, 41.2255, 41.09381, 40.59347, 40.63028, 40.66401, 40.63795, 40.58118,
   40.25438, 40.18312, 40.08843, 40.04489, 39.61786, 39.69799, 39.61629, 39.183, 39.03803, 39.29573, 39.09385, 39.09704, 38.38946, 38.75934, 38.64987, 38.21378,
   38.33424, 38.04384, 37.74955, 37.97499, 37.87313, 37.14224, 37.43964, 37.12043, 37.40801, 37.07676, 36.74423, 36.70861, 36.57428, 36.24745, 36.52655, 36.1114,
   36.21821, 36.09069, 35.99562, 35.63027, 35.67746, 35.46728, 35.42685, 35.5059, 35.53046, 35.35291, 35.11064, 35.13547, 34.79871, 34.74854, 34.72881, 34.76109,
   34.71087, 34.43515, 34.84165, 34.80945, 34.45866, 34.1973, 33.90454, 33.93577, 34.40256, 33.95963, 34.02195, 33.561, 33.73136, 33.55914, 33.95045, 33.87329,
   33.32066, 33.17824, 33.02013, 33.09175, 33.0239, 33.1181, 33.50898, 32.96158, 33.20077, 33.09175, 33.19889, 32.66538, 32.44721, 32.62339, 32.63485, 32.70541,
   32.428, 32.28937, 32.2121, 32.33372, 32.35298, 32.36261, 32.04921, 32.09583, 31.99863, 31.86204, 31.73272, 31.81899, 31.9811, 32.01031, 31.38128, 31.69342,
   31.70718, 31.53774, 31.4507, 31.15412, 31.04394, 31.16212, 31.08405, 31.30376, 30.90514, 31.12211, 30.71709, 30.66227, 30.54827, 30.49111, 30.47885, 30.37647,
   30.21193, 30.21193, 29.95512, 30.09416, 30.33131, 29.98215, 30.22224, 30.45431, 30.16446, 29.53832, 29.89266, 29.6478, 29.8238, 29.6646, 29.63939, 29.00835,
   29.29049, 29.44325, 29.10699, 28.72127, 28.93524, 28.90507, 28.69306, 28.88135, 28.89645, 28.62784, 28.85977, 28.42034, 28.4532, 28.51445, 28.0274, 28.00294,
   28.16268, 28.15382, 28.02962, 27.81093, 27.54984, 27.73915, 27.85123, 27.4229, 27.5023, 27.24968, 27.51363, 27.29309, 27.02007, 27.02929, 27.16954, 27.21307,
   27.12134, 27.06384, 27.04542, 26.39014, 26.57834, 26.58538, 26.72795, 26.3807, 26.30738, 26.16252, 26.22674, 26.06469, 26.02163, 26.07903, 25.89201, 25.66725,
   26.11484, 25.66968, 25.59919, 25.31037, 25.6624, 25.28821, 25.23395, 25.41355, 25.40374, 25.3276, 24.82571, 25.09033, 24.99828, 24.94839, 24.41576, 24.43107,
   24.49728, 24.50746, 24.47438, 24.60894, 24.30835, 24.20304, 24.39279, 24.16697, 23.81115, 23.98842, 24.30322, 23.8373, 23.68785, 23.77973, 23.56655, 23.67996,
   23.68785, 23.63255, 23.20958, 23.40739, 23.23105, 23.08037, 23.00466, 23.16121, 22.75687, 22.96671, 22.92327, 22.97485, 22.56717, 22.73495, 22.6113, 22.16323,
   22.267, 22.38421, 22.21097, 22.09002, 21.92582, 22.14073, 21.67431, 22.00524, 21.46635, 21.63691, 21.90876, 21.58213, 21.42858, 21.14762, 21.42568, 21.16529,
   21.32073, 21.16823, 21.51274, 21.0827, 21.04425, 21.10633, 20.64069, 21.10043, 20.66784, 20.70097, 20.6588, 20.77008, 20.54084, 20.36721, 20.5196, 20.43135,
   19.87487, 20.32741, 20.23217, 20.09001, 19.87487, 19.70486, 20.02789, 19.92809, 19.73646, 19.52061, 19.12074, 19.31849, 19.32494, 19.42142, 19.40537, 19.46308,
   19.47588, 19.17606, 18.91764, 19.13703, 18.83512, 19.05546, 19.08487, 18.97026, 18.85165, 18.69567, 18.64896, 18.65564, 18.30842, 18.44742, 18.76553, 18.18207,
   18.15807, 18.19577, 18.0962, 18.2573, 18.04793, 18.03412, 17.79764, 18.34242, 17.54378, 17.88495, 17.78013, 17.56508, 17.52957, 17.76961, 18.20604, 17.55088,
   17.06856, 17.14505, 17.47261, 17.17047, 17.09774, 17.09045, 17.14141, 17.00273, 16.96238, 17.04665, 17.03568, 16.72565, 17.03568, 16.63975, 16.49307, 16.61352,
   16.47417, 16.23416, 16.32601, 16.36794, 16.5044, 16.33746, 16.46661, 16.11475, 16.14179, 16.11088, 16.07216, 15.88892, 15.96325, 15.71544, 16.07604, 15.37071,
   15.84573, 15.60803, 15.75108, 15.62798, 15.50791, 15.41523, 15.43543, 15.54403, 15.10906, 15.03879, 14.89309, 15.41523, 15.03465, 15.03465, 15.09256, 15.1173,
   15.17079, 14.90145, 14.847, 14.67818, 14.63567, 14.93903, 14.93069, 14.43852, 14.73749, 14.85958, 14.7797, 14.37365, 14.44715, 14.30412, 14.41261, 14.48591,
   14.29977, 14.00481, 13.97809, 14.19481, 14.10676, 14.05809, 14.12, 13.84822, 14.0137, 13.92002, 13.74889, 13.55722, 14.10676, 13.89762, 13.85272, 13.35348,
   13.42793, 13.5158, 13.16553, 13.78961, 13.52501, 13.68074, 13.32078, 13.08959, 13.20333, 13.37679, 13.32546, 13.1371, 12.93156, 12.89296, 12.64903, 12.7862,
   13.08959, 12.47045, 12.55013, 12.85909, 12.81054, 12.50537, 12.56006, 12.50537, 12.19256, 12.46045, 12.48043, 12.33481, 12.44544, 12.33481, 12.30953, 12.29434,
   12.4954, 12.14648, 12.21298, 12.25881, 12.01238, 12.38522, 11.68638, 12.34996, 11.80309, 11.882, 12.01756, 11.68638, 11.70769, 12.04863, 11.80309, 11.9604,
   11.73426, 11.87151, 11.74488, 11.37843, 11.57388, 11.61686, 11.68638, 11.36748, 11.30151, 11.17957, 11.57926, 11.16284, 11.18514, 11.06192, 11.34004, 11.14049,
   11.1237, 11.09566, 11.14049, 11.15167, 10.88592, 11.0788, 11.1349, 10.89736, 10.96575, 10.83428, 10.74768, 11.08442, 11.06192, 10.64867, 10.73027, 10.68372,
   10.71284, 10.6311, 10.37604, 10.54874, 10.74188, 10.75347, 10.21873, 10.39404, 10.20652, 10.20652, 10.35199, 10.34597, 10.25524, 9.769877, 10.31582, 10.28557,
   10.04656, 10.07133, 10.08987, 10.26739, 10.10222, 9.744335, 10.13915, 10.04656, 10.08987, 9.78899, 9.511369, 10.0837, 10.10838, 9.763498, 9.498259, 10.04035,
   9.359494, 9.465404, 9.934301, 9.680184, 9.884, 9.725134, 9.491697, 9.171209, 9.339502, 9.372798, 9.693048, 9.782623, 9.524461, 9.699474, 9.465404, 9.352835,
   9.103021, 9.372798, 9.061861, 9.272551, 8.832057, 8.874282, 9.550591, 8.839109, 8.916308, 9.089322, 9.027419, 8.916308, 9.013605, 8.930272, 8.853195, 8.775441,
   8.86023, 8.803795, 8.617828, 8.732738, 8.668289, 8.937246, 8.596112, 8.711308, 8.457279, 8.732738, 8.661098, 8.523324, 8.19538, 8.972035, 8.675473, 8.501366,
   8.12667, 8.472, 8.53063, 8.390714, 8.149638, 8.874282, 8.383286, 8.218155, 8.149638, 8.255975, 8.331099, 8.248425, 8.255975, 8.390714, 7.979674, 8.003064,
   8.003064, 8.111322, 8.202979, 8.141989, 8.157279, 7.853754, 8.248425, 7.885423, 7.845817, 7.853754, 7.652858, 8.003064, 7.717714, 7.869604, 7.798025, 7.636558,
   7.940539, 7.995275, 7.813988, 7.677243, 7.4214, 7.488261, 7.199816, 7.446543, 7.821957, 7.51318, 7.345454, 7.446543, 7.701551, 7.413, 7.709636, 7.471602,
   7.538017, 7.32847, 7.268715, 7.217102, 7.345454, 7.251551, 7.496576, 7.00685, 7.242954, 7.496576, 7.587447, 6.944327, 7.217102, 7.165117, 7.336967, 6.953294,
   6.93535, 7.077628, 7.217102, 7.086426, 6.771714, 7.033475, 7.156417, 7.277281, 7.015736, 7.173808, 6.971191, 6.944327, 6.944327, 6.899322, 6.899322, 6.679073,
   6.826695, 6.808417, 6.734811, 6.716283, 6.944327, 7.042328, 6.393102, 6.65103, 6.725553, 6.707, 7.033475, 6.613453, 6.594584, 6.556684, 6.528114, 6.58513,
   6.65103, 6.314656, 6.575661, 6.324515, 6.45131, 6.412563, 6.480219, 6.508998, 6.489826, 6.255176, 6.344187, 6.16488, 6.275065, 6.383349, 6.431966, 6.144634,
   6.245208, 6.174978, 6.174978, 6.052689, 6.431966, 6.324515, 6.215206, 6.073242, 6.16488, 6.373581, 6.18506, 6.114139, 6.021729, 5.927878, 5.990609, 6.042387,
   5.832517, 6.103941, 6.205174, 5.885686, 6.205174, 5.959326, 5.724698, 6.195125, 5.927878, 5.768068, 5.592572, 5.648, 5.938379, 6.154765, 5.811113, 5.938379,
   5.917358, 6.042387, 5.959326, 5.800382, 6.134486, 5.713804, 5.735571, 5.614809, 5.55905, 5.800382, 5.502725, 5.502725, 6.093725, 5.800382, 5.502725, 5.625894,
   5.614809, 5.318481, 5.502725, 5.502725, 5.223923, 5.28322, 5.54783, 5.724698, 5.139758, 4.979678, 5.54783, 5.151865, 5.58142, 5.821825, 5.341859, 5.28322,
   5.445819, 5.35351, 5.592572, 5.200015, 5.457248, 5.271414, 5.306754, 5.259582, 5.365136, 5.054191, 5.35351, 4.775295, 5.041848, 5.306754, 5.271414, 5.017073,
   5.054191, 5.017073, 4.929377, 5.200015, 5.091038, 4.65639, 5.235836, 4.65639, 4.64299, 5.115456, 4.616074, 4.929377, 4.709607, 4.775295, 5.35351, 4.827202,
   4.942, 4.827202, 5.004639, 5.054191, 4.852948, 4.852948, 4.916721, 4.878557, 4.840092, 4.929377, 5.247722, 4.65639, 5.004639, 4.852948, 4.735992, 4.852948,
   4.775295, 4.865769, 4.629552, 4.616074, 4.64299, 4.561765, 5.004639, 4.629552, 4.629552, 4.814278, 4.709607, 4.709607, 4.366369, 4.337737, 4.465136, 4.65639,
   4.589, 4.683074, 4.709607, 4.534367, 4.602557, 4.146811, 4.602557, 4.366369, 4.465136, 4.891311, 4.308914, 4.65639, 4.176752, 4.423077, 4.366369, 4.775295,
   4.221266, 4.070995, 4.024819, 4.20648, 4.323349, 4.070995, 4.176752, 4.116652, 4.548087, 4.29443, 4.250683, 4.131759, 4.265315, 3.883, 4.265315, 4.131759,
   4.250683, 3.850775, 4.176752, 4.146811, 4.176752, 4.380615, 4.250683, 4.191643, 4.191643, 4.08627, 4.070995, 4.236, 3.930842, 3.914959, 4.479068, 3.899012,
   3.850775, 3.719086, 4.116652, 3.978108, 4.131759, 3.962415, 3.769009, 3.752441, 4.009309, 4.221266, 4.024819, 3.883, 4.070995, 3.850775, 4.070995, 4.116652,
   3.752441, 3.866921, 3.993739, 3.582559, 3.330195, 3.883, 3.818279, 3.769009, 3.53, 3.685428, 4.009309, 3.440618, 3.899012, 4.08627, 3.494522, 3.801926,
   3.719086, 3.235298, 3.702295, 3.719086, 3.422462, 3.978108, 3.769009, 3.769009, 3.735801, 3.65146, 3.685428, 3.818279, 3.292565, 3.45868, 3.599908, 3.292565,
   3.53, 3.565125, 3.476647, 3.719086, 3.404209, 3.702295, 3.547606, 3.292565, 3.582559, 3.599908, 3.422462, 3.599908, 3.348852, 3.440618, 3.330195, 3.494522,
   3.801926, 3.404209, 3.235298, 3.077383, 3.565125, 3.196551, 3.077383, 3.367405, 3.494522, 3.494522, 3.367405, 3.404209, 3.617174, 3.273587, 3.235298, 3.348852,
   3.385857, 3.273587, 3.117612, 3.476647, 3.137533, 3.235298, 2.95341, 3.016033, 3.254499, 3.177, 3.404209, 2.974431, 3.077383, 2.974431, 3.422462, 3.117612,
   2.974431, 2.974431, 3.367405, 3.177, 3.077383, 3.05707, 3.45868 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1185,Graph_from_VH_tagFirst_2b1c_H_mass_fy1185,Graph_from_VH_tagFirst_2b1c_H_mass_fex1185,Graph_from_VH_tagFirst_2b1c_H_mass_fey1185);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->SetMinimum(-586.3203);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->SetMaximum(5899.642);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1185);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__186 = new TH1D("data_mc_ratio__186","",1000,0,2000);
   data_mc_ratio__186->SetBinContent(43,1.260218);
   data_mc_ratio__186->SetBinContent(44,1.255684);
   data_mc_ratio__186->SetBinContent(45,1.23033);
   data_mc_ratio__186->SetBinContent(46,1.250991);
   data_mc_ratio__186->SetBinContent(47,1.222403);
   data_mc_ratio__186->SetBinContent(48,1.247167);
   data_mc_ratio__186->SetBinContent(78,1.247381);
   data_mc_ratio__186->SetBinContent(79,1.248893);
   data_mc_ratio__186->SetBinContent(80,1.212497);
   data_mc_ratio__186->SetBinContent(81,1.236461);
   data_mc_ratio__186->SetBinContent(82,1.240233);
   data_mc_ratio__186->SetBinContent(83,1.224261);
   data_mc_ratio__186->SetBinContent(1000,1.389705);
   data_mc_ratio__186->SetBinContent(1001,1.362543);
   data_mc_ratio__186->SetBinError(43,0.02175377);
   data_mc_ratio__186->SetBinError(44,0.01536933);
   data_mc_ratio__186->SetBinError(45,0.01525801);
   data_mc_ratio__186->SetBinError(46,0.01547265);
   data_mc_ratio__186->SetBinError(47,0.01548214);
   data_mc_ratio__186->SetBinError(48,0.02190373);
   data_mc_ratio__186->SetBinError(78,0.02474067);
   data_mc_ratio__186->SetBinError(79,0.01713064);
   data_mc_ratio__186->SetBinError(80,0.01692698);
   data_mc_ratio__186->SetBinError(81,0.01728851);
   data_mc_ratio__186->SetBinError(82,0.01726045);
   data_mc_ratio__186->SetBinError(83,0.02435889);
   data_mc_ratio__186->SetBinError(1000,0.2725437);
   data_mc_ratio__186->SetBinError(1001,0.01726025);
   data_mc_ratio__186->SetMinimum(0.4);
   data_mc_ratio__186->SetMaximum(1.6);
   data_mc_ratio__186->SetEntries(1795.156);
   data_mc_ratio__186->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__186->SetLineColor(ci);
   data_mc_ratio__186->SetLineWidth(2);
   data_mc_ratio__186->SetMarkerStyle(20);
   data_mc_ratio__186->SetMarkerSize(1.2);
   data_mc_ratio__186->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__186->GetXaxis()->SetRange(1,150);
   data_mc_ratio__186->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__186->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__186->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__186->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__186->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__186->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__186->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__186->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__186->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__186->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__186->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__186->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__186->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__186->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__186->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__186->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1186[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1186[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1186[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1186[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0162655, 0.008148955, 0.00817287, 0.008219116, 0.008319767, 0.01632828, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01883804, 0.009107483, 0.009133277, 0.009237506,
   0.009208478, 0.01843848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1848672 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1186,Graph_from_mc_statistical_error_fy1186,Graph_from_mc_statistical_error_fex1186,Graph_from_mc_statistical_error_fey1186);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1186 = new TH1F("Graph_Graph_from_mc_statistical_error1186","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1186->SetMinimum(0.7781594);
   Graph_Graph_from_mc_statistical_error1186->SetMaximum(1.221841);
   Graph_Graph_from_mc_statistical_error1186->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1186->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1186->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1186->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1186->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1186->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1186->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1186->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1186->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1186->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1186->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1186);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->SetSelected(H_mass_tagFirst_VR_17);
}
