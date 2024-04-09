#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_VR_17()
{
//=========Macro generated from canvas: H_mass_DHZfirst_VR_17/H_mass_DHZfirst_VR_17
//=========  (Mon Apr  8 13:43:39 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_VR_17 = new TCanvas("H_mass_DHZfirst_VR_17", "H_mass_DHZfirst_VR_17",0,0,600,600);
   H_mass_DHZfirst_VR_17->SetHighLightColor(2);
   H_mass_DHZfirst_VR_17->Range(0,0,1,1);
   H_mass_DHZfirst_VR_17->SetFillColor(0);
   H_mass_DHZfirst_VR_17->SetFillStyle(4000);
   H_mass_DHZfirst_VR_17->SetBorderMode(0);
   H_mass_DHZfirst_VR_17->SetBorderSize(2);
   H_mass_DHZfirst_VR_17->SetFrameFillStyle(1000);
   H_mass_DHZfirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-2.256705,315.7258,2264.448);
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
   st->SetMaximum(2037.778);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",1000,0,2000);
   st_stack_59->SetMinimum(0.01);
   st_stack_59->SetMaximum(2037.778);
   st_stack_59->SetDirectory(nullptr);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->SetLineWidth(0);
   st_stack_59->GetXaxis()->SetRange(1,150);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(43,365.2138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(44,733.9175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(45,726.7646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(46,713.7698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(47,702.8345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,354.5839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,280.6655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(79,548.1562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(80,565.7493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(81,541.879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(82,553.8474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(83,272.8341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,2.659053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,1101.542);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(9,0.005604583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(12,0.007576288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.288653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.5792027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,0.8455153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,1.364842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,2.42799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,3.23008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,4.183764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,5.288659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,6.689856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,7.295278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,8.262311);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,9.14763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,10.05215);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,10.66805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,11.21781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,11.74523);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,12.43995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,12.69642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,12.91982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,13.1654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,13.405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,13.45939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,13.56981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,13.44178);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,13.71503);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,13.54338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,13.78736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,13.62987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,13.79088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,13.49754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,13.75488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,13.58826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,13.55694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,13.65929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,13.24933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,13.29735);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,13.07273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,13.06896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,13.14921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,13.06118);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,13.09461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,13.04767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,13.02159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,12.87723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,13.05171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,12.56361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,12.9731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,12.73768);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,12.59696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,12.74607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,12.65422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,12.63522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,12.6399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,12.42701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,12.59943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,12.19564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,12.36123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,12.23336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,12.2621);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,12.06005);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,11.86245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,11.98208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,11.87659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,11.71301);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,11.67051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,11.49657);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,11.36933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,11.48335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,11.33835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,11.37235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,11.18704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,11.20743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,10.95862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,11.28537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,10.85162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,10.86581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,10.86914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,10.66525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,10.55722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,10.58668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,10.38969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,10.4337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,10.41947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,10.27496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,10.39279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,10.10548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,10.05925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,10.08154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,9.930999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,9.924752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,10.00262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,9.804773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,9.899101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,10.15967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,9.73894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,9.48703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,9.671467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,9.431938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,9.521562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,9.288273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,9.225831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,9.23455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,9.383176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,9.508641);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,9.227448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,8.94996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,9.245729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,9.202921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,9.078854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,8.926336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,8.917902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,9.145167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,8.718982);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,8.823304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,8.703239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,8.653164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,8.707831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,8.814248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,8.779092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,8.479299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,8.366586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,8.417838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,8.484447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,8.53346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,8.432962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,8.269825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,8.277699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,8.237153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,8.166703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,8.19513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,8.273793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,8.146564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,8.356469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,8.200845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,8.016697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,8.080944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,8.135364);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,8.096476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,8.145185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,8.08622);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,8.125397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,7.872916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,8.095604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,7.858399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,7.844968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,7.663828);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,7.808709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,7.703283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,7.79052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,7.823101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,7.642198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,7.857171);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,7.76865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,7.688725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,7.773862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,7.721743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,7.614392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,7.64975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,7.616694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,7.616452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,7.40741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,7.317599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,7.357945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,7.269185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,7.299589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,7.348374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,7.355733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,7.370719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,7.374886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,7.462071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,7.009586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,7.318628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,7.305593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,7.284835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,7.04392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,7.139592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,7.217911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,7.108867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,7.066851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,6.955358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,6.936684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,7.104415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,7.069676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,6.977395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,6.90592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,7.015416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,7.012015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,6.958353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,6.939558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,7.022732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,6.780229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,6.849237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,6.833776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,6.903833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,7.079282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,6.723545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,6.63916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,6.67966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,6.783612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,6.740243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,6.619148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,6.619899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,6.4924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,6.654021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,6.878693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,6.789618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,6.556537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,6.653087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,6.613285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,6.399792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,6.518114);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,6.562706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,6.734207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,6.313402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,6.389015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,6.481378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,6.378604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,6.290107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,6.480966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,6.323156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,6.43675);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,6.357818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,6.224049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,6.103366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,6.36745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,6.119644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,6.106217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,6.26458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,6.023704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,6.302746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,6.117317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,6.01265);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,6.190964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,6.096656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,6.23343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,6.103353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,5.966886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,5.785841);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,6.076374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,5.921354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,6.018675);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,6.010611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,5.871164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,6.017872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,5.884443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,5.959587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,5.649263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,5.827687);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,5.706038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,6.015784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,5.712816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,6.074328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,5.742408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,5.958226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,5.785287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,5.702696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,5.786767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,5.928459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,5.87733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,5.678896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,5.720766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,5.888532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,5.664987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,5.614513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,5.635628);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,5.258451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,5.590779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,5.453375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,5.543369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,5.702255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,5.528321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,5.42331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,5.313763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,5.609696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,5.638981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,5.426162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,5.273825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,5.367442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,5.556109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,5.354375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,5.347018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,5.340474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,5.353646);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,5.293381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,5.438342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,5.298882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,5.170226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,5.122321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,5.447228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,5.175776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,5.348431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,5.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,5.192486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,5.107727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,5.27334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,5.264702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,5.347004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,5.217827);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,4.951339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,5.201288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,5.196323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,5.0454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,5.186842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,4.946899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,5.20832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,5.096577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,5.002733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,5.110087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,5.272158);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,4.860272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,4.91535);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,4.980636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,4.869314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,4.699078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,5.017922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,4.946801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,4.769706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,5.05398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,4.748667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,4.861056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,4.792258);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,4.784746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,4.704849);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,4.81792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,4.884209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,4.790245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,4.680399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,4.765481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,4.960577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,4.687025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,4.599107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,4.801126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,4.774238);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,4.6634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,4.707502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,4.608717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,4.781973);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,4.521945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,4.612012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,4.539814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,4.772538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,4.700137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,4.622938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,4.502793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,4.412717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,4.41911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,4.648611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,4.55458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,4.661536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,4.544851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,4.344715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,4.503089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,4.521813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,4.375078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,4.642242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,4.647377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,4.278375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,4.323129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,4.240126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,4.344053);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,4.29055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,4.476751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,4.267018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,4.292317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,4.380199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,4.284881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,4.432476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,4.201627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,4.222331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,4.290694);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,4.486296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,4.246376);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,4.046856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,4.227462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,4.094107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,4.242297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,4.25488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,4.227409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,4.328571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,4.2526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,4.037223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,4.046869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,4.132327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,4.048682);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,4.034256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,4.115406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,4.27305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,4.059975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,4.008933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,4.074892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,4.060484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,4.067505);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,4.000555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,3.889937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,4.634003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,3.818419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,3.795274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,4.01052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,3.739399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,3.961711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,3.850712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,4.21865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,4.076463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,3.959645);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,3.852717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,3.597527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,3.662235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,3.718212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,3.847316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,3.877079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,3.890861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,3.838718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,3.862125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,3.881919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,3.917529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,3.82296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,3.785486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,3.798547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,3.818878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,3.822556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,3.624477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,3.791844);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,3.737035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,3.746248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,3.861681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,3.653443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,3.798796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,3.440191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,3.677928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,3.710043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,3.690568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,3.69916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,3.781844);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,3.78589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,3.633944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,3.654191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,3.598495);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,3.391453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,3.604563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,3.504462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,3.50833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,3.529357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,3.608283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,3.524539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,3.53076);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,3.507302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,3.546393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,3.39948);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,3.486811);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,3.383727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,3.625637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,3.386198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,3.617091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,3.487292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,3.180162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,3.468035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,3.369337);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,3.470038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,3.247017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,3.33396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,3.299909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,3.411832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,3.413637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,3.268783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,3.283537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,3.274181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,3.140229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,3.165527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,3.263912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,3.467913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,3.202348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,3.351114);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,3.305517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,3.292566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,3.306362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,3.254037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,3.469259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,3.073287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,3.262928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,3.125597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,3.195056);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,3.184635);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,3.104281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,3.096161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,3.276401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,3.069477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,3.196596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,3.173452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,3.1519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,3.147904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,2.999526);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,3.192997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,2.950453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,2.979974);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,3.113599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,3.061595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,3.254625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,3.09191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,3.050892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,3.231206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,3.117351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,3.111875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,3.027872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,2.87004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,3.020055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,3.083287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,2.980966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,3.070359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,3.077759);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,2.799898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,3.096679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,2.933549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,3.224707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,3.086527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,2.944469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,3.07783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,2.779336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,2.969173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,2.952259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,2.919435);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,2.968715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,3.06362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,2.881797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,2.970406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,2.941719);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,2.909102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,2.824923);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,2.845572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,2.972737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,3.047208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,2.461324);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,2.801792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,2.825549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,2.861987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,2.884027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,2.622334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,2.771895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,2.873453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,2.789428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,2.761754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,2.744795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,2.983703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,2.625008);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,2.600109);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,2.897394);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,2.679898);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,2.786188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,2.676661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,2.733044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,2.560127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,2.616792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,2.636559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,2.612636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,2.73319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,2.687862);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,2.690896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,2.539717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,2.460809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,2.748846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,2.674106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,2.670776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,2.576277);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,2.436212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,2.838049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,2.519106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,2.417918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,2.581852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,2.536319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,2.599183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,2.458958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,2.580942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,2.681896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,2.362024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,2.628061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,2.628141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,2.635361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,2.526496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,2.566222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,2.463226);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,2.43051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,2.764666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,2.5227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,2.587421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,2.721368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,2.47727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,2.642967);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,2.39425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,2.714636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,2.385636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,2.533482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,2.413009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,2.417573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,2.403369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,2.413037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,2.599261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,2.347736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,2.429834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,2.328684);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,2.446858);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,2.349385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,2.366926);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,2.398283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,2.51733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,2.438543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,2.429126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,2.420947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,2.420104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,2.573179);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,2.342541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,2.576702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,2.4574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,2.274815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,2.373879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,2.190625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,2.279413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,2.253609);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,2.415224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,2.374038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,2.307187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,2.324068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,2.312269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,2.216059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,2.785466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,2.363127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,2.457759);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,2.270792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,2.259438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,2.241314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,2.228485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,2.282673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,2.424145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,2.387627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,2.253629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,2.33457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,2.119007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,2.33099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,2.200678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,2.318887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,2.139614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,2.290141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,2.301012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,2.335915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,2.281565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,2.111351);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,2.162629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,2.213947);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,2.239175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,2.273971);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,2.417928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,2.280034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,2.228934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,1.990691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,2.01853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,2.139733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,2.302413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,2.224876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,2.130484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,2.167711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,2.170738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,2.199901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,1.970534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,2.205224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,2.03928);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,2.241461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,2.25797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,1.999366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.235636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,2.089543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,2.137126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,2.068614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,2.069731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,2.057763);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,2.075127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,2.067426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.141257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,2.198139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,2.026629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,2.139981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,1.998264);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.147961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.094083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,2.133856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.093107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,1.969714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.175229);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.024617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.240364);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.058506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,2.02536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,1.986638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.056078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,1.938382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.047644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,1.873325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,1.887092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,1.879752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,1.936712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,1.939259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.118257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,1.866359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.106219);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,1.872796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.038456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.069335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,1.732992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,1.824673);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,1.871733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.008028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,1.931885);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,1.986953);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,1.818998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,1.854667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,1.824732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,1.844108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.00835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,1.974319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,1.702897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,1.784067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,1.909281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,1.994938);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,1.842712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,1.865818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,1.912773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,1.784643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,1.853997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,1.798415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,1.787346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,1.897969);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,1.745518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,1.820281);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,1.715809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,1.877013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.024272);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,1.835536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,1.726905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,1.599975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,1.876587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,1.754929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,1.943991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,1.760872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,1.921809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,1.551037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,1.788057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,1.844945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,1.614443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,1.809779);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,1.843404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,1.841419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,1.818902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,1.752216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,1.805993);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,1.725889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,1.903702);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,1.712139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,1.899106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,1.626525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,1.726645);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,1.782578);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,1.534578);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,1.727516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,1.807302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,1.72474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,1.668783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,1.550405);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,1.466139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,1.663676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,1.663748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,1.490683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,1.559201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,1.833789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,1.655208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,1.700509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,1.749994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,1.653269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,1.725866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,1.921007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,1.59792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,1.670382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,1.521663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,1.42167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,1.573034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,1.676569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,1.49254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,1.733113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,1.392236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,1.645274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,1.657695);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,1.589896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,1.602573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,1.625088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,1.562142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,1.480092);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,1.606874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,1.574235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,1.2968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,1.648431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,1.546907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,1.585314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,1.621905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,1.534587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,1.537154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,1.672334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,1.349979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,1.650902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,1.404849);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,1.477408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,1.612274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,1.65065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,1.504881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,1.449338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,1.293933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,1.626389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,1.50304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,1.392652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,1.562395);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,1.474475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,1.624514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,1.531031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,1.623764);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,1.591206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,1.41949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,1.45894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,1.489659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,1.425021);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,1.585936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,1.555227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,1.624899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,1.584701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,1.575207);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,1.688375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,1.433992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,1.465593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,1.517986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,1.404191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,1.44907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,1.461691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,1.418039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.692184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,1.389356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.705437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.574068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,1.462793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,1.245413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,1.624148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,1.276386);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,1.163211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,1.527835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,1.309089);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,1.246148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.372743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,1.445484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.356383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.534334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,1.312011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.405128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.329584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.389834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.43708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,1.249328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.35845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,1.491529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.376002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.200834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.273271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,1.373151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.342105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.31055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,1.41315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,1.387032);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.214987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,1.247159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.245832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.215448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,1.210294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,1.434852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.298431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.374452);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.35778);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,1.293877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.448557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,1.312081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.194751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.227441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.420042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.157101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.194448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.125372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.211541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.175831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.246072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,1.1962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.04729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.261998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.17549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.343814);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.140659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.196666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.294115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.141476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.228745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.297377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.122444);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.281133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.104706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.008606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.158606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.226205);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.142655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.158661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.159722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.359023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.311373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.249868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.244208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.296095);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.194266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.276894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.0255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.311877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.372271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.12236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.126003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.244986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.007102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.226892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.260932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.107956);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.197955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.210705);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.025169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.260514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.239193);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.025679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.279115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.262592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.294227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.279566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.121352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.30992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.04401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.245731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,0.9156256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.122878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.052437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.196186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.034848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,0.9681152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.195627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.192613);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.229396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.108093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,0.9621892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.031448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.102758);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.20996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.006964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.193326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.174871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.250269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.246547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,0.9151697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.130866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,0.9843509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.004143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.105385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.005407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.173868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.022789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.122825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.157147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.004097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.159706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.193856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.21012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,0.8963847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.005108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,0.9438381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.042875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,0.9870682);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.022544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,0.8702534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,0.8696439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,0.9387216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,0.9183135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.027341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,0.9581901);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.087161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.044115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,16.00942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(497869.9);

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
   
   TH1D *VH_DHZfirst_H_mass__117 = new TH1D("VH_DHZfirst_H_mass__117","",1000,0,2000);
   VH_DHZfirst_H_mass__117->SetBinContent(43,413);
   VH_DHZfirst_H_mass__117->SetBinContent(44,888);
   VH_DHZfirst_H_mass__117->SetBinContent(45,917);
   VH_DHZfirst_H_mass__117->SetBinContent(46,854);
   VH_DHZfirst_H_mass__117->SetBinContent(47,809);
   VH_DHZfirst_H_mass__117->SetBinContent(48,390);
   VH_DHZfirst_H_mass__117->SetBinContent(78,282);
   VH_DHZfirst_H_mass__117->SetBinContent(79,605);
   VH_DHZfirst_H_mass__117->SetBinContent(80,580);
   VH_DHZfirst_H_mass__117->SetBinContent(81,568);
   VH_DHZfirst_H_mass__117->SetBinContent(82,552);
   VH_DHZfirst_H_mass__117->SetBinContent(83,261);
   VH_DHZfirst_H_mass__117->SetBinContent(1000,2);
   VH_DHZfirst_H_mass__117->SetBinContent(1001,1253);
   VH_DHZfirst_H_mass__117->SetEntries(131532);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__117->SetLineColor(ci);
   VH_DHZfirst_H_mass__117->SetLineWidth(2);
   VH_DHZfirst_H_mass__117->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__117->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__117->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__117->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__117->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1117[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 365.2138, 733.9175, 726.7646, 713.7698, 702.8345, 354.5839, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280.6655, 548.1562, 565.7493, 541.879,
   553.8474, 272.8341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 2.659053 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1117[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0.005604583, 0, 0, 0.007576288, 0.288653, 0.5792027, 0.8455153, 1.364842, 2.42799,
   3.23008, 4.183764, 5.288659, 6.689856, 7.295278, 8.262311, 9.14763, 10.05215, 10.66805, 11.21781, 11.74523, 12.43995, 12.69642, 12.91982, 13.1654, 13.405,
   13.45939, 13.56981, 13.44178, 13.71503, 13.54338, 13.78736, 13.62987, 13.79088, 13.49754, 13.75488, 13.58826, 13.55694, 13.65929, 13.24933, 13.29735, 13.07273,
   13.06896, 13.14921, 13.06118, 13.09461, 13.04767, 13.02159, 12.87723, 13.05171, 12.56361, 12.9731, 12.73768, 12.59696, 12.74607, 12.65422, 12.63522, 12.6399,
   12.42701, 12.59943, 12.19564, 12.36123, 12.23336, 12.2621, 12.06005, 11.86245, 11.98208, 11.87659, 11.71301, 11.67051, 11.49657, 11.36933, 11.48335, 11.33835,
   11.37235, 11.18704, 11.20743, 10.95862, 11.28537, 10.85162, 10.86581, 10.86914, 10.66525, 10.55722, 10.58668, 10.38969, 10.4337, 10.41947, 10.27496, 10.39279,
   10.10548, 10.05925, 10.08154, 9.930999, 9.924752, 10.00262, 9.804773, 9.899101, 10.15967, 9.73894, 9.48703, 9.671467, 9.431938, 9.521562, 9.288273, 9.225831,
   9.23455, 9.383176, 9.508641, 9.227448, 8.94996, 9.245729, 9.202921, 9.078854, 8.926336, 8.917902, 9.145167, 8.718982, 8.823304, 8.703239, 8.653164, 8.707831,
   8.814248, 8.779092, 8.479299, 8.366586, 8.417838, 8.484447, 8.53346, 8.432962, 8.269825, 8.277699, 8.237153, 8.166703, 8.19513, 8.273793, 8.146564, 8.356469,
   8.200845, 8.016697, 8.080944, 8.135364, 8.096476, 8.145185, 8.08622, 8.125397, 7.872916, 8.095604, 7.858399, 7.844968, 7.663828, 7.808709, 7.703283, 7.79052,
   7.823101, 7.642198, 7.857171, 7.76865, 7.688725, 7.773862, 7.721743, 7.614392, 7.64975, 7.616694, 7.616452, 7.40741, 7.317599, 7.357945, 7.269185, 7.299589,
   7.348374, 7.355733, 7.370719, 7.374886, 7.462071, 7.009586, 7.318628, 7.305593, 7.284835, 7.04392, 7.139592, 7.217911, 7.108867, 7.066851, 6.955358, 6.936684,
   7.104415, 7.069676, 6.977395, 6.90592, 7.015416, 7.012015, 6.958353, 6.939558, 7.022732, 6.780229, 6.849237, 6.833776, 6.903833, 7.079282, 6.723545, 6.63916,
   6.67966, 6.783612, 6.740243, 6.619148, 6.619899, 6.4924, 6.654021, 6.878693, 6.789618, 6.556537, 6.653087, 6.613285, 6.399792, 6.518114, 6.562706, 6.734207,
   6.313402, 6.389015, 6.481378, 6.378604, 6.290107, 6.480966, 6.323156, 6.43675, 6.357818, 6.224049, 6.103366, 6.36745, 6.119644, 6.106217, 6.26458, 6.023704,
   6.302746, 6.117317, 6.01265, 6.190964, 6.096656, 6.23343, 6.103353, 5.966886, 5.785841, 6.076374, 5.921354, 6.018675, 6.010611, 5.871164, 6.017872, 5.884443,
   5.959587, 5.649263, 5.827687, 5.706038, 6.015784, 5.712816, 6.074328, 5.742408, 5.958226, 5.785287, 5.702696, 5.786767, 5.928459, 5.87733, 5.678896, 5.720766,
   5.888532, 5.664987, 5.614513, 5.635628, 5.258451, 5.590779, 5.453375, 5.543369, 5.702255, 5.528321, 5.42331, 5.313763, 5.609696, 5.638981, 5.426162, 5.273825,
   5.367442, 5.556109, 5.354375, 5.347018, 5.340474, 5.353646, 5.293381, 5.438342, 5.298882, 5.170226, 5.122321, 5.447228, 5.175776, 5.348431, 5.189514, 5.192486,
   5.107727, 5.27334, 5.264702, 5.347004, 5.217827, 4.951339, 5.201288, 5.196323, 5.0454, 5.186842, 4.946899, 5.20832, 5.096577, 5.002733, 5.110087, 5.272158,
   4.860272, 4.91535, 4.980636, 4.869314, 4.699078, 5.017922, 4.946801, 4.769706, 5.05398, 4.748667, 4.861056, 4.792258, 4.784746, 4.704849, 4.81792, 4.884209,
   4.790245, 4.680399, 4.765481, 4.960577, 4.687025, 4.599107, 4.801126, 4.774238, 4.6634, 4.707502, 4.608717, 4.781973, 4.521945, 4.612012, 4.539814, 4.772538,
   4.700137, 4.622938, 4.502793, 4.412717, 4.41911, 4.648611, 4.55458, 4.661536, 4.544851, 4.344715, 4.503089, 4.521813, 4.375078, 4.642242, 4.647377, 4.278375,
   4.323129, 4.240126, 4.344053, 4.29055, 4.476751, 4.267018, 4.292317, 4.380199, 4.284881, 4.432476, 4.201627, 4.222331, 4.290694, 4.486296, 4.246376, 4.046856,
   4.227462, 4.094107, 4.242297, 4.25488, 4.227409, 4.328571, 4.2526, 4.037223, 4.046869, 4.132327, 4.048682, 4.034256, 4.115406, 4.27305, 4.059975, 4.008933,
   4.074892, 4.060484, 4.067505, 4.000555, 3.889937, 4.634003, 3.818419, 3.795274, 4.01052, 3.739399, 3.961711, 3.850712, 4.21865, 4.076463, 3.959645, 3.852717,
   3.597527, 3.662235, 3.718212, 3.847316, 3.877079, 3.890861, 3.838718, 3.862125, 3.881919, 3.917529, 3.82296, 3.785486, 3.798547, 3.818878, 3.822556, 3.624477,
   3.791844, 3.737035, 3.746248, 3.861681, 3.653443, 3.798796, 3.440191, 3.677928, 3.710043, 3.690568, 3.69916, 3.781844, 3.78589, 3.633944, 3.654191, 3.598495,
   3.391453, 3.604563, 3.504462, 3.50833, 3.529357, 3.608283, 3.524539, 3.53076, 3.507302, 3.546393, 3.39948, 3.486811, 3.383727, 3.625637, 3.386198, 3.617091,
   3.487292, 3.180162, 3.468035, 3.369337, 3.470038, 3.247017, 3.33396, 3.299909, 3.411832, 3.413637, 3.268783, 3.283537, 3.274181, 3.140229, 3.165527, 3.263912,
   3.467913, 3.202348, 3.351114, 3.305517, 3.292566, 3.306362, 3.254037, 3.469259, 3.073287, 3.262928, 3.125597, 3.195056, 3.184635, 3.104281, 3.096161, 3.276401,
   3.069477, 3.196596, 3.173452, 3.1519, 3.147904, 2.999526, 3.192997, 2.950453, 2.979974, 3.113599, 3.061595, 3.254625, 3.09191, 3.050892, 3.231206, 3.117351,
   3.111875, 3.027872, 2.87004, 3.020055, 3.083287, 2.980966, 3.070359, 3.077759, 2.799898, 3.096679, 2.933549, 3.224707, 3.086527, 2.944469, 3.07783, 2.779336,
   2.969173, 2.952259, 2.919435, 2.968715, 3.06362, 2.881797, 2.970406, 2.941719, 2.909102, 2.824923, 2.845572, 2.972737, 3.047208, 2.461324, 2.801792, 2.825549,
   2.861987, 2.884027, 2.622334, 2.771895, 2.873453, 2.789428, 2.761754, 2.744795, 2.983703, 2.625008, 2.600109, 2.897394, 2.679898, 2.786188, 2.676661, 2.733044,
   2.560127, 2.616792, 2.636559, 2.612636, 2.73319, 2.687862, 2.690896, 2.539717, 2.460809, 2.748846, 2.674106, 2.670776, 2.576277, 2.436212, 2.838049, 2.519106,
   2.417918, 2.581852, 2.536319, 2.599183, 2.458958, 2.580942, 2.681896, 2.362024, 2.628061, 2.628141, 2.635361, 2.526496, 2.566222, 2.463226, 2.43051, 2.764666,
   2.5227, 2.587421, 2.721368, 2.47727, 2.642967, 2.39425, 2.714636, 2.385636, 2.533482, 2.413009, 2.417573, 2.403369, 2.413037, 2.599261, 2.347736, 2.429834,
   2.328684, 2.446858, 2.349385, 2.366926, 2.398283, 2.51733, 2.438543, 2.429126, 2.420947, 2.420104, 2.573179, 2.342541, 2.576702, 2.4574, 2.274815, 2.373879,
   2.190625, 2.279413, 2.253609, 2.415224, 2.374038, 2.307187, 2.324068, 2.312269, 2.216059, 2.785466, 2.363127, 2.457759, 2.270792, 2.259438, 2.241314, 2.228485,
   2.282673, 2.424145, 2.387627, 2.253629, 2.33457, 2.119007, 2.33099, 2.200678, 2.318887, 2.139614, 2.290141, 2.301012, 2.335915, 2.281565, 2.111351, 2.162629,
   2.213947, 2.239175, 2.273971, 2.417928, 2.280034, 2.228934, 1.990691, 2.01853, 2.139733, 2.302413, 2.224876, 2.130484, 2.167711, 2.170738, 2.199901, 1.970534,
   2.205224, 2.03928, 2.241461, 2.25797, 1.999366, 2.235636, 2.089543, 2.137126, 2.068614, 2.069731, 2.057763, 2.075127, 2.067426, 2.141257, 2.198139, 2.026629,
   2.139981, 1.998264, 2.147961, 2.094083, 2.133856, 2.093107, 1.969714, 2.175229, 2.024617, 2.240364, 2.058506, 2.02536, 1.986638, 2.056078, 1.938382, 2.047644,
   1.873325, 1.887092, 1.879752, 1.936712, 1.939259, 2.118257, 1.866359, 2.106219, 1.872796, 2.038456, 2.069335, 1.732992, 1.824673, 1.871733, 2.008028, 1.931885,
   1.986953, 1.818998, 1.854667, 1.824732, 1.844108, 2.00835, 1.974319, 1.702897, 1.784067, 1.909281, 1.994938, 1.842712, 1.865818, 1.912773, 1.784643, 1.853997,
   1.798415, 1.787346, 1.897969, 1.745518, 1.820281, 1.715809, 1.877013, 2.024272, 1.835536, 1.726905, 1.599975, 1.876587, 1.754929, 1.943991, 1.760872, 1.921809,
   1.551037, 1.788057, 1.844945, 1.614443, 1.809779, 1.843404, 1.841419, 1.818902, 1.752216, 1.805993, 1.725889, 1.903702, 1.712139, 1.899106, 1.626525, 1.726645,
   1.782578, 1.534578, 1.727516, 1.807302, 1.72474, 1.668783, 1.550405, 1.466139, 1.663676, 1.663748, 1.490683, 1.559201, 1.833789, 1.655208, 1.700509, 1.749994,
   1.653269, 1.725866, 1.921007, 1.59792, 1.670382, 1.521663, 1.42167, 1.573034, 1.676569, 1.49254, 1.733113, 1.392236, 1.645274, 1.657695, 1.589896, 1.602573,
   1.625088, 1.562142, 1.480092, 1.606874, 1.574235, 1.2968, 1.648431, 1.546907, 1.585314, 1.621905, 1.534587, 1.537154, 1.672334, 1.349979, 1.650902, 1.404849,
   1.477408, 1.612274, 1.65065, 1.504881, 1.449338, 1.293933, 1.626389, 1.50304, 1.392652, 1.562395, 1.474475, 1.624514, 1.531031, 1.623764, 1.591206, 1.41949,
   1.45894, 1.489659, 1.425021, 1.585936, 1.555227, 1.624899, 1.584701, 1.575207, 1.688375, 1.433992, 1.465593, 1.517986, 1.404191, 1.44907, 1.461691, 1.418039,
   1.692184, 1.389356, 1.705437, 1.574068, 1.462793, 1.245413, 1.624148, 1.276386, 1.163211, 1.527835, 1.309089, 1.246148, 1.372743, 1.445484, 1.356383, 1.534334,
   1.312011, 1.405128, 1.329584, 1.389834, 1.43708, 1.249328, 1.35845, 1.491529, 1.376002, 1.200834, 1.273271, 1.373151, 1.342105, 1.31055, 1.41315, 1.387032,
   1.214987, 1.247159, 1.245832, 1.215448, 1.210294, 1.434852, 1.298431, 1.374452, 1.35778, 1.293877, 1.448557, 1.312081, 1.194751, 1.227441, 1.420042, 1.157101,
   1.194448, 1.125372, 1.211541, 1.175831, 1.246072, 1.1962, 1.04729, 1.261998, 1.17549, 1.343814, 1.140659, 1.196666, 1.294115, 1.141476, 1.228745, 1.297377,
   1.122444, 1.281133, 1.104706, 1.008606, 1.158606, 1.226205, 1.142655, 1.158661, 1.159722, 1.359023, 1.311373, 1.249868, 1.244208, 1.296095, 1.194266, 1.276894,
   1.0255, 1.311877, 1.372271, 1.12236, 1.126003, 1.244986, 1.007102, 1.226892, 1.260932, 1.107956, 1.197955, 1.210705, 1.025169, 1.260514, 1.239193, 1.025679,
   1.279115, 1.262592, 1.294227, 1.279566, 1.121352, 1.30992, 1.04401, 1.245731, 0.9156256, 1.122878, 1.052437, 1.196186, 1.034848, 0.9681152, 1.195627, 1.192613,
   1.229396, 1.108093, 0.9621892, 1.031448, 1.102758, 1.20996, 1.006964, 1.193326, 1.174871, 1.250269, 1.246547, 0.9151697, 1.130866, 0.9843509, 1.004143, 1.105385,
   1.005407, 1.173868, 1.022789, 1.122825, 1.157147, 1.004097, 1.159706, 1.193856, 1.21012, 0.8963847, 1.005108, 0.9438381, 1.042875, 0.9870682, 1.022544, 0.8702534,
   0.8696439, 0.9387216, 0.9183135, 1.027341, 0.9581901, 1.087161, 1.044115 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1117,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1117);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetMinimum(-89.92055);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetMaximum(823.6355);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1117);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_DHZfirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",1000,0,2000);
   data_mc_ratio__118->SetBinContent(43,1.130845);
   data_mc_ratio__118->SetBinContent(44,1.209945);
   data_mc_ratio__118->SetBinContent(45,1.261756);
   data_mc_ratio__118->SetBinContent(46,1.196464);
   data_mc_ratio__118->SetBinContent(47,1.151053);
   data_mc_ratio__118->SetBinContent(48,1.099881);
   data_mc_ratio__118->SetBinContent(78,1.004755);
   data_mc_ratio__118->SetBinContent(79,1.1037);
   data_mc_ratio__118->SetBinContent(80,1.025189);
   data_mc_ratio__118->SetBinContent(81,1.048205);
   data_mc_ratio__118->SetBinContent(82,0.9966644);
   data_mc_ratio__118->SetBinContent(83,0.9566253);
   data_mc_ratio__118->SetBinContent(1000,0.7521475);
   data_mc_ratio__118->SetBinContent(1001,1.137497);
   data_mc_ratio__118->SetBinError(43,0.05564522);
   data_mc_ratio__118->SetBinError(44,0.0406031);
   data_mc_ratio__118->SetBinError(45,0.04166687);
   data_mc_ratio__118->SetBinError(46,0.04094216);
   data_mc_ratio__118->SetBinError(47,0.04046888);
   data_mc_ratio__118->SetBinError(48,0.05569463);
   data_mc_ratio__118->SetBinError(78,0.05983228);
   data_mc_ratio__118->SetBinError(79,0.04487179);
   data_mc_ratio__118->SetBinError(80,0.04256866);
   data_mc_ratio__118->SetBinError(81,0.04398169);
   data_mc_ratio__118->SetBinError(82,0.04242085);
   data_mc_ratio__118->SetBinError(83,0.05921362);
   data_mc_ratio__118->SetBinError(1000,0.5318486);
   data_mc_ratio__118->SetBinError(1001,0.03613789);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(475.7587);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__118->GetXaxis()->SetRange(1,150);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1118[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03766253, 0.01851469, 0.01865383, 0.01913683, 0.01885128, 0.03750129, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.04096181, 0.02074104, 0.02029759, 0.02092413,
   0.02053336, 0.0410031, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3926642 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0.528803);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(1.471197);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_VR_17->cd();
   H_mass_DHZfirst_VR_17->Modified();
   H_mass_DHZfirst_VR_17->cd();
   H_mass_DHZfirst_VR_17->SetSelected(H_mass_DHZfirst_VR_17);
}
