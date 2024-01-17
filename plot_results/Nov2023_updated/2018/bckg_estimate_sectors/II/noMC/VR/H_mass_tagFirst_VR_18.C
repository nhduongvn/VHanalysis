#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Mon Jan  8 11:16:16 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_18 = new TCanvas("H_mass_tagFirst_VR_18", "H_mass_tagFirst_VR_18",0,0,600,600);
   H_mass_tagFirst_VR_18->SetHighLightColor(2);
   H_mass_tagFirst_VR_18->Range(0,0,1,1);
   H_mass_tagFirst_VR_18->SetFillColor(0);
   H_mass_tagFirst_VR_18->SetFillStyle(4000);
   H_mass_tagFirst_VR_18->SetBorderMode(0);
   H_mass_tagFirst_VR_18->SetBorderSize(2);
   H_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-38.19293,315.7258,38164.74);
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
   st->SetMaximum(34344.44);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",1000,0,2000);
   st_stack_63->SetMinimum(0.01);
   st_stack_63->SetMaximum(34344.44);
   st_stack_63->SetDirectory(nullptr);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->SetLineWidth(0);
   st_stack_63->GetXaxis()->SetRange(1,150);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetLabelSize(0.05);
   st_stack_63->GetYaxis()->SetTitleSize(0.057);
   st_stack_63->GetYaxis()->SetTitleOffset(1.2);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7593.201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15375.13);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,15180.61);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,14973.64);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,14816.51);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7298.09);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6058.002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,11832.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,11867.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,11747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,11723.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,5834.555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,47.6272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,22022.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6294863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.051548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.92503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.41647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.43029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,29.21861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,36.6294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,43.89962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,50.67463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,57.53691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,63.30173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,67.98598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,72.12496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,75.75967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,78.7789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,80.75355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,82.57435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,83.93912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,84.88618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,85.66104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,86.40717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,86.05103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,86.2603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,86.23733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,85.75351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,85.64369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,85.75235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,85.28785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,84.40752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,84.46618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,83.98867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,82.91198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,82.7146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,82.72657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,82.20161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,81.6393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,81.20983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,80.55212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,80.55335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,80.27123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,80.05373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,79.48371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,78.96855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.96479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,79.15024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,78.4058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,78.51564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,78.21098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,77.87842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,77.78296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,77.07031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,77.05746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.93265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.41456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,76.35101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,76.56738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,76.4936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,75.96468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,75.88901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,75.31114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.98818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.63064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,74.64657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,74.48848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,74.19131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,73.6055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,73.42223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,73.56511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,72.57134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,72.68046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,72.31014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,72.2375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,71.75454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,71.38775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,71.00929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,70.69611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,70.63723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,70.61619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,70.85567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,70.44202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,69.71543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,69.52761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,69.02569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.89353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.53311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,68.27968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,68.26807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,68.53166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.88828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.99764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.66905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.07649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.92568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.52631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.19192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.31154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.11255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,65.82874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.68713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.11001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.24376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.09175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,64.71475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.8539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,64.54461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.3771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.0655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,63.89054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,63.78346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,63.85331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,63.27355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,63.55942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,63.08854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.94076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,62.79106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,62.54288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,62.52229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,62.07386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,62.42873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,62.03395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.89967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.10577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,61.28689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,61.67199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,61.41606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,61.37411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,61.14448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,60.87819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,60.55678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.05368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,60.99687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,60.43397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,60.21556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.53224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,59.74319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.10358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,59.75148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.0838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.47063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,59.60541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.27208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.98895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,58.80224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.97215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,58.60649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.93518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.75505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.27765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.90419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.30654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.97087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.96745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.11083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.56445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.74829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.56273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.65215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.22616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.10832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.77778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.88237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.86844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.98155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.28185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.39263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.15674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,56.22726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.97475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,56.10203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.55016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.28919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.13308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.63926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,55.19235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,55.31785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,55.02517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.46603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.82858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.3659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,54.49149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,54.32762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,54.35132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,54.22907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.94701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.96721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,54.01675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,53.26325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,53.59328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,53.26697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,53.61176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,53.16458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.90495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,53.0788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.53666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,52.25116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,52.16197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,52.40639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,52.10687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.98124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,52.12778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,51.72524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,51.85913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,51.48913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,51.58716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,51.71375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,51.29251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,51.26354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,50.63747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,51.27513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,50.90478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,50.83078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.88337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,50.2151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,50.04515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,50.04713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,50.03525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,49.68358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.94608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,49.60576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,49.43372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,49.27515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,49.52981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,49.48779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,49.18863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,49.17453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,48.36815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,48.52151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,48.92206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,48.20813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,48.31897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,48.33332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,48.05995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,48.41728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,47.8989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,47.6168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,47.45634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,47.12957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,47.32883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,47.02225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.96744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,47.25552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,47.15058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,46.79417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,46.69456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,46.61813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,46.83437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,46.3325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.95681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.98698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,46.15041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.88346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,45.45179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,45.43871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,45.31646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,45.37108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,45.36452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.04018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.77325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,45.02918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,44.79758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,44.34417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,44.36651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,44.36427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,44.25249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,44.44013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.97177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.75722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,44.03031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.71645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,43.85446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.87253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,43.25858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.17147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,43.14163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,43.15541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.47983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,43.00594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,42.52179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,42.52878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.59395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,42.16619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,42.23661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.70317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.9046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,42.06033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,41.12912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,41.46973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.65801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,41.07609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,41.28058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,41.02783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.27578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,40.51271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.60065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,40.5396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.22314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,40.48581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,40.25761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,40.06768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,40.28221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.75743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.65014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.83211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.70258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.91162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,39.30637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,39.26602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,39.13461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.98244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.89339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.85262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.5737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,38.5223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.4528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,38.08262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.73769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.95495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.93406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,38.10863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.88964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.71143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.62201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.76393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,37.10767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,37.38428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.91496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,37.00073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,36.09268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,37.02482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.62399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,36.36339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,36.58339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,36.33069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.77842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,36.13931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,36.24059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,36.10366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.74241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,36.13657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.86691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,35.53672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.70081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,35.27652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.95208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,35.01721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,35.12455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,34.97475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,35.01721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.47551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,34.57307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,34.63033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.75312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,34.53006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,34.26222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.73483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,34.001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.83745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,33.71133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.73189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,33.56703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,33.77592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,33.4695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,33.06451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,33.27953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.95648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,33.11242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.74539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.60593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.75447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,32.70301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,32.26079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,32.56641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,32.21777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,32.34972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.89639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,32.06984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.88707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,31.6626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.7376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,31.59996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,31.30706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,31.53406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,31.32288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,31.40815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,31.2659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,31.09114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,31.18658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,30.4765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,30.69028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,30.59006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,30.33314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.86409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,30.59977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,30.30374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,30.49275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,30.10037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,30.23828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.78941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,29.62935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,29.70949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.77943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.82264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.70949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,29.39775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,29.43143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,29.40786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,29.08608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,29.30325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,29.03154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.91871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,29.27619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.93584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,28.71934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,28.18314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,28.46991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,28.79857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,28.35135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,28.37231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,28.21475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.55756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,27.57193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,28.02098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,27.47475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.95019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.48557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,27.23574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.81161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.67951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.98361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,27.10814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,27.10449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,27.14831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,27.08255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.99462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.8105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,26.51326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.68087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,26.5506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,26.67715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,26.39718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,26.65486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,26.35962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.94293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.95439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.96202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,25.5776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.68968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,26.06104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,25.0888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,26.21264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,25.4767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.68196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,25.32069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,25.45336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,25.41052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,25.28154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.89059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,24.91048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,24.57013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.79089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.85873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.67875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.91048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,24.65064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.87488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,24.36364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,24.49745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,24.20455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,24.39615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,24.26178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,24.06499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.89562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,24.02791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,24.19636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.70833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.68743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.82088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.75008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.69161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,23.60784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,23.26972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,23.45206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,23.55743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,23.23137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,23.45206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,23.24842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,23.2612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.92229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.74441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,23.00856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.67462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.90067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.59584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.94389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,22.26015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.69645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,22.14862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,22.20222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,22.13967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,22.32681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,22.19776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.83329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,22.15309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.7378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.95545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.60982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,21.47185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,21.31906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.72412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,21.20724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.85596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,21.41642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,21.5777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.83495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,21.03841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,21.29581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,21.07134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.89193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,21.04312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.82068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.91089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.70618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.69661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,21.00542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.63429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.91089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.67745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,20.51392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,21.00071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,20.40254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,20.47525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.99053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,20.05485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,20.37339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,20.19268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.91606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.89117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,20.1534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.6557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.77629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.94091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.7813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,19.32021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,20.16814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,19.25858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,19.18643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,19.45306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.59008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.88459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,19.42248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,19.15025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.83206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,19.08289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.56184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,19.07769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.54583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.22251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.88983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.61514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.93697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,19.05171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,18.29846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,18.50304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,18.1244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,18.1244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,18.06966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.82125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.94312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.67052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,18.02575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.87675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.93208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,18.15716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.83236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.95416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.83791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.83791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.59186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.58623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.47888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.40504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.77672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.72091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.54675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,17.27937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,17.2679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,17.44484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.53546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,17.147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.89675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.97864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,17.21619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,17.02525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.92019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.73179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.81447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.61295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.94359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.54723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.71994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.58908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.67842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.49326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.56518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,16.20851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,16.2024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.45719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,16.16567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,16.02411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,16.1718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,16.40292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,16.09812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,16.26342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.85631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,16.23904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,16.07349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.85006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.91244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.81878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.68672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.75603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.71196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,15.47051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,16.14728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.43846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.5025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,15.26423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.4577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.4577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,15.1535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.74345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.94947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,15.28369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.5025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,15.14696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,15.12078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.93621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,15.16657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.78288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,15.12078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.80966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.74262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.59404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.63471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.7359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.84974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.64824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.70898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.72917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.66176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.3614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.48503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,14.40272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.99103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,14.27144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,14.20186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,14.27838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,14.15295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.31303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.99103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,14.20186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,14.38896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.43707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,14.11089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,14.36829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.75539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.92716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.69766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.88442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.85585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.82722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.60331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.79135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,14.02639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.44215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.47895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.61059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.53762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.49364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.33115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,13.25663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,13.1892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.47895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,13.01531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.33858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,13.12143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,13.01531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.40525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,13.05331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,13.33115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.93131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,13.30884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.92365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.87757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,13.21921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.62901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.86218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.82361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,13.08363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.87757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.77718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.6838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,13.12898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.80815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.66035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,13.10632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.93897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.58973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.18995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,12.07564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.54243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.54243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,12.1574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.62116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,12.13293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.55032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,12.00983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,12.10023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.40743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,12.09204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.50428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,12.07564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,12.17369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.95195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.61569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.44729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,12.33536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,12.10023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.97679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.71758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.48705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.74292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.69219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.63273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.83535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,11.24299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.63273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.54726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.72603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.72603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,11.34823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.64124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.75977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.50428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.27817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.74292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.53867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,11.12785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,11.18114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.39179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.64124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,11.12785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.92118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,11.25179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.9574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.71977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.76587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.89393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.9574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.90302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,11.17227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.80262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,11.13675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,11.17227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.55211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.30514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.90302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.87573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.67346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.68274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,10.92118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.34352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.70127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.65488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.5896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.65488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.69201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.82094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.51449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.57087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.40082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.963001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.33393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.60829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,10.20855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.29552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,10.01259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.893154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.36265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,10.15016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.46728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.40082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.660103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.12084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,10.26661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,10.20855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,10.02248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,10.08161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.972939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,10.00269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.75196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.953053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.649843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.762113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.567364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,10.00269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.670352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.58805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.515451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.473717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.690819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.913161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.812721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.873107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.639571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.577712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.670352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.347395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.421289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.577712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.379135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.176261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,9.165459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.567364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.515451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.923149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.326175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.251522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.400235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.494607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.53625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.389691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.629289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.979838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.208591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.76773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.741797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,9.154644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,9.176261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.835262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.846467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.347395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.494607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,9.067663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.790298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.946682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.824042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,9.143817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.879997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.445445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.59658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.56194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.398395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.722418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.503892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,9.100378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.711054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.550362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,9.023857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.468872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.550362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.59658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.503892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.35108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.990863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.231602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.410182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.56194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.527158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.374771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.503892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.410182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.433707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.362934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.80156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.35108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,8.024408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.303495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.696741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,8.085898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,8.09814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.837041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.899991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.303495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.974874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.219558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.709601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.837041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,8.085898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.696741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.219558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,8.036743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,8.303495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,8.012053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.207497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.773583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.949991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.566939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.91252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.51439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.68386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.773583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.619125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.54071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.949991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.527562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.68386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.553836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.593077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.735257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.786316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.606112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.566939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.593077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.760829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.645085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.899991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.51439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.51439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.327502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.25959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,7.14959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.341009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.177248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.341009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.54071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.177248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.218537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.39479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.31397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.232247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.286831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.381381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.421534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.191037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.121825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.39479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.381381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,7.135721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.866885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,7.037871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.92435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.31397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,7.009663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,7.051933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.823469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.852444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.63205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.135721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.64697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.938641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,7.2048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.735798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.135721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.177248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.135721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.526653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.895677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,7.037871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.617096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.310581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.794371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.63205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.721075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.404076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.881296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.215679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.231597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.910028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.988397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.735798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.496226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.866885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.617096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,7.079972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.779775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.341899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.837972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.721075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.434939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.794371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.496226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.496226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.823469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.119306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.465655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.388588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.247473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,99.00861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(6886266);

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
   
   TH1D *VH_tagFirst_H_mass__125 = new TH1D("VH_tagFirst_H_mass__125","",1000,0,2000);
   VH_tagFirst_H_mass__125->SetBinContent(43,7673);
   VH_tagFirst_H_mass__125->SetBinContent(44,15455);
   VH_tagFirst_H_mass__125->SetBinContent(45,15250);
   VH_tagFirst_H_mass__125->SetBinContent(46,15076);
   VH_tagFirst_H_mass__125->SetBinContent(47,14925);
   VH_tagFirst_H_mass__125->SetBinContent(48,7340);
   VH_tagFirst_H_mass__125->SetBinContent(78,6037);
   VH_tagFirst_H_mass__125->SetBinContent(79,11873);
   VH_tagFirst_H_mass__125->SetBinContent(80,11814);
   VH_tagFirst_H_mass__125->SetBinContent(81,11633);
   VH_tagFirst_H_mass__125->SetBinContent(82,11599);
   VH_tagFirst_H_mass__125->SetBinContent(83,5802);
   VH_tagFirst_H_mass__125->SetBinContent(1000,55);
   VH_tagFirst_H_mass__125->SetBinContent(1001,23972);
   VH_tagFirst_H_mass__125->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__125->SetLineColor(ci);
   VH_tagFirst_H_mass__125->SetLineWidth(2);
   VH_tagFirst_H_mass__125->SetMarkerStyle(20);
   VH_tagFirst_H_mass__125->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__125->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__125->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__125->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__125->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__125->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__125->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__125->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__125->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__125->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__125->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1125[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1125[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7593.201, 15375.13, 15180.61, 14973.64, 14816.51, 7298.09, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6058.002, 11832.02, 11867.63, 11747,
   11723.41, 5834.555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 47.6272 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1125[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1125[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6294863, 3.051548, 7.92503, 14.41647, 21.43029, 29.21861, 36.6294,
   43.89962, 50.67463, 57.53691, 63.30173, 67.98598, 72.12496, 75.75967, 78.7789, 80.75355, 82.57435, 83.93912, 84.88618, 85.66104, 86.40717, 86.05103, 86.2603,
   86.23733, 85.75351, 85.64369, 85.75235, 85.28785, 84.40752, 84.46618, 83.98867, 82.91198, 82.7146, 82.72657, 82.20161, 81.6393, 81.20983, 80.55212, 80.55335,
   80.27123, 80.05373, 79.48371, 78.96855, 78.96479, 79.15024, 78.4058, 78.51564, 78.21098, 77.87842, 77.78296, 77.07031, 77.05746, 76.93265, 76.41456, 76.35101,
   76.56738, 76.4936, 75.96468, 75.88901, 75.31114, 74.98818, 74.63064, 74.64657, 74.48848, 74.19131, 73.6055, 73.42223, 73.56511, 72.57134, 72.68046, 72.31014,
   72.2375, 71.75454, 71.38775, 71.00929, 70.69611, 70.63723, 70.61619, 70.85567, 70.44202, 69.71543, 69.52761, 69.02569, 68.89353, 68.53311, 68.27968, 68.26807,
   68.53166, 67.88828, 67.99764, 67.66905, 67.07649, 66.92568, 66.52631, 66.19192, 66.31154, 66.11255, 65.82874, 65.68713, 65.11001, 65.24376, 65.09175, 64.71475,
   64.8539, 64.54461, 64.3771, 64.0655, 63.89054, 63.78346, 63.85331, 63.27355, 63.55942, 63.08854, 62.94076, 62.79106, 62.54288, 62.52229, 62.07386, 62.42873,
   62.03395, 61.89967, 62.10577, 61.28689, 61.67199, 61.41606, 61.37411, 61.14448, 60.87819, 60.55678, 61.05368, 60.99687, 60.43397, 60.21556, 60.53224, 59.74319,
   60.10358, 59.75148, 60.0838, 59.47063, 59.60541, 59.27208, 58.98895, 58.80224, 58.97215, 58.60649, 58.93518, 58.75505, 58.27765, 57.90419, 58.30654, 57.97087,
   57.96745, 58.11083, 57.56445, 57.74829, 57.56273, 57.65215, 57.22616, 57.10832, 56.77778, 56.88237, 56.86844, 56.98155, 56.28185, 56.39263, 56.15674, 56.22726,
   55.97475, 56.10203, 55.55016, 55.28919, 55.13308, 55.63926, 55.19235, 55.31785, 55.02517, 54.46603, 54.82858, 54.3659, 54.49149, 54.32762, 54.35132, 54.22907,
   53.94701, 53.96721, 54.01675, 53.26325, 53.59328, 53.26697, 53.61176, 53.16458, 52.90495, 53.0788, 52.53666, 52.25116, 52.16197, 52.40639, 52.10687, 51.98124,
   52.12778, 51.72524, 51.85913, 51.48913, 51.58716, 51.71375, 51.29251, 51.26354, 50.63747, 51.27513, 50.90478, 50.83078, 50.88337, 50.2151, 50.04515, 50.04713,
   50.03525, 49.68358, 49.94608, 49.60576, 49.43372, 49.27515, 49.52981, 49.48779, 49.18863, 49.17453, 48.36815, 48.52151, 48.92206, 48.20813, 48.31897, 48.33332,
   48.05995, 48.41728, 47.8989, 47.6168, 47.45634, 47.12957, 47.32883, 47.02225, 46.96744, 47.25552, 47.15058, 46.79417, 46.69456, 46.61813, 46.83437, 46.3325,
   45.95681, 45.98698, 46.15041, 45.88346, 45.45179, 45.43871, 45.31646, 45.37108, 45.36452, 45.04018, 44.77325, 45.02918, 44.79758, 44.34417, 44.36651, 44.36427,
   44.25249, 44.44013, 43.97177, 43.75722, 44.03031, 43.71645, 43.85446, 43.87253, 43.25858, 43.17147, 43.14163, 43.15541, 42.47983, 43.00594, 42.52179, 42.52878,
   42.59395, 42.16619, 42.23661, 41.70317, 41.9046, 42.06033, 41.12912, 41.46973, 41.65801, 41.07609, 41.28058, 41.02783, 41.27578, 40.51271, 40.60065, 40.5396,
   40.22314, 40.48581, 40.25761, 40.06768, 40.28221, 39.75743, 39.65014, 39.83211, 39.70258, 39.91162, 39.30637, 39.26602, 39.13461, 38.98244, 38.89339, 38.85262,
   38.5737, 38.5223, 38.4528, 38.08262, 37.73769, 37.95495, 37.93406, 38.10863, 37.88964, 37.71143, 37.62201, 37.76393, 37.10767, 37.38428, 36.91496, 37.00073,
   36.09268, 37.02482, 36.62399, 36.36339, 36.58339, 36.33069, 35.77842, 36.13931, 36.24059, 36.10366, 35.74241, 36.13657, 35.86691, 35.53672, 35.70081, 35.27652,
   34.95208, 35.01721, 35.12455, 34.97475, 35.01721, 34.47551, 34.57307, 34.63033, 34.75312, 34.53006, 34.26222, 33.73483, 34.001, 33.83745, 33.71133, 33.73189,
   33.56703, 33.77592, 33.4695, 33.06451, 33.27953, 32.95648, 33.11242, 32.74539, 32.60593, 32.75447, 32.70301, 32.26079, 32.56641, 32.21777, 32.34972, 31.89639,
   32.06984, 31.88707, 31.6626, 31.7376, 31.59996, 31.30706, 31.53406, 31.32288, 31.40815, 31.2659, 31.09114, 31.18658, 30.4765, 30.69028, 30.59006, 30.33314,
   30.86409, 30.59977, 30.30374, 30.49275, 30.10037, 30.23828, 29.78941, 29.62935, 29.70949, 29.77943, 29.82264, 29.70949, 29.39775, 29.43143, 29.40786, 29.08608,
   29.30325, 29.03154, 28.91871, 29.27619, 28.93584, 28.71934, 28.18314, 28.46991, 28.79857, 28.35135, 28.37231, 28.21475, 27.55756, 27.57193, 28.02098, 27.47475,
   27.95019, 27.48557, 27.23574, 27.81161, 27.67951, 26.98361, 27.10814, 27.10449, 27.14831, 27.08255, 26.99462, 26.8105, 26.51326, 26.68087, 26.5506, 26.67715,
   26.39718, 26.65486, 26.35962, 25.94293, 25.95439, 25.96202, 25.5776, 25.68968, 26.06104, 25.0888, 26.21264, 25.4767, 25.68196, 25.32069, 25.45336, 25.41052,
   25.28154, 24.89059, 24.91048, 24.57013, 24.79089, 24.85873, 24.67875, 24.91048, 24.65064, 23.87488, 24.36364, 24.49745, 24.20455, 24.39615, 24.26178, 24.06499,
   23.89562, 24.02791, 24.19636, 23.70833, 23.68743, 23.82088, 23.75008, 23.69161, 23.60784, 23.26972, 23.45206, 23.55743, 23.23137, 23.45206, 23.24842, 23.2612,
   22.92229, 22.74441, 23.00856, 22.67462, 22.90067, 22.59584, 22.94389, 22.26015, 22.69645, 22.14862, 22.20222, 22.13967, 22.32681, 22.19776, 21.83329, 22.15309,
   21.7378, 21.95545, 21.60982, 21.47185, 21.31906, 21.72412, 21.20724, 21.85596, 21.41642, 21.5777, 20.83495, 21.03841, 21.29581, 21.07134, 20.89193, 21.04312,
   20.82068, 20.91089, 20.70618, 20.69661, 21.00542, 20.63429, 20.91089, 20.67745, 20.51392, 21.00071, 20.40254, 20.47525, 19.99053, 20.05485, 20.37339, 20.19268,
   19.91606, 19.89117, 20.1534, 19.6557, 19.77629, 19.94091, 19.7813, 19.32021, 20.16814, 19.509, 18.984, 19.25858, 19.18643, 19.45306, 19.59008, 18.88459,
   19.42248, 19.15025, 18.83206, 19.08289, 18.56184, 19.07769, 18.54583, 18.22251, 18.88983, 18.61514, 18.93697, 19.05171, 18.29846, 18.50304, 18.1244, 18.1244,
   18.06966, 17.82125, 17.94312, 17.67052, 18.02575, 17.87675, 17.93208, 18.15716, 17.83236, 17.95416, 17.83791, 17.83791, 17.59186, 17.58623, 17.47888, 17.40504,
   17.77672, 17.72091, 17.54675, 17.27937, 17.2679, 17.44484, 17.53546, 17.147, 16.89675, 16.97864, 17.21619, 17.02525, 16.92019, 16.73179, 16.81447, 16.61295,
   16.94359, 16.54723, 16.71994, 16.58908, 16.67842, 16.49326, 16.56518, 16.20851, 16.2024, 16.45719, 16.16567, 16.02411, 16.1718, 16.40292, 16.09812, 16.26342,
   15.85631, 16.23904, 16.07349, 15.85006, 15.91244, 15.81878, 15.68672, 15.75603, 15.71196, 15.47051, 16.14728, 15.43846, 15.5025, 15.26423, 15.4577, 15.4577,
   15.1535, 15.74345, 14.94947, 15.28369, 15.5025, 15.14696, 15.12078, 14.93621, 15.16657, 14.78288, 15.12078, 14.80966, 14.74262, 14.59404, 14.63471, 14.7359,
   14.84974, 14.64824, 14.70898, 14.72917, 14.66176, 14.3614, 14.48503, 14.40272, 13.99103, 14.27144, 14.20186, 14.27838, 14.15295, 14.31303, 13.99103, 14.20186,
   14.38896, 14.43707, 14.11089, 14.36829, 13.75539, 13.92716, 13.69766, 13.88442, 13.85585, 13.82722, 13.60331, 13.79135, 14.02639, 13.44215, 13.47895, 13.61059,
   13.53762, 13.49364, 13.33115, 13.25663, 13.1892, 13.47895, 13.01531, 13.33858, 13.12143, 13.01531, 13.40525, 13.05331, 13.33115, 12.93131, 13.30884, 12.92365,
   12.87757, 13.21921, 12.62901, 12.86218, 12.82361, 13.08363, 12.87757, 12.77718, 12.6838, 13.12898, 12.80815, 12.66035, 13.10632, 12.93897, 12.58973, 12.18995,
   12.07564, 12.54243, 12.54243, 12.1574, 12.62116, 12.13293, 12.55032, 12.00983, 12.10023, 12.40743, 12.09204, 11.50428, 12.07564, 12.17369, 11.95195, 11.61569,
   12.44729, 12.33536, 12.10023, 11.97679, 11.71758, 11.48705, 11.74292, 11.69219, 11.63273, 11.83535, 11.24299, 11.63273, 11.54726, 11.72603, 11.72603, 11.34823,
   11.64124, 11.75977, 11.50428, 11.27817, 11.74292, 11.53867, 11.12785, 11.18114, 11.39179, 11.64124, 11.12785, 10.92118, 11.25179, 10.9574, 10.71977, 10.76587,
   10.89393, 10.9574, 10.90302, 11.17227, 10.80262, 11.13675, 11.17227, 10.55211, 10.30514, 10.90302, 10.87573, 10.67346, 10.68274, 10.92118, 10.34352, 10.70127,
   10.65488, 10.5896, 10.65488, 10.69201, 10.82094, 10.51449, 10.57087, 10.40082, 9.963001, 10.33393, 10.60829, 10.20855, 10.29552, 10.01259, 9.893154, 10.36265,
   10.15016, 10.46728, 10.40082, 9.660103, 10.12084, 10.26661, 10.20855, 10.02248, 10.08161, 9.972939, 10.00269, 9.75196, 9.953053, 9.649843, 9.762113, 9.567364,
   10.00269, 9.670352, 9.58805, 9.515451, 9.473717, 9.690819, 9.913161, 9.812721, 9.873107, 9.639571, 9.577712, 9.670352, 9.347395, 9.421289, 9.577712, 9.379135,
   9.176261, 9.165459, 9.567364, 9.515451, 9.923149, 9.326175, 9.251522, 9.400235, 9.494607, 9.53625, 9.389691, 9.629289, 8.979838, 9.208591, 8.76773, 9.741797,
   9.154644, 9.176261, 8.835262, 8.846467, 9.347395, 9.494607, 9.067663, 8.790298, 8.946682, 8.824042, 9.143817, 8.879997, 8.445445, 8.59658, 8.56194, 8.398395,
   8.722418, 8.503892, 9.100378, 8.711054, 8.550362, 9.023857, 8.468872, 8.550362, 8.59658, 8.503892, 8.35108, 8.990863, 8.231602, 8.410182, 8.56194, 8.527158,
   8.374771, 8.503892, 8.410182, 8.433707, 8.362934, 8.80156, 8.35108, 8.024408, 8.303495, 7.696741, 8.085898, 8.09814, 7.837041, 7.899991, 8.303495, 7.974874,
   8.219558, 7.709601, 7.837041, 8.085898, 7.696741, 8.219558, 8.036743, 8.303495, 8.012053, 8.207497, 7.773583, 7.949991, 7.566939, 7.91252, 7.51439, 7.68386,
   7.773583, 7.619125, 7.54071, 7.949991, 7.527562, 7.68386, 7.553836, 7.593077, 7.735257, 7.786316, 7.606112, 7.566939, 7.593077, 7.760829, 7.645085, 7.899991,
   7.51439, 7.51439, 7.327502, 7.25959, 7.14959, 7.341009, 7.177248, 7.341009, 7.54071, 7.177248, 7.218537, 7.39479, 7.31397, 7.232247, 7.286831, 7.381381,
   7.421534, 7.191037, 7.121825, 7.39479, 7.381381, 7.135721, 6.866885, 7.037871, 6.92435, 7.31397, 7.009663, 7.051933, 6.823469, 6.852444, 6.63205, 7.135721,
   6.64697, 6.938641, 7.2048, 6.735798, 7.135721, 7.177248, 7.135721, 6.526653, 6.895677, 7.037871, 6.617096, 6.310581, 6.794371, 6.63205, 6.721075, 6.404076,
   6.881296, 6.215679, 6.231597, 6.910028, 5.988397, 6.735798, 6.496226, 6.866885, 6.617096, 7.079972, 6.779775, 6.341899, 6.837972, 6.721075, 6.434939, 6.794371,
   6.496226, 6.496226, 6.823469, 6.119306, 6.465655, 6.388588, 6.247473 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1125,Graph_from_VH_tagFirst_2b1c_H_mass_fy1125,Graph_from_VH_tagFirst_2b1c_H_mass_fex1125,Graph_from_VH_tagFirst_2b1c_H_mass_fey1125);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->SetMinimum(-1640.833);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->SetMaximum(17012.28);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1125);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__126 = new TH1D("data_mc_ratio__126","",1000,0,2000);
   data_mc_ratio__126->SetBinContent(43,1.010509);
   data_mc_ratio__126->SetBinContent(44,1.005195);
   data_mc_ratio__126->SetBinContent(45,1.004571);
   data_mc_ratio__126->SetBinContent(46,1.006836);
   data_mc_ratio__126->SetBinContent(47,1.007322);
   data_mc_ratio__126->SetBinContent(48,1.005743);
   data_mc_ratio__126->SetBinContent(78,0.9965332);
   data_mc_ratio__126->SetBinContent(79,1.003463);
   data_mc_ratio__126->SetBinContent(80,0.9954809);
   data_mc_ratio__126->SetBinContent(81,0.990295);
   data_mc_ratio__126->SetBinContent(82,0.9893876);
   data_mc_ratio__126->SetBinContent(83,0.9944203);
   data_mc_ratio__126->SetBinContent(1000,1.154802);
   data_mc_ratio__126->SetBinContent(1001,1.088503);
   data_mc_ratio__126->SetBinError(43,0.01153607);
   data_mc_ratio__126->SetBinError(44,0.008085665);
   data_mc_ratio__126->SetBinError(45,0.008134775);
   data_mc_ratio__126->SetBinError(46,0.008200036);
   data_mc_ratio__126->SetBinError(47,0.00824539);
   data_mc_ratio__126->SetBinError(48,0.01173921);
   data_mc_ratio__126->SetBinError(78,0.0128257);
   data_mc_ratio__126->SetBinError(79,0.009209187);
   data_mc_ratio__126->SetBinError(80,0.009158713);
   data_mc_ratio__126->SetBinError(81,0.009181607);
   data_mc_ratio__126->SetBinError(82,0.009186629);
   data_mc_ratio__126->SetBinError(83,0.01305513);
   data_mc_ratio__126->SetBinError(1000,0.1557135);
   data_mc_ratio__126->SetBinError(1001,0.008565816);
   data_mc_ratio__126->SetMinimum(0.4);
   data_mc_ratio__126->SetMaximum(1.6);
   data_mc_ratio__126->SetEntries(3521.592);
   data_mc_ratio__126->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__126->SetLineColor(ci);
   data_mc_ratio__126->SetLineWidth(2);
   data_mc_ratio__126->SetMarkerStyle(20);
   data_mc_ratio__126->SetMarkerSize(1.2);
   data_mc_ratio__126->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__126->GetXaxis()->SetRange(1,150);
   data_mc_ratio__126->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__126->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__126->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__126->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__126->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__126->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__126->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__126->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__126->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__126->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1126[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1126[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1126[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1126[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01089325, 0.005380545, 0.005414907, 0.005452203, 0.005481036, 0.01103742, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01214346, 0.006133469, 0.00612426, 0.006155624,
   0.006161814, 0.0122982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1126,Graph_from_mc_statistical_error_fy1126,Graph_from_mc_statistical_error_fex1126,Graph_from_mc_statistical_error_fey1126);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1126 = new TH1F("Graph_Graph_from_mc_statistical_error1126","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1126->SetMinimum(0.8425906);
   Graph_Graph_from_mc_statistical_error1126->SetMaximum(1.157409);
   Graph_Graph_from_mc_statistical_error1126->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1126->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1126->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1126);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
