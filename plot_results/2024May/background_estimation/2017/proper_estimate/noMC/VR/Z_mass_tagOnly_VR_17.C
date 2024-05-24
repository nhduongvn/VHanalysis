#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_17()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_17/Z_mass_tagOnly_VR_17
//=========  (Fri May 24 11:23:53 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_VR_17 = new TCanvas("Z_mass_tagOnly_VR_17", "Z_mass_tagOnly_VR_17",0,0,600,600);
   Z_mass_tagOnly_VR_17->SetHighLightColor(2);
   Z_mass_tagOnly_VR_17->Range(0,0,1,1);
   Z_mass_tagOnly_VR_17->SetFillColor(0);
   Z_mass_tagOnly_VR_17->SetFillStyle(4000);
   Z_mass_tagOnly_VR_17->SetBorderMode(0);
   Z_mass_tagOnly_VR_17->SetBorderSize(2);
   Z_mass_tagOnly_VR_17->SetFrameFillStyle(1000);
   Z_mass_tagOnly_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-26.14745,315.7258,26131.3);
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
   st->SetMaximum(23515.56);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",1000,0,2000);
   st_stack_35->SetMinimum(0.01);
   st_stack_35->SetMaximum(23515.56);
   st_stack_35->SetDirectory(nullptr);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->SetLineWidth(0);
   st_stack_35->GetXaxis()->SetRange(1,150);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetTitleOffset(1);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetLabelSize(0.05);
   st_stack_35->GetYaxis()->SetTitleSize(0.057);
   st_stack_35->GetYaxis()->SetTitleOffset(1.2);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetTitleOffset(1);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,8186.284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,8801.152);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,9465.695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,10005.62);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,10343.08);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,5936.174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,5902.08);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,5735.155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,5687.302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,5596.995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,24.26188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,13139.66);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(6,0.0432996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(7,0.01609272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(8,0.02129816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(9,0.01236235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(10,0.009407901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(11,0.02050231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.686428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,0.7721749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,2.709015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,6.194828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,10.24683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,14.76597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,19.87148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,25.37973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,30.38787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,35.25312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,40.09877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,44.44288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,48.64268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,51.87302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,54.43774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,56.62762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,58.74591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,60.19959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,61.67781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,61.80476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,62.31493);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,62.43345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,62.16986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,62.11571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,62.01326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,61.59818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,61.2242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,60.32828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,60.11719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,59.5762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,59.38649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,58.67885);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,58.11533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,57.53598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,57.31533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,56.31881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,56.31767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,55.41096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,55.01398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,54.54477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,53.82187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,53.45486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,52.54043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,52.30104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,52.21558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,51.62817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,50.58947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,50.48384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,49.81706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,49.4962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,49.36621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,48.7162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,48.7141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,48.53528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,48.00115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,47.72757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,47.32015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,46.9091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,47.00602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,46.4019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,46.09803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,45.79842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,45.73921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,45.2305);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,45.23145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,44.91339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,44.14185);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,44.08149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,44.34759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,43.81638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,43.84974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,43.34526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,42.591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,42.4975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,42.21248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,42.04276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,41.87849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,41.51966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,41.26983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,40.90229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,40.52304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,40.39949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,40.63017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,39.97915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,39.9169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,39.66057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,39.31262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,39.38536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,38.91387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,38.70555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,38.36204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,38.1933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,38.05234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,37.71225);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,37.79177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,37.49794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,37.52207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,37.09205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,36.51123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,36.79317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,37.03201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,36.0867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,36.23888);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,36.01176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,35.82882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,35.58009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,35.14211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,35.40128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,35.17051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,35.0931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,34.9113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,35.07124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,34.81787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,34.35774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,34.52297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,34.2204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,34.16017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,33.97981);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,34.3965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,33.84617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,33.46045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,33.26502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,33.18681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,33.24464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,33.01509);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,33.281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,33.28407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,32.84834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,32.48527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,32.96597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,32.61214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,32.30959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,32.40617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,32.41483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,32.28925);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,32.07626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,31.89505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,31.81093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,31.78165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,31.79314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,31.49617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,31.91121);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,31.53151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,31.24914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,31.63242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,31.12168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,30.96017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,31.03042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,30.8004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,30.78565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,31.03596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,30.54813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,30.61489);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,30.73071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,30.79385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,30.42515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,30.49391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,30.07605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,30.06755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,30.00658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,29.81074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,30.05058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,29.7928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,29.92953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,29.32531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,29.98052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,29.44865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,29.71451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,29.67563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,29.39672);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,29.92836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,29.37967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,28.96137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,28.99847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,28.66061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,28.78991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,28.88904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,28.7837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,28.54671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,28.63535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,28.40445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,28.39953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,28.29668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,28.71496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,28.36808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,28.28138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,28.38255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,28.03586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,27.90525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,27.87688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,28.08664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,27.82136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,27.81138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,27.92187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,27.59101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,27.51594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,27.40728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,27.63017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,27.5879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,27.21628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,27.46902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,27.26317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,27.2224);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,26.99286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,27.22951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,27.09399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,27.01415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,26.8906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,26.91595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,26.80981);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,26.9753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,26.66267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,26.59235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,26.81238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,26.51059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,26.24504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,26.85869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,26.18599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,26.29885);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,26.31425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,26.21938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,26.21938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,26.28636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,25.86512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,25.94244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,25.74587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,26.02585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,26.28884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,26.00213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,25.74766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,25.5027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,26.02615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,25.5705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,25.36386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,25.23558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,25.61004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,25.16125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,25.25405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,25.09581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,24.97033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,24.87312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,24.8213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,24.79141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,24.90616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,24.74704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,24.57945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,24.41636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,24.63591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,24.33266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,24.45734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,24.36252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,24.49607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,24.94366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,23.96719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,24.0112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,24.21928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,24.29005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,24.30593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,23.97716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,23.86167);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,24.06054);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,23.86613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,23.70813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,23.57768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,23.94223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,23.42271);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,23.59778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,23.63886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,23.37371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,23.30774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,23.4267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,23.32011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,23.30813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,23.3256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,22.68078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,22.77991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,23.10606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,23.32163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,22.82509);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,23.01664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,22.74119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,22.65191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,22.61514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,22.42961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,22.41151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,22.43346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,22.53915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,22.31066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,21.98765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,22.17591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,21.84477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,22.3691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,21.96601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,22.77129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,22.14383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,21.88702);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,22.17005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,21.8946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,22.02004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,21.76911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,21.95717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,21.68978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,21.7029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,21.50784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,21.63757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,21.46731);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,21.34098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,21.25143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,21.4386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,21.41539);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,22.29059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,21.25068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,21.47031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,21.10594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,21.10788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,20.94373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,20.98795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,20.96976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,20.78162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,20.86804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,20.93369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,20.93452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,21.00534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,20.62821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,20.44105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,20.52984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,20.44947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,20.27646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,20.3267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,20.23929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,20.33456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,20.11706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,20.1564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,20.03024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,20.19596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,19.94464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,19.73695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,20.04462);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,19.6337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,19.66086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,19.94172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,19.78543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,19.74239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,19.73569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,19.93819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,19.57241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,19.31252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,19.43764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,19.4837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,19.49099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,19.3448);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,19.30677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,19.14179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,19.23412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,19.10703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,18.96677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,18.8353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,18.98992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,19.00506);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,18.59775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,18.86928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,18.67434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,18.56247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,18.90978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,18.63665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,18.726);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,19.06457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,18.55343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,18.22964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,18.6517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,18.34399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,18.41453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,18.20464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,18.21314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,17.9728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,18.08676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,17.8982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,17.75634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,17.61083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,17.80744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,17.68349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,17.82705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,17.83138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,17.69031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,17.63389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,17.37197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,17.32644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,18.05378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,17.90077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,17.4509);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,17.3863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,17.17289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,17.64406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,17.25642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,17.33887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,17.3688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,17.08752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,17.29597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,17.02642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,17.40915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,17.04659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,16.73342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,17.39053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,17.12164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,17.03434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,17.0341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,16.80587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,16.66389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,16.8405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,17.10256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,16.74346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,16.87859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,16.39105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,16.61571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,16.59855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,16.22451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,16.56195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,16.32764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,16.18088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,16.44757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,16.17341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,16.23148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,16.05361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,16.31438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,16.13659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,16.00291);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,15.85876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,15.58315);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,16.11239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,15.87795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,15.66127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,15.81686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,15.92536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,15.5515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,15.7453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,15.66526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,15.56835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,15.44631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,15.60161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,15.45682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,15.38778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,15.25759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,15.47022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,15.27071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,15.17919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,15.34605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,15.1205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,15.11802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,15.33763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,15.2194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,15.27031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,14.83907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,15.07364);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,14.62701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,15.07379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,14.91875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,14.92751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,14.64429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,14.80438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,14.64009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,14.54004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,14.64537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,14.58172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,15.1355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,14.72133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,14.53606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,14.32975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,14.56586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,14.39945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,14.32179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,14.36515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,14.26248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,14.10556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,14.23719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,14.44526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,14.10882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,13.933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,14.50458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,14.1443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,14.06935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,13.84428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,13.8883);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,13.93509);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,13.82789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,14.02454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,13.53816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,13.73658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,13.83557);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,13.75948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,13.62573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,13.92218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,13.77875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,13.59137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,13.48982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,13.65137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,13.34176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,13.68833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,13.67648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,13.44006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,13.21546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,13.7074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,13.41498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,13.3608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,13.24378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,12.93102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,13.11038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,13.29073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,13.13866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,13.03488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,12.79857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,13.26052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,13.14569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,13.05054);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,12.83001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,12.70458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,13.52701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,12.675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,12.92187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,12.76539);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,12.79129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,13.0667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,12.69499);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,13.05877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,12.45644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,12.72626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,12.81114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,12.46278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,12.6331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,12.29139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,12.41014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,12.68427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,12.55417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,12.26419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,12.52875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,12.55151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,12.01516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,12.05471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,12.18161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,12.25732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,12.1023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,12.16832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,12.20803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,11.89514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,11.91106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,12.0934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,12.02574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,12.17264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,11.88181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,11.60765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,11.94822);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,11.73392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,11.78356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,12.51072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,11.60686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,11.88377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,11.667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,11.65406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,11.30115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,11.78864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,11.59199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,11.65399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,11.45743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,11.90075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,11.51828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,11.53838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,11.51048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,11.40682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,11.47827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,11.05677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,11.63627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,11.24564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,11.12724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,11.37334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,11.22163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,10.87103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,11.18053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,11.35742);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,11.12222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,11.03983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,11.49461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,10.97036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,10.97449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,11.34076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,10.92183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,11.03371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,10.89144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,11.17402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,10.66458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,10.8203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,10.6663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,10.93396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,11.01379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,11.04827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,10.87198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,10.74152);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,10.59124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,10.35696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,10.68888);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,10.35678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,10.57695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,10.46569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,10.68769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,10.62875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,10.44081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,10.28426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,10.88698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,10.62447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,10.30818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,10.55059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,10.24838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,10.61629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,10.41855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,10.42575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,10.52183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,10.29205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,10.22974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,10.19134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,10.23285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,10.40511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,10.15302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,10.05508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,10.21577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,10.07636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,9.979361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,9.852947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,10.27247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,10.00154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,10.00341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,9.855038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,9.959167);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,9.990629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,9.979801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,9.628057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,10.14111);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,9.954154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,9.929593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,9.788664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,9.560647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,10.07025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,9.4163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,10.13358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,9.705062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,10.38467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,9.48158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,9.645154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,9.66149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,9.550651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,9.649875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,9.468668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,9.5363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,9.568345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,9.145271);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,9.616223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,9.494676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,9.312201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,9.35471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,9.318077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,9.195878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,9.360558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,9.628436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,9.098954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,9.60442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,9.466032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,9.164838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,9.128639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,8.963081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,9.302429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,8.969345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,9.07321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,9.187003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,9.563397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,8.967444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,9.211701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,8.848497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,9.052245);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,9.143997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,8.880976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,8.818948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,8.93907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,8.746378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,8.868695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,8.847942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,8.882101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,8.896527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,8.7173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,9.088745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,8.309603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,8.907076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,8.836387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,8.724691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,8.672574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,8.674336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,8.818962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,8.89164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,8.562842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,8.563695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,8.473333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,8.630422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,8.595029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,8.595721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,8.631423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,8.487985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,8.451713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,8.771428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,8.078442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,8.167379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,8.083224);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,8.186771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,8.707227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,8.254985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,8.447477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,8.304033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,7.982847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,8.317124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,8.232873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,8.18414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,8.303641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,8.18034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,8.185841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,8.234708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,8.144162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,8.107704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,8.022098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,8.045958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,8.018193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,8.058515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,8.449073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,8.152119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,7.911569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,7.99351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,7.977075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,8.168444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,7.750238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,7.942085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,8.02721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,7.989144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,7.730196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,8.167499);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,8.097633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,9.020916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,8.039494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,7.808093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,8.749403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,7.630239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,7.438321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,7.437743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,7.515467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,7.553939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,7.644544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,7.834667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,7.679796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,7.696255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,7.562981);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,7.726638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,7.357049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,7.756344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,7.76);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,7.51193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,7.389523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,7.387876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,7.29666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,7.665047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,7.585348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,7.344722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,7.560464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,7.305462);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,7.242986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,7.201188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,7.381504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,7.71467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,7.326228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,7.387415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,7.277762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,7.392306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,7.009408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,7.064209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,7.263841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,7.171112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,7.228636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,7.308744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,7.208135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,6.818944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,7.069267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,7.034002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,7.143147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,7.178091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,6.795174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,6.854855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,7.072913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,6.82572);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,6.898564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,6.933192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,7.06307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,6.972045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,6.871252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,7.018581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,7.107161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,6.642388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,6.785411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,6.8398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,6.788886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,6.899674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,7.027339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,6.88574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,6.597876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,6.552674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,6.657803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,6.828985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,6.69145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,6.681163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,6.651274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,6.980807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,6.784778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,6.6102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,6.759752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,7.056818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,6.408442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,6.506101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,6.376409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,6.411495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,6.570568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,6.746555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,6.263094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,6.584739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,6.618845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,5.953516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,6.440561);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,6.535241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,6.454821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,6.533727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,6.443042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,6.624203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,6.290512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,6.372833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,6.348358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,6.255792);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,6.222938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,6.362637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,6.406679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,6.179933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,6.166448);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,6.23756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,6.112174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,6.225816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,6.245311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,6.142995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,6.294813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,6.291752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,6.015082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,6.196703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,5.921839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,6.275387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,5.985078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,5.965307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,6.206748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,6.137021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,6.081959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,6.172658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,5.986496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,5.860562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,5.911581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,6.102438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,5.953256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,5.598766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,5.885204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,5.988372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,6.110407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,6.073709);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,6.113663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,5.768869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,5.812923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,5.703522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,5.341946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,5.953085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,5.539633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,5.89231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,5.747865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,6.054278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,5.522808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,5.652665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,5.67296);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,5.693231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,5.831689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,5.596239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,5.562803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,5.563408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,5.406206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,5.433952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,5.635159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,5.230196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,5.750586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,5.580496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,5.633628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,5.918154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,5.551495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,5.743722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,5.591077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,5.842548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,5.401566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,5.361044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,5.367171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,5.408744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,5.327881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,5.442398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,5.565156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,5.41286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,5.575419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,5.21386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,5.21864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,5.291646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,5.65029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,5.228822);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,5.462827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,5.463427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,5.423344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,5.230915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,5.453563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,5.361506);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,5.077294);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,5.613886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,5.205656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,5.170766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,5.022104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,5.128876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,5.153181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,5.210778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,5.170179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,5.225984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,5.392086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,5.355735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,5.249101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,4.812785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,5.105995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,5.019664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,5.174843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,5.263492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,5.291132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,4.809011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,4.949321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,4.858697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,5.151961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,5.069578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,5.119017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,4.919889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,5.194485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,4.63247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,5.060674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,5.161467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,4.893459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,4.847499);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,5.048525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,5.239083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,5.134419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,4.712652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,4.85748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,4.833215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,4.706276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,5.124409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,4.442932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,4.936799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,4.625504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,4.92754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,5.176754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,4.841622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,4.658557);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,4.785103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,4.783986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,4.509017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,4.841816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,4.757134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,4.747851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,4.384164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,4.697974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,4.620596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,4.71601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,4.686509);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,4.416534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,4.61189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,4.831936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,4.589174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,4.462996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,4.587617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,4.719363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,4.301931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,4.450109);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,4.550215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,4.399042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,4.518805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,4.353445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,71.98017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(2586482);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Z_mass__69 = new TH1D("VH_tagOnly_Z_mass__69","",1000,0,2000);
   VH_tagOnly_Z_mass__69->SetBinContent(26,8565);
   VH_tagOnly_Z_mass__69->SetBinContent(27,8944);
   VH_tagOnly_Z_mass__69->SetBinContent(28,9600);
   VH_tagOnly_Z_mass__69->SetBinContent(29,10147);
   VH_tagOnly_Z_mass__69->SetBinContent(30,10582);
   VH_tagOnly_Z_mass__69->SetBinContent(61,7042);
   VH_tagOnly_Z_mass__69->SetBinContent(62,6894);
   VH_tagOnly_Z_mass__69->SetBinContent(63,6774);
   VH_tagOnly_Z_mass__69->SetBinContent(64,6698);
   VH_tagOnly_Z_mass__69->SetBinContent(65,6689);
   VH_tagOnly_Z_mass__69->SetBinContent(1000,29);
   VH_tagOnly_Z_mass__69->SetBinContent(1001,15920);
   VH_tagOnly_Z_mass__69->SetEntries(1351700);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__69->SetLineColor(ci);
   VH_tagOnly_Z_mass__69->SetLineWidth(2);
   VH_tagOnly_Z_mass__69->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__69->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__69->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__69->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__69->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__69->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__69->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__69->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__69->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__69->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__69->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__69->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1069[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1069[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 8186.284, 8801.152, 9465.695, 10005.62, 10343.08, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5936.174, 5902.08, 5735.155, 5687.302, 5596.995,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 24.26188 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1069[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1069[1000] = { 0, 0, 0, 0, 0, 0.0432996, 0.01609272, 0.02129816, 0.01236235, 0.009407901, 0.02050231, 0.686428, 0.7721749, 2.709015, 6.194828, 10.24683, 14.76597,
   19.87148, 25.37973, 30.38787, 35.25312, 40.09877, 44.44288, 48.64268, 51.87302, 54.43774, 56.62762, 58.74591, 60.19959, 61.67781, 61.80476, 62.31493, 62.43345,
   62.16986, 62.11571, 62.01326, 61.59818, 61.2242, 60.32828, 60.11719, 59.5762, 59.38649, 58.67885, 58.11533, 57.53598, 57.31533, 56.31881, 56.31767, 55.41096,
   55.01398, 54.54477, 53.82187, 53.45486, 52.54043, 52.30104, 52.21558, 51.62817, 50.58947, 50.48384, 49.81706, 49.4962, 49.36621, 48.7162, 48.7141, 48.53528,
   48.00115, 47.72757, 47.32015, 46.9091, 47.00602, 46.4019, 46.09803, 45.79842, 45.73921, 45.2305, 45.23145, 44.91339, 44.14185, 44.08149, 44.34759, 43.81638,
   43.84974, 43.34526, 42.591, 42.4975, 42.21248, 42.04276, 41.87849, 41.51966, 41.26983, 40.90229, 40.52304, 40.39949, 40.63017, 39.97915, 39.9169, 39.66057,
   39.31262, 39.38536, 38.91387, 38.70555, 38.36204, 38.1933, 38.05234, 37.71225, 37.79177, 37.49794, 37.52207, 37.09205, 36.51123, 36.79317, 37.03201, 36.0867,
   36.23888, 36.01176, 35.82882, 35.58009, 35.14211, 35.40128, 35.17051, 35.0931, 34.9113, 35.07124, 34.81787, 34.35774, 34.52297, 34.2204, 34.16017, 33.97981,
   34.3965, 33.84617, 33.46045, 33.26502, 33.18681, 33.24464, 33.01509, 33.281, 33.28407, 32.84834, 32.48527, 32.96597, 32.61214, 32.30959, 32.40617, 32.41483,
   32.28925, 32.07626, 31.89505, 31.81093, 31.78165, 31.79314, 31.49617, 31.91121, 31.53151, 31.24914, 31.63242, 31.12168, 30.96017, 31.03042, 30.8004, 30.78565,
   31.03596, 30.54813, 30.61489, 30.73071, 30.79385, 30.42515, 30.49391, 30.07605, 30.06755, 30.00658, 29.81074, 30.05058, 29.7928, 29.92953, 29.32531, 29.98052,
   29.44865, 29.71451, 29.67563, 29.39672, 29.92836, 29.37967, 28.96137, 28.99847, 28.66061, 28.78991, 28.88904, 28.7837, 28.54671, 28.63535, 28.40445, 28.39953,
   28.29668, 28.71496, 28.36808, 28.28138, 28.38255, 28.03586, 27.90525, 27.87688, 28.08664, 27.82136, 27.81138, 27.92187, 27.59101, 27.51594, 27.40728, 27.63017,
   27.5879, 27.21628, 27.46902, 27.26317, 27.2224, 26.99286, 27.22951, 27.09399, 27.01415, 26.8906, 26.91595, 26.80981, 26.9753, 26.66267, 26.59235, 26.81238,
   26.51059, 26.24504, 26.85869, 26.18599, 26.29885, 26.31425, 26.21938, 26.21938, 26.28636, 25.86512, 25.94244, 25.74587, 26.02585, 26.28884, 26.00213, 25.74766,
   25.5027, 26.02615, 25.5705, 25.36386, 25.23558, 25.61004, 25.16125, 25.25405, 25.09581, 24.97033, 24.87312, 24.8213, 24.79141, 24.90616, 24.74704, 24.57945,
   24.41636, 24.63591, 24.33266, 24.45734, 24.36252, 24.49607, 24.94366, 23.96719, 24.0112, 24.21928, 24.29005, 24.30593, 23.97716, 23.86167, 24.06054, 23.86613,
   23.70813, 23.57768, 23.94223, 23.42271, 23.59778, 23.63886, 23.37371, 23.30774, 23.4267, 23.32011, 23.30813, 23.3256, 22.68078, 22.77991, 23.10606, 23.32163,
   22.82509, 23.01664, 22.74119, 22.65191, 22.61514, 22.42961, 22.41151, 22.43346, 22.53915, 22.31066, 21.98765, 22.17591, 21.84477, 22.3691, 21.96601, 22.77129,
   22.14383, 21.88702, 22.17005, 21.8946, 22.02004, 21.76911, 21.95717, 21.68978, 21.7029, 21.50784, 21.63757, 21.46731, 21.34098, 21.25143, 21.4386, 21.41539,
   22.29059, 21.25068, 21.47031, 21.10594, 21.10788, 20.94373, 20.98795, 20.96976, 20.78162, 20.86804, 20.93369, 20.93452, 21.00534, 20.62821, 20.44105, 20.52984,
   20.44947, 20.27646, 20.3267, 20.23929, 20.33456, 20.11706, 20.1564, 20.03024, 20.19596, 19.94464, 19.73695, 20.04462, 19.6337, 19.66086, 19.94172, 19.78543,
   19.74239, 19.73569, 19.93819, 19.57241, 19.31252, 19.43764, 19.4837, 19.49099, 19.3448, 19.30677, 19.14179, 19.23412, 19.10703, 18.96677, 18.8353, 18.98992,
   19.00506, 18.59775, 18.86928, 18.67434, 18.56247, 18.90978, 18.63665, 18.726, 19.06457, 18.55343, 18.22964, 18.6517, 18.34399, 18.41453, 18.20464, 18.21314,
   17.9728, 18.08676, 17.8982, 17.75634, 17.61083, 17.80744, 17.68349, 17.82705, 17.83138, 17.69031, 17.63389, 17.37197, 17.32644, 18.05378, 17.90077, 17.4509,
   17.3863, 17.17289, 17.64406, 17.25642, 17.33887, 17.3688, 17.08752, 17.29597, 17.02642, 17.40915, 17.04659, 16.73342, 17.39053, 17.12164, 17.03434, 17.0341,
   16.80587, 16.66389, 16.8405, 17.10256, 16.74346, 16.87859, 16.39105, 16.61571, 16.59855, 16.22451, 16.56195, 16.32764, 16.18088, 16.44757, 16.17341, 16.23148,
   16.05361, 16.31438, 16.13659, 16.00291, 15.85876, 15.58315, 16.11239, 15.87795, 15.66127, 15.81686, 15.92536, 15.5515, 15.7453, 15.66526, 15.56835, 15.44631,
   15.60161, 15.45682, 15.38778, 15.25759, 15.47022, 15.27071, 15.17919, 15.34605, 15.1205, 15.11802, 15.33763, 15.2194, 15.27031, 14.83907, 15.07364, 14.62701,
   15.07379, 14.91875, 14.92751, 14.64429, 14.80438, 14.64009, 14.54004, 14.64537, 14.58172, 15.1355, 14.72133, 14.53606, 14.32975, 14.56586, 14.39945, 14.32179,
   14.36515, 14.26248, 14.10556, 14.23719, 14.44526, 14.10882, 13.933, 14.50458, 14.1443, 14.06935, 13.84428, 13.8883, 13.93509, 13.82789, 14.02454, 13.53816,
   13.73658, 13.83557, 13.75948, 13.62573, 13.92218, 13.77875, 13.59137, 13.48982, 13.65137, 13.34176, 13.68833, 13.67648, 13.44006, 13.21546, 13.7074, 13.41498,
   13.3608, 13.24378, 12.93102, 13.11038, 13.29073, 13.13866, 13.03488, 12.79857, 13.26052, 13.14569, 13.05054, 12.83001, 12.70458, 13.52701, 12.675, 12.92187,
   12.76539, 12.79129, 13.0667, 12.69499, 13.05877, 12.45644, 12.72626, 12.81114, 12.46278, 12.6331, 12.29139, 12.41014, 12.68427, 12.55417, 12.26419, 12.52875,
   12.55151, 12.01516, 12.05471, 12.18161, 12.25732, 12.1023, 12.16832, 12.20803, 11.89514, 11.91106, 12.0934, 12.02574, 12.17264, 11.88181, 11.60765, 11.94822,
   11.73392, 11.78356, 12.51072, 11.60686, 11.88377, 11.667, 11.65406, 11.30115, 11.78864, 11.59199, 11.65399, 11.45743, 11.90075, 11.51828, 11.53838, 11.51048,
   11.40682, 11.47827, 11.05677, 11.63627, 11.24564, 11.12724, 11.37334, 11.22163, 10.87103, 11.18053, 11.35742, 11.12222, 11.03983, 11.49461, 10.97036, 10.97449,
   11.34076, 10.92183, 11.03371, 10.89144, 11.17402, 10.66458, 10.8203, 10.6663, 10.93396, 11.01379, 11.04827, 10.87198, 10.74152, 10.59124, 10.35696, 10.68888,
   10.35678, 10.57695, 10.46569, 10.68769, 10.62875, 10.44081, 10.28426, 10.88698, 10.62447, 10.30818, 10.55059, 10.24838, 10.61629, 10.41855, 10.42575, 10.52183,
   10.29205, 10.22974, 10.19134, 10.23285, 10.40511, 10.15302, 10.05508, 10.21577, 10.07636, 9.979361, 9.852947, 10.27247, 10.00154, 10.00341, 9.855038, 9.959167,
   9.990629, 9.979801, 9.628057, 10.14111, 9.954154, 9.929593, 9.788664, 9.560647, 10.07025, 9.4163, 10.13358, 9.705062, 10.38467, 9.48158, 9.645154, 9.66149,
   9.550651, 9.649875, 9.468668, 9.5363, 9.568345, 9.145271, 9.616223, 9.494676, 9.312201, 9.35471, 9.318077, 9.195878, 9.360558, 9.628436, 9.098954, 9.60442,
   9.466032, 9.164838, 9.128639, 8.963081, 9.302429, 8.969345, 9.07321, 9.187003, 9.563397, 8.967444, 9.211701, 8.848497, 9.052245, 9.143997, 8.880976, 8.818948,
   8.93907, 8.746378, 8.868695, 8.847942, 8.882101, 8.896527, 8.7173, 9.088745, 8.309603, 8.907076, 8.836387, 8.724691, 8.672574, 8.674336, 8.818962, 8.89164,
   8.562842, 8.563695, 8.473333, 8.630422, 8.595029, 8.595721, 8.631423, 8.487985, 8.451713, 8.771428, 8.078442, 8.167379, 8.083224, 8.186771, 8.707227, 8.254985,
   8.447477, 8.304033, 7.982847, 8.317124, 8.232873, 8.18414, 8.303641, 8.18034, 8.185841, 8.234708, 8.144162, 8.107704, 8.022098, 8.045958, 8.018193, 8.058515,
   8.449073, 8.152119, 7.911569, 7.99351, 7.977075, 8.168444, 7.750238, 7.942085, 8.02721, 7.989144, 7.730196, 8.167499, 8.097633, 9.020916, 8.039494, 7.808093,
   8.749403, 7.630239, 7.438321, 7.437743, 7.515467, 7.553939, 7.644544, 7.834667, 7.679796, 7.696255, 7.562981, 7.726638, 7.357049, 7.756344, 7.76, 7.51193,
   7.389523, 7.387876, 7.29666, 7.665047, 7.585348, 7.344722, 7.560464, 7.305462, 7.242986, 7.201188, 7.381504, 7.71467, 7.326228, 7.387415, 7.277762, 7.392306,
   7.009408, 7.064209, 7.263841, 7.171112, 7.228636, 7.308744, 7.208135, 6.818944, 7.069267, 7.034002, 7.143147, 7.178091, 6.795174, 6.854855, 7.072913, 6.82572,
   6.898564, 6.933192, 7.06307, 6.972045, 6.871252, 7.018581, 7.107161, 6.642388, 6.785411, 6.8398, 6.788886, 6.899674, 7.027339, 6.88574, 6.597876, 6.552674,
   6.657803, 6.828985, 6.69145, 6.681163, 6.651274, 6.980807, 6.784778, 6.6102, 6.759752, 7.056818, 6.408442, 6.506101, 6.376409, 6.411495, 6.570568, 6.746555,
   6.263094, 6.584739, 6.618845, 5.953516, 6.440561, 6.535241, 6.454821, 6.533727, 6.443042, 6.624203, 6.290512, 6.372833, 6.348358, 6.255792, 6.222938, 6.362637,
   6.406679, 6.179933, 6.166448, 6.23756, 6.112174, 6.225816, 6.245311, 6.142995, 6.294813, 6.291752, 6.015082, 6.196703, 5.921839, 6.275387, 5.985078, 5.965307,
   6.206748, 6.137021, 6.081959, 6.172658, 5.986496, 5.860562, 5.911581, 6.102438, 5.953256, 5.598766, 5.885204, 5.988372, 6.110407, 6.073709, 6.113663, 5.768869,
   5.812923, 5.703522, 5.341946, 5.953085, 5.539633, 5.89231, 5.747865, 6.054278, 5.522808, 5.652665, 5.67296, 5.693231, 5.831689, 5.596239, 5.562803, 5.563408,
   5.406206, 5.433952, 5.635159, 5.230196, 5.750586, 5.580496, 5.633628, 5.918154, 5.551495, 5.743722, 5.591077, 5.842548, 5.401566, 5.361044, 5.367171, 5.408744,
   5.327881, 5.442398, 5.565156, 5.41286, 5.575419, 5.21386, 5.21864, 5.291646, 5.65029, 5.228822, 5.462827, 5.463427, 5.423344, 5.230915, 5.453563, 5.361506,
   5.077294, 5.613886, 5.205656, 5.170766, 5.022104, 5.128876, 5.153181, 5.210778, 5.170179, 5.225984, 5.392086, 5.355735, 5.249101, 4.812785, 5.105995, 5.019664,
   5.174843, 5.263492, 5.291132, 4.809011, 4.949321, 4.858697, 5.151961, 5.069578, 5.119017, 4.919889, 5.194485, 4.63247, 5.060674, 5.161467, 4.893459, 4.847499,
   5.048525, 5.239083, 5.134419, 4.712652, 4.85748, 4.833215, 4.706276, 5.124409, 4.442932, 4.936799, 4.625504, 4.92754, 5.176754, 4.841622, 4.658557, 4.785103,
   4.783986, 4.509017, 4.841816, 4.757134, 4.747851, 4.384164, 4.697974, 4.620596, 4.71601, 4.686509, 4.416534, 4.61189, 4.831936, 4.589174, 4.462996, 4.587617,
   4.719363, 4.301931, 4.450109, 4.550215, 4.399042, 4.518805, 4.353445 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1069,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1069,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1069,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1069);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->SetMinimum(-1109.153);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->SetMaximum(11451.48);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1069);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tagOnly_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__70 = new TH1D("data_mc_ratio__70","",1000,0,2000);
   data_mc_ratio__70->SetBinContent(26,1.046262);
   data_mc_ratio__70->SetBinContent(27,1.016231);
   data_mc_ratio__70->SetBinContent(28,1.014189);
   data_mc_ratio__70->SetBinContent(29,1.01413);
   data_mc_ratio__70->SetBinContent(30,1.023099);
   data_mc_ratio__70->SetBinContent(61,1.186286);
   data_mc_ratio__70->SetBinContent(62,1.168063);
   data_mc_ratio__70->SetBinContent(63,1.181136);
   data_mc_ratio__70->SetBinContent(64,1.177711);
   data_mc_ratio__70->SetBinContent(65,1.195106);
   data_mc_ratio__70->SetBinContent(1000,1.195291);
   data_mc_ratio__70->SetBinContent(1001,1.211599);
   data_mc_ratio__70->SetBinError(26,0.01130516);
   data_mc_ratio__70->SetBinError(27,0.01074549);
   data_mc_ratio__70->SetBinError(28,0.01035102);
   data_mc_ratio__70->SetBinError(29,0.01006758);
   data_mc_ratio__70->SetBinError(30,0.009945665);
   data_mc_ratio__70->SetBinError(61,0.01413648);
   data_mc_ratio__70->SetBinError(62,0.01406794);
   data_mc_ratio__70->SetBinError(63,0.01435084);
   data_mc_ratio__70->SetBinError(64,0.01439018);
   data_mc_ratio__70->SetBinError(65,0.01461254);
   data_mc_ratio__70->SetBinError(1000,0.2219599);
   data_mc_ratio__70->SetBinError(1001,0.01167314);
   data_mc_ratio__70->SetMinimum(0.4);
   data_mc_ratio__70->SetMaximum(1.6);
   data_mc_ratio__70->SetEntries(1530.16);
   data_mc_ratio__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__70->SetLineColor(ci);
   data_mc_ratio__70->SetLineWidth(2);
   data_mc_ratio__70->SetMarkerStyle(20);
   data_mc_ratio__70->SetMarkerSize(1.2);
   data_mc_ratio__70->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__70->GetXaxis()->SetRange(1,150);
   data_mc_ratio__70->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__70->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__70->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__70->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__70->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__70->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__70->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1070[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1070[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1070[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1070[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.006649871, 0.006434114, 0.006206192, 0.00601658, 0.005963194, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.008338064, 0.008364206, 0.008494312, 0.008565414, 0.008671668,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1794356 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1070,Graph_from_mc_statistical_error_fy1070,Graph_from_mc_statistical_error_fex1070,Graph_from_mc_statistical_error_fey1070);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1070 = new TH1F("Graph_Graph_from_mc_statistical_error1070","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1070->SetMinimum(0.7846773);
   Graph_Graph_from_mc_statistical_error1070->SetMaximum(1.215323);
   Graph_Graph_from_mc_statistical_error1070->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1070->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1070);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_17->cd();
   Z_mass_tagOnly_VR_17->Modified();
   Z_mass_tagOnly_VR_17->cd();
   Z_mass_tagOnly_VR_17->SetSelected(Z_mass_tagOnly_VR_17);
}
