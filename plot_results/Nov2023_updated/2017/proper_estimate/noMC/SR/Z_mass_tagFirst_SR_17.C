#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Thu Jan 25 12:40:56 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_17 = new TCanvas("Z_mass_tagFirst_SR_17", "Z_mass_tagFirst_SR_17",0,0,600,600);
   Z_mass_tagFirst_SR_17->SetHighLightColor(2);
   Z_mass_tagFirst_SR_17->Range(0,0,1,1);
   Z_mass_tagFirst_SR_17->SetFillColor(0);
   Z_mass_tagFirst_SR_17->SetFillStyle(4000);
   Z_mass_tagFirst_SR_17->SetBorderMode(0);
   Z_mass_tagFirst_SR_17->SetBorderSize(2);
   Z_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-19.83059,315.7258,19820.76);
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
   st->SetMaximum(17836.7);
   
   TH1F *st_stack_115 = new TH1F("st_stack_115","",1000,0,2000);
   st_stack_115->SetMinimum(0.01);
   st_stack_115->SetMaximum(17836.7);
   st_stack_115->SetDirectory(nullptr);
   st_stack_115->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_115->SetLineColor(ci);
   st_stack_115->SetLineWidth(0);
   st_stack_115->GetXaxis()->SetRange(1,150);
   st_stack_115->GetXaxis()->SetLabelFont(42);
   st_stack_115->GetXaxis()->SetTitleOffset(1);
   st_stack_115->GetXaxis()->SetTitleFont(42);
   st_stack_115->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_115->GetYaxis()->SetLabelFont(42);
   st_stack_115->GetYaxis()->SetLabelSize(0.05);
   st_stack_115->GetYaxis()->SetTitleSize(0.057);
   st_stack_115->GetYaxis()->SetTitleOffset(1.2);
   st_stack_115->GetYaxis()->SetTitleFont(42);
   st_stack_115->GetZaxis()->SetLabelFont(42);
   st_stack_115->GetZaxis()->SetTitleOffset(1);
   st_stack_115->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_115);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,7413.706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,7639.273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,7864.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,7816.832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,7868.37);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,7957.326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,8026.514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,7972.505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,7874.018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,7851.073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,7857.427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,7818.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,7662.924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,7704.578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,7612.445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,7556.318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,7310.277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,7213.202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,6991.518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,6910.328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,6744.418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,6547.444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,6534.03);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,6267.162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,6223.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,6166.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,6019.709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,5919.457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,5856.623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,5743.663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,35.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,19015.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.789332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.6114139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.027831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,4.548087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,7.302921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,10.77662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,14.473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,18.51821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,22.07873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,26.26946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,30.04028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,33.55543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,37.01454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,39.89681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,42.88187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,44.93788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,47.0524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,48.65001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,49.99657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,51.157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,51.92941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,52.6905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,52.52944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,52.70232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,52.9994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,53.22931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,53.04992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,52.72123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,52.64436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,52.66566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,52.53655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,52.00973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,52.1509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,51.83814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,51.64669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,50.7989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,50.46048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,49.67903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,49.38973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,48.79323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,48.07544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,48.02617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,47.03518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,46.87064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,46.65747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,46.09726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,45.7118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,45.46854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,45.02791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,44.76424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,44.50181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,44.2913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,44.23782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,44.01473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,43.78481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,43.52935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,43.06455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,42.86589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,42.64146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,42.39675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,42.11661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,42.11365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,42.11661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,41.56716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,41.31307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,41.17257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,40.96169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,40.58272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,40.41041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,40.31007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,40.0122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,40.0231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,39.37177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,39.21161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,39.10501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,39.03165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,38.91175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,38.47538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,38.41055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,37.79903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,37.7);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,37.49618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,37.52608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,37.03305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,37.08853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,36.73575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,36.67974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,36.19929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,36.02157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,35.74724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,35.48835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,35.46728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,34.7593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,34.88455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,34.594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,34.52369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,34.57058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,33.97797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,33.74983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,34.04392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,33.46619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,33.18951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,32.99559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,32.95024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,32.77392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,32.38763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,31.86399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,31.92455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,31.69146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,31.68949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,31.33956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,31.47644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,31.21406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,30.63178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,30.96959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,30.60329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,30.52583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,30.30665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,30.02991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,29.75897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,29.78826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,29.88641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,29.24153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,29.24366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,29.31388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,28.89645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,28.72561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,28.79277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,28.8792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,28.60389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,28.52974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,28.1671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,28.27748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,27.77731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,27.75936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,27.56114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,27.59954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,27.47284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,27.29993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,27.3797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,27.40017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,26.89063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,26.71863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,26.83264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,26.84889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,26.33106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,26.27183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,25.89683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,26.35234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,25.84384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,26.12915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,25.68424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,25.85107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,26.00726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,25.53584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,25.53828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,25.64054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,25.23148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,25.19441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,25.13995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,24.66205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,24.84578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,24.67972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,24.84578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,24.53033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,24.67467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,24.49983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,24.79307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,24.357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,24.27244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,24.21333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,24.17728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,24.23905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,24.05068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,23.82685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,24.03772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,23.76401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,23.622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,23.69311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,23.57712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,23.7299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,23.46056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,23.50567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,23.83208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,23.37542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,23.24713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,23.13968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,23.07767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,22.78149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,22.93957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,23.15852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,22.95586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,22.99382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,23.0182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,22.94228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,22.66084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,22.50911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,22.63608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,22.38977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,22.22218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,22.81975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,22.65259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,22.28378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,22.06179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,22.15761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,22.30893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,21.97407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,22.28937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,22.18851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,21.91445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,22.16604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,21.78041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,21.88885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,21.53589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,21.75179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,21.81471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,21.66857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,21.65418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,21.61386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,21.809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,21.77755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,21.50694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,21.39366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,21.12698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,21.70878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,21.27978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,21.46925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,21.30319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,21.30319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,21.34993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,20.87481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,20.58023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,21.09452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,20.99089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,20.95524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,21.03536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,20.83896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,20.98792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,21.11813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,20.78508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,20.89271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,20.70699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,20.78208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,20.57115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,20.84195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,20.33966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,20.2414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,20.51352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,20.41305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,20.19209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,20.53174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,20.51656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,20.4161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,20.0745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,20.2106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,20.49225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,20.75208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,20.17048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,19.95933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,20.14576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,20.08071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,20.23832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,20.32741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,19.80264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,20.00299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,19.63835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,19.82779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,20.14266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,19.79005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,19.5238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,19.7017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,20.03722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,19.62248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,19.82465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,19.43104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,19.67639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,19.42142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,19.80893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,19.44066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,19.62566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,19.48547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,19.37002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,19.25064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,19.31526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,19.35715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,19.34749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,19.23121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,19.02601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,19.0816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,19.1598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,19.23121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,19.03911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,19.01291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,19.08813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,18.75556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,18.60548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,19.01291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,19.09139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,18.86817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,18.42376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,18.66232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,18.71566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,18.93081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,18.77217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,18.75889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,18.75889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,18.79207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,18.60883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,18.51148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,18.61217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,18.46092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,18.49127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,18.41023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,18.54174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,18.51821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,18.31522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,18.41699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,18.37635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,18.21972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,18.54846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,18.45417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,18.10308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,18.66232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,18.26071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,18.14434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,18.00646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,18.09964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,17.83611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,17.83611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,17.86403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,18.16493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,17.78363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,18.12028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,17.94407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,18.14777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,17.78714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,17.46191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,17.55088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,17.43691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,17.51535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,17.90932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,17.25011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,17.62881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,17.47261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,17.54733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,17.70287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,17.23927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,17.58989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,17.26816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,17.26094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,17.27537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,17.12687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,17.26455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,17.09774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,17.21033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,16.99907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,16.80369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,16.83333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,16.84443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,16.88137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,17.28259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,16.62476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,16.81851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,16.9256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,16.79627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,16.63975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,17.0247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,17.01006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,16.64349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,16.84443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,16.56845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,16.79627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,16.72937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,16.76285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,16.53834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,16.54211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,16.28398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,16.31074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,16.32219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,16.41355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,16.19189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,16.15337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,16.32601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,16.18419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,15.95935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,16.09928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,16.01391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,16.60601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,16.17264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,16.36032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,15.81424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,15.95154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,16.10315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,16.16108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,16.29928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,16.01002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,15.97886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,16.08379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,15.58006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,16.09928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,15.94372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,15.54804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,15.94372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,15.83393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,15.90852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,15.62399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,15.74712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,15.87323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,15.8418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,15.6956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,15.73129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,15.66382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,15.16257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,15.53601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,15.67972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,15.49988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,15.71544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,15.48379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,15.37071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,15.06777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,15.04294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,15.20361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,15.33825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,15.26087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,15.35449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,14.77127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,14.99315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,15.10081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,14.55456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,15.35043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,14.99315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,14.77127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,15.10494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,15.05949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,14.91817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,14.88472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,14.989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,14.89309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,14.8428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,14.40396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,15.0843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,14.8218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,14.70786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,14.95571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,14.7121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,14.52028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,14.58877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,14.31719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,14.43852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,14.45146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,14.65694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,14.63567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,14.55884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,14.17285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,14.4773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,14.46439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,14.12441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,14.46439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,14.32589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,14.13323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,14.28233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,13.88865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,14.29977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,14.20359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,14.15085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,14.13323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,14.02259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,14.05366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,13.87519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,14.05809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,13.75342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,14.20798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,13.72167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,14.05809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,14.15526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,14.08023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,13.52501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,13.86621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,13.49735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,13.50658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,13.33948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,13.67163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,13.77605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,13.80767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,13.59852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,13.52501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,13.60768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,13.40935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,13.31142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,13.3861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,13.52501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,13.52962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,13.45111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,13.40006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,13.57559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,13.38145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,13.24573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,13.54803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,13.26454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,13.04668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,13.27393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,13.13236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,12.98925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,13.39541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,12.76182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,13.03235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,13.0419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,13.10862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,12.79108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,12.97005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,12.96524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,12.97005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,12.95082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,13.09435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,12.31965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,12.76182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,12.48043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,13.00842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,12.52528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,12.38522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,13.02757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,12.65888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,12.83969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,12.45545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,12.5402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,12.51035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,12.55509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,12.33986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,12.47045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,12.36004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,12.66872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,12.45045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,12.11567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,12.39528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,12.30953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,12.07446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,11.88725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,12.14135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,12.15674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,12.20788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,12.06413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,12.1721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,11.84524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,12.22828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,12.33481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,12.19767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,12.17722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,11.92388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,11.882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,12.03311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,11.76608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,12.13622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,12.26389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,11.8505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,11.90819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,11.59539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,11.82945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,11.6115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,11.87151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,11.58464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,11.59002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,11.47657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,11.90819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,11.22962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,11.76078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,11.57388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,11.29048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,11.62759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,11.44395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,11.56849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,11.37296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,11.34004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,11.27944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,11.25732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,11.17957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,11.18514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,11.23516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,11.25732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,11.08442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,11.17957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,11.20184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,11.15167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,11.32354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,11.22407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,11.04501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,11.04501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,11.15167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,11.35102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,11.08442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,11.1349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,11.23516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,11.04501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,11.174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,11.10127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,11.16842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,10.98278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,10.96575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,11.1237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,10.63696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,10.83428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,10.70702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,10.99412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,10.9145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,10.82853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,10.79972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,10.98845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,10.72446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,10.51916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,10.27345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,10.67789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,10.60764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,10.60176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,10.56054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,10.67205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,10.41799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,10.75926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,10.61938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,10.54874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,10.70702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,10.29163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,10.531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,10.62524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,10.40003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,10.17596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,10.30978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,10.46572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,10.29163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,10.42397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,10.26739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,10.20042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,10.18208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,10.10838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,9.846106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,10.20652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,9.94057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,10.03415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,10.22482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,10.11454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,10.26132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,9.833442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,10.21873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,9.865071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,10.531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,10.12686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,9.647949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,10.26739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,10.04035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,10.02172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,9.628556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,9.78899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,9.990586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,9.458819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,10.1637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,9.946836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,9.654405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,9.471984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,9.531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,9.517917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,9.589653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,9.801711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,9.660856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,9.959356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,9.731538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,9.622083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,9.504816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,9.550591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,9.504816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,9.366148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,9.419215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,9.339502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,9.596148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,9.405976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,9.654405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,9.319467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,9.198343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,9.602638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,9.245635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,9.191567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,9.292687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,9.511369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,8.999769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,9.319467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,8.992844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,9.32615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,9.238894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,9.628556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,8.718457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,9.164413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,8.999769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,9.143995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,8.937246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,9.352835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,9.116699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,8.867259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,9.150806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,8.8813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,8.86023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,9.130357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,8.846155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,9.034318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,9.0481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,8.853195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,8.754115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,9.020514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,8.696992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,8.944215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,8.625055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,8.696992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,8.832057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,8.796715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,8.732738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,8.874282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,8.588861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,8.718457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,8.486696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,8.76123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,8.7256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,8.537931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,8.909317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,8.789629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,8.567071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,8.398136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,8.353505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,8.427759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,8.559795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,8.37585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,8.617828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,8.501366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,8.286106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,8.632276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,8.442532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,8.625055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,8.293622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,8.501366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,8.494034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,8.210571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,7.956216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,8.711308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,8.368408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,8.308633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,8.255975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,8.420363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,8.111322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,8.003064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,8.072825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,7.987478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,8.19538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,8.119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,8.240868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,8.103638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,8.080539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,7.89332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,7.956216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,8.157279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,7.916965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,8.134333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,7.766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,8.19538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,7.660995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,7.701551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,7.948381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,7.964043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,7.837872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,7.538017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,7.995275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,7.733843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,7.538017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,7.538017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,7.790031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,8.088246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,7.709636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,7.733843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,8.026385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,7.620223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,7.620223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,7.595654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,7.701551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,7.693457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,7.885423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,7.798025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,7.471602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,7.379304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,7.413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,7.285838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,7.51318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,7.479936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,7.362399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,7.438172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,7.504883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,7.311447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,7.55453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,7.234347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,7.717714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,7.488261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,7.446543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,7.55453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,7.741894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,6.899322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,7.336967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,7.336967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,7.268715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,7.413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,7.217102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,7.379304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,7.068819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,7.242954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,7.311447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,7.496576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,7.22573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,7.156417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,6.826695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,7.345454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,7.015736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,6.790091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,7.103988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,7.387743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,7.13025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,7.095212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,6.808417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,7.077628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,7.138983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,7.068819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,6.734811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,7.103988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,7.251551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,6.872177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,6.835816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,6.604025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,6.744056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,6.899322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,6.808417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,6.725553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,6.835816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,6.92636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,6.697704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,6.780909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,7.042328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,6.980123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,6.85402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,6.744056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,6.65103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,6.528114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,6.354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,6.58513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,6.65103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,6.499419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,6.660391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,6.753288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,6.556684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,6.594584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,6.508998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,6.688395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,6.790091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,6.518563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,6.613453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,6.18506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,6.304782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,6.499419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,6.255176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,6.808417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,6.556684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,6.641655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,6.470597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,6.460961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,6.393102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,6.363798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,6.304782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,6.103941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,6.235223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,5.927878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,6.255176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,6.073242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,6.245208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,6.073242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,6.344187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,6.062974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,5.938379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,6.344187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,6.225223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,5.821825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,5.938379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,6.114139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,6.042387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,6.103941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,5.691954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,5.948862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,6.154765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,6.103941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,6.265128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,6.093725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,6.16488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,6.001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,5.90682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,5.746424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,5.864476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,5.67002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,5.757256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,6.011373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,6.073242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,5.990609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,6.032067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,5.875091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,5.84319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,6.062974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,5.536589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,6.324515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,5.78963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,6.011373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,6.205174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,5.800382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,5.625894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,5.832517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,5.821825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,5.422889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,5.832517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,5.636958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,5.54783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,5.70289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,5.78963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,5.648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,5.757256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,5.536589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,5.691954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,5.938379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,5.896262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,5.188019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,5.341859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,5.625894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,5.411388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,5.746424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,5.724698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,5.65902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,5.54783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,5.457248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,5.525324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,5.78963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,5.592572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,5.445819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,5.306754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,5.70289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,5.388311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,5.55905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,5.411388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,5.468652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,5.468652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,5.67002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,5.514036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,5.58142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,5.223923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,5.35351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,5.399862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,5.041848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,5.603701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,5.175996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,5.223923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,5.247722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,5.318481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,5.58142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,5.330183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,5.58142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,4.992174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,5.411388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,5.211983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,5.223923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,5.151865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,5.139758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,5.175996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,5.163945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,5.365136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,5.223923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,4.979678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,4.878557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,5.295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,5.091038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,5.115456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,4.735992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,5.200015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,5.188019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,4.954591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,4.979678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,5.376736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,4.683074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,5.054191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,4.96715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,81.93023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3073644);

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
   
   TH1D *VH_tagFirst_Z_mass__229 = new TH1D("VH_tagFirst_Z_mass__229","",1000,0,2000);
   VH_tagFirst_Z_mass__229->SetBinContent(1000,50);
   VH_tagFirst_Z_mass__229->SetBinContent(1001,26893);
   VH_tagFirst_Z_mass__229->SetEntries(1359367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__229->SetLineColor(ci);
   VH_tagFirst_Z_mass__229->SetLineWidth(2);
   VH_tagFirst_Z_mass__229->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__229->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__229->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__229->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__229->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__229->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__229->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__229->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__229->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__229->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__229->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__229->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1229[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1229[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7413.706, 7639.273, 7864.84,
   7816.832, 7868.37, 7957.326, 8026.514, 7972.505, 7874.018, 7851.073, 7857.427, 7818.95, 7662.924, 7704.578, 7612.445, 7556.318, 7310.277, 7213.202, 6991.518,
   6910.328, 6744.418, 6547.444, 6534.03, 6267.162, 6223.39, 6166.91, 6019.709, 5919.457, 5856.623, 5743.663, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 35.3 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1229[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1229[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.789332, 0.6114139, 2.027831, 4.548087, 7.302921, 10.77662,
   14.473, 18.51821, 22.07873, 26.26946, 30.04028, 33.55543, 37.01454, 39.89681, 42.88187, 44.93788, 47.0524, 48.65001, 49.99657, 51.157, 51.92941, 52.6905,
   52.52944, 52.70232, 52.9994, 53.22931, 53.04992, 52.72123, 52.64436, 52.66566, 52.53655, 52.00973, 52.1509, 51.83814, 51.64669, 50.7989, 50.46048, 49.67903,
   49.38973, 48.79323, 48.07544, 48.02617, 47.03518, 46.87064, 46.65747, 46.09726, 45.7118, 45.46854, 45.02791, 44.76424, 44.50181, 44.2913, 44.23782, 44.01473,
   43.78481, 43.52935, 43.06455, 42.86589, 42.64146, 42.39675, 42.11661, 42.11365, 42.11661, 41.56716, 41.31307, 41.17257, 40.96169, 40.58272, 40.41041, 40.31007,
   40.0122, 40.0231, 39.37177, 39.21161, 39.10501, 39.03165, 38.91175, 38.47538, 38.41055, 37.79903, 37.7, 37.49618, 37.52608, 37.03305, 37.08853, 36.73575,
   36.67974, 36.19929, 36.02157, 35.74724, 35.48835, 35.46728, 34.7593, 34.88455, 34.594, 34.52369, 34.57058, 33.97797, 33.74983, 34.04392, 33.46619, 33.18951,
   32.99559, 32.95024, 32.77392, 32.38763, 31.86399, 31.92455, 31.69146, 31.68949, 31.33956, 31.47644, 31.21406, 30.63178, 30.96959, 30.60329, 30.52583, 30.30665,
   30.02991, 29.75897, 29.78826, 29.88641, 29.24153, 29.24366, 29.31388, 28.89645, 28.72561, 28.79277, 28.8792, 28.60389, 28.52974, 28.1671, 28.27748, 27.77731,
   27.75936, 27.56114, 27.59954, 27.47284, 27.29993, 27.3797, 27.40017, 26.89063, 26.71863, 26.83264, 26.84889, 26.33106, 26.27183, 25.89683, 26.35234, 25.84384,
   26.12915, 25.68424, 25.85107, 26.00726, 25.53584, 25.53828, 25.64054, 25.23148, 25.19441, 25.13995, 24.66205, 24.84578, 24.67972, 24.84578, 24.53033, 24.67467,
   24.49983, 24.79307, 24.357, 24.27244, 24.21333, 24.17728, 24.23905, 24.05068, 23.82685, 24.03772, 23.76401, 23.622, 23.69311, 23.57712, 23.7299, 23.46056,
   23.50567, 23.83208, 23.37542, 23.24713, 23.13968, 23.07767, 22.78149, 22.93957, 23.15852, 22.95586, 22.99382, 23.0182, 22.94228, 22.66084, 22.50911, 22.63608,
   22.38977, 22.22218, 22.81975, 22.65259, 22.28378, 22.06179, 22.15761, 22.30893, 21.97407, 22.28937, 22.18851, 21.91445, 22.16604, 21.78041, 21.88885, 21.53589,
   21.75179, 21.81471, 21.66857, 21.65418, 21.61386, 21.809, 21.77755, 21.50694, 21.39366, 21.12698, 21.70878, 21.27978, 21.46925, 21.30319, 21.30319, 21.34993,
   20.87481, 20.58023, 21.09452, 20.99089, 20.95524, 21.03536, 20.83896, 20.98792, 21.11813, 20.78508, 20.89271, 20.70699, 20.78208, 20.57115, 20.84195, 20.33966,
   20.2414, 20.51352, 20.41305, 20.19209, 20.53174, 20.51656, 20.4161, 20.0745, 20.2106, 20.49225, 20.75208, 20.17048, 19.95933, 20.14576, 20.08071, 20.23832,
   20.32741, 19.80264, 20.00299, 19.63835, 19.82779, 20.14266, 19.79005, 19.5238, 19.7017, 20.03722, 19.62248, 19.82465, 19.43104, 19.67639, 19.42142, 19.80893,
   19.44066, 19.62566, 19.48547, 19.37002, 19.25064, 19.31526, 19.35715, 19.34749, 19.23121, 19.02601, 19.0816, 19.1598, 19.23121, 19.03911, 19.01291, 19.08813,
   18.75556, 18.60548, 19.01291, 19.09139, 18.86817, 18.42376, 18.66232, 18.71566, 18.93081, 18.77217, 18.75889, 18.75889, 18.79207, 18.60883, 18.51148, 18.61217,
   18.46092, 18.49127, 18.41023, 18.54174, 18.51821, 18.31522, 18.41699, 18.37635, 18.21972, 18.54846, 18.45417, 18.10308, 18.66232, 18.26071, 18.14434, 18.00646,
   18.09964, 17.83611, 17.83611, 17.86403, 18.16493, 17.78363, 18.12028, 17.94407, 18.14777, 17.78714, 17.46191, 17.55088, 17.43691, 17.51535, 17.90932, 17.25011,
   17.62881, 17.47261, 17.54733, 17.70287, 17.23927, 17.58989, 17.26816, 17.26094, 17.27537, 17.12687, 17.26455, 17.09774, 17.21033, 16.99907, 16.80369, 16.83333,
   16.84443, 16.88137, 17.28259, 16.62476, 16.81851, 16.9256, 16.79627, 16.63975, 17.0247, 17.01006, 16.64349, 16.84443, 16.56845, 16.79627, 16.72937, 16.76285,
   16.53834, 16.54211, 16.28398, 16.31074, 16.32219, 16.41355, 16.19189, 16.15337, 16.32601, 16.18419, 15.95935, 16.09928, 16.01391, 16.60601, 16.17264, 16.36032,
   15.81424, 15.95154, 16.10315, 16.16108, 16.29928, 16.01002, 15.97886, 16.08379, 15.58006, 16.09928, 15.94372, 15.54804, 15.94372, 15.83393, 15.90852, 15.62399,
   15.74712, 15.87323, 15.8418, 15.6956, 15.73129, 15.66382, 15.16257, 15.53601, 15.67972, 15.49988, 15.71544, 15.48379, 15.37071, 15.06777, 15.04294, 15.20361,
   15.33825, 15.26087, 15.35449, 14.77127, 14.99315, 15.10081, 14.55456, 15.35043, 14.99315, 14.77127, 15.10494, 15.05949, 14.91817, 14.88472, 14.989, 14.89309,
   14.8428, 14.40396, 15.0843, 14.8218, 14.70786, 14.95571, 14.7121, 14.52028, 14.58877, 14.31719, 14.43852, 14.45146, 14.65694, 14.63567, 14.55884, 14.17285,
   14.4773, 14.46439, 14.12441, 14.46439, 14.32589, 14.13323, 14.28233, 13.88865, 14.29977, 14.20359, 14.15085, 14.13323, 14.02259, 14.05366, 13.87519, 14.05809,
   13.75342, 14.20798, 13.72167, 14.05809, 14.15526, 14.08023, 13.52501, 13.86621, 13.49735, 13.50658, 13.33948, 13.67163, 13.77605, 13.80767, 13.59852, 13.52501,
   13.60768, 13.40935, 13.31142, 13.3861, 13.52501, 13.52962, 13.45111, 13.40006, 13.57559, 13.38145, 13.24573, 13.54803, 13.26454, 13.04668, 13.27393, 13.13236,
   12.98925, 13.39541, 12.76182, 13.03235, 13.0419, 13.10862, 12.79108, 12.97005, 12.96524, 12.97005, 12.95082, 13.09435, 12.31965, 12.76182, 12.48043, 13.00842,
   12.52528, 12.38522, 13.02757, 12.65888, 12.83969, 12.45545, 12.5402, 12.51035, 12.55509, 12.33986, 12.47045, 12.36004, 12.66872, 12.45045, 12.11567, 12.39528,
   12.30953, 12.07446, 11.88725, 12.14135, 12.15674, 12.20788, 12.06413, 12.1721, 11.84524, 12.22828, 12.33481, 12.19767, 12.17722, 11.92388, 11.882, 12.03311,
   11.76608, 12.13622, 12.26389, 11.8505, 11.90819, 11.59539, 11.82945, 11.6115, 11.87151, 11.58464, 11.59002, 11.47657, 11.90819, 11.22962, 11.76078, 11.57388,
   11.29048, 11.62759, 11.44395, 11.56849, 11.37296, 11.34004, 11.27944, 11.25732, 11.17957, 11.18514, 11.23516, 11.25732, 11.08442, 11.17957, 11.20184, 11.15167,
   11.32354, 11.22407, 11.04501, 11.04501, 11.15167, 11.35102, 11.08442, 11.1349, 11.23516, 11.04501, 11.174, 11.10127, 11.16842, 10.98278, 10.96575, 11.1237,
   10.63696, 10.83428, 10.70702, 10.99412, 10.9145, 10.82853, 10.79972, 10.98845, 10.72446, 10.51916, 10.27345, 10.67789, 10.60764, 10.60176, 10.56054, 10.67205,
   10.41799, 10.75926, 10.61938, 10.54874, 10.70702, 10.29163, 10.531, 10.62524, 10.40003, 10.17596, 10.30978, 10.46572, 10.29163, 10.42397, 10.26739, 10.20042,
   10.18208, 10.10838, 9.846106, 10.20652, 9.94057, 10.03415, 10.22482, 10.11454, 10.26132, 9.833442, 10.21873, 9.865071, 10.531, 10.12686, 9.647949, 10.26739,
   10.04035, 10.02172, 9.628556, 9.78899, 9.990586, 9.458819, 10.1637, 9.946836, 9.654405, 9.471984, 9.531, 9.517917, 9.589653, 9.801711, 9.660856, 9.959356,
   9.731538, 9.622083, 9.504816, 9.550591, 9.504816, 9.366148, 9.419215, 9.339502, 9.596148, 9.405976, 9.654405, 9.319467, 9.198343, 9.602638, 9.245635, 9.191567,
   9.292687, 9.511369, 8.999769, 9.319467, 8.992844, 9.32615, 9.238894, 9.628556, 8.718457, 9.164413, 8.999769, 9.143995, 8.937246, 9.352835, 9.116699, 8.867259,
   9.150806, 8.8813, 8.86023, 9.130357, 8.846155, 9.034318, 9.0481, 8.853195, 8.754115, 9.020514, 8.696992, 8.944215, 8.625055, 8.696992, 8.832057, 8.796715,
   8.732738, 8.874282, 8.588861, 8.718457, 8.486696, 8.76123, 8.7256, 8.537931, 8.909317, 8.789629, 8.567071, 8.398136, 8.353505, 8.427759, 8.559795, 8.37585,
   8.617828, 8.501366, 8.286106, 8.632276, 8.442532, 8.625055, 8.293622, 8.501366, 8.494034, 8.210571, 7.956216, 8.711308, 8.368408, 8.308633, 8.255975, 8.420363,
   8.111322, 8.003064, 8.072825, 7.987478, 8.19538, 8.119, 8.240868, 8.103638, 8.080539, 7.89332, 7.956216, 8.157279, 7.916965, 8.134333, 7.766, 8.19538,
   7.660995, 7.701551, 7.948381, 7.964043, 7.837872, 7.538017, 7.995275, 7.733843, 7.538017, 7.538017, 7.790031, 8.088246, 7.709636, 7.733843, 8.026385, 7.620223,
   7.620223, 7.595654, 7.701551, 7.693457, 7.885423, 7.798025, 7.471602, 7.379304, 7.413, 7.285838, 7.51318, 7.479936, 7.362399, 7.438172, 7.504883, 7.311447,
   7.55453, 7.234347, 7.717714, 7.488261, 7.446543, 7.55453, 7.741894, 6.899322, 7.336967, 7.336967, 7.268715, 7.413, 7.217102, 7.379304, 7.068819, 7.242954,
   7.311447, 7.496576, 7.22573, 7.156417, 6.826695, 7.345454, 7.015736, 6.790091, 7.103988, 7.387743, 7.13025, 7.095212, 6.808417, 7.077628, 7.138983, 7.068819,
   6.734811, 7.103988, 7.251551, 6.594584, 6.872177, 6.835816, 6.604025, 6.744056, 6.899322, 6.808417, 6.725553, 6.835816, 6.92636, 6.697704, 6.780909, 7.042328,
   6.980123, 6.594584, 6.85402, 6.744056, 6.65103, 6.528114, 6.594584, 6.354, 6.594584, 6.58513, 6.65103, 6.499419, 6.660391, 6.594584, 6.753288, 6.556684,
   6.594584, 6.508998, 6.688395, 6.790091, 6.518563, 6.613453, 6.18506, 6.304782, 6.499419, 6.255176, 6.808417, 6.556684, 6.641655, 6.470597, 6.460961, 6.393102,
   6.363798, 6.304782, 6.103941, 6.235223, 5.927878, 6.255176, 6.073242, 6.245208, 6.073242, 6.344187, 6.062974, 5.938379, 6.344187, 6.225223, 5.821825, 5.938379,
   6.114139, 6.042387, 6.103941, 5.691954, 5.948862, 6.154765, 6.103941, 6.265128, 6.093725, 6.16488, 6.001, 5.90682, 5.746424, 5.864476, 5.67002, 5.757256,
   6.011373, 6.073242, 5.990609, 6.032067, 5.875091, 5.84319, 6.062974, 5.536589, 6.324515, 5.78963, 6.011373, 6.205174, 5.800382, 5.625894, 5.832517, 5.821825,
   5.422889, 5.832517, 5.636958, 5.54783, 5.70289, 5.78963, 5.648, 5.757256, 5.536589, 5.691954, 5.938379, 5.896262, 5.188019, 5.341859, 5.625894, 5.411388,
   5.746424, 5.724698, 5.65902, 5.54783, 5.457248, 5.525324, 5.78963, 5.592572, 5.445819, 5.306754, 5.70289, 5.388311, 5.55905, 5.411388, 5.468652, 5.468652,
   5.67002, 5.514036, 5.58142, 5.223923, 5.35351, 5.399862, 5.041848, 5.603701, 5.175996, 5.223923, 5.247722, 5.318481, 5.58142, 5.330183, 5.58142, 4.992174,
   5.411388, 5.211983, 5.223923, 5.151865, 5.139758, 5.175996, 5.163945, 5.365136, 5.223923, 4.979678, 4.878557, 5.295, 5.091038, 5.115456, 4.735992, 5.200015,
   5.188019, 4.954591, 4.979678, 5.376736, 4.683074, 5.054191, 4.96715 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1229,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1229,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1229,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1229);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->SetMinimum(-862.9706);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->SetMaximum(8892.717);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1229);
   
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   Z_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__230 = new TH1D("data_mc_ratio__230","",1000,0,2000);
   data_mc_ratio__230->SetBinContent(1000,1.416431);
   data_mc_ratio__230->SetBinContent(1001,1.414248);
   data_mc_ratio__230->SetBinError(1000,0.2003135);
   data_mc_ratio__230->SetBinError(1001,0.01055942);
   data_mc_ratio__230->SetMinimum(0.4);
   data_mc_ratio__230->SetMaximum(1.6);
   data_mc_ratio__230->SetEntries(25.12563);
   data_mc_ratio__230->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__230->SetLineColor(ci);
   data_mc_ratio__230->SetLineWidth(2);
   data_mc_ratio__230->SetMarkerStyle(20);
   data_mc_ratio__230->SetMarkerSize(1.2);
   data_mc_ratio__230->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__230->GetXaxis()->SetRange(1,150);
   data_mc_ratio__230->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__230->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__230->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__230->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__230->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__230->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__230->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__230->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__230->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__230->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1230[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1230[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1230[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1230[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006900327, 0.00679769, 0.0066995,
   0.006720042, 0.006697997, 0.006660453, 0.006631685, 0.00665411, 0.006695595, 0.006705372, 0.00670266, 0.006719131, 0.006787191, 0.006768819, 0.006809657, 0.006834901, 0.00694897, 0.006995573, 0.007105614,
   0.007147234, 0.00723461, 0.007342627, 0.00735016, 0.007505021, 0.007531368, 0.007565777, 0.007657722, 0.007722296, 0.00776361, 0.007839581, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1230,Graph_from_mc_statistical_error_fy1230,Graph_from_mc_statistical_error_fex1230,Graph_from_mc_statistical_error_fey1230);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1230 = new TH1F("Graph_Graph_from_mc_statistical_error1230","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1230->SetMinimum(0.831145);
   Graph_Graph_from_mc_statistical_error1230->SetMaximum(1.168855);
   Graph_Graph_from_mc_statistical_error1230->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1230->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1230->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1230);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->SetSelected(Z_mass_tagFirst_SR_17);
}
