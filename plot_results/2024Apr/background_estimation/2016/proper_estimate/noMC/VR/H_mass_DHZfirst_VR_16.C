#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_VR_16()
{
//=========Macro generated from canvas: H_mass_DHZfirst_VR_16/H_mass_DHZfirst_VR_16
//=========  (Mon Apr  8 13:43:39 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-7.106539,315.7258,7109.432);
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
   st->SetMaximum(6397.778);
   
   TH1F *st_stack_51 = new TH1F("st_stack_51","",1000,0,2000);
   st_stack_51->SetMinimum(0.01);
   st_stack_51->SetMaximum(6397.778);
   st_stack_51->SetDirectory(nullptr);
   st_stack_51->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_51->SetLineColor(ci);
   st_stack_51->SetLineWidth(0);
   st_stack_51->GetXaxis()->SetRange(1,150);
   st_stack_51->GetXaxis()->SetLabelFont(42);
   st_stack_51->GetXaxis()->SetTitleOffset(1);
   st_stack_51->GetXaxis()->SetTitleFont(42);
   st_stack_51->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_51->GetYaxis()->SetLabelFont(42);
   st_stack_51->GetYaxis()->SetLabelSize(0.05);
   st_stack_51->GetYaxis()->SetTitleSize(0.057);
   st_stack_51->GetYaxis()->SetTitleOffset(1.2);
   st_stack_51->GetYaxis()->SetTitleFont(42);
   st_stack_51->GetZaxis()->SetLabelFont(42);
   st_stack_51->GetZaxis()->SetTitleOffset(1);
   st_stack_51->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_51);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(43,1265.414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(44,2532.264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(45,2488.028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(46,2495.19);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(47,2492.519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,1230.686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,853.8177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(79,1713.128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(80,1690.817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(81,1704.751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(82,1654.233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(83,827.1154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,3.724382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,2191.996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(11,0.008835221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(12,0.524703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,1.471234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,2.851366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,4.436037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,6.171835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,8.048968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,10.21847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,12.28903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,14.3346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,15.97586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,17.75959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,19.43395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,20.61295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,21.51033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,22.15627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,22.7019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,23.15726);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,23.45033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,23.72714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,23.79711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,23.97231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,23.69597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,23.94986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,24.02488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,24.19349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,24.01439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,24.25);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,23.90457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,24.00427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,23.84462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,23.73037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,23.75517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,23.69052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,23.44147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,23.50604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,23.43369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,23.14708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,23.07122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,23.20191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,22.9714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,22.73177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,22.66287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,22.66712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,22.58879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,22.32702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,22.19868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,22.10486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,21.94096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,21.82775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,21.73335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,21.6702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,21.63704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,21.53507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,21.34555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,21.05372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,21.01332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,20.76848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,20.62525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,20.58125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,20.46186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,20.32273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,20.13878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,20.14008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,19.89651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,19.70738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,19.37418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,19.32052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,19.13983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,19.05021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,19.07316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,18.80344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,18.70135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,18.52922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,18.50006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,18.26231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,18.11237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,18.12381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,17.7932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,17.78041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,17.56737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,17.58764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,17.60944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,17.35019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,17.16382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,17.05378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,16.87673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,17.06362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,16.89751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,16.67278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,16.45482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,16.59965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,16.43089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,16.30902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,15.9608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,16.09004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,15.97872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,15.95354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,15.72928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,15.63909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,15.50957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,15.36653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,15.4075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,15.38668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,15.40863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,15.19056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,15.01864);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,15.20188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,14.85803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,14.7817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,14.7372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,14.73316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,14.63817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,14.5382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,14.44148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,14.34139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,14.28274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,14.26167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,14.3614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,14.26451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,14.20005);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,14.04795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,14.24645);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,13.93432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,13.91407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,13.69815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,13.96797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,13.62287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,13.49595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,13.58506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,13.54922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,13.36919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,13.30165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,13.22929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,13.33061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,13.19638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,13.27257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,13.17254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,13.1527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,12.97609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,12.92134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,12.78259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,12.89241);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,12.77027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,12.8063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,12.7164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,12.81086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,12.53083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,12.73047);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,12.66947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,12.50826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,12.60408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,12.34233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,12.43555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,12.23627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,12.26209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,12.12698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,12.31015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,12.12336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,12.1217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,12.30072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,11.73042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,11.96471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,11.95207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,11.96127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,11.80807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,11.89318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,11.83074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,11.62342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,11.64012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,11.5134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,11.70238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,11.72209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,11.61887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,11.47326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,11.51491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,11.48702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,11.31056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,11.37838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,11.15674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,11.07529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,11.31356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,11.27041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,11.07568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,11.11681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,11.03067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,11.18313);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,11.01583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,11.13963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,10.93183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,10.9169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,10.89985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,10.8654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,10.83885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,10.71546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,10.65214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,10.714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,10.52639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,10.64399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,10.57247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,10.57639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,10.71932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,10.63322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,10.46558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,10.63601);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,10.48392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,10.34494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,10.40112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,10.22522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,10.13475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,10.16492);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,10.17424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,10.18112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,10.1998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,10.03505);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,10.13514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,10.20768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,10.0541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,10.03357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,9.914378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,10.01835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,9.831255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,9.929889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,9.918561);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,9.898086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,9.832638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,9.872765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,9.606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,9.716973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,9.531742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,9.827452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,9.581123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,9.565034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,9.725399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,9.665918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,9.651947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,9.647174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,9.446508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,9.339967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,9.342531);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,9.374194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,9.366228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,9.396042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,9.432552);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,9.331182);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,9.244474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,9.313483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,9.229701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,9.225952);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,9.106117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,9.162315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,9.068338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,9.224596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,8.969396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,8.943062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,9.078809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,8.925015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,8.967882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,8.882078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,8.984465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,8.990185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,8.770089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,8.872648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,8.779563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,8.890809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,8.650486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,8.802669);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,8.840558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,8.559873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,8.517799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,8.74637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,8.466069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,8.53872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,8.497203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,8.636733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,8.557153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,8.510936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,8.554847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,8.58067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,8.342599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,8.358737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,8.325866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,8.315248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,8.142397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,8.196405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,8.361579);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,8.391097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,8.425586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,8.318142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,8.062482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,8.120341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,8.089683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,8.24168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,8.02059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,7.982816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,8.109093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,7.956019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,7.783886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,8.185632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,7.986301);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,7.815961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,7.875892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,7.854589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,7.671995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,7.789745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,7.881845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,7.792812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,7.722593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,7.710755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,7.698344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,7.807407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,7.870706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,7.507794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,7.743387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,7.721091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,7.708902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,7.745883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,7.611213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,7.606089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,7.499876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,7.425366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,7.549794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,7.558332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,7.61966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,7.545666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,7.352448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,7.376398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,7.347122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,7.30152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,7.423964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,7.232477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,7.183076);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,7.336805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,7.24685);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,7.136448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,7.193682);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,7.231938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,7.202946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,7.138044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,7.135185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,7.15763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,7.156202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,7.07415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,7.094332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,6.998547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,6.892502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,6.981712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,6.952215);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,7.038805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,6.974905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,6.848854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,6.913909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,6.905838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,6.894185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,6.802296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,6.762084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,6.729553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,6.752259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,6.829722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,6.649959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,6.607355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,6.629836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,6.748776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,6.577819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,6.621111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,6.680588);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,6.631657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,6.615223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,6.652432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,6.536982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,6.655513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,6.389286);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,6.422374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,6.60544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,6.482386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,6.553191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,6.258455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,6.481703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,6.291314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,6.211737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,6.371634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,6.379949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,6.470526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,6.134639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,6.280448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,6.214231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,6.31746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,6.231543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,6.170677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,6.164052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,6.224479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,6.053956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,6.148096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,6.220173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,6.102289);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,6.174121);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,5.976318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,6.054806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,5.863964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,6.011639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,5.911986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,6.10712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,5.952106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,6.071392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,5.915742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,5.823967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,5.931555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,5.730944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,5.849689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,5.6378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,5.707124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,5.700083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,5.661817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,5.624713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,5.727472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,5.719891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,5.670004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,5.645475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,5.902124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,5.767041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,5.466025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,5.69088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,5.690355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,5.528781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,5.704888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,5.57338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,5.604343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,5.552757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,5.637291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,5.540894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,5.414493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,5.586017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,5.630904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,5.334875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,5.410213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,5.387117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,5.660282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,5.440444);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,5.619117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,5.331715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,5.443026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,5.312021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,5.352965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,5.337171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,5.354872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,5.200919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,5.427895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,5.181326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,5.111413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,5.17656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,5.343329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,5.25018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,5.079705);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,5.151565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,5.175409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,5.120749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,5.23807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,5.212377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,5.158825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,4.961356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,5.136197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,5.16313);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,5.132318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,4.966603);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,4.964214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,5.0486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,5.012735);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,4.965842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,4.900465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,5.066858);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,4.896231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,4.748014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,4.946044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,4.840477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,4.933502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,4.971446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,4.821597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,4.979161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,4.751944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,4.872666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,4.814276);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,4.748037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,4.916907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,4.662563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,4.783587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,4.900892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,4.77262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,4.500513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,4.68773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,4.752742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,4.566812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,4.454616);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,4.788243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,4.58482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,4.670031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,4.600382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,4.765529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,4.472109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,4.529722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,4.475526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,4.340179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,4.614443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,4.662507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,4.597704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,4.496939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,4.530204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,4.370698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,4.370013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,4.325936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,4.650258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,4.397759);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,4.469839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,4.499036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,4.60365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,4.262431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,4.33449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,4.49315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,4.472905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,4.577102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,4.353219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,4.23817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,4.327219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,4.349658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,4.355396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,4.200179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,4.208155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,4.350279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,4.270137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,4.473089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,4.158968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,3.990665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,4.28203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,4.138629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,4.181207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,4.433291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,4.094783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,4.14695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,4.133678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,4.21978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,4.25643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,4.071538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,4.220156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,4.050331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,3.998007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,4.058463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,4.139131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,4.099906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,4.090965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,4.152238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,3.953154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,4.168409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,4.081989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,3.833183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,3.775445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,3.934906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,3.998361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,3.842155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,3.927747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,4.039576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,3.893831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,3.935241);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,3.897348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,3.950393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,3.81643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,3.97951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,3.838113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,3.648486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,3.927337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,3.847463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,3.790002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,3.904117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,3.858447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,3.74421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,3.767662);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,3.923788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,3.792034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,3.798288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,3.738863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,3.587861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,3.693877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,3.63155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,3.603971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,3.592786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,3.691686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,3.497404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,3.632858);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,3.726391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,3.764035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,3.755246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,3.56619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,3.629728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,3.363418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,3.572522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,3.505516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,3.398322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,3.521179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,3.50899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,3.45906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,3.514383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,3.607951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,3.44801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,3.484006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,3.642829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,3.168992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,3.64621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,3.425646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,3.522236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,3.561456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,3.509545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,3.320201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,3.379311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,3.396066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,3.401928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,3.361258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,3.508569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,3.493719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,3.465022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,3.498201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,3.453669);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,3.374702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,3.384694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,3.173983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,3.378549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,3.403209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,3.349409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,3.396459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,3.326479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,3.105835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,3.158964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,3.174988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,3.205849);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,3.289846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,3.343694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,3.30824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,3.222746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,3.145227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,3.278359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,3.268089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,3.378575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,3.193996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,3.117243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,2.995406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,3.094955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,3.18506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,3.171512);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,3.173383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,3.211609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,2.983413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,3.073572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,2.975988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,3.516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,3.217406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,3.006051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,3.13099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,3.060414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,3.085945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,2.975183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,3.066446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,3.06134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,3.11101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,2.903003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,3.079729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,2.846508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,2.923924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,2.923708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,2.942132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,3.066985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,2.994935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.895332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,2.908831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,2.922126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,2.969234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,3.015442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,3.135161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,3.027939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,2.772375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.879625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,3.000708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,2.846738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,2.889215);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,2.847634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.881891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.855347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,2.907621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.742193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,2.848326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.928419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.956766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.73459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.839554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,2.800955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,2.833714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.934922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,2.894647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.893331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,2.594941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,2.762362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,2.725275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,2.602927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,2.797792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.563721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,2.76387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.682999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,2.855262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.847002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.697341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,2.608829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,2.819814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,2.604943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.623812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,2.533752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,2.653785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,2.783438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,2.646452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,2.624461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,2.691153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.737291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,2.531647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,2.705239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,2.616937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,2.500763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,2.638737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,2.616941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,2.36591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,2.421242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,2.735226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,2.548823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,2.585838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,2.585615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,2.422104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,2.501913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,2.578331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,2.589929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,2.547175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.533316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,2.500636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,2.476692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,2.267273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,2.312634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,2.628169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,2.477255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,2.493659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,2.339306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,2.394242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,2.594412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,2.503056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,2.396802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,2.454486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,2.364007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,2.389496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,2.279889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,2.540652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,2.288794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,2.486493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,2.525765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,2.218895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,2.365575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,2.303757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,2.263014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,2.478435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,2.329394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.295559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.223032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,2.326608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,2.236262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.217659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,2.192442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,2.196527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.332199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.110129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,2.345837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.18709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,2.393614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,2.164892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,2.297835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,2.321588);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,2.422554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,2.166218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,2.304306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,2.295086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,2.31467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.289053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,2.304132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.196673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.101349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.288096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,2.298389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,2.252882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.278138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.090423);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,1.953527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,2.277861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,1.964156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.117908);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,2.099796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,2.18139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,2.237013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.287537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,1.994757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,2.297005);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,2.218082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,2.146106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,2.081561);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,1.985176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,2.08014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.023547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,2.109195);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.118101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,2.136564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,1.94379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,2.226891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.127935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,2.070304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.098123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,1.944394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,2.060366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.200639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,2.081344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,1.871558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,2.153468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,2.090019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,2.013326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,1.993346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,1.786593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,1.829476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,1.821676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,2.050768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,1.944231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,2.033323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,2.127269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,1.851401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,2.128004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,1.935204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,2.002892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,2.042311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,1.861087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,2.042934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,2.033288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,1.882126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.820733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,1.881701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.756803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.768082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,1.902958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,1.953546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,1.924535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,1.717769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,1.922033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,1.695251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,1.775068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,1.944306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.830487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,1.871718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.922761);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.809933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,1.964191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.808687);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.840112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.818162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.903811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,1.828305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.825031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,1.993246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.884128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.850189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.752237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,1.77426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.673344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.915707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,1.883096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,1.635783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.829421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,1.661222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.718596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.752659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,1.77446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,1.741287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.829576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.683166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.891529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,1.674036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.942861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,1.694044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.589188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.796568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.741788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.696468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.614217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.839585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.788209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.589416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.787386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,1.484867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.671675);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.893093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.741042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.613329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.601647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.718488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.625548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.693871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.785122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.636522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.806401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.682804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.717607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.695622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.666172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.610845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.683655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.536877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.484017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.557093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.672045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.706875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.623387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.573984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.431646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.600466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.563453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.445875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.573323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.601226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.52325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.471322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.717655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.718598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.603068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.375226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.445894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.589422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.513311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.446469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.539254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.785522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.404615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.536558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.444162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.511921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.536977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.498144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.38828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.575981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.257624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.374173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.303052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.511085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.561593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.458377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.37681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.512477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.36077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.509433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.301279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.403782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.374477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.511521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.255676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.347753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.457511);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.389487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.538114);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.402107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.660117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,1.472219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.432217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.25805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.44474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.485466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.510251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.28595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.239614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.483918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.375698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.348494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.444098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.485189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.123783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.498166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.36148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.430614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.443965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.458035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.270051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.302186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,1.331517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.361317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.359903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.125037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.257873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,21.65265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(1640526);

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
   
   TH1D *VH_DHZfirst_H_mass__101 = new TH1D("VH_DHZfirst_H_mass__101","",1000,0,2000);
   VH_DHZfirst_H_mass__101->SetBinContent(43,1439);
   VH_DHZfirst_H_mass__101->SetBinContent(44,2879);
   VH_DHZfirst_H_mass__101->SetBinContent(45,2760);
   VH_DHZfirst_H_mass__101->SetBinContent(46,2795);
   VH_DHZfirst_H_mass__101->SetBinContent(47,2743);
   VH_DHZfirst_H_mass__101->SetBinContent(48,1363);
   VH_DHZfirst_H_mass__101->SetBinContent(78,858);
   VH_DHZfirst_H_mass__101->SetBinContent(79,1738);
   VH_DHZfirst_H_mass__101->SetBinContent(80,1750);
   VH_DHZfirst_H_mass__101->SetBinContent(81,1743);
   VH_DHZfirst_H_mass__101->SetBinContent(82,1705);
   VH_DHZfirst_H_mass__101->SetBinContent(83,858);
   VH_DHZfirst_H_mass__101->SetBinContent(1000,2);
   VH_DHZfirst_H_mass__101->SetBinContent(1001,2551);
   VH_DHZfirst_H_mass__101->SetEntries(376573);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__101->SetLineColor(ci);
   VH_DHZfirst_H_mass__101->SetLineWidth(2);
   VH_DHZfirst_H_mass__101->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__101->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__101->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__101->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__101->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__101->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__101->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__101->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__101->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__101->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__101->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__101->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1101[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1101[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 1265.414, 2532.264, 2488.028, 2495.19, 2492.519, 1230.686, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853.8177, 1713.128, 1690.817, 1704.751,
   1654.233, 827.1154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.724382 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1101[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1101[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.008835221, 0.524703, 1.471234, 2.851366, 4.436037, 6.171835, 8.048968,
   10.21847, 12.28903, 14.3346, 15.97586, 17.75959, 19.43395, 20.61295, 21.51033, 22.15627, 22.7019, 23.15726, 23.45033, 23.72714, 23.79711, 23.97231, 23.69597,
   23.94986, 24.02488, 24.19349, 24.01439, 24.25, 23.90457, 24.00427, 23.84462, 23.73037, 23.75517, 23.69052, 23.44147, 23.50604, 23.43369, 23.14708, 23.07122,
   23.20191, 22.9714, 22.73177, 22.66287, 22.66712, 22.58879, 22.32702, 22.19868, 22.10486, 21.94096, 21.82775, 21.73335, 21.6702, 21.63704, 21.53507, 21.34555,
   21.05372, 21.01332, 20.76848, 20.62525, 20.58125, 20.46186, 20.32273, 20.13878, 20.14008, 19.89651, 19.70738, 19.37418, 19.32052, 19.13983, 19.05021, 19.07316,
   18.80344, 18.70135, 18.52922, 18.50006, 18.26231, 18.11237, 18.12381, 17.7932, 17.78041, 17.56737, 17.58764, 17.60944, 17.35019, 17.16382, 17.05378, 16.87673,
   17.06362, 16.89751, 16.67278, 16.45482, 16.59965, 16.43089, 16.30902, 15.9608, 16.09004, 15.97872, 15.95354, 15.72928, 15.63909, 15.50957, 15.36653, 15.4075,
   15.38668, 15.40863, 15.19056, 15.01864, 15.20188, 14.85803, 14.7817, 14.7372, 14.73316, 14.63817, 14.5382, 14.44148, 14.34139, 14.28274, 14.26167, 14.3614,
   14.26451, 14.20005, 14.04795, 14.24645, 13.93432, 13.91407, 13.69815, 13.96797, 13.62287, 13.49595, 13.58506, 13.54922, 13.36919, 13.30165, 13.22929, 13.33061,
   13.19638, 13.27257, 13.17254, 13.1527, 12.97609, 12.92134, 12.78259, 12.89241, 12.77027, 12.8063, 12.7164, 12.81086, 12.53083, 12.73047, 12.66947, 12.50826,
   12.60408, 12.34233, 12.43555, 12.23627, 12.26209, 12.12698, 12.31015, 12.12336, 12.1217, 12.30072, 11.73042, 11.96471, 11.95207, 11.96127, 11.80807, 11.89318,
   11.83074, 11.62342, 11.64012, 11.5134, 11.70238, 11.72209, 11.61887, 11.47326, 11.51491, 11.48702, 11.31056, 11.37838, 11.15674, 11.07529, 11.31356, 11.27041,
   11.07568, 11.11681, 11.03067, 11.18313, 11.01583, 11.13963, 10.93183, 10.9169, 10.89985, 10.8654, 10.83885, 10.71546, 10.65214, 10.714, 10.52639, 10.64399,
   10.57247, 10.57639, 10.71932, 10.63322, 10.46558, 10.63601, 10.48392, 10.34494, 10.40112, 10.22522, 10.13475, 10.16492, 10.17424, 10.18112, 10.1998, 10.03505,
   10.13514, 10.20768, 10.0541, 10.03357, 9.914378, 10.01835, 9.831255, 9.929889, 9.918561, 9.898086, 9.832638, 9.872765, 9.606, 9.716973, 9.531742, 9.827452,
   9.581123, 9.565034, 9.725399, 9.665918, 9.651947, 9.647174, 9.446508, 9.339967, 9.342531, 9.374194, 9.366228, 9.396042, 9.432552, 9.331182, 9.244474, 9.313483,
   9.229701, 9.225952, 9.106117, 9.162315, 9.068338, 9.224596, 8.969396, 8.943062, 9.078809, 8.925015, 8.967882, 8.882078, 8.984465, 8.990185, 8.770089, 8.872648,
   8.779563, 8.890809, 8.650486, 8.802669, 8.840558, 8.559873, 8.517799, 8.74637, 8.466069, 8.53872, 8.497203, 8.636733, 8.557153, 8.510936, 8.554847, 8.58067,
   8.342599, 8.358737, 8.325866, 8.315248, 8.142397, 8.196405, 8.361579, 8.391097, 8.425586, 8.318142, 8.062482, 8.120341, 8.089683, 8.24168, 8.02059, 7.982816,
   8.109093, 7.956019, 7.783886, 8.185632, 7.986301, 7.815961, 7.875892, 7.854589, 7.671995, 7.789745, 7.881845, 7.792812, 7.722593, 7.710755, 7.698344, 7.807407,
   7.870706, 7.507794, 7.743387, 7.721091, 7.708902, 7.745883, 7.611213, 7.606089, 7.499876, 7.425366, 7.549794, 7.558332, 7.61966, 7.545666, 7.352448, 7.376398,
   7.347122, 7.30152, 7.423964, 7.232477, 7.183076, 7.336805, 7.24685, 7.136448, 7.193682, 7.231938, 7.202946, 7.138044, 7.135185, 7.15763, 7.156202, 7.07415,
   7.094332, 6.998547, 6.892502, 6.981712, 6.952215, 7.038805, 6.974905, 6.848854, 6.913909, 6.905838, 6.894185, 6.802296, 6.762084, 6.729553, 6.752259, 6.829722,
   6.649959, 6.607355, 6.629836, 6.748776, 6.577819, 6.621111, 6.680588, 6.631657, 6.615223, 6.652432, 6.536982, 6.655513, 6.389286, 6.422374, 6.60544, 6.482386,
   6.553191, 6.258455, 6.481703, 6.291314, 6.211737, 6.371634, 6.379949, 6.470526, 6.134639, 6.280448, 6.214231, 6.31746, 6.231543, 6.170677, 6.164052, 6.224479,
   6.053956, 6.148096, 6.220173, 6.102289, 6.174121, 5.976318, 6.054806, 5.863964, 6.011639, 5.911986, 6.10712, 5.952106, 6.071392, 5.915742, 5.823967, 5.931555,
   5.730944, 5.849689, 5.6378, 5.707124, 5.700083, 5.661817, 5.624713, 5.727472, 5.719891, 5.670004, 5.645475, 5.902124, 5.767041, 5.466025, 5.69088, 5.690355,
   5.528781, 5.704888, 5.57338, 5.604343, 5.552757, 5.637291, 5.540894, 5.414493, 5.586017, 5.630904, 5.334875, 5.410213, 5.387117, 5.660282, 5.440444, 5.619117,
   5.331715, 5.443026, 5.312021, 5.352965, 5.337171, 5.354872, 5.200919, 5.427895, 5.181326, 5.111413, 5.17656, 5.343329, 5.25018, 5.079705, 5.151565, 5.175409,
   5.120749, 5.23807, 5.212377, 5.158825, 4.961356, 5.136197, 5.16313, 5.132318, 4.966603, 4.964214, 5.0486, 5.012735, 4.965842, 4.900465, 5.066858, 4.896231,
   4.748014, 4.946044, 4.840477, 4.933502, 4.971446, 4.821597, 4.979161, 4.751944, 4.872666, 4.814276, 4.748037, 4.916907, 4.662563, 4.783587, 4.900892, 4.77262,
   4.500513, 4.68773, 4.752742, 4.566812, 4.454616, 4.788243, 4.58482, 4.670031, 4.600382, 4.765529, 4.472109, 4.529722, 4.475526, 4.340179, 4.614443, 4.662507,
   4.597704, 4.496939, 4.530204, 4.370698, 4.370013, 4.325936, 4.650258, 4.397759, 4.469839, 4.499036, 4.60365, 4.262431, 4.33449, 4.49315, 4.472905, 4.577102,
   4.353219, 4.23817, 4.327219, 4.349658, 4.355396, 4.200179, 4.208155, 4.350279, 4.270137, 4.473089, 4.158968, 3.990665, 4.28203, 4.138629, 4.181207, 4.433291,
   4.094783, 4.14695, 4.133678, 4.21978, 4.25643, 4.071538, 4.220156, 4.050331, 3.998007, 4.058463, 4.139131, 4.099906, 4.090965, 4.152238, 3.953154, 4.168409,
   4.081989, 3.833183, 3.775445, 3.934906, 3.998361, 3.842155, 3.927747, 4.039576, 3.893831, 3.935241, 3.897348, 3.950393, 3.81643, 3.97951, 3.838113, 3.648486,
   3.927337, 3.847463, 3.790002, 3.904117, 3.858447, 3.74421, 3.767662, 3.923788, 3.792034, 3.798288, 3.738863, 3.587861, 3.693877, 3.63155, 3.603971, 3.592786,
   3.691686, 3.497404, 3.632858, 3.726391, 3.764035, 3.755246, 3.56619, 3.629728, 3.363418, 3.572522, 3.505516, 3.398322, 3.521179, 3.50899, 3.45906, 3.514383,
   3.607951, 3.44801, 3.484006, 3.642829, 3.168992, 3.64621, 3.425646, 3.522236, 3.561456, 3.509545, 3.320201, 3.379311, 3.396066, 3.401928, 3.361258, 3.508569,
   3.493719, 3.465022, 3.498201, 3.453669, 3.374702, 3.384694, 3.173983, 3.378549, 3.403209, 3.349409, 3.396459, 3.326479, 3.105835, 3.158964, 3.174988, 3.205849,
   3.289846, 3.343694, 3.30824, 3.222746, 3.145227, 3.278359, 3.268089, 3.378575, 3.193996, 3.117243, 2.995406, 3.094955, 3.18506, 3.171512, 3.173383, 3.211609,
   2.983413, 3.073572, 2.975988, 3.516, 3.217406, 3.006051, 3.13099, 3.060414, 3.085945, 2.975183, 3.066446, 3.06134, 3.11101, 2.903003, 3.079729, 2.846508,
   2.923924, 2.923708, 2.942132, 3.066985, 2.994935, 2.895332, 2.908831, 2.922126, 2.969234, 3.015442, 3.135161, 3.027939, 2.772375, 2.879625, 3.000708, 2.846738,
   2.889215, 2.847634, 2.881891, 2.855347, 2.907621, 2.742193, 2.848326, 2.928419, 2.956766, 2.73459, 2.839554, 2.800955, 2.833714, 2.934922, 2.894647, 2.893331,
   2.594941, 2.762362, 2.725275, 2.602927, 2.797792, 2.563721, 2.76387, 2.682999, 2.855262, 2.847002, 2.697341, 2.608829, 2.819814, 2.604943, 2.623812, 2.533752,
   2.653785, 2.783438, 2.646452, 2.624461, 2.691153, 2.737291, 2.531647, 2.705239, 2.616937, 2.500763, 2.638737, 2.616941, 2.36591, 2.421242, 2.735226, 2.548823,
   2.585838, 2.585615, 2.422104, 2.501913, 2.578331, 2.589929, 2.547175, 2.533316, 2.500636, 2.476692, 2.267273, 2.312634, 2.628169, 2.477255, 2.493659, 2.339306,
   2.394242, 2.594412, 2.503056, 2.396802, 2.454486, 2.364007, 2.389496, 2.279889, 2.540652, 2.288794, 2.486493, 2.525765, 2.218895, 2.365575, 2.303757, 2.263014,
   2.478435, 2.329394, 2.295559, 2.223032, 2.326608, 2.236262, 2.217659, 2.192442, 2.196527, 2.332199, 2.110129, 2.345837, 2.18709, 2.393614, 2.164892, 2.297835,
   2.321588, 2.422554, 2.166218, 2.304306, 2.295086, 2.31467, 2.289053, 2.304132, 2.196673, 2.101349, 2.288096, 2.298389, 2.252882, 2.278138, 2.090423, 1.953527,
   2.277861, 1.964156, 2.117908, 2.099796, 2.18139, 2.237013, 2.287537, 1.994757, 2.297005, 2.218082, 2.146106, 2.081561, 1.985176, 2.08014, 2.023547, 2.109195,
   2.118101, 2.136564, 1.94379, 2.226891, 2.127935, 2.070304, 2.098123, 1.944394, 2.060366, 2.200639, 2.081344, 1.871558, 2.153468, 2.090019, 2.013326, 1.993346,
   1.786593, 1.829476, 1.821676, 2.050768, 1.944231, 2.033323, 2.127269, 1.851401, 2.128004, 1.935204, 2.002892, 2.042311, 1.861087, 2.042934, 2.033288, 1.882126,
   1.820733, 1.881701, 1.756803, 1.768082, 1.902958, 1.953546, 1.924535, 1.717769, 1.922033, 1.695251, 1.775068, 1.944306, 1.830487, 1.871718, 1.922761, 1.809933,
   1.964191, 1.808687, 1.840112, 1.818162, 1.903811, 1.828305, 1.825031, 1.993246, 1.884128, 1.850189, 1.752237, 1.77426, 1.673344, 1.915707, 1.883096, 1.635783,
   1.829421, 1.661222, 1.718596, 1.752659, 1.77446, 1.741287, 1.829576, 1.683166, 1.891529, 1.674036, 1.942861, 1.694044, 1.589188, 1.796568, 1.741788, 1.696468,
   1.614217, 1.839585, 1.788209, 1.589416, 1.787386, 1.484867, 1.671675, 1.893093, 1.741042, 1.613329, 1.601647, 1.718488, 1.625548, 1.693871, 1.785122, 1.636522,
   1.806401, 1.682804, 1.717607, 1.695622, 1.666172, 1.610845, 1.683655, 1.536877, 1.484017, 1.557093, 1.672045, 1.706875, 1.623387, 1.573984, 1.431646, 1.600466,
   1.563453, 1.445875, 1.573323, 1.601226, 1.52325, 1.471322, 1.717655, 1.718598, 1.603068, 1.375226, 1.445894, 1.589422, 1.513311, 1.446469, 1.539254, 1.785522,
   1.404615, 1.536558, 1.444162, 1.511921, 1.536977, 1.498144, 1.38828, 1.575981, 1.257624, 1.374173, 1.303052, 1.511085, 1.561593, 1.458377, 1.37681, 1.512477,
   1.36077, 1.509433, 1.301279, 1.403782, 1.374477, 1.511521, 1.255676, 1.347753, 1.457511, 1.389487, 1.538114, 1.402107, 1.660117, 1.472219, 1.432217, 1.25805,
   1.44474, 1.485466, 1.510251, 1.28595, 1.239614, 1.483918, 1.375698, 1.348494, 1.444098, 1.485189, 1.123783, 1.498166, 1.36148, 1.430614, 1.443965, 1.458035,
   1.270051, 1.302186, 1.331517, 1.361317, 1.359903, 1.125037, 1.257873 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1101,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1101,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1101,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1101);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->SetMinimum(-282.2705);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->SetMaximum(2813.975);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1101);
   
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
   
   TH1D *data_mc_ratio__102 = new TH1D("data_mc_ratio__102","",1000,0,2000);
   data_mc_ratio__102->SetBinContent(43,1.137177);
   data_mc_ratio__102->SetBinContent(44,1.136927);
   data_mc_ratio__102->SetBinContent(45,1.109312);
   data_mc_ratio__102->SetBinContent(46,1.120155);
   data_mc_ratio__102->SetBinContent(47,1.100493);
   data_mc_ratio__102->SetBinContent(48,1.107512);
   data_mc_ratio__102->SetBinContent(78,1.004898);
   data_mc_ratio__102->SetBinContent(79,1.014519);
   data_mc_ratio__102->SetBinContent(80,1.035003);
   data_mc_ratio__102->SetBinContent(81,1.022437);
   data_mc_ratio__102->SetBinContent(82,1.030689);
   data_mc_ratio__102->SetBinContent(83,1.03734);
   data_mc_ratio__102->SetBinContent(1000,0.5370018);
   data_mc_ratio__102->SetBinContent(1001,1.16378);
   data_mc_ratio__102->SetBinError(43,0.02997765);
   data_mc_ratio__102->SetBinError(44,0.02118907);
   data_mc_ratio__102->SetBinError(45,0.0211154);
   data_mc_ratio__102->SetBinError(46,0.02118787);
   data_mc_ratio__102->SetBinError(47,0.02101234);
   data_mc_ratio__102->SetBinError(48,0.02999857);
   data_mc_ratio__102->SetBinError(78,0.03430666);
   data_mc_ratio__102->SetBinError(79,0.02433521);
   data_mc_ratio__102->SetBinError(80,0.02474129);
   data_mc_ratio__102->SetBinError(81,0.02448994);
   data_mc_ratio__102->SetBinError(82,0.0249612);
   data_mc_ratio__102->SetBinError(83,0.03541421);
   data_mc_ratio__102->SetBinError(1000,0.3797176);
   data_mc_ratio__102->SetBinError(1001,0.0257503);
   data_mc_ratio__102->SetMinimum(0.4);
   data_mc_ratio__102->SetMaximum(1.6);
   data_mc_ratio__102->SetEntries(951.8874);
   data_mc_ratio__102->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__102->SetLineColor(ci);
   data_mc_ratio__102->SetLineWidth(2);
   data_mc_ratio__102->SetMarkerStyle(20);
   data_mc_ratio__102->SetMarkerSize(1.2);
   data_mc_ratio__102->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__102->GetXaxis()->SetRange(1,150);
   data_mc_ratio__102->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__102->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__102->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__102->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__102->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__102->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__102->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__102->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__102->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__102->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__102->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__102->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__102->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__102->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1102[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1102[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1102[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1102[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01877264, 0.009355471, 0.009421706, 0.009420544, 0.009401609, 0.01880827, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02262839, 0.01117245, 0.01126686, 0.01118824,
   0.01136686, 0.02261033, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3377401 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1102,Graph_from_mc_statistical_error_fy1102,Graph_from_mc_statistical_error_fex1102,Graph_from_mc_statistical_error_fey1102);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1102 = new TH1F("Graph_Graph_from_mc_statistical_error1102","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1102->SetMinimum(0.5947119);
   Graph_Graph_from_mc_statistical_error1102->SetMaximum(1.405288);
   Graph_Graph_from_mc_statistical_error1102->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1102->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1102->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1102);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_VR_16->cd();
   H_mass_DHZfirst_VR_16->Modified();
   H_mass_DHZfirst_VR_16->cd();
   H_mass_DHZfirst_VR_16->SetSelected(H_mass_DHZfirst_VR_16);
}
