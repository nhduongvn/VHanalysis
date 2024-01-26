#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_VR_17()
{
//=========Macro generated from canvas: H_mass_tagOnly_VR_17/H_mass_tagOnly_VR_17
//=========  (Thu Jan 25 12:40:50 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagOnly_VR_17 = new TCanvas("H_mass_tagOnly_VR_17", "H_mass_tagOnly_VR_17",0,0,600,600);
   H_mass_tagOnly_VR_17->SetHighLightColor(2);
   H_mass_tagOnly_VR_17->Range(0,0,1,1);
   H_mass_tagOnly_VR_17->SetFillColor(0);
   H_mass_tagOnly_VR_17->SetFillStyle(4000);
   H_mass_tagOnly_VR_17->SetBorderMode(0);
   H_mass_tagOnly_VR_17->SetBorderSize(2);
   H_mass_tagOnly_VR_17->SetFrameFillStyle(1000);
   H_mass_tagOnly_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-16.08442,315.7258,16078.33);
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
   st->SetMaximum(14468.89);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",1000,0,2000);
   st_stack_9->SetMinimum(0.01);
   st_stack_9->SetMaximum(14468.89);
   st_stack_9->SetDirectory(nullptr);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->SetLineWidth(0);
   st_stack_9->GetXaxis()->SetRange(1,150);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(43,3179.048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(44,6338.028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(45,6205.51);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(46,6172.294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(47,5958.812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,3030.268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,2532.374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(79,5130.834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(80,5095.196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(81,5052.984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(82,5061.98);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(83,2524.416);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,31.486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,15848.18);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,1.384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,2.422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,5.800017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,8.129159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,11.36545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,14.64688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,17.97536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,20.84058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,24.05136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,27.40399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,29.61283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,32.66357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,34.76396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,36.72004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,38.34361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,40.11362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,41.5445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,42.35639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,43.45297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,44.27719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,44.66483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,45.16592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,45.38143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,45.84337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,46.0622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,46.36271);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,46.32525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,46.47103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,46.79834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,47.05473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,46.66);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,46.83925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,46.82903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,46.33688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,46.2127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,45.40649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,45.48288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,45.15399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,44.62327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,44.32448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,44.33798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,43.91884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,44.09838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,43.84791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,44.2542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,43.71529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,43.39232);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,43.36472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,43.45573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,43.373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,43.60561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,43.36472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,43.43368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,43.44333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,43.2417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,43.08082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,43.18906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,43.21539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,43.01408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,42.56644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,42.62265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,42.71103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,42.212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,42.22051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,42.13252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,42.32953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,42.16092);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,42.13394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,41.98735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,41.81307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,41.85027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,41.82738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,41.58051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,41.27564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,41.52577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,41.26404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,41.05462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,41.08085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,40.7928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,40.57947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,40.32496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,40.21794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,40.23877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,40.10915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,40.13153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,39.57883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,39.75689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,39.67249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,39.47586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,39.09188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,39.17906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,38.72419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,38.61273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,38.87691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,38.3358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,38.55533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,38.29049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,38.19972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,37.88345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,38.03168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,37.75366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,37.27819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,37.60273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,37.55495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,37.3151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,37.37601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,37.09307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,36.84697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,36.83397);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,36.45008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,36.16817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,36.26238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,36.27229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,35.91573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,35.97568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,35.87905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,35.69171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,35.86904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,35.54045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,35.73696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,35.02299);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,35.28182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,34.78634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,34.97168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,35.14072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,34.54633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,34.93058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,34.39873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,34.55326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,34.32732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,34.14899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,34.20154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,34.1069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,33.96797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,34.10865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,33.65995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,33.34011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,33.73456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,33.57805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,33.5834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,33.31676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,33.2124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,33.33473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,33.02805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,32.87);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,33.05523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,32.8791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,32.53136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,32.60671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,32.48717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,32.85178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,32.60304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,32.54976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,32.34684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,31.92776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,32.29313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,31.909);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,32.30239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,31.79249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,31.63205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,31.86395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,31.38889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,31.22638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,31.60175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,31.46698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,31.46128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,31.29723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,31.23788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,31.01287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,31.14192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,31.03988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,30.79789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,31.13423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,31.05338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,30.65568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,30.53242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,30.7025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,30.229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,30.40669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,30.448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,30.38503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,29.83234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,30.12387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,30.44603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,29.9225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,29.63102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,29.51159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,29.49333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,29.67946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,29.46896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,29.52781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,29.32848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,29.55618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,29.5501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,29.19961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,29.38557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,28.76174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,29.00008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,29.12366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,29.16885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,28.79502);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,28.75966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,28.59057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,28.64496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,28.60732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,28.5801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,28.04948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,28.5193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,28.37833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,27.85676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,28.1262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,28.38466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,27.91901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,28.17298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,27.97469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,27.7793);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,27.42582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,27.39962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,27.61938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,27.72106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,27.48904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,27.23748);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,27.20889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,27.44764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,27.50863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,27.1362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,27.0832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,26.95249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,26.90804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,26.81891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,26.94805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,26.84791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,26.57001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,26.49104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,26.95915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,26.35285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,26.4005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,26.19337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,26.41637);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,26.19565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,25.91307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,26.05359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,26.22077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,26.10867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,25.79731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,25.44923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,26.06048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,25.72528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,25.95923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,25.74854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,25.51735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,25.52673);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,25.66471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,25.36678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,25.10587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,25.46334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,25.21056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,25.12255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,24.96481);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,24.9672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,25.17254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,25.08679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,24.8157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,25.37858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,24.69238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,24.62927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,24.6657);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,24.61468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,24.58549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,24.60496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,24.05136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,24.40956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,24.24964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,24.0986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,24.07374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,24.26691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,23.84389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,23.70542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,23.97658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,24.00402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,23.90407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,23.9491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,23.68268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,23.78105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,23.46431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,23.54326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,23.3518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,23.11995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,23.25676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,23.21554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,23.53817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,22.93278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,22.93017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,22.62269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,22.96408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,22.83076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,23.2979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,23.06551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,22.90144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,22.3592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,22.68082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,22.81764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,22.43137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,22.58826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,22.268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,22.62798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,22.57501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,22.15211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,22.21686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,22.41268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,21.95942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,22.16021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,21.94306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,21.93487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,21.78152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,21.49381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,21.81996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,21.50495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,21.75127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,21.50773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,21.35972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,21.51886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,21.42687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,21.26141);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,21.06342);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,21.69064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,21.26423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,21.24451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,21.10033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,21.06626);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,20.73981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,20.88362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,20.9951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,20.76288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,20.58046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,20.58627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,20.54844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,20.60081);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,20.69358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,20.50178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,20.66173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,20.63854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,20.70803);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,20.22547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,19.99329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,20.45794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,20.19585);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,20.23435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,20.20474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,20.45208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,20.16916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,19.82492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,20.02321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,19.75839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,19.42537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,20.10376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,19.9873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,19.71289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,19.64902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,19.67034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,19.2178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,19.29241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,19.45);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,19.17102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,19.44385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,19.2178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,19.31721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,19.46846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,19.51759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,18.91009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,19.06771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,18.78942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,18.84668);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,18.8689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,18.74158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,18.56186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,18.55218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,18.73838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,18.78305);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,18.92592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,18.64552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,18.29879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,18.66797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,18.25293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,18.39015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,18.55863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,18.03852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,18.33474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,18.13119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,17.85172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,18.16747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,18.35431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,18.08822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,17.98202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,18.07498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,17.79799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,17.7879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,17.67989);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,17.88857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,17.69004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,17.43442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,17.54053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,17.56099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,17.65278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,17.45843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,17.35182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,17.42411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,17.16453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,17.28269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,17.22719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,17.21328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,17.28615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,17.59504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,17.02798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,17.34492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,17.42755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,17.04204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,16.96106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,16.84064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,17.03501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,17.10164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,16.77297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,17.03852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,16.75512);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,16.93634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,16.97517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,16.56469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,16.56108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,16.21777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,16.57192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,16.75155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,16.32812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,16.3501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,16.37205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,16.55746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,16.33912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,16.62601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,15.87081);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,16.45957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,15.9873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,15.86703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,16.22515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,16.30611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,15.95732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,16.10666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,15.70398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,15.88588);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,15.89718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,15.47359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,15.46972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,15.62756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,15.69254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,15.3454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,15.361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,15.87835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,15.41157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,15.48519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,15.3376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,15.54692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,14.8054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,15.25542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,15.18857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,15.03011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,14.9262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,14.85787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,15.26327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,15.04603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,15.14516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,15.14121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,14.98224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,15.361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,14.81753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,14.97824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,14.97824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,14.85787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,14.91417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,14.45353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,14.87398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,14.52788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,14.5608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,14.52376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,14.5608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,14.61415);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,14.50726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,14.59365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,14.61824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,14.49901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,14.29529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,14.34127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,14.27014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,14.49901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,14.28691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,14.08862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,13.96486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,14.09287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,13.99911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,14.70805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,14.11833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,13.41838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,14.08437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,13.75758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,13.7009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,14.04607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,13.79668);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,13.73581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,13.54713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,13.74452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,13.56479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,13.67028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,13.73145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,13.31089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,13.78366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,13.43621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,13.56479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,13.4718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,13.54271);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,13.38264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,13.20252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,13.32886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,13.25681);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,13.12522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,13.16165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,13.27937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,13.31089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,13.12978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,13.10239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,13.0061);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,12.87659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,12.95538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,12.694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,13.07038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,12.58984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,13.24778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,12.61833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,12.85799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,12.66568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,12.90445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,12.88124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,12.74577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,12.23295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,12.67985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,12.74107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,12.49918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,12.47041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,12.49918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,12.4175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,12.30613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,12.28178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,12.57557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,12.21336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,12.42232);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,12.30613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,12.07039);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,12.27691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,12.49439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,12.07535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,12.35467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,11.91064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,11.95078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,12.179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,12.31099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,11.764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,12.30126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,12.26715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,11.85523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,11.76909);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,11.69255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,11.98579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,12.02568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,12.0406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,11.50157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,11.47552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,11.72322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,11.34964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,11.74873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,11.5742);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,11.71301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,11.23834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,11.46508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,11.6823);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,11.14206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,11.48074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,11.68743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,11.51718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,11.10439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,11.11517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,11.35492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,11.3865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,11.42848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,11.38124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,11.16889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,11.16889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,11.00693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,11.13669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,10.87563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,11.43372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,11.11517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,11.19565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,11.03409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,11.12593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,11.03409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,11.02867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,10.84808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,11.19565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,11.072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,10.88664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,10.56859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,10.80385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,10.78166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,10.51749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,10.56292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,10.66444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,10.69246);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,10.44897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,10.55158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,10.47757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,10.46614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,11.08281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,10.60251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,10.23482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,10.63071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,10.12309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,10.43177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,10.29895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,10.36269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,10.55158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,10.46042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,10.17028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,10.26985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,10.09941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,10.11717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,10.16439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,10.22897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,10.01011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,9.938093);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,10.00413);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,10.14671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,10.2114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,9.986162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,10.33955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,9.761861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,9.968163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,10.28732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,9.841252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,9.907932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,9.938093);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,10.10533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,9.80469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,9.798583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,9.60111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,9.675635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,9.594874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,9.663254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,9.532284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,9.45663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,9.950132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,9.688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,9.303476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,9.786358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,9.613571);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,9.718844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,9.607343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,9.706518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,9.322758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,9.638445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,9.718844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,9.180417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,9.895842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,9.532284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,9.418575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,9.258329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,8.935915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,9.424928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,9.082088);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,9.424928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,9.386745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,9.219456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,9.316335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,9.251861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,9.042457);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,8.670735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,9.277705);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,9.225946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,8.996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,8.949302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,9.258329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,8.861924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,8.753185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,9.238913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,8.90908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,8.677636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,8.955988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,8.888901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,8.78731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,9.022576);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,8.814516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,8.888901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,8.888901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,8.712057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,8.65);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,8.439847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,8.482294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,8.705184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,8.712057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,8.559567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,8.517505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,8.670735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,8.52453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,8.566558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,8.52453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,8.311205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,8.65);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,8.538562);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,8.23887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,8.468169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,8.45402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,8.339964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,8.468169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,8.390054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,8.41143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,8.573542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,8.397185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,8.23887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,8.253387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,8.390054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,8.461097);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,8.253387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,8.397185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,8.382917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,8.02541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,8.017948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,8.489348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,7.635554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,8.187854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,8.26788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,7.973029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,8.070037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,7.867221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,7.806116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,8.15122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,8.143873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,8.062617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,8.107039);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,8.040313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,7.674651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,7.493117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,7.890014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,7.927856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,7.85199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,7.61986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,7.744528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,7.821437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,7.698014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,7.627711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,7.920302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,7.806116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,7.540895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,7.682447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,7.81378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,7.469113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,7.477123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,7.666848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,7.420873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,7.428935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,7.477123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,7.517044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,7.58048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,7.596256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,7.208103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,7.282458);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,7.315262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,7.744528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,7.347919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,7.249505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,7.364194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,7.266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,7.339768);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,7.149736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,7.517044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,7.040059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,7.132973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,7.073987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,7.517044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,7.216402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,7.315262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,6.954514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,7.099326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,6.894001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,7.58048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,7.166461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,7.191475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,7.048556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,6.806621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,6.954514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,7.307074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,7.09089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,7.158104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,7.183147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,6.988857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,7.331609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,6.771353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,6.885313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,6.85045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,6.61937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,7.298878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,6.528315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,7.048556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,6.655443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,6.876614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,6.797821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,6.824187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,6.81541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,6.988857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,6.997417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,6.780188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,6.673406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,6.744782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,6.68237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,7.040059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,6.592185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,6.417344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,6.655443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,6.574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,6.664431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,6.454546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,6.463813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,6.528315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,6.351716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,6.628406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,6.81541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,6.859183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,6.592185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,6.342285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,6.51914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,6.797821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,5.932664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,6.51914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,6.275872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,6.646443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,6.628406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,6.50075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,6.417344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,6.275872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,6.285402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,6.555764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,6.50075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,6.218381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,6.646443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,6.140891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,6.131136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,6.247193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,6.228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,6.256767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,6.454546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,6.3893);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,5.942745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,6.179758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,6.150631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,6.150631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,6.189436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,6.082125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,5.727319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,6.04263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,6.160355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,6.160355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,6.140891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,6.06241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,5.841152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,5.789687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,5.768973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,6.032716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,5.892168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,5.861612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,5.902318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,5.932664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,6.091959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,5.841152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,5.503467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,5.912451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,5.841152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,6.04263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,6.022786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,5.600499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,5.902318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,6.06241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,5.579082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,6.002876);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,5.789687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,5.800017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,5.982899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,5.632472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,5.779339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,5.536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,5.34903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,5.871815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,5.892168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,5.568343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,5.810328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,5.748184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,5.851391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,5.459788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,5.952809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,5.382497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,5.536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,5.546802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,5.201521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,5.258745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,5.371364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,5.536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,5.674822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,5.178454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,5.737761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,5.695879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,5.459788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,5.600499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,5.922566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,5.632472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,5.643089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,5.393606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,4.978073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,5.611177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,5.166882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,5.30408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,5.579082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,5.24735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,5.178454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,5.360209);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,5.213016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,5.360209);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,5.19);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,5.281461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,5.315353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,5.503467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,5.315353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,5.14366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,5.643089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,5.014016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,5.14366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,4.893179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,5.132009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,5.213016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,4.856341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,4.917584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,4.966034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,5.108629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,5.155284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,5.120332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,5.281461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,5.24735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,4.966034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,5.270115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,4.966034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,4.744113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,4.819222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,5.270115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,4.831627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,5.061544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,5.073356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,4.537747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,4.978073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,4.744113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,4.819222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,4.953966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,4.929741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,4.966034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,4.953966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,4.731479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,4.693372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,4.819222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,4.953966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,4.706109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,4.905397);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,4.57715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,4.769281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,4.537747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,4.806786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,4.744113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,4.718811);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,4.831627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,4.667795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,4.731479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,4.321539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,4.362894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,4.831627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,4.616216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,4.769281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,4.941868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,4.417432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,4.756714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,74.05047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(3730810);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_H_mass__17 = new TH1D("VH_tagOnly_H_mass__17","",1000,0,2000);
   VH_tagOnly_H_mass__17->SetBinContent(43,3279);
   VH_tagOnly_H_mass__17->SetBinContent(44,6511);
   VH_tagOnly_H_mass__17->SetBinContent(45,6366);
   VH_tagOnly_H_mass__17->SetBinContent(46,6354);
   VH_tagOnly_H_mass__17->SetBinContent(47,5998);
   VH_tagOnly_H_mass__17->SetBinContent(48,3050);
   VH_tagOnly_H_mass__17->SetBinContent(78,2486);
   VH_tagOnly_H_mass__17->SetBinContent(79,5128);
   VH_tagOnly_H_mass__17->SetBinContent(80,4956);
   VH_tagOnly_H_mass__17->SetBinContent(81,5001);
   VH_tagOnly_H_mass__17->SetBinContent(82,4961);
   VH_tagOnly_H_mass__17->SetBinContent(83,2521);
   VH_tagOnly_H_mass__17->SetBinContent(1000,32);
   VH_tagOnly_H_mass__17->SetBinContent(1001,17693);
   VH_tagOnly_H_mass__17->SetEntries(1273960);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__17->SetLineColor(ci);
   VH_tagOnly_H_mass__17->SetLineWidth(2);
   VH_tagOnly_H_mass__17->SetMarkerStyle(20);
   VH_tagOnly_H_mass__17->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__17->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__17->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__17->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__17->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__17->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__17->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__17->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__17->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__17->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__17->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1017[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1017[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 3179.048, 6338.028, 6205.51, 6172.294, 5958.812, 3030.268, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2532.374, 5130.834, 5095.196, 5052.984,
   5061.98, 2524.416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 31.486 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1017[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1017[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.384, 2.422, 5.800017, 8.129159, 11.36545, 14.64688,
   17.97536, 20.84058, 24.05136, 27.40399, 29.61283, 32.66357, 34.76396, 36.72004, 38.34361, 40.11362, 41.5445, 42.35639, 43.45297, 44.27719, 44.66483, 45.16592,
   45.38143, 45.84337, 46.0622, 46.36271, 46.32525, 46.47103, 46.79834, 47.05473, 46.66, 46.83925, 46.82903, 46.33688, 46.2127, 45.40649, 45.48288, 45.15399,
   44.62327, 44.32448, 44.33798, 43.91884, 44.09838, 43.84791, 44.2542, 43.71529, 43.39232, 43.36472, 43.45573, 43.373, 43.60561, 43.36472, 43.43368, 43.44333,
   43.2417, 43.08082, 43.18906, 43.21539, 43.01408, 42.56644, 42.62265, 42.71103, 42.212, 42.22051, 42.13252, 42.32953, 42.16092, 42.13394, 41.98735, 41.81307,
   41.85027, 41.82738, 41.58051, 41.27564, 41.52577, 41.26404, 41.05462, 41.08085, 40.7928, 40.57947, 40.32496, 40.21794, 40.23877, 40.10915, 40.13153, 39.57883,
   39.75689, 39.67249, 39.47586, 39.09188, 39.17906, 38.72419, 38.61273, 38.87691, 38.3358, 38.55533, 38.29049, 38.19972, 37.88345, 38.03168, 37.75366, 37.27819,
   37.60273, 37.55495, 37.3151, 37.37601, 37.09307, 36.84697, 36.83397, 36.45008, 36.16817, 36.26238, 36.27229, 35.91573, 35.97568, 35.87905, 35.69171, 35.86904,
   35.54045, 35.73696, 35.02299, 35.28182, 34.78634, 34.97168, 35.14072, 34.54633, 34.93058, 34.39873, 34.55326, 34.32732, 34.14899, 34.20154, 34.1069, 33.96797,
   34.10865, 33.65995, 33.34011, 33.73456, 33.57805, 33.5834, 33.31676, 33.2124, 33.33473, 33.02805, 32.87, 33.05523, 32.8791, 32.53136, 32.60671, 32.48717,
   32.85178, 32.60304, 32.54976, 32.34684, 31.92776, 32.29313, 31.909, 32.30239, 31.79249, 31.63205, 31.86395, 31.38889, 31.22638, 31.60175, 31.46698, 31.46128,
   31.29723, 31.23788, 31.01287, 31.14192, 31.03988, 30.79789, 31.13423, 31.05338, 30.65568, 30.53242, 30.7025, 30.229, 30.40669, 30.448, 30.38503, 29.83234,
   30.12387, 30.44603, 29.9225, 29.63102, 29.51159, 29.49333, 29.67946, 29.46896, 29.52781, 29.32848, 29.55618, 29.5501, 29.19961, 29.38557, 28.76174, 29.00008,
   29.12366, 29.16885, 28.79502, 28.75966, 28.59057, 28.64496, 28.60732, 28.5801, 28.04948, 28.5193, 28.37833, 27.85676, 28.1262, 28.38466, 27.91901, 28.17298,
   27.97469, 27.7793, 27.42582, 27.39962, 27.61938, 27.72106, 27.48904, 27.23748, 27.20889, 27.44764, 27.50863, 27.1362, 27.0832, 26.95249, 26.90804, 26.81891,
   26.94805, 26.84791, 26.57001, 26.49104, 26.95915, 26.35285, 26.4005, 26.19337, 26.41637, 26.19565, 25.91307, 26.05359, 26.22077, 26.10867, 25.79731, 25.44923,
   26.06048, 25.72528, 25.95923, 25.74854, 25.51735, 25.52673, 25.66471, 25.36678, 25.10587, 25.46334, 25.21056, 25.12255, 24.96481, 24.9672, 25.17254, 25.08679,
   24.8157, 25.37858, 24.69238, 24.62927, 24.6657, 24.61468, 24.58549, 24.60496, 24.05136, 24.40956, 24.24964, 24.0986, 24.07374, 24.26691, 23.84389, 23.70542,
   23.97658, 24.00402, 23.90407, 23.9491, 23.68268, 23.78105, 23.46431, 23.54326, 23.3518, 23.11995, 23.25676, 23.21554, 23.53817, 22.93278, 22.93017, 22.62269,
   22.96408, 22.83076, 23.2979, 23.06551, 22.90144, 22.3592, 22.68082, 22.81764, 22.43137, 22.58826, 22.268, 22.62798, 22.57501, 22.15211, 22.21686, 22.41268,
   21.95942, 22.16021, 21.94306, 21.93487, 21.78152, 21.49381, 21.81996, 21.50495, 21.75127, 21.50773, 21.35972, 21.51886, 21.42687, 21.26141, 21.06342, 21.69064,
   21.26423, 21.24451, 21.10033, 21.06626, 20.73981, 20.88362, 20.9951, 20.76288, 20.58046, 20.58627, 20.54844, 20.60081, 20.69358, 20.50178, 20.66173, 20.63854,
   20.70803, 20.22547, 19.99329, 20.45794, 20.19585, 20.23435, 20.20474, 20.45208, 20.16916, 19.82492, 20.02321, 19.75839, 19.42537, 20.10376, 19.9873, 19.71289,
   19.64902, 19.67034, 19.2178, 19.29241, 19.45, 19.17102, 19.44385, 19.2178, 19.31721, 19.46846, 19.51759, 18.91009, 19.06771, 18.78942, 18.84668, 18.8689,
   18.74158, 18.56186, 18.55218, 18.73838, 18.78305, 18.92592, 18.64552, 18.29879, 18.66797, 18.25293, 18.39015, 18.55863, 18.03852, 18.33474, 18.13119, 17.85172,
   18.16747, 18.35431, 18.08822, 17.98202, 18.07498, 17.79799, 17.7879, 17.67989, 17.88857, 17.69004, 17.43442, 17.54053, 17.56099, 17.65278, 17.45843, 17.35182,
   17.42411, 17.16453, 17.28269, 17.22719, 17.21328, 17.28615, 17.59504, 17.02798, 17.34492, 17.42755, 17.04204, 16.96106, 16.84064, 17.03501, 17.10164, 16.77297,
   17.03852, 16.75512, 16.93634, 16.97517, 16.56469, 16.56108, 16.21777, 16.57192, 16.75155, 16.32812, 16.3501, 16.37205, 16.55746, 16.33912, 16.62601, 15.87081,
   16.45957, 15.9873, 15.86703, 16.22515, 16.30611, 15.95732, 16.10666, 15.70398, 15.88588, 15.89718, 15.47359, 15.46972, 15.62756, 15.69254, 15.3454, 15.361,
   15.87835, 15.41157, 15.48519, 15.3376, 15.54692, 14.8054, 15.25542, 15.18857, 15.03011, 14.9262, 14.85787, 15.26327, 15.04603, 15.14516, 15.14121, 14.98224,
   15.361, 14.81753, 14.97824, 14.97824, 14.85787, 14.91417, 14.45353, 14.87398, 14.52788, 14.5608, 14.52376, 14.5608, 14.61415, 14.50726, 14.59365, 14.61824,
   14.49901, 14.29529, 14.34127, 14.27014, 14.49901, 14.28691, 14.08862, 13.96486, 14.09287, 13.99911, 14.70805, 14.11833, 13.41838, 14.08437, 13.75758, 13.7009,
   14.04607, 13.79668, 13.73581, 13.54713, 13.74452, 13.56479, 13.67028, 13.73145, 13.31089, 13.78366, 13.43621, 13.56479, 13.4718, 13.54271, 13.38264, 13.20252,
   13.32886, 13.25681, 13.12522, 13.16165, 13.27937, 13.31089, 13.12978, 13.10239, 13.0061, 12.87659, 12.95538, 12.694, 13.07038, 12.58984, 13.24778, 12.61833,
   12.85799, 12.66568, 12.90445, 12.88124, 12.74577, 12.23295, 12.67985, 12.74107, 12.49918, 12.47041, 12.49918, 12.4175, 12.30613, 12.28178, 12.57557, 12.21336,
   12.42232, 12.30613, 12.07039, 12.27691, 12.49439, 12.07535, 12.35467, 11.91064, 11.95078, 12.179, 12.31099, 11.764, 12.30126, 12.26715, 11.85523, 11.76909,
   11.69255, 11.98579, 12.02568, 12.0406, 11.50157, 11.47552, 11.72322, 11.34964, 11.74873, 11.5742, 11.71301, 11.23834, 11.46508, 11.6823, 11.14206, 11.48074,
   11.68743, 11.51718, 11.10439, 11.11517, 11.35492, 11.3865, 11.42848, 11.38124, 11.16889, 11.16889, 11.00693, 11.13669, 10.87563, 11.43372, 11.11517, 11.19565,
   11.03409, 11.12593, 11.03409, 11.02867, 10.84808, 11.19565, 11.072, 10.88664, 10.56859, 10.80385, 10.78166, 10.51749, 10.56292, 10.66444, 10.69246, 10.44897,
   10.55158, 10.47757, 10.46614, 11.08281, 10.60251, 10.23482, 10.63071, 10.12309, 10.43177, 10.29895, 10.36269, 10.55158, 10.46042, 10.17028, 10.26985, 10.09941,
   10.11717, 10.16439, 10.22897, 10.01011, 9.938093, 10.00413, 10.14671, 10.2114, 9.986162, 10.33955, 9.761861, 9.968163, 10.28732, 9.841252, 9.907932, 9.938093,
   10.10533, 9.80469, 9.798583, 9.60111, 9.675635, 9.594874, 9.663254, 9.532284, 9.45663, 9.950132, 9.688, 9.303476, 9.786358, 9.613571, 9.718844, 9.607343,
   9.706518, 9.322758, 9.638445, 9.718844, 9.180417, 9.895842, 9.532284, 9.418575, 9.258329, 8.935915, 9.424928, 9.082088, 9.424928, 9.386745, 9.219456, 9.316335,
   9.251861, 9.042457, 8.670735, 9.277705, 9.225946, 8.996, 8.949302, 9.258329, 8.861924, 8.753185, 9.238913, 8.90908, 8.677636, 8.955988, 8.888901, 8.78731,
   9.022576, 8.814516, 8.888901, 8.888901, 8.712057, 8.65, 8.439847, 8.482294, 8.705184, 8.712057, 8.559567, 8.517505, 8.670735, 8.52453, 8.566558, 8.52453,
   8.311205, 8.65, 8.538562, 8.23887, 8.468169, 8.45402, 8.339964, 8.468169, 8.390054, 8.41143, 8.573542, 8.397185, 8.23887, 8.253387, 8.390054, 8.461097,
   8.253387, 8.397185, 8.382917, 8.02541, 8.017948, 8.489348, 7.635554, 8.187854, 8.26788, 7.973029, 8.070037, 7.867221, 7.806116, 8.15122, 8.143873, 8.062617,
   8.107039, 8.040313, 7.674651, 7.493117, 7.890014, 7.927856, 7.85199, 7.61986, 7.744528, 7.821437, 7.698014, 7.627711, 7.920302, 7.806116, 7.540895, 7.682447,
   7.81378, 7.469113, 7.477123, 7.666848, 7.420873, 7.428935, 7.477123, 7.517044, 7.58048, 7.596256, 7.208103, 7.282458, 7.315262, 7.744528, 7.347919, 7.249505,
   7.364194, 7.266, 7.339768, 7.149736, 7.517044, 7.040059, 7.132973, 7.073987, 7.517044, 7.216402, 7.315262, 6.954514, 7.099326, 6.894001, 7.58048, 7.166461,
   7.191475, 7.048556, 6.806621, 6.954514, 7.307074, 7.09089, 7.158104, 7.183147, 6.988857, 7.331609, 6.771353, 6.885313, 6.85045, 6.61937, 7.298878, 6.528315,
   7.048556, 6.655443, 6.876614, 6.797821, 6.824187, 6.81541, 6.988857, 6.997417, 6.780188, 6.673406, 6.744782, 6.68237, 7.040059, 6.592185, 6.417344, 6.655443,
   6.574, 6.664431, 6.454546, 6.463813, 6.528315, 6.351716, 6.628406, 6.81541, 6.859183, 6.592185, 6.342285, 6.51914, 6.797821, 5.932664, 6.51914, 6.275872,
   6.646443, 6.628406, 6.50075, 6.417344, 6.275872, 6.285402, 6.555764, 6.50075, 6.218381, 6.646443, 6.140891, 6.131136, 6.247193, 6.228, 6.256767, 6.454546,
   6.3893, 5.942745, 6.179758, 6.150631, 6.150631, 6.189436, 6.082125, 5.727319, 6.04263, 6.160355, 6.160355, 6.140891, 6.06241, 5.841152, 5.789687, 5.768973,
   6.032716, 5.892168, 5.861612, 5.902318, 5.932664, 6.091959, 5.841152, 5.503467, 5.912451, 5.841152, 6.04263, 6.022786, 5.600499, 5.902318, 6.06241, 5.579082,
   6.002876, 5.789687, 5.800017, 5.982899, 5.632472, 5.779339, 5.536, 5.34903, 5.871815, 5.892168, 5.568343, 5.810328, 5.748184, 5.851391, 5.459788, 5.952809,
   5.382497, 5.536, 5.546802, 5.201521, 5.258745, 5.371364, 5.536, 5.674822, 5.178454, 5.737761, 5.695879, 5.459788, 5.600499, 5.922566, 5.632472, 5.643089,
   5.393606, 4.978073, 5.611177, 5.166882, 5.30408, 5.579082, 5.24735, 5.178454, 5.360209, 5.213016, 5.360209, 5.19, 5.281461, 5.315353, 5.503467, 5.315353,
   5.14366, 5.643089, 5.014016, 5.14366, 4.893179, 5.132009, 5.213016, 4.856341, 4.917584, 4.966034, 5.108629, 5.155284, 5.120332, 5.281461, 5.24735, 4.966034,
   5.270115, 4.966034, 4.744113, 4.819222, 5.270115, 4.831627, 5.061544, 5.073356, 4.537747, 4.978073, 4.744113, 4.819222, 4.953966, 4.929741, 4.966034, 4.953966,
   4.731479, 4.693372, 4.819222, 4.953966, 4.706109, 4.905397, 4.57715, 4.769281, 4.537747, 4.806786, 4.744113, 4.718811, 4.831627, 4.667795, 4.731479, 4.321539,
   4.362894, 4.831627, 4.616216, 4.769281, 4.941868, 4.417432, 4.756714 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1017,Graph_from_VH_tagOnly_2b1c_H_mass_fy1017,Graph_from_VH_tagOnly_2b1c_H_mass_fex1017,Graph_from_VH_tagOnly_2b1c_H_mass_fey1017);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->SetMinimum(-690.2459);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->SetMaximum(7028.048);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tagOnly_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",1000,0,2000);
   data_mc_ratio__18->SetBinContent(43,1.031441);
   data_mc_ratio__18->SetBinContent(44,1.027291);
   data_mc_ratio__18->SetBinContent(45,1.025862);
   data_mc_ratio__18->SetBinContent(46,1.029439);
   data_mc_ratio__18->SetBinContent(47,1.006576);
   data_mc_ratio__18->SetBinContent(48,1.006512);
   data_mc_ratio__18->SetBinContent(78,0.9816875);
   data_mc_ratio__18->SetBinContent(79,0.9994477);
   data_mc_ratio__18->SetBinContent(80,0.9726809);
   data_mc_ratio__18->SetBinContent(81,0.9897122);
   data_mc_ratio__18->SetBinContent(82,0.9800513);
   data_mc_ratio__18->SetBinContent(83,0.9986468);
   data_mc_ratio__18->SetBinContent(1000,1.016325);
   data_mc_ratio__18->SetBinContent(1001,1.116406);
   data_mc_ratio__18->SetBinError(43,0.01801248);
   data_mc_ratio__18->SetBinError(44,0.01273121);
   data_mc_ratio__18->SetBinError(45,0.01285748);
   data_mc_ratio__18->SetBinError(46,0.01291448);
   data_mc_ratio__18->SetBinError(47,0.01299701);
   data_mc_ratio__18->SetBinError(48,0.01822506);
   data_mc_ratio__18->SetBinError(78,0.01968896);
   data_mc_ratio__18->SetBinError(79,0.01395681);
   data_mc_ratio__18->SetBinError(80,0.01381671);
   data_mc_ratio__18->SetBinError(81,0.01399524);
   data_mc_ratio__18->SetBinError(82,0.01391439);
   data_mc_ratio__18->SetBinError(83,0.01988957);
   data_mc_ratio__18->SetBinError(1000,0.1796625);
   data_mc_ratio__18->SetBinError(1001,0.009882029);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetEntries(2834.318);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__18->GetXaxis()->SetRange(1,150);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1018[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1018[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1018[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01473374, 0.00738858, 0.007467054, 0.007487119, 0.007620057, 0.01500952, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01664877, 0.008211908, 0.008240577, 0.008274925,
   0.008267569, 0.01656913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1510739 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(0.8187113);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(1.181289);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagOnly_VR_17->cd();
   H_mass_tagOnly_VR_17->Modified();
   H_mass_tagOnly_VR_17->cd();
   H_mass_tagOnly_VR_17->SetSelected(H_mass_tagOnly_VR_17);
}
