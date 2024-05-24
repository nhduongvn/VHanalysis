#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_16/H_mass_tagFirst_SR_16
//=========  (Fri May 24 11:23:57 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-41.59883,315.7258,41567.23);
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
   st->SetMaximum(37406.34);
   
   TH1F *st_stack_100 = new TH1F("st_stack_100","",1000,0,2000);
   st_stack_100->SetMinimum(0.01);
   st_stack_100->SetMaximum(37406.34);
   st_stack_100->SetDirectory(nullptr);
   st_stack_100->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_100->SetLineColor(ci);
   st_stack_100->SetLineWidth(0);
   st_stack_100->GetXaxis()->SetRange(1,150);
   st_stack_100->GetXaxis()->SetLabelFont(42);
   st_stack_100->GetXaxis()->SetTitleOffset(1);
   st_stack_100->GetXaxis()->SetTitleFont(42);
   st_stack_100->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_100->GetYaxis()->SetLabelFont(42);
   st_stack_100->GetYaxis()->SetLabelSize(0.05);
   st_stack_100->GetYaxis()->SetTitleSize(0.057);
   st_stack_100->GetYaxis()->SetTitleOffset(1.2);
   st_stack_100->GetYaxis()->SetTitleFont(42);
   st_stack_100->GetZaxis()->SetLabelFont(42);
   st_stack_100->GetZaxis()->SetTitleOffset(1);
   st_stack_100->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_100);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8083.862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,16239.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,16384.21);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,16380.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,16472.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,16632.5);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,16686.01);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,16791.55);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,16832.86);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,16726.71);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,16725.68);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,16759.4);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,16692.8);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,16454.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,16685.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,16673.78);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,16555.49);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,16481.14);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,16389.51);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,16333.89);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,16197.37);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,16188.21);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,16212.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,16089.31);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,15914.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,15797.45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,15793.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,15429.06);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,15364.49);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,15235.85);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,7611.306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,46.38173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,27627.96);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5289159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.921142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.026888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.996159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,16.99593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,23.91054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,31.18044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,38.29849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,45.55921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,52.06292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,58.42808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,63.91667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,68.65184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,72.56979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,76.29209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,78.7002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,80.94678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,82.11044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,83.70726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,84.60747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,85.3531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,85.9675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,86.03826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,85.97001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,86.91774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,86.52167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,87.45452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,87.15618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,87.58735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,87.79751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,87.45045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,87.66989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,87.33632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,87.5987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,87.17948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,86.97062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,86.45363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,85.81529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,85.40804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,85.15735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,85.2224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,84.89552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,84.65999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,84.79872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,84.65752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,84.65575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,84.64852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,84.26006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,84.22125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,84.14977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,84.07986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,83.38719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,83.93643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,83.78156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,83.44334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,83.19175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,82.95796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,82.69595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,82.42539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,82.35931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,82.28904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,81.958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,81.55277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,81.18965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,81.06919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,80.38285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,80.15366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,79.75835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,79.61265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,79.10052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,78.82809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,78.97423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,78.04219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,77.90654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,77.29284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,77.08613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,76.44675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,76.46541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,76.48968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,75.65342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,75.38517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,74.97849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,74.51944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,74.50268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,73.84425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,73.61167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,73.14749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,72.7401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,72.81399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,72.34685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,72.22257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,71.82837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,71.43424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,70.90751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,70.50921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,70.18724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,70.2389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,69.76998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,69.52649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,68.99172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,68.87642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,68.12104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,68.18604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,68.21774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,67.94028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,67.73258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,67.23193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,67.15411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,66.76971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,66.52922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,65.96588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,65.97743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,65.73938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,66.07658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,65.41285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,64.59861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,64.33962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,64.58413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,64.52867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,64.30933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,64.02779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,63.22128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,63.3656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,63.56805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.95522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.87331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.63227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.4492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,62.23745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,61.9239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.70445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.30253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.14151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.67081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,60.67944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.4687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,59.98161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,59.93285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.68212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,59.82235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.6606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.04578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.00541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.09097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,58.8664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.21643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.31591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,57.84593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.74234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,57.61783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.18462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.16798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,56.77036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,56.81115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,56.74739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,56.19931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,56.55607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,56.01123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,55.87743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,55.48146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,55.64396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,55.221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,55.04661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,55.22256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,54.87505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,54.45655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,54.206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,54.58555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,54.33943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,54.18314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,53.7286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,53.77494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,53.73323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,53.35622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,52.98528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,53.06356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,52.93747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,52.6618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,52.31934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,51.90609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,52.0624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,52.08396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,51.86406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,51.71724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,51.35514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,50.99769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,51.55142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,51.32293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,50.84637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,50.62054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,50.60844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,50.34726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,50.12011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,50.51849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,49.76766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,49.69396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,49.73393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,49.48562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,49.41026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,49.42336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,48.9904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,48.7205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,48.71137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,48.55919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,48.31662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,48.14642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,48.49144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,48.25636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,47.36049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,47.5066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,47.4987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,47.16147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,46.91968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,46.76409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,46.44241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,46.85542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,46.76239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,46.67911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,46.20476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,46.08741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,46.25287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,45.90324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,45.8837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,45.44164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,45.83144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,45.27446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,45.48753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,44.76672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,44.71409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,44.52627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,44.7865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,44.31752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,44.28468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,44.31686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,44.36457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,43.92372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,43.74144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.00542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,43.69669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,43.76663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,43.47017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,43.37524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.09558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.13526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.08228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,42.68552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,42.89464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,42.40484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,42.49975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.22329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.45391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.15108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,41.80719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.65931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,41.51023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.7002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.39575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.38674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,40.75331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,40.83379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,40.79473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.45241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,40.36464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.5184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.54579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.35171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.24536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,39.76386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,39.93629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,39.53281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,39.87893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,39.67132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.30691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.33776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.37943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,38.94399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.03918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.81054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.09477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.48153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.42024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.57547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.25796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.13267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,37.75817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.34667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.56556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.99432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.41203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.64791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.53948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.17448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.13406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,37.03412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.14065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,36.91556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.65365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.77774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.78033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.68044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.43689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.38963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,36.42897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,36.00603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,36.01526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.92869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.73218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.45088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.94398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,35.24751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.85686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.56845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,35.19041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,35.27379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,35.12553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.89068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.77959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,34.62606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.44963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.80198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,34.43307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,34.6072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,34.38301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,34.13337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.95193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,34.00604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,34.01799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.79956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.65224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.67571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,33.33145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,33.45011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,33.43602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,33.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.77333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,33.13357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,33.08956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.98188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,32.49924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,32.61326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,32.55664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,32.5474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,32.19187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,32.30148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,32.37971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.79272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,32.08681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,31.87929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,32.24437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,31.67855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,31.8853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,31.70822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,31.40545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,31.42295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,31.06514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,31.55566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,31.22395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,31.0079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.93469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,31.07748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,30.79847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,30.29197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,30.87469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,30.31786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,30.36481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,30.50008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,30.32519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,30.43887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,30.17635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,30.05246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,30.13383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,29.98165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,29.71535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,30.12162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,29.90022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,29.6374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,29.27821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,29.70566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,29.15102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,29.14143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,28.90479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,29.4992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,29.10671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,28.59449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,28.82906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,28.77487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,28.93292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,28.79301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,28.60172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,28.70087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,28.77086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,28.27453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,28.33714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,28.13708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,27.87882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,28.16481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,28.08011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,27.74217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,28.01864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,27.62213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,27.65864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,27.65088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,27.61628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,27.70598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,27.18331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,27.39042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,27.63131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,27.24744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,26.97255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,26.99244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,26.95912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,27.06578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,26.64401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,26.7551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,26.66);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,26.78788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,26.33318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,26.74276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,26.72012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,26.33166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,26.52525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,26.09666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,26.34289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,26.2168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,26.09467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,26.28767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,25.90745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,26.15014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,25.83644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,25.58392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,25.82467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,25.60376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,25.79951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,25.43325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,25.26421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,25.2721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,25.22758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,25.5271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,25.31961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,24.777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,24.50183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,25.01773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.12142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,24.80887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,24.80692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,24.47802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,24.86918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,24.37879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,24.45729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,24.4349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,24.47025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,24.58898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,24.30111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,24.32468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,24.15722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,24.28786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,23.79708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,23.95924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,23.94305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.18649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,23.43775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.01664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,23.54084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,23.38353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.91103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,23.08266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,23.21415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,23.24256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,23.13917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,23.15769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,22.9292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,22.96364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,23.14518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,23.04333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,22.71375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,22.95419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,22.57854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,22.86353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,22.67779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,22.45924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,22.6657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,22.25211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,22.14475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,22.115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,22.10507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,22.00564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,21.84738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.17721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,21.94805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,22.00852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.14286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.07979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.13208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,21.51609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,21.83724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,21.82909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,21.99503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,21.52869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,21.10235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,21.5971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,21.02773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.23357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,21.3155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.19774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.43411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,20.92992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,20.95779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,20.94188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,20.6634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,20.646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,20.63404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,20.80021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.76393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,20.49885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,20.53582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,20.4998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.29116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,20.49066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.60965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.33983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.39825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,19.87002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,20.06762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.16367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.27429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.30513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,19.89462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.05178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,19.72262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,19.98148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.90863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,19.289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,19.94104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,19.89445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.86638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.18253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,19.73774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.65414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.36793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.25919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.41865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,19.31902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,19.03188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.11389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,19.12882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,18.77693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,18.95446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,18.988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,18.38482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.88352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,18.76295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,18.3807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.63264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,18.43098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.59006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,18.29581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.75741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.67063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.45147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.32958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.2568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,18.34794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,18.31668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,17.91088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,18.3126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,18.12283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,17.84432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,18.05059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.80736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.97748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,17.66458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.70828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.77765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,17.81107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.36697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.77377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.97193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.62477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.61111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.45258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.3352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.37983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.49244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.14415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,16.91321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,17.17335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,17.24359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,17.19847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.26515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,16.75117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.91626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,17.04075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,16.97604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,16.72989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.6533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.75721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.84203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.54403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.68364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.64982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.46137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.41303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.28645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.17385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.50165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,16.25602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,16.0714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.32035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,16.45543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,15.85835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,16.37596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,15.75458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,15.95167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,16.08946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,16.13824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,15.96264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,16.09147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.62806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.67936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.60032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.50946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.75329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.63739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,15.61572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,15.79843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.5142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.57384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,15.14763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.62619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.29481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,15.27734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.0001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.81867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,14.90541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,14.88836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,15.41223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,14.92164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,15.1681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,15.21953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,15.03989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,15.14907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.93526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,15.04656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.5106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.61439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.53951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.59526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.58529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.4757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,15.24903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.73762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.52932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.43489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,14.42801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,14.2287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,14.23995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,14.57971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,14.33473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,14.19173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.01476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,14.16277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,14.03769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,14.01332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.19153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,14.14155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,14.02061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.65131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.55939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,14.03009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.63816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.95138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.40718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.72987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.34119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,13.63956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.5332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.72604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.82474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.62283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,14.15292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.80655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,13.28797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,13.16188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.19538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,13.48288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.38326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,13.32458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,13.63351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.28931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,13.23223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,13.15927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,13.2742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,13.33848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.89166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,13.07359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,12.89469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.99327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.8339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.81389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,12.78517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.98825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.86396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,13.03499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,12.99866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.64397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.71785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,13.18707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.44213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.93283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.63351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,12.82885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.73891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.4374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,12.66941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.34336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,12.20751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.14594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,12.55061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,12.21995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.33413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,12.2529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,12.44115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,11.99124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,12.33398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,12.14553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,12.01669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.03739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,11.8882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,12.2432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,12.07251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,12.26412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,12.08146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.84747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.95016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.7431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,11.90184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.6693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,12.03827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.66466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.68488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,11.62665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.83176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.79487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.87048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.46304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.47148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.62504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,11.48823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,11.33785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.08641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,10.97967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,11.55714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,11.65201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,11.11492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,11.00596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.89464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,11.16153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,11.09787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,11.61188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.99951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,10.8258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.94139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,10.97904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,10.98915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,11.18289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,11.07912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.56326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.6916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.95772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,11.06704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,11.17315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.67133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.91195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,11.05919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.77324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.57767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.95192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.69327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.55604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.69852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.68836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,10.52791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.63972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.87982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,10.60615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.38375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,10.37726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,10.49024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.11138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,10.66886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.14724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.28466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,10.53239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.06327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,10.22695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,10.42322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,10.53559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,10.51171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,10.08134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,10.42163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.960743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,10.22213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.938869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,10.07533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,10.09288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,10.06228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,10.05325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.939908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.886865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.751003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,10.23453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.942452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.9442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.722547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.605731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.62902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.801918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.445451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.842861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.411212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.890467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.526688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,9.616705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.471317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.649271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.587534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.447806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.623504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.090967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.673434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.687305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.350264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.316112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,9.448061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.214759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,9.478667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.370658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,9.026689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,9.611014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,9.107725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,9.57793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,8.812573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,8.838642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,8.969784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,9.09675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,9.197182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,9.138807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,9.096937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.912205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.820586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.971765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,9.305039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.981304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,9.355602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.894649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,8.878925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.927471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.527639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,9.225207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.720787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.739897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.72342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.511572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.849832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.778134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.884934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.836079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.892193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.629824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.608203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.392268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.482855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.394753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.501737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.630319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.490559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,8.590939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.831797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,8.448609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,8.837343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,8.59194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,8.414484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,8.135676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.724064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.93374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.423331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,8.361379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,8.23532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,8.515241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,8.05462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.238084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,8.099294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,8.372602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,8.006814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.479739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,8.014461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,8.107669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,8.056949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,8.10514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,8.06196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.924693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,8.229929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,8.347717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.995166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,8.107813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.972253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,8.098497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.83334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,8.121159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.813362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,8.061749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.648495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.94122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.673748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.384071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.789881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.433227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.684897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.830475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.840578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.509566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,7.57555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.564018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.588261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.843359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.320365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.66974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.659722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.464762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.494749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.404231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.438008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.903725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.354324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.572301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.633894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.796603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.265924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,7.128318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,7.468019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,7.686331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,7.078596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.458165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,7.216261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,7.520528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,7.256589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,7.215452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,7.14012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.129717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,7.218228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,7.070253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,6.984421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,7.228712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.43648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.113091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.151454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.941064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.880033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,7.227212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,7.117296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,7.014096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.675409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,7.332826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.981823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,7.068651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.80697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.829145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,7.135233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.681219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,6.756238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.940503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,7.297144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.844586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,7.087412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,6.558014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.826847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,7.169955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.814834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.846959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,7.156809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.831104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.577166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.919597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.823696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.41508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.680985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.657534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.171998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,107.4545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(7587687);

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
   
   TH1D *VH_tagFirst_H_mass__199 = new TH1D("VH_tagFirst_H_mass__199","",1000,0,2000);
   VH_tagFirst_H_mass__199->SetBinContent(1000,72);
   VH_tagFirst_H_mass__199->SetBinContent(1001,40515);
   VH_tagFirst_H_mass__199->SetEntries(3740208);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__199->SetLineColor(ci);
   VH_tagFirst_H_mass__199->SetLineWidth(2);
   VH_tagFirst_H_mass__199->SetMarkerStyle(20);
   VH_tagFirst_H_mass__199->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__199->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__199->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__199->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__199->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__199->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__199->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1199[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1199[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8083.862, 16239.44,
   16384.21, 16380.54, 16472.1, 16632.5, 16686.01, 16791.55, 16832.86, 16726.71, 16725.68, 16759.4, 16692.8, 16454.41, 16685.54, 16673.78, 16555.49, 16481.14,
   16389.51, 16333.89, 16197.37, 16188.21, 16212.02, 16089.31, 15914.28, 15797.45, 15793.58, 15429.06, 15364.49, 15235.85, 7611.306, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 46.38173 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1199[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1199[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5289159, 0.921142, 4.026888, 9.996159, 16.99593, 23.91054, 31.18044, 38.29849,
   45.55921, 52.06292, 58.42808, 63.91667, 68.65184, 72.56979, 76.29209, 78.7002, 80.94678, 82.11044, 83.70726, 84.60747, 85.3531, 85.9675, 86.03826, 85.97001,
   86.91774, 86.52167, 87.45452, 87.15618, 87.58735, 87.79751, 87.45045, 87.66989, 87.33632, 87.5987, 87.17948, 86.97062, 86.45363, 85.81529, 85.40804, 85.15735,
   85.2224, 84.89552, 84.65999, 84.79872, 84.65752, 84.65575, 84.64852, 84.26006, 84.22125, 84.14977, 84.07986, 83.38719, 83.93643, 83.78156, 83.44334, 83.19175,
   82.95796, 82.69595, 82.42539, 82.35931, 82.28904, 81.958, 81.55277, 81.18965, 81.06919, 80.38285, 80.15366, 79.75835, 79.61265, 79.10052, 78.82809, 78.97423,
   78.04219, 77.90654, 77.29284, 77.08613, 76.44675, 76.46541, 76.48968, 75.65342, 75.38517, 74.97849, 74.51944, 74.50268, 73.84425, 73.61167, 73.14749, 72.7401,
   72.81399, 72.34685, 72.22257, 71.82837, 71.43424, 70.90751, 70.50921, 70.18724, 70.2389, 69.76998, 69.52649, 68.99172, 68.87642, 68.12104, 68.18604, 68.21774,
   67.94028, 67.73258, 67.23193, 67.15411, 66.76971, 66.52922, 65.96588, 65.97743, 65.73938, 66.07658, 65.41285, 64.59861, 64.33962, 64.58413, 64.52867, 64.30933,
   64.02779, 63.22128, 63.3656, 63.56805, 62.95522, 62.87331, 62.63227, 62.4492, 62.23745, 61.9239, 61.70445, 61.30253, 61.14151, 61.174, 60.67081, 60.67944,
   60.4687, 59.98161, 59.93285, 59.68212, 59.82235, 59.6606, 59.04578, 59.00541, 59.09097, 58.8664, 58.21643, 58.31591, 57.84593, 57.74234, 57.61783, 57.18462,
   57.16798, 56.77036, 56.81115, 56.74739, 56.19931, 56.55607, 56.01123, 55.87743, 55.48146, 55.64396, 55.221, 55.04661, 55.22256, 54.87505, 54.45655, 54.206,
   54.58555, 54.33943, 54.18314, 53.7286, 53.77494, 53.73323, 53.35622, 52.98528, 53.06356, 52.93747, 52.6618, 52.31934, 51.90609, 52.0624, 52.08396, 51.86406,
   51.71724, 51.35514, 50.99769, 51.55142, 51.32293, 50.84637, 50.62054, 50.60844, 50.34726, 50.12011, 50.51849, 49.76766, 49.69396, 49.73393, 49.48562, 49.41026,
   49.42336, 48.9904, 48.7205, 48.71137, 48.55919, 48.31662, 48.14642, 48.49144, 48.25636, 47.36049, 47.5066, 47.4987, 47.16147, 46.91968, 46.76409, 46.44241,
   46.85542, 46.76239, 46.67911, 46.20476, 46.08741, 46.25287, 45.90324, 45.8837, 45.44164, 45.83144, 45.27446, 45.48753, 44.76672, 44.71409, 44.52627, 44.7865,
   44.31752, 44.28468, 44.31686, 44.36457, 43.92372, 43.74144, 44.00542, 43.69669, 43.76663, 43.47017, 43.37524, 43.09558, 43.13526, 43.08228, 42.68552, 42.89464,
   42.40484, 42.49975, 42.22329, 42.45391, 42.15108, 41.80719, 41.65931, 41.51023, 41.7002, 41.39575, 41.38674, 40.75331, 40.83379, 40.79473, 40.45241, 40.36464,
   40.5184, 40.54579, 40.35171, 40.24536, 39.76386, 39.93629, 39.53281, 39.87893, 39.67132, 39.30691, 39.33776, 39.37943, 38.94399, 39.03918, 38.81054, 39.09477,
   38.48153, 38.42024, 38.57547, 38.25796, 38.13267, 37.75817, 38.34667, 37.56556, 37.99432, 37.41203, 37.64791, 37.53948, 37.17448, 37.13406, 37.03412, 37.14065,
   36.91556, 36.65365, 36.77774, 36.78033, 36.68044, 36.43689, 36.38963, 36.42897, 36.00603, 36.01526, 35.92869, 35.73218, 35.45088, 35.94398, 35.24751, 35.85686,
   35.56845, 35.19041, 35.27379, 35.12553, 34.89068, 34.77959, 34.62606, 34.44963, 34.80198, 34.43307, 34.6072, 34.38301, 34.13337, 33.95193, 34.00604, 34.01799,
   33.79956, 33.65224, 33.67571, 33.33145, 33.45011, 33.43602, 33.54, 32.77333, 33.13357, 33.08956, 32.98188, 32.49924, 32.61326, 32.55664, 32.5474, 32.19187,
   32.30148, 32.37971, 31.79272, 32.08681, 31.87929, 32.24437, 31.67855, 31.8853, 31.70822, 31.40545, 31.42295, 31.06514, 31.55566, 31.22395, 31.0079, 30.93469,
   31.07748, 30.79847, 30.29197, 30.87469, 30.31786, 30.36481, 30.50008, 30.32519, 30.43887, 30.17635, 30.05246, 30.13383, 29.98165, 29.71535, 30.12162, 29.90022,
   29.6374, 29.27821, 29.70566, 29.15102, 29.14143, 28.90479, 29.4992, 29.10671, 28.59449, 28.82906, 28.77487, 28.93292, 28.79301, 28.60172, 28.70087, 28.77086,
   28.27453, 28.33714, 28.13708, 27.87882, 28.16481, 28.08011, 27.74217, 28.01864, 27.62213, 27.65864, 27.65088, 27.61628, 27.70598, 27.18331, 27.39042, 27.63131,
   27.24744, 26.97255, 26.99244, 26.95912, 27.06578, 26.64401, 26.7551, 26.66, 26.78788, 26.33318, 26.74276, 26.72012, 26.33166, 26.52525, 26.09666, 26.34289,
   26.2168, 26.09467, 26.28767, 25.90745, 26.15014, 25.83644, 25.58392, 25.82467, 25.60376, 25.79951, 25.43325, 25.26421, 25.2721, 25.22758, 25.5271, 25.31961,
   24.777, 24.50183, 25.01773, 25.12142, 24.80887, 24.80692, 24.47802, 24.86918, 24.37879, 24.45729, 24.4349, 24.47025, 24.58898, 24.30111, 24.32468, 24.15722,
   24.28786, 23.79708, 23.95924, 23.94305, 24.18649, 23.43775, 24.01664, 23.54084, 23.38353, 23.91103, 23.08266, 23.21415, 23.24256, 23.13917, 23.15769, 22.9292,
   22.96364, 23.14518, 23.04333, 22.71375, 22.95419, 22.57854, 22.86353, 22.67779, 22.45924, 22.6657, 22.25211, 22.14475, 22.115, 22.10507, 22.00564, 21.84738,
   22.17721, 21.94805, 22.00852, 22.14286, 22.07979, 22.13208, 21.51609, 21.83724, 21.82909, 21.99503, 21.52869, 21.10235, 21.5971, 21.02773, 21.23357, 21.3155,
   21.19774, 21.304, 21.43411, 20.92992, 20.95779, 20.94188, 20.6634, 20.646, 20.63404, 20.80021, 20.76393, 20.49885, 20.53582, 20.4998, 20.29116, 20.49066,
   20.60965, 20.33983, 20.39825, 19.87002, 20.06762, 20.16367, 20.27429, 20.30513, 19.89462, 20.05178, 19.72262, 19.98148, 19.90863, 19.289, 19.94104, 19.89445,
   19.86638, 19.18253, 19.73774, 19.65414, 19.36793, 19.25919, 19.41865, 19.31902, 19.03188, 19.11389, 19.12882, 18.77693, 18.95446, 18.988, 18.38482, 18.88352,
   18.76295, 18.3807, 18.63264, 18.43098, 18.59006, 18.29581, 18.75741, 18.67063, 18.45147, 18.32958, 18.2568, 18.34794, 18.31668, 17.91088, 18.3126, 18.12283,
   17.84432, 18.05059, 17.80736, 17.97748, 17.66458, 17.70828, 17.77765, 17.81107, 17.36697, 17.77377, 17.97193, 17.62477, 17.61111, 17.45258, 17.3352, 17.37983,
   17.49244, 17.14415, 16.91321, 17.17335, 17.24359, 17.19847, 17.26515, 16.75117, 16.91626, 17.04075, 16.97604, 16.72989, 16.6533, 16.75721, 16.84203, 16.54403,
   16.68364, 16.64982, 16.46137, 16.41303, 16.28645, 16.17385, 16.50165, 16.25602, 16.0714, 16.32035, 16.45543, 15.85835, 16.37596, 15.75458, 15.95167, 16.08946,
   16.13824, 15.96264, 16.09147, 15.62806, 15.67936, 15.60032, 15.50946, 15.75329, 15.63739, 15.61572, 15.79843, 15.5142, 15.57384, 15.14763, 15.62619, 15.29481,
   15.27734, 15.0001, 14.81867, 14.90541, 14.88836, 15.41223, 14.92164, 15.1681, 15.21953, 15.03989, 15.14907, 14.93526, 15.04656, 14.5106, 14.61439, 14.53951,
   14.59526, 14.58529, 14.4757, 15.24903, 14.73762, 14.52932, 14.43489, 14.42801, 14.2287, 14.23995, 14.57971, 14.33473, 14.19173, 14.01476, 14.16277, 14.03769,
   14.01332, 14.19153, 14.14155, 14.02061, 13.65131, 13.55939, 14.03009, 13.63816, 13.95138, 13.40718, 13.72987, 13.34119, 13.63956, 13.5332, 13.72604, 13.82474,
   13.62283, 14.15292, 13.80655, 13.28797, 13.16188, 13.19538, 13.48288, 13.38326, 13.32458, 13.63351, 13.28931, 13.23223, 13.15927, 13.2742, 13.33848, 12.89166,
   13.07359, 12.89469, 12.99327, 12.8339, 12.81389, 12.78517, 12.98825, 12.86396, 13.03499, 12.99866, 12.64397, 12.71785, 13.18707, 12.44213, 12.93283, 12.63351,
   12.82885, 12.73891, 12.4374, 12.66941, 12.34336, 12.20751, 12.14594, 12.55061, 12.21995, 12.33413, 12.2529, 12.44115, 11.99124, 12.33398, 12.14553, 12.01669,
   12.03739, 11.8882, 12.2432, 11.998, 12.07251, 12.26412, 12.08146, 11.84747, 11.95016, 11.7431, 11.90184, 11.6693, 12.03827, 11.66466, 11.68488, 11.62665,
   11.83176, 11.79487, 11.87048, 11.46304, 11.47148, 11.62504, 11.48823, 11.33785, 11.08641, 10.97967, 11.55714, 11.65201, 11.11492, 11.00596, 10.89464, 11.16153,
   11.09787, 11.61188, 10.99951, 10.8258, 10.94139, 10.97904, 10.98915, 11.18289, 11.07912, 10.56326, 10.6916, 10.95772, 11.06704, 11.17315, 10.67133, 10.91195,
   11.05919, 10.77324, 10.57767, 10.95192, 10.69327, 10.55604, 10.69852, 10.68836, 10.52791, 10.63972, 10.87982, 10.60615, 10.38375, 10.37726, 10.49024, 10.11138,
   10.66886, 10.14724, 10.28466, 10.53239, 10.06327, 10.22695, 10.42322, 10.53559, 10.51171, 10.08134, 10.42163, 9.960743, 10.22213, 9.938869, 10.07533, 10.09288,
   10.06228, 10.05325, 9.939908, 9.886865, 9.751003, 10.23453, 9.942452, 9.9442, 9.722547, 9.605731, 9.62902, 9.801918, 9.445451, 9.842861, 9.411212, 9.890467,
   9.526688, 9.616705, 9.471317, 9.649271, 9.587534, 9.447806, 9.623504, 9.090967, 9.673434, 9.687305, 9.350264, 9.316112, 9.448061, 9.214759, 9.478667, 9.370658,
   9.026689, 9.611014, 9.107725, 9.57793, 8.812573, 8.838642, 8.969784, 9.09675, 9.197182, 9.138807, 9.096937, 8.912205, 8.820586, 8.971765, 9.305039, 8.981304,
   9.355602, 8.894649, 8.878925, 8.927471, 8.527639, 9.225207, 8.720787, 8.739897, 8.72342, 8.511572, 8.849832, 8.778134, 8.884934, 8.836079, 8.892193, 8.629824,
   8.608203, 8.392268, 8.482855, 8.394753, 8.501737, 8.630319, 8.490559, 8.590939, 8.831797, 8.448609, 8.837343, 8.59194, 8.414484, 8.135676, 8.724064, 7.93374,
   8.423331, 8.361379, 8.23532, 8.515241, 8.05462, 8.238084, 8.099294, 8.372602, 8.006814, 8.479739, 8.014461, 8.107669, 8.056949, 8.10514, 8.06196, 7.924693,
   8.229929, 8.347717, 7.995166, 8.107813, 7.972253, 8.098497, 7.83334, 8.121159, 7.813362, 8.061749, 7.648495, 7.94122, 7.673748, 7.384071, 7.789881, 7.433227,
   7.684897, 7.830475, 7.840578, 7.509566, 7.57555, 7.564018, 7.588261, 7.843359, 7.320365, 7.66974, 7.659722, 7.464762, 7.494749, 7.404231, 7.438008, 7.903725,
   7.354324, 7.572301, 7.633894, 7.796603, 7.265924, 7.128318, 7.468019, 7.686331, 7.078596, 7.458165, 7.216261, 7.520528, 7.256589, 7.215452, 7.14012, 7.129717,
   7.218228, 7.070253, 6.984421, 7.228712, 7.43648, 7.113091, 7.151454, 6.941064, 6.880033, 7.227212, 7.117296, 7.014096, 6.675409, 7.332826, 6.981823, 7.068651,
   6.80697, 6.829145, 7.135233, 6.681219, 6.756238, 6.940503, 7.297144, 6.844586, 7.087412, 6.558014, 6.826847, 7.169955, 6.814834, 6.846959, 7.156809, 6.831104,
   6.577166, 6.919597, 6.823696, 6.41508, 6.680985, 6.657534, 6.171998 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1199,Graph_from_VH_tagFirst_2b1c_H_mass_fy1199,Graph_from_VH_tagFirst_2b1c_H_mass_fex1199,Graph_from_VH_tagFirst_2b1c_H_mass_fey1199);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetMinimum(-1788.328);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetMaximum(18618.03);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1199);
   
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
   
   TH1D *data_mc_ratio__200 = new TH1D("data_mc_ratio__200","",1000,0,2000);
   data_mc_ratio__200->SetBinContent(1000,1.552335);
   data_mc_ratio__200->SetBinContent(1001,1.466449);
   data_mc_ratio__200->SetBinError(1000,0.1829445);
   data_mc_ratio__200->SetBinError(1001,0.009252488);
   data_mc_ratio__200->SetMinimum(0.4);
   data_mc_ratio__200->SetMaximum(1.6);
   data_mc_ratio__200->SetEntries(31.64917);
   data_mc_ratio__200->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__200->SetLineColor(ci);
   data_mc_ratio__200->SetLineWidth(2);
   data_mc_ratio__200->SetMarkerStyle(20);
   data_mc_ratio__200->SetMarkerSize(1.2);
   data_mc_ratio__200->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__200->GetXaxis()->SetRange(1,150);
   data_mc_ratio__200->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__200->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__200->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__200->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__200->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__200->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__200->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__200->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__200->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__200->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__200->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__200->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__200->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__200->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1200[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1200[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1200[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1200[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01056525, 0.00524386,
   0.005201495, 0.005182706, 0.005139599, 0.005098375, 0.005073563, 0.005041569, 0.005028768, 0.005037456, 0.005035446, 0.005021049, 0.005036894, 0.005067771, 0.005030488, 0.005024749, 0.005040221, 0.005047695,
   0.005061651, 0.005062844, 0.005088813, 0.00508761, 0.005075805, 0.005093942, 0.005124502, 0.005139414, 0.005133048, 0.005209834, 0.005216814, 0.005234913, 0.01045979, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1330696 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1200,Graph_from_mc_statistical_error_fy1200,Graph_from_mc_statistical_error_fex1200,Graph_from_mc_statistical_error_fey1200);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1200 = new TH1F("Graph_Graph_from_mc_statistical_error1200","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1200->SetMinimum(0.8403165);
   Graph_Graph_from_mc_statistical_error1200->SetMaximum(1.159684);
   Graph_Graph_from_mc_statistical_error1200->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1200->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1200->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1200->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1200->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1200);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->SetSelected(H_mass_tagFirst_SR_16);
}
