#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_17/H_mass_tagFirst_SR_17
//=========  (Wed Feb 14 12:27:14 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_17 = new TCanvas("H_mass_tagFirst_SR_17", "H_mass_tagFirst_SR_17",0,0,600,600);
   H_mass_tagFirst_SR_17->SetHighLightColor(2);
   H_mass_tagFirst_SR_17->Range(0,0,1,1);
   H_mass_tagFirst_SR_17->SetFillColor(0);
   H_mass_tagFirst_SR_17->SetFillStyle(4000);
   H_mass_tagFirst_SR_17->SetBorderMode(0);
   H_mass_tagFirst_SR_17->SetBorderSize(2);
   H_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-11.76931,315.7258,11767.54);
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
   st->SetMaximum(10589.61);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",1000,0,2000);
   st_stack_12->SetMinimum(0.01);
   st_stack_12->SetMaximum(10589.61);
   st_stack_12->SetDirectory(nullptr);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->SetLineWidth(0);
   st_stack_12->GetXaxis()->SetRange(1,150);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,2350.76);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,4765.323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,4726.183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,4714.856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,4757.809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,4704.122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,4748.166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,4641.958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,4664.3);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,4583.272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,4559.472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,4583.091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,4551.29);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,4444.699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,4477.672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,4467.195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,4455.139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,4441.883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,4367.699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,4350.907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,4328.498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,4277.189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,4190.937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,4228.014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,4211.797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,4110.503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,4050.698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,4135.839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,4061.664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,4100.757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2026.9);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,19.80133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,6863.941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.01090578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.1165213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.670809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.200714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,8.829899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,12.82097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,17.95131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,22.71257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,27.08377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,32.05208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,36.21825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,39.93557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,43.38063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,46.03897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,47.91618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,50.05897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,50.93777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,52.37256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,53.44803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,53.47096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,53.5084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,53.71597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,53.62721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,53.59363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,53.28837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,53.14752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,53.05546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,52.6619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,52.6682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,52.47468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,52.3219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,52.33175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,51.70757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,51.49284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,51.14628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,50.90677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,50.95104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,50.05083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,50.16136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,49.80902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,49.34015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,49.42979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,49.54833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,49.00326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,49.33656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,48.75387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,48.85612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,48.54967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,48.3529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,49.16012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,48.53401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,47.7586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,47.91538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,48.08767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,47.88074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,48.20366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,47.43119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,47.44473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,47.1221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,47.01037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,46.62861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,47.10495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,46.47852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,46.08074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,46.16727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,46.22174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,46.08915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,46.06584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,45.34214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,45.6954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,45.48726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,44.9943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,45.18241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,44.86478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,44.43897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,44.93332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,44.60178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,43.66683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,43.98514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,43.80212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,44.00814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,43.60475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,43.28738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,43.65038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,43.15463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,42.74163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,42.97539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,42.62581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,42.652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,42.55774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,42.36075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,42.60499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,42.17802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,41.8954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,41.79605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,41.69834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,42.33098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,41.62189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,42.57335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,41.37923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,40.95062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,41.3677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,40.89161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,41.14588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,41.00784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,40.70747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,41.06993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,41.63121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,40.7081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,40.48675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,39.95741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,40.10405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,40.67259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,40.0216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,40.15384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,39.66019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,40.07546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,39.63108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,40.0254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,39.96572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,39.47202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,39.13813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,39.19754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,39.3063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,38.88865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,39.25609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,39.63493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,38.77213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,39.11571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,39.16957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,39.19893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,38.74032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,38.26739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,38.59178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,38.50711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,38.61685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,38.67774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,38.15504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,38.00089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,38.58865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,38.17957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,38.14672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,37.92637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,37.89397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,38.03766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,37.65905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,37.52286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,37.72496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,37.77418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,37.72427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,37.0329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,37.3226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,37.3974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.03276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,37.11404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,37.26591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,36.62138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,36.76132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,36.70244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,37.10089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,36.59018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,36.73844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,36.26584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,36.05642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,36.68501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,36.18913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,35.99479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,36.25168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,35.60433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,35.60957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,35.44071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,35.55591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,35.89696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,35.35172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,35.64524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,36.05278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,35.64201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,34.89116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,35.24383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,35.08181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,35.22392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,34.99814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,35.0786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,34.29841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,34.46126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,34.74055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,34.41669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,33.9404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,34.28401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,34.18863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,34.03352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,34.03585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,34.1402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,33.74165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,34.32524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,33.54467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,33.63137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,33.6208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,33.22042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,33.0624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,33.22952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,33.2354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,33.01662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,32.84453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,32.59057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,32.85084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,32.79537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,32.54794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,32.50387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,32.093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,32.80747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,32.19225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,31.94123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,32.13791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,32.05627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,32.16249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,31.97867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,31.96589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,31.87152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,31.70603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,31.54425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,31.42241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,31.50965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,31.98737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,31.06666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,30.87252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,30.91764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.1516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,30.87628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,30.90801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,30.57844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,30.26797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,30.80151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,30.35348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,30.34465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,29.83124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,30.35782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,29.84616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,29.7594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,30.02749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,29.99249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,29.89741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,29.16275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,29.74147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,29.5197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,29.41806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,28.78437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,28.85269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,28.9094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,28.91544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,29.00063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,29.1046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,28.74729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,28.83591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,28.81224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,28.48129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,28.05578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,28.36301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,28.62262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,28.09964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,27.97034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,27.97722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,27.97289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,28.03059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,27.87743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,27.90525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,27.42095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,27.79612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,27.41274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,27.17548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,27.18784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,27.32228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,26.84149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,27.12203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,26.95085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,27.09187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,26.68864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,26.90129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,26.67755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,26.44125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,26.22555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,26.41995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,26.14941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,25.97814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,25.90783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,26.00163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,25.52354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,26.01193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,25.33335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,25.55358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,25.71896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,25.51315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,25.20923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,24.94459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,25.29098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,24.99974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,25.10317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,24.97099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,25.40773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,24.81272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,24.84775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,24.88648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,24.42472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.05271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,24.40164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,24.42128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,24.38059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,24.54032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,24.24283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,23.98972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,24.14936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,24.15747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,23.35686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.03599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,23.91981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,23.6764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,23.453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,23.41355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,23.54941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,23.54544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,23.32911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.01995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,22.54135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,22.73055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.09082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,22.89767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,22.9579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.10469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.02619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,22.58375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,22.31933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,22.55227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,22.19595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,22.49107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,22.54565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,22.42475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,22.34463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.01397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.04333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.09306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,21.71812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,21.81552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,22.1607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,21.57891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,21.5146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,21.39763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,21.25222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,21.5093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,21.35928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,21.29807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,20.96576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,21.57084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,20.70265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.13409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,20.96253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,20.8174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,20.62461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.04426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,21.47498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,20.69742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.16658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,20.18873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,20.63206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,20.25707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,20.17333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.12795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,20.21493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.01507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.00577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.45222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.00468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,19.72753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.08637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,19.66667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,19.4654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,19.53823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,19.54296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.18101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,19.16956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,19.42072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,19.47292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,19.5906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,19.40566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.05199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,18.98898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.0302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,18.95445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,18.81598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,18.86221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,18.44455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.06896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.43412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,18.62416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,18.34604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,18.47668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,18.37395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,18.32709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.1066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.17073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,18.26549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,17.77815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,17.93841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,17.57443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.17014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,17.67408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,17.7779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,17.70893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,17.80892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,17.85688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,17.56977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,17.55882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,17.39176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.17102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,17.56714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,17.62487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.06534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,17.32166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,17.5058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,17.31292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,16.91824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.04074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,16.84642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,16.93957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.09932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,16.87938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,16.51405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,16.48789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,16.74946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,16.57921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,16.56754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,16.61668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,16.31627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,16.79672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,16.42268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.18139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,15.99258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,16.90963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,16.38884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,16.1955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,15.74525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,15.88489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,15.88089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,15.49709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.21693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,15.97165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.11856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,15.7393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,15.41342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,15.61307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.00262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,15.76356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,15.65679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.20192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.1259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,14.96603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.11009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,15.41138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,14.71007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,14.78582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.17068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.20631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,14.75962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,14.82552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,14.65555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.45144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,14.65136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,14.73402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,14.49678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,14.67205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,14.54989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,14.54557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,14.52431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,14.68184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.27447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,14.33958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,14.38079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.13321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,14.4442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,13.83601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,14.445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.34478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,13.95281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.11347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,13.70099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,13.81154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.18386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,13.80479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.07949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,13.80198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.02691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,13.85344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.47117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,13.54662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,13.67377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,13.72577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.43438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.35569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.18292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,13.62449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.31123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.21032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.09848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.36763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.08003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.12409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.00342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.10982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.10719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,12.87125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.25003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.0769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.03995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,12.94452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,12.72851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,12.74098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.05263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,12.97702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,12.55211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,12.67335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,12.63506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,12.5266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,12.508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.22497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.40317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,12.74253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,12.61211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.08779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.20983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.17339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.00757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.24994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.18122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.0837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,11.50031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.14175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.12054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,11.86076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,11.81675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,11.79733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.09411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,11.85815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.4452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,11.89311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,11.78427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,11.76974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,11.54412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.2229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,11.92482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,11.90854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.49743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.11681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,11.82141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,10.95922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.17379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,11.69422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.35265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,11.56629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.49887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.26732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,10.80886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,10.9306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.05564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.41966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,11.48645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.10133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.39053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.17277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,10.95235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,10.75483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.06506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,10.62147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,10.84832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.43271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.41314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.19017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.47099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.49127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,10.6857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,10.64261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.44661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,10.60136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,10.91012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.62428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.26372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.37825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.31363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.06035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.27241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.51204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.10747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.23941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,9.997175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.26576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.2097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.09792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,9.75521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.53705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.19415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,9.993553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.587435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,9.978556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.05676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,9.815587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,9.555093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.36128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,9.906328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,9.660744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,9.611755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,9.730449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,9.79907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,9.652413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,9.771295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,9.903511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.512233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.421808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.388471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.467918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,9.65764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,9.561484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.620966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.256847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,9.656758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.262009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.157393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.217602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.041632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.366026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.085482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.259021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.082007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,8.986717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.318085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.378499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.270156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.085943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,8.777252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,8.781665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.40279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,8.688455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.132933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,8.775593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,8.624354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,8.775787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.062607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,8.796221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.042179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,8.868309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,8.897128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,8.545087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.584201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.436927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,8.676068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.517565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,8.773964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.275439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.609682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,8.794295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,8.920572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.243314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.61153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.393795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,8.62452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.181017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.161222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.276167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.471993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.282334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,7.998157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.235512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.338007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.637934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.3503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.417026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.206216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.115305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.169241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.146873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.115758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,7.892892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.01251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.018713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.008174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,7.845155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.104591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.267319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.552705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,7.847557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,7.924523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,7.850022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.26535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,7.807619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,7.810497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,7.751596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,7.609038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,7.707104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,7.842803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.406619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,7.811411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.523485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.560399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.489372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.522181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.666558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.588651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.324081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.47737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.289519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.44103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.530147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.611855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.232891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.350948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.237998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.304959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.14789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.561237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.43905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.278086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.123599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.129892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.502752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.262303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.128717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.028283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,6.978293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,6.977658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.110655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,6.909288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.113727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.332976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,6.894938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.30959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,6.991598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,6.718652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.329384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,6.891392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,6.776042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.573752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.680629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,6.950518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.169216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,6.845976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,6.941934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,6.974404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.170575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,6.972332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,6.824733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.05729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,6.597966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,6.738514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.580626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.616538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,6.669775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.546006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.462948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.167429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,6.728674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.481026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.554582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.646116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.234825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.416053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.467277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.353614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.212928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.507708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,6.74265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.077379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,5.902806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.418819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.153498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.626052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,6.809697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.343306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.128372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.331397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.395411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.595701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.055739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.34493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.194562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.170219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.205837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.237229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,5.992947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.235957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.608914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,5.90656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.262406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.275453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,5.916402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.00363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,5.865557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,5.755146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.044783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,5.937527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.464954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.131006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.382604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.424606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,5.980184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.41496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,5.766246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.560367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.633579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.285394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.658682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,5.782711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,6.156573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,5.84791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,5.93108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.737925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.78305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,5.776563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.679669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.728031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,5.810548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.167623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.514829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,5.883462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.67685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.522139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.625887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.505282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.773403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.481686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.429641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.387117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.396061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,5.82979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.43627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.388792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.719032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.548103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.45303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.181801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.128324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.147362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.403874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.38141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.518056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.629517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.307585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.389053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,4.904338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.329238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.167045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.252399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.777404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,4.976077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.454821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,4.896084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.189636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.182133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.610582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,4.941209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.766671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.699455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,4.990387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.08813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.758883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,4.974908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,4.87762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.279341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.002204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,4.995439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,4.830816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.021526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.546917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.01038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,4.753333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,4.990294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.558345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,4.92795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,4.863202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,4.881134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.159809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,4.9237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,4.870496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,4.92427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,4.849738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.775128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.057724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.615743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.548957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.191085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.557545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.539418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.411879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,4.790302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.659161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,4.862317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.643019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.342615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.401355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.67851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,4.952908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.694936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.536459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.789249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.493856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.8416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,4.811369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.336844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.557716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.627956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.226296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,3.89766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.550142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.473988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.417808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.173131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.32241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.627679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.072152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.538469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.802422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.162404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.44893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.336398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.783783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.356737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.383937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,3.981576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.605555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.361422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.433395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.399013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.352644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.275204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.439382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,3.918703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.009599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.251087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,3.959711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.028961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.235404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.062851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.354985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.03099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.354706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.006166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,3.913146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.174714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.243279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.050511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.189491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,3.935519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.010302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,3.943105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.086929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.429616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.053708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.759874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.598552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.111605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.784323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.566198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,3.963252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.128848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.051718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,3.961193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,3.988215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.188911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,3.85178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.82371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,3.959282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,3.921962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,3.830017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.668235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.088387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.751522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.808929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.468906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.571014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.773294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.666751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.039012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.57352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.637092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.571766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,3.935528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.664212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.442423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.47431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,3.958012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.744293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.688031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.613104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.041302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,57.54972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(1853516);

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
   
   TH1D *VH_tagFirst_H_mass__23 = new TH1D("VH_tagFirst_H_mass__23","",1000,0,2000);
   VH_tagFirst_H_mass__23->SetBinContent(1000,25);
   VH_tagFirst_H_mass__23->SetBinContent(1001,9099);
   VH_tagFirst_H_mass__23->SetEntries(1336267);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__23->SetLineColor(ci);
   VH_tagFirst_H_mass__23->SetLineWidth(2);
   VH_tagFirst_H_mass__23->SetMarkerStyle(20);
   VH_tagFirst_H_mass__23->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__23->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__23->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__23->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__23->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__23->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__23->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__23->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__23->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__23->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__23->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1023[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1023[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2350.76, 4765.323,
   4726.183, 4714.856, 4757.809, 4704.122, 4748.166, 4641.958, 4664.3, 4583.272, 4559.472, 4583.091, 4551.29, 4444.699, 4477.672, 4467.195, 4455.139, 4441.883,
   4367.699, 4350.907, 4328.498, 4277.189, 4190.937, 4228.014, 4211.797, 4110.503, 4050.698, 4135.839, 4061.664, 4100.757, 2026.9, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 19.80133 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1023[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1023[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0.01090578, 0, 0.1165213, 1.670809, 4.200714, 8.829899, 12.82097, 17.95131, 22.71257,
   27.08377, 32.05208, 36.21825, 39.93557, 43.38063, 46.03897, 47.91618, 50.05897, 50.93777, 52.37256, 53.44803, 53.47096, 53.5084, 53.71597, 53.62721, 53.59363,
   53.28837, 53.14752, 53.05546, 52.6619, 52.6682, 52.47468, 52.3219, 52.33175, 51.70757, 51.49284, 51.14628, 50.90677, 50.95104, 50.05083, 50.16136, 49.80902,
   49.34015, 49.42979, 49.54833, 49.00326, 49.33656, 48.75387, 48.85612, 48.54967, 48.3529, 49.16012, 48.53401, 47.7586, 47.91538, 48.08767, 47.88074, 48.20366,
   47.43119, 47.44473, 47.1221, 47.01037, 46.62861, 47.10495, 46.47852, 46.08074, 46.16727, 46.22174, 46.08915, 46.06584, 45.34214, 45.6954, 45.48726, 44.9943,
   45.18241, 44.86478, 44.43897, 44.93332, 44.60178, 43.66683, 43.98514, 43.80212, 44.00814, 43.60475, 43.28738, 43.65038, 43.15463, 42.74163, 42.97539, 42.62581,
   42.652, 42.55774, 42.36075, 42.60499, 42.17802, 41.8954, 41.79605, 41.69834, 42.33098, 41.62189, 42.57335, 41.37923, 40.95062, 41.3677, 40.89161, 41.14588,
   41.00784, 40.70747, 41.06993, 41.63121, 40.7081, 40.48675, 39.95741, 40.10405, 40.67259, 40.0216, 40.15384, 39.66019, 40.07546, 39.63108, 40.0254, 39.96572,
   39.47202, 39.13813, 39.19754, 39.3063, 38.88865, 39.25609, 39.63493, 38.77213, 39.11571, 39.16957, 39.19893, 38.74032, 38.26739, 38.59178, 38.50711, 38.61685,
   38.67774, 38.15504, 38.00089, 38.58865, 38.17957, 38.14672, 37.92637, 37.89397, 38.03766, 37.65905, 37.52286, 37.72496, 37.77418, 37.72427, 37.0329, 37.3226,
   37.3974, 38.03276, 37.11404, 37.26591, 36.62138, 36.76132, 36.70244, 37.10089, 36.59018, 36.73844, 36.26584, 36.05642, 36.68501, 36.18913, 35.99479, 36.25168,
   35.60433, 35.60957, 35.44071, 35.55591, 35.89696, 35.35172, 35.64524, 36.05278, 35.64201, 34.89116, 35.24383, 35.08181, 35.22392, 34.99814, 35.0786, 34.29841,
   34.46126, 34.74055, 34.41669, 33.9404, 34.28401, 34.18863, 34.03352, 34.03585, 34.1402, 33.74165, 34.32524, 33.54467, 33.63137, 33.6208, 33.22042, 33.0624,
   33.22952, 33.2354, 33.01662, 32.84453, 32.59057, 32.85084, 32.79537, 32.54794, 32.50387, 32.093, 32.80747, 32.19225, 31.94123, 32.13791, 32.05627, 32.16249,
   31.97867, 31.96589, 31.87152, 31.70603, 31.54425, 31.42241, 31.50965, 31.98737, 31.06666, 30.87252, 30.91764, 31.1516, 30.87628, 30.90801, 30.57844, 30.26797,
   30.80151, 30.35348, 30.34465, 29.83124, 30.35782, 29.84616, 29.7594, 30.02749, 29.99249, 29.89741, 29.16275, 29.74147, 29.5197, 29.41806, 28.78437, 28.85269,
   28.9094, 28.91544, 29.00063, 29.1046, 28.74729, 28.83591, 28.81224, 28.48129, 28.05578, 28.36301, 28.62262, 28.09964, 27.97034, 27.97722, 27.97289, 28.03059,
   27.87743, 27.90525, 27.42095, 27.79612, 27.41274, 27.17548, 27.18784, 27.32228, 26.84149, 27.12203, 26.95085, 27.09187, 26.68864, 26.90129, 26.67755, 26.44125,
   26.22555, 26.41995, 26.14941, 25.97814, 25.90783, 26.00163, 25.52354, 26.01193, 25.33335, 25.55358, 25.71896, 25.51315, 25.20923, 24.94459, 25.29098, 24.99974,
   25.10317, 24.97099, 25.40773, 24.81272, 24.84775, 24.88648, 24.42472, 25.05271, 24.40164, 24.42128, 24.38059, 24.54032, 24.24283, 23.98972, 24.14936, 24.15747,
   23.35686, 24.03599, 23.91981, 23.6764, 23.453, 23.41355, 23.54941, 23.54544, 23.32911, 23.01995, 22.54135, 22.73055, 23.09082, 22.89767, 22.9579, 23.10469,
   23.02619, 22.58375, 22.31933, 22.55227, 22.19595, 22.49107, 22.54565, 22.42475, 22.34463, 22.01397, 22.04333, 22.09306, 21.71812, 21.81552, 22.1607, 21.57891,
   21.5146, 21.39763, 21.25222, 21.5093, 21.35928, 21.29807, 20.96576, 21.57084, 20.70265, 21.13409, 20.96253, 20.8174, 20.62461, 21.04426, 21.47498, 20.69742,
   20.16658, 20.18873, 20.63206, 20.25707, 20.17333, 20.12795, 20.21493, 20.01507, 20.00577, 20.45222, 20.00468, 19.72753, 20.08637, 19.66667, 19.4654, 19.53823,
   19.54296, 19.18101, 19.16956, 19.42072, 19.47292, 19.5906, 19.40566, 19.05199, 18.98898, 19.0302, 18.95445, 18.81598, 18.86221, 18.44455, 19.06896, 18.43412,
   18.62416, 18.34604, 18.47668, 18.37395, 18.32709, 18.1066, 18.17073, 18.26549, 17.77815, 17.93841, 17.57443, 18.17014, 17.67408, 17.7779, 17.70893, 17.80892,
   17.85688, 17.56977, 17.55882, 17.39176, 17.17102, 17.56714, 17.62487, 17.06534, 17.32166, 17.5058, 17.31292, 16.91824, 17.04074, 16.84642, 16.93957, 17.09932,
   16.87938, 16.51405, 16.48789, 16.74946, 16.57921, 16.56754, 16.61668, 16.31627, 16.79672, 16.42268, 16.18139, 15.99258, 16.90963, 16.38884, 16.1955, 15.74525,
   15.88489, 15.88089, 15.49709, 16.21693, 15.97165, 16.11856, 15.7393, 15.41342, 15.61307, 16.00262, 15.76356, 15.65679, 15.20192, 15.1259, 14.96603, 15.11009,
   15.41138, 14.71007, 14.78582, 15.17068, 15.20631, 14.75962, 14.82552, 14.65555, 14.45144, 14.65136, 14.73402, 14.49678, 14.67205, 14.54989, 14.54557, 14.52431,
   14.68184, 14.27447, 14.33958, 14.38079, 14.13321, 14.4442, 13.83601, 14.445, 14.34478, 13.95281, 14.11347, 13.70099, 13.81154, 14.18386, 13.80479, 14.07949,
   13.80198, 14.02691, 13.85344, 13.47117, 13.54662, 13.67377, 13.72577, 13.43438, 13.35569, 13.18292, 13.62449, 13.31123, 13.21032, 13.09848, 13.36763, 13.08003,
   13.12409, 13.00342, 13.10982, 13.10719, 12.87125, 13.25003, 13.0769, 13.03995, 12.94452, 12.72851, 12.74098, 13.05263, 12.97702, 12.55211, 12.67335, 12.63506,
   12.5266, 12.508, 12.22497, 12.40317, 12.74253, 12.61211, 12.08779, 12.20983, 12.17339, 12.00757, 12.24994, 12.18122, 12.0837, 11.50031, 12.14175, 12.12054,
   11.86076, 11.81675, 11.79733, 12.09411, 11.85815, 11.4452, 11.89311, 11.78427, 11.76974, 11.54412, 11.2229, 11.92482, 11.90854, 11.49743, 11.11681, 11.82141,
   10.95922, 11.17379, 11.69422, 11.35265, 11.56629, 11.49887, 11.26732, 10.80886, 10.9306, 11.05564, 11.41966, 11.48645, 11.10133, 11.39053, 11.17277, 10.95235,
   10.75483, 11.06506, 10.62147, 10.84832, 10.43271, 10.41314, 11.19017, 10.47099, 10.49127, 10.6857, 10.64261, 10.44661, 10.60136, 10.91012, 10.62428, 10.26372,
   10.37825, 10.31363, 10.06035, 10.27241, 10.26, 10.51204, 10.10747, 10.23941, 9.997175, 10.26576, 10.2097, 10.09792, 9.75521, 10.53705, 10.19415, 9.993553,
   9.587435, 9.978556, 10.05676, 9.815587, 9.555093, 10.36128, 9.906328, 9.660744, 9.611755, 9.730449, 9.79907, 9.652413, 9.771295, 9.903511, 9.512233, 9.421808,
   9.388471, 9.467918, 9.65764, 9.561484, 9.620966, 9.256847, 9.656758, 9.262009, 9.157393, 9.217602, 9.041632, 9.366026, 9.085482, 9.259021, 9.082007, 8.986717,
   9.318085, 9.378499, 9.270156, 9.085943, 8.777252, 8.781665, 8.40279, 8.688455, 9.132933, 8.775593, 8.624354, 8.775787, 9.062607, 8.796221, 9.042179, 8.868309,
   8.897128, 8.545087, 8.584201, 8.436927, 8.676068, 8.517565, 8.773964, 8.275439, 8.609682, 8.794295, 8.920572, 8.243314, 8.61153, 8.393795, 8.62452, 8.181017,
   8.161222, 8.276167, 8.471993, 8.282334, 7.998157, 8.235512, 8.338007, 8.637934, 8.3503, 8.417026, 8.206216, 8.115305, 8.169241, 8.146873, 8.115758, 7.892892,
   8.01251, 8.018713, 8.008174, 7.845155, 8.104591, 8.267319, 7.552705, 7.847557, 7.924523, 7.850022, 8.26535, 7.807619, 7.810497, 7.751596, 7.609038, 7.707104,
   7.842803, 7.406619, 7.811411, 7.523485, 7.560399, 7.489372, 7.522181, 7.666558, 7.588651, 7.324081, 7.47737, 7.289519, 7.44103, 7.530147, 7.611855, 7.232891,
   7.350948, 7.237998, 7.304959, 7.14789, 7.561237, 7.43905, 7.278086, 7.123599, 7.129892, 7.502752, 7.262303, 7.128717, 7.028283, 6.978293, 6.977658, 7.110655,
   6.909288, 7.113727, 7.332976, 6.894938, 7.30959, 6.991598, 6.718652, 7.329384, 6.891392, 6.776042, 6.573752, 6.680629, 6.950518, 7.169216, 6.845976, 6.941934,
   6.974404, 7.170575, 6.972332, 6.824733, 7.05729, 6.597966, 6.738514, 6.580626, 6.616538, 6.669775, 6.546006, 6.462948, 7.167429, 6.728674, 6.481026, 6.554582,
   6.646116, 6.234825, 6.416053, 6.467277, 6.353614, 6.212928, 6.507708, 6.74265, 6.077379, 5.902806, 6.418819, 6.153498, 6.626052, 6.809697, 6.343306, 6.128372,
   6.331397, 6.395411, 6.595701, 6.055739, 6.34493, 6.194562, 6.170219, 6.205837, 6.237229, 5.992947, 6.235957, 5.608914, 5.90656, 6.262406, 6.275453, 5.916402,
   6.00363, 5.865557, 5.755146, 6.044783, 5.937527, 5.464954, 6.131006, 5.382604, 5.424606, 5.980184, 5.41496, 5.766246, 5.560367, 5.633579, 6.285394, 5.658682,
   5.782711, 6.156573, 5.84791, 5.93108, 5.737925, 5.78305, 5.776563, 5.679669, 5.728031, 5.810548, 6.167623, 5.514829, 5.883462, 5.67685, 5.522139, 5.625887,
   5.505282, 5.773403, 5.481686, 5.429641, 5.387117, 5.396061, 5.82979, 5.43627, 5.388792, 5.719032, 5.548103, 5.45303, 5.181801, 5.128324, 5.147362, 5.403874,
   5.38141, 5.518056, 5.629517, 5.307585, 5.389053, 4.904338, 5.329238, 5.167045, 5.252399, 5.777404, 4.976077, 5.454821, 4.896084, 5.189636, 5.182133, 5.610582,
   4.941209, 4.766671, 4.699455, 4.990387, 5.08813, 4.758883, 4.974908, 4.87762, 5.279341, 5.002204, 4.995439, 4.830816, 5.021526, 4.546917, 5.01038, 4.753333,
   4.990294, 4.558345, 4.92795, 4.863202, 4.881134, 5.159809, 4.9237, 4.870496, 4.92427, 4.849738, 4.775128, 5.057724, 4.615743, 4.548957, 5.191085, 4.557545,
   4.539418, 4.411879, 4.790302, 4.659161, 4.862317, 4.643019, 4.342615, 4.401355, 4.67851, 4.952908, 4.694936, 4.536459, 4.789249, 4.493856, 4.8416, 4.811369,
   4.336844, 4.557716, 4.627956, 4.226296, 3.89766, 4.550142, 4.473988, 4.417808, 4.173131, 4.32241, 4.627679, 4.072152, 4.538469, 4.802422, 4.162404, 4.44893,
   4.336398, 3.783783, 4.356737, 4.383937, 3.981576, 4.605555, 4.361422, 4.433395, 4.399013, 4.352644, 4.275204, 4.439382, 3.918703, 4.009599, 4.251087, 3.959711,
   4.028961, 4.235404, 4.062851, 4.354985, 4.03099, 4.354706, 4.006166, 3.913146, 4.174714, 4.243279, 4.050511, 4.189491, 3.935519, 4.010302, 3.943105, 4.086929,
   4.429616, 4.053708, 3.759874, 3.598552, 4.111605, 3.784323, 3.566198, 3.963252, 4.128848, 4.051718, 3.961193, 3.988215, 4.188911, 3.85178, 3.82371, 3.959282,
   3.921962, 3.830017, 3.668235, 4.088387, 3.751522, 3.808929, 3.468906, 3.571014, 3.773294, 3.666751, 4.039012, 3.57352, 3.637092, 3.571766, 3.935528, 3.664212,
   3.442423, 3.47431, 3.958012, 3.744293, 3.688031, 3.613104, 4.041302 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1023,Graph_from_VH_tagFirst_2b1c_H_mass_fy1023,Graph_from_VH_tagFirst_2b1c_H_mass_fex1023,Graph_from_VH_tagFirst_2b1c_H_mass_fey1023);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->SetMinimum(-540.6008);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->SetMaximum(5302.017);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1023);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",1000,0,2000);
   data_mc_ratio__24->SetBinContent(1000,1.262542);
   data_mc_ratio__24->SetBinContent(1001,1.325623);
   data_mc_ratio__24->SetBinError(1000,0.2525083);
   data_mc_ratio__24->SetBinError(1001,0.01779496);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(12.24684);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(1,150);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1024[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02133836, 0.01045239,
   0.01043975, 0.01048384, 0.01041411, 0.01041709, 0.01039066, 0.01050287, 0.01047448, 0.0105928, 0.01060493, 0.01072641, 0.01066379, 0.01074507, 0.01070096, 0.01076462, 0.0107473, 0.01085208,
   0.01085954, 0.01090456, 0.01088648, 0.01099095, 0.01112606, 0.01114115, 0.01103532, 0.01121049, 0.01139736, 0.0111759, 0.01134736, 0.0112335, 0.02237019, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2040925 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.755089);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.244911);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->SetSelected(H_mass_tagFirst_SR_17);
}
