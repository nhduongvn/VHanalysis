#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_VR_16()
{
//=========Macro generated from canvas: H_mass_tagOnly_VR_16/H_mass_tagOnly_VR_16
//=========  (Mon Apr  8 13:43:36 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagOnly_VR_16 = new TCanvas("H_mass_tagOnly_VR_16", "H_mass_tagOnly_VR_16",0,0,600,600);
   H_mass_tagOnly_VR_16->SetHighLightColor(2);
   H_mass_tagOnly_VR_16->Range(0,0,1,1);
   H_mass_tagOnly_VR_16->SetFillColor(0);
   H_mass_tagOnly_VR_16->SetFillStyle(4000);
   H_mass_tagOnly_VR_16->SetBorderMode(0);
   H_mass_tagOnly_VR_16->SetBorderSize(2);
   H_mass_tagOnly_VR_16->SetFrameFillStyle(1000);
   H_mass_tagOnly_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-44.42949,315.7258,44395.06);
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
   st->SetMaximum(39951.11);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",1000,0,2000);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(39951.11);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetRange(1,150);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(43,6504.532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(44,13154.73);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(45,13205.49);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(46,13143.79);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(47,13125.99);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,6591.828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,6455.538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(79,12819.62);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(80,12724.86);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(81,12791.26);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(82,12566.56);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(83,6252.251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,46.91109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,25542.43);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.4044651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.703168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,2.870468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,6.889376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,11.97049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,17.16137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,22.70654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,28.38602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,34.06947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,39.26964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,44.51435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,49.14786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,53.1998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,56.99602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,60.13283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,62.25034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,64.20679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,65.54744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,67.06076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,67.65504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,68.17104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,68.83325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,69.07419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,68.84432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,69.36891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,69.19583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,69.89993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,69.83165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,70.1346);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,70.23325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,70.13962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,69.94549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,69.83212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,69.80844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,69.5643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,69.14699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,68.76681);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,68.19797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,67.84802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,67.68862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,67.58286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,67.43248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,67.12015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,66.98229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,67.13949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,66.8181);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,67.01291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,66.92761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,66.75472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,66.84644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,66.87985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,66.26875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,66.80998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,66.87403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,66.54123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,66.32634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,66.12379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,66.07817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,65.78083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,65.86925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,65.88901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,65.61737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,65.33662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,65.28745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,65.17919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,64.63433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,64.47877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,64.32841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,64.12511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,63.91698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,63.73541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,63.8368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,63.27676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,63.06512);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,62.55912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,62.39004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,62.30777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,61.89664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,61.98972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,61.48161);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,61.36825);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,60.88596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,60.55688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,60.59652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,60.07361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,59.87123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,59.58924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,59.28753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,59.2994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,58.96362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,58.82052);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,58.37106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,58.38554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,57.80524);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,57.69121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,57.23636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,57.45493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,57.14222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,56.73133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,56.38433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,56.20046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,55.82843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,55.72636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,55.91431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,55.51406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,55.43284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,55.02154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,55.01345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,54.60357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,54.52828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,54.32217);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,54.19507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,53.94489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,54.07973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,53.68028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,53.11142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,53.10935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,53.0912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,53.02832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,52.76382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,52.62673);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,52.19712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,52.19902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,52.19303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,51.96041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,51.7158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,51.55174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,51.50459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,51.25227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,51.0676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,50.96767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,50.69899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,50.38791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,50.5215);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,50.20583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,50.06447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,50.01029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,49.67537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,49.50431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,49.63372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,49.43845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,49.49849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,49.14779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,48.84228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,49.02759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,48.82779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,48.26531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,48.40572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,47.91194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,47.92507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,47.95599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,47.67988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,47.6446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,47.21047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,47.26183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,47.21484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,46.7923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,47.12697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,46.63544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,46.72436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,46.25503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,46.42845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,46.0667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,46.01484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,46.09318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,45.64059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,45.55419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,45.36564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,45.4555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,45.25846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,45.50872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,44.87908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,45.08629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,44.80508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,44.77546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,44.45337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,44.38102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,44.32118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,44.17771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,43.9944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,43.53248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,43.83187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,43.64718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,43.62815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,43.42056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,43.13091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,42.98742);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,43.08355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,43.1832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,42.91238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,42.60753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,42.61897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,42.50647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,42.2316);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,42.35706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,41.69609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,41.8514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,41.94525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,41.74521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,41.72972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,41.63447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,41.47891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,41.14671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,41.13308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,41.01965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,40.71887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,40.7567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,40.93814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,40.7575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,40.06209);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,40.28129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,40.14833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,39.91351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,39.7186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,39.68234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,39.4197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,39.57403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,39.60634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,39.43899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,39.0794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,39.11904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,39.27042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,38.87363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,38.96847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,38.67312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,38.85055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,38.34411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,38.56463);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,38.1428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,37.99219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,37.93453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,37.83882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,37.59304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,37.71629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,37.60264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,37.7509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,37.48931);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,37.33386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,37.42504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,37.18233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,37.21717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,36.86016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,36.9996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,36.57535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,36.68814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,36.53189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,36.3239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,36.32435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,36.25692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,36.09576);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,36.01691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,36.179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,35.9699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,35.49002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,35.40866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,35.35494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,35.45433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,35.43906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,35.21874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,34.95461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,35.02189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,34.85955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,34.57845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,34.43729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,34.65514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,34.57534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,34.46178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,34.45082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,34.04826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,34.10872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,33.80375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,33.9789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,33.97737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,33.69918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,33.56847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,33.62127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,33.39076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,33.2888);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,33.30112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,33.27979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,33.03585);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,32.8282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,32.97941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,32.77744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,32.65399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,32.40128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,32.71642);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,32.29194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,32.49263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,32.1838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,32.26985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,32.27834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,31.83097);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,31.69487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,31.60644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,31.75037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,31.61346);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,31.49572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,31.52542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,31.4965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,31.43369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,31.22614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,31.01622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,31.25657);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,30.92928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,30.894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,30.64306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,30.62594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,30.33367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,30.75203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,30.41355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,30.51026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,30.56853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,30.15683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,30.29353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,30.04617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,29.87098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,29.91268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,29.67234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,29.65024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,29.5776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,29.53753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,29.52736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,29.46944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,29.16722);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,29.38713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,29.2546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,29.17284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,29.12413);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,29.04435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,28.73523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,28.71533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,28.70639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,28.7255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,28.66133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,28.27153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,28.51952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,28.319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,28.36817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,28.1206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,28.14389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,28.01933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,27.92178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,27.82228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,27.91559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,27.80052);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,27.47775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,27.55201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,27.49279);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,27.69411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,27.16738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,27.49774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,27.28135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,27.05515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,26.99578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,26.91038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,27.01634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,26.85433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,26.62111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,26.81505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,26.53632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,26.45234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,26.20028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,26.51756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,26.07208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,26.171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,26.22315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,26.11619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,26.15903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,25.95205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,25.8342);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,25.93798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,25.76847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,25.63438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,25.74599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,25.6399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,25.53029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,25.40511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,25.44839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,25.25652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,25.03362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,24.97696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,25.11176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,25.02371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,24.85772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,24.85396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,24.80564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,24.90145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,24.81176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,24.65143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,24.56449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,24.49876);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,24.45428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,24.44464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,24.3587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,24.13765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,24.40672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,23.96503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,24.16763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,24.14679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,23.94374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,23.79063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,23.76307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,23.7488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,23.75325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,23.46677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,23.45765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,23.75018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,23.42207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,23.43487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,23.18775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,23.17601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,23.28268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,22.80055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,23.23213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,22.76437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,22.99116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,22.87073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,22.94227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,23.03691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,22.67992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,22.6798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,22.37664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,22.68204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,22.51225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,22.33943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,22.50227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,22.3036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,22.24041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,22.05282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,22.02569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,22.18771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,21.96337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,21.99725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,21.83377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,21.80629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,21.64608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,21.75344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,21.92167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,21.81527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,21.40319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,21.27993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,21.66759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,21.52916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,21.39983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,21.3842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,21.00772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,21.20135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,21.00225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,20.9695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,20.87793);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,20.89378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,21.02773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,20.76354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,20.84569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,20.69727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,20.71831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,20.59403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,20.47541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,20.61267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,20.5909);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,20.4975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,20.57685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,20.25426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,20.15798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,20.35862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,19.96792);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,20.17165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,20.09738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,19.88255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,19.89681);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,19.85101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,19.55608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,19.67736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,19.83171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,19.57006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,19.68091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,19.39582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,19.66226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,19.35529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,19.29015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,19.42545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,19.06276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,19.02885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,18.97196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,19.01703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,19.13943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,18.70066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,19.05115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,18.84522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,18.99478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,18.83741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,18.91122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,18.94422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,18.58295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,18.81898);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,18.63282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,18.7365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,18.32303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,18.25779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,18.52144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,18.10464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,18.17086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,18.38509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,18.25902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,18.24971);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,18.37255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,17.94409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,18.01446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,17.88032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,17.86134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,17.89529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,17.8952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,17.82542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,17.79994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,17.56173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,17.56484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,17.51447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,17.43475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,17.81833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,17.56446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,17.4084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,17.40647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,17.19632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,17.21447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,17.34335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,17.34386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,17.37752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,17.30852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,17.1336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,17.04401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,17.26125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,17.07009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,16.74693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,17.02206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,16.99831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,16.96283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,16.60551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,16.99559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,16.88086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,16.39489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,16.49654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,16.60464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,16.46765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,16.44872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,16.25797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,16.48752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,16.33133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,16.30821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,16.19173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,15.97274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,16.32311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,16.09654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,15.91482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,15.94655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,15.81146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,15.89029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,15.68032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,16.1333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,16.04962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,15.84991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,15.91885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,15.77301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,15.7238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,15.92068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,15.37016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,15.55079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,15.47565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,15.30184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,15.485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,15.38167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,15.30828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,15.17219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,15.18827);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,15.29357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,15.37904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,14.94558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,15.06362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,15.15488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,15.02335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,14.97168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,15.026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,14.89929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,14.83392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,14.97386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,14.68105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,14.72177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,14.72402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,14.72979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,14.80146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,14.8176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,14.44786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,14.69039);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,14.63267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,14.61122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,14.39902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,14.2821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,14.23164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,14.52383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,14.10758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,14.37461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,14.14167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,14.01027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,14.0808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,14.05645);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,13.88251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,14.13428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,14.01788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,13.944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,13.93942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,14.11508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,13.60954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,13.85077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,13.59411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,13.71145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,13.93001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,13.85775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,13.68701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,13.75018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,13.49522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,13.37382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,13.16876);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,13.18581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,13.42864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,13.40773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,13.50982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,13.3732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,13.33591);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,13.35897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,13.10982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,13.36003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,13.18275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,13.19836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,12.94135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,12.83448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,12.84486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,12.7794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,13.18394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,12.79962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,13.06029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,13.01686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,12.91147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,12.87616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,12.82535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,12.92034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,12.45324);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,12.56108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,12.62041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,12.46651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,12.59096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,12.40155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,12.86672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,12.61444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,12.38961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,12.34221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,12.28164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,12.20834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,12.35156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,12.46375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,12.2701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,12.26872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,11.98016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,12.11607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,12.08386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,12.05203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,12.00298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,12.19509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,12.19964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,11.86838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,11.64102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,11.86256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,11.75375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,11.85772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,11.77602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,11.65423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,11.51034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,11.57079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,11.63074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,11.76131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,11.7521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,11.7349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,11.96743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,11.64665);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,11.45644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,11.2493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,11.30738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,11.48719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,11.47017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,11.39691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,11.50013);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,11.42527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,11.26377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,11.451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,11.41434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,11.31459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,11.00797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,11.21612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,11.11485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,11.25528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,11.01534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,10.9363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,11.11126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,11.13796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,11.03328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,11.07958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,11.0517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,11.02607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,10.88096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,11.31105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,10.63697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,11.18498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,10.73743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,10.92688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,10.8206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,10.64724);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,10.6891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,10.49932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,10.57282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,10.54878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,10.66476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,10.44444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,10.4111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,10.43203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,10.76737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,10.26394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,10.72934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,10.41428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,10.4118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,10.45048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,10.25461);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,10.47132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,10.1391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,10.45247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,10.27597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,10.30146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,10.11313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,10.14436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,10.11886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,10.23892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,9.979369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,10.28627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,10.06193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,10.06712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,10.09704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,10.08066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,10.12544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,9.941544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,9.725873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,9.899882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,10.00523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,9.825378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,9.651474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,9.542429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,9.506588);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,9.96108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,9.888879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,9.641418);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,9.45956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,9.374071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,9.362054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,9.563428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,9.739064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,9.209534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,9.455882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,9.420841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,9.323101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,9.528511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,9.519211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,9.247152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,9.204666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,9.315618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,9.393669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,9.496147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,9.520511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,9.268526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,9.392552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,9.550789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,9.283928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,9.238813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,9.444428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,9.019914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,9.126811);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,9.030703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,9.162109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,9.068237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,8.95329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,9.315482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,9.03071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,8.974748);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,8.952249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,8.891096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,8.710969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,9.029053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,8.686468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,8.936156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,8.968169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,8.808337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,8.648938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,8.972367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,8.902426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,8.837175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,8.684853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,8.841872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,8.586441);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,8.698095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,8.551276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,8.734597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,8.623171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,8.615281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,8.628227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,8.437969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,8.366361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,8.445748);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,8.591361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,8.359583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,8.420438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,8.413237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,8.100472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,8.034877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,8.369388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,8.281144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,8.47573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,8.153439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,8.339814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,8.026302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,8.153211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,8.088322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,8.294557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,8.1784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,8.016833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,8.160455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,7.834483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,8.217533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,8.212338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,8.057258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,8.014004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,8.133653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,7.758581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,8.007534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,8.20259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,7.738213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,8.249191);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,7.869526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,8.213851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,7.607891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,7.74393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,7.68786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,7.821728);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,7.84985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,7.73102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,7.738202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,7.565384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,7.590744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,7.652744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,7.851395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,7.680382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,7.988765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,7.569877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,7.610708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,7.733264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,7.308603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,7.589306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,7.382477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,7.510126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,7.466499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,7.371959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,7.590302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,7.692345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,7.403183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,7.603024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,7.479043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,7.357724);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,7.502976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,7.411357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,7.292327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,7.152329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,7.10607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,7.407721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,7.241642);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,7.156513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,7.432648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,7.125812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,7.479401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,7.238996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,7.165137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,7.020428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,7.484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,6.860548);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,7.105986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,7.25482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,6.983788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,7.302638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,6.785501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,7.102041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,6.960458);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,7.016221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,6.801688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,7.044546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,6.866669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,6.860683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,6.837109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,6.923465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,6.935771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,6.752225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,6.861842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,7.03697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,6.865695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,6.8813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,6.804817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,6.715616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,6.728717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,6.749957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,6.742593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,6.73781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,6.531185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,6.622409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,6.384847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,6.292192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,6.652759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,6.467438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,6.508768);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,6.718444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,6.733594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,6.362101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,6.508126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,6.358533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,6.433435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,6.672356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,6.228157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,6.661756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,6.508533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,6.368748);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,6.446673);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,6.554326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,6.225957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,6.601934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,6.265874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,6.403105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,6.421241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,6.57779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,6.199707);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,6.064801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,6.174242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,6.42605);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,6.029443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,6.213411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,6.225314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,6.463809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,6.191876);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,6.044646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,6.017997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,6.092686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,6.004762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,6.225223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,5.868116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,6.17868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,6.231882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,6.173529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,6.147872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,5.98416);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,5.895883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,6.1062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,6.157928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,5.833103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,5.74809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,6.250047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,5.848142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,6.063286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,5.830472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,5.867593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,6.021207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,5.878311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,5.761581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,5.781023);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,6.134318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,5.730115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,6.083571);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,5.477258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,5.981447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,6.114744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,5.678834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,5.786936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,6.156753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,5.840483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,5.67292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,5.808934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,5.707298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,5.615174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,5.606296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,5.678004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,5.25599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,90.32579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(8836642);

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
   
   TH1D *VH_tagOnly_H_mass__5 = new TH1D("VH_tagOnly_H_mass__5","",1000,0,2000);
   VH_tagOnly_H_mass__5->SetBinContent(43,9058);
   VH_tagOnly_H_mass__5->SetBinContent(44,17978);
   VH_tagOnly_H_mass__5->SetBinContent(45,17713);
   VH_tagOnly_H_mass__5->SetBinContent(46,17413);
   VH_tagOnly_H_mass__5->SetBinContent(47,17328);
   VH_tagOnly_H_mass__5->SetBinContent(48,8441);
   VH_tagOnly_H_mass__5->SetBinContent(78,7500);
   VH_tagOnly_H_mass__5->SetBinContent(79,14891);
   VH_tagOnly_H_mass__5->SetBinContent(80,14659);
   VH_tagOnly_H_mass__5->SetBinContent(81,14697);
   VH_tagOnly_H_mass__5->SetBinContent(82,14558);
   VH_tagOnly_H_mass__5->SetBinContent(83,7296);
   VH_tagOnly_H_mass__5->SetBinContent(1000,59);
   VH_tagOnly_H_mass__5->SetBinContent(1001,37046);
   VH_tagOnly_H_mass__5->SetEntries(3454805);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__5->SetLineColor(ci);
   VH_tagOnly_H_mass__5->SetLineWidth(2);
   VH_tagOnly_H_mass__5->SetMarkerStyle(20);
   VH_tagOnly_H_mass__5->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__5->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__5->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1005[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 6504.532, 13154.73, 13205.49, 13143.79, 13125.99, 6591.828, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6455.538, 12819.62, 12724.86, 12791.26,
   12566.56, 6252.251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 46.91109 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1005[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4044651, 0.703168, 2.870468, 6.889376, 11.97049, 17.16137, 22.70654, 28.38602,
   34.06947, 39.26964, 44.51435, 49.14786, 53.1998, 56.99602, 60.13283, 62.25034, 64.20679, 65.54744, 67.06076, 67.65504, 68.17104, 68.83325, 69.07419, 68.84432,
   69.36891, 69.19583, 69.89993, 69.83165, 70.1346, 70.23325, 70.13962, 69.94549, 69.83212, 69.80844, 69.5643, 69.14699, 68.76681, 68.19797, 67.84802, 67.68862,
   67.58286, 67.43248, 67.12015, 66.98229, 67.13949, 66.8181, 67.01291, 66.92761, 66.75472, 66.84644, 66.87985, 66.26875, 66.80998, 66.87403, 66.54123, 66.32634,
   66.12379, 66.07817, 65.78083, 65.86925, 65.88901, 65.61737, 65.33662, 65.28745, 65.17919, 64.63433, 64.47877, 64.32841, 64.12511, 63.91698, 63.73541, 63.8368,
   63.27676, 63.06512, 62.55912, 62.39004, 62.30777, 61.89664, 61.98972, 61.48161, 61.36825, 60.88596, 60.55688, 60.59652, 60.07361, 59.87123, 59.58924, 59.28753,
   59.2994, 58.96362, 58.82052, 58.37106, 58.38554, 57.80524, 57.69121, 57.23636, 57.45493, 57.14222, 56.73133, 56.38433, 56.20046, 55.82843, 55.72636, 55.91431,
   55.51406, 55.43284, 55.02154, 55.01345, 54.60357, 54.52828, 54.32217, 54.19507, 53.94489, 54.07973, 53.68028, 53.11142, 53.10935, 53.0912, 53.02832, 52.76382,
   52.62673, 52.19712, 52.19902, 52.19303, 51.96041, 51.7158, 51.55174, 51.50459, 51.25227, 51.0676, 50.96767, 50.69899, 50.38791, 50.5215, 50.20583, 50.06447,
   50.01029, 49.67537, 49.50431, 49.63372, 49.43845, 49.49849, 49.14779, 48.84228, 49.02759, 48.82779, 48.26531, 48.40572, 47.91194, 47.92507, 47.95599, 47.67988,
   47.6446, 47.21047, 47.26183, 47.21484, 46.7923, 47.12697, 46.63544, 46.72436, 46.25503, 46.42845, 46.0667, 46.01484, 46.09318, 45.64059, 45.55419, 45.36564,
   45.4555, 45.25846, 45.50872, 44.87908, 45.08629, 44.80508, 44.77546, 44.45337, 44.38102, 44.32118, 44.17771, 43.9944, 43.53248, 43.83187, 43.64718, 43.62815,
   43.42056, 43.13091, 42.98742, 43.08355, 43.1832, 42.91238, 42.60753, 42.61897, 42.50647, 42.2316, 42.35706, 41.69609, 41.8514, 41.94525, 41.74521, 41.72972,
   41.63447, 41.47891, 41.14671, 41.13308, 41.01965, 40.71887, 40.7567, 40.93814, 40.7575, 40.06209, 40.28129, 40.14833, 39.91351, 39.7186, 39.68234, 39.4197,
   39.57403, 39.60634, 39.43899, 39.0794, 39.11904, 39.27042, 38.87363, 38.96847, 38.67312, 38.85055, 38.34411, 38.56463, 38.1428, 37.99219, 37.93453, 37.83882,
   37.59304, 37.71629, 37.60264, 37.7509, 37.48931, 37.33386, 37.42504, 37.18233, 37.21717, 36.86016, 36.9996, 36.57535, 36.68814, 36.53189, 36.3239, 36.32435,
   36.25692, 36.09576, 36.01691, 36.179, 35.9699, 35.49002, 35.40866, 35.35494, 35.45433, 35.43906, 35.21874, 34.95461, 35.02189, 34.85955, 34.57845, 34.43729,
   34.65514, 34.57534, 34.46178, 34.45082, 34.04826, 34.10872, 33.80375, 33.9789, 33.97737, 33.69918, 33.56847, 33.62127, 33.39076, 33.2888, 33.30112, 33.27979,
   33.03585, 32.8282, 32.97941, 32.77744, 32.65399, 32.40128, 32.71642, 32.29194, 32.49263, 32.1838, 32.26985, 32.27834, 31.83097, 31.69487, 31.60644, 31.75037,
   31.61346, 31.49572, 31.52542, 31.4965, 31.43369, 31.22614, 31.01622, 31.25657, 30.92928, 30.894, 30.64306, 30.62594, 30.33367, 30.75203, 30.41355, 30.51026,
   30.56853, 30.15683, 30.29353, 30.04617, 29.87098, 29.91268, 29.67234, 29.65024, 29.5776, 29.53753, 29.52736, 29.46944, 29.16722, 29.38713, 29.2546, 29.17284,
   29.12413, 29.04435, 28.73523, 28.71533, 28.70639, 28.7255, 28.66133, 28.27153, 28.51952, 28.319, 28.36817, 28.1206, 28.14389, 28.01933, 27.92178, 27.82228,
   27.91559, 27.80052, 27.47775, 27.55201, 27.49279, 27.69411, 27.16738, 27.49774, 27.28135, 27.05515, 26.99578, 26.91038, 27.01634, 26.85433, 26.62111, 26.81505,
   26.53632, 26.45234, 26.20028, 26.51756, 26.07208, 26.171, 26.22315, 26.11619, 26.15903, 25.95205, 25.8342, 25.93798, 25.76847, 25.63438, 25.74599, 25.6399,
   25.53029, 25.40511, 25.44839, 25.25652, 25.03362, 24.97696, 25.11176, 25.02371, 24.85772, 24.85396, 24.80564, 24.90145, 24.81176, 24.65143, 24.56449, 24.49876,
   24.45428, 24.44464, 24.3587, 24.13765, 24.40672, 23.96503, 24.16763, 24.14679, 23.94374, 23.79063, 23.76307, 23.7488, 23.75325, 23.46677, 23.45765, 23.75018,
   23.42207, 23.43487, 23.18775, 23.17601, 23.28268, 22.80055, 23.23213, 22.76437, 22.99116, 22.87073, 22.94227, 23.03691, 22.67992, 22.6798, 22.37664, 22.68204,
   22.51225, 22.33943, 22.50227, 22.3036, 22.24041, 22.05282, 22.02569, 22.18771, 21.96337, 21.99725, 21.83377, 21.80629, 21.64608, 21.75344, 21.92167, 21.81527,
   21.40319, 21.27993, 21.66759, 21.52916, 21.39983, 21.3842, 21.00772, 21.20135, 21.00225, 20.9695, 20.87793, 20.89378, 21.02773, 20.76354, 20.84569, 20.69727,
   20.71831, 20.59403, 20.47541, 20.61267, 20.5909, 20.4975, 20.57685, 20.25426, 20.15798, 20.35862, 19.96792, 20.17165, 20.09738, 19.88255, 19.89681, 19.85101,
   19.55608, 19.67736, 19.83171, 19.57006, 19.68091, 19.39582, 19.66226, 19.35529, 19.29015, 19.42545, 19.06276, 19.02885, 18.97196, 19.01703, 19.13943, 18.70066,
   19.05115, 18.84522, 18.99478, 18.83741, 18.91122, 18.94422, 18.58295, 18.81898, 18.63282, 18.7365, 18.32303, 18.25779, 18.52144, 18.10464, 18.17086, 18.38509,
   18.25902, 18.24971, 18.37255, 17.94409, 18.01446, 17.88032, 17.86134, 17.89529, 17.8952, 17.82542, 17.79994, 17.56173, 17.56484, 17.51447, 17.43475, 17.81833,
   17.56446, 17.4084, 17.40647, 17.19632, 17.21447, 17.34335, 17.34386, 17.37752, 17.30852, 17.1336, 17.04401, 17.26125, 17.07009, 16.74693, 17.02206, 16.99831,
   16.96283, 16.60551, 16.99559, 16.88086, 16.39489, 16.49654, 16.60464, 16.46765, 16.44872, 16.25797, 16.48752, 16.33133, 16.30821, 16.19173, 15.97274, 16.32311,
   16.09654, 15.91482, 15.94655, 15.81146, 15.89029, 15.68032, 16.1333, 16.04962, 15.84991, 15.91885, 15.77301, 15.7238, 15.92068, 15.37016, 15.55079, 15.47565,
   15.30184, 15.485, 15.38167, 15.30828, 15.17219, 15.18827, 15.29357, 15.37904, 14.94558, 15.06362, 15.15488, 15.02335, 14.97168, 15.026, 14.89929, 14.83392,
   14.97386, 14.68105, 14.72177, 14.72402, 14.72979, 14.80146, 14.8176, 14.44786, 14.69039, 14.63267, 14.61122, 14.39902, 14.2821, 14.23164, 14.52383, 14.10758,
   14.37461, 14.14167, 14.01027, 14.0808, 14.05645, 13.88251, 14.13428, 14.01788, 13.944, 13.93942, 14.11508, 13.60954, 13.85077, 13.59411, 13.71145, 13.93001,
   13.85775, 13.68701, 13.75018, 13.49522, 13.37382, 13.16876, 13.18581, 13.42864, 13.40773, 13.50982, 13.3732, 13.33591, 13.35897, 13.10982, 13.36003, 13.18275,
   13.19836, 12.94135, 12.83448, 12.84486, 12.7794, 13.18394, 12.79962, 13.06029, 13.01686, 12.91147, 12.87616, 12.82535, 12.92034, 12.45324, 12.56108, 12.62041,
   12.46651, 12.59096, 12.40155, 12.86672, 12.61444, 12.38961, 12.34221, 12.28164, 12.20834, 12.35156, 12.46375, 12.2701, 12.26872, 11.98016, 12.11607, 12.08386,
   12.05203, 12.00298, 12.19509, 12.19964, 11.86838, 11.64102, 11.86256, 11.75375, 11.85772, 11.77602, 11.65423, 11.51034, 11.57079, 11.63074, 11.76131, 11.7521,
   11.7349, 11.96743, 11.64665, 11.45644, 11.2493, 11.30738, 11.48719, 11.47017, 11.39691, 11.50013, 11.42527, 11.26377, 11.451, 11.41434, 11.31459, 11.00797,
   11.21612, 11.11485, 11.25528, 11.01534, 10.9363, 11.11126, 11.13796, 11.03328, 11.07958, 11.0517, 11.02607, 10.88096, 11.31105, 10.63697, 11.18498, 10.73743,
   10.92688, 10.8206, 10.64724, 10.6891, 10.49932, 10.57282, 10.54878, 10.66476, 10.44444, 10.4111, 10.43203, 10.76737, 10.26394, 10.72934, 10.41428, 10.4118,
   10.45048, 10.25461, 10.47132, 10.1391, 10.45247, 10.27597, 10.30146, 10.11313, 10.14436, 10.11886, 10.23892, 9.979369, 10.28627, 10.06193, 10.06712, 10.09704,
   10.08066, 10.12544, 9.941544, 9.725873, 9.899882, 10.00523, 9.825378, 9.651474, 9.542429, 9.506588, 9.96108, 9.888879, 9.641418, 9.45956, 9.374071, 9.362054,
   9.563428, 9.739064, 9.209534, 9.455882, 9.420841, 9.323101, 9.528511, 9.519211, 9.247152, 9.204666, 9.315618, 9.393669, 9.496147, 9.520511, 9.268526, 9.392552,
   9.550789, 9.283928, 9.238813, 9.444428, 9.019914, 9.126811, 9.030703, 9.162109, 9.068237, 8.95329, 9.315482, 9.03071, 8.974748, 8.952249, 8.891096, 8.710969,
   9.029053, 8.686468, 8.936156, 8.968169, 8.808337, 8.648938, 8.972367, 8.902426, 8.837175, 8.684853, 8.841872, 8.586441, 8.698095, 8.551276, 8.734597, 8.623171,
   8.615281, 8.628227, 8.437969, 8.366361, 8.445748, 8.591361, 8.359583, 8.420438, 8.413237, 8.100472, 8.034877, 8.369388, 8.281144, 8.47573, 8.153439, 8.339814,
   8.026302, 8.153211, 8.088322, 8.294557, 8.1784, 8.016833, 8.160455, 7.834483, 8.217533, 8.212338, 8.057258, 8.014004, 8.133653, 7.758581, 8.007534, 8.20259,
   7.738213, 8.249191, 7.869526, 8.213851, 7.607891, 7.74393, 7.68786, 7.821728, 7.84985, 7.73102, 7.738202, 7.565384, 7.590744, 7.652744, 7.851395, 7.680382,
   7.988765, 7.569877, 7.610708, 7.733264, 7.308603, 7.589306, 7.382477, 7.510126, 7.466499, 7.371959, 7.590302, 7.692345, 7.403183, 7.603024, 7.479043, 7.357724,
   7.502976, 7.411357, 7.292327, 7.152329, 7.10607, 7.407721, 7.241642, 7.156513, 7.432648, 7.125812, 7.479401, 7.238996, 7.165137, 7.020428, 7.484, 6.860548,
   7.105986, 7.25482, 6.983788, 7.302638, 6.785501, 7.102041, 6.960458, 7.016221, 6.801688, 7.044546, 6.866669, 6.860683, 6.837109, 6.923465, 6.935771, 6.752225,
   6.861842, 7.03697, 6.865695, 6.8813, 6.804817, 6.715616, 6.728717, 6.749957, 6.742593, 6.73781, 6.531185, 6.622409, 6.384847, 6.292192, 6.652759, 6.467438,
   6.508768, 6.718444, 6.733594, 6.362101, 6.508126, 6.358533, 6.433435, 6.672356, 6.228157, 6.661756, 6.508533, 6.368748, 6.446673, 6.554326, 6.225957, 6.601934,
   6.265874, 6.403105, 6.421241, 6.57779, 6.199707, 6.064801, 6.174242, 6.42605, 6.029443, 6.213411, 6.225314, 6.463809, 6.191876, 6.044646, 6.017997, 6.092686,
   6.004762, 6.225223, 5.868116, 6.17868, 6.231882, 6.173529, 6.147872, 5.98416, 5.895883, 6.1062, 6.157928, 5.833103, 5.74809, 6.250047, 5.848142, 6.063286,
   5.830472, 5.867593, 6.021207, 5.878311, 5.761581, 5.781023, 6.134318, 5.730115, 6.083571, 5.477258, 5.981447, 6.114744, 5.678834, 5.786936, 6.156753, 5.840483,
   5.67292, 5.808934, 5.707298, 5.615174, 5.606296, 5.678004, 5.25599 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1005,Graph_from_VH_tagOnly_2b1c_H_mass_fy1005,Graph_from_VH_tagOnly_2b1c_H_mass_fex1005,Graph_from_VH_tagOnly_2b1c_H_mass_fey1005);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMinimum(-1404.72);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMaximum(14609.12);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagOnly_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",1000,0,2000);
   data_mc_ratio__6->SetBinContent(43,1.392568);
   data_mc_ratio__6->SetBinContent(44,1.366656);
   data_mc_ratio__6->SetBinContent(45,1.341337);
   data_mc_ratio__6->SetBinContent(46,1.324808);
   data_mc_ratio__6->SetBinContent(47,1.320129);
   data_mc_ratio__6->SetBinContent(48,1.280525);
   data_mc_ratio__6->SetBinContent(78,1.161793);
   data_mc_ratio__6->SetBinContent(79,1.161579);
   data_mc_ratio__6->SetBinContent(80,1.151997);
   data_mc_ratio__6->SetBinContent(81,1.148988);
   data_mc_ratio__6->SetBinContent(82,1.158472);
   data_mc_ratio__6->SetBinContent(83,1.16694);
   data_mc_ratio__6->SetBinContent(1000,1.257698);
   data_mc_ratio__6->SetBinContent(1001,1.450371);
   data_mc_ratio__6->SetBinError(43,0.01463188);
   data_mc_ratio__6->SetBinError(44,0.01019269);
   data_mc_ratio__6->SetBinError(45,0.0100784);
   data_mc_ratio__6->SetBinError(46,0.01003959);
   data_mc_ratio__6->SetBinError(47,0.01002864);
   data_mc_ratio__6->SetBinError(48,0.0139377);
   data_mc_ratio__6->SetBinError(78,0.01341523);
   data_mc_ratio__6->SetBinError(79,0.009518901);
   data_mc_ratio__6->SetBinError(80,0.009514791);
   data_mc_ratio__6->SetBinError(81,0.00947766);
   data_mc_ratio__6->SetBinError(82,0.0096014);
   data_mc_ratio__6->SetBinError(83,0.01366174);
   data_mc_ratio__6->SetBinError(1000,0.1637384);
   data_mc_ratio__6->SetBinError(1001,0.009115316);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(5354.996);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__6->GetXaxis()->SetRange(1,150);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1006[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01073228, 0.005288158, 0.005236233, 0.005231885, 0.005195645, 0.01029275, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009933349, 0.004985872, 0.005008733, 0.004990659,
   0.00503533, 0.01008679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1120415 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.8655502);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.13445);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagOnly_VR_16->cd();
   H_mass_tagOnly_VR_16->Modified();
   H_mass_tagOnly_VR_16->cd();
   H_mass_tagOnly_VR_16->SetSelected(H_mass_tagOnly_VR_16);
}
