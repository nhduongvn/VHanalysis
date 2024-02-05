#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_16/H_mass_tagFirst_SR_16
//=========  (Fri Feb  2 13:21:03 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_16 = new TCanvas("H_mass_tagFirst_SR_16", "H_mass_tagFirst_SR_16",0,0,600,600);
   H_mass_tagFirst_SR_16->SetHighLightColor(2);
   H_mass_tagFirst_SR_16->Range(0,0,1,1);
   H_mass_tagFirst_SR_16->SetFillColor(0);
   H_mass_tagFirst_SR_16->SetFillStyle(4000);
   H_mass_tagFirst_SR_16->SetBorderMode(0);
   H_mass_tagFirst_SR_16->SetBorderSize(2);
   H_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-19.27759,315.7258,19268.31);
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
   st->SetMaximum(17339.55);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",1000,0,2000);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(17339.55);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetRange(1,150);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,3895.167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,7782.355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,7785.865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,7802.797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,7765.632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,7758.36);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,7773.039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,7702.438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,7730.015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,7617.244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,7547.555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,7634.918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,7685.709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,7634.664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,7468.396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,7557.923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,7480.675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,7406.943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,7301.219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,7195.673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,7180.67);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,7176.191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,7136.979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,7082.785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,7010.267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,6955.538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,6887.21);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,6810.564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,6734.225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,6691.109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,3356.682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,15.01096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,10246.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.9064952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.097299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.201726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,12.88062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,19.02704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,24.98905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,31.30004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,37.41467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,43.04838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,47.60743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,52.19129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,55.26433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,57.77584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,59.60371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,61.12369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,62.08753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,62.37696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,63.23631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,63.32311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,63.37426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,63.06954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,62.86149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,62.79165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,62.84664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,62.27496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,62.31714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,61.66349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,61.58571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,61.6068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,61.40006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,61.32048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,60.90112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,60.44459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,60.66914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,60.09786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,59.83678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,59.63665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,59.45241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,59.37324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,59.70444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,59.4444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,59.11185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,59.04786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,59.08522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,58.70256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,58.80777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,58.32706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,58.11998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,58.20958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,58.47605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,58.36489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,57.87645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,58.04633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,57.72107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,57.5589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,57.11262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,56.68233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,56.54629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,56.63598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,56.35991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,56.18672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,56.1907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,55.76076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,55.57286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,55.43147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,55.20095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,54.95099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,54.73327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,54.65941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,54.60447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,54.15799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,53.86991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,53.77198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,53.09619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,53.50004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,52.84118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,52.74375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,53.06056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,52.495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,52.61733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,52.12836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,52.06409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,51.97138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,51.91923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,51.64159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,51.67957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,51.20639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,51.18243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,51.77844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,51.10763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,51.25466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,51.24379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,50.49267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,50.42485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,50.41439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,50.40076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,50.13923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,50.17352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,49.76715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,49.38395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,49.74624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,49.74371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,49.79336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,49.3028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,49.57383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,49.47404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,49.43786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,49.2022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,49.23553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,48.65084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,48.79372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,48.77974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,48.85431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,48.94316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,48.14641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,48.07331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,48.52458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,48.40155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,48.3916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,48.16335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,47.59979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,47.96381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,47.86708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,47.89902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,47.87781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,47.73151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,47.6699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,47.12384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,47.51171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,47.18845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,47.06718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,46.72088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,46.87818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,46.79927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,46.91889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,46.5893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,46.38013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,45.93985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,46.26688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,46.15254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,46.16776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,45.98105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,45.95575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,45.85993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,45.76309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,45.24448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,45.62614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,45.13625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,45.10546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,44.96814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,44.51401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,44.45311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,44.57438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,44.71675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,44.39417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,44.15604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,44.10067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,43.82816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,43.75341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,43.37302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,43.68515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,43.05981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,43.21294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,43.36041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,43.01367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,42.90071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,42.57934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,43.07119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,42.52307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,42.60594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,42.42053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,42.47851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,42.23896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,41.64171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,41.96369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,41.81885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,41.56237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,41.34943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,41.47816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,41.06138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,40.93918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,41.12431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,40.68024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,40.52262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,40.69204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,40.15958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,40.61704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,40.45322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,39.88075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,39.41166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,39.88584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,39.31074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,39.32813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,39.99225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,39.06551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,38.996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,38.79589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,38.98038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,38.47202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,38.64989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,38.50732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,38.10558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,38.44534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,37.81898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,37.87018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,37.94797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,37.97633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,37.87684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,36.90861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,37.29727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,37.28347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,36.80735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,36.45079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,36.64474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,36.04212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,36.68252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,36.32319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,36.23487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,35.90655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,35.66994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,35.74967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,35.82575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,35.76294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,35.19759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,35.57205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,35.19438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,35.21118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,34.73885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,35.1627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,34.67417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,34.71235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,34.04763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,34.37458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,34.43271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,34.5272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,33.86361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,34.00168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,33.97115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,33.93235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,33.39586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,33.43355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,33.62979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,33.16258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,33.00493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,32.92153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,33.07942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,32.97352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,32.67997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,32.53441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,32.50511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,32.27059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,32.52576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,32.39849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,31.67402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,31.90934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,31.79658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,32.15532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,31.79054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,31.22022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,31.23367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,31.47994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,30.88981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,30.9921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,31.01397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,30.65129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,30.84366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,30.51737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,29.94625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,30.12073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,30.73183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,30.34616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,30.06437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,29.77414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,29.88618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,29.88504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,29.71151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,29.81266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,29.46383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,29.81734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,29.05318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,28.89669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,29.26243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,28.64745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,29.11421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,28.49644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,28.7333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,28.49996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,28.50013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,28.47671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,28.11722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,27.99139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,28.04527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,28.18425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,27.68118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,27.99869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,28.08102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,27.69328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,27.3772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,27.23861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,27.69426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,27.24793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,27.2557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,26.98579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,26.80885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,26.92405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,26.5618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,27.02208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,26.8036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,26.76066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,26.51868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,26.71503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,26.46558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,26.36537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,25.93695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,26.03707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,26.13553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,25.77748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,25.62432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,25.96312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,26.02179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,25.54853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,25.7337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,25.49724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,25.46387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,25.26013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,24.70568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,25.02771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,24.91522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,24.85416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,24.84434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,24.49484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,24.77938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,24.46468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,24.49183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,24.52778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,24.57038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,24.17742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,23.86156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,23.78677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,23.90652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,23.94996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,23.60297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,23.82408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,23.81288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,23.26612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,23.20817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,23.56703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,23.22818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,23.76624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,23.19924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,23.47517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,23.02705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,22.84172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,22.72369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,22.83696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,23.24387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,22.97819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,22.36411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,22.6401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,22.83286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,22.38621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,22.18877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,22.29693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,21.82911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,22.253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,22.17922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,22.04323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,22.16422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,21.76784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,21.7912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,21.52183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,21.62759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,21.37817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,21.40019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,21.32598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,21.09272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,20.88216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,20.94229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,21.1216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,20.89844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,20.76018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,21.37058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,20.86422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,20.78578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,20.49004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,20.52758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,20.49651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,20.56425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,20.43386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,20.44516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,20.23828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,20.1493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,20.04471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.83883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,19.57923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,20.2005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,19.78794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,20.09861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,19.77051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,19.51119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,19.8008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,19.87927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,19.84124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,19.83373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,19.27412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,19.25579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,19.168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,19.23845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,18.97001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,18.82432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,19.19115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,18.90905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.62083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,18.95699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,18.87135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,19.02891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,18.62382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,18.71235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,18.57965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,18.73883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,18.47579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,18.342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,18.51476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.88543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,18.15405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,18.26587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.91511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,18.25706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,18.29119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.96192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,17.78439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,17.88529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,17.91251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,17.57912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,17.70359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.66086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,17.46236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,17.81702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,17.16833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,17.00997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,17.09352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,17.3012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,17.47043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.96143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,17.29585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,17.20379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,16.97217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,16.73725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.81377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,17.02232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,16.73682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,16.84256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,16.7707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,16.64615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,16.4305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,16.50996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,16.2622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,16.43664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,16.37396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,16.54345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,16.03377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,16.09204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.83818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,16.18682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,16.20057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.90258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,15.78458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.78355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,15.69748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,16.08593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,15.51468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.68019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,15.40803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,15.51011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,15.40745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,15.66441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,15.68369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,15.12436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,15.42475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,15.33803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,15.43469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,15.53865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,15.29857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,15.01702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,15.06344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.90625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.72658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.72065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.83034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.84468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,14.7752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,14.8425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.83048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.2877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,14.76867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,14.63096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,14.47966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,14.44598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,14.38113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,14.60264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,14.13009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,14.21404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,14.4755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,14.12618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,14.1146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,14.21326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,14.23525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,14.08034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,14.12401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.90546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.99774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,14.00643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,14.10232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,13.86124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.76837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.4897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,13.61327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,13.86542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,13.52074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,13.61261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,13.29221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,13.61578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,13.20692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,13.5914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,13.42942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,13.63399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,13.1362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.87851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,13.38025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.88554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,13.31376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.98467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,12.95883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.99403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,13.26105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.87411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.84404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.67668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,13.07368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.9394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,12.41293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.54898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.68101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.82288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,12.41873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,12.43082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.43334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.44349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,12.74754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.92428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.33767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,12.2615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,12.07129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,12.16957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,12.01646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,12.24815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,12.06026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,12.21592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,12.45506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,12.46939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,12.06512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,12.14016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,12.13986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,12.22198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.84589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.89593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,12.00686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,11.71503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.96554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,11.7607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.67234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,11.43527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,11.99338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.42723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,11.48254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,11.12872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,11.75907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,11.37588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,11.48653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,11.62952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,11.0845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,11.21585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,11.44224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,11.35271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.91094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,11.20439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,11.2088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,11.03186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,11.14246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,11.3761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.87012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,11.06029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,11.14952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.71571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.79296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,10.66622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.72597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.99041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.80962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,10.9793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.91384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.69129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,10.55954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,10.37635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.67667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.50731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,10.65519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,10.5363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,10.37526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,10.37654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,10.3067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,10.61211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.41275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,10.6148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,10.3235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,10.31581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,10.33674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,9.892769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,10.08933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.91609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,10.30802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,9.606758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,10.06963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,10.12154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,10.15265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,10.27422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.755713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.906036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.87787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.758842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.734113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,10.00164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.736126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.624482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.902561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,9.608684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,9.673351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,9.33653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,9.93012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.732156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.778017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,9.640032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,9.441545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.755557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,9.168495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.532436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.578052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.088881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,9.20467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,9.5038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,9.933281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,9.388664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,9.35939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,9.374609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,9.054282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,9.33516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,8.858341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.310737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.922101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,9.125396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,9.101424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,9.141031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,9.092771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.894567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.924823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,9.029765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.952717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.800264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.559171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.871496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.794533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.95967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.716129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.961925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.60095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.468814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.673041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.581281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.749688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.876034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.990085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.719444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.297258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.542415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.43);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,8.579976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.46637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.275653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.53662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.573058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,8.22409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,8.26003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,8.589101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,8.602266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,8.342841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.156757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,8.448796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,8.258859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,8.069335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,8.176677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,8.084476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,8.334727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.710376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,8.226812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,8.31659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.831338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,8.119386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,8.040308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,8.04196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.90758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.782102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,8.060848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,8.099337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.891648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,8.15745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,8.038834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.669789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.676032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.740272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.507012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.647172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.615136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.875782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.395407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.756392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.30967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.580992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.496027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.376087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.697052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.66715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.47971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.822247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,7.591387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.51035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.393333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,7.472725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,7.423198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,7.515701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.621067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.515612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,7.302813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.118831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.405413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.284767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.542236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,6.809141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,6.940162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,7.168205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,7.217988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.89701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,7.205267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,6.532039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,7.1091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.753418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,6.738814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,7.196447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,7.070897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.802597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,7.205566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.904826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.957648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.800953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.597411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.862459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.9793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,6.763308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.824682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.911433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.508559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.764888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.920556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,6.936069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.771376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,7.012832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.650367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,7.010423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.444646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.546553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.510563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.505978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.608932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.491166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.676912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.53671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.514734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,6.259072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.585507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.51593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.478987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.678503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.461995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.344462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,6.65781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.326825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.49232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,6.161578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.567372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,6.500452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,6.38163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.030842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,6.310789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,6.521109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,6.147168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,6.190981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.19953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,6.388041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,6.172566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,6.319049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.177224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.329869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,6.341382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,6.023871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,6.420617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,6.001828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.860417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,6.182359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,5.865147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.802081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,5.977959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.550243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,6.134677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,6.177826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.962042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.646509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.63651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,6.065279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.803324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.905904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,5.771737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.746524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.484432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,6.080742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.692823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.749191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.751098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.779973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.804028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.821847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.38861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.980608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.33891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.802378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.812533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.344824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.997205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.645571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.715538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.14523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.447727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.203734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.282018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.279865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.633117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.619306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.745646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,5.632476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,5.632249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.536325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.533686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,5.697553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.608467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,5.508119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.642803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.47266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.122681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.268236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.296229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,5.52081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.556018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,5.307039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.591066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,5.398253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.121105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.490287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.287851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.125205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.146595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.03979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.398277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,5.16396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,5.147724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.065497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.819199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,5.081813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.269998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.930254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,5.19133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,5.071404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,5.312007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,5.200108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,4.980044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.849623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.890102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.899128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.554641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,4.850023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.81792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,5.10503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,5.135281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.845488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.966213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,4.72897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.748726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,5.013523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.747693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,5.20143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.856599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.960956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.585585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,5.055595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.729439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.73509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.958099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.762448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.584219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.734187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.510731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.599591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.423069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,4.969324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.787779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.702155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.940829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.512391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.631745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.886494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.934373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.604094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.68974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.674051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,4.431643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.744937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.580728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.55257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.786525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.858528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.858201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.716559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.524286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.474978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.462064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,4.599889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.410827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.657051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.199097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.610587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.16323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.353752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.223115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.228113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.129494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.522526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,4.277214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,4.523719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.228259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,4.32239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,4.533054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.290914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.519701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.225627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.063681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.178358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.387155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,4.247164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,4.012397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.29149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.415446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,3.994717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,4.269618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.350441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,4.207451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,4.025541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,4.145314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,4.259452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,4.239951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,4.357209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.20474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.694694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.722499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,4.256755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.367486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,4.324432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.905748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,4.258427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.268998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.66816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,4.123807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.937924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.079154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,65.84821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(3370707);

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
   
   TH1D *VH_tagFirst_H_mass__7 = new TH1D("VH_tagFirst_H_mass__7","",1000,0,2000);
   VH_tagFirst_H_mass__7->SetBinContent(1000,14);
   VH_tagFirst_H_mass__7->SetBinContent(1001,14094);
   VH_tagFirst_H_mass__7->SetEntries(2083119);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__7->SetLineColor(ci);
   VH_tagFirst_H_mass__7->SetLineWidth(2);
   VH_tagFirst_H_mass__7->SetMarkerStyle(20);
   VH_tagFirst_H_mass__7->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__7->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__7->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__7->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1007[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3895.167, 7782.355,
   7785.865, 7802.797, 7765.632, 7758.36, 7773.039, 7702.438, 7730.015, 7617.244, 7547.555, 7634.918, 7685.709, 7634.664, 7468.396, 7557.923, 7480.675, 7406.943,
   7301.219, 7195.673, 7180.67, 7176.191, 7136.979, 7082.785, 7010.267, 6955.538, 6887.21, 6810.564, 6734.225, 6691.109, 3356.682, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 15.01096 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1007[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.369, 0.9064952, 3.097299, 7.201726, 12.88062, 19.02704, 24.98905, 31.30004,
   37.41467, 43.04838, 47.60743, 52.19129, 55.26433, 57.77584, 59.60371, 61.12369, 62.08753, 62.37696, 63.23631, 63.32311, 63.37426, 63.06954, 62.86149, 62.79165,
   62.84664, 62.27496, 62.31714, 61.66349, 61.58571, 61.6068, 61.40006, 61.32048, 60.90112, 60.44459, 60.66914, 60.09786, 59.83678, 59.63665, 59.45241, 59.37324,
   59.70444, 59.4444, 59.11185, 59.04786, 59.08522, 58.70256, 58.80777, 58.32706, 58.11998, 58.20958, 58.47605, 58.36489, 57.87645, 58.04633, 57.72107, 57.5589,
   57.11262, 56.68233, 56.54629, 56.63598, 56.35991, 56.18672, 56.1907, 55.76076, 55.57286, 55.43147, 55.20095, 54.95099, 54.73327, 54.65941, 54.60447, 54.15799,
   53.86991, 53.77198, 53.09619, 53.50004, 52.84118, 52.74375, 53.06056, 52.495, 52.61733, 52.12836, 52.06409, 51.97138, 51.91923, 51.64159, 51.67957, 51.20639,
   51.18243, 51.77844, 51.10763, 51.25466, 51.24379, 50.49267, 50.42485, 50.41439, 50.40076, 50.13923, 50.17352, 49.76715, 49.38395, 49.74624, 49.74371, 49.79336,
   49.3028, 49.57383, 49.47404, 49.43786, 49.2022, 49.23553, 48.65084, 48.79372, 48.77974, 48.85431, 48.94316, 48.14641, 48.07331, 48.52458, 48.40155, 48.3916,
   48.16335, 47.59979, 47.96381, 47.86708, 47.89902, 47.87781, 47.73151, 47.6699, 47.12384, 47.51171, 47.18845, 47.06718, 46.72088, 46.87818, 46.79927, 46.91889,
   46.5893, 46.38013, 45.93985, 46.26688, 46.15254, 46.16776, 45.98105, 45.95575, 45.85993, 45.76309, 45.24448, 45.62614, 45.13625, 45.10546, 44.96814, 44.51401,
   44.45311, 44.57438, 44.71675, 44.39417, 44.15604, 44.10067, 43.82816, 43.75341, 43.37302, 43.68515, 43.05981, 43.21294, 43.36041, 43.01367, 42.90071, 42.57934,
   43.07119, 42.52307, 42.60594, 42.42053, 42.47851, 42.23896, 41.64171, 41.96369, 41.81885, 41.56237, 41.34943, 41.47816, 41.06138, 40.93918, 41.12431, 40.68024,
   40.52262, 40.69204, 40.15958, 40.61704, 40.45322, 39.88075, 39.41166, 39.88584, 39.31074, 39.32813, 39.99225, 39.06551, 38.996, 38.79589, 38.98038, 38.47202,
   38.64989, 38.50732, 38.10558, 38.44534, 37.81898, 37.87018, 37.94797, 37.97633, 37.87684, 36.90861, 37.29727, 37.28347, 36.80735, 36.45079, 36.64474, 36.04212,
   36.68252, 36.32319, 36.23487, 35.90655, 35.66994, 35.74967, 35.82575, 35.76294, 35.19759, 35.57205, 35.19438, 35.21118, 34.73885, 35.1627, 34.67417, 34.71235,
   34.04763, 34.37458, 34.43271, 34.5272, 33.86361, 34.00168, 33.97115, 33.93235, 33.39586, 33.43355, 33.62979, 33.16258, 33.00493, 32.92153, 33.07942, 32.97352,
   32.67997, 32.53441, 32.50511, 32.27059, 32.52576, 32.39849, 31.67402, 31.90934, 31.79658, 32.15532, 31.79054, 31.22022, 31.23367, 31.47994, 30.88981, 30.9921,
   31.01397, 30.65129, 30.84366, 30.51737, 29.94625, 30.12073, 30.73183, 30.34616, 30.06437, 29.77414, 29.88618, 29.88504, 29.71151, 29.81266, 29.46383, 29.81734,
   29.05318, 28.89669, 29.26243, 28.64745, 29.11421, 28.49644, 28.7333, 28.49996, 28.50013, 28.47671, 28.11722, 27.99139, 28.04527, 28.18425, 27.68118, 27.99869,
   28.08102, 27.69328, 27.3772, 27.23861, 27.69426, 27.24793, 27.2557, 26.98579, 26.80885, 26.92405, 26.5618, 27.02208, 26.8036, 26.76066, 26.51868, 26.71503,
   26.46558, 26.36537, 25.93695, 26.03707, 26.13553, 25.77748, 25.62432, 25.96312, 26.02179, 25.54853, 25.7337, 25.49724, 25.46387, 25.26013, 24.70568, 25.02771,
   24.91522, 24.85416, 24.84434, 24.49484, 24.77938, 24.46468, 24.49183, 24.52778, 24.57038, 24.17742, 23.86156, 23.78677, 23.90652, 23.94996, 23.60297, 23.82408,
   23.81288, 23.26612, 23.20817, 23.56703, 23.22818, 23.76624, 23.19924, 23.47517, 23.02705, 22.84172, 22.72369, 22.83696, 23.24387, 22.97819, 22.36411, 22.6401,
   22.83286, 22.38621, 22.18877, 22.29693, 21.82911, 22.253, 22.17922, 22.04323, 22.16422, 21.76784, 21.7912, 21.52183, 21.62759, 21.37817, 21.40019, 21.32598,
   21.09272, 20.88216, 20.94229, 21.1216, 20.89844, 20.76018, 21.37058, 20.86422, 20.78578, 20.49004, 20.52758, 20.49651, 20.56425, 20.43386, 20.44516, 20.23828,
   20.1493, 20.04471, 19.83883, 19.57923, 20.2005, 19.78794, 20.09861, 19.77051, 19.51119, 19.8008, 19.87927, 19.84124, 19.83373, 19.27412, 19.25579, 19.168,
   19.23845, 18.97001, 18.82432, 19.19115, 18.90905, 18.62083, 18.95699, 18.87135, 19.02891, 18.62382, 18.71235, 18.57965, 18.73883, 18.47579, 18.342, 18.51476,
   17.88543, 18.15405, 18.26587, 17.91511, 18.25706, 18.29119, 17.96192, 17.78439, 17.88529, 17.91251, 17.57912, 17.70359, 17.66086, 17.46236, 17.81702, 17.16833,
   17.00997, 17.09352, 17.3012, 17.47043, 16.96143, 17.29585, 17.20379, 16.97217, 16.73725, 16.81377, 17.02232, 16.73682, 16.84256, 16.7707, 16.64615, 16.4305,
   16.50996, 16.2622, 16.43664, 16.37396, 16.54345, 16.03377, 16.09204, 15.83818, 16.18682, 16.20057, 15.90258, 15.78458, 15.78355, 15.69748, 16.08593, 15.51468,
   15.68019, 15.40803, 15.51011, 15.40745, 15.66441, 15.68369, 15.12436, 15.42475, 15.33803, 15.43469, 15.53865, 15.29857, 15.01702, 15.06344, 14.90625, 14.72658,
   14.72065, 14.83034, 14.84468, 14.7752, 14.8425, 14.83048, 14.2877, 14.76867, 14.63096, 14.47966, 14.44598, 14.38113, 14.60264, 14.13009, 14.21404, 14.4755,
   14.12618, 14.1146, 14.21326, 14.23525, 14.08034, 14.12401, 13.90546, 13.99774, 14.00643, 14.10232, 13.86124, 13.76837, 13.4897, 13.61327, 13.86542, 13.52074,
   13.61261, 13.29221, 13.61578, 13.20692, 13.5914, 13.42942, 13.63399, 13.1362, 12.87851, 13.38025, 12.88554, 13.31376, 12.98467, 12.95883, 12.99403, 13.26105,
   12.87411, 12.84404, 12.67668, 13.07368, 12.9394, 12.41293, 12.54898, 12.68101, 12.82288, 12.41873, 12.43082, 12.43334, 12.44349, 12.74754, 11.92428, 12.33767,
   12.2615, 12.07129, 12.16957, 12.01646, 12.24815, 12.06026, 12.21592, 12.45506, 12.46939, 12.06512, 12.14016, 12.13986, 12.22198, 11.84589, 11.89593, 12.00686,
   11.71503, 11.96554, 11.7607, 11.67234, 11.43527, 11.99338, 11.42723, 11.48254, 11.12872, 11.75907, 11.37588, 11.48653, 11.62952, 11.0845, 11.21585, 11.44224,
   11.35271, 10.91094, 11.20439, 11.2088, 11.03186, 11.14246, 11.3761, 10.87012, 11.06029, 11.14952, 10.71571, 10.79296, 10.66622, 10.72597, 10.99041, 10.80962,
   10.9793, 10.91384, 10.69129, 10.55954, 10.37635, 10.67667, 10.50731, 10.65519, 10.5363, 10.37526, 10.37654, 10.3067, 10.61211, 10.41275, 10.6148, 10.3235,
   10.31581, 10.33674, 9.892769, 10.08933, 9.91609, 10.30802, 9.606758, 10.06963, 10.12154, 10.15265, 10.27422, 9.755713, 9.906036, 9.87787, 9.758842, 9.734113,
   10.00164, 9.736126, 9.624482, 9.902561, 9.608684, 9.673351, 9.33653, 9.93012, 9.732156, 9.778017, 9.640032, 9.441545, 9.755557, 9.168495, 9.532436, 9.578052,
   9.088881, 9.20467, 9.5038, 9.933281, 9.388664, 9.35939, 9.374609, 9.054282, 9.33516, 8.858341, 9.310737, 8.922101, 9.125396, 9.101424, 9.141031, 9.092771,
   8.894567, 8.924823, 9.029765, 8.952717, 8.800264, 8.559171, 8.871496, 8.794533, 8.95967, 8.716129, 8.961925, 8.60095, 8.468814, 8.673041, 8.581281, 8.749688,
   8.876034, 8.990085, 8.719444, 8.297258, 8.542415, 8.43, 8.579976, 8.46637, 8.275653, 8.53662, 8.573058, 8.22409, 8.26003, 8.589101, 8.602266, 8.342841,
   8.156757, 8.448796, 8.258859, 8.069335, 8.176677, 8.084476, 8.334727, 7.710376, 8.226812, 8.31659, 7.831338, 8.119386, 8.040308, 8.04196, 7.90758, 7.782102,
   8.060848, 8.099337, 7.891648, 8.15745, 8.038834, 7.669789, 7.676032, 7.740272, 7.507012, 7.647172, 7.615136, 7.875782, 7.395407, 7.756392, 7.30967, 7.580992,
   7.496027, 7.376087, 7.697052, 7.66715, 7.47971, 7.822247, 7.591387, 7.51035, 7.393333, 7.472725, 7.423198, 7.515701, 7.621067, 7.515612, 7.302813, 7.118831,
   7.405413, 7.284767, 7.542236, 6.809141, 6.940162, 7.168205, 7.217988, 6.89701, 7.205267, 6.532039, 7.1091, 6.753418, 6.738814, 7.196447, 7.070897, 6.802597,
   7.205566, 6.904826, 6.957648, 6.800953, 6.597411, 6.862459, 6.9793, 6.763308, 6.824682, 6.911433, 6.508559, 6.764888, 6.920556, 6.936069, 6.771376, 7.012832,
   6.650367, 7.010423, 6.444646, 6.546553, 6.510563, 6.505978, 6.608932, 6.491166, 6.676912, 6.53671, 6.514734, 6.259072, 6.585507, 6.51593, 6.478987, 6.678503,
   6.461995, 6.344462, 6.65781, 6.326825, 6.49232, 6.161578, 6.567372, 6.500452, 6.38163, 6.030842, 6.310789, 6.521109, 6.147168, 6.190981, 6.19953, 6.388041,
   6.172566, 6.319049, 6.177224, 6.329869, 6.341382, 6.023871, 6.420617, 6.001828, 5.860417, 6.182359, 5.865147, 5.802081, 5.977959, 5.550243, 6.134677, 6.177826,
   5.962042, 5.646509, 5.63651, 6.065279, 5.803324, 5.905904, 5.771737, 5.746524, 5.484432, 6.080742, 5.692823, 5.749191, 5.751098, 5.779973, 5.804028, 5.821847,
   5.38861, 5.980608, 5.33891, 5.802378, 5.812533, 5.344824, 5.997205, 5.645571, 5.715538, 5.14523, 5.447727, 5.203734, 5.282018, 5.279865, 5.633117, 5.619306,
   5.745646, 5.632476, 5.632249, 5.536325, 5.533686, 5.697553, 5.608467, 5.508119, 5.642803, 5.47266, 5.122681, 5.268236, 5.296229, 5.52081, 5.556018, 5.307039,
   5.591066, 5.398253, 5.121105, 5.490287, 5.287851, 5.125205, 5.146595, 5.03979, 5.398277, 5.16396, 5.147724, 5.065497, 4.819199, 5.081813, 5.269998, 4.930254,
   5.19133, 5.071404, 5.312007, 5.200108, 4.980044, 4.849623, 4.890102, 4.899128, 4.554641, 4.850023, 4.81792, 5.10503, 5.135281, 4.845488, 4.966213, 4.72897,
   4.748726, 5.013523, 4.747693, 5.20143, 4.856599, 4.960956, 4.585585, 5.055595, 4.729439, 4.73509, 4.958099, 4.762448, 4.584219, 4.734187, 4.510731, 4.599591,
   4.423069, 4.969324, 4.787779, 4.702155, 4.940829, 4.512391, 4.631745, 4.886494, 4.934373, 4.604094, 4.68974, 4.674051, 4.431643, 4.744937, 4.580728, 4.55257,
   4.786525, 4.858528, 4.858201, 4.716559, 4.524286, 4.474978, 4.462064, 4.599889, 4.410827, 4.657051, 4.199097, 4.610587, 4.16323, 4.353752, 4.223115, 4.228113,
   4.129494, 4.522526, 4.277214, 4.523719, 4.228259, 4.32239, 4.533054, 4.290914, 4.519701, 4.225627, 4.063681, 4.178358, 4.387155, 4.247164, 4.012397, 4.29149,
   4.415446, 3.994717, 4.269618, 4.350441, 4.207451, 4.025541, 4.145314, 4.259452, 4.239951, 4.357209, 4.20474, 3.694694, 3.722499, 4.256755, 4.367486, 4.324432,
   3.905748, 4.258427, 4.268998, 3.66816, 4.123807, 3.937924, 4.079154 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1007,Graph_from_VH_tagFirst_2b1c_H_mass_fy1007,Graph_from_VH_tagFirst_2b1c_H_mass_fex1007,Graph_from_VH_tagFirst_2b1c_H_mass_fey1007);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetMinimum(-855.9358);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetMaximum(8654.803);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1007);
   
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   H_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",1000,0,2000);
   data_mc_ratio__8->SetBinContent(1000,0.9326519);
   data_mc_ratio__8->SetBinContent(1001,1.375486);
   data_mc_ratio__8->SetBinError(1000,0.2492617);
   data_mc_ratio__8->SetBinError(1001,0.01457305);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(6.883546);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,150);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1008[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01526312, 0.007629212,
   0.007668312, 0.007618344, 0.007611981, 0.007610869, 0.007601302, 0.007621296, 0.007607717, 0.007657238, 0.007700504, 0.007624127, 0.007608413, 0.007644722, 0.007749515, 0.007680197, 0.007716024, 0.007770939,
   0.007822341, 0.007877279, 0.007874794, 0.007892206, 0.007896886, 0.007932856, 0.008015486, 0.008016743, 0.008068996, 0.008139044, 0.008197076, 0.008212539, 0.01630577, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2717451 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.6739059);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.326094);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->SetSelected(H_mass_tagFirst_SR_16);
}
