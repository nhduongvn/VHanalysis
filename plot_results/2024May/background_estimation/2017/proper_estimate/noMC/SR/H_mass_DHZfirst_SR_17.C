#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_SR_17()
{
//=========Macro generated from canvas: H_mass_DHZfirst_SR_17/H_mass_DHZfirst_SR_17
//=========  (Fri May 24 11:23:55 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_SR_17 = new TCanvas("H_mass_DHZfirst_SR_17", "H_mass_DHZfirst_SR_17",0,0,600,600);
   H_mass_DHZfirst_SR_17->SetHighLightColor(2);
   H_mass_DHZfirst_SR_17->Range(0,0,1,1);
   H_mass_DHZfirst_SR_17->SetFillColor(0);
   H_mass_DHZfirst_SR_17->SetFillStyle(4000);
   H_mass_DHZfirst_SR_17->SetBorderMode(0);
   H_mass_DHZfirst_SR_17->SetBorderSize(2);
   H_mass_DHZfirst_SR_17->SetFrameFillStyle(1000);
   H_mass_DHZfirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-1.740983,315.7258,1749.242);
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
   st->SetMaximum(1574.144);
   
   TH1F *st_stack_60 = new TH1F("st_stack_60","",1000,0,2000);
   st_stack_60->SetMinimum(0.01);
   st_stack_60->SetMaximum(1574.144);
   st_stack_60->SetDirectory(nullptr);
   st_stack_60->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_60->SetLineColor(ci);
   st_stack_60->SetLineWidth(0);
   st_stack_60->GetXaxis()->SetRange(1,150);
   st_stack_60->GetXaxis()->SetLabelFont(42);
   st_stack_60->GetXaxis()->SetTitleOffset(1);
   st_stack_60->GetXaxis()->SetTitleFont(42);
   st_stack_60->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_60->GetYaxis()->SetLabelFont(42);
   st_stack_60->GetYaxis()->SetLabelSize(0.05);
   st_stack_60->GetYaxis()->SetTitleSize(0.057);
   st_stack_60->GetYaxis()->SetTitleOffset(1.2);
   st_stack_60->GetYaxis()->SetTitleFont(42);
   st_stack_60->GetZaxis()->SetLabelFont(42);
   st_stack_60->GetZaxis()->SetTitleOffset(1);
   st_stack_60->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_60);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,361.2145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(49,700.8617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(50,708.3646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(51,702.771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(52,671.4073);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(53,657.355);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(54,683.8072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(55,649.2162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(56,646.4963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(57,628.2707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(58,649.1368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(59,615.7352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(60,638.6748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(61,600.7822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(62,630.3873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(63,599.8058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(64,595.6325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(65,596.9436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(66,588.8154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(67,575.5197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(68,572.4467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(69,569.5876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(70,558.3959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(71,549.1985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(72,544.6924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(73,556.884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(74,533.4944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(75,544.6791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(76,518.7597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(77,520.5279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,264.9848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,3.869353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,1918.939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(8,0.003665371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(9,0.007974335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,0.01721554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,0.2073969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,0.5073424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,0.9872323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,1.537044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,2.207985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,2.957514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,3.889004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,4.899963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,6.038794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,6.986888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,8.268772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,9.035246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,9.947393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,10.65928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,11.6501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,12.12807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,12.7492);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,12.86039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,13.00404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,13.54125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,13.61049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,13.74598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,13.97835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,14.1439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,14.74187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,14.00003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,14.36453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,14.15213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,14.01061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,14.12069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,13.916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,13.85346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,13.94926);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,13.53198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,13.58686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,13.33762);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,13.05818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,12.83895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,12.94449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,12.66336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,12.63006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,12.46003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,12.60599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,12.33045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,12.57171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,12.19305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,12.49019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,12.17455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,12.12208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,12.13484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,12.18789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,12.26167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,11.93248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,11.97304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,11.81533);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,11.60343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,11.6042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,11.67417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,11.42728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,11.51155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,11.23085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,11.39935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,11.20319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,11.18526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,11.08715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,10.97921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,11.12976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,10.87842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,10.71629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,10.96812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,11.11442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,10.79362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,10.74922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,10.84984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,10.45612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,10.56172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,10.50379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,10.36209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,10.61478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,10.3769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,10.23715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,10.2294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,10.31031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,10.32304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,10.14887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,10.13562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,10.03396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,9.93567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,10.15648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,10.00714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,9.923235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,9.948653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,9.931012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,9.810483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,9.859626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,9.607412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,9.563441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,9.529872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,9.569293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,9.472916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,9.391099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,9.496441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,9.434799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,9.384303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,9.496724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,9.410641);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,9.398742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,9.290067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,9.267806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,9.235737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,9.1328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,9.116286);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,8.964737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,8.893096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,9.253562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,9.165261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,8.986756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,9.022168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,8.915423);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,8.991294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,9.004932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,8.811385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,8.824367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,8.673174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,8.602338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,8.686774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,8.754654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,8.698606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,8.665842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,8.683535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,8.720094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,8.706633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,8.559612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,8.661314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,8.61773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,8.647851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,8.68098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,8.585046);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,8.486976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,8.429694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,8.42949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,8.384746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,8.338592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,8.608532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,8.417194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,8.325937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,8.364777);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,8.360727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,8.279442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,8.309318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,8.284367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,8.239746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,8.227537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,8.071696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,8.053679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,8.236563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,8.330616);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,8.044913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,7.981342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,8.159356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,8.214677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,7.951939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,8.043374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,7.892821);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,7.940469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,7.944765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,8.123416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,7.692354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,7.928258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,7.97897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,7.917504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,7.754538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,7.880351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,7.760921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,7.926395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,7.875491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,7.726013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,7.596008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,7.723525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,7.712758);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,7.555574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,7.493259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,7.662303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,7.510296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,7.593434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,7.448597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,7.676243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,7.364321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,7.503997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,7.372573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,7.512192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,7.587853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,7.453925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,7.356257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,7.314169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,7.546332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,7.383291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,7.674257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,7.227405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,7.240011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,7.333245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,7.47965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,7.354883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,7.233847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,7.492944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,7.010984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,7.208661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,7.277852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,7.223034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,7.153638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,7.213901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,6.902268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,7.107851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,7.187727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,6.94427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,7.322737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,7.037485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,7.290489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,6.936337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,6.9318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,6.856708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,7.025202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,6.970258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,6.880239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,6.873625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,6.839869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,7.352726);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,6.982878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,6.873485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,6.898954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,6.718962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,6.955831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,6.799248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,6.770546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,6.575098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,6.910703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,6.902499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,6.752523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,6.971288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,6.712565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,6.740377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,6.580309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,6.750973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,6.487671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,6.749127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,6.55867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,6.773793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,6.588884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,6.598528);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,6.522818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,6.648681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,6.58552);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,6.441853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,6.505034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,6.775807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,6.401029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,6.472615);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,6.439131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,6.56134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,6.416274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,6.343423);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,6.2937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,6.27652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,6.300141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,6.309789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,6.363774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,6.448207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,6.336448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,6.294139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,6.184394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,6.229978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,6.39595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,6.296711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,6.173042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,6.216357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,6.290885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,6.20793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,6.245722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,6.123137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,6.151846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,6.227259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,6.328772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,6.178807);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,6.06767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,5.964422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,6.177586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,6.146082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,5.948242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,6.091724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,5.943477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,5.99914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,6.028933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,6.034649);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,6.011586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,6.111748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,5.81116);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,6.63094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,5.955723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,5.839457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,5.91623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,5.757045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,5.817098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,5.94223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,5.700368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,5.774209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,5.986561);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,5.711408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,5.680189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,5.741584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,5.791454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,5.587738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,5.705508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,5.8428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,5.545353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,5.984455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,5.792345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,5.669921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,5.7466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,5.644487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,5.602422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,5.495357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,5.722719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,5.502246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,5.709489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,5.638226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,5.509643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,5.822269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,5.551465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,5.549706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,5.403698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,5.317652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,5.493413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,5.423255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,5.598811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,5.500811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,5.398425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,5.563973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,5.615927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,5.467248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,5.431732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,5.257623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,5.185902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,5.26498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,5.290604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,5.295814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,5.343449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,5.569145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,5.209963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,5.263626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,5.389782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,5.238054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,5.392608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,5.566563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,5.229378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,5.217773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,5.049564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,5.187365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,5.374081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,5.039193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,4.969885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,5.251796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,5.070395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,5.038835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,5.314083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,5.166797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,4.908564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,5.155041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,5.218392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,5.145132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,5.104193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,5.051177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,5.060289);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,5.157701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,5.103233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,5.076222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,5.055436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,4.9504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,4.852303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,5.004604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,4.809516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,4.90354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,4.98345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,4.992665);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,5.079186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,4.892129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,4.911012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,4.902267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,4.92203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,4.738719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,4.63724);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,4.868861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,4.745439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,4.623855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,4.904382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,4.836178);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,4.757147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,4.627768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,4.655298);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,4.668204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,4.692791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,4.930138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,4.634166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,4.443233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,4.450471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,4.733914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,4.507425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,4.838866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,4.642545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,4.711428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,4.587664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,4.622699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,4.725646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,4.757065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,4.693618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,4.563798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,4.4691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,4.399888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,4.49554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,4.548109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,4.460802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,4.455998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,4.606598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,4.343817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,4.460291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,4.444406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,4.594968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,4.604748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,4.382475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,4.55534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,4.648653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,4.570797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,4.407081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,4.408814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,4.348253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,4.536586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,4.400816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,4.291018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,4.407732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,4.443151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,4.335074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,4.192238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,4.355808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,4.395067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,4.359129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,4.076354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,4.180344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,4.087093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,4.214077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,4.036669);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,4.218374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,4.244897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,4.12378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,4.221322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,4.213406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,4.21308);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,3.848756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,4.013911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,4.042265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,4.082657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,4.173774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,4.044008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,4.041583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,3.856082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,3.976385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,3.976264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,4.042368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,4.17319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,3.950988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,4.177812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,4.057245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,4.041904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,4.228949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,4.08549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,4.08084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,3.69876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,3.898184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,3.801651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,3.920443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,4.020934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,3.8199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,3.763711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,3.826544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,3.899774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,3.913816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,3.871155);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,3.746225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,3.876633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,3.689815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,3.83612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,3.654966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,3.764121);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,3.664678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,3.832504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,3.621694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,3.510072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,3.856077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,3.80148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,3.614419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,3.705522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,3.672513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,3.669305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,3.602618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,3.699837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,3.763524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,3.654121);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,3.669273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,3.583717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,3.829897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,3.52731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,3.518634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,3.949487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,3.721142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,3.678494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,3.537803);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,3.632433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,3.605047);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,3.63918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,3.759026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,3.59351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,3.555941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,3.544796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,3.508878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,3.542032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,3.575356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,3.50919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,3.661511);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,3.452214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,3.369813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,3.399146);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,3.503081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,3.480743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,3.405907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,3.401151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,3.423023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,3.435993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,3.331559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,3.35856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,3.557791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,3.54094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,3.270538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,3.353563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,3.420797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,3.322221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,3.110428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,3.403935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,3.475263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,3.178504);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,3.184596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,3.304164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,3.296746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,3.199453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,3.377538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,3.265514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,3.306296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,3.253707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,3.333529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,3.303732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,3.151271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,3.178407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,3.037246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,3.186181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,3.134331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,3.128901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,3.134618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,3.197559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,3.264264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,3.291569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,3.285817);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,3.063362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,3.090173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,3.210005);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,3.030079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,3.126166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,3.047354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,2.994877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,3.199106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,3.068951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,3.149032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,3.146654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,3.146527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,3.161281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,3.149648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,3.208059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,3.003225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,3.185784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,2.90162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,3.055396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,3.111906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,2.876437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,2.926943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,2.995401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,3.114406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,2.987644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,3.016586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,2.974175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,3.153468);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,3.030628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,2.972653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,2.980089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,3.037744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,3.079471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,2.948852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,2.848848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,2.953965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,3.008905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,2.88518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,2.821764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,2.980572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,3.009273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,2.902402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,2.79797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,2.879765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,2.956693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,3.11477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,3.019714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,2.960952);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,2.703122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,2.79934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,2.839942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,3.098813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,2.781983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,2.970162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,2.699384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,3.030457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,2.92784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,2.718412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,2.977218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,2.897897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,2.852739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,2.857633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,2.766751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,2.638832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,2.828116);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,2.819481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,2.529529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,2.88065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,2.82969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,2.84679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,2.840688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,2.721514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,2.739354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,2.813193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,2.762004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,2.587671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,2.687125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,2.731837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,2.689197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,2.612274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,2.518396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,2.79159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,2.531921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,2.742772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,2.686714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,2.6269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,2.571943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,2.58522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,2.763647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,2.451612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,2.682603);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,2.506079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,2.710623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,2.608634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,2.476878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.698572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,2.521732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,2.721846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,2.66197);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,2.466418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,2.558966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,2.376815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,2.48308);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.437606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,2.605606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,2.467837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,2.546473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,2.470785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.514204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.734184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,2.575086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.545136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,2.690482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.525196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.592868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.605348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.55506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,2.595789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,2.527816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.619765);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,2.507536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.516083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,2.332087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,2.382358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,2.399818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,2.436148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,2.457723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.635928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,2.217093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.289396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,2.36718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.611766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.298767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,2.19617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,2.290109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,2.551441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.514499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,2.360865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,2.413571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,2.527869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,2.398542);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,2.201333);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,2.254032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.111284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,2.407627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,2.381869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,2.457895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,2.317072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,2.402228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,2.552233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,2.373742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,2.266851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,2.32365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,2.369873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,2.347612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,2.287567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,2.23049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,2.409421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,2.19181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,2.378916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,2.360238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.316712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,2.138225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,2.229794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,2.278643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,2.436928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,2.210263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,2.205188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,2.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,2.260128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,2.266011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,2.230609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,2.263924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,2.072497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,2.102833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,2.12732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,2.199623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,2.282407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,2.183377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,2.240366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,2.229071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,2.108488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,2.315942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,2.271295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,2.138522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,2.219484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,2.243975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,2.106699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.122732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.228089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,2.394048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,1.974351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.232607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,2.05235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,2.160182);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.00042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.100621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,2.235453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.091392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,2.248281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,2.143654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,1.987474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,2.000451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,2.022863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,1.98024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,2.018215);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,2.036564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,2.115731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.019915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,2.04136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.062329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.083455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.190784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,1.978783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,1.706754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.051301);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.121811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,2.109656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,1.956217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,2.188446);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.04099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,1.9932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,1.876434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,1.886846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.006736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,2.126111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,1.853096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,1.963657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,1.919856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,1.900212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,1.953984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,1.785183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.159176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,1.955719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.112165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,1.864931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,2.028406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,1.867033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.019438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,1.890161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.019416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,1.816292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,1.930809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.130659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,1.755993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,1.88458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,1.990031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,1.799786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,2.00208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,1.896541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,1.803657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,1.944637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,1.919242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,1.863789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,2.027844);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,1.785713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,1.89989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,2.11808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,1.933037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,1.809622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,1.819161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,1.783099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,1.865127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,1.633053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,1.903839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,1.961378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.936972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,1.817328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.905626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.898885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,1.756157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,1.853625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,2.078609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,1.973249);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,1.989393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,1.808695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,1.933061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,1.731986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.706366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,1.715547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.874417);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.996156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,1.920426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.955377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.648626);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.920377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.923971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,1.759421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.660757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,2.021199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.686183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.777688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.81841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,1.582863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.706282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.680759);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,1.663021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,1.59408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.710466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,1.797384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.631644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.687517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,1.657536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,1.943587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.621483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.649993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.709164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,1.512391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.75739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,1.80678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.755595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.648555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.802751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.643335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.732202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.618746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.732043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.849269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.756608);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,1.780281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.568147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.534905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.645425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.803797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.630651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.698909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.539919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.683481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.480115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.684746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.585521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.650249);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.626898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.487193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.710259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.617407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.539211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.692324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.63145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.526014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.549434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.521814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.424684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.497965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.658274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.535917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.522297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.535327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.421501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.564165);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.500048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.63154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.491625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.466117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.59551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.64796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.455478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.408026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.573947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.747723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.631899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.521576);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.440581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.550631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.464177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.56033);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.464379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.379829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.477929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.403556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.391637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.310881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.355111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.465644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.449764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.691569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.492575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.497331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.744062);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.443097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.372435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.281371);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.447792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.486048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.426987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.528044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.373091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.536795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.546295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.573524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.435059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,1.378601);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.42383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.578415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.357217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.492438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.31303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.35734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.396068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.341389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.34481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.462698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.403918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.280149);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.392659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.493336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.564201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.421219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.394302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.259071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.315621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,1.343527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.375232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.407901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.31055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.358508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,21.47778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(553615.2);

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
   
   TH1D *VH_DHZfirst_H_mass__119 = new TH1D("VH_DHZfirst_H_mass__119","",1000,0,2000);
   VH_DHZfirst_H_mass__119->SetBinContent(1000,4);
   VH_DHZfirst_H_mass__119->SetBinContent(1001,2280);
   VH_DHZfirst_H_mass__119->SetEntries(145453);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__119->SetLineColor(ci);
   VH_DHZfirst_H_mass__119->SetLineWidth(2);
   VH_DHZfirst_H_mass__119->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__119->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__119->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__119->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__119->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__119->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__119->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__119->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__119->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__119->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__119->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__119->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1119[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1119[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361.2145, 700.8617,
   708.3646, 702.771, 671.4073, 657.355, 683.8072, 649.2162, 646.4963, 628.2707, 649.1368, 615.7352, 638.6748, 600.7822, 630.3873, 599.8058, 595.6325, 596.9436,
   588.8154, 575.5197, 572.4467, 569.5876, 558.3959, 549.1985, 544.6924, 556.884, 533.4944, 544.6791, 518.7597, 520.5279, 264.9848, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.869353 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1119[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1119[1000] = { 0, 0, 0, 0, 0, 0, 0, 0.003665371, 0.007974335, 0, 0, 0, 0, 0, 0.01721554, 0.2073969, 0.5073424,
   0.9872323, 1.537044, 2.207985, 2.957514, 3.889004, 4.899963, 6.038794, 6.986888, 8.268772, 9.035246, 9.947393, 10.65928, 11.6501, 12.12807, 12.7492, 12.86039,
   13.00404, 13.54125, 13.61049, 13.74598, 13.97835, 14.1439, 14.74187, 14.00003, 14.36453, 14.15213, 14.01061, 14.12069, 13.916, 13.85346, 13.94926, 13.53198,
   13.58686, 13.33762, 13.05818, 12.83895, 12.94449, 12.66336, 12.63006, 12.46003, 12.60599, 12.33045, 12.57171, 12.19305, 12.49019, 12.17455, 12.12208, 12.13484,
   12.18789, 12.26167, 11.93248, 11.97304, 11.81533, 11.60343, 11.6042, 11.67417, 11.42728, 11.51155, 11.23085, 11.39935, 11.20319, 11.18526, 11.08715, 10.97921,
   11.12976, 10.87842, 10.71629, 10.96812, 11.11442, 10.79362, 10.74922, 10.84984, 10.45612, 10.56172, 10.50379, 10.36209, 10.61478, 10.3769, 10.23715, 10.2294,
   10.31031, 10.32304, 10.14887, 10.13562, 10.03396, 9.93567, 10.15648, 10.00714, 9.923235, 9.948653, 9.931012, 9.810483, 9.859626, 9.607412, 9.563441, 9.529872,
   9.569293, 9.472916, 9.391099, 9.496441, 9.434799, 9.384303, 9.496724, 9.410641, 9.398742, 9.290067, 9.267806, 9.235737, 9.1328, 9.116286, 8.964737, 8.893096,
   9.253562, 9.165261, 8.986756, 9.022168, 8.915423, 8.991294, 9.004932, 8.811385, 8.824367, 8.673174, 8.602338, 8.686774, 8.754654, 8.698606, 8.665842, 8.683535,
   8.720094, 8.706633, 8.559612, 8.661314, 8.61773, 8.647851, 8.68098, 8.585046, 8.486976, 8.429694, 8.42949, 8.384746, 8.338592, 8.608532, 8.417194, 8.325937,
   8.364777, 8.360727, 8.279442, 8.309318, 8.284367, 8.239746, 8.227537, 8.071696, 8.053679, 8.236563, 8.330616, 8.044913, 7.981342, 8.159356, 8.214677, 7.951939,
   8.043374, 7.892821, 7.940469, 7.944765, 8.123416, 7.692354, 7.928258, 7.97897, 7.917504, 7.754538, 7.880351, 7.760921, 7.926395, 7.875491, 7.726013, 7.596008,
   7.723525, 7.712758, 7.555574, 7.493259, 7.662303, 7.510296, 7.593434, 7.448597, 7.676243, 7.364321, 7.503997, 7.372573, 7.512192, 7.587853, 7.453925, 7.356257,
   7.314169, 7.546332, 7.383291, 7.674257, 7.227405, 7.240011, 7.333245, 7.47965, 7.354883, 7.233847, 7.492944, 7.010984, 7.208661, 7.277852, 7.223034, 7.153638,
   7.213901, 6.902268, 7.107851, 7.187727, 6.94427, 7.322737, 7.037485, 7.290489, 6.936337, 6.9318, 6.856708, 7.025202, 6.970258, 6.880239, 6.873625, 6.839869,
   7.352726, 6.982878, 6.873485, 6.898954, 6.718962, 6.955831, 6.799248, 6.770546, 6.575098, 6.910703, 6.902499, 6.752523, 6.971288, 6.712565, 6.740377, 6.580309,
   6.750973, 6.487671, 6.749127, 6.55867, 6.773793, 6.588884, 6.598528, 6.522818, 6.648681, 6.58552, 6.441853, 6.505034, 6.775807, 6.401029, 6.472615, 6.439131,
   6.56134, 6.416274, 6.343423, 6.2937, 6.27652, 6.300141, 6.309789, 6.363774, 6.448207, 6.336448, 6.294139, 6.184394, 6.229978, 6.39595, 6.296711, 6.173042,
   6.216357, 6.290885, 6.20793, 6.245722, 6.123137, 6.151846, 6.227259, 6.328772, 6.178807, 6.06767, 5.964422, 6.177586, 6.146082, 5.948242, 6.091724, 5.943477,
   5.99914, 6.028933, 6.034649, 6.011586, 6.111748, 5.81116, 6.63094, 5.955723, 5.839457, 5.91623, 5.757045, 5.817098, 5.94223, 5.700368, 5.774209, 5.986561,
   5.711408, 5.680189, 5.741584, 5.791454, 5.587738, 5.705508, 5.8428, 5.545353, 5.984455, 5.792345, 5.669921, 5.7466, 5.644487, 5.602422, 5.495357, 5.722719,
   5.502246, 5.709489, 5.638226, 5.509643, 5.822269, 5.551465, 5.549706, 5.403698, 5.317652, 5.493413, 5.423255, 5.598811, 5.500811, 5.398425, 5.563973, 5.615927,
   5.467248, 5.431732, 5.257623, 5.185902, 5.26498, 5.290604, 5.295814, 5.343449, 5.569145, 5.209963, 5.263626, 5.389782, 5.238054, 5.392608, 5.566563, 5.229378,
   5.217773, 5.049564, 5.187365, 5.374081, 5.039193, 4.969885, 5.251796, 5.070395, 5.038835, 5.314083, 5.166797, 4.908564, 5.155041, 5.218392, 5.145132, 5.104193,
   5.051177, 5.060289, 5.157701, 5.103233, 5.076222, 5.055436, 4.9504, 4.852303, 5.004604, 4.809516, 4.90354, 4.98345, 4.992665, 5.079186, 4.892129, 4.911012,
   4.902267, 4.92203, 4.738719, 4.63724, 4.868861, 4.745439, 4.623855, 4.904382, 4.836178, 4.757147, 4.627768, 4.655298, 4.668204, 4.692791, 4.930138, 4.634166,
   4.443233, 4.450471, 4.733914, 4.507425, 4.838866, 4.642545, 4.711428, 4.587664, 4.622699, 4.725646, 4.757065, 4.693618, 4.563798, 4.4691, 4.399888, 4.49554,
   4.548109, 4.460802, 4.455998, 4.606598, 4.343817, 4.460291, 4.444406, 4.594968, 4.604748, 4.382475, 4.55534, 4.648653, 4.570797, 4.407081, 4.408814, 4.348253,
   4.536586, 4.400816, 4.291018, 4.407732, 4.443151, 4.335074, 4.192238, 4.355808, 4.395067, 4.359129, 4.076354, 4.180344, 4.087093, 4.214077, 4.036669, 4.218374,
   4.244897, 4.12378, 4.221322, 4.213406, 4.21308, 3.848756, 4.013911, 4.042265, 4.082657, 4.173774, 4.044008, 4.041583, 3.856082, 3.976385, 3.976264, 4.042368,
   4.17319, 3.950988, 4.177812, 4.057245, 4.041904, 4.228949, 4.08549, 4.08084, 3.69876, 3.898184, 3.801651, 3.920443, 4.020934, 3.8199, 3.763711, 3.826544,
   3.899774, 3.913816, 3.871155, 3.746225, 3.876633, 3.689815, 3.83612, 3.654966, 3.764121, 3.664678, 3.832504, 3.621694, 3.510072, 3.856077, 3.80148, 3.614419,
   3.705522, 3.672513, 3.669305, 3.602618, 3.699837, 3.763524, 3.654121, 3.669273, 3.583717, 3.829897, 3.52731, 3.518634, 3.949487, 3.721142, 3.678494, 3.537803,
   3.632433, 3.605047, 3.63918, 3.759026, 3.59351, 3.555941, 3.544796, 3.508878, 3.542032, 3.575356, 3.50919, 3.661511, 3.452214, 3.369813, 3.399146, 3.503081,
   3.480743, 3.405907, 3.401151, 3.423023, 3.435993, 3.331559, 3.35856, 3.557791, 3.54094, 3.270538, 3.353563, 3.420797, 3.322221, 3.110428, 3.403935, 3.475263,
   3.178504, 3.184596, 3.304164, 3.296746, 3.199453, 3.377538, 3.265514, 3.306296, 3.253707, 3.333529, 3.303732, 3.151271, 3.178407, 3.037246, 3.186181, 3.134331,
   3.128901, 3.134618, 3.197559, 3.264264, 3.291569, 3.285817, 3.063362, 3.090173, 3.210005, 3.030079, 3.126166, 3.047354, 2.994877, 3.199106, 3.068951, 3.149032,
   3.146654, 3.146527, 3.161281, 3.149648, 3.208059, 3.003225, 3.185784, 2.90162, 3.055396, 3.111906, 2.876437, 2.926943, 2.995401, 3.114406, 2.987644, 3.016586,
   2.974175, 3.153468, 3.030628, 2.972653, 2.980089, 3.037744, 3.079471, 2.948852, 2.848848, 2.953965, 3.008905, 2.88518, 2.821764, 2.980572, 3.009273, 2.902402,
   2.79797, 2.879765, 2.956693, 3.11477, 3.019714, 2.960952, 2.703122, 2.79934, 2.839942, 3.098813, 2.781983, 2.970162, 2.699384, 3.030457, 2.92784, 2.718412,
   2.977218, 2.897897, 2.852739, 2.857633, 2.766751, 2.638832, 2.828116, 2.819481, 2.529529, 2.88065, 2.82969, 2.84679, 2.840688, 2.721514, 2.739354, 2.813193,
   2.762004, 2.587671, 2.687125, 2.731837, 2.689197, 2.612274, 2.518396, 2.79159, 2.531921, 2.742772, 2.686714, 2.6269, 2.571943, 2.58522, 2.763647, 2.451612,
   2.682603, 2.506079, 2.710623, 2.608634, 2.476878, 2.698572, 2.521732, 2.721846, 2.66197, 2.466418, 2.558966, 2.376815, 2.48308, 2.437606, 2.605606, 2.467837,
   2.546473, 2.470785, 2.514204, 2.734184, 2.575086, 2.545136, 2.690482, 2.525196, 2.592868, 2.605348, 2.55506, 2.595789, 2.527816, 2.619765, 2.507536, 2.516083,
   2.332087, 2.382358, 2.399818, 2.436148, 2.457723, 2.635928, 2.217093, 2.289396, 2.36718, 2.611766, 2.298767, 2.19617, 2.290109, 2.551441, 2.514499, 2.360865,
   2.413571, 2.527869, 2.398542, 2.201333, 2.254032, 2.111284, 2.407627, 2.381869, 2.457895, 2.317072, 2.402228, 2.552233, 2.373742, 2.266851, 2.32365, 2.369873,
   2.347612, 2.287567, 2.23049, 2.409421, 2.19181, 2.378916, 2.360238, 2.316712, 2.138225, 2.229794, 2.278643, 2.436928, 2.210263, 2.205188, 2.135824, 2.260128,
   2.266011, 2.230609, 2.263924, 2.072497, 2.102833, 2.12732, 2.199623, 2.282407, 2.183377, 2.240366, 2.229071, 2.108488, 2.315942, 2.271295, 2.138522, 2.219484,
   2.243975, 2.106699, 2.122732, 2.228089, 2.394048, 1.974351, 2.232607, 2.05235, 2.160182, 2.00042, 2.100621, 2.235453, 2.091392, 2.248281, 2.143654, 1.987474,
   2.000451, 2.022863, 1.98024, 2.018215, 2.036564, 2.115731, 2.019915, 2.04136, 2.062329, 2.083455, 2.190784, 1.978783, 1.706754, 2.051301, 2.121811, 2.109656,
   1.956217, 2.188446, 2.04099, 1.9932, 1.876434, 1.886846, 2.006736, 2.126111, 1.853096, 1.963657, 1.919856, 1.900212, 1.953984, 1.785183, 2.159176, 1.955719,
   2.112165, 1.864931, 2.028406, 1.867033, 2.019438, 1.890161, 2.019416, 1.816292, 1.930809, 2.130659, 1.755993, 1.88458, 1.990031, 1.799786, 2.00208, 1.896541,
   1.803657, 1.944637, 1.919242, 1.863789, 2.027844, 1.785713, 1.89989, 2.11808, 1.933037, 1.809622, 1.819161, 1.783099, 1.865127, 1.633053, 1.903839, 1.961378,
   1.936972, 1.817328, 1.905626, 1.898885, 1.756157, 1.853625, 2.078609, 1.973249, 1.989393, 1.808695, 1.933061, 1.731986, 1.706366, 1.715547, 1.874417, 1.996156,
   1.920426, 1.955377, 1.648626, 1.920377, 1.923971, 1.759421, 1.660757, 2.021199, 1.686183, 1.777688, 1.81841, 1.582863, 1.706282, 1.680759, 1.663021, 1.59408,
   1.710466, 1.797384, 1.631644, 1.687517, 1.657536, 1.943587, 1.621483, 1.649993, 1.709164, 1.512391, 1.75739, 1.80678, 1.755595, 1.648555, 1.802751, 1.643335,
   1.732202, 1.618746, 1.732043, 1.849269, 1.756608, 1.780281, 1.568147, 1.534905, 1.645425, 1.803797, 1.630651, 1.698909, 1.539919, 1.683481, 1.480115, 1.684746,
   1.585521, 1.650249, 1.626898, 1.487193, 1.710259, 1.617407, 1.539211, 1.692324, 1.63145, 1.526014, 1.549434, 1.521814, 1.424684, 1.497965, 1.658274, 1.535917,
   1.522297, 1.535327, 1.421501, 1.564165, 1.500048, 1.63154, 1.491625, 1.466117, 1.59551, 1.64796, 1.455478, 1.408026, 1.573947, 1.747723, 1.631899, 1.521576,
   1.440581, 1.550631, 1.464177, 1.56033, 1.464379, 1.379829, 1.477929, 1.403556, 1.391637, 1.310881, 1.355111, 1.465644, 1.449764, 1.691569, 1.492575, 1.497331,
   1.744062, 1.443097, 1.372435, 1.281371, 1.447792, 1.486048, 1.426987, 1.528044, 1.373091, 1.536795, 1.546295, 1.573524, 1.435059, 1.378601, 1.42383, 1.578415,
   1.357217, 1.492438, 1.31303, 1.35734, 1.396068, 1.341389, 1.34481, 1.462698, 1.403918, 1.280149, 1.392659, 1.493336, 1.564201, 1.421219, 1.394302, 1.259071,
   1.389, 1.315621, 1.343527, 1.375232, 1.407901, 1.31055, 1.358508 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1119,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1119,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1119,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1119);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->SetMinimum(-88.4112);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->SetMaximum(795.6208);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1119);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_DHZfirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__120 = new TH1D("data_mc_ratio__120","",1000,0,2000);
   data_mc_ratio__120->SetBinContent(1000,1.033765);
   data_mc_ratio__120->SetBinContent(1001,1.188157);
   data_mc_ratio__120->SetBinError(1000,0.5168823);
   data_mc_ratio__120->SetBinError(1001,0.02821389);
   data_mc_ratio__120->SetMinimum(0.4);
   data_mc_ratio__120->SetMaximum(1.6);
   data_mc_ratio__120->SetEntries(2.679045);
   data_mc_ratio__120->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__120->SetLineColor(ci);
   data_mc_ratio__120->SetLineWidth(2);
   data_mc_ratio__120->SetMarkerStyle(20);
   data_mc_ratio__120->SetMarkerSize(1.2);
   data_mc_ratio__120->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__120->GetXaxis()->SetRange(1,150);
   data_mc_ratio__120->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__120->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__120->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__120->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__120->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__120->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__120->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__120->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__120->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__120->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__120->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__120->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__120->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__120->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1120[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1120[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1120[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1120[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03861766, 0.01930764,
   0.01918061, 0.01897862, 0.01944897, 0.01953122, 0.01893002, 0.01950561, 0.01953617, 0.01983227, 0.01941962, 0.02002557, 0.01968406, 0.02029529, 0.01981351, 0.02029749, 0.02035161, 0.02032828,
   0.020699, 0.02130539, 0.02084471, 0.02102053, 0.02115942, 0.02112794, 0.02130413, 0.02096338, 0.02141968, 0.02113455, 0.02164942, 0.02189959, 0.04227861, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3510944 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1120,Graph_from_mc_statistical_error_fy1120,Graph_from_mc_statistical_error_fex1120,Graph_from_mc_statistical_error_fey1120);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1120 = new TH1F("Graph_Graph_from_mc_statistical_error1120","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1120->SetMinimum(0.5786867);
   Graph_Graph_from_mc_statistical_error1120->SetMaximum(1.421313);
   Graph_Graph_from_mc_statistical_error1120->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1120->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1120->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1120);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_SR_17->cd();
   H_mass_DHZfirst_SR_17->Modified();
   H_mass_DHZfirst_SR_17->cd();
   H_mass_DHZfirst_SR_17->SetSelected(H_mass_DHZfirst_SR_17);
}
