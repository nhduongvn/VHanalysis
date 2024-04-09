#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_17/Z_mass_tagFirst_VR_17
//=========  (Mon Apr  8 13:43:43 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-26.87171,315.7258,26854.84);
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
   st->SetMaximum(24166.67);
   
   TH1F *st_stack_131 = new TH1F("st_stack_131","",1000,0,2000);
   st_stack_131->SetMinimum(0.01);
   st_stack_131->SetMaximum(24166.67);
   st_stack_131->SetDirectory(nullptr);
   st_stack_131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_131->SetLineColor(ci);
   st_stack_131->SetLineWidth(0);
   st_stack_131->GetXaxis()->SetRange(1,150);
   st_stack_131->GetXaxis()->SetLabelFont(42);
   st_stack_131->GetXaxis()->SetTitleOffset(1);
   st_stack_131->GetXaxis()->SetTitleFont(42);
   st_stack_131->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_131->GetYaxis()->SetLabelFont(42);
   st_stack_131->GetYaxis()->SetLabelSize(0.05);
   st_stack_131->GetYaxis()->SetTitleSize(0.057);
   st_stack_131->GetYaxis()->SetTitleOffset(1.2);
   st_stack_131->GetYaxis()->SetTitleFont(42);
   st_stack_131->GetZaxis()->SetLabelFont(42);
   st_stack_131->GetZaxis()->SetTitleOffset(1);
   st_stack_131->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_131);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,6507.773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,7156.547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,7855.458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,8438.736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,8896.289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,6280.145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,6243.678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,6200.291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,6167.614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,6131.8);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,44.09049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,23178.83);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(6,0.0517739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.03969854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.01034937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.03846015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,1.065288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.8391029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.882931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,6.356761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,10.00962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,14.62822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,19.62714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,25.30667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,30.1517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,35.83211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,41.25846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,45.98979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,50.4938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,54.69008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,58.54396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,61.40119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,64.59512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,66.65403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,68.96839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,70.0921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,71.07471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,72.03877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,72.18328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,72.63795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,72.82476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,73.26481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,73.46747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,72.7067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,72.82401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,73.02519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,73.35062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,72.59382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,72.57845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,72.02527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,71.86751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,70.94454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,70.66759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,69.16013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,68.58338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,68.31185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,67.13675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,66.59961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,65.26484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,65.09273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,64.93684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,64.14536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,63.50608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,63.15419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,62.58405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,61.87787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,62.39127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,61.41972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,61.28772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,61.15369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,60.87897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,60.45424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,59.9164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,59.75631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,59.41933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,58.96233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,58.61165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,58.69607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,58.56282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,57.94087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,57.61447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,57.21579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,57.06498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,56.52097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,56.91661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,56.24948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,55.81764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,55.78618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,54.95478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,54.71034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,54.51036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,55.20462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,54.23809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,53.59141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,53.64775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,52.71918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,52.52825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,52.2754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,52.39459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,51.84045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,51.71783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,51.16574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,50.95102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,50.43175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,50.29181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,49.65034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,49.4759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,49.72962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,48.44818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,48.63662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,48.12126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,48.27282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,48.26153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,47.52073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,47.15742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,47.27067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,46.78995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,46.33439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,45.92438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,45.97368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,45.5915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,45.20718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,44.43368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,44.49935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,44.15686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,44.52945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,43.77331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,44.0656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,43.57885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,42.81655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,43.37918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,42.66035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,42.55369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,42.39531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,41.93815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,41.66796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,41.62112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,41.53014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,40.81784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,41.11562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,41.02145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,40.40566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,40.32192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,40.28479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,40.20238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,40.20822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,39.93271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,39.43267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,39.50063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,38.84478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,38.69794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,38.52726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,38.56615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,38.46728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,38.35086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,38.1799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,38.23342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,37.66893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,37.47591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,37.40584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,37.5529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,36.92275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,37.01683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,36.12025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,36.6891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,36.0859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,36.70215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,35.98626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,36.15929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,36.39246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,35.90983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,35.66462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,35.76365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,35.33742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,35.2915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,35.14247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,34.53311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,34.78458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,34.877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,34.7556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,34.32476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,34.68731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,34.34175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,34.71848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,34.12354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,34.0452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,34.19867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,33.72892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,33.8901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,33.63102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,33.85254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,33.7575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,33.58281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,32.96294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,32.99981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,32.9458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,33.06866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,32.8115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,32.91528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,33.27581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,32.71641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,32.50585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,32.26535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,32.25107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,31.86383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,32.2549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,32.35072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,31.97999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,32.19115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,32.01506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,31.93746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,31.6974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,31.39309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,31.64659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,31.60395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,30.99441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,31.68828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,31.66083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,31.14928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,31.03498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,30.8854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,31.01451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,30.81145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,31.24502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,30.76362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,30.48209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,31.00686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,30.46294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,30.5283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,30.00297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,30.5561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,30.35736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,30.24407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,30.0349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,30.22031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,30.30961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,30.60289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,29.95549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,29.86891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,29.42436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,30.27277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,29.54645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,30.01513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,29.87734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,29.642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,29.83924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,29.17088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,28.64106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,29.57013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,29.35154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,29.24632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,29.47232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,29.00073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,29.24791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,29.10441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,29.51949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,29.02728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,28.84235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,28.82367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,28.62923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,29.09832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,28.28507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,28.05812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,28.49798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,28.34746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,28.45213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,28.52852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,28.73985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,28.36247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,27.93032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,28.3225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,28.51542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,28.93999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,28.08019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,27.77983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,28.04855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,28.30436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,28.08793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,28.34955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,27.59019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,27.84324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,27.34227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,27.55441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,28.03405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,27.49815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,27.11696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,27.51119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,27.81288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,27.35512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,27.77571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,27.33198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,27.40831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,26.96296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,27.59553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,27.00169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,27.12686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,27.29721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,27.07381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,26.82961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,27.13031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,26.95003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,26.91461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,26.63146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,26.52608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,26.5038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,26.66076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,26.71719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,26.45958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,26.7207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,26.48837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,26.10531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,26.08926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,26.516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,26.5675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,26.33866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,25.79778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,26.09936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,25.9447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,26.58236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,26.10964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,26.22941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,26.13007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,26.11389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,25.90856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,25.7645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,25.88644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,27.26624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,25.7331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,25.69159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,25.82777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,26.58351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,25.50962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,25.44212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,25.58797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,25.6676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,25.74266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,25.55939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,25.55001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,26.0346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,25.47644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,25.25532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,25.24945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,25.26959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,24.71763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,24.90777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,24.90839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,25.18935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,24.92045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,25.24561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,24.95611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,25.25367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,24.72847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,24.37067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,24.5181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,24.3572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,24.63931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,24.85);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,24.29773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,24.69025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,24.56164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,24.41925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,24.64669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,24.13389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,24.34921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,24.01279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,24.08784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,24.01476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,23.91658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,23.82747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,23.91609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,24.05219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,23.69049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,23.53422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,23.45734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,23.52392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,23.48267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,23.88422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,23.13071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,23.4583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,23.5318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,23.43148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,23.38684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,23.75782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,23.67207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,23.29079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,23.39885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,23.14652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,23.43816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,23.33098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,23.22248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,23.07775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,23.07241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,22.67189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,22.70561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,22.88376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,22.76737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,22.55534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,22.49644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,22.70812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,22.55656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,22.35683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,22.51272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,22.25391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,23.21511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,22.46515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,22.88295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,22.02692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,22.10193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,22.52914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,22.46454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,22.94847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,22.38173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,22.16044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,22.35612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,21.78743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,22.36732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,22.6033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,21.54227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,22.26648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,22.04242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,22.20248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,21.78028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,21.9169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,22.11134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,22.03658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,22.10409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,21.87651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,21.84164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,21.45077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,21.64517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,21.8621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,21.64413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,21.79099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,21.63571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,21.44323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,21.11876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,21.02586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,21.30915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,21.39045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,21.58219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,21.46843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,20.78758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,20.93004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,21.1783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,20.46926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,21.54645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,20.87673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,20.73657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,20.99615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,20.99811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,21.22481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,20.82078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,20.84187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,21.02631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,20.72087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,20.16816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,21.0286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,20.63418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,20.50698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,20.81566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,20.62909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,20.23603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,20.45042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,20.02929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,20.26705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,20.19337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,20.38915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,20.47821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,20.33012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,19.77586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,20.18573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,20.22983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,19.74469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,20.10988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,19.932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,19.68885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,19.94225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,19.44779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,20.05111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,19.9045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,19.79433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,19.76793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,19.63833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,19.54482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,19.41693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,19.6871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,19.07753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,19.72786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,19.38483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,19.662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,19.7393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,19.74706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,19.04111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,19.14468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,18.87444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,18.99365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,18.73648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,19.06208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,19.37048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,19.2306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,19.04176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,18.93176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,19.08998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,18.69998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,18.51992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,18.66263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,18.93872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,18.76669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,18.85994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,18.60291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,19.13797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,18.69578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,18.64694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,18.86337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,18.65319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,18.20601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,18.51061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,18.33868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,18.30101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,18.46344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,17.9803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,18.19945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,18.23942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,18.25135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,17.86901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,18.14062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,18.09326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,18.35465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,18.02175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,18.23541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,17.31434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,19.0553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,17.39969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,18.02933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,17.58203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,17.39558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,18.0197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,17.85995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,17.86248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,17.35092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,17.56205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,17.47779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,17.46633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,17.30617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,17.43268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,17.23391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,17.56562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,17.22232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,17.10815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,17.25846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,17.24843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,16.82626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,16.8458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,16.85525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,16.90937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,17.03827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,16.87242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,17.15215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,16.48339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,17.05962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,17.16103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,17.12138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,16.93273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,16.77103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,16.52341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,16.74216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,17.47636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,16.86234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,17.83224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,16.41053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,16.59505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,16.11345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,16.49639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,16.32677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,16.34195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,16.23437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,16.30387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,16.21655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,16.52841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,15.74148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,16.25842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,16.1059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,15.89919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,16.25477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,16.05272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,16.43789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,16.01075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,15.84319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,15.92679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,15.6234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,15.8056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,15.52839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,15.6022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,15.71314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,15.29869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,15.60752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,15.5336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,15.5642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,15.79602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,16.11073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,15.35845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,15.55381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,15.56049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,15.8827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,15.35273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,15.58552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,15.60571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,15.38187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,15.45809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,15.48401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,15.72955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,15.42767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,15.15947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,15.39379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,14.92897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,15.18945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,14.94091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,15.17286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,15.24273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,15.08818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,14.96529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,15.31478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,15.03667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,14.79789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,14.63529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,14.84638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,14.81691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,14.78127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,15.13206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,14.84652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,14.58428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,14.99538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,14.81505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,14.65061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,14.94034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,14.56414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,14.51582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,14.70462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,14.51048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,14.31523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,14.48395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,14.61674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,14.41515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,14.66174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,14.23016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,14.33713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,14.04274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,14.26589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,13.72325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,14.21981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,14.05519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,14.09399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,14.15508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,14.13438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,14.35452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,13.74998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,14.10798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,13.64027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,14.75996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,14.21624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,13.5745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,14.08146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,14.09874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,13.86273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,13.59317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,13.60655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,13.8654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,13.17611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,14.06595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,13.81835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,13.53821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,13.25187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,13.37613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,13.36838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,13.33999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,13.5789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,13.39686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,13.95525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,13.63618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,13.44399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,13.39665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,13.38268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,13.25437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,13.00159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,13.04296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,13.01753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,13.34764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,13.05035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,13.38025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,13.11067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,12.94427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,13.44038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,13.01854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,12.8441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,13.02018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,13.19728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,12.7038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,13.00635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,12.65238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,12.98348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,12.92403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,13.46779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,12.51727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,12.79279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,12.62958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,12.79952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,12.36875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,13.04188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,12.7539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,12.60046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,12.79291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,12.27208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,12.41602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,12.80181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,12.26685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,12.76172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,12.59035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,12.38852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,12.31074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,12.49464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,12.46966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,12.5077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,11.90333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,12.11548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,12.26982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,13.14779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,12.19462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,12.37055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,11.87745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,12.09495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,12.06815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,12.12177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,12.13734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,11.88962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,12.58679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,12.40314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,12.01566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,11.73006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,11.68039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,11.78988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,11.99254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,11.76272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,12.13172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,11.76064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,11.73854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,12.02425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,11.75421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,12.15743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,11.46816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,11.79852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,11.77519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,11.56522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,11.13606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,11.9829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,11.65382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,12.9402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,11.49362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,11.7347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,11.37556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,11.22252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,11.11422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,11.04306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,11.57613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,11.55759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,11.26751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,11.37629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,11.22835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,11.11281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,11.00559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,11.40133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,10.95818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,11.32478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,10.92639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,11.2655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,10.92488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,10.65701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,11.21524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,11.06302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,10.89417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,10.48493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,11.23746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,10.89058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,10.6072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,10.81176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,10.92594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,11.23798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,10.7028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,10.94899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,11.11711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,10.5925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,11.08912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,10.70066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,10.66777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,10.82259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,10.91721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,10.87194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,10.43775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,10.29966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,10.39789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,10.22035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,10.44377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,10.45748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,10.30283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,10.21224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,10.52802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,10.29464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,10.45843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,10.16296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,10.67011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,10.56081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,10.44264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,10.59407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,10.7547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,9.822502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,10.2047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,10.25038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,10.18954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,10.31457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,10.0471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,10.2004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,9.900407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,10.089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,10.09337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,10.76764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,10.08908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,10.16202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,9.534726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,10.15583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,9.845115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,9.576027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,9.830867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,10.37621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,9.922657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,9.790761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,9.524595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,9.87489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,10.05324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,9.899198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,9.377383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,10.02972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,10.14551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,9.43429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,9.505822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,9.52595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,9.354821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,9.467954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,9.570097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,9.547423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,9.438878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,9.652512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,9.662869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,9.598552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,9.674386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,9.766045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,9.760119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,9.198418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,9.680768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,9.412171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,9.275691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,9.236205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,9.324517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,8.920011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,9.190913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,9.144499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,9.296861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,9.045542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,9.272073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,9.136322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,9.438552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,9.060716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,9.1494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,9.193067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,9.3301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,9.5361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,9.08603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,9.166837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,8.676978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,8.843842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,9.070326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,8.695689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,9.447028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,9.219557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,9.241836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,9.203837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,9.092402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,8.920517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,8.830272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,8.760252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,8.554831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,8.692529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,8.36572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,8.835103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,8.457012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,8.711697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,8.507505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,8.929206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,8.577169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,8.341489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,8.792723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,8.601314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,8.155398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,8.18343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,8.504164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,8.473181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,8.44933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,7.924743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,8.37876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,8.529364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,8.477417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,8.824065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,8.561908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,8.561269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,8.360332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,8.277847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,7.976799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,8.280615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,7.930464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,8.133354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,8.232026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,8.362141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,8.351344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,8.378365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,8.210857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,8.291464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,8.502723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,7.788542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,8.869978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,8.115085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,8.290542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,8.549752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,8.120446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,7.895931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,8.176945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,8.157048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,7.711339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,8.133271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,8.048735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,7.840067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,7.97636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,7.969391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,7.856019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,8.046602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,7.653703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,7.846791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,8.285243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,8.287152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,7.608069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,7.426497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,7.889867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,7.621173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,7.921662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,7.953414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,8.088619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,7.67764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,7.641782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,7.680057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,8.05371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,7.915546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,7.586659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,7.483415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,7.954024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,7.53316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,7.742577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,7.542502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,7.693569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,7.534933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,7.829099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,7.644434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,7.676064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,7.25176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,7.458783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,7.415099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,7.165433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,7.871086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,7.152123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,7.287776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,7.326837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,7.406701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,7.644284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,7.595502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,7.752761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,7.126489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,7.583686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,7.266089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,7.36731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,7.196414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,7.145368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,7.245891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,7.212622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,7.398961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,7.40423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,7.032997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,6.874531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,7.256433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,7.226801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,7.191224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,6.75731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,7.394073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,7.314872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,6.819344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.937249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,7.448141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,6.694482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,7.101334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.987613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,115.0533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(2006865);

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
   
   TH1D *VH_tagFirst_Z_mass__261 = new TH1D("VH_tagFirst_Z_mass__261","",1000,0,2000);
   VH_tagFirst_Z_mass__261->SetBinContent(26,8754);
   VH_tagFirst_Z_mass__261->SetBinContent(27,9183);
   VH_tagFirst_Z_mass__261->SetBinContent(28,9852);
   VH_tagFirst_Z_mass__261->SetBinContent(29,10456);
   VH_tagFirst_Z_mass__261->SetBinContent(30,10875);
   VH_tagFirst_Z_mass__261->SetBinContent(61,7400);
   VH_tagFirst_Z_mass__261->SetBinContent(62,7225);
   VH_tagFirst_Z_mass__261->SetBinContent(63,7080);
   VH_tagFirst_Z_mass__261->SetBinContent(64,6974);
   VH_tagFirst_Z_mass__261->SetBinContent(65,7033);
   VH_tagFirst_Z_mass__261->SetBinContent(1000,29);
   VH_tagFirst_Z_mass__261->SetBinContent(1001,16867);
   VH_tagFirst_Z_mass__261->SetEntries(1413552);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__261->SetLineColor(ci);
   VH_tagFirst_Z_mass__261->SetLineWidth(2);
   VH_tagFirst_Z_mass__261->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__261->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__261->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__261->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__261->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__261->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__261->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__261->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__261->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__261->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__261->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__261->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1261[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1261[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 6507.773, 7156.547, 7855.458, 8438.736, 8896.289, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6280.145, 6243.678, 6200.291, 6167.614, 6131.8,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 44.09049 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1261[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1261[1000] = { 0, 0, 0, 0, 0, 0.0517739, 0.03969854, 0, 0.01034937, 0, 0.03846015, 1.065288, 0.8391029, 2.882931, 6.356761, 10.00962, 14.62822,
   19.62714, 25.30667, 30.1517, 35.83211, 41.25846, 45.98979, 50.4938, 54.69008, 58.54396, 61.40119, 64.59512, 66.65403, 68.96839, 70.0921, 71.07471, 72.03877,
   72.18328, 72.63795, 72.82476, 73.26481, 73.46747, 72.7067, 72.82401, 73.02519, 73.35062, 72.59382, 72.57845, 72.02527, 71.86751, 70.94454, 70.66759, 69.16013,
   68.58338, 68.31185, 67.13675, 66.59961, 65.26484, 65.09273, 64.93684, 64.14536, 63.50608, 63.15419, 62.58405, 61.87787, 62.39127, 61.41972, 61.28772, 61.15369,
   60.87897, 60.45424, 59.9164, 59.75631, 59.41933, 58.96233, 58.61165, 58.69607, 58.56282, 57.94087, 57.61447, 57.21579, 57.06498, 56.52097, 56.91661, 56.24948,
   55.81764, 55.78618, 54.95478, 54.71034, 54.51036, 55.20462, 54.23809, 53.59141, 53.64775, 52.71918, 52.52825, 52.2754, 52.39459, 51.84045, 51.71783, 51.16574,
   50.95102, 50.43175, 50.29181, 49.65034, 49.4759, 49.72962, 48.44818, 48.63662, 48.12126, 48.27282, 48.26153, 47.52073, 47.15742, 47.27067, 46.78995, 46.33439,
   45.92438, 45.97368, 45.5915, 45.20718, 44.43368, 44.49935, 44.15686, 44.52945, 43.77331, 44.0656, 43.57885, 42.81655, 43.37918, 42.66035, 42.55369, 42.39531,
   41.93815, 41.66796, 41.62112, 41.53014, 40.81784, 41.11562, 41.02145, 40.40566, 40.32192, 40.28479, 40.20238, 40.20822, 39.93271, 39.43267, 39.50063, 38.84478,
   38.69794, 38.52726, 38.56615, 38.46728, 38.35086, 38.1799, 38.23342, 37.66893, 37.47591, 37.40584, 37.5529, 36.92275, 37.01683, 36.12025, 36.6891, 36.0859,
   36.70215, 35.98626, 36.15929, 36.39246, 35.90983, 35.66462, 35.76365, 35.33742, 35.2915, 35.14247, 34.53311, 34.78458, 34.877, 34.7556, 34.32476, 34.68731,
   34.34175, 34.71848, 34.12354, 34.0452, 34.19867, 33.72892, 33.8901, 33.63102, 33.85254, 33.7575, 33.58281, 32.96294, 32.99981, 32.9458, 33.06866, 32.8115,
   32.91528, 33.27581, 32.71641, 32.50585, 32.26535, 32.25107, 31.86383, 32.2549, 32.35072, 31.97999, 32.19115, 32.01506, 31.93746, 31.6974, 31.39309, 31.64659,
   31.60395, 30.99441, 31.68828, 31.66083, 31.14928, 31.03498, 30.8854, 31.01451, 30.81145, 31.24502, 30.76362, 30.48209, 31.00686, 30.46294, 30.5283, 30.00297,
   30.5561, 30.35736, 30.24407, 30.0349, 30.22031, 30.30961, 30.60289, 29.95549, 29.86891, 29.42436, 30.27277, 29.54645, 30.01513, 29.87734, 29.642, 29.83924,
   29.17088, 28.64106, 29.57013, 29.35154, 29.24632, 29.47232, 29.00073, 29.24791, 29.10441, 29.51949, 29.02728, 28.84235, 28.82367, 28.62923, 29.09832, 28.28507,
   28.05812, 28.49798, 28.34746, 28.45213, 28.52852, 28.73985, 28.36247, 27.93032, 28.3225, 28.51542, 28.93999, 28.08019, 27.77983, 28.04855, 28.30436, 28.08793,
   28.34955, 27.59019, 27.84324, 27.34227, 27.55441, 28.03405, 27.49815, 27.11696, 27.51119, 27.81288, 27.35512, 27.77571, 27.33198, 27.40831, 26.96296, 27.59553,
   27.00169, 27.12686, 27.29721, 27.07381, 26.82961, 27.13031, 26.95003, 26.91461, 26.63146, 26.52608, 26.5038, 26.66076, 26.71719, 26.45958, 26.7207, 26.48837,
   26.10531, 26.08926, 26.516, 26.5675, 26.33866, 25.79778, 26.09936, 25.9447, 26.58236, 26.10964, 26.22941, 26.13007, 26.11389, 25.90856, 25.7645, 25.88644,
   27.26624, 25.7331, 25.69159, 25.82777, 26.58351, 25.50962, 25.44212, 25.58797, 25.6676, 25.74266, 25.55939, 25.55001, 26.0346, 25.47644, 25.25532, 25.24945,
   25.26959, 24.71763, 24.90777, 24.90839, 25.18935, 24.92045, 25.24561, 24.95611, 25.25367, 24.72847, 24.37067, 24.5181, 24.3572, 24.63931, 24.85, 24.29773,
   24.69025, 24.56164, 24.41925, 24.64669, 24.13389, 24.34921, 24.01279, 24.08784, 24.01476, 23.91658, 23.82747, 23.91609, 24.05219, 23.69049, 23.53422, 23.45734,
   23.52392, 23.48267, 23.88422, 23.13071, 23.4583, 23.5318, 23.43148, 23.38684, 23.75782, 23.67207, 23.29079, 23.39885, 23.14652, 23.43816, 23.33098, 23.22248,
   23.07775, 23.07241, 22.67189, 22.70561, 22.88376, 22.76737, 22.55534, 22.49644, 22.70812, 22.55656, 22.35683, 22.51272, 22.25391, 23.21511, 22.46515, 22.88295,
   22.02692, 22.10193, 22.52914, 22.46454, 22.94847, 22.38173, 22.16044, 22.35612, 21.78743, 22.36732, 22.6033, 21.54227, 22.26648, 22.04242, 22.20248, 21.78028,
   21.9169, 22.11134, 22.03658, 22.10409, 21.87651, 21.84164, 21.45077, 21.64517, 21.8621, 21.64413, 21.79099, 21.63571, 21.44323, 21.11876, 21.02586, 21.30915,
   21.39045, 21.58219, 21.46843, 20.78758, 20.93004, 21.1783, 20.46926, 21.54645, 20.87673, 20.73657, 20.99615, 20.99811, 21.22481, 20.82078, 20.84187, 21.02631,
   20.72087, 20.16816, 21.0286, 20.63418, 20.50698, 20.81566, 20.62909, 20.23603, 20.45042, 20.02929, 20.26705, 20.19337, 20.38915, 20.47821, 20.33012, 19.77586,
   20.18573, 20.22983, 19.74469, 20.10988, 19.932, 19.68885, 19.94225, 19.44779, 20.05111, 19.9045, 19.79433, 19.76793, 19.63833, 19.54482, 19.41693, 19.6871,
   19.07753, 19.72786, 19.38483, 19.662, 19.7393, 19.74706, 19.04111, 19.14468, 18.87444, 18.99365, 18.73648, 19.06208, 19.37048, 19.2306, 19.04176, 18.93176,
   19.08998, 18.69998, 18.51992, 18.66263, 18.93872, 18.76669, 18.85994, 18.60291, 19.13797, 18.69578, 18.64694, 18.86337, 18.65319, 18.20601, 18.51061, 18.33868,
   18.30101, 18.46344, 17.9803, 18.19945, 18.23942, 18.25135, 17.86901, 18.14062, 18.09326, 18.35465, 18.02175, 18.23541, 17.31434, 19.0553, 17.39969, 18.02933,
   17.58203, 17.39558, 18.0197, 17.85995, 17.86248, 17.35092, 17.56205, 17.47779, 17.46633, 17.30617, 17.43268, 17.23391, 17.56562, 17.22232, 17.10815, 17.25846,
   17.24843, 16.82626, 16.8458, 16.85525, 16.90937, 17.03827, 16.87242, 17.15215, 16.48339, 17.05962, 17.16103, 17.12138, 16.93273, 16.77103, 16.52341, 16.74216,
   17.47636, 16.86234, 17.83224, 16.41053, 16.59505, 16.11345, 16.49639, 16.32677, 16.34195, 16.23437, 16.30387, 16.21655, 16.52841, 15.74148, 16.25842, 16.1059,
   15.89919, 16.25477, 16.05272, 16.43789, 16.01075, 15.84319, 15.92679, 15.6234, 15.8056, 15.52839, 15.6022, 15.71314, 15.29869, 15.60752, 15.5336, 15.5642,
   15.79602, 16.11073, 15.35845, 15.55381, 15.56049, 15.8827, 15.35273, 15.58552, 15.60571, 15.38187, 15.45809, 15.48401, 15.72955, 15.42767, 15.15947, 15.39379,
   14.92897, 15.18945, 14.94091, 15.17286, 15.24273, 15.08818, 14.96529, 15.31478, 15.03667, 14.79789, 14.63529, 14.84638, 14.81691, 14.78127, 15.13206, 14.84652,
   14.58428, 14.99538, 14.81505, 14.65061, 14.94034, 14.56414, 14.51582, 14.70462, 14.51048, 14.31523, 14.48395, 14.61674, 14.41515, 14.66174, 14.23016, 14.33713,
   14.04274, 14.26589, 13.72325, 14.21981, 14.05519, 14.09399, 14.15508, 14.13438, 14.35452, 13.74998, 14.10798, 13.64027, 14.75996, 14.21624, 13.5745, 14.08146,
   14.09874, 13.86273, 13.59317, 13.60655, 13.8654, 13.17611, 14.06595, 13.81835, 13.53821, 13.25187, 13.37613, 13.36838, 13.33999, 13.5789, 13.39686, 13.95525,
   13.63618, 13.44399, 13.39665, 13.38268, 13.25437, 13.00159, 13.04296, 13.01753, 13.34764, 13.05035, 13.38025, 13.11067, 12.94427, 13.44038, 13.01854, 12.8441,
   13.02018, 13.19728, 12.7038, 13.00635, 12.65238, 12.98348, 12.92403, 13.46779, 12.51727, 12.79279, 12.62958, 12.79952, 12.36875, 13.04188, 12.7539, 12.60046,
   12.79291, 12.27208, 12.41602, 12.80181, 12.26685, 12.76172, 12.59035, 12.38852, 12.31074, 12.49464, 12.46966, 12.5077, 11.90333, 12.11548, 12.26982, 13.14779,
   12.19462, 12.37055, 11.87745, 12.09495, 12.06815, 12.12177, 12.13734, 11.88962, 12.58679, 12.40314, 12.01566, 11.73006, 11.68039, 11.78988, 11.99254, 11.76272,
   12.13172, 11.76064, 11.73854, 12.02425, 11.75421, 12.15743, 11.46816, 11.79852, 11.77519, 11.56522, 11.13606, 11.9829, 11.65382, 12.9402, 11.49362, 11.7347,
   11.37556, 11.22252, 11.11422, 11.04306, 11.57613, 11.55759, 11.26751, 11.37629, 11.22835, 11.11281, 11.00559, 11.40133, 10.95818, 11.32478, 10.92639, 11.2655,
   10.92488, 10.65701, 11.21524, 11.06302, 10.89417, 10.48493, 11.23746, 10.89058, 10.6072, 10.81176, 10.92594, 11.23798, 10.7028, 10.94899, 11.11711, 10.5925,
   11.08912, 10.70066, 10.66777, 10.82259, 10.91721, 10.87194, 10.43775, 10.29966, 10.39789, 10.22035, 10.44377, 10.45748, 10.30283, 10.21224, 10.52802, 10.29464,
   10.45843, 10.16296, 10.67011, 10.56081, 10.44264, 10.59407, 10.7547, 9.822502, 10.2047, 10.25038, 10.18954, 10.31457, 10.0471, 10.2004, 9.900407, 10.089,
   10.09337, 10.76764, 10.08908, 10.16202, 9.534726, 10.15583, 9.845115, 9.576027, 9.830867, 10.37621, 9.922657, 9.790761, 9.524595, 9.87489, 10.05324, 9.899198,
   9.377383, 10.02972, 10.14551, 9.43429, 9.505822, 9.52595, 9.354821, 9.467954, 9.570097, 9.547423, 9.438878, 9.652512, 9.662869, 9.598552, 9.674386, 9.766045,
   9.760119, 9.198418, 9.680768, 9.412171, 9.275691, 9.236205, 9.324517, 8.920011, 9.190913, 9.144499, 9.296861, 9.045542, 9.272073, 9.136322, 9.438552, 9.060716,
   9.1494, 9.193067, 9.3301, 9.5361, 9.08603, 9.166837, 8.676978, 8.843842, 9.070326, 8.695689, 9.447028, 9.219557, 9.241836, 9.203837, 9.092402, 8.920517,
   8.830272, 8.760252, 8.554831, 8.692529, 8.36572, 8.835103, 8.457012, 8.711697, 8.507505, 8.929206, 8.577169, 8.341489, 8.792723, 8.601314, 8.155398, 8.18343,
   8.504164, 8.473181, 8.44933, 7.924743, 8.37876, 8.529364, 8.477417, 8.824065, 8.561908, 8.561269, 8.360332, 8.277847, 7.976799, 8.280615, 7.930464, 8.133354,
   8.232026, 8.362141, 8.351344, 8.378365, 8.210857, 8.291464, 8.502723, 7.788542, 8.869978, 8.115085, 8.290542, 8.549752, 8.120446, 7.895931, 8.176945, 8.157048,
   7.711339, 8.133271, 8.048735, 7.840067, 7.97636, 7.969391, 7.856019, 8.046602, 7.653703, 7.846791, 8.285243, 8.287152, 7.608069, 7.426497, 7.889867, 7.621173,
   7.921662, 7.953414, 8.088619, 7.67764, 7.641782, 7.680057, 8.05371, 7.915546, 7.586659, 7.483415, 7.954024, 7.53316, 7.742577, 7.542502, 7.693569, 7.534933,
   7.829099, 7.644434, 7.676064, 7.25176, 7.458783, 7.415099, 7.165433, 7.871086, 7.152123, 7.287776, 7.326837, 7.406701, 7.644284, 7.595502, 7.752761, 7.126489,
   7.583686, 7.266089, 7.36731, 7.196414, 7.145368, 7.245891, 7.212622, 7.398961, 7.40423, 7.032997, 6.874531, 7.256433, 7.226801, 7.191224, 6.75731, 7.394073,
   7.314872, 6.819344, 6.937249, 7.448141, 6.694482, 7.101334, 6.987613 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1261,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1261,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1261,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1261);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->SetMinimum(-977.3399);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->SetMaximum(9869.129);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1261);
   
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
   
   TH1D *data_mc_ratio__262 = new TH1D("data_mc_ratio__262","",1000,0,2000);
   data_mc_ratio__262->SetBinContent(26,1.345161);
   data_mc_ratio__262->SetBinContent(27,1.283161);
   data_mc_ratio__262->SetBinContent(28,1.25416);
   data_mc_ratio__262->SetBinContent(29,1.239048);
   data_mc_ratio__262->SetBinContent(30,1.22242);
   data_mc_ratio__262->SetBinContent(61,1.178317);
   data_mc_ratio__262->SetBinContent(62,1.157171);
   data_mc_ratio__262->SetBinContent(63,1.141882);
   data_mc_ratio__262->SetBinContent(64,1.130745);
   data_mc_ratio__262->SetBinContent(65,1.146972);
   data_mc_ratio__262->SetBinContent(1000,0.6577382);
   data_mc_ratio__262->SetBinContent(1001,0.72769);
   data_mc_ratio__262->SetBinError(26,0.01437709);
   data_mc_ratio__262->SetBinError(27,0.01339025);
   data_mc_ratio__262->SetBinError(28,0.01263545);
   data_mc_ratio__262->SetBinError(29,0.01211729);
   data_mc_ratio__262->SetBinError(30,0.01172211);
   data_mc_ratio__262->SetBinError(61,0.01369765);
   data_mc_ratio__262->SetBinError(62,0.01361377);
   data_mc_ratio__262->SetBinError(63,0.01357077);
   data_mc_ratio__262->SetBinError(64,0.01354016);
   data_mc_ratio__262->SetBinError(65,0.01367673);
   data_mc_ratio__262->SetBinError(1000,0.1221389);
   data_mc_ratio__262->SetBinError(1001,0.006666448);
   data_mc_ratio__262->SetMinimum(0.4);
   data_mc_ratio__262->SetMaximum(1.6);
   data_mc_ratio__262->SetEntries(5659.46);
   data_mc_ratio__262->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__262->SetLineColor(ci);
   data_mc_ratio__262->SetLineWidth(2);
   data_mc_ratio__262->SetMarkerStyle(20);
   data_mc_ratio__262->SetMarkerSize(1.2);
   data_mc_ratio__262->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__262->GetXaxis()->SetRange(1,150);
   data_mc_ratio__262->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__262->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__262->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__262->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__262->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__262->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__262->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__262->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__262->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__262->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__262->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__262->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__262->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__262->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__262->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__262->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1262[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1262[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1262[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1262[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.008996005, 0.008579723, 0.00822296, 0.00789858, 0.00775249, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009852937, 0.009992711, 0.009905942, 0.009937024, 0.009973203,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1584834 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1262,Graph_from_mc_statistical_error_fy1262,Graph_from_mc_statistical_error_fex1262,Graph_from_mc_statistical_error_fey1262);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1262 = new TH1F("Graph_Graph_from_mc_statistical_error1262","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1262->SetMinimum(0.8098199);
   Graph_Graph_from_mc_statistical_error1262->SetMaximum(1.19018);
   Graph_Graph_from_mc_statistical_error1262->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1262->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1262->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1262->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1262->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1262->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1262->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1262->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1262->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1262->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1262->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1262);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->SetSelected(Z_mass_tagFirst_VR_17);
}
