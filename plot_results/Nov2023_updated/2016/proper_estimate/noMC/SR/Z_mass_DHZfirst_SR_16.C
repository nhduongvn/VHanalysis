#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_SR_16/Z_mass_DHZfirst_SR_16
//=========  (Thu Jan 25 12:40:53 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_SR_16 = new TCanvas("Z_mass_DHZfirst_SR_16", "Z_mass_DHZfirst_SR_16",0,0,600,600);
   Z_mass_DHZfirst_SR_16->SetHighLightColor(2);
   Z_mass_DHZfirst_SR_16->Range(0,0,1,1);
   Z_mass_DHZfirst_SR_16->SetFillColor(0);
   Z_mass_DHZfirst_SR_16->SetFillStyle(4000);
   Z_mass_DHZfirst_SR_16->SetBorderMode(0);
   Z_mass_DHZfirst_SR_16->SetBorderSize(2);
   Z_mass_DHZfirst_SR_16->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-8.384833,315.7258,8386.448);
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
   st->SetMaximum(7546.964);
   
   TH1F *st_stack_66 = new TH1F("st_stack_66","",1000,0,2000);
   st_stack_66->SetMinimum(0.01);
   st_stack_66->SetMaximum(7546.964);
   st_stack_66->SetDirectory(nullptr);
   st_stack_66->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_66->SetLineColor(ci);
   st_stack_66->SetLineWidth(0);
   st_stack_66->GetXaxis()->SetRange(1,150);
   st_stack_66->GetXaxis()->SetLabelFont(42);
   st_stack_66->GetXaxis()->SetTitleOffset(1);
   st_stack_66->GetXaxis()->SetTitleFont(42);
   st_stack_66->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_66->GetYaxis()->SetLabelFont(42);
   st_stack_66->GetYaxis()->SetLabelSize(0.05);
   st_stack_66->GetYaxis()->SetTitleSize(0.057);
   st_stack_66->GetYaxis()->SetTitleOffset(1.2);
   st_stack_66->GetYaxis()->SetTitleFont(42);
   st_stack_66->GetZaxis()->SetLabelFont(42);
   st_stack_66->GetZaxis()->SetTitleOffset(1);
   st_stack_66->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_66);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(31,3252.456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(32,3271.56);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(33,3381.806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(34,3396.134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(35,3389.368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(36,3378.821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(37,3382.801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(38,3362.304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(39,3355.936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(40,3279.918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(41,3262.804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(42,3226.387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(43,3208.875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(44,3170.468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(45,3110.37);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(46,3093.455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(47,3092.062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(48,2974.254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(49,2989.179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(50,2946.394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(51,2867.391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(52,2872.565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(53,2822.218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(54,2767.294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(55,2776.05);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(56,2702.221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(57,2659.237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(58,2641.924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(59,2597.945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(60,2560.135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,9.95);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,5953.284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,0.6600083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,1.1773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,2.198027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,3.570927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,5.317435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,7.461837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,9.331806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,11.5831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,13.85875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,15.73736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,17.74116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,19.43182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,21.02631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,22.42616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,23.33058);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,24.30571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,24.75131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,25.44089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,25.51549);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,25.94185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,25.99674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,25.97083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,25.93039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,25.94566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,25.86694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,25.84243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,25.54807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,25.48133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,25.33873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,25.26987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,25.11818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,24.87898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,24.81124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,24.80565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,24.32851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,24.38948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,24.2143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,23.88746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,23.909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,23.69855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,23.46682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,23.50391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,23.18926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,23.00409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,22.92908);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,22.73744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,22.57137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,22.50196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,22.39435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,22.14987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,22.12214);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,22.14987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,21.74297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,21.73022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,21.74479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,21.64531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,21.59219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,21.21101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,21.0536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,20.82666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,20.75142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,20.76477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,20.32432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,20.31263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,19.95564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,19.98341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,19.76722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,19.6174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,19.40633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,19.3112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,19.19396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,18.94894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,18.86936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,18.6721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,18.55828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,18.39755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,18.00593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,17.99603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,17.86018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,17.64716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,17.51765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,17.27292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,17.24195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,17.0723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,16.99325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,16.86107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,16.75623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,16.47859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,16.39668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,16.29857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,16.04142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,16.01548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,15.8402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,15.67812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,15.52455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,15.4824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,15.31783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,15.24787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,15.09517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,14.97929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,14.91837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,14.81448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,14.75018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,14.60042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,14.48742);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,14.32662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,14.27816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,14.32109);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,13.90866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,13.90581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,13.93284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,13.74973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,13.54078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,13.42328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,13.41886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,13.27496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,13.35526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,13.22714);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,13.31814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,13.07204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,12.99913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,12.60473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,12.67835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,12.722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,12.72978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,12.58901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,12.61258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,12.49587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,12.35404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,12.27364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,12.22029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,12.15693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,11.95492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,12.01769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,12.04073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,11.91842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,11.5831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,11.7528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,11.29051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,11.5831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,11.62235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,11.45417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,11.30978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,11.28525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,11.21838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,11.23425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,11.08878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,10.88696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,10.89968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,10.81945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,10.85234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,10.82494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,10.67761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,10.67204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,10.50185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,10.33268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,10.62556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,10.4792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,10.49996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,10.36139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,10.17433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,10.3231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,10.11578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,10.14315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,10.01545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,10.11774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,10.11382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,9.620163);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,9.663289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,9.922101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,9.702143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,9.687847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,9.845976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,9.66124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,9.675576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,9.562359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,9.618105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,9.472902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,9.386811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,9.359349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,9.257244);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,9.424704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,9.449881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,9.203616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,9.244401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,9.259383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,9.149673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,9.062697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,9.060512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,9.240117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,8.87058);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,8.966049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,9.036441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,8.919552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,8.972671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,9.023284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,8.935078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,8.857177);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,8.635316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,8.762781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,8.676491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,8.890647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,8.589334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,8.568562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,8.4452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,8.531509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,8.540787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,8.649063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,8.480296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,8.559314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,8.303333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,8.466275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,8.41937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,8.300948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,8.367471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,8.35089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,8.257901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,8.224263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,8.185652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,8.207393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,8.134696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,7.994749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,8.229077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,8.144426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,8.117639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,8.102991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,8.00465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,7.925098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,8.021946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,8.185652);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,8.066253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,8.058886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,7.992272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,7.984836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,7.910094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,7.905086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,7.869941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,7.937581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,7.750788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,8.212217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,7.761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,7.761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,7.912596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,7.857351);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,7.89506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,7.577694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,7.709806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,7.696954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,7.689232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,7.595963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,7.64274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,7.485681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,7.525253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,7.634964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,7.46449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,7.467142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,7.483035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,7.686657);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,7.603779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,7.64792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,7.469793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,7.456528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,7.419258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,7.368376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,7.456528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,7.373749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,7.421926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,7.341455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,7.504174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,7.429926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,7.488325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,7.379117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,7.392522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,7.268269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,7.467142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,7.341455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,7.194339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,7.208087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,7.284596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,7.405902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,7.186077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,7.249174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,7.273715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,7.186077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,7.363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,7.249174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,7.408575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,7.055385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,7.150167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,7.111292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,7.175047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,6.950771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,7.075003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,7.114076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,7.270993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,7.202591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,7.172287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,6.956466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,7.027265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,7.080598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,7.122421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,7.166763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,7.097357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,7.04977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,6.967842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,6.913639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,6.990539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,6.976362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,6.83877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,6.870545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,7.077801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,6.962157);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,6.916503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,6.902174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,6.965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,6.713117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,6.945071);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,6.653865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,6.701308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,6.77185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,6.766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,6.801027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,6.469796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,6.85612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,6.947922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,6.887815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,6.783536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,6.647911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,6.751352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,6.913639);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,6.841665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,6.707215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,6.695396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,6.727848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,6.766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,6.742548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,6.792287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,6.671696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,6.698353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,6.730791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,6.665757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,6.469796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,6.630016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,6.612073);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,6.733732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,6.594081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,6.62404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,6.518579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,6.548884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,6.603083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,6.530718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,6.539807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,6.695396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,6.554928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,6.466735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,6.554928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,6.497281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,6.597083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,6.460608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,6.50946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,6.399018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,6.408294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,6.457542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,6.349316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,6.308645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,6.408294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,6.454475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,6.339954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,6.361778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,6.414471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,6.417557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,6.324319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,6.232863);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,6.349316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,6.210586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,6.349316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,6.374216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,6.318054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,6.283486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,6.296078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,6.204206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,6.339954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,6.223325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,6.261389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,6.039248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,6.052349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,6.110953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,6.289785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,6.107712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,6.216959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,6.149712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,6.169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,6.207397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,6.201014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,6.029404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,6.194624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,6.136819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,6.19782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,6.114192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,6.165789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,6.09473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,5.920041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,6.169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,5.943407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,6.058888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,6.239213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,5.930066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,6.081721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,5.653141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,6.178622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,6.055619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,6.204206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,5.839217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,6.188228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,5.909998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,6.130363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,5.760698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,5.808619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,6.003075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,5.839217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,5.889862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,5.829036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,5.808619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,5.862906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,5.903294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,5.746933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,5.79155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,5.893223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,5.862906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,6.032688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,5.866282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,5.859528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,5.753819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,5.946738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,5.886499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,5.764134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,5.920041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,5.839217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,5.695017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,5.691539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,5.635601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,5.632087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,5.913348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,5.78813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,5.518439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,5.862906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,5.568445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,5.600356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,5.550638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,5.805209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,5.677606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,5.607423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,5.695017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,5.635601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,5.674118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,5.825638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,5.507664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,5.649638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,5.646132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,5.653141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,5.500469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,5.482441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,5.354542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,5.457101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,5.317435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,5.493265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,5.554204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,5.391394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,5.358239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,5.667134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,5.507664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,5.457101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,5.409726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,5.511258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,5.438929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,5.442568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,5.280067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,5.529193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,5.52561);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,5.380365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,5.402401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,5.417042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,5.369314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,5.417042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,5.457101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,5.365625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,5.435287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,5.391394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,5.204525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,5.328594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,5.162506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,5.343437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,5.124008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,5.298784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,5.135588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,5.104651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,5.223513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,5.108528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,5.332309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,5.253751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,5.139442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,5.231089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,5.257518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,5.249981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,5.014642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,5.174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,5.073524);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,5.081324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,5.053973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,5.135588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,4.792555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,5.147142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,5.116274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,5.174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,5.16634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,4.990895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,4.990895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,4.99486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,5.018589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,5.034346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,4.821388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,4.943057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,5.077426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,4.829595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,5.135588);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,4.971018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,5.295046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,5.057889);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,4.804933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,4.821388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,4.978978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,5.022533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,5.046131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,4.959054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,4.99486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,4.947062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,4.73436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,4.788421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,4.99486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,4.730176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,4.730176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,4.874485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,4.906874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,4.878545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,4.858209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,4.898796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,4.788421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,4.874485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,4.800811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,4.755226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,4.866354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,4.649962);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,4.763546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,4.776);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,4.662719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,4.725988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,4.717601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,4.671204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,4.742717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,4.713402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,4.717601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,4.7092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,4.850051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,4.654218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,4.742717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,4.58996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,4.63717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,4.833693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,4.641438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,4.607183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,4.704993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,4.641438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,4.542259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,4.542259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,4.56834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,4.662719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,4.700783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,4.581324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,4.56834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,4.498457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,4.471969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,4.359872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,4.546617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,4.577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,4.546617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,4.440867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,4.449775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,4.615771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,4.524789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,4.463105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,4.445323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,4.611479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,4.346226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,4.485232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,4.471969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,4.485232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,4.489645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,4.254134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,4.43194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,4.396054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,4.327964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,4.507251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,4.337104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,4.463105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,4.263433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,4.235476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,4.249477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,4.230798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,4.409545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,4.346226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,4.327964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,4.440867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,4.19791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,4.445323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,4.418517);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,4.244815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,4.073428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,4.174259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,4.183735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,4.202624);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,4.244815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,4.277343);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,4.364411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,4.169513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,4.024526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,4.216734);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,4.19319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,4.034354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,4.169513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,4.212036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,4.212036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,4.019603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,4.097661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,4.009739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,4.164761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,4.235476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,4.107314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,3.98);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,4.150474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,3.989938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,4.258786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,4.092826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,3.919845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,4.155242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,4.053938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,4.126552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,3.950037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,4.19319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,4.014674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,3.904662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,4.009739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,4.183735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,3.96005);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,3.90973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,3.90973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,3.914791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,4.068565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,4.004798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,3.884325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,3.950037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,3.955047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,3.99985);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,4.019603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,4.044158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,3.843328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,3.984972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,3.970038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,3.904662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,4.004798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,3.975022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,3.90973);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,4.009739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,4.078286);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,3.945021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,3.950037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,3.838173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,3.904662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,3.869002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,3.680155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,3.738871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,3.970038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,3.970038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,3.848477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,3.696261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,3.712297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,3.669379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,3.728264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,3.843328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,3.6909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,3.722949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,3.827841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,3.685532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,3.781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,3.625953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,3.77576);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,3.874117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,3.874117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,3.843328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,3.55982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,3.55982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,3.728264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,3.696261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,3.765257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,3.781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,3.754724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,3.582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,3.620488);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,3.642298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,3.765257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,3.64773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,3.548678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,3.663979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,3.537501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,3.435273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,3.481078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,3.353608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,3.576468);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,3.503757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,3.515041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,3.712297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,3.417937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,3.582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,3.435273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,3.526289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,3.554254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,3.475386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,3.486762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,3.625953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,3.458251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,3.570927);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,3.377142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,3.5319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,3.227238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,3.503757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,3.400513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,3.435273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,3.475386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,3.492436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,3.300042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,3.475386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,3.377142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,3.31202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,3.353608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,3.239485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,3.28802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,3.31202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,3.417937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,3.537501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,3.458251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,3.323955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,3.359507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,3.520669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,3.458251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,3.359507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,3.412139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,3.31202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,3.335848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,3.095713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,3.406331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,3.400513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,3.429504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,3.227238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,3.281992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,3.341778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,3.300042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,3.12753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,3.341778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,3.365395);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,3.269904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,3.251687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,3.146466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,2.991626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,3.095713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,3.159027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,3.317993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,3.371274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,3.263843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,3.089311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,3.306036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,3.263843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,3.359507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,3.177775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,3.28802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,2.998237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,3.239485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,3.159027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,3.275953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,3.202602);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,3.190213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,3.140167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,3.050612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,3.044115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,3.227238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,2.904309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,3.263843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,3.102103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,3.095713);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,3.233367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,2.958348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,2.971704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,2.951647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,2.9382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,3.121193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,2.951647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,2.842289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,3.057096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,2.883784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,3.037603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,3.152753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,3.024538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,2.883784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,2.971704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.87691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,2.958348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,2.849246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,3.076465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,2.917913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,2.87691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,2.842289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,3.082895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.944931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,2.897484);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,2.9382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,2.856187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,3.076465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,2.706693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,2.904309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,2.778884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,2.991626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,2.883784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,2.965033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,2.985);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,2.828321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,2.890642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,2.793098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,2.87691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,2.87691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,2.897484);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,2.764596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,2.991626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,2.771749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,2.849246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,2.771749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,2.699367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,2.735798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,2.856187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,2.821312);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,2.721284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,2.856187);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,2.771749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,2.814285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,2.786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,2.62499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,2.609861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,2.750235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,2.721284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,2.721284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,2.684657);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,2.835314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.677271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,2.579335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,2.842289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,2.883784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,2.735798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,2.728551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,2.735798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,2.828321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,2.579335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,2.485509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,2.669865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,2.721284);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,2.828321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,2.632523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,2.735798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,2.62499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,2.669865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,2.669865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,2.587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,2.579335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,2.640033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,2.662439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,2.80724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,2.602263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,2.640033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,2.571647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,2.563936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,2.692022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,2.540662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,2.532856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,2.692022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,2.640033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,2.469525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,2.525027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,2.404526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,2.563936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,2.563936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,2.525027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,2.437242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,2.548443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,2.579335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,2.437242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,2.445353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,2.379694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,2.461494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,2.525027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,2.286336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,2.461494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,2.556201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,2.388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,2.469525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,2.337721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,2.404526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,2.485509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,2.420939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,2.404526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,2.461494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,2.517173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,2.509295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,2.640033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,2.337721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,2.329235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,2.420939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,2.396277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,2.453437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,2.268949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,2.469525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,2.396277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,2.429105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,2.277659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,2.277659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,2.260206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,2.277659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,2.21597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,2.224888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,2.509295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,2.3546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,2.233769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,2.161693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,2.3546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,2.207017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,2.548443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,2.233769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,2.277659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,2.268949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,2.106018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,2.134037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,2.379694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,2.29498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,2.362994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,2.303592);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,2.009801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,2.161693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,2.21597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,2.009801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,2.161693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,2.179936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,2.268949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,2.260206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,2.189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,2.058472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,2.268949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,2.251428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,2.096595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,2.286336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,2.04883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,2.198027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,2.251428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,2.198027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,2.198027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,2.096595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,2.233769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,2.189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,2.189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.84545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,2.346175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,2.058472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,2.039143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,2.106018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,2.198027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,2.189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,2.058472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,2.077621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,34.41952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(1899727);

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
   
   TH1D *VH_DHZfirst_Z_mass__131 = new TH1D("VH_DHZfirst_Z_mass__131","",1000,0,2000);
   VH_DHZfirst_Z_mass__131->SetBinContent(1000,8);
   VH_DHZfirst_Z_mass__131->SetBinContent(1001,6312);
   VH_DHZfirst_Z_mass__131->SetEntries(373867);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__131->SetLineColor(ci);
   VH_DHZfirst_Z_mass__131->SetLineWidth(2);
   VH_DHZfirst_Z_mass__131->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__131->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__131->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__131->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__131->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__131->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__131->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__131->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__131->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__131->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__131->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__131->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1131[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1131[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3252.456, 3271.56, 3381.806,
   3396.134, 3389.368, 3378.821, 3382.801, 3362.304, 3355.936, 3279.918, 3262.804, 3226.387, 3208.875, 3170.468, 3110.37, 3093.455, 3092.062, 2974.254, 2989.179,
   2946.394, 2867.391, 2872.565, 2822.218, 2767.294, 2776.05, 2702.221, 2659.237, 2641.924, 2597.945, 2560.135, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 9.95 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1131[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1131[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.199, 0.6600083, 1.1773, 2.198027, 3.570927,
   5.317435, 7.461837, 9.331806, 11.5831, 13.85875, 15.73736, 17.74116, 19.43182, 21.02631, 22.42616, 23.33058, 24.30571, 24.75131, 25.44089, 25.51549, 25.94185,
   25.99674, 25.97083, 25.93039, 25.94566, 25.86694, 25.84243, 25.54807, 25.48133, 25.33873, 25.26987, 25.11818, 24.87898, 24.81124, 24.80565, 24.32851, 24.38948,
   24.2143, 23.88746, 23.909, 23.69855, 23.46682, 23.50391, 23.18926, 23.00409, 22.92908, 22.73744, 22.57137, 22.50196, 22.39435, 22.14987, 22.12214, 22.14987,
   21.74297, 21.73022, 21.74479, 21.64531, 21.59219, 21.21101, 21.0536, 20.82666, 20.75142, 20.76477, 20.32432, 20.31263, 19.95564, 19.98341, 19.76722, 19.6174,
   19.40633, 19.3112, 19.19396, 18.94894, 18.86936, 18.6721, 18.55828, 18.39755, 18.00593, 17.99603, 17.86018, 17.64716, 17.51765, 17.27292, 17.24195, 17.0723,
   16.99325, 16.86107, 16.75623, 16.47859, 16.39668, 16.29857, 16.04142, 16.01548, 15.8402, 15.67812, 15.52455, 15.4824, 15.31783, 15.24787, 15.09517, 14.97929,
   14.91837, 14.81448, 14.75018, 14.60042, 14.48742, 14.32662, 14.27816, 14.32109, 13.90866, 13.90581, 13.93284, 13.74973, 13.54078, 13.42328, 13.41886, 13.27496,
   13.35526, 13.22714, 13.31814, 13.07204, 12.99913, 12.60473, 12.67835, 12.722, 12.72978, 12.58901, 12.61258, 12.49587, 12.35404, 12.27364, 12.22029, 12.15693,
   11.95492, 12.01769, 12.04073, 11.91842, 11.5831, 11.7528, 11.29051, 11.5831, 11.62235, 11.45417, 11.30978, 11.28525, 11.21838, 11.23425, 11.08878, 10.88696,
   10.89968, 10.81945, 10.85234, 10.82494, 10.67761, 10.67204, 10.50185, 10.33268, 10.62556, 10.4792, 10.49996, 10.36139, 10.17433, 10.3231, 10.11578, 10.14315,
   10.01545, 10.11774, 10.11382, 9.620163, 9.663289, 9.922101, 9.702143, 9.687847, 9.845976, 9.66124, 9.675576, 9.562359, 9.618105, 9.472902, 9.386811, 9.359349,
   9.257244, 9.424704, 9.449881, 9.203616, 9.244401, 9.259383, 9.149673, 9.062697, 9.060512, 9.240117, 8.87058, 8.966049, 9.036441, 8.919552, 8.972671, 9.023284,
   8.935078, 8.857177, 8.635316, 8.762781, 8.676491, 8.890647, 8.589334, 8.568562, 8.4452, 8.531509, 8.540787, 8.649063, 8.480296, 8.559314, 8.303333, 8.466275,
   8.41937, 8.300948, 8.367471, 8.35089, 8.257901, 8.224263, 8.185652, 8.207393, 8.134696, 7.994749, 8.229077, 8.144426, 8.117639, 8.102991, 8.00465, 7.925098,
   8.021946, 8.185652, 8.066253, 8.058886, 7.992272, 7.984836, 7.910094, 7.905086, 7.869941, 7.937581, 7.750788, 8.212217, 7.761, 7.761, 7.912596, 7.857351,
   7.89506, 7.577694, 7.709806, 7.696954, 7.689232, 7.595963, 7.64274, 7.485681, 7.525253, 7.634964, 7.46449, 7.467142, 7.483035, 7.686657, 7.603779, 7.64792,
   7.469793, 7.456528, 7.419258, 7.368376, 7.456528, 7.373749, 7.421926, 7.341455, 7.504174, 7.429926, 7.488325, 7.379117, 7.392522, 7.268269, 7.467142, 7.341455,
   7.194339, 7.208087, 7.284596, 7.405902, 7.186077, 7.249174, 7.273715, 7.186077, 7.363, 7.249174, 7.408575, 7.055385, 7.150167, 7.111292, 7.175047, 6.950771,
   7.075003, 7.114076, 7.270993, 7.202591, 7.172287, 6.956466, 7.027265, 7.080598, 7.122421, 7.166763, 7.097357, 7.04977, 6.967842, 6.913639, 6.990539, 6.976362,
   6.83877, 6.870545, 7.077801, 6.962157, 6.916503, 6.902174, 6.965, 6.713117, 6.945071, 6.653865, 6.701308, 6.77185, 6.766, 6.801027, 6.469796, 6.85612,
   6.947922, 6.887815, 6.783536, 6.647911, 6.751352, 6.913639, 6.841665, 6.707215, 6.695396, 6.727848, 6.766, 6.742548, 6.792287, 6.671696, 6.698353, 6.730791,
   6.665757, 6.469796, 6.630016, 6.612073, 6.733732, 6.594081, 6.62404, 6.518579, 6.548884, 6.603083, 6.530718, 6.539807, 6.695396, 6.554928, 6.466735, 6.554928,
   6.497281, 6.597083, 6.460608, 6.50946, 6.399018, 6.408294, 6.457542, 6.349316, 6.308645, 6.408294, 6.454475, 6.339954, 6.361778, 6.414471, 6.417557, 6.324319,
   6.232863, 6.349316, 6.210586, 6.349316, 6.374216, 6.318054, 6.283486, 6.296078, 6.204206, 6.339954, 6.223325, 6.261389, 6.039248, 6.052349, 6.110953, 6.289785,
   6.107712, 6.216959, 6.149712, 6.169, 6.207397, 6.201014, 6.029404, 6.194624, 6.136819, 6.19782, 6.114192, 6.165789, 6.09473, 5.920041, 6.169, 5.943407,
   6.058888, 6.239213, 5.930066, 6.081721, 5.653141, 6.178622, 6.055619, 6.204206, 5.839217, 6.188228, 5.909998, 6.130363, 5.760698, 5.808619, 6.003075, 5.839217,
   5.889862, 5.829036, 5.808619, 5.862906, 5.903294, 5.746933, 5.79155, 5.893223, 5.862906, 6.032688, 5.866282, 5.859528, 5.753819, 5.946738, 5.886499, 5.764134,
   5.920041, 5.839217, 5.695017, 5.691539, 5.635601, 5.632087, 5.913348, 5.78813, 5.518439, 5.862906, 5.568445, 5.600356, 5.550638, 5.805209, 5.677606, 5.607423,
   5.695017, 5.635601, 5.674118, 5.825638, 5.507664, 5.649638, 5.646132, 5.653141, 5.500469, 5.482441, 5.354542, 5.457101, 5.317435, 5.493265, 5.554204, 5.391394,
   5.358239, 5.667134, 5.507664, 5.457101, 5.409726, 5.511258, 5.438929, 5.442568, 5.280067, 5.529193, 5.52561, 5.380365, 5.402401, 5.417042, 5.369314, 5.417042,
   5.457101, 5.365625, 5.435287, 5.391394, 5.204525, 5.328594, 5.162506, 5.343437, 5.124008, 5.298784, 5.135588, 5.104651, 5.223513, 5.108528, 5.332309, 5.253751,
   5.139442, 5.231089, 5.257518, 5.249981, 5.014642, 5.174, 5.073524, 5.081324, 5.053973, 5.135588, 4.792555, 5.147142, 5.116274, 5.174, 5.16634, 4.990895,
   4.990895, 4.99486, 5.018589, 5.034346, 4.821388, 4.943057, 5.077426, 4.829595, 5.135588, 4.971018, 5.295046, 5.057889, 4.804933, 4.821388, 4.978978, 5.022533,
   5.046131, 4.959054, 4.99486, 4.947062, 4.73436, 4.788421, 4.99486, 4.730176, 4.730176, 4.874485, 4.906874, 4.878545, 4.858209, 4.898796, 4.788421, 4.874485,
   4.800811, 4.755226, 4.866354, 4.649962, 4.763546, 4.776, 4.662719, 4.725988, 4.717601, 4.671204, 4.742717, 4.713402, 4.717601, 4.7092, 4.850051, 4.654218,
   4.742717, 4.58996, 4.63717, 4.833693, 4.641438, 4.607183, 4.704993, 4.641438, 4.542259, 4.542259, 4.56834, 4.662719, 4.700783, 4.581324, 4.56834, 4.498457,
   4.471969, 4.359872, 4.546617, 4.577, 4.546617, 4.440867, 4.449775, 4.615771, 4.524789, 4.463105, 4.445323, 4.611479, 4.346226, 4.485232, 4.471969, 4.485232,
   4.489645, 4.254134, 4.43194, 4.396054, 4.327964, 4.507251, 4.337104, 4.463105, 4.263433, 4.235476, 4.249477, 4.230798, 4.409545, 4.346226, 4.327964, 4.440867,
   4.19791, 4.445323, 4.418517, 4.244815, 4.073428, 4.174259, 4.183735, 4.202624, 4.244815, 4.277343, 4.364411, 4.169513, 4.024526, 4.216734, 4.19319, 4.034354,
   4.169513, 4.212036, 4.212036, 4.019603, 4.097661, 4.009739, 4.164761, 4.235476, 4.107314, 3.98, 4.150474, 3.989938, 4.258786, 4.092826, 3.919845, 4.155242,
   4.053938, 4.126552, 3.950037, 4.19319, 4.014674, 3.904662, 4.009739, 4.183735, 3.96005, 3.90973, 3.90973, 3.914791, 4.068565, 4.004798, 3.884325, 3.950037,
   3.955047, 3.99985, 4.019603, 4.044158, 3.843328, 3.984972, 3.970038, 3.904662, 4.004798, 3.975022, 3.90973, 4.009739, 4.078286, 3.945021, 3.950037, 3.838173,
   3.904662, 3.869002, 3.680155, 3.738871, 3.970038, 3.970038, 3.848477, 3.696261, 3.712297, 3.669379, 3.728264, 3.843328, 3.6909, 3.722949, 3.827841, 3.685532,
   3.781, 3.625953, 3.77576, 3.874117, 3.874117, 3.843328, 3.55982, 3.55982, 3.728264, 3.696261, 3.765257, 3.781, 3.754724, 3.582, 3.620488, 3.642298,
   3.765257, 3.64773, 3.548678, 3.663979, 3.537501, 3.435273, 3.481078, 3.353608, 3.576468, 3.503757, 3.515041, 3.712297, 3.417937, 3.582, 3.435273, 3.526289,
   3.554254, 3.475386, 3.486762, 3.625953, 3.458251, 3.570927, 3.377142, 3.5319, 3.227238, 3.383, 3.503757, 3.400513, 3.435273, 3.475386, 3.492436, 3.300042,
   3.475386, 3.377142, 3.31202, 3.353608, 3.239485, 3.28802, 3.31202, 3.417937, 3.537501, 3.458251, 3.323955, 3.359507, 3.520669, 3.458251, 3.359507, 3.412139,
   3.31202, 3.335848, 3.095713, 3.406331, 3.400513, 3.429504, 3.227238, 3.281992, 3.341778, 3.300042, 3.12753, 3.341778, 3.365395, 3.269904, 3.251687, 3.146466,
   2.991626, 3.095713, 3.159027, 3.317993, 3.371274, 3.263843, 3.089311, 3.306036, 3.263843, 3.359507, 3.177775, 3.28802, 2.998237, 3.239485, 3.159027, 3.275953,
   3.202602, 3.190213, 3.140167, 3.050612, 3.044115, 3.227238, 2.904309, 3.263843, 3.102103, 3.095713, 3.233367, 2.958348, 2.971704, 2.951647, 2.9382, 3.121193,
   2.951647, 2.842289, 3.057096, 2.883784, 3.037603, 3.152753, 3.024538, 2.883784, 2.971704, 2.87691, 2.958348, 2.849246, 3.076465, 2.917913, 2.87691, 2.842289,
   3.082895, 2.944931, 2.897484, 2.9382, 2.856187, 3.076465, 2.706693, 2.904309, 2.778884, 2.991626, 2.883784, 2.965033, 2.985, 2.828321, 2.890642, 2.793098,
   2.87691, 2.87691, 2.897484, 2.764596, 2.991626, 2.771749, 2.849246, 2.771749, 2.699367, 2.735798, 2.856187, 2.821312, 2.721284, 2.856187, 2.771749, 2.814285,
   2.786, 2.62499, 2.609861, 2.750235, 2.721284, 2.721284, 2.684657, 2.835314, 2.677271, 2.579335, 2.842289, 2.883784, 2.735798, 2.728551, 2.735798, 2.828321,
   2.579335, 2.485509, 2.669865, 2.721284, 2.828321, 2.632523, 2.735798, 2.62499, 2.669865, 2.669865, 2.587, 2.579335, 2.640033, 2.662439, 2.80724, 2.602263,
   2.640033, 2.571647, 2.563936, 2.692022, 2.540662, 2.532856, 2.692022, 2.640033, 2.469525, 2.525027, 2.404526, 2.563936, 2.563936, 2.525027, 2.437242, 2.548443,
   2.579335, 2.437242, 2.445353, 2.379694, 2.461494, 2.525027, 2.286336, 2.461494, 2.556201, 2.388, 2.469525, 2.337721, 2.404526, 2.485509, 2.420939, 2.404526,
   2.461494, 2.517173, 2.509295, 2.640033, 2.337721, 2.329235, 2.420939, 2.396277, 2.453437, 2.268949, 2.29498, 2.469525, 2.396277, 2.429105, 2.277659, 2.277659,
   2.260206, 2.277659, 2.21597, 2.224888, 2.509295, 2.3546, 2.233769, 2.161693, 2.3546, 2.207017, 2.548443, 2.233769, 2.277659, 2.268949, 2.106018, 2.134037,
   2.29498, 2.29498, 2.29498, 2.379694, 2.29498, 2.362994, 2.303592, 2.009801, 2.161693, 2.21597, 2.009801, 2.161693, 2.179936, 2.268949, 2.260206, 2.189,
   2.058472, 2.268949, 2.251428, 2.096595, 2.286336, 2.04883, 2.198027, 2.251428, 2.198027, 2.198027, 2.096595, 2.233769, 2.189, 2.189, 1.84545, 2.346175,
   2.058472, 2.039143, 2.106018, 2.198027, 2.189, 2.058472, 2.077621 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1131,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1131,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1131,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1131);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->SetMinimum(-369.4395);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->SetMaximum(3766.819);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1131);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_DHZfirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__132 = new TH1D("data_mc_ratio__132","",1000,0,2000);
   data_mc_ratio__132->SetBinContent(1000,0.8040201);
   data_mc_ratio__132->SetBinContent(1001,1.060255);
   data_mc_ratio__132->SetBinError(1000,0.284264);
   data_mc_ratio__132->SetBinError(1001,0.01468579);
   data_mc_ratio__132->SetMinimum(0.4);
   data_mc_ratio__132->SetMaximum(1.6);
   data_mc_ratio__132->SetEntries(5.931198);
   data_mc_ratio__132->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__132->SetLineColor(ci);
   data_mc_ratio__132->SetLineWidth(2);
   data_mc_ratio__132->SetMarkerStyle(20);
   data_mc_ratio__132->SetMarkerSize(1.2);
   data_mc_ratio__132->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__132->GetXaxis()->SetRange(1,150);
   data_mc_ratio__132->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__132->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__132->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__132->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__132->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__132->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__132->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__132->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__132->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__132->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1132[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1132[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1132[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1132[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007822054, 0.007799183, 0.007671004,
   0.007654805, 0.007662442, 0.007674391, 0.007669875, 0.007693218, 0.007700514, 0.007789239, 0.007809641, 0.007853592, 0.007874992, 0.007922547, 0.00799872, 0.008020559, 0.008022365, 0.008179703, 0.008159256,
   0.008218284, 0.00833073, 0.008323224, 0.008397137, 0.008480059, 0.008466675, 0.008581557, 0.008650636, 0.008678934, 0.008752086, 0.008816478, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2088061 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1132,Graph_from_mc_statistical_error_fy1132,Graph_from_mc_statistical_error_fex1132,Graph_from_mc_statistical_error_fey1132);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1132 = new TH1F("Graph_Graph_from_mc_statistical_error1132","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1132->SetMinimum(0.7494326);
   Graph_Graph_from_mc_statistical_error1132->SetMaximum(1.250567);
   Graph_Graph_from_mc_statistical_error1132->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1132->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1132->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1132->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1132->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1132);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_SR_16->cd();
   Z_mass_DHZfirst_SR_16->Modified();
   Z_mass_DHZfirst_SR_16->cd();
   Z_mass_DHZfirst_SR_16->SetSelected(Z_mass_DHZfirst_SR_16);
}
