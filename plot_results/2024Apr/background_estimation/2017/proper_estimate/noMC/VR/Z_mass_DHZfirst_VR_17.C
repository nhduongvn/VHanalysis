#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_17()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_17/Z_mass_DHZfirst_VR_17
//=========  (Mon Apr  8 13:43:40 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_VR_17 = new TCanvas("Z_mass_DHZfirst_VR_17", "Z_mass_DHZfirst_VR_17",0,0,600,600);
   Z_mass_DHZfirst_VR_17->SetHighLightColor(2);
   Z_mass_DHZfirst_VR_17->Range(0,0,1,1);
   Z_mass_DHZfirst_VR_17->SetFillColor(0);
   Z_mass_DHZfirst_VR_17->SetFillStyle(4000);
   Z_mass_DHZfirst_VR_17->SetBorderMode(0);
   Z_mass_DHZfirst_VR_17->SetBorderSize(2);
   Z_mass_DHZfirst_VR_17->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.07873,315.7258,2086.651);
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
   st->SetMaximum(1877.778);
   
   TH1F *st_stack_83 = new TH1F("st_stack_83","",1000,0,2000);
   st_stack_83->SetMinimum(0.01);
   st_stack_83->SetMaximum(1877.778);
   st_stack_83->SetDirectory(nullptr);
   st_stack_83->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_83->SetLineColor(ci);
   st_stack_83->SetLineWidth(0);
   st_stack_83->GetXaxis()->SetRange(1,150);
   st_stack_83->GetXaxis()->SetLabelFont(42);
   st_stack_83->GetXaxis()->SetTitleOffset(1);
   st_stack_83->GetXaxis()->SetTitleFont(42);
   st_stack_83->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_83->GetYaxis()->SetLabelFont(42);
   st_stack_83->GetYaxis()->SetLabelSize(0.05);
   st_stack_83->GetYaxis()->SetTitleSize(0.057);
   st_stack_83->GetYaxis()->SetTitleOffset(1.2);
   st_stack_83->GetYaxis()->SetTitleFont(42);
   st_stack_83->GetZaxis()->SetLabelFont(42);
   st_stack_83->GetZaxis()->SetTitleOffset(1);
   st_stack_83->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_83);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,377.8034);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,454.8491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,546.0326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,619.5394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,699.2364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,693.7033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,697.6251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,687.7965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,688.6821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,686.0797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,3.72097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,2226.868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(6,0.02489811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(10,0.005481362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(12,0.006957837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.006741448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,0.288769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,0.206167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,0.7921308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,1.310179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,1.917519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,3.328428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,3.628998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,4.548741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,5.641464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,6.697857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,7.811399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,8.961739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,9.848583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,10.80205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,11.4951);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,12.22143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,12.75701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,13.35694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,13.77153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,14.31629);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,14.11401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,14.52501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,14.66243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,14.64946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,14.47393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,14.67386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,14.60998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,14.88759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,14.65517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,14.79474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,14.62153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,14.75555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,14.22706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,14.42315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,14.29142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,14.25984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,14.39411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,13.87594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,13.95628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,13.65992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,13.70437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,13.73901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,13.6931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,13.59278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,13.38656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,13.3079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,13.37158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,13.22882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,13.07616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,13.20503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,13.06877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,12.83321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,12.87653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,12.91279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,12.74283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,12.7349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,12.71115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,12.56278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,12.40517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,12.62222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,12.41375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,12.31978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,12.38952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,12.04152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,12.05834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,12.42852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,11.97469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,11.88906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,11.78285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,11.71989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,11.6314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,11.71268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,11.51454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,11.73182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,11.44857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,11.31349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,11.13152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,10.92378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,10.94529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,11.14567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,10.86051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,10.91849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,10.84155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,10.57763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,10.71614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,10.59709);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,10.41104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,10.24537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,10.32246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,10.18436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,9.973328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,10.00849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,10.10647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,9.838976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,9.888423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,9.694264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,9.620859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,9.385131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,9.698078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,9.552806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,9.366498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,9.36673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,9.306617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,9.141477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,9.090518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,9.080066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,9.185826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,8.940471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,9.053067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,8.810237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,8.820158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,8.79207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,8.646234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,8.773397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,8.57885);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,8.502852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,8.5196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,8.6256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,8.478025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,8.305236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,8.308948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,8.192085);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,8.147983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,8.259983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,8.175302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,8.112628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,7.944689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,8.208326);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,8.176876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,7.900793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,7.852502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,7.668913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,7.881454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,7.778577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,7.858067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,7.621353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,7.620115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,7.727233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,7.529283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,7.543131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,7.300935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,7.549576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,7.270371);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,7.36485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,7.226837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,7.239268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,7.331612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,7.234284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,7.03631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,7.10076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,7.090604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,6.991677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,7.005082);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,6.979277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,6.883308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,6.782068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,6.808999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,6.764316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,6.815499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,6.865515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,6.943565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,6.854703);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,6.771636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,6.695321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,6.774617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,6.459902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,6.712079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,6.568679);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,6.519729);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,6.515083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,6.534831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,6.6628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,6.384858);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,6.27188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,6.33816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,6.346976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,6.443816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,6.212027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,6.255007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,5.950156);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,6.425644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,6.299549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,6.38069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,6.038441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,6.269765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,5.989636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,6.233745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,6.242669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,5.975014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,6.051349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,5.862596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,6.012408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,6.001006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,5.800453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,5.732897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,5.973013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,5.823665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,5.861042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,5.720252);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,5.655217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,5.664684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,5.767396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,5.813632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,5.73335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,5.490661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,5.570889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,5.541714);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,5.7481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,5.757746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,5.570495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,5.572829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,5.775738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,5.463327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,5.474614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,5.539223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,5.436814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,5.483384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,5.184749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,5.357309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,5.62871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,5.309733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,5.307979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,5.286792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,5.123003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,5.120377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,5.274551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,5.300279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,5.211633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,5.219847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,5.223508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,5.211676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,5.228529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,5.172308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,5.130267);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,4.993539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,4.913267);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,5.096283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,5.047021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,4.810994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,4.929299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,4.999563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,5.163407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,5.051404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,4.942319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,5.101472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,4.779512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,4.917529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,4.883723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,5.038099);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,4.980785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,4.720781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,4.807766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,4.875115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,4.967673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,4.768587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,4.871876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,4.738067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,4.572035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,4.780312);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,4.818235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,4.697012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,4.807218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,4.667652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,4.730806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,4.886836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,4.719289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,4.769656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,4.757485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,4.582883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,4.708782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,4.674608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,4.59263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,4.489658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,4.505811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,4.624387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,4.705519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,4.584474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,4.711555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,4.464399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,4.480938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,4.566674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,4.500287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,4.41388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,4.581869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,4.440396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,4.329179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,4.50058);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,4.555778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,4.393038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,4.58017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,4.465677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,4.357468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,4.407101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,4.493065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,4.469975);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,4.380959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,4.358066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,4.354615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,4.54746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,4.234376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,4.444009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,4.568697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,4.255813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,4.31033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,4.250717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,4.38184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,4.304239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,4.421665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,4.164632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,4.19081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,4.292203);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,4.479919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,4.368454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,4.091989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,4.339254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,4.308589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,4.181489);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,4.34391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,4.370403);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,4.373775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,4.289754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,4.288512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,4.317795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,4.130164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,4.297356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,4.290112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,4.095849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,4.276339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,4.130448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,4.243909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,4.25959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,4.191519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,4.227344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,4.302089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,4.211138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,4.236511);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,4.208978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,4.191646);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,4.138464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,4.217538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,4.189876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,4.214166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,4.180618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,4.060584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,3.968257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,3.943904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,4.146279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,4.071141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,3.99959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,4.201762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,4.239161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,4.094477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,4.02574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,3.951628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,4.147661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,3.986191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,3.850764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,4.16194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,4.03838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,4.005185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,4.128218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,4.078079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,3.992796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,4.051172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,4.119656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,3.898353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,4.100514);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,4.058531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,4.002608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,3.851902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,3.821661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,3.939678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,3.935274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,3.902955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,3.885666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,4.03881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,3.889565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,3.90815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,3.934919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,3.848348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,3.91977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,3.705782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,3.822979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,3.814103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,3.96853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,4.100925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,3.865584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,3.899038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,3.727944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,3.826873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,3.826293);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,3.925954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,3.927028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,3.956253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,3.744002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,3.84336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,3.792846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,3.736439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,3.937444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,3.739281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,3.849205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,3.836656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,3.838011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,3.871918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,3.933651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,3.787575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,3.708758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,3.691001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,3.716982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,3.840981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,3.952711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,3.785354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,3.734909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,3.738226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,3.785217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,3.792833);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,3.871301);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,4.002591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,3.579097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,3.816052);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,3.849274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,3.718045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,3.909715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,3.855565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,3.556378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,3.550277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,3.549407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,3.713354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,3.677043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,3.551338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,3.537784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,3.64435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,3.700683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,3.594468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,3.570381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,3.691937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,3.604204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,3.628406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,3.805722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,3.62877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,3.567604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,3.6522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,3.509801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,3.372545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,3.407819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,3.552908);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,3.568211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,3.483623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,3.352506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,3.534939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,3.563996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,3.604945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,3.59208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,3.526815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,3.463286);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,3.60829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,3.550638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,3.331785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,3.516471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,3.379407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,3.383049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,3.440834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,3.431812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,3.403397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,3.496972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,3.453725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,3.425772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,3.242852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,3.584387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,3.399557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,3.356647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,3.567691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,3.424404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,3.355919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,3.332268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,3.526077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,3.416207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,3.325118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,3.396954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,3.466089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,3.297516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,3.340855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,3.371198);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,3.281962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,3.389101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,3.409817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,3.237102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,3.257531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,3.414731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,3.226586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,3.228414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,3.41101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,3.205809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,3.150388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,3.497256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,3.237663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,3.320593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,3.362895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,3.373938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,3.166617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,3.389861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,3.185802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,3.29654);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,3.262828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,3.208669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,3.229279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,2.985248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,3.4221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,3.299412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,3.227428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,3.096051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,3.26785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,3.111194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,3.009559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,3.257331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,3.164234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,3.091488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,3.240219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,3.178158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,2.941337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,3.13406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,3.164868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,3.12777);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,2.97462);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,2.97906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,3.045279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,3.130877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,3.128743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,2.995645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,3.196576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,3.146449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,3.051533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,2.905233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,3.079828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,2.955159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,3.157539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,3.157222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,3.094645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,2.984069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,3.003869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,3.059562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,2.934461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,3.133892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,3.017558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,3.093782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,3.053038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,3.106233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,2.990196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,2.927688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,3.728255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,2.943091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,3.171501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,2.716206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,2.984981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,2.898554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,2.953745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,2.95303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,2.876537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,2.725648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,2.975781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,2.955658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,3.02125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,2.848355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,3.133194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,2.983496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,2.960278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,2.81483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,2.652278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,2.865606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,2.94664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,2.698788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,2.881673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,2.911847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,2.77746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,2.958054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,2.719879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,2.915915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,2.789615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,2.827379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,3.09207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,2.654907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,2.896178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,2.888404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,2.896303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,2.61231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,2.785613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,2.762272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,2.785861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,2.941707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,2.66211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,3.035814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,2.935573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,2.925896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,2.76288);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,2.753024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,2.739478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,2.681458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,2.835111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,2.718196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,2.927182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,2.726947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,2.668106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,2.843773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,2.878495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,2.789154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,2.821275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,2.82754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,2.879935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,2.722735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,2.678043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,2.684657);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,2.763221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,2.813756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,2.741521);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,2.649486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,2.842127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,2.801871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,2.662143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,2.83869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,2.586794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,2.66074);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,2.483604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,2.657729);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,2.532402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,2.7923);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,2.526016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,2.70315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,2.788698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,3.024081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,2.557968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,2.758148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,2.5517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,2.809056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,2.712968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,2.538976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,2.755173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,2.368444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,2.646112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,2.488076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,2.949194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,2.5605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,2.565041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,2.664271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,2.73033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,2.438797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,2.698762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,2.383355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,2.431022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,2.45954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,2.759701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,2.548213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,2.497595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,2.387175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,2.507053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,2.660142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,2.470804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,2.635991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,2.540161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,2.735038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,2.609525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,2.503278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,2.593425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,2.378146);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,2.518989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,2.486717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,2.473181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,2.42889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,2.641776);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,2.424007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,2.660122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,2.442887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,2.401052);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,2.588214);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,2.204783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,2.450457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,2.23436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,2.44449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,2.4313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,2.216471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,2.427845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,2.361482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,2.445687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,2.641088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,2.372429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,2.422367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,2.392883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,2.523377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,2.469632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,2.296965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,2.403421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,2.327482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,2.37266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,2.357231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,2.579919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,2.420653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,2.276798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,2.384684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,2.379336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,2.290553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,2.202358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,2.276141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,2.302858);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,2.245829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,2.28881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,2.438335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,2.369202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,2.447687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,2.271687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,2.365524);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,2.283375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,2.363271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,2.247348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,2.329113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,2.347467);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,2.322017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,2.311067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,2.317622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,2.374049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,2.344303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,2.44862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,2.378313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,2.26591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,2.103705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,2.209186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,2.136239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,2.304548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,2.226839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,2.234575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,2.395502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,2.202482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,2.092909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,2.198853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.254803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,2.015311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,2.32721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,2.320166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,2.175713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,2.090165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,2.200513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,2.142992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,2.173795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,2.11388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,2.229005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,1.987763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,2.306102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,2.371316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,2.33665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,2.37236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,2.288458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,2.045889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,2.28597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,2.110616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,2.199554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,2.233539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,2.030507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,2.051931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,2.101946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,2.141953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,2.182486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,2.140007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,1.886949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,2.09702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,2.263548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,2.134092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,2.011708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,1.90736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,2.291248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,1.847865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,2.218791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,2.029182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,2.059186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,1.975694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,1.878972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,2.048445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,2.040667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,2.073104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,2.026146);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,2.073398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,1.964426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,2.198543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,1.884847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,2.171614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,2.039193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,1.827772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,1.844792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,2.058768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,2.203672);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,1.915875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,1.836239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,2.002094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,2.026342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,1.754705);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,2.041113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,2.028728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,2.026351);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,1.965393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,2.029275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,1.92577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,2.205583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,2.145194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,1.934003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,1.902065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,1.900306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,1.881157);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,1.92502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,1.943425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,2.103907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,1.872122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,1.835626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,2.127973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,1.778663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,1.973662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.080556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,1.900998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,1.913367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,1.931977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,1.823811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,1.890139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,2.089582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,1.692759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.05044);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,2.006293);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,1.766813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,1.873396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,1.945677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,1.777652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,1.932365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,2.018884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,1.875824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,1.880078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,1.974984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,1.878474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,1.99728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,1.722436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,1.824802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,1.81442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,1.899408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,2.019818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,1.793997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,1.874712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,1.901339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,1.775344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,1.796205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,1.865661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,1.799879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,1.83377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,1.775952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,1.769186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,1.910201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,1.722116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,1.839466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,1.849038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,1.730276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,1.893853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,1.813611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,1.655713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,1.660645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,1.703956);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,1.76356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.016019);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,1.653779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,1.752818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,1.690324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,1.901263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,1.574327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,1.624938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,1.753899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,1.61515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,1.738444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,1.77584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,1.821403);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,1.472414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,1.680291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,1.820171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,1.899706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,1.515456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,1.627393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,1.653574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,1.728275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,1.79819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,1.887496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,1.811329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,1.651332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,1.647325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,1.760068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,1.589651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,1.463017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,1.490284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,1.867982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,1.561974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,1.831874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,1.526757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,1.978256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,1.624005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,1.641754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,1.505598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,1.565233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,1.659262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,1.587218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,1.535448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,1.714532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,1.665076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,1.712093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,1.809944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,1.559339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,1.624621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,1.36608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,1.536953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,1.562688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,1.658297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,1.666738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,1.534624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,1.577072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,1.634071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,1.611355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,1.472706);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,1.647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,1.678177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,1.653597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,1.715218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,1.532551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,1.725279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,1.629311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,1.625673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,1.576455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,1.497743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,1.54875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,1.692503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,1.300352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,1.463898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,1.451887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,1.598886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,1.546588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,1.575038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,1.649852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,1.639786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,1.548433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,1.664598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,1.665971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,1.599329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,1.598542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,1.509165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,1.343036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,1.562472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,1.527558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,1.535713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,1.481043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,1.64906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,1.785156);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,1.47125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,1.447171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,1.627331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,1.560381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,1.369825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,1.600564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,1.418855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,1.687212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,1.365295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,1.467314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,1.611365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,1.463991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,1.504777);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,1.404266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,1.494758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,1.181654);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,1.587442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,1.482578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,1.305026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,1.361874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,1.491387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,1.404553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,1.449525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,1.297466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,1.388797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,1.375137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,1.577959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,1.433581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.43559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,1.327696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,1.400554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,1.344166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,1.247346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,1.545618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,1.41795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,1.419434);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,1.311821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,22.9218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(493164.6);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Z_mass__165 = new TH1D("VH_DHZfirst_Z_mass__165","",1000,0,2000);
   VH_DHZfirst_Z_mass__165->SetBinContent(26,399);
   VH_DHZfirst_Z_mass__165->SetBinContent(27,457);
   VH_DHZfirst_Z_mass__165->SetBinContent(28,532);
   VH_DHZfirst_Z_mass__165->SetBinContent(29,597);
   VH_DHZfirst_Z_mass__165->SetBinContent(30,737);
   VH_DHZfirst_Z_mass__165->SetBinContent(61,845);
   VH_DHZfirst_Z_mass__165->SetBinContent(62,777);
   VH_DHZfirst_Z_mass__165->SetBinContent(63,789);
   VH_DHZfirst_Z_mass__165->SetBinContent(64,798);
   VH_DHZfirst_Z_mass__165->SetBinContent(65,818);
   VH_DHZfirst_Z_mass__165->SetBinContent(1000,3);
   VH_DHZfirst_Z_mass__165->SetBinContent(1001,2500);
   VH_DHZfirst_Z_mass__165->SetEntries(131532);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__165->SetLineColor(ci);
   VH_DHZfirst_Z_mass__165->SetLineWidth(2);
   VH_DHZfirst_Z_mass__165->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__165->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__165->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__165->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__165->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__165->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__165->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__165->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__165->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__165->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__165->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__165->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1165[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1165[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 377.8034, 454.8491, 546.0326, 619.5394, 699.2364, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693.7033, 697.6251, 687.7965, 688.6821, 686.0797,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.72097 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1165[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1165[1000] = { 0, 0, 0, 0, 0, 0.02489811, 0, 0, 0, 0.005481362, 0, 0.006957837, 0.006741448, 0, 0.288769, 0.206167, 0.7921308,
   1.310179, 1.917519, 3.328428, 3.628998, 4.548741, 5.641464, 6.697857, 7.811399, 8.961739, 9.848583, 10.80205, 11.4951, 12.22143, 12.75701, 13.35694, 13.77153,
   14.31629, 14.11401, 14.52501, 14.66243, 14.64946, 14.47393, 14.67386, 14.60998, 14.88759, 14.65517, 14.79474, 14.62153, 14.75555, 14.22706, 14.42315, 14.29142,
   14.25984, 14.39411, 13.87594, 13.95628, 13.65992, 13.70437, 13.73901, 13.6931, 13.59278, 13.38656, 13.3079, 13.37158, 13.22882, 13.07616, 13.20503, 13.06877,
   12.83321, 12.87653, 12.91279, 12.74283, 12.7349, 12.71115, 12.56278, 12.40517, 12.62222, 12.41375, 12.31978, 12.38952, 12.04152, 12.05834, 12.42852, 11.97469,
   11.88906, 11.78285, 11.71989, 11.6314, 11.71268, 11.51454, 11.73182, 11.44857, 11.31349, 11.13152, 10.92378, 10.94529, 11.14567, 10.86051, 10.91849, 10.84155,
   10.57763, 10.71614, 10.59709, 10.41104, 10.24537, 10.32246, 10.18436, 9.973328, 10.00849, 10.10647, 9.838976, 9.888423, 9.694264, 9.620859, 9.385131, 9.698078,
   9.552806, 9.366498, 9.36673, 9.306617, 9.141477, 9.090518, 9.080066, 9.185826, 8.940471, 9.053067, 8.810237, 8.820158, 8.79207, 8.646234, 8.773397, 8.57885,
   8.502852, 8.5196, 8.6256, 8.478025, 8.305236, 8.308948, 8.192085, 8.147983, 8.259983, 8.175302, 8.112628, 7.944689, 8.208326, 8.176876, 7.900793, 7.852502,
   7.668913, 7.881454, 7.778577, 7.858067, 7.621353, 7.620115, 7.727233, 7.529283, 7.543131, 7.300935, 7.549576, 7.270371, 7.36485, 7.226837, 7.239268, 7.331612,
   7.234284, 7.03631, 7.10076, 7.090604, 6.991677, 7.005082, 6.979277, 6.883308, 6.782068, 6.808999, 6.764316, 6.815499, 6.865515, 6.943565, 6.854703, 6.771636,
   6.695321, 6.774617, 6.459902, 6.712079, 6.568679, 6.519729, 6.515083, 6.534831, 6.6628, 6.384858, 6.27188, 6.33816, 6.346976, 6.443816, 6.212027, 6.255007,
   5.950156, 6.425644, 6.299549, 6.38069, 6.038441, 6.269765, 5.989636, 6.233745, 6.242669, 5.975014, 6.051349, 5.862596, 6.012408, 6.001006, 5.800453, 5.732897,
   5.973013, 5.823665, 5.861042, 5.720252, 5.655217, 5.664684, 5.767396, 5.813632, 5.73335, 5.490661, 5.570889, 5.541714, 5.7481, 5.757746, 5.570495, 5.572829,
   5.775738, 5.463327, 5.474614, 5.539223, 5.436814, 5.483384, 5.184749, 5.357309, 5.62871, 5.309733, 5.307979, 5.286792, 5.123003, 5.120377, 5.274551, 5.300279,
   5.211633, 5.219847, 5.223508, 5.211676, 5.228529, 5.172308, 5.130267, 4.993539, 4.913267, 5.096283, 5.047021, 4.810994, 4.929299, 4.999563, 5.163407, 5.051404,
   4.942319, 5.101472, 4.779512, 4.917529, 4.883723, 5.038099, 4.980785, 4.720781, 4.807766, 4.875115, 4.967673, 4.768587, 4.871876, 4.738067, 4.572035, 4.780312,
   4.818235, 4.697012, 4.807218, 4.667652, 4.730806, 4.886836, 4.719289, 4.769656, 4.757485, 4.582883, 4.708782, 4.674608, 4.59263, 4.489658, 4.505811, 4.624387,
   4.705519, 4.584474, 4.711555, 4.464399, 4.480938, 4.566674, 4.500287, 4.41388, 4.581869, 4.440396, 4.329179, 4.50058, 4.555778, 4.393038, 4.58017, 4.465677,
   4.357468, 4.407101, 4.493065, 4.469975, 4.380959, 4.358066, 4.354615, 4.54746, 4.234376, 4.444009, 4.568697, 4.255813, 4.31033, 4.250717, 4.38184, 4.304239,
   4.421665, 4.164632, 4.19081, 4.292203, 4.479919, 4.368454, 4.091989, 4.339254, 4.308589, 4.181489, 4.34391, 4.370403, 4.373775, 4.289754, 4.288512, 4.317795,
   4.130164, 4.297356, 4.290112, 4.095849, 4.276339, 4.130448, 4.243909, 4.25959, 4.191519, 4.227344, 4.302089, 4.211138, 4.236511, 4.208978, 4.191646, 4.138464,
   4.217538, 4.189876, 4.214166, 4.180618, 4.060584, 3.968257, 3.943904, 4.146279, 4.071141, 3.99959, 4.201762, 4.239161, 4.094477, 4.02574, 3.951628, 4.147661,
   3.986191, 3.850764, 4.16194, 4.03838, 4.005185, 4.128218, 4.078079, 3.992796, 4.051172, 4.119656, 3.898353, 4.100514, 4.058531, 4.002608, 3.851902, 3.821661,
   3.939678, 3.935274, 3.902955, 3.885666, 4.03881, 3.889565, 3.90815, 3.934919, 3.848348, 3.91977, 3.705782, 3.822979, 3.814103, 3.96853, 4.100925, 3.865584,
   3.899038, 3.727944, 3.826873, 3.826293, 3.925954, 3.927028, 3.956253, 3.744002, 3.84336, 3.792846, 3.736439, 3.937444, 3.739281, 3.849205, 3.836656, 3.838011,
   3.871918, 3.933651, 3.787575, 3.708758, 3.691001, 3.716982, 3.840981, 3.952711, 3.785354, 3.734909, 3.738226, 3.785217, 3.792833, 3.871301, 4.002591, 3.579097,
   3.816052, 3.849274, 3.718045, 3.909715, 3.855565, 3.556378, 3.550277, 3.549407, 3.713354, 3.677043, 3.551338, 3.537784, 3.64435, 3.700683, 3.594468, 3.570381,
   3.691937, 3.604204, 3.628406, 3.805722, 3.62877, 3.567604, 3.6522, 3.509801, 3.372545, 3.407819, 3.552908, 3.568211, 3.483623, 3.352506, 3.534939, 3.563996,
   3.604945, 3.59208, 3.526815, 3.463286, 3.60829, 3.550638, 3.331785, 3.516471, 3.379407, 3.383049, 3.440834, 3.431812, 3.403397, 3.496972, 3.453725, 3.425772,
   3.242852, 3.584387, 3.399557, 3.356647, 3.567691, 3.424404, 3.355919, 3.332268, 3.526077, 3.416207, 3.325118, 3.396954, 3.466089, 3.297516, 3.340855, 3.371198,
   3.281962, 3.389101, 3.409817, 3.237102, 3.257531, 3.414731, 3.226586, 3.228414, 3.41101, 3.205809, 3.150388, 3.497256, 3.237663, 3.320593, 3.362895, 3.373938,
   3.166617, 3.389861, 3.185802, 3.29654, 3.262828, 3.208669, 3.229279, 2.985248, 3.4221, 3.299412, 3.227428, 3.096051, 3.26785, 3.111194, 3.009559, 3.257331,
   3.164234, 3.091488, 3.240219, 3.178158, 2.941337, 3.13406, 3.164868, 3.12777, 2.97462, 2.97906, 3.045279, 3.130877, 3.128743, 2.995645, 3.196576, 3.146449,
   3.051533, 2.905233, 3.079828, 2.955159, 3.157539, 3.157222, 3.094645, 2.984069, 3.003869, 3.059562, 2.934461, 3.133892, 3.017558, 3.093782, 3.053038, 3.106233,
   2.990196, 2.927688, 3.728255, 2.943091, 3.171501, 2.716206, 2.984981, 2.898554, 2.953745, 2.95303, 2.876537, 2.725648, 2.975781, 2.955658, 3.02125, 2.848355,
   3.133194, 2.983496, 2.960278, 2.81483, 2.652278, 2.865606, 2.94664, 2.698788, 2.881673, 2.911847, 2.77746, 2.958054, 2.719879, 2.915915, 2.789615, 2.827379,
   3.09207, 2.654907, 2.896178, 2.888404, 2.896303, 2.61231, 2.785613, 2.762272, 2.785861, 2.941707, 2.66211, 3.035814, 2.935573, 2.925896, 2.76288, 2.753024,
   2.739478, 2.681458, 2.835111, 2.718196, 2.927182, 2.726947, 2.668106, 2.843773, 2.878495, 2.789154, 2.821275, 2.82754, 2.879935, 2.722735, 2.678043, 2.684657,
   2.763221, 2.813756, 2.741521, 2.649486, 2.842127, 2.801871, 2.662143, 2.83869, 2.586794, 2.66074, 2.483604, 2.657729, 2.532402, 2.7923, 2.526016, 2.70315,
   2.788698, 3.024081, 2.557968, 2.758148, 2.5517, 2.809056, 2.712968, 2.538976, 2.755173, 2.368444, 2.646112, 2.488076, 2.949194, 2.5605, 2.565041, 2.664271,
   2.73033, 2.438797, 2.698762, 2.383355, 2.431022, 2.45954, 2.759701, 2.548213, 2.497595, 2.387175, 2.507053, 2.660142, 2.470804, 2.635991, 2.540161, 2.735038,
   2.609525, 2.503278, 2.593425, 2.378146, 2.518989, 2.486717, 2.473181, 2.42889, 2.641776, 2.424007, 2.660122, 2.442887, 2.401052, 2.588214, 2.204783, 2.450457,
   2.23436, 2.44449, 2.4313, 2.216471, 2.427845, 2.361482, 2.445687, 2.641088, 2.372429, 2.422367, 2.392883, 2.523377, 2.469632, 2.296965, 2.403421, 2.327482,
   2.37266, 2.357231, 2.579919, 2.420653, 2.276798, 2.384684, 2.379336, 2.290553, 2.202358, 2.276141, 2.302858, 2.245829, 2.28881, 2.438335, 2.369202, 2.447687,
   2.271687, 2.365524, 2.283375, 2.363271, 2.247348, 2.329113, 2.347467, 2.322017, 2.311067, 2.317622, 2.374049, 2.344303, 2.44862, 2.378313, 2.26591, 2.103705,
   2.209186, 2.136239, 2.304548, 2.226839, 2.234575, 2.395502, 2.202482, 2.092909, 2.198853, 3.254803, 2.015311, 2.32721, 2.320166, 2.175713, 2.090165, 2.200513,
   2.142992, 2.173795, 2.11388, 2.229005, 1.987763, 2.306102, 2.371316, 2.33665, 2.37236, 2.288458, 2.045889, 2.28597, 2.110616, 2.199554, 2.233539, 2.030507,
   2.051931, 2.101946, 2.141953, 2.182486, 2.140007, 1.886949, 2.09702, 2.263548, 2.134092, 2.011708, 1.90736, 2.291248, 1.847865, 2.218791, 2.029182, 2.059186,
   1.975694, 1.878972, 2.048445, 2.040667, 2.073104, 2.026146, 2.073398, 1.964426, 2.198543, 1.884847, 2.171614, 2.039193, 1.827772, 1.844792, 2.058768, 2.203672,
   1.915875, 1.836239, 2.002094, 2.026342, 1.754705, 2.041113, 2.028728, 2.026351, 1.965393, 2.029275, 1.92577, 2.205583, 2.145194, 1.934003, 1.902065, 1.900306,
   1.881157, 1.92502, 1.943425, 2.103907, 1.872122, 1.835626, 2.127973, 1.778663, 1.973662, 2.080556, 1.900998, 1.913367, 1.931977, 1.823811, 1.890139, 2.089582,
   1.692759, 2.05044, 2.006293, 1.766813, 1.873396, 1.945677, 1.777652, 1.932365, 2.018884, 1.875824, 1.880078, 1.974984, 1.878474, 1.99728, 1.722436, 1.824802,
   1.81442, 1.899408, 2.019818, 1.793997, 1.874712, 1.901339, 1.775344, 1.796205, 1.865661, 1.799879, 1.83377, 1.775952, 1.769186, 1.910201, 1.722116, 1.839466,
   1.849038, 1.730276, 1.893853, 1.813611, 1.655713, 1.660645, 1.703956, 1.76356, 2.016019, 1.653779, 1.752818, 1.690324, 1.901263, 1.574327, 1.624938, 1.753899,
   1.61515, 1.738444, 1.77584, 1.821403, 1.472414, 1.680291, 1.820171, 1.899706, 1.515456, 1.627393, 1.653574, 1.728275, 1.79819, 1.887496, 1.811329, 1.651332,
   1.647325, 1.760068, 1.589651, 1.463017, 1.490284, 1.867982, 1.561974, 1.831874, 1.526757, 1.978256, 1.624005, 1.641754, 1.505598, 1.565233, 1.659262, 1.587218,
   1.535448, 1.714532, 1.665076, 1.712093, 1.809944, 1.559339, 1.624621, 1.36608, 1.536953, 1.562688, 1.658297, 1.666738, 1.534624, 1.577072, 1.634071, 1.611355,
   1.472706, 1.647, 1.678177, 1.653597, 1.715218, 1.532551, 1.725279, 1.629311, 1.625673, 1.576455, 1.497743, 1.54875, 1.692503, 1.300352, 1.463898, 1.451887,
   1.598886, 1.546588, 1.575038, 1.649852, 1.639786, 1.548433, 1.664598, 1.665971, 1.599329, 1.598542, 1.509165, 1.343036, 1.562472, 1.527558, 1.535713, 1.481043,
   1.64906, 1.785156, 1.47125, 1.447171, 1.627331, 1.560381, 1.369825, 1.600564, 1.418855, 1.687212, 1.365295, 1.467314, 1.611365, 1.463991, 1.504777, 1.404266,
   1.494758, 1.181654, 1.587442, 1.482578, 1.305026, 1.361874, 1.491387, 1.404553, 1.449525, 1.297466, 1.388797, 1.375137, 1.577959, 1.433581, 1.43559, 1.327696,
   1.400554, 1.344166, 1.247346, 1.545618, 1.41795, 1.419434, 1.311821 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1165,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1165,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1165,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1165);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->SetMinimum(-87.52213);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->SetMaximum(784.0923);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1165);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_DHZfirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__166 = new TH1D("data_mc_ratio__166","",1000,0,2000);
   data_mc_ratio__166->SetBinContent(26,1.056105);
   data_mc_ratio__166->SetBinContent(27,1.004729);
   data_mc_ratio__166->SetBinContent(28,0.9743007);
   data_mc_ratio__166->SetBinContent(29,0.963619);
   data_mc_ratio__166->SetBinContent(30,1.054007);
   data_mc_ratio__166->SetBinContent(61,1.2181);
   data_mc_ratio__166->SetBinContent(62,1.113779);
   data_mc_ratio__166->SetBinContent(63,1.147142);
   data_mc_ratio__166->SetBinContent(64,1.158735);
   data_mc_ratio__166->SetBinContent(65,1.192281);
   data_mc_ratio__166->SetBinContent(1000,0.8062413);
   data_mc_ratio__166->SetBinContent(1001,1.122653);
   data_mc_ratio__166->SetBinError(26,0.05287138);
   data_mc_ratio__166->SetBinError(27,0.04699924);
   data_mc_ratio__166->SetBinError(28,0.04224129);
   data_mc_ratio__166->SetBinError(29,0.0394383);
   data_mc_ratio__166->SetBinError(30,0.03882485);
   data_mc_ratio__166->SetBinError(61,0.04190391);
   data_mc_ratio__166->SetBinError(62,0.03995659);
   data_mc_ratio__166->SetBinError(63,0.04083932);
   data_mc_ratio__166->SetBinError(64,0.04101877);
   data_mc_ratio__166->SetBinError(65,0.04168714);
   data_mc_ratio__166->SetBinError(1000,0.4654836);
   data_mc_ratio__166->SetBinError(1001,0.02525226);
   data_mc_ratio__166->SetMinimum(0.4);
   data_mc_ratio__166->SetMaximum(1.6);
   data_mc_ratio__166->SetEntries(426.4836);
   data_mc_ratio__166->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__166->SetLineColor(ci);
   data_mc_ratio__166->SetLineWidth(2);
   data_mc_ratio__166->SetMarkerStyle(20);
   data_mc_ratio__166->SetMarkerSize(1.2);
   data_mc_ratio__166->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__166->GetXaxis()->SetRange(1,150);
   data_mc_ratio__166->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__166->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__166->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__166->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__166->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__166->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__166->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__166->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__166->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__166->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__166->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__166->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__166->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__166->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__166->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__166->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1166[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1166[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1166[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1166[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.02372065, 0.02165242, 0.0197828, 0.01855427, 0.01747826, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01927565, 0.01896265, 0.01901166, 0.01917436, 0.01904847,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.352548 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1166,Graph_from_mc_statistical_error_fy1166,Graph_from_mc_statistical_error_fex1166,Graph_from_mc_statistical_error_fey1166);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1166 = new TH1F("Graph_Graph_from_mc_statistical_error1166","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1166->SetMinimum(0.5769424);
   Graph_Graph_from_mc_statistical_error1166->SetMaximum(1.423058);
   Graph_Graph_from_mc_statistical_error1166->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1166->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1166->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1166->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1166->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1166->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1166->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1166->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1166->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1166->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1166->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1166);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_VR_17->cd();
   Z_mass_DHZfirst_VR_17->Modified();
   Z_mass_DHZfirst_VR_17->cd();
   Z_mass_DHZfirst_VR_17->SetSelected(Z_mass_DHZfirst_VR_17);
}
