#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_SR_18()
{
//=========Macro generated from canvas: H_mass_DHZfirst_SR_18/H_mass_DHZfirst_SR_18
//=========  (Fri May 24 11:23:55 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_SR_18 = new TCanvas("H_mass_DHZfirst_SR_18", "H_mass_DHZfirst_SR_18",0,0,600,600);
   H_mass_DHZfirst_SR_18->SetHighLightColor(2);
   H_mass_DHZfirst_SR_18->Range(0,0,1,1);
   H_mass_DHZfirst_SR_18->SetFillColor(0);
   H_mass_DHZfirst_SR_18->SetFillStyle(4000);
   H_mass_DHZfirst_SR_18->SetBorderMode(0);
   H_mass_DHZfirst_SR_18->SetBorderSize(2);
   H_mass_DHZfirst_SR_18->SetFrameFillStyle(1000);
   H_mass_DHZfirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-4.752966,315.7258,4758.213);
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
   st->SetMaximum(4281.917);
   
   TH1F *st_stack_68 = new TH1F("st_stack_68","",1000,0,2000);
   st_stack_68->SetMinimum(0.01);
   st_stack_68->SetMaximum(4281.917);
   st_stack_68->SetDirectory(nullptr);
   st_stack_68->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_68->SetLineColor(ci);
   st_stack_68->SetLineWidth(0);
   st_stack_68->GetXaxis()->SetRange(1,150);
   st_stack_68->GetXaxis()->SetLabelFont(42);
   st_stack_68->GetXaxis()->SetTitleOffset(1);
   st_stack_68->GetXaxis()->SetTitleFont(42);
   st_stack_68->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_68->GetYaxis()->SetLabelFont(42);
   st_stack_68->GetYaxis()->SetLabelSize(0.05);
   st_stack_68->GetYaxis()->SetTitleSize(0.057);
   st_stack_68->GetYaxis()->SetTitleOffset(1.2);
   st_stack_68->GetYaxis()->SetTitleFont(42);
   st_stack_68->GetZaxis()->SetLabelFont(42);
   st_stack_68->GetZaxis()->SetTitleOffset(1);
   st_stack_68->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_68);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,955.1077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(49,1926.862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(50,1842.661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(51,1822.074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(52,1865.951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(53,1802.171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(54,1785.619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(55,1746.315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(56,1717.688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(57,1717.473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(58,1734.561);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(59,1684.989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(60,1692.429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(61,1686.032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(62,1645.828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(63,1594.732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(64,1605.723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(65,1594.551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(66,1606.347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(67,1550.626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(68,1546.559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(69,1543.716);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(70,1505.964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(71,1524.31);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(72,1466.199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(73,1479.186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(74,1469.6);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(75,1451.446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(76,1467.054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(77,1466.451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,721.0085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,14.3333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,5614.983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(6,0.07869313);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(9,0.0201057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(10,0.07298411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(11,0.01603276);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(12,0.03085925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.02528186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.04659406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,0.315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,0.5526157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,0.5670537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,0.9946859);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,1.980056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,2.990857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,4.224341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,5.617257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,7.713156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,9.194884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,11.26014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,14.91721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,15.80149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,17.63648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,19.10273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,20.91697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,22.57469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,23.56829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,24.74086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,26.05945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,26.33124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,27.06163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,28.07401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,28.52938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,28.69474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,30.35598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,31.28894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,29.85078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,29.50656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,29.64456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,29.36111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,28.92323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,29.24606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,28.4838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,28.38522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,27.82104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,27.25634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,27.84234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,26.97312);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,26.84654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,26.56724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,26.32012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,26.58608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,26.3709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,25.94478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,26.13139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,25.81966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,25.76887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,25.39367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,25.79021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,25.46168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,25.25548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,24.99696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,24.94334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,25.63115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,25.00773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,24.47613);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,24.689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,25.04749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,24.02102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,24.11916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,23.95695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,23.81299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,23.79756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,23.82873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,23.29682);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,23.66088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,23.48233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,23.37825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,23.11734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,22.88468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,24.42587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,22.81425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,22.91103);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,22.66949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,22.47318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,22.62614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,22.75237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,22.55637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,22.1535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,21.944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,21.83889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,22.045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,21.76448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,21.77209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,22.08051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,21.90105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,21.5277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,21.37527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,21.64955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,21.42485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,21.31657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,21.48181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,20.87956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,20.93721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,20.71851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,20.58103);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,20.73365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,20.79575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,20.57372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,21.25794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,20.55411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,20.43382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,20.50586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,20.35092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,20.50976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,20.12711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,20.53843);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,19.84197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,21.41311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,20.09448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,20.29424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,19.57286);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,19.82522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,19.91351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,19.62483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,19.90391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,19.58663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,19.58488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,19.38408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,19.23639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,19.35499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,19.44823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,19.51201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,19.71265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,19.15855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,19.7715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,19.36141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,19.04652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,18.89069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,18.89055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,18.65535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,19.16798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,18.89042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,18.52012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,19.00854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,18.62351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,18.68887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,18.45872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,18.38842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,18.41841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,18.27537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,18.41156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,18.2078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,18.45342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,18.34523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,17.93714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,18.01837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,18.25692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,17.82385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,18.75476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,18.26615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,18.006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,18.14447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,17.86719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,17.34024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,17.73042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,18.0991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,17.90334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,17.7139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,17.64614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,18.18626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,17.68655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,17.61421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,18.02897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,17.85217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,17.41582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,17.30377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,17.37435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,17.49523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,17.26601);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,17.19498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,17.22255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,17.197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,17.23241);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,17.02648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,17.31775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,16.96469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,16.86468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,17.18539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,16.85158);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,17.13625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,17.05392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,16.62519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,16.81654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,16.95247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,16.49574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,16.63323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,16.53743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,16.73359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,16.57448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,20.04994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,16.40334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,16.88557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,16.31002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,16.56274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,16.30829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,16.54994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,16.35605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,16.4981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,16.49429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,16.38689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,16.31717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,16.15822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,16.2262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,16.2836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,16.18388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,15.83616);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,17.02127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,15.97339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,15.9602);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,15.78166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,15.80873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,15.64311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,15.98084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,15.32585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,15.71025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,15.69213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,15.88271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,15.48419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,15.74954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,15.51488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,15.67235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,15.88008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,15.30963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,15.24624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,15.8221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,15.24141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,15.94464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,15.11969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,14.98731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,15.2671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,15.15482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,15.1942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,15.10256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,15.0174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,14.8903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,15.03197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,14.48846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,14.99568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,14.85758);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,14.8942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,14.67985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,14.63078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,14.73835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,14.48096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,15.16318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,14.50241);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,14.52729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,14.68348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,14.43284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,14.38161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,16.08296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,14.55788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,14.46826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,14.52862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,14.45983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,14.4774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,14.48613);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,14.23432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,14.14357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,14.09428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,13.99382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,14.27302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,14.14935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,14.50099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,14.05172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,13.70703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,14.29245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,14.37753);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,14.18272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,14.0519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,13.34547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,13.94017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,13.54183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,14.04915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,13.53982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,13.82691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,13.51514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,13.48857);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,13.56952);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,13.37646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,13.82144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,13.73434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,14.38189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,13.49874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,13.47153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,13.17669);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,13.27835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,13.84513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,13.50925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,13.1349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,13.11041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,13.22316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,13.36772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,13.2894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,13.04686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,13.19411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,13.03737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,13.29986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,13.08484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,13.32865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,12.71224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,13.99173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,12.76381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,12.76367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,12.74756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,12.96494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,12.73835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,12.962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,12.84278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,12.794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,12.71294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,12.85513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,12.64165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,12.82773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,12.5504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,12.59065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,12.5755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,12.43159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,12.47314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,12.32784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,12.74045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,12.31876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,12.25878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,12.27783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,12.34165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,12.07685);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,12.26956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,12.48983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,12.5441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,11.92307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,12.36481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,12.23817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,12.20889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,11.88772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,12.00943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,12.21937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,12.05985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,12.05917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,11.8267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,12.04961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,12.17019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,12.11216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,11.92732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,11.6837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,11.58686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,11.66482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,11.4611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,11.73827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,11.98095);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,11.43035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,11.694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,12.32697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,11.79239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,11.11035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,11.64587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,11.3743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,11.5499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,11.55607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,11.51775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,11.5825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,11.5206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,11.26165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,11.51999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,11.39071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,11.15874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,11.732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,11.08034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,11.16837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,11.09939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,10.92246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,11.33447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,11.31835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,11.36956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,10.96024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,10.92837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,11.18686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,11.23614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,11.11577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,10.78628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,10.76144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,10.72829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,10.96085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,10.58409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,10.61938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,10.83699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,10.66769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,10.81957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,10.83425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,10.56536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,11.28872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,10.76328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,10.92896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,10.49509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,10.68004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,10.7747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,10.59148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,10.68337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,10.42478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,10.46673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,10.20386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,10.48391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,10.54827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,10.54676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,10.08578);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,10.37754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,10.34618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,10.2295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,10.25833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,10.19603);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,10.49549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,10.15435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,10.02914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,9.806072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,9.831777);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,10.0626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,9.9244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,9.849469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,9.753226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,10.10311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,10.21619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,9.87477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,10.07797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,9.577126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,10.00049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,9.645802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,10.05649);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,9.881318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,9.801494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,9.781925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,9.848185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,9.865527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,9.468678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,9.467587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,9.748605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,9.316894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,9.512946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,9.591408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,9.46782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,9.135605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,9.577883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,9.416392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,9.233293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,9.171218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,9.425194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,9.163998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,9.337636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,9.359631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,9.217134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,9.163211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,9.040273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,9.613113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,9.35936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,9.376775);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,9.14756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,8.893414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,8.896508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,9.113614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,9.160667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,9.179245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,11.25111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,9.015614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,8.780059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,8.961232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,8.792623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,8.834978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,8.84412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,8.825782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,8.881328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,8.652829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,9.152778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,8.828415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,8.838795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,8.841407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,8.579998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,8.338342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,8.641732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,8.773959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,8.444054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,8.807995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,8.615689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,10.05466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,8.545818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,8.449994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,8.582454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,8.922874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,8.651211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,8.435471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,8.624816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,8.295827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,8.587082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,8.450581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,8.393031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,8.156521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,8.066834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,9.358339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,8.257932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,8.232251);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,8.328566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,8.121141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,8.037681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,8.252509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,7.929924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,7.798847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,7.784839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,7.901335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,8.326304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,8.022884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,7.580831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,8.154441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,7.889429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,7.677403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,7.966823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,7.739951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,7.759749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,7.500869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,7.842496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,8.072896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,7.965635);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,7.651011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,7.770136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,8.076706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,7.770638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,8.385612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,7.730064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,7.555912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,7.863277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,7.819279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,7.699867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,8.086824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,7.529991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,7.801233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,7.292008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,7.426558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,7.533752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,7.325352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,7.502525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,7.064479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,7.474272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,7.197834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,7.151804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,7.246899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,7.430464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,7.371579);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,7.33591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,7.533776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,7.517232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,7.398256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,7.440078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,6.91694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,7.283546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,7.209654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,7.28269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,7.238474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,7.126026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,7.240153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,7.19979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,7.200833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,7.182341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,6.861863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,7.043132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,6.626526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,7.272431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,6.996836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,6.59936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,7.076056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,6.824154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,7.230694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,6.837302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,7.141634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,6.972676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,7.007554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,6.92718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,7.000598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,6.517493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,6.772734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,6.764571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,6.629226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,6.691179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,6.737837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,7.200691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,6.724233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,6.801212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,6.677073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,6.958493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,6.267445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,6.445502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,6.97271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,6.70726);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,6.549968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,6.639324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,6.592934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,6.416987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,6.578819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,6.451018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,6.621777);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,6.540057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,6.747689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,6.681574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,6.340311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,6.45501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,6.36627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,6.467418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,6.405167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,6.248955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,6.475592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,6.299315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,6.314355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,6.149538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,6.479242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,6.00891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,6.352841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,6.207059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,6.286078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,6.248214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,6.215087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,6.178416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,6.297808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,6.233714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,5.911288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,6.259395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,5.82523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,6.255656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,6.059265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,6.151414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,6.025874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,6.236259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,5.988084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,5.920889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,5.74994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,5.98116);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,6.7806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,6.043112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,5.708325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,6.165405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,5.984864);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,5.887167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,6.168361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,5.725823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,5.716204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,5.881175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,5.608476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,5.65856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,5.743919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,6.079396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,5.809869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,5.658027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,5.848586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,5.653097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,5.562932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,5.804344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,5.834624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,5.739229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,6.757043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,5.695324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,5.71939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,5.448911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,5.662255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,5.855034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,5.589839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,5.590678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,5.755254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,5.449162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,5.645705);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,5.47567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,5.428929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,5.654648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,5.288585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,5.51216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,5.515699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,5.674256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,5.531698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,5.759798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,5.51349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,5.355256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,5.462597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,5.477774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,5.162481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,5.402242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,5.481484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,5.238746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,5.241742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,5.292235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,5.557289);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,5.432646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,5.510486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,5.487754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,5.323132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,5.518214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,5.298993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,5.458332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,5.003233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,5.189614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,5.068845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,5.301305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,5.235252);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,5.322624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,5.231956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,5.474608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,5.250045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,5.005738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,5.034148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,5.403439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,5.257414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,5.116039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,5.135619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,5.041812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,5.283943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,4.805124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,4.700057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,4.649892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,4.890322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,4.847951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,4.592931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,4.995726);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,4.932683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,5.324154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,5.014355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,4.997715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,5.03907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,4.968494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,5.059106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,5.149259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,4.933085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,4.932079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,4.934644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,4.973351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,4.797802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,4.764145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,5.248822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,4.933892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,4.969437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,4.783345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,5.14461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,4.743505);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,4.724391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,4.883764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,5.021977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,4.850491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,4.697355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,4.791989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,4.495773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,4.604386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,4.690478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,4.821091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,4.376392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,4.47609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,4.90252);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,4.965803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,4.644266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,4.347618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,4.394255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,4.406874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,4.675101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,4.619496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,4.632805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,4.412155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,4.640461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,4.632924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,4.695441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,4.385235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,4.890607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,4.702939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,4.729994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,4.675297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,4.545925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,4.269856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,4.931892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,4.690272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,8.356499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,4.429398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,4.58499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,4.282597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,4.784272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,4.279997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,4.866414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,4.455865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,4.48297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,4.598778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,4.326491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,4.322631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,4.323467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,4.220728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,4.635149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,4.529039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,4.095795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,4.587315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,4.248828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,4.353361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,4.377919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,4.406805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,4.327273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,4.486153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,4.616457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,4.241326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,4.195951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,4.477957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,4.34297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,4.271813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,4.003741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,4.117568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,3.966431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,4.127177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,4.120082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,3.881316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,4.126727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,3.995378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,4.1118);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,4.298702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,4.389366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,4.185508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,4.122749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,4.098469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,4.192454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,5.078479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,4.085983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,3.913363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,3.863156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,4.239699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,4.029747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,3.902411);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,3.924732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,4.226327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,4.088459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,3.820757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,4.028597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,4.337025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,4.034018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,3.882015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,4.343053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,4.12294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,3.769295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,3.910586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,3.92149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,3.866866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,3.818606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,3.93112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,3.984842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,3.623819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,3.7878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,3.760145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,4.048698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,3.880055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,3.845155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,3.831225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,3.699427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,3.813279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,3.772013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,3.765455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,3.649641);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,3.794083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,3.754172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,3.771481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,3.639697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,3.837163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,3.741044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,3.604805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,3.968085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,3.781881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,3.502584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,3.793932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,3.805971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,3.527545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,3.823002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,3.662668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,3.68467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,3.761207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,3.948318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,3.69489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,3.679828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,3.895357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,3.902577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,3.744169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,3.489898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,3.70589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,3.911897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,3.248029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,3.661235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,5.003914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,3.555403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,3.619132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,3.492961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,3.614415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,3.511584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,3.330253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,3.600813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,3.402777);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,3.534025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,3.38773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,3.552384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,3.637696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,3.516254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,3.42739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,3.293914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,3.346075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,3.267755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,3.080115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,3.426837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,3.512003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,3.4619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,3.512545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,3.575604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,3.668384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,3.337394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,3.478748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,3.304062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,3.523612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,3.416499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,3.107368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,3.304694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,3.238948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,3.327894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,3.428837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,3.390609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,3.679625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,3.185678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,3.525712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,3.480882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,3.349415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,3.357115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,3.56972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,3.288738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,3.405821);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,3.144108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,3.394444);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,3.307198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,3.208572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,3.017361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,3.343944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,3.194878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,3.326072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,3.357719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,3.212324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,3.296394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,3.259814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,3.195155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,2.936037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,3.265349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,3.146875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,3.246303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,3.032191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,3.137923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,3.15848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,4.067549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,3.255502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,3.262568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,3.145718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,2.927295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,3.206073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,3.147622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,3.147352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,3.063818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,2.864882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,2.978656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,3.214385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,3.250221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,3.060745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,3.317954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,2.868667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,3.084026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,2.778138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,3.244555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,3.185373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,2.935314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,3.142822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,2.775023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,2.676167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,2.809154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,3.019089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,2.991749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,3.024399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,2.967953);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,3.012751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,3.05162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,3.292481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,2.8727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,3.070448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,2.952154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,3.087522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,2.914918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,3.256072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,2.742221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,2.882388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,3.105698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,3.122987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,46.03812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(1000028);

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
   
   TH1D *VH_DHZfirst_H_mass__135 = new TH1D("VH_DHZfirst_H_mass__135","",1000,0,2000);
   VH_DHZfirst_H_mass__135->SetBinContent(1000,13);
   VH_DHZfirst_H_mass__135->SetBinContent(1001,4438);
   VH_DHZfirst_H_mass__135->SetEntries(291428);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__135->SetLineColor(ci);
   VH_DHZfirst_H_mass__135->SetLineWidth(2);
   VH_DHZfirst_H_mass__135->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__135->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__135->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__135->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__135->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__135->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__135->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__135->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__135->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__135->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__135->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__135->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1135[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1135[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955.1077, 1926.862,
   1842.661, 1822.074, 1865.951, 1802.171, 1785.619, 1746.315, 1717.688, 1717.473, 1734.561, 1684.989, 1692.429, 1686.032, 1645.828, 1594.732, 1605.723, 1594.551,
   1606.347, 1550.626, 1546.559, 1543.716, 1505.964, 1524.31, 1466.199, 1479.186, 1469.6, 1451.446, 1467.054, 1466.451, 721.0085, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 14.3333 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1135[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1135[1000] = { 0, 0, 0, 0, 0, 0.07869313, 0, 0, 0.0201057, 0.07298411, 0.01603276, 0.03085925, 0.02528186, 0.04659406, 0.315, 0.5526157, 0.5670537,
   0.9946859, 1.980056, 2.990857, 4.224341, 5.617257, 7.713156, 9.194884, 11.26014, 14.91721, 15.80149, 17.63648, 19.10273, 20.91697, 22.57469, 23.56829, 24.74086,
   26.05945, 26.33124, 27.06163, 28.07401, 28.52938, 28.69474, 30.35598, 31.28894, 29.85078, 29.50656, 29.64456, 29.36111, 28.92323, 29.24606, 28.4838, 28.38522,
   27.82104, 27.25634, 27.84234, 26.97312, 26.84654, 26.56724, 26.32012, 26.58608, 26.3709, 25.94478, 26.13139, 25.81966, 25.76887, 25.39367, 25.79021, 25.46168,
   25.25548, 24.99696, 24.94334, 25.63115, 25.00773, 24.47613, 24.689, 25.04749, 24.02102, 24.11916, 23.95695, 23.81299, 23.79756, 23.82873, 23.29682, 23.66088,
   23.48233, 23.37825, 23.11734, 22.88468, 24.42587, 22.81425, 22.91103, 22.66949, 22.47318, 22.62614, 22.75237, 22.55637, 22.1535, 21.944, 21.83889, 22.045,
   21.76448, 21.77209, 22.08051, 21.90105, 21.5277, 21.37527, 21.64955, 21.42485, 21.31657, 21.48181, 20.87956, 20.93721, 20.71851, 20.58103, 20.73365, 20.79575,
   20.57372, 21.25794, 20.55411, 20.43382, 20.50586, 20.35092, 20.50976, 20.12711, 20.53843, 19.84197, 21.41311, 20.09448, 20.29424, 19.57286, 19.82522, 19.91351,
   19.62483, 19.90391, 19.58663, 19.58488, 19.38408, 19.23639, 19.35499, 19.44823, 19.51201, 19.71265, 19.15855, 19.7715, 19.36141, 19.04652, 18.89069, 18.89055,
   18.65535, 19.16798, 18.89042, 18.52012, 19.00854, 18.62351, 18.68887, 18.45872, 18.38842, 18.41841, 18.27537, 18.41156, 18.2078, 18.45342, 18.34523, 17.93714,
   18.01837, 18.25692, 17.82385, 18.75476, 18.26615, 18.006, 18.14447, 17.86719, 17.34024, 17.73042, 18.0991, 17.90334, 17.7139, 17.64614, 18.18626, 17.68655,
   17.61421, 18.02897, 17.85217, 17.41582, 17.30377, 17.37435, 17.49523, 17.26601, 17.19498, 17.22255, 17.197, 17.23241, 17.02648, 17.31775, 16.96469, 16.86468,
   17.18539, 16.85158, 17.13625, 17.05392, 16.62519, 16.81654, 16.95247, 16.49574, 16.63323, 16.53743, 16.73359, 16.57448, 20.04994, 16.40334, 16.88557, 16.31002,
   16.56274, 16.30829, 16.54994, 16.35605, 16.4981, 16.49429, 16.38689, 16.31717, 16.15822, 16.2262, 16.2836, 16.18388, 15.83616, 17.02127, 15.97339, 15.9602,
   15.78166, 15.80873, 15.64311, 15.98084, 15.32585, 15.71025, 15.69213, 15.88271, 15.48419, 15.74954, 15.51488, 15.67235, 15.88008, 15.30963, 15.24624, 15.8221,
   15.24141, 15.94464, 15.11969, 14.98731, 15.2671, 15.15482, 15.1942, 15.10256, 15.0174, 14.8903, 15.03197, 14.48846, 14.99568, 14.85758, 14.8942, 14.67985,
   14.63078, 14.73835, 14.48096, 15.16318, 14.50241, 14.52729, 14.68348, 14.43284, 14.38161, 16.08296, 14.55788, 14.46826, 14.52862, 14.45983, 14.4774, 14.48613,
   14.23432, 14.14357, 14.09428, 13.99382, 14.27302, 14.14935, 14.50099, 14.05172, 13.70703, 14.29245, 14.37753, 14.18272, 14.0519, 13.34547, 13.94017, 13.54183,
   14.04915, 13.53982, 13.82691, 13.51514, 13.48857, 13.56952, 13.37646, 13.82144, 13.73434, 14.38189, 13.49874, 13.47153, 13.17669, 13.27835, 13.84513, 13.50925,
   13.1349, 13.11041, 13.22316, 13.36772, 13.2894, 13.04686, 13.19411, 13.03737, 13.29986, 13.08484, 13.32865, 12.71224, 13.99173, 12.76381, 12.76367, 12.74756,
   12.96494, 12.73835, 12.962, 12.84278, 12.794, 12.71294, 12.85513, 12.64165, 12.82773, 12.5504, 12.59065, 12.5755, 12.43159, 12.47314, 12.32784, 12.74045,
   12.31876, 12.25878, 12.27783, 12.34165, 12.07685, 12.26956, 12.48983, 12.5441, 11.92307, 12.36481, 12.23817, 12.20889, 11.88772, 12.00943, 12.21937, 12.05985,
   12.05917, 11.8267, 12.04961, 12.17019, 12.11216, 11.92732, 11.6837, 11.58686, 11.66482, 11.4611, 11.73827, 11.98095, 11.43035, 11.694, 12.32697, 11.79239,
   11.11035, 11.64587, 11.3743, 11.5499, 11.55607, 11.51775, 11.5825, 11.5206, 11.26165, 11.51999, 11.39071, 11.15874, 11.732, 11.08034, 11.16837, 11.09939,
   10.92246, 11.33447, 11.31835, 11.36956, 10.96024, 10.92837, 11.18686, 11.23614, 11.11577, 10.78628, 10.76144, 10.72829, 10.96085, 10.58409, 10.61938, 10.83699,
   10.66769, 10.81957, 10.83425, 10.56536, 11.28872, 10.76328, 10.92896, 10.49509, 10.68004, 10.7747, 10.59148, 10.68337, 10.42478, 10.46673, 10.20386, 10.48391,
   10.54827, 10.54676, 10.08578, 10.37754, 10.34618, 10.2295, 10.25833, 10.19603, 10.49549, 10.15435, 10.02914, 9.806072, 9.831777, 10.0626, 9.9244, 9.849469,
   9.753226, 10.10311, 10.21619, 9.87477, 10.07797, 9.577126, 10.00049, 9.645802, 10.05649, 9.881318, 9.801494, 9.781925, 9.848185, 9.865527, 9.468678, 9.467587,
   9.748605, 9.316894, 9.512946, 9.591408, 9.46782, 9.135605, 9.577883, 9.416392, 9.233293, 9.171218, 9.425194, 9.163998, 9.337636, 9.359631, 9.217134, 9.163211,
   9.040273, 9.613113, 9.35936, 9.376775, 9.14756, 8.893414, 8.896508, 9.113614, 9.160667, 9.179245, 11.25111, 9.015614, 8.780059, 8.961232, 8.792623, 8.834978,
   8.84412, 8.825782, 8.881328, 8.652829, 9.152778, 8.828415, 8.838795, 8.841407, 8.579998, 8.338342, 8.641732, 8.773959, 8.444054, 8.807995, 8.615689, 10.05466,
   8.545818, 8.449994, 8.582454, 8.922874, 8.651211, 8.435471, 8.624816, 8.295827, 8.587082, 8.450581, 8.393031, 8.156521, 8.066834, 9.358339, 8.257932, 8.232251,
   8.328566, 8.121141, 8.037681, 8.252509, 7.929924, 7.798847, 7.784839, 7.901335, 8.326304, 8.022884, 7.580831, 8.154441, 7.889429, 7.677403, 7.966823, 7.739951,
   7.759749, 7.500869, 7.842496, 8.072896, 7.965635, 7.651011, 7.770136, 8.076706, 7.770638, 8.385612, 7.730064, 7.555912, 7.863277, 7.819279, 7.699867, 8.086824,
   7.529991, 7.801233, 7.292008, 7.426558, 7.533752, 7.325352, 7.502525, 7.064479, 7.474272, 7.197834, 7.151804, 7.246899, 7.430464, 7.371579, 7.33591, 7.533776,
   7.517232, 7.398256, 7.440078, 6.91694, 7.283546, 7.209654, 7.28269, 7.238474, 7.126026, 7.240153, 7.19979, 7.200833, 7.182341, 6.861863, 7.043132, 6.626526,
   7.272431, 6.996836, 6.59936, 7.076056, 6.824154, 7.230694, 6.837302, 7.141634, 6.972676, 7.007554, 6.92718, 7.000598, 6.517493, 6.772734, 6.764571, 6.629226,
   6.691179, 6.737837, 7.200691, 6.724233, 6.801212, 6.677073, 6.958493, 6.267445, 6.445502, 6.97271, 6.70726, 6.549968, 6.639324, 6.592934, 6.416987, 6.578819,
   6.451018, 6.621777, 6.540057, 6.747689, 6.681574, 6.340311, 6.45501, 6.36627, 6.467418, 6.405167, 6.248955, 6.475592, 6.299315, 6.314355, 6.149538, 6.479242,
   6.00891, 6.352841, 6.207059, 6.286078, 6.248214, 6.215087, 6.178416, 6.297808, 6.233714, 5.911288, 6.259395, 5.82523, 6.255656, 6.059265, 6.151414, 6.025874,
   6.236259, 5.988084, 5.920889, 5.74994, 5.98116, 6.7806, 6.043112, 5.708325, 6.165405, 5.984864, 5.887167, 6.168361, 5.725823, 5.716204, 5.881175, 5.608476,
   5.65856, 5.743919, 6.079396, 5.809869, 5.658027, 5.848586, 5.653097, 5.562932, 5.804344, 5.834624, 5.739229, 6.757043, 5.695324, 5.71939, 5.448911, 5.662255,
   5.855034, 5.589839, 5.590678, 5.755254, 5.449162, 5.645705, 5.47567, 5.428929, 5.654648, 5.288585, 5.51216, 5.515699, 5.674256, 5.531698, 5.759798, 5.51349,
   5.355256, 5.462597, 5.477774, 5.162481, 5.402242, 5.481484, 5.238746, 5.241742, 5.292235, 5.557289, 5.432646, 5.510486, 5.487754, 5.323132, 5.518214, 5.298993,
   5.458332, 5.003233, 5.189614, 5.068845, 5.301305, 5.235252, 5.322624, 5.231956, 5.474608, 5.250045, 5.005738, 5.034148, 5.403439, 5.257414, 5.116039, 5.135619,
   5.041812, 5.283943, 4.805124, 4.700057, 4.649892, 4.890322, 4.847951, 4.592931, 4.995726, 4.932683, 5.324154, 5.014355, 4.997715, 5.03907, 4.968494, 5.059106,
   5.149259, 4.933085, 4.932079, 4.934644, 4.973351, 4.797802, 4.764145, 5.248822, 4.933892, 4.969437, 4.783345, 5.14461, 4.743505, 4.724391, 4.883764, 5.021977,
   4.850491, 4.697355, 4.791989, 4.495773, 4.604386, 4.690478, 4.821091, 4.376392, 4.47609, 4.90252, 4.965803, 4.644266, 4.347618, 4.394255, 4.406874, 4.675101,
   4.619496, 4.632805, 4.412155, 4.640461, 4.632924, 4.695441, 4.385235, 4.890607, 4.702939, 4.729994, 4.675297, 4.545925, 4.269856, 4.931892, 4.690272, 8.356499,
   4.429398, 4.58499, 4.282597, 4.784272, 4.279997, 4.866414, 4.455865, 4.48297, 4.598778, 4.326491, 4.322631, 4.323467, 4.220728, 4.635149, 4.529039, 4.095795,
   4.587315, 4.248828, 4.353361, 4.377919, 4.406805, 4.327273, 4.486153, 4.616457, 4.241326, 4.195951, 4.477957, 4.34297, 4.271813, 4.003741, 4.117568, 3.966431,
   4.127177, 4.120082, 3.881316, 4.126727, 3.995378, 4.1118, 4.298702, 4.389366, 4.185508, 4.122749, 4.098469, 4.192454, 5.078479, 4.085983, 3.913363, 3.863156,
   4.239699, 4.029747, 3.902411, 3.924732, 4.226327, 4.088459, 3.820757, 4.028597, 4.337025, 4.034018, 3.882015, 4.343053, 4.12294, 3.769295, 3.910586, 3.92149,
   3.866866, 3.818606, 3.93112, 3.984842, 3.623819, 3.7878, 3.760145, 4.048698, 3.880055, 3.845155, 3.831225, 3.699427, 3.813279, 3.772013, 3.765455, 3.649641,
   3.794083, 3.754172, 3.771481, 3.639697, 3.837163, 3.741044, 3.604805, 3.968085, 3.781881, 3.502584, 3.793932, 3.805971, 3.527545, 3.823002, 3.662668, 3.68467,
   3.761207, 3.948318, 3.69489, 3.679828, 3.895357, 3.902577, 3.744169, 3.489898, 3.70589, 3.911897, 3.248029, 3.661235, 5.003914, 3.555403, 3.619132, 3.492961,
   3.614415, 3.511584, 3.330253, 3.600813, 3.402777, 3.534025, 3.38773, 3.552384, 3.637696, 3.516254, 3.42739, 3.293914, 3.346075, 3.267755, 3.080115, 3.426837,
   3.512003, 3.4619, 3.512545, 3.575604, 3.668384, 3.337394, 3.478748, 3.304062, 3.523612, 3.416499, 3.107368, 3.304694, 3.238948, 3.327894, 3.428837, 3.390609,
   3.679625, 3.185678, 3.525712, 3.480882, 3.349415, 3.357115, 3.56972, 3.288738, 3.405821, 3.144108, 3.394444, 3.307198, 3.208572, 3.017361, 3.343944, 3.194878,
   3.326072, 3.357719, 3.212324, 3.296394, 3.259814, 3.195155, 2.936037, 3.265349, 3.146875, 3.246303, 3.032191, 3.137923, 3.15848, 4.067549, 3.255502, 3.262568,
   3.145718, 2.927295, 3.206073, 3.147622, 3.147352, 3.063818, 2.864882, 2.978656, 3.214385, 3.250221, 3.060745, 3.317954, 2.868667, 3.084026, 2.778138, 3.244555,
   3.185373, 2.935314, 3.142822, 2.775023, 2.676167, 2.809154, 3.019089, 2.991749, 3.024399, 2.967953, 3.012751, 3.05162, 3.292481, 2.8727, 3.070448, 2.952154,
   3.087522, 2.914918, 3.256072, 2.742221, 2.882388, 3.105698, 3.122987 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1135,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1135,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1135,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1135);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->SetMinimum(-229.9426);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->SetMaximum(2153.901);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1135);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_DHZfirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__136 = new TH1D("data_mc_ratio__136","",1000,0,2000);
   data_mc_ratio__136->SetBinContent(1000,0.906979);
   data_mc_ratio__136->SetBinContent(1001,0.7903853);
   data_mc_ratio__136->SetBinError(1000,0.2515507);
   data_mc_ratio__136->SetBinError(1001,0.01351889);
   data_mc_ratio__136->SetMinimum(0.4);
   data_mc_ratio__136->SetMaximum(1.6);
   data_mc_ratio__136->SetEntries(8.038827);
   data_mc_ratio__136->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__136->SetLineColor(ci);
   data_mc_ratio__136->SetLineWidth(2);
   data_mc_ratio__136->SetMarkerStyle(20);
   data_mc_ratio__136->SetMarkerSize(1.2);
   data_mc_ratio__136->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__136->GetXaxis()->SetRange(1,150);
   data_mc_ratio__136->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__136->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__136->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__136->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__136->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__136->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__136->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__136->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__136->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__136->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__136->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__136->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__136->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__136->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1136[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1136[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1136[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1136[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0298226, 0.01473132,
   0.0150983, 0.01495897, 0.01492126, 0.01496701, 0.01503487, 0.01521332, 0.015323, 0.01547977, 0.01520321, 0.01539759, 0.01544017, 0.01531386, 0.01565708, 0.01592347, 0.01606143, 0.01596793,
   0.01572231, 0.01612056, 0.01612828, 0.01660354, 0.0166058, 0.01605719, 0.01683878, 0.01693329, 0.01634528, 0.01661733, 0.01632997, 0.01623852, 0.03300593, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2178834 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1136,Graph_from_mc_statistical_error_fy1136,Graph_from_mc_statistical_error_fex1136,Graph_from_mc_statistical_error_fey1136);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1136 = new TH1F("Graph_Graph_from_mc_statistical_error1136","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1136->SetMinimum(0.7385399);
   Graph_Graph_from_mc_statistical_error1136->SetMaximum(1.26146);
   Graph_Graph_from_mc_statistical_error1136->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1136->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1136->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1136->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1136->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1136);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_SR_18->cd();
   H_mass_DHZfirst_SR_18->Modified();
   H_mass_DHZfirst_SR_18->cd();
   H_mass_DHZfirst_SR_18->SetSelected(H_mass_DHZfirst_SR_18);
}
