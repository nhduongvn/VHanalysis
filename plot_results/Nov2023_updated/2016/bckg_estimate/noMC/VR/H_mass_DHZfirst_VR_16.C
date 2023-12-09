#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_VR_16()
{
//=========Macro generated from canvas: H_mass_DHZfirst_VR_16/H_mass_DHZfirst_VR_16
//=========  (Fri Dec  8 12:19:24 2023) by ROOT version 6.28/04
   TCanvas *H_mass_DHZfirst_VR_16 = new TCanvas("H_mass_DHZfirst_VR_16", "H_mass_DHZfirst_VR_16",0,0,600,600);
   H_mass_DHZfirst_VR_16->SetHighLightColor(2);
   H_mass_DHZfirst_VR_16->Range(0,0,1,1);
   H_mass_DHZfirst_VR_16->SetFillColor(0);
   H_mass_DHZfirst_VR_16->SetFillStyle(4000);
   H_mass_DHZfirst_VR_16->SetBorderMode(0);
   H_mass_DHZfirst_VR_16->SetBorderSize(2);
   H_mass_DHZfirst_VR_16->SetFrameFillStyle(1000);
   H_mass_DHZfirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-7.08182,315.7258,7084.738);
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
   st->SetMaximum(6375.556);
   
   TH1F *st_stack_38 = new TH1F("st_stack_38","",1000,0,2000);
   st_stack_38->SetMinimum(0.01);
   st_stack_38->SetMaximum(6375.556);
   st_stack_38->SetDirectory(nullptr);
   st_stack_38->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_38->SetLineColor(ci);
   st_stack_38->SetLineWidth(0);
   st_stack_38->GetXaxis()->SetRange(1,150);
   st_stack_38->GetXaxis()->SetLabelFont(42);
   st_stack_38->GetXaxis()->SetTitleOffset(1);
   st_stack_38->GetXaxis()->SetTitleFont(42);
   st_stack_38->GetYaxis()->SetTitle("Events/2.0");
   st_stack_38->GetYaxis()->SetLabelFont(42);
   st_stack_38->GetYaxis()->SetLabelSize(0.05);
   st_stack_38->GetYaxis()->SetTitleSize(0.057);
   st_stack_38->GetYaxis()->SetTitleOffset(1.2);
   st_stack_38->GetYaxis()->SetTitleFont(42);
   st_stack_38->GetZaxis()->SetLabelFont(42);
   st_stack_38->GetZaxis()->SetTitleOffset(1);
   st_stack_38->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_38);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(43,1400.761);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(44,2799.134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(45,2749.185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(46,2742.22);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(47,2740.628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,1342.255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,915.201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(79,1834.78);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(80,1803.736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(81,1819.457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(82,1762.344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(83,888.535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,3.781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,2346.011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(12,0.562857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,1.462345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,2.835314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,4.414034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,6.165789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,8.080968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,10.21512);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,12.18784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,14.31002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,15.96347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,17.68751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,19.35524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,20.57414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,21.44219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,22.18024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,22.64494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,23.13198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,23.45922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,23.66092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,23.7753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,23.86424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,23.64921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,23.91811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,23.93797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,24.10694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,23.9826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,24.12583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,23.77363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,23.91811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,23.75113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,23.68016);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,23.67515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,23.60143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,23.38991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,23.36026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,23.35348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,23.05396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,22.97825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,23.04193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,22.90057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,22.62307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,22.62745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,22.62482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,22.46321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,22.28622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,22.14451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,22.06927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,21.91983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,21.82024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,21.70651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,21.64531);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,21.57476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,21.5187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,21.32831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,21.04984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,20.95934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,20.73805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,20.58568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,20.52885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,20.40308);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,20.2775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,20.10589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,20.06942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,19.83821);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,19.62245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,19.34092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,19.30608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,19.10815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,18.9458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,19.02819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,18.72716);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,18.7187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,18.49951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,18.49094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,18.20714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,18.11775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,18.11556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,17.75009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,17.75009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,17.53347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,17.57746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,17.58084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,17.34613);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,17.10706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,17.00839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,16.80696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,17.04328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,16.83874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,16.61143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,16.47859);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,16.53976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,16.44371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,16.2243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,15.95975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,15.94734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,15.94982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,15.90133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,15.71974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,15.64398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,15.50924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,15.41961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,15.37589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,15.38104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,15.4119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,15.14885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,15.00439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,15.14755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,14.85319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,14.74481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,14.71255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,14.68156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,14.57191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,14.51882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,14.42578);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,14.26845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,14.29341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,14.26151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,14.34871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,14.1514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,14.157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,14.02491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,14.16539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,13.90297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,13.90724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,13.68912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,13.93);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,13.61224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,13.47481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,13.55977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,13.4851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,13.39966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,13.24509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,13.19567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,13.20467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,13.21965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,13.26152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,13.12193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,13.15057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,12.8767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,12.93653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,12.72822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,12.89207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,12.72356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,12.79958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,12.67522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,12.75309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,12.54647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,12.74066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,12.63454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,12.44029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,12.64394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,12.338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,12.40522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,12.20407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,12.26234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,12.11124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,12.26234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,12.11778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,12.13247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,12.31069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,11.773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,11.93668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,11.98469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,11.9151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,11.84008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,11.88681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,11.81665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,11.65467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,11.62576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,11.54715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,11.71399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,11.67504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,11.52827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,11.51968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,11.53514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,11.43168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,11.29577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,11.32028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,11.10484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,11.08878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,11.32378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,11.20425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,11.05659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,11.01533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,10.9703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,11.12978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,10.91602);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,11.04584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,10.81762);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,10.91783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,10.85964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,10.88696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,10.79197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,10.71278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,10.67575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,10.71093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,10.57887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,10.68317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,10.55075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,10.55263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,10.68131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,10.61624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,10.43375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,10.59196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,10.44323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,10.33651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,10.42806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,10.13338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,10.12556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,10.1607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,10.15485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,10.14119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,10.19572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,9.967894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,10.13924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,10.23255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,10.07656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,9.997646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,9.892122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,10.08441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,9.807692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,9.914115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,9.926091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,9.876096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,9.868073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,9.872085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,9.591305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,9.693976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,9.618105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,9.843965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,9.587175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,9.514614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,9.742874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,9.648935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,9.65509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,9.504203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,9.493781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,9.367807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,9.323315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,9.333927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,9.361464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,9.395245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,9.433104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,9.263658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,9.207917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,9.246543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,9.276474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,9.218663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,9.125837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,9.138846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,9.101939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,9.080159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,8.952789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,8.923991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,9.016699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,8.868347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,8.888419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,8.928427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,9.014502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,8.903999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,8.744686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,8.857177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,8.712928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,8.854941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,8.582416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,8.678773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,8.83031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,8.466275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,8.463936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,8.756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,8.459256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,8.533829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,8.459256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,8.587029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,8.557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,8.517572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,8.568562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,8.52222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,8.379294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,8.395819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,8.324767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,8.317629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,8.178392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,8.146857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,8.362737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,8.355631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,8.391101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,8.339026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,8.056428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,8.1152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,8.073614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,8.209805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,8.04413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,7.9201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,8.058886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,7.927597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,7.799175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,8.221855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,8.014538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,7.827052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,7.864907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,7.783928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,7.634964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,7.801714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,7.874971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,7.750788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,7.702097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,7.720072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,7.709806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,7.824522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,7.877485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,7.538397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,7.681503);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,7.63237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,7.68408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,7.707237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,7.614188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,7.562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,7.498895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,7.443238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,7.533142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,7.580307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,7.588139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,7.543649);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,7.314434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,7.333359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,7.365689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,7.249174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,7.392522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,7.216323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,7.194339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,7.330659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,7.22455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,7.083394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,7.257364);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,7.199841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,7.199841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,7.161236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,7.111292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,7.144627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,7.199841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,7.058191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,7.030082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,6.945071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,6.930802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,6.922226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,6.933658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,7.013162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,6.987706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,6.821376);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,6.936513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,6.809756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,6.867663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,6.830079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,6.789371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,6.730791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,6.72196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,6.792287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,6.653865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,6.557948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,6.62404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,6.748418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,6.582058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,6.635986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,6.680593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,6.650888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,6.585066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,6.644932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,6.50946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,6.665757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,6.36489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,6.417557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,6.548884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,6.48508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,6.530718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,6.26455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,6.491184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,6.239213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,6.220143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,6.292933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,6.454475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,6.442193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,6.159363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,6.280334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,6.255061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,6.383528);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,6.207397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,6.140045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,6.133592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,6.169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,6.003075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,6.159363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,6.213773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,6.156148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,6.146491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,5.953394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,6.081721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,5.893223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,6.058888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,5.913348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,6.084976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,5.943407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,6.02612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,5.832432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,5.845995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,5.835826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,5.781284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,5.852766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,5.642624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,5.695017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,5.708907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,5.646132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,5.625051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,5.726223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,5.771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,5.71584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,5.646132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,5.784708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,5.771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,5.420696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,5.691539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,5.712375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,5.543499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,5.62857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,5.58974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,5.603891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,5.579103);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,5.695017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,5.522026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,5.391394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,5.522026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,5.603891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,5.328594);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,5.376684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,5.391394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,5.667134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,5.420696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,5.572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,5.309982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,5.435287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,5.358239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,5.361933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,5.336021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,5.302519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,5.15867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,5.420696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,5.16634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,5.116274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,5.143293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,5.33973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,5.261283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,5.081324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,5.104651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,5.131731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,5.053973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,5.234873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,5.15867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,5.16634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,4.95506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,5.147142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,5.112403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,5.096887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,5.018589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,4.927009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,5.038278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,5.026474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,4.978978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,4.967034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,5.10077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,4.910907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,4.74689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,4.914937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,4.841879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,4.947062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,4.95506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,4.878545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,5.006739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,4.780144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,4.800811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,4.776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,4.804933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,4.886656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,4.700783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,4.649962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,4.906874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,4.75106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,4.507251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,4.654218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,4.767701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,4.572672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,4.467539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,4.796684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,4.520411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,4.704993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,4.594272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,4.738541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,4.485232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,4.494053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,4.422996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,4.38252);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,4.632898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,4.666964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,4.529163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,4.502856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,4.520411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,4.359872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,4.368945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,4.300426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,4.632898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,4.368945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,4.476394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,4.467539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,4.585644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,4.244815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,4.368945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,4.445323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,4.463105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,4.511642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,4.332537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,4.240148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,4.346226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,4.337104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,4.364411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,4.216734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,4.179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,4.350779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,4.235476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,4.440867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,4.083139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,3.965047);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,4.318804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,4.155242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,4.226115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,4.341667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,4.136137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,4.087985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,4.164761);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,4.244815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,4.300426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,4.049051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,4.244815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,4.014674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,4.009739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,4.087985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,4.083139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,4.039259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,4.121751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,4.179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,3.924894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,4.116944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,4.10249);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,3.822665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,3.781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,3.98);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,3.994897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,3.838173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,3.975022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,4.029443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,3.869002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,3.90973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,3.889419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,3.970038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,3.807094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,3.950037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,3.791459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,3.653154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,3.970038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,3.879224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,3.822665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,3.914791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,3.822665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,3.738871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,3.754724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,3.889419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,3.759994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,3.749447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,3.744163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,3.576468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,3.701614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,3.615015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,3.615015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,3.548678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,3.6909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,3.503757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,3.582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,3.712297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,3.717627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,3.701614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,3.576468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,3.609533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,3.377142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,3.5319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,3.463972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,3.452521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,3.5319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,3.475386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,3.458251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,3.492436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,3.609533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,3.452521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,3.481078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,3.631409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,3.177775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,3.609533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,3.412139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,3.570927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,3.55982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,3.486762);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,3.335848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,3.406331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,3.388848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,3.394686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,3.371274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,3.509403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,3.458251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,3.452521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,3.492436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,3.423725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,3.383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,3.388848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,3.12753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,3.388848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,3.365395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,3.306036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,3.452521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,3.371274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,3.159027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,3.171538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,3.196413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,3.208779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,3.300042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,3.335848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,3.300042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,3.184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,3.089311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,3.233367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,3.239485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,3.359507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,3.171538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,3.12753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,3.004834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,3.082895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,3.214943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,3.12753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,3.146466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,3.239485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,2.965033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,3.102103);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,2.998237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,3.281992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,3.233367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,3.070022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,3.108479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,3.063566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,3.057096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,2.958348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,3.057096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,3.024538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,3.121193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,2.897484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,3.082895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,2.849246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,2.971704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,2.9382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,2.971704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,3.057096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,3.004834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.911119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,2.911119);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,2.890642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,2.991626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,3.017984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,3.140167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,3.082895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,2.778884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.743026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,2.965033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,2.863111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,2.897484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,2.863111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.870019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.828321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,2.9382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.764596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,2.835314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.924691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.944931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.743026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.80724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,2.849246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,2.863111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.917913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,2.883784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.931453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,2.571647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,2.80724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,2.699367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,2.640033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,2.743026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.563936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,2.771749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.654991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,2.821312);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.764596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.692022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,2.602263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,2.835314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,2.579335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.556201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,2.556201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,2.684657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,2.764596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,2.669865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,2.632523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,2.677271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.721284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,2.509295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,2.721284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,2.602263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,2.469525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,2.602263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,2.617436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,2.3546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,2.388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,2.721284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,2.563936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,2.587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,2.602263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,2.412747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,2.579335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,2.594643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,2.540662);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,2.548443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.517173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,2.548443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,2.453437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,2.320719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,2.669865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,2.445353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,2.493463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,2.379694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,2.362994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,2.587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,2.509295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,2.404526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,2.371359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,2.437242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,2.396277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,2.29498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,2.501391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,2.286336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,2.469525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,2.509295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,2.198027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,2.3546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,2.277659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,2.501391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,2.29498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.329235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.21597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,2.312171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,2.233769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.251428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,2.198027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,2.134037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.346175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.134037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,2.268949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.198027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,2.420939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,2.189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,2.277659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,2.320719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,2.437242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,2.198027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,2.303592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,2.268949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,2.29498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.207017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.143296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.286336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,2.251428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.29498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.134037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,1.980025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,2.277659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,1.99);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.096595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,2.068069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,2.161693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,2.260206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.277659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,2.058472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,2.329235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,2.224888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,2.143296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,2.077621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,1.959923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,2.077621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.04883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,2.096595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.106018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,2.096595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,1.999925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,2.268949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.106018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,2.106018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.096595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,1.88788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,2.077621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.170834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,2.058472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,1.812976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,2.134037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,2.08713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,1.99);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,1.980025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,1.812976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,1.823865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,1.834689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,1.980025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,1.919087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,2.009801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,2.115399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,1.866785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,2.124739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,1.908741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,1.99);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,2.02941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,1.908741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,2.04883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,2.02941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,1.908741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.866785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,1.856148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.75752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.75752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,1.919087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,1.959923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,1.929377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,1.768751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,1.929377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,1.700257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,1.77991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,1.939612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.856148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,1.84545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.939612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.823865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,1.949794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.823865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.856148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.812976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.908741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,1.919087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.802022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,1.980025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.823865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.856148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.768751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,1.746218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.711863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.908741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,1.877362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,1.711863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.700257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.823865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,1.77991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,1.723391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.834689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.746218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.877362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,1.688571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.969999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.55424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.802022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.700257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.711863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.812976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.768751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,1.462345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.628885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.856148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.700257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.616684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.711863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.616684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.723391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.84545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.616684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.802022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.664953);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.688571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.700257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.664953);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.664953);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.528548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.676804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.75752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.640996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.407142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.541447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.502417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.723391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.653018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.421144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.435009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.579514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.528548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.421144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.579514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.802022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.462345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.48918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.541447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.502417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.55424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.242755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.407142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.242755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.515539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.566928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.48918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.515539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.349684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.48918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.334933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.421144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.515539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.274222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.242755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.407142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.604389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.407142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.640996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,1.421144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.226718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.462345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.55424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.334933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.258587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.502417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.378712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.435009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.48918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.107985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.48918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.435009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.448742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.462345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.289667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,1.349684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.364275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.160359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.226718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,21.60686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(1901726);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_H_mass__75 = new TH1D("VH_DHZfirst_H_mass__75","",1000,0,2000);
   VH_DHZfirst_H_mass__75->SetBinContent(43,1446);
   VH_DHZfirst_H_mass__75->SetBinContent(44,2869);
   VH_DHZfirst_H_mass__75->SetBinContent(45,2747);
   VH_DHZfirst_H_mass__75->SetBinContent(46,2785);
   VH_DHZfirst_H_mass__75->SetBinContent(47,2718);
   VH_DHZfirst_H_mass__75->SetBinContent(48,1351);
   VH_DHZfirst_H_mass__75->SetBinContent(78,844);
   VH_DHZfirst_H_mass__75->SetBinContent(79,1736);
   VH_DHZfirst_H_mass__75->SetBinContent(80,1750);
   VH_DHZfirst_H_mass__75->SetBinContent(81,1719);
   VH_DHZfirst_H_mass__75->SetBinContent(82,1718);
   VH_DHZfirst_H_mass__75->SetBinContent(83,851);
   VH_DHZfirst_H_mass__75->SetBinContent(1000,2);
   VH_DHZfirst_H_mass__75->SetBinContent(1001,2502);
   VH_DHZfirst_H_mass__75->SetEntries(374867);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__75->SetLineColor(ci);
   VH_DHZfirst_H_mass__75->SetLineWidth(2);
   VH_DHZfirst_H_mass__75->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__75->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__75->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__75->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__75->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__75->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__75->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__75->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__75->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__75->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__75->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__75->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1075[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1075[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1400.761, 2799.134, 2749.185, 2742.22, 2740.628, 1342.255, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915.201, 1834.78, 1803.736, 1819.457,
   1762.344, 888.535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.781 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1075[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1075[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.562857, 1.462345, 2.835314, 4.414034, 6.165789, 8.080968,
   10.21512, 12.18784, 14.31002, 15.96347, 17.68751, 19.35524, 20.57414, 21.44219, 22.18024, 22.64494, 23.13198, 23.45922, 23.66092, 23.7753, 23.86424, 23.64921,
   23.91811, 23.93797, 24.10694, 23.9826, 24.12583, 23.77363, 23.91811, 23.75113, 23.68016, 23.67515, 23.60143, 23.38991, 23.36026, 23.35348, 23.05396, 22.97825,
   23.04193, 22.90057, 22.62307, 22.62745, 22.62482, 22.46321, 22.28622, 22.14451, 22.06927, 21.91983, 21.82024, 21.70651, 21.64531, 21.57476, 21.5187, 21.32831,
   21.04984, 20.95934, 20.73805, 20.58568, 20.52885, 20.40308, 20.2775, 20.10589, 20.06942, 19.83821, 19.62245, 19.34092, 19.30608, 19.10815, 18.9458, 19.02819,
   18.72716, 18.7187, 18.49951, 18.49094, 18.20714, 18.11775, 18.11556, 17.75009, 17.75009, 17.53347, 17.57746, 17.58084, 17.34613, 17.10706, 17.00839, 16.80696,
   17.04328, 16.83874, 16.61143, 16.47859, 16.53976, 16.44371, 16.2243, 15.95975, 15.94734, 15.94982, 15.90133, 15.71974, 15.64398, 15.50924, 15.41961, 15.37589,
   15.38104, 15.4119, 15.14885, 15.00439, 15.14755, 14.85319, 14.74481, 14.71255, 14.68156, 14.57191, 14.51882, 14.42578, 14.26845, 14.29341, 14.26151, 14.34871,
   14.1514, 14.157, 14.02491, 14.16539, 13.90297, 13.90724, 13.68912, 13.93, 13.61224, 13.47481, 13.55977, 13.4851, 13.39966, 13.24509, 13.19567, 13.20467,
   13.21965, 13.26152, 13.12193, 13.15057, 12.8767, 12.93653, 12.72822, 12.89207, 12.72356, 12.79958, 12.67522, 12.75309, 12.54647, 12.74066, 12.63454, 12.44029,
   12.64394, 12.338, 12.40522, 12.20407, 12.26234, 12.11124, 12.26234, 12.11778, 12.13247, 12.31069, 11.773, 11.93668, 11.98469, 11.9151, 11.84008, 11.88681,
   11.81665, 11.65467, 11.62576, 11.54715, 11.71399, 11.67504, 11.52827, 11.51968, 11.53514, 11.43168, 11.29577, 11.32028, 11.10484, 11.08878, 11.32378, 11.20425,
   11.05659, 11.01533, 10.9703, 11.12978, 10.91602, 11.04584, 10.81762, 10.91783, 10.85964, 10.88696, 10.79197, 10.71278, 10.67575, 10.71093, 10.57887, 10.68317,
   10.55075, 10.55263, 10.68131, 10.61624, 10.43375, 10.59196, 10.44323, 10.33651, 10.42806, 10.13338, 10.12556, 10.1607, 10.15485, 10.14119, 10.19572, 9.967894,
   10.13924, 10.23255, 10.07656, 9.997646, 9.892122, 10.08441, 9.807692, 9.914115, 9.926091, 9.876096, 9.868073, 9.872085, 9.591305, 9.693976, 9.618105, 9.843965,
   9.587175, 9.514614, 9.742874, 9.648935, 9.65509, 9.504203, 9.493781, 9.367807, 9.323315, 9.333927, 9.361464, 9.395245, 9.433104, 9.263658, 9.207917, 9.246543,
   9.276474, 9.218663, 9.125837, 9.138846, 9.101939, 9.080159, 8.952789, 8.923991, 9.016699, 8.868347, 8.888419, 8.928427, 9.014502, 8.903999, 8.744686, 8.857177,
   8.712928, 8.854941, 8.582416, 8.678773, 8.83031, 8.466275, 8.463936, 8.756, 8.459256, 8.533829, 8.459256, 8.587029, 8.557, 8.517572, 8.568562, 8.52222,
   8.379294, 8.395819, 8.324767, 8.317629, 8.178392, 8.146857, 8.362737, 8.355631, 8.391101, 8.339026, 8.056428, 8.1152, 8.073614, 8.209805, 8.04413, 7.9201,
   8.058886, 7.927597, 7.799175, 8.221855, 8.014538, 7.827052, 7.864907, 7.783928, 7.634964, 7.801714, 7.874971, 7.750788, 7.702097, 7.720072, 7.709806, 7.824522,
   7.877485, 7.538397, 7.681503, 7.63237, 7.68408, 7.707237, 7.614188, 7.562, 7.498895, 7.443238, 7.533142, 7.580307, 7.588139, 7.543649, 7.314434, 7.333359,
   7.365689, 7.249174, 7.392522, 7.216323, 7.194339, 7.330659, 7.22455, 7.083394, 7.257364, 7.199841, 7.199841, 7.161236, 7.111292, 7.144627, 7.199841, 7.058191,
   7.030082, 6.945071, 6.930802, 6.922226, 6.933658, 7.013162, 6.987706, 6.821376, 6.936513, 6.809756, 6.867663, 6.830079, 6.789371, 6.730791, 6.72196, 6.792287,
   6.653865, 6.557948, 6.62404, 6.748418, 6.582058, 6.635986, 6.680593, 6.650888, 6.585066, 6.644932, 6.50946, 6.665757, 6.36489, 6.417557, 6.548884, 6.48508,
   6.530718, 6.26455, 6.491184, 6.239213, 6.220143, 6.292933, 6.454475, 6.442193, 6.159363, 6.280334, 6.255061, 6.383528, 6.207397, 6.140045, 6.133592, 6.169,
   6.003075, 6.159363, 6.213773, 6.156148, 6.146491, 5.953394, 6.081721, 5.893223, 6.058888, 5.913348, 6.084976, 5.943407, 6.02612, 5.832432, 5.845995, 5.835826,
   5.781284, 5.852766, 5.642624, 5.695017, 5.708907, 5.646132, 5.625051, 5.726223, 5.771, 5.71584, 5.646132, 5.784708, 5.771, 5.420696, 5.691539, 5.712375,
   5.543499, 5.62857, 5.58974, 5.603891, 5.579103, 5.695017, 5.522026, 5.391394, 5.522026, 5.603891, 5.328594, 5.376684, 5.391394, 5.667134, 5.420696, 5.572,
   5.309982, 5.435287, 5.358239, 5.361933, 5.336021, 5.302519, 5.15867, 5.420696, 5.16634, 5.116274, 5.143293, 5.33973, 5.261283, 5.081324, 5.104651, 5.131731,
   5.053973, 5.234873, 5.15867, 5.16634, 4.95506, 5.147142, 5.112403, 5.096887, 5.018589, 4.927009, 5.038278, 5.026474, 4.978978, 4.967034, 5.10077, 4.910907,
   4.74689, 4.914937, 4.841879, 4.947062, 4.95506, 4.878545, 5.006739, 4.780144, 4.800811, 4.776, 4.804933, 4.886656, 4.700783, 4.649962, 4.906874, 4.75106,
   4.507251, 4.654218, 4.767701, 4.572672, 4.467539, 4.796684, 4.520411, 4.704993, 4.594272, 4.738541, 4.485232, 4.494053, 4.422996, 4.38252, 4.632898, 4.666964,
   4.529163, 4.502856, 4.520411, 4.359872, 4.368945, 4.300426, 4.632898, 4.368945, 4.476394, 4.467539, 4.585644, 4.244815, 4.368945, 4.445323, 4.463105, 4.511642,
   4.332537, 4.240148, 4.346226, 4.337104, 4.364411, 4.216734, 4.179, 4.350779, 4.235476, 4.440867, 4.083139, 3.965047, 4.318804, 4.155242, 4.226115, 4.341667,
   4.136137, 4.087985, 4.164761, 4.244815, 4.300426, 4.049051, 4.244815, 4.014674, 4.009739, 4.087985, 4.083139, 4.039259, 4.121751, 4.179, 3.924894, 4.116944,
   4.10249, 3.822665, 3.781, 3.98, 3.994897, 3.838173, 3.975022, 4.029443, 3.869002, 3.90973, 3.889419, 3.970038, 3.807094, 3.950037, 3.791459, 3.653154,
   3.970038, 3.879224, 3.822665, 3.914791, 3.822665, 3.738871, 3.754724, 3.889419, 3.759994, 3.749447, 3.744163, 3.576468, 3.701614, 3.615015, 3.615015, 3.548678,
   3.6909, 3.503757, 3.582, 3.712297, 3.717627, 3.701614, 3.576468, 3.609533, 3.377142, 3.5319, 3.463972, 3.452521, 3.5319, 3.475386, 3.458251, 3.492436,
   3.609533, 3.452521, 3.481078, 3.631409, 3.177775, 3.609533, 3.412139, 3.570927, 3.55982, 3.486762, 3.335848, 3.406331, 3.388848, 3.394686, 3.371274, 3.509403,
   3.458251, 3.452521, 3.492436, 3.423725, 3.383, 3.388848, 3.12753, 3.388848, 3.365395, 3.306036, 3.452521, 3.371274, 3.159027, 3.171538, 3.196413, 3.208779,
   3.300042, 3.335848, 3.300042, 3.184, 3.089311, 3.233367, 3.239485, 3.359507, 3.171538, 3.12753, 3.004834, 3.082895, 3.214943, 3.12753, 3.146466, 3.239485,
   2.965033, 3.102103, 2.998237, 3.281992, 3.233367, 3.070022, 3.108479, 3.063566, 3.057096, 2.958348, 3.057096, 3.024538, 3.121193, 2.897484, 3.082895, 2.849246,
   2.971704, 2.9382, 2.971704, 3.057096, 3.004834, 2.911119, 2.911119, 2.890642, 2.991626, 3.017984, 3.140167, 3.082895, 2.778884, 2.743026, 2.965033, 2.863111,
   2.897484, 2.863111, 2.870019, 2.828321, 2.9382, 2.764596, 2.835314, 2.924691, 2.944931, 2.743026, 2.80724, 2.849246, 2.863111, 2.917913, 2.883784, 2.931453,
   2.571647, 2.80724, 2.699367, 2.640033, 2.743026, 2.563936, 2.771749, 2.654991, 2.821312, 2.764596, 2.692022, 2.602263, 2.835314, 2.579335, 2.556201, 2.556201,
   2.684657, 2.764596, 2.669865, 2.632523, 2.677271, 2.721284, 2.509295, 2.721284, 2.602263, 2.469525, 2.602263, 2.617436, 2.3546, 2.388, 2.721284, 2.563936,
   2.587, 2.602263, 2.412747, 2.579335, 2.594643, 2.540662, 2.548443, 2.517173, 2.548443, 2.453437, 2.260206, 2.320719, 2.669865, 2.445353, 2.493463, 2.379694,
   2.362994, 2.587, 2.509295, 2.404526, 2.371359, 2.437242, 2.396277, 2.29498, 2.501391, 2.286336, 2.469525, 2.509295, 2.198027, 2.3546, 2.277659, 2.260206,
   2.501391, 2.29498, 2.329235, 2.21597, 2.312171, 2.233769, 2.251428, 2.198027, 2.134037, 2.346175, 2.134037, 2.268949, 2.198027, 2.420939, 2.189, 2.277659,
   2.320719, 2.437242, 2.198027, 2.303592, 2.268949, 2.260206, 2.260206, 2.29498, 2.207017, 2.143296, 2.286336, 2.260206, 2.251428, 2.29498, 2.134037, 1.980025,
   2.277659, 1.99, 2.096595, 2.068069, 2.161693, 2.260206, 2.277659, 2.058472, 2.329235, 2.224888, 2.143296, 2.077621, 1.959923, 2.077621, 2.04883, 2.096595,
   2.106018, 2.096595, 1.999925, 2.268949, 2.106018, 2.106018, 2.096595, 1.88788, 2.077621, 2.170834, 2.058472, 1.812976, 2.134037, 2.08713, 1.99, 1.980025,
   1.812976, 1.823865, 1.834689, 1.980025, 1.919087, 2.009801, 2.115399, 1.866785, 2.124739, 1.908741, 1.99, 2.02941, 1.908741, 2.04883, 2.02941, 1.908741,
   1.866785, 1.856148, 1.75752, 1.75752, 1.919087, 1.959923, 1.929377, 1.768751, 1.929377, 1.700257, 1.77991, 1.939612, 1.856148, 1.84545, 1.939612, 1.823865,
   1.949794, 1.823865, 1.856148, 1.812976, 1.908741, 1.919087, 1.802022, 1.980025, 1.823865, 1.856148, 1.768751, 1.746218, 1.711863, 1.908741, 1.877362, 1.604389,
   1.791, 1.711863, 1.700257, 1.823865, 1.77991, 1.723391, 1.834689, 1.746218, 1.877362, 1.688571, 1.969999, 1.604389, 1.55424, 1.802022, 1.700257, 1.711863,
   1.604389, 1.812976, 1.791, 1.592, 1.768751, 1.462345, 1.628885, 1.856148, 1.700257, 1.604389, 1.616684, 1.711863, 1.616684, 1.723391, 1.84545, 1.616684,
   1.802022, 1.664953, 1.688571, 1.700257, 1.664953, 1.592, 1.664953, 1.566928, 1.528548, 1.566928, 1.676804, 1.75752, 1.640996, 1.566928, 1.448742, 1.566928,
   1.592, 1.407142, 1.566928, 1.604389, 1.541447, 1.502417, 1.723391, 1.653018, 1.604389, 1.421144, 1.435009, 1.579514, 1.528548, 1.421144, 1.579514, 1.802022,
   1.448742, 1.592, 1.462345, 1.48918, 1.541447, 1.502417, 1.364275, 1.55424, 1.242755, 1.407142, 1.242755, 1.515539, 1.566928, 1.48918, 1.448742, 1.515539,
   1.349684, 1.48918, 1.334933, 1.421144, 1.364275, 1.515539, 1.274222, 1.242755, 1.448742, 1.407142, 1.604389, 1.407142, 1.640996, 1.421144, 1.393, 1.226718,
   1.448742, 1.462345, 1.55424, 1.334933, 1.258587, 1.502417, 1.378712, 1.364275, 1.435009, 1.48918, 1.107985, 1.48918, 1.364275, 1.435009, 1.448742, 1.462345,
   1.289667, 1.364275, 1.349684, 1.364275, 1.364275, 1.160359, 1.226718 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1075,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1075,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1075,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1075);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->SetMinimum(-308.812);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->SetMaximum(3107.422);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1075);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_DHZfirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__76 = new TH1D("data_mc_ratio__76","",1000,0,2000);
   data_mc_ratio__76->SetBinContent(43,1.032296);
   data_mc_ratio__76->SetBinContent(44,1.02496);
   data_mc_ratio__76->SetBinContent(45,0.9992052);
   data_mc_ratio__76->SetBinContent(46,1.0156);
   data_mc_ratio__76->SetBinContent(47,0.9917435);
   data_mc_ratio__76->SetBinContent(48,1.006515);
   data_mc_ratio__76->SetBinContent(78,0.9222018);
   data_mc_ratio__76->SetBinContent(79,0.9461625);
   data_mc_ratio__76->SetBinContent(80,0.9702085);
   data_mc_ratio__76->SetBinContent(81,0.9447874);
   data_mc_ratio__76->SetBinContent(82,0.9748381);
   data_mc_ratio__76->SetBinContent(83,0.9577563);
   data_mc_ratio__76->SetBinContent(1000,0.5289606);
   data_mc_ratio__76->SetBinContent(1001,1.066491);
   data_mc_ratio__76->SetBinError(43,0.02714689);
   data_mc_ratio__76->SetBinError(44,0.01913558);
   data_mc_ratio__76->SetBinError(45,0.0190645);
   data_mc_ratio__76->SetBinError(46,0.01924466);
   data_mc_ratio__76->SetBinError(47,0.01902281);
   data_mc_ratio__76->SetBinError(48,0.02738373);
   data_mc_ratio__76->SetBinError(78,0.03174349);
   data_mc_ratio__76->SetBinError(79,0.02270863);
   data_mc_ratio__76->SetBinError(80,0.02319242);
   data_mc_ratio__76->SetBinError(81,0.02278747);
   data_mc_ratio__76->SetBinError(82,0.02351911);
   data_mc_ratio__76->SetBinError(83,0.03283146);
   data_mc_ratio__76->SetBinError(1000,0.3740316);
   data_mc_ratio__76->SetBinError(1001,0.02347505);
   data_mc_ratio__76->SetMinimum(0.4);
   data_mc_ratio__76->SetMaximum(1.6);
   data_mc_ratio__76->SetEntries(849.1865);
   data_mc_ratio__76->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__76->SetLineColor(ci);
   data_mc_ratio__76->SetLineWidth(2);
   data_mc_ratio__76->SetMarkerStyle(20);
   data_mc_ratio__76->SetMarkerSize(1.2);
   data_mc_ratio__76->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__76->GetXaxis()->SetRange(1,150);
   data_mc_ratio__76->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__76->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__76->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__76->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__76->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__76->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__76->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__76->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__76->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__76->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__76->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__76->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__76->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__76->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__76->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__76->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1076[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1076[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1076[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1076[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01690163, 0.008431691, 0.008507943, 0.008518741, 0.008521214, 0.01717554, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0210949, 0.01041441, 0.01050365, 0.01045817,
   0.01062628, 0.02106692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3244428 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1076,Graph_from_mc_statistical_error_fy1076,Graph_from_mc_statistical_error_fex1076,Graph_from_mc_statistical_error_fey1076);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1076 = new TH1F("Graph_Graph_from_mc_statistical_error1076","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1076->SetMinimum(0.6106686);
   Graph_Graph_from_mc_statistical_error1076->SetMaximum(1.389331);
   Graph_Graph_from_mc_statistical_error1076->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1076->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1076->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1076->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1076->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1076->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1076->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1076->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1076->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1076);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_VR_16->cd();
   H_mass_DHZfirst_VR_16->Modified();
   H_mass_DHZfirst_VR_16->cd();
   H_mass_DHZfirst_VR_16->SetSelected(H_mass_DHZfirst_VR_16);
}
