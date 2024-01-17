#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_VR_18()
{
//=========Macro generated from canvas: H_mass_tagOnly_VR_18/H_mass_tagOnly_VR_18
//=========  (Sat Dec  9 13:50:12 2023) by ROOT version 6.28/10
   TCanvas *H_mass_tagOnly_VR_18 = new TCanvas("H_mass_tagOnly_VR_18", "H_mass_tagOnly_VR_18",0,0,600,600);
   H_mass_tagOnly_VR_18->SetHighLightColor(2);
   H_mass_tagOnly_VR_18->Range(0,0,1,1);
   H_mass_tagOnly_VR_18->SetFillColor(0);
   H_mass_tagOnly_VR_18->SetFillStyle(4000);
   H_mass_tagOnly_VR_18->SetBorderMode(0);
   H_mass_tagOnly_VR_18->SetBorderSize(2);
   H_mass_tagOnly_VR_18->SetFrameFillStyle(1000);
   H_mass_tagOnly_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-35.75318,315.7258,35727.43);
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
   st->SetMaximum(32151.11);
   
   TH1F *st_stack_16 = new TH1F("st_stack_16","",1000,0,2000);
   st_stack_16->SetMinimum(0.01);
   st_stack_16->SetMaximum(32151.11);
   st_stack_16->SetDirectory(nullptr);
   st_stack_16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_16->SetLineColor(ci);
   st_stack_16->SetLineWidth(0);
   st_stack_16->GetXaxis()->SetRange(1,150);
   st_stack_16->GetXaxis()->SetLabelFont(42);
   st_stack_16->GetXaxis()->SetTitleOffset(1);
   st_stack_16->GetXaxis()->SetTitleFont(42);
   st_stack_16->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_16->GetYaxis()->SetLabelFont(42);
   st_stack_16->GetYaxis()->SetLabelSize(0.05);
   st_stack_16->GetYaxis()->SetTitleSize(0.057);
   st_stack_16->GetYaxis()->SetTitleOffset(1.2);
   st_stack_16->GetYaxis()->SetTitleFont(42);
   st_stack_16->GetZaxis()->SetLabelFont(42);
   st_stack_16->GetZaxis()->SetTitleOffset(1);
   st_stack_16->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_16);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(43,7088.238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(44,14237.03);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(45,13985.64);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(46,13891.32);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(47,13593.31);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,6639.03);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,5923.013);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(79,11473.89);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(80,11570.04);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(81,11516.09);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(82,11461.78);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(83,5756.762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,65.693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,37850.54);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(6,0.367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.6356626);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,1.76007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,4.882617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,8.684805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,13.18649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,17.58922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,22.01082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,26.42145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,31.21442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,35.7406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,39.69542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,43.68533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,47.66764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,51.01564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,54.13717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,56.70833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,59.1451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,61.47551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,63.44537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,65.01392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,66.65068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,67.50007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,68.26101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,69.38727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,69.8699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,70.54042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,71.69099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,71.89829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,72.42278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,72.48134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,72.54913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,72.70862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,72.51292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,72.28409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,71.64306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,71.40107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,70.63105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,69.74255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,69.83133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,69.15492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,69.08964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,68.37339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,67.71125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,68.0357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,67.97034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,67.49109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,67.83347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,67.528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,67.43619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,67.25819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,67.162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,66.98127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,66.8726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,66.78493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,66.73953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,66.90381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,66.85447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,66.78493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,66.73852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,66.35904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,66.19036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,65.96717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,66.01717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,66.1466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,66.02533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,65.97125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,65.52877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,65.68582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,64.89158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,65.16291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,65.01082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,64.85732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,64.58157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,64.60868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,64.03703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,64.01599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,64.03703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,63.98969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,63.7968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,63.6171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,63.23592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,63.26467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,63.38378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,62.84922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,62.57969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,62.28521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,62.23978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,62.09679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,61.74223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,61.73023);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,61.47551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,61.157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,60.90652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,60.72824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,60.59836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,60.34333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,60.2942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,59.83226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,59.71847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,59.25544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,59.22589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,58.98662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,58.91236);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,58.88721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,58.72688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,58.28487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,57.93371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,57.81852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,57.64471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,57.30256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,57.17902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,57.66456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,56.70714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,57.18962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,56.94771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,56.32105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,56.00329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,55.82624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,55.86844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,55.70427);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,55.46802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,55.45102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,54.95327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,54.82567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,54.97288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,54.75192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,54.34575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,54.53501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,53.98394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,54.07991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,53.99018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,54.11228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,53.82403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,53.70252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,53.34771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,53.32877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,53.0883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,52.90913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,52.67952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,52.80211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,52.64755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,52.3911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,51.99757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,51.864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,51.71315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,51.83152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,51.93796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,51.29211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,51.24219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,51.4468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,51.00244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,51.25796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,50.78675);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,50.646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,50.70447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,50.36198);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,50.51552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,50.74298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,50.13951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,49.90255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,49.88096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,50.03059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,49.82422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,49.44159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,49.44704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,49.2218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,49.45385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,49.01477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,49.0079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,49.02164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,48.53011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,48.45234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,48.44678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,48.68252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,48.31454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,48.18614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,47.82279);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,47.79744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,47.83546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,47.97042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,47.65916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,47.5304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,47.41975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,47.68035);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,47.43111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,47.19911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,46.9258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,46.8583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,46.54249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,46.90283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,46.62345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,46.62056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,46.41353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,46.08737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,46.13848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,45.93955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,45.86472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,45.78978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,45.4932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,45.70587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,45.42654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,45.63509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,45.29738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,45.49616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,45.29886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,45.04392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,45.08278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,44.78753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,45.19617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,44.75745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,45.01551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,44.94064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,44.37818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,44.17284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,44.18046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,44.0614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,43.97879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,43.9221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,43.68533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,43.56338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,43.6298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,43.88835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,43.79619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,43.68225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,43.33864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,43.21259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,43.13304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,43.2235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,42.61153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,42.94214);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,42.92645);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,42.71729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,42.79289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,42.38334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,42.1571);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,42.54193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,42.21617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,42.11395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,42.24487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,41.85409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,41.91359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,41.80741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,41.27894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,41.58776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,41.36531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,41.58128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,41.3702);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,41.12693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,40.9497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,40.86904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,41.34088);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,40.63106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,40.83277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,40.62277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,40.61282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,40.65757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,40.02656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,40.19446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,40.16429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,39.99121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,39.77847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,39.76492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,40.14752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,39.61901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,39.87823);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,39.57479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,39.39912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,39.44012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,39.25528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,39.42646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,39.25528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,38.77889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,39.16425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,38.84483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,38.77195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,38.44927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,38.7841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,38.47729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,38.82229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,38.6432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,38.11503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,38.31065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,38.18564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,37.78853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,38.00533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,37.58123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,37.87753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,37.69217);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,37.4268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,37.63495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,37.48793);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,37.30063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,37.14323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,37.37098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,36.9086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,37.01609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,36.97787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,36.81908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,37.0779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,36.65777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,36.34041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,36.24206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,36.33671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,36.39412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,36.62837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,35.84221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,35.99033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,36.00904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,35.7952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,35.93228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,35.53083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,35.35984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,35.41122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,35.50808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,35.20523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,35.07107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,35.23009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,35.18992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,35.25875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,34.96915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,34.82635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,34.78572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,35.10562);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,34.42765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,34.65382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,34.15664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,34.62466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,33.82179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,34.17044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,33.97477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,34.01835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,34.14678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,33.80785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,33.81781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,33.947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,33.77995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,33.68012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,33.42119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,33.7101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,33.09111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,33.25757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,33.23124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,33.34251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,32.66094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,32.69803);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,32.83368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,33.03);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,32.72274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,32.60935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,32.42295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,32.58869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,32.47276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,32.41879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,32.41048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,32.18739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,31.93322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,31.7577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,32.0658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,32.23965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,31.87411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,31.67489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,31.50434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,31.59612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,31.5684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,31.41657);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,31.292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,31.45727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,31.08471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,31.0717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,31.17772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,31.13666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,31.195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,30.79521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,30.83018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,30.88038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,30.64615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,30.51843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,30.41896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,30.47647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,30.13649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,30.27917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,30.25247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,30.14319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,30.14319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,29.79715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,29.822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,29.97965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,29.55888);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,29.4973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,29.24969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,29.2957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,29.38751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,29.46304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,29.33017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,28.95814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,28.97906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,29.24048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,29.05797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,28.76915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,28.62365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,28.68945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,28.99532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,28.98603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,28.57891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,28.67301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,28.44664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,28.26138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,28.39451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,28.30186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,28.20175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,28.20414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,28.10127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,27.72976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,27.73462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,27.71032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,27.74433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,27.54701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,27.62026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,27.55679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,26.99135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,27.40731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,27.40485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,26.88886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,27.13071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,27.21002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,27.13071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,26.85377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,27.15056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,26.85377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,26.67007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,26.40105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,26.78094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,26.54098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,26.58408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,26.67764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,26.27833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,26.61699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,26.4138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,26.31674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,26.19876);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,26.26551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,26.13442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,25.90926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,25.69262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,25.47414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,25.81291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,25.76068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,25.69262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,25.23242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,25.73453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,25.24843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,25.29107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,25.5032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,25.36286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,25.09593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,25.16293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,25.323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,24.929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,24.8722);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,25.12007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,24.83427);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,24.73918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,24.76094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,24.4957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,24.32465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,24.42963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,24.76638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,24.59174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,24.4902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,24.7555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,24.34956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,24.24701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,24.40481);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,24.29972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,23.99574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,24.1719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,23.65087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,24.18304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,23.58814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,24.00977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,23.58528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,23.87475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,24.11891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,23.62522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,23.4794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,23.121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,23.50233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,23.21692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,23.29511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,23.30956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,23.09769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,23.44208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,23.10643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,23.14138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,22.65315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,22.82197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,22.62935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,22.65612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,22.46807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,22.55184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,22.5608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,22.18454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,22.40504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,22.03529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,22.45308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,22.15416);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,22.25425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,21.93113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,21.78942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,21.7956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,22.22396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,22.13591);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,22.05362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,21.6281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,21.45303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,21.56262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,21.60006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,21.44361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,21.61253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,21.45616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,21.42475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,21.33972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,21.58447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,21.2258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,21.13678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,21.3618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,21.20993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,21.26384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,21.27018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,20.92866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,20.69568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,20.76066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,21.03458);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,20.63049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,21.13996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,20.70869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,20.69568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,21.08574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,20.63702);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,20.37098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,20.31139);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,20.7639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,20.27156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,20.44687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,19.92982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,19.8723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,20.18834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,19.75333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,20.32133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,20.12151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,20.13824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,20.19501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,19.83159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,19.92982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,19.82819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,19.76355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,19.60275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,19.60962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,19.55804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,19.85195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,19.49941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,19.6816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,19.62678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,19.86552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,19.35729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,19.10516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,19.24914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,19.25264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,19.12278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,19.21062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,19.07341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,18.92809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,19.11221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,18.85323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,19.15445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,19.23514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,18.88892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,19.00621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,18.82463);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,18.56889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,18.43056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,18.66656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,18.53986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,18.73858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,18.45247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,18.35);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,18.59789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,18.1804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,17.99423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,18.57252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,17.76447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,18.19151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,17.82124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,18.16557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,17.77963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,18.1396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,18.20631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,17.73791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,17.83257);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,17.80612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,17.61982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,17.90418);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,17.60453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,17.77584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,17.43153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,17.68849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,17.46241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,17.60453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,17.33468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,17.37736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,17.17074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,17.29189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,17.50478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,17.09212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,17.35797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,17.26071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,17.23338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,17.42381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,16.66519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,17.02105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,16.94968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,16.87402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,17.16289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,16.44144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,16.67327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,16.84606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,16.76993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,16.71362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,16.74984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,16.41274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,16.52723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,16.38399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,16.57199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,16.25193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,16.36343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,16.34284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,16.11042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,16.00137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,16.148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,16.33871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,16.35519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,16.19797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,16.06857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,16.08113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,15.56184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,15.87885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,15.86187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,15.7938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,15.93811);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,16.0434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,15.72114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,15.98874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,16.10206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,15.69113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,15.54885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,15.68684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,15.41837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,15.46634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,15.68684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,15.38339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,15.39214);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,15.37901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,15.42274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,15.50982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,15.41837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,15.09615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,15.65676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,14.78969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,15.08276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,14.83516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,14.94371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,14.88501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,15.07383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,14.91213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,14.75322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,14.99769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,14.83969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,14.62945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,14.95272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,14.97072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,14.84877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,14.37404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,14.81699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,14.61103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,14.49998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,14.62945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,14.81699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,14.52319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,14.43948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,14.29417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,14.12354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,14.54635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,14.20911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,14.32241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,14.15688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,14.09968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,14.3412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,14.04225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,13.83936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,14.20911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,14.49998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,13.78572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,14.19014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,14.29417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,14.10446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,14.06142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,13.76128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,14.22332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,14.03265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,13.82475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,13.62356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,13.579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,13.88308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,13.54424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,13.6285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,13.76128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,13.60872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,13.52434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,13.33377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,13.68275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,13.38418);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,13.56908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,12.99097);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,13.49443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,13.46945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,13.46445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,12.93903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,13.60872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,13.40932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,13.37412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,13.23746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,13.24255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,12.845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,13.06334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,13.05819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,12.845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,12.91298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,12.49957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,12.76084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,13.24763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,12.56406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,13.17627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,12.4672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,12.94423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,12.72384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,12.82926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,12.77666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,12.93382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,12.55869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,12.75028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,12.57477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,12.57477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,12.43475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,12.33688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,12.20516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,12.44558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,12.42391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,12.33688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,12.41307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,12.25472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,12.2712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,12.40764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,12.42933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,12.35324);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,12.32049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,11.96555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,12.14432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,11.72678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,12.33142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,12.5211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,12.11656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,11.99927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,12.14432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,12.12212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,12.0329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,11.67498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,11.34736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,11.89216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,11.8012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,11.65189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,11.62875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,11.44193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,11.57651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,11.49478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,11.28786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,11.85813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,11.36516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,11.54155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,11.62875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,11.41836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,11.49478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,11.46545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,11.64032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,11.39474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,11.47132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,11.43604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,11.19801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,11.51819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,11.51234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,11.11955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,11.15583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,11.22804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,11.04664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,11.16187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,10.76255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,10.96096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,11.14375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,11.01);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,10.60497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,11.07708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,11.23404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,10.8125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,10.82494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,10.82494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,11.05273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,10.6998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,10.70609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,10.89316);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,10.79379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,10.76881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,10.72494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,11.04664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,10.86221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,10.54766);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,10.54127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,10.57953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,10.57953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,10.6935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,10.6872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,10.47719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,10.6872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,10.54766);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,10.63034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,10.59226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,10.88698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,10.26944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,10.4321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,10.10417);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,10.24318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,10.15735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,10.31525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,9.847643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,9.990223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,10.52209);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,10.43855);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,10.26944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,9.996961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,10.07079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,9.936148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,10.04401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,10.37384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,10.03059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,10.0373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,9.702969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,9.861311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,10.03059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,10.0037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,9.584253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,9.62632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,9.881777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,9.765235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,9.772129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,9.612318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,9.85448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,9.640301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,9.730692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,9.48537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,9.306182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,9.612318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,9.53494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,9.675167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,9.963222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,9.682125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,9.277191);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,9.556105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,9.449805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,9.406948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,9.723769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,9.101304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,9.175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,9.406948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,9.226237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,9.702969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,9.079079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,9.152954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,9.392619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,9.492468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,9.449805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,8.846147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,8.944566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,9.175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,9.145593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,9.298943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,9.378268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,9.152954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,9.034464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,9.255388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,9.056799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,9.056799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,8.83853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,8.929495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,8.738917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,9.175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,8.997116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,9.071658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,8.937034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,8.959612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,9.138226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,8.800351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,8.937034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,8.746619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,8.669283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,8.944566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,8.599085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,8.472853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,8.536202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,9.027006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,8.72349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,8.974632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,8.669283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,8.599085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,8.392994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,8.715767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,8.599085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,8.583407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,8.800351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,8.638154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,8.536202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,8.417031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,8.344712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,8.777363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,8.148722);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,8.320465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,8.425028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,8.456941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,8.677047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,8.392994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,8.456941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,8.328555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,8.496664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,8.279897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,8.032187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,8.165235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,8.173478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,7.99858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,8.206369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,8.132177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,8.032187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,8.214572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,8.115597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,8.057301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,8.132177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,7.896899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,8.023798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,7.990156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,8.098984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,8.032187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,7.776591);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,7.811153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,7.759251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,7.973281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,7.896899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,7.930937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,7.548076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,7.930937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,7.715733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,7.619118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,7.862713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,7.210406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,7.715733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,8.048938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,7.610274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,7.610274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,7.645589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,7.836975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,7.81977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,7.627952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,7.413037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,7.431184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,7.939424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,7.654392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,7.627952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,7.836975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,7.574795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,7.34);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,7.619118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,7.068919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,7.539148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,7.458321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,7.321627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,117.8607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(8220365);

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
   
   TH1D *VH_tagOnly_H_mass__31 = new TH1D("VH_tagOnly_H_mass__31","",1000,0,2000);
   VH_tagOnly_H_mass__31->SetBinContent(43,7282);
   VH_tagOnly_H_mass__31->SetBinContent(44,14468);
   VH_tagOnly_H_mass__31->SetBinContent(45,14210);
   VH_tagOnly_H_mass__31->SetBinContent(46,14019);
   VH_tagOnly_H_mass__31->SetBinContent(47,13816);
   VH_tagOnly_H_mass__31->SetBinContent(48,6661);
   VH_tagOnly_H_mass__31->SetBinContent(78,5832);
   VH_tagOnly_H_mass__31->SetBinContent(79,11211);
   VH_tagOnly_H_mass__31->SetBinContent(80,11350);
   VH_tagOnly_H_mass__31->SetBinContent(81,11192);
   VH_tagOnly_H_mass__31->SetBinContent(82,11248);
   VH_tagOnly_H_mass__31->SetBinContent(83,5635);
   VH_tagOnly_H_mass__31->SetBinContent(1000,78);
   VH_tagOnly_H_mass__31->SetBinContent(1001,40391);
   VH_tagOnly_H_mass__31->SetEntries(2925871);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__31->SetLineColor(ci);
   VH_tagOnly_H_mass__31->SetLineWidth(2);
   VH_tagOnly_H_mass__31->SetMarkerStyle(20);
   VH_tagOnly_H_mass__31->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__31->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__31->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__31->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__31->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__31->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__31->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__31->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__31->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__31->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__31->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1031[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1031[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7088.238, 14237.03, 13985.64, 13891.32, 13593.31, 6639.03, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5923.013, 11473.89, 11570.04, 11516.09,
   11461.78, 5756.762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 65.693 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1031[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1031[1000] = { 0, 0, 0, 0, 0, 0.367, 0, 0, 0, 0, 0.6356626, 1.76007, 4.882617, 8.684805, 13.18649, 17.58922, 22.01082,
   26.42145, 31.21442, 35.7406, 39.69542, 43.68533, 47.66764, 51.01564, 54.13717, 56.70833, 59.1451, 61.47551, 63.44537, 65.01392, 66.65068, 67.50007, 68.26101,
   69.38727, 69.8699, 70.54042, 71.69099, 71.89829, 72.42278, 72.48134, 72.54913, 72.70862, 72.51292, 72.28409, 71.64306, 71.40107, 70.63105, 69.74255, 69.83133,
   69.15492, 69.08964, 68.37339, 67.71125, 68.0357, 67.97034, 67.49109, 67.83347, 67.528, 67.43619, 67.25819, 67.162, 66.98127, 66.8726, 66.78493, 66.73953,
   66.90381, 66.85447, 66.78493, 66.73852, 66.35904, 66.19036, 65.96717, 66.01717, 66.1466, 66.02533, 65.97125, 65.52877, 65.68582, 64.89158, 65.16291, 65.01082,
   64.85732, 64.58157, 64.60868, 64.03703, 64.01599, 64.03703, 63.98969, 63.7968, 63.6171, 63.23592, 63.26467, 63.38378, 62.84922, 62.57969, 62.28521, 62.23978,
   62.09679, 61.74223, 61.73023, 61.47551, 61.157, 60.90652, 60.72824, 60.59836, 60.34333, 60.2942, 59.83226, 59.71847, 59.25544, 59.22589, 58.98662, 58.91236,
   58.88721, 58.72688, 58.28487, 57.93371, 57.81852, 57.64471, 57.30256, 57.17902, 57.66456, 56.70714, 57.18962, 56.94771, 56.32105, 56.00329, 55.82624, 55.86844,
   55.70427, 55.46802, 55.45102, 54.95327, 54.82567, 54.97288, 54.75192, 54.34575, 54.53501, 53.98394, 54.07991, 53.99018, 54.11228, 53.82403, 53.70252, 53.34771,
   53.32877, 53.0883, 52.90913, 52.67952, 52.80211, 52.64755, 52.3911, 51.99757, 51.864, 51.71315, 51.83152, 51.93796, 51.29211, 51.24219, 51.4468, 51.00244,
   51.25796, 50.78675, 50.646, 50.70447, 50.36198, 50.51552, 50.74298, 50.13951, 49.90255, 49.88096, 50.03059, 49.82422, 49.44159, 49.44704, 49.2218, 49.45385,
   49.01477, 49.0079, 49.02164, 48.53011, 48.45234, 48.44678, 48.68252, 48.31454, 48.18614, 47.82279, 47.79744, 47.83546, 47.97042, 47.65916, 47.5304, 47.41975,
   47.68035, 47.43111, 47.19911, 46.9258, 46.8583, 46.54249, 46.90283, 46.62345, 46.62056, 46.41353, 46.08737, 46.13848, 45.93955, 45.86472, 45.78978, 45.4932,
   45.70587, 45.42654, 45.63509, 45.29738, 45.49616, 45.29886, 45.04392, 45.08278, 44.78753, 45.19617, 44.75745, 45.01551, 44.94064, 44.37818, 44.17284, 44.18046,
   44.0614, 43.97879, 43.9221, 43.68533, 43.56338, 43.6298, 43.88835, 43.79619, 43.68225, 43.33864, 43.21259, 43.13304, 43.2235, 42.61153, 42.94214, 42.92645,
   42.71729, 42.79289, 42.38334, 42.1571, 42.54193, 42.21617, 42.11395, 42.24487, 41.85409, 41.91359, 41.80741, 41.27894, 41.58776, 41.36531, 41.58128, 41.3702,
   41.12693, 40.9497, 40.86904, 41.34088, 40.63106, 40.83277, 40.62277, 40.61282, 40.65757, 40.02656, 40.19446, 40.16429, 39.99121, 39.77847, 39.76492, 40.14752,
   39.61901, 39.87823, 39.57479, 39.39912, 39.44012, 39.25528, 39.42646, 39.25528, 38.77889, 39.16425, 38.84483, 38.77195, 38.44927, 38.7841, 38.47729, 38.82229,
   38.6432, 38.11503, 38.31065, 38.18564, 37.78853, 38.00533, 37.58123, 37.87753, 37.69217, 37.4268, 37.63495, 37.48793, 37.30063, 37.14323, 37.37098, 36.9086,
   37.01609, 36.97787, 36.81908, 37.0779, 36.65777, 36.34041, 36.24206, 36.33671, 36.39412, 36.62837, 35.84221, 35.99033, 36.00904, 35.7952, 35.93228, 35.53083,
   35.35984, 35.41122, 35.50808, 35.20523, 35.07107, 35.23009, 35.18992, 35.25875, 34.96915, 34.82635, 34.78572, 35.10562, 34.42765, 34.65382, 34.15664, 34.62466,
   33.82179, 34.17044, 33.97477, 34.01835, 34.14678, 33.80785, 33.81781, 33.947, 33.77995, 33.68012, 33.42119, 33.7101, 33.09111, 33.25757, 33.23124, 33.34251,
   32.66094, 32.69803, 32.83368, 33.03, 32.72274, 32.60935, 32.42295, 32.58869, 32.47276, 32.41879, 32.41048, 32.18739, 31.93322, 31.7577, 32.0658, 32.23965,
   31.87411, 31.67489, 31.50434, 31.59612, 31.5684, 31.41657, 31.292, 31.45727, 31.08471, 31.0717, 31.17772, 31.13666, 31.195, 30.79521, 30.83018, 30.88038,
   30.64615, 30.51843, 30.41896, 30.47647, 30.13649, 30.27917, 30.25247, 30.14319, 30.14319, 29.79715, 29.822, 29.97965, 29.55888, 29.4973, 29.24969, 29.2957,
   29.38751, 29.46304, 29.33017, 28.95814, 28.97906, 29.24048, 29.05797, 28.76915, 28.62365, 28.68945, 28.99532, 28.98603, 28.57891, 28.67301, 28.44664, 28.26138,
   28.39451, 28.30186, 28.20175, 28.20414, 28.10127, 27.72976, 27.73462, 27.71032, 27.74433, 27.54701, 27.62026, 27.55679, 26.99135, 27.40731, 27.40485, 26.88886,
   27.13071, 27.21002, 27.13071, 26.85377, 27.15056, 26.85377, 26.67007, 26.40105, 26.78094, 26.54098, 26.58408, 26.67764, 26.27833, 26.61699, 26.4138, 26.31674,
   26.19876, 26.26551, 26.13442, 25.90926, 25.69262, 25.47414, 25.81291, 25.76068, 25.69262, 25.23242, 25.73453, 25.24843, 25.29107, 25.5032, 25.36286, 25.09593,
   25.16293, 25.323, 24.929, 24.8722, 25.12007, 24.83427, 24.73918, 24.76094, 24.4957, 24.32465, 24.42963, 24.76638, 24.59174, 24.4902, 24.7555, 24.34956,
   24.24701, 24.40481, 24.29972, 23.99574, 24.1719, 23.65087, 24.18304, 23.58814, 24.00977, 23.58528, 23.87475, 24.11891, 23.62522, 23.4794, 23.121, 23.50233,
   23.21692, 23.29511, 23.30956, 23.09769, 23.44208, 23.10643, 23.14138, 22.65315, 22.82197, 22.62935, 22.65612, 22.46807, 22.55184, 22.5608, 22.18454, 22.40504,
   22.03529, 22.45308, 22.15416, 22.25425, 21.93113, 21.78942, 21.7956, 22.22396, 22.13591, 22.05362, 21.6281, 21.45303, 21.56262, 21.60006, 21.44361, 21.61253,
   21.45616, 21.42475, 21.33972, 21.58447, 21.2258, 21.13678, 21.3618, 21.20993, 21.26384, 21.27018, 20.92866, 20.69568, 20.76066, 21.03458, 20.63049, 21.13996,
   20.70869, 20.69568, 21.08574, 20.63702, 20.37098, 20.31139, 20.7639, 20.27156, 20.44687, 19.92982, 19.8723, 20.18834, 19.75333, 20.32133, 20.12151, 20.13824,
   20.19501, 19.83159, 19.92982, 19.82819, 19.76355, 19.60275, 19.60962, 19.55804, 19.85195, 19.49941, 19.6816, 19.62678, 19.86552, 19.35729, 19.10516, 19.24914,
   19.25264, 19.12278, 19.21062, 19.07341, 18.92809, 19.11221, 18.85323, 19.15445, 19.23514, 18.88892, 19.00621, 18.82463, 18.56889, 18.43056, 18.66656, 18.53986,
   18.73858, 18.45247, 18.35, 18.59789, 18.1804, 17.99423, 18.57252, 17.76447, 18.19151, 17.82124, 18.16557, 17.77963, 18.1396, 18.20631, 17.73791, 17.83257,
   17.80612, 17.61982, 17.90418, 17.60453, 17.77584, 17.43153, 17.68849, 17.46241, 17.60453, 17.33468, 17.37736, 17.17074, 17.29189, 17.50478, 17.09212, 17.35797,
   17.26071, 17.23338, 17.42381, 16.66519, 17.02105, 16.94968, 16.87402, 17.16289, 16.44144, 16.67327, 16.84606, 16.76993, 16.71362, 16.74984, 16.41274, 16.52723,
   16.38399, 16.57199, 16.25193, 16.36343, 16.34284, 16.11042, 16.00137, 16.148, 16.33871, 16.35519, 16.19797, 16.06857, 16.08113, 15.56184, 15.87885, 15.86187,
   15.7938, 15.93811, 16.0434, 15.72114, 15.98874, 16.10206, 15.69113, 15.54885, 15.68684, 15.41837, 15.46634, 15.68684, 15.38339, 15.39214, 15.37901, 15.42274,
   15.50982, 15.41837, 15.09615, 15.65676, 14.78969, 15.08276, 14.83516, 14.94371, 14.88501, 15.07383, 14.91213, 14.75322, 14.99769, 14.83969, 14.62945, 14.95272,
   14.97072, 14.84877, 14.37404, 14.81699, 14.61103, 14.49998, 14.62945, 14.81699, 14.52319, 14.43948, 14.29417, 14.12354, 14.54635, 14.20911, 14.32241, 14.15688,
   14.09968, 14.3412, 14.04225, 13.83936, 14.20911, 14.49998, 13.78572, 14.19014, 14.29417, 14.10446, 14.06142, 13.76128, 14.22332, 14.03265, 13.82475, 13.62356,
   13.579, 13.88308, 13.54424, 13.6285, 13.76128, 13.60872, 13.52434, 13.33377, 13.68275, 13.38418, 13.56908, 12.99097, 13.49443, 13.46945, 13.46445, 12.93903,
   13.60872, 13.40932, 13.37412, 13.23746, 13.24255, 12.845, 13.06334, 13.05819, 12.845, 12.91298, 12.49957, 12.76084, 13.24763, 12.56406, 13.17627, 12.4672,
   12.94423, 12.72384, 12.82926, 12.77666, 12.93382, 12.55869, 12.75028, 12.57477, 12.57477, 12.43475, 12.33688, 12.20516, 12.44558, 12.42391, 12.33688, 12.41307,
   12.25472, 12.2712, 12.40764, 12.42933, 12.35324, 12.32049, 11.96555, 12.14432, 11.72678, 12.33142, 12.5211, 12.11656, 11.99927, 12.14432, 12.12212, 12.0329,
   11.67498, 11.34736, 11.89216, 11.8012, 11.65189, 11.62875, 11.44193, 11.57651, 11.49478, 11.28786, 11.85813, 11.36516, 11.54155, 11.62875, 11.41836, 11.49478,
   11.46545, 11.64032, 11.39474, 11.47132, 11.43604, 11.19801, 11.51819, 11.51234, 11.11955, 11.15583, 11.22804, 11.04664, 11.16187, 10.76255, 10.96096, 11.14375,
   11.01, 10.60497, 11.07708, 11.23404, 10.8125, 10.82494, 10.82494, 11.05273, 10.6998, 10.70609, 10.89316, 10.79379, 10.76881, 10.72494, 11.04664, 10.86221,
   10.54766, 10.54127, 10.57953, 10.57953, 10.6935, 10.6872, 10.47719, 10.6872, 10.54766, 10.63034, 10.59226, 10.88698, 10.26944, 10.4321, 10.10417, 10.24318,
   10.15735, 10.31525, 9.847643, 9.990223, 10.52209, 10.43855, 10.26944, 9.996961, 10.07079, 9.936148, 10.04401, 10.37384, 10.03059, 10.0373, 9.702969, 9.861311,
   10.03059, 10.0037, 9.584253, 9.62632, 9.881777, 9.765235, 9.772129, 9.612318, 9.85448, 9.640301, 9.730692, 9.48537, 9.306182, 9.612318, 9.53494, 9.675167,
   9.963222, 9.682125, 9.277191, 9.556105, 9.449805, 9.406948, 9.723769, 9.101304, 9.175, 9.406948, 9.226237, 9.702969, 9.079079, 9.152954, 9.392619, 9.492468,
   9.449805, 8.846147, 8.944566, 9.175, 9.145593, 9.298943, 9.378268, 9.152954, 9.034464, 9.255388, 9.056799, 9.056799, 8.83853, 8.929495, 8.738917, 9.175,
   8.997116, 9.071658, 8.937034, 8.959612, 9.138226, 8.800351, 8.937034, 8.746619, 8.669283, 8.944566, 8.599085, 8.472853, 8.536202, 9.027006, 8.72349, 8.974632,
   8.669283, 8.599085, 8.392994, 8.715767, 8.599085, 8.583407, 8.800351, 8.638154, 8.536202, 8.417031, 8.344712, 8.777363, 8.148722, 8.320465, 8.425028, 8.456941,
   8.677047, 8.392994, 8.456941, 8.328555, 8.496664, 8.279897, 8.032187, 8.165235, 8.173478, 7.99858, 8.206369, 8.132177, 8.032187, 8.214572, 8.115597, 8.057301,
   8.132177, 7.896899, 8.023798, 7.990156, 8.098984, 8.032187, 7.776591, 7.811153, 7.759251, 7.973281, 7.896899, 7.930937, 7.548076, 7.930937, 7.715733, 7.619118,
   7.862713, 7.210406, 7.715733, 8.048938, 7.610274, 7.610274, 7.645589, 7.836975, 7.81977, 7.627952, 7.413037, 7.431184, 7.939424, 7.654392, 7.627952, 7.836975,
   7.574795, 7.34, 7.619118, 7.068919, 7.539148, 7.458321, 7.321627 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1031,Graph_from_VH_tagOnly_2b1c_H_mass_fy1031,Graph_from_VH_tagOnly_2b1c_H_mass_fex1031,Graph_from_VH_tagOnly_2b1c_H_mass_fey1031);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->SetMinimum(-1510.911);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->SetMaximum(15747.52);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1031);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagOnly_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__32 = new TH1D("data_mc_ratio__32","",1000,0,2000);
   data_mc_ratio__32->SetBinContent(43,1.027336);
   data_mc_ratio__32->SetBinContent(44,1.016223);
   data_mc_ratio__32->SetBinContent(45,1.016042);
   data_mc_ratio__32->SetBinContent(46,1.009192);
   data_mc_ratio__32->SetBinContent(47,1.016382);
   data_mc_ratio__32->SetBinContent(48,1.003309);
   data_mc_ratio__32->SetBinContent(78,0.984634);
   data_mc_ratio__32->SetBinContent(79,0.9770882);
   data_mc_ratio__32->SetBinContent(80,0.9809817);
   data_mc_ratio__32->SetBinContent(81,0.9718574);
   data_mc_ratio__32->SetBinContent(82,0.9813487);
   data_mc_ratio__32->SetBinContent(83,0.9788489);
   data_mc_ratio__32->SetBinContent(1000,1.187341);
   data_mc_ratio__32->SetBinContent(1001,1.067118);
   data_mc_ratio__32->SetBinError(43,0.01203891);
   data_mc_ratio__32->SetBinError(44,0.008448601);
   data_mc_ratio__32->SetBinError(45,0.008523438);
   data_mc_ratio__32->SetBinError(46,0.008523444);
   data_mc_ratio__32->SetBinError(47,0.008647008);
   data_mc_ratio__32->SetBinError(48,0.0122932);
   data_mc_ratio__32->SetBinError(78,0.01289336);
   data_mc_ratio__32->SetBinError(79,0.009228085);
   data_mc_ratio__32->SetBinError(80,0.009207951);
   data_mc_ratio__32->SetBinError(81,0.009186471);
   data_mc_ratio__32->SetBinError(82,0.009253067);
   data_mc_ratio__32->SetBinError(83,0.01303973);
   data_mc_ratio__32->SetBinError(1000,0.1344399);
   data_mc_ratio__32->SetBinError(1001,0.006263721);
   data_mc_ratio__32->SetMinimum(0.4);
   data_mc_ratio__32->SetMaximum(1.6);
   data_mc_ratio__32->SetEntries(4606.594);
   data_mc_ratio__32->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__32->SetLineColor(ci);
   data_mc_ratio__32->SetLineWidth(2);
   data_mc_ratio__32->SetMarkerStyle(20);
   data_mc_ratio__32->SetMarkerSize(1.2);
   data_mc_ratio__32->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__32->GetXaxis()->SetRange(1,150);
   data_mc_ratio__32->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__32->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__32->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__32->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__32->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__32->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__32->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__32->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__32->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__32->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1032[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1032[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1032[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1032[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01023003, 0.005077189, 0.005122617, 0.005139979, 0.005196015, 0.01050493, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01108993, 0.005655588, 0.005632038, 0.005645215,
   0.005658575, 0.01121839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1114522 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1032,Graph_from_mc_statistical_error_fy1032,Graph_from_mc_statistical_error_fex1032,Graph_from_mc_statistical_error_fey1032);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1032 = new TH1F("Graph_Graph_from_mc_statistical_error1032","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1032->SetMinimum(0.8662574);
   Graph_Graph_from_mc_statistical_error1032->SetMaximum(1.133743);
   Graph_Graph_from_mc_statistical_error1032->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1032->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1032->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1032);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagOnly_VR_18->cd();
   H_mass_tagOnly_VR_18->Modified();
   H_mass_tagOnly_VR_18->cd();
   H_mass_tagOnly_VR_18->SetSelected(H_mass_tagOnly_VR_18);
}
