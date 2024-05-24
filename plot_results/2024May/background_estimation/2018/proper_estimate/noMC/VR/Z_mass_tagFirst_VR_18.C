#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_18/Z_mass_tagFirst_VR_18
//=========  (Fri May 24 11:23:59 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_18 = new TCanvas("Z_mass_tagFirst_VR_18", "Z_mass_tagFirst_VR_18",0,0,600,600);
   Z_mass_tagFirst_VR_18->SetHighLightColor(2);
   Z_mass_tagFirst_VR_18->Range(0,0,1,1);
   Z_mass_tagFirst_VR_18->SetFillColor(0);
   Z_mass_tagFirst_VR_18->SetFillStyle(4000);
   Z_mass_tagFirst_VR_18->SetBorderMode(0);
   Z_mass_tagFirst_VR_18->SetBorderSize(2);
   Z_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-51.85997,315.7258,51818.11);
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
   st->SetMaximum(46631.11);
   
   TH1F *st_stack_139 = new TH1F("st_stack_139","",1000,0,2000);
   st_stack_139->SetMinimum(0.01);
   st_stack_139->SetMaximum(46631.11);
   st_stack_139->SetDirectory(nullptr);
   st_stack_139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_139->SetLineColor(ci);
   st_stack_139->SetLineWidth(0);
   st_stack_139->GetXaxis()->SetRange(1,150);
   st_stack_139->GetXaxis()->SetLabelFont(42);
   st_stack_139->GetXaxis()->SetTitleOffset(1);
   st_stack_139->GetXaxis()->SetTitleFont(42);
   st_stack_139->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_139->GetYaxis()->SetLabelFont(42);
   st_stack_139->GetYaxis()->SetLabelSize(0.05);
   st_stack_139->GetYaxis()->SetTitleSize(0.057);
   st_stack_139->GetYaxis()->SetTitleOffset(1.2);
   st_stack_139->GetYaxis()->SetTitleFont(42);
   st_stack_139->GetZaxis()->SetLabelFont(42);
   st_stack_139->GetZaxis()->SetTitleOffset(1);
   st_stack_139->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_139);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,14743.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,16166.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,17260.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,18277.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,19340.43);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,12513.08);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,12199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,12058.03);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,11823.75);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,11769.1);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,85.19895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,40266.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(5,0.03701603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.05540465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.03701539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.07809347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.05744714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.6389042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.568229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,4.188537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,10.19404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,16.49556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,24.57537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,31.26442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,39.83226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,47.42139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,55.292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,63.0921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,68.84413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,74.74775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,80.30979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,84.82973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,88.51739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,91.5953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,94.61386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.02135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.29932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,99.30481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,100.2599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,100.7686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,101.1213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,101.2859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,100.6808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,100.5681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,100.4908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,99.85468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,99.67546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,98.63299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,98.41787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,97.43049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,97.08898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,95.81702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,94.74592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,94.35548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,93.78843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,92.42184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,91.62086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,90.90389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,90.24067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,88.82498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,87.51835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,87.66981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,86.78963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,85.81068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.84124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,84.87437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,84.08943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,83.53556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,83.10694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,83.69226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.86698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,81.4983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.69369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,80.83342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.72888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.44189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.25681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.15807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,81.77831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.56119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.64585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.17084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.42889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,74.96918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.62311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.48665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.80546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,79.15417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,74.48437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,73.84993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.05516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.16295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.43283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,70.63661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.61869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.03024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,83.85338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.8849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,69.22311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.72281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.77387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.63302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.85259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.43884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.79518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,66.18786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.21432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,65.22856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,65.13032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,65.16805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,64.64064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,63.86382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,63.86766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.73148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,62.95432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,63.18644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,62.19587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,62.38591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,61.48108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.63309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,61.19512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,59.98097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,61.13329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,60.3813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,59.72526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,59.60356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.29737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,59.51066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.45233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,59.23341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,59.99666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,58.05012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.91911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,63.74791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,58.12018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,57.32247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,56.52395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,56.43987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,56.06678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,56.45868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,55.67914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,56.11721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,55.36975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,57.29385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,56.19568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,54.64362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,54.8477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,54.90527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,54.49981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,54.33035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,54.35678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,53.93872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,53.46738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,53.56611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,54.41128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,53.32242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,53.77702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,52.85439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,52.32491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,53.61207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,52.4137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,52.1067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,52.14048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,51.90604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,52.92556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,51.80755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,51.499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,51.54564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,52.55546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,51.49964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,51.07298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,51.45672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,50.47089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,50.25036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,50.47865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,50.79414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,50.13541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,49.66422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,49.5716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,50.3774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,49.7502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,49.57897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,49.64068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,49.30232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,49.20897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,49.43115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,49.88137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,48.78327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,49.99218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,49.18898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,48.55647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,48.93506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,48.09349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,47.99653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,48.04793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,48.4265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,47.8118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,48.182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,48.07507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,47.96704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,47.41817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,47.28184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,47.52261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,47.28994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,46.90789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,47.14408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,47.29686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,47.10473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,47.23423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,47.14184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,46.43728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,46.37049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,46.9207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,46.3303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,45.63459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,46.37005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,46.08885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,45.90727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,45.95605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,45.96358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,46.23693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,45.84544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,45.69338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,45.46314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,45.0121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,45.44787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,45.21182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,45.23812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,44.73938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,44.76386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,44.98146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,44.69697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,46.47393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,45.26445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,44.56635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,45.17221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,45.07211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,44.163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,44.7087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,44.24022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,43.93977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,44.17324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,43.8479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,43.95275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,44.5677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,43.36791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,43.75866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,43.53293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,45.51043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,42.9607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,43.19999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,43.38429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,43.21268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,43.02092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,43.93435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,42.79341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,42.70814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,42.71854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,42.13962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,43.06612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,43.0511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,42.5909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,42.57496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,42.47472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,42.23198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,42.25974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,42.19991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,42.12012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,41.7078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,41.83806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,41.91968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,41.51218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,41.44293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,42.06097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,41.49142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,41.03794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,41.19343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,40.97409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,41.05071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,40.96731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,40.37173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,40.96908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,40.32284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,40.39824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,40.73738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,40.84315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,41.3805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,40.47599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,41.62188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,40.28104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,39.73199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,40.16952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,39.68146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,39.79281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,40.00969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,39.92324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,40.10301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,40.59392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,40.00838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,39.56107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,39.02195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,39.21864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,39.26184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,38.82031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,39.30371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,38.90229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,39.4585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,38.94259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,38.71537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,38.702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,38.5974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,38.84081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,38.38985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,38.19707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,38.0625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,38.24726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,39.08419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,38.23266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,37.82951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,37.87885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,38.0377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,38.06136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,37.89903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,39.08087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,39.41907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,37.53879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,37.47461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,37.23379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,37.36182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,37.30786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,37.32245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,37.39903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,37.02839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,36.90502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,50.54655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,36.71891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,36.61023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,36.36931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,36.6634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,35.92848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,36.49595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,36.53387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,36.26599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,36.33122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,35.90545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,35.9815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,35.99564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,35.90982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,35.50626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,35.68287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,35.57121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,35.62701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,35.81451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,35.63035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,35.03236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,35.34912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,35.33548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,36.01569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,35.37545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,34.89949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,34.6437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,34.54848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,34.70512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,34.75142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,35.0645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,34.57322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,34.85321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,34.29062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,34.38123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,33.93897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,35.33172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.7182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,36.58929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,34.13203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,33.95635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,33.98262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,34.07467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,34.61935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,33.77019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,33.91995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,33.37067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,33.27934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,33.26744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,33.8117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,33.05191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,33.11756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,33.03149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.84918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,33.0359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,32.73694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.9815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,33.23508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,32.31985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,32.29561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,32.40599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.55489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,33.27641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,32.02663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,32.59032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,32.2428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,32.46808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.85173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,32.71197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.54063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.48437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.35035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.74097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,31.18013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.69789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,31.51417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,31.54335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,31.20326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,31.13451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.59218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,31.22566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,31.09661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,31.12372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,30.5904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,31.10201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.86254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.69761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,31.23108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,30.65221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,34.42995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,31.00675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,31.63488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.71383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.95558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,30.04451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.36247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,29.79873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.87521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,29.92814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,30.00101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,30.24154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.74275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,29.97886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.7411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.0618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.61656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,28.99626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,30.03303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.36624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,29.26785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.24015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.13603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.12884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,28.76967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,28.7093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,28.49649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,28.8709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,28.68723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,28.91521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,28.90019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.57224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,29.11197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,28.9353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.00121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,28.56205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.28219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,27.98206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.20263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.00626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,28.00152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,28.19889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,29.4201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,27.88754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,27.62118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,27.52565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,27.98018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,27.21429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,27.31457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,27.30406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.17636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,27.87281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,27.11386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.14825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,26.60433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.45937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,27.35509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,26.75512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,26.72284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,26.87795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,26.78064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,26.47953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,26.46435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,26.23971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,26.97479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,26.27707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,26.08626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.3239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.2657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,26.10275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,25.79341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,25.93402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,25.92525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,26.0856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,25.6465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,25.70031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,26.03397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,25.79178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,25.85263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,25.54149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,25.16662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,25.16863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,25.88212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,25.44896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,25.14213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,25.17736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,25.10426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.27587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,25.21346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,24.78197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,24.90618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,24.96636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,24.8405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,24.57136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,25.26481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,24.44061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,24.71369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,24.54631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,24.3019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,24.63583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,24.50685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,24.0963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,24.08233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,24.13133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,23.84496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,23.7472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,23.65918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,23.94956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,23.86012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,24.04493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,23.54534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,23.86719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,23.90221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,23.50659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,23.77565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,23.7894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,23.84949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,23.27854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,23.58464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,23.41087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,23.24937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.17351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,23.50385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,23.0831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,23.21222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,22.77712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,23.47949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,23.01588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,22.60201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,23.45839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,22.64025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,22.91756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,23.02993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,22.65415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,22.39626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,22.49153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,22.67806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,22.10808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,22.49365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.29521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,22.25848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,21.86252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,22.25995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,22.23735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,22.12817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,21.97247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,22.09058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,21.88657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,22.12201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,21.71986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,21.92057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,21.68853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,21.69382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,21.55855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,21.6651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,21.42266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,21.36346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,21.32602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,21.6774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,25.32639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,21.06595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,21.36429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,21.07992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,21.14712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,21.14462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,21.49414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,21.21647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,21.52574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,21.16053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,21.85376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,20.59038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,20.64466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,20.9937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,20.40401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,21.4631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,20.40789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,20.73809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,20.36805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,20.16401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.01154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,20.3275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,20.22083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,20.65104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,20.77189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,20.36489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,20.56568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,20.03911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.96857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,19.64041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,19.76824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,19.55851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,20.19514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,19.77176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,20.40666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,19.69577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,19.54874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,19.48333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,20.00544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,19.99134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,19.39654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,19.91924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,19.78655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,19.31967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,19.15005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,19.18054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.98365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.97013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,19.60472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,19.1632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,19.20681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,19.25056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.78694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,19.06042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,19.1273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,18.77753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,19.10767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,18.94228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,18.62533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,18.80646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,18.60482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,18.78651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,18.72327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,19.08234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,18.67055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,18.31133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,18.48306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,18.99545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,18.65042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,18.82109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,18.34254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,18.34023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,18.15435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,18.46765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,18.26112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,18.22289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,18.55078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.9603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,18.27563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,18.41751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,18.3134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,18.10283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,17.50021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,17.58242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.9724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,18.39211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,17.88731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,18.04753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,17.72428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,17.78948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,17.33337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,17.34141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,17.37231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,17.68006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,17.4643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,17.26431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,17.43689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,17.45328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,17.26532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.91692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,17.11704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,17.22048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,17.76383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,17.18336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,17.0694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.71163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,17.13715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,17.11784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,17.08994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.47206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,17.26465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,17.51758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,16.9036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,16.91178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,16.93283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,16.99478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,16.69695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,19.58504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,16.94761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,16.71897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,16.62581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,16.79592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,16.25501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,16.66053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,16.92164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,16.8706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,16.48957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,16.39485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,16.48658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,16.182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,16.28668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,16.4855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,16.20416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,16.06205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,16.04295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.67703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,16.41308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.90865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.88173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,15.45464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,16.04891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,16.17047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.87375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,16.30347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,15.4354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,15.96629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,15.65247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,15.48639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,15.68373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,15.55903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,15.7761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,15.57684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,15.65063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.90869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,15.23787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,15.42444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,15.61393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,15.60641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,15.34766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,15.3553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,15.46021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,15.25444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,15.20433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,15.05084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,15.6162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,15.32586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.68375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.72204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,14.70453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,15.24619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.65972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,14.7687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.83907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.91896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.17024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,14.92485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,14.95895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,14.82971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.75013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,14.65972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,15.15907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,14.40764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,14.50557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,14.79982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,14.83564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,14.46956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,14.11803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,14.1818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,14.58068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.07202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,14.6896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,14.30567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.87239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,14.65296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,14.43475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,14.0265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,14.12913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,14.12453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.26184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,14.23425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.94716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,14.25145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,14.24753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.93641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,14.33723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.82874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.71734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,14.01938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,13.90156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,13.63964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,13.70043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,13.80715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.89474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,17.87728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,13.66335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,13.35367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,13.91508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.65258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,13.17875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,13.33654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.01584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,13.47575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.18042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,13.29808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,13.2955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.06486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.96727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,13.12779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,13.21838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,13.36545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.96103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,13.56822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,13.32205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,13.24212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,13.00672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,13.26919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,13.34371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,13.24403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,13.07304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,12.97566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,12.87077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,12.81443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,13.23584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,13.21824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.26808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.66841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,13.00157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,12.87556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,12.56399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.6977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.49588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,12.94971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,12.6384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,23.30147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,12.52355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,12.70318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,13.21637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,12.39919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,12.23928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,12.44386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,12.29688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,12.69377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,12.30589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,12.22554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,12.07491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,12.43341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.78933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,12.49394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,12.1684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,12.09877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,12.20175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,12.20185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.64955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,12.23114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,12.27432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.62301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,12.35487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,12.1288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.96665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,12.66227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.71011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.77845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,12.08418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,12.09743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,12.25319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,12.20593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,11.91413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.79155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,11.89276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,11.71081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.02948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,12.16316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,11.41725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,11.55214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.99111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,11.40418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,11.29143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.63335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,11.03132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,11.64571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,11.02944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,11.29555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,11.68247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,11.51513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,11.30967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,11.75613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,11.44432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,11.34911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,11.34049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,11.31038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.9324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,11.49495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,11.28279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,11.31405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.97335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,11.29653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,11.20114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,11.17162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,11.24532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.57683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,11.31694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.57332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.46473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,11.08431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.79412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.87131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,10.91447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.91921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,10.61286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.47798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.68856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,11.05103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.80126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.91928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,10.78697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,11.06633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,10.71171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,10.33434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.14728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,11.2477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,10.76878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.04909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,10.79276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,10.81853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,10.52585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,10.39098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,10.44707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,10.44876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,10.58984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,10.41086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,10.42515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,10.39411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,10.02655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.893299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,10.51419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,10.83651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,10.19471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,10.28713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.871383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,10.36549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,10.11264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.994556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,10.28441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.627716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,10.07026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,10.17938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,10.36439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.888452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,10.16895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,10.11014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.907309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.762306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.913205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,10.31648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,10.09571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,10.06991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.584004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.244539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.987202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.8506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.99461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,9.763846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,9.00312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.659197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.699302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,9.853896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,9.419039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,9.291365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,9.772566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,9.507188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,9.429122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,9.330963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,9.927348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,9.682198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,9.560848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.00278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,9.6522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,9.465577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,9.548959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,9.18669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.632319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,9.259966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,9.45522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,9.244183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,9.635272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,9.279842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,9.339877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,9.195578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,9.362059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,9.31487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,9.206322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,9.286246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.956167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.020822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.919736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,9.168522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,9.075615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,9.083166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,9.156401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,9.457743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.614007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.945742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,9.291594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,144.8188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(4005168);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_Z_mass__277 = new TH1D("VH_tagFirst_Z_mass__277","",1000,0,2000);
   VH_tagFirst_Z_mass__277->SetBinContent(26,16748);
   VH_tagFirst_Z_mass__277->SetBinContent(27,17980);
   VH_tagFirst_Z_mass__277->SetBinContent(28,19089);
   VH_tagFirst_Z_mass__277->SetBinContent(29,20156);
   VH_tagFirst_Z_mass__277->SetBinContent(30,20984);
   VH_tagFirst_Z_mass__277->SetBinContent(61,15523);
   VH_tagFirst_Z_mass__277->SetBinContent(62,15191);
   VH_tagFirst_Z_mass__277->SetBinContent(63,15123);
   VH_tagFirst_Z_mass__277->SetBinContent(64,14901);
   VH_tagFirst_Z_mass__277->SetBinContent(65,14814);
   VH_tagFirst_Z_mass__277->SetBinContent(1000,88);
   VH_tagFirst_Z_mass__277->SetBinContent(1001,44330);
   VH_tagFirst_Z_mass__277->SetEntries(3004483);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__277->SetLineColor(ci);
   VH_tagFirst_Z_mass__277->SetLineWidth(2);
   VH_tagFirst_Z_mass__277->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__277->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__277->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__277->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__277->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__277->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__277->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__277->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__277->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__277->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__277->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__277->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1277[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1277[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 14743.38, 16166.74, 17260.19, 18277.14, 19340.43, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12513.08, 12199, 12058.03, 11823.75, 11769.1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 85.19895 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1277[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1277[1000] = { 0, 0, 0, 0, 0.03701603, 0, 0, 0.05540465, 0.03701539, 0.07809347, 0.05744714, 0.6389042, 1.568229, 4.188537, 10.19404, 16.49556, 24.57537,
   31.26442, 39.83226, 47.42139, 55.292, 63.0921, 68.84413, 74.74775, 80.30979, 84.82973, 88.51739, 91.5953, 94.61386, 97.02135, 98.29932, 99.30481, 100.2599,
   100.7686, 101.1213, 101.2859, 100.6808, 100.5681, 100.4908, 99.85468, 99.67546, 98.63299, 98.41787, 97.43049, 97.08898, 95.81702, 94.74592, 94.35548, 93.78843,
   92.42184, 91.62086, 90.90389, 90.24067, 88.82498, 87.51835, 87.66981, 86.78963, 85.81068, 84.84124, 84.87437, 84.08943, 83.53556, 83.10694, 83.69226, 81.86698,
   81.4983, 80.69369, 80.83342, 79.72888, 79.44189, 78.25681, 78.15807, 81.77831, 77.56119, 76.64585, 76.17084, 76.42889, 74.96918, 75.62311, 74.48665, 74.80546,
   79.15417, 74.48437, 73.84993, 72.05516, 71.16295, 71.43283, 70.63661, 70.61869, 70.03024, 83.85338, 69.8849, 69.22311, 68.72281, 68.77387, 67.63302, 66.85259,
   66.43884, 66.79518, 66.18786, 66.21432, 65.22856, 65.13032, 65.16805, 64.64064, 63.86382, 63.86766, 62.73148, 62.95432, 63.18644, 62.19587, 62.38591, 61.48108,
   61.63309, 61.19512, 59.98097, 61.13329, 60.3813, 59.72526, 59.60356, 59.29737, 59.51066, 58.45233, 59.23341, 59.99666, 58.05012, 57.91911, 63.74791, 58.12018,
   57.32247, 56.52395, 56.43987, 56.06678, 56.45868, 55.67914, 56.11721, 55.36975, 57.29385, 56.19568, 54.64362, 54.8477, 54.90527, 54.49981, 54.33035, 54.35678,
   53.93872, 53.46738, 53.56611, 54.41128, 53.32242, 53.77702, 52.85439, 52.32491, 53.61207, 52.4137, 52.1067, 52.14048, 51.90604, 52.92556, 51.80755, 51.499,
   51.54564, 52.55546, 51.49964, 51.07298, 51.45672, 50.47089, 50.25036, 50.47865, 50.79414, 50.13541, 49.66422, 49.5716, 50.3774, 49.7502, 49.57897, 49.64068,
   49.30232, 49.20897, 49.43115, 49.88137, 48.78327, 49.99218, 49.18898, 48.55647, 48.93506, 48.09349, 47.99653, 48.04793, 48.4265, 47.8118, 48.182, 48.07507,
   47.96704, 47.41817, 47.28184, 47.52261, 47.28994, 46.90789, 47.14408, 47.29686, 47.10473, 47.23423, 47.14184, 46.43728, 46.37049, 46.9207, 46.3303, 45.63459,
   46.37005, 46.08885, 45.90727, 45.95605, 45.96358, 46.23693, 45.84544, 45.69338, 45.46314, 45.0121, 45.44787, 45.21182, 45.23812, 44.73938, 44.76386, 44.98146,
   44.69697, 46.47393, 45.26445, 44.56635, 45.17221, 45.07211, 44.163, 44.7087, 44.24022, 43.93977, 44.17324, 43.8479, 43.95275, 44.5677, 43.36791, 43.75866,
   43.53293, 45.51043, 42.9607, 43.19999, 43.38429, 43.21268, 43.02092, 43.93435, 42.79341, 42.70814, 42.71854, 42.13962, 43.06612, 43.0511, 42.5909, 42.57496,
   42.47472, 42.23198, 42.25974, 42.19991, 42.12012, 41.7078, 41.83806, 41.91968, 41.51218, 41.44293, 42.06097, 41.49142, 41.03794, 41.19343, 40.97409, 41.05071,
   40.96731, 40.37173, 40.96908, 40.32284, 40.39824, 40.73738, 40.84315, 41.3805, 40.47599, 41.62188, 40.28104, 39.73199, 40.16952, 39.68146, 39.79281, 40.00969,
   39.92324, 40.10301, 40.59392, 40.00838, 39.56107, 39.02195, 39.21864, 39.26184, 38.82031, 39.30371, 38.90229, 39.4585, 38.94259, 38.71537, 38.702, 38.5974,
   38.84081, 38.38985, 38.19707, 38.0625, 38.24726, 39.08419, 38.23266, 37.82951, 37.87885, 38.0377, 38.06136, 37.89903, 39.08087, 39.41907, 37.53879, 37.47461,
   37.23379, 37.36182, 37.30786, 37.32245, 37.39903, 37.02839, 36.90502, 50.54655, 36.71891, 36.61023, 36.36931, 36.6634, 35.92848, 36.49595, 36.53387, 36.26599,
   36.33122, 35.90545, 35.9815, 35.99564, 35.90982, 35.50626, 35.68287, 35.57121, 35.62701, 35.81451, 35.63035, 35.03236, 35.34912, 35.33548, 36.01569, 35.37545,
   34.89949, 34.6437, 34.54848, 34.70512, 34.75142, 35.0645, 34.57322, 34.85321, 34.29062, 34.38123, 33.93897, 35.33172, 33.7182, 36.58929, 34.13203, 33.95635,
   33.98262, 34.07467, 34.61935, 33.77019, 33.91995, 33.37067, 33.27934, 33.26744, 33.8117, 33.05191, 33.11756, 33.03149, 32.84918, 33.0359, 32.73694, 32.9815,
   33.23508, 32.31985, 32.29561, 32.40599, 32.55489, 33.27641, 32.02663, 32.59032, 32.2428, 32.46808, 31.85173, 32.71197, 31.54063, 31.48437, 31.35035, 31.74097,
   31.18013, 31.69789, 31.51417, 31.54335, 31.20326, 31.13451, 31.59218, 31.22566, 31.09661, 31.12372, 30.5904, 31.10201, 31.86254, 30.69761, 31.23108, 30.65221,
   34.42995, 31.00675, 31.63488, 30.71383, 30.95558, 30.04451, 30.36247, 29.79873, 29.87521, 29.92814, 30.00101, 30.24154, 29.74275, 29.97886, 29.7411, 29.0618,
   29.61656, 28.99626, 30.03303, 29.36624, 29.26785, 29.24015, 29.13603, 29.12884, 28.76967, 28.7093, 28.49649, 28.8709, 28.68723, 28.91521, 28.90019, 28.57224,
   29.11197, 28.9353, 28.00121, 28.56205, 28.28219, 27.98206, 28.20263, 28.00626, 28.00152, 28.19889, 29.4201, 27.88754, 27.62118, 27.52565, 27.98018, 27.21429,
   27.31457, 27.30406, 27.17636, 27.87281, 27.11386, 27.14825, 26.60433, 27.45937, 27.35509, 26.75512, 26.72284, 26.87795, 26.78064, 26.47953, 26.46435, 26.23971,
   26.97479, 26.27707, 26.08626, 26.3239, 27.2657, 26.10275, 25.79341, 25.93402, 25.92525, 26.0856, 25.6465, 25.70031, 26.03397, 25.79178, 25.85263, 25.54149,
   25.16662, 25.16863, 25.88212, 25.44896, 25.14213, 25.17736, 25.10426, 25.27587, 25.21346, 24.78197, 24.90618, 24.96636, 24.8405, 24.57136, 25.26481, 24.44061,
   24.71369, 24.54631, 24.3019, 24.63583, 24.50685, 24.0963, 24.08233, 24.13133, 23.84496, 23.7472, 23.65918, 23.94956, 23.86012, 24.04493, 23.54534, 23.86719,
   23.90221, 23.50659, 23.77565, 23.7894, 23.84949, 23.27854, 23.58464, 23.41087, 23.24937, 24.17351, 23.50385, 23.0831, 23.21222, 22.77712, 23.47949, 23.01588,
   22.60201, 23.45839, 22.64025, 22.91756, 23.02993, 22.65415, 22.39626, 22.49153, 22.67806, 22.10808, 22.49365, 23.29521, 22.25848, 21.86252, 22.25995, 22.23735,
   22.12817, 21.97247, 22.09058, 21.88657, 22.12201, 21.71986, 21.92057, 21.68853, 21.69382, 21.55855, 21.6651, 21.42266, 21.36346, 21.32602, 21.6774, 25.32639,
   21.06595, 21.36429, 21.07992, 21.14712, 21.14462, 21.49414, 21.21647, 21.52574, 21.16053, 21.85376, 20.59038, 20.64466, 20.9937, 20.40401, 21.4631, 20.40789,
   20.73809, 20.36805, 20.16401, 21.01154, 20.3275, 20.22083, 20.65104, 20.77189, 20.36489, 20.56568, 20.03911, 19.96857, 19.64041, 19.76824, 19.55851, 20.19514,
   19.77176, 20.40666, 19.69577, 19.54874, 19.48333, 20.00544, 19.99134, 19.39654, 19.91924, 19.78655, 19.31967, 19.15005, 19.18054, 18.98365, 18.97013, 19.60472,
   19.1632, 19.20681, 19.25056, 18.78694, 19.06042, 19.1273, 18.77753, 19.10767, 18.94228, 18.62533, 18.80646, 18.60482, 18.78651, 18.72327, 19.08234, 18.67055,
   18.31133, 18.48306, 18.99545, 18.65042, 18.82109, 18.34254, 18.34023, 18.15435, 18.46765, 18.26112, 18.22289, 18.55078, 17.9603, 18.27563, 18.41751, 18.3134,
   18.10283, 17.50021, 17.58242, 17.9724, 18.39211, 17.88731, 18.04753, 17.72428, 17.78948, 17.33337, 17.34141, 17.37231, 17.68006, 17.4643, 17.26431, 17.43689,
   17.45328, 17.26532, 16.91692, 17.11704, 17.22048, 17.76383, 17.18336, 17.0694, 16.71163, 17.13715, 17.11784, 17.08994, 16.47206, 17.26465, 17.51758, 16.9036,
   16.91178, 16.93283, 16.99478, 16.69695, 19.58504, 16.94761, 16.71897, 16.62581, 16.79592, 16.25501, 16.66053, 16.92164, 16.8706, 16.48957, 16.39485, 16.48658,
   16.182, 16.28668, 16.4855, 16.20416, 16.06205, 16.04295, 15.67703, 16.41308, 15.90865, 15.88173, 15.45464, 16.04891, 16.17047, 15.87375, 16.30347, 15.4354,
   15.96629, 15.65247, 15.48639, 15.68373, 15.55903, 15.7761, 15.57684, 15.65063, 14.90869, 15.23787, 15.42444, 15.61393, 15.60641, 15.34766, 15.3553, 15.46021,
   15.25444, 15.20433, 15.05084, 15.6162, 15.32586, 14.68375, 14.72204, 14.70453, 15.24619, 14.65972, 14.7687, 14.83907, 14.91896, 16.17024, 14.92485, 14.95895,
   14.82971, 14.75013, 14.65972, 15.15907, 14.40764, 14.50557, 14.79982, 14.83564, 14.46956, 14.11803, 14.1818, 14.58068, 15.07202, 14.6896, 14.30567, 13.87239,
   14.65296, 14.43475, 14.0265, 14.12913, 14.12453, 15.26184, 14.23425, 13.94716, 14.25145, 14.24753, 13.93641, 14.33723, 13.82874, 13.71734, 14.01938, 13.90156,
   13.63964, 13.70043, 13.80715, 13.89474, 17.87728, 13.66335, 13.35367, 13.91508, 13.65258, 13.17875, 13.33654, 14.01584, 13.47575, 13.18042, 13.29808, 13.2955,
   14.06486, 12.96727, 13.12779, 13.21838, 13.36545, 12.96103, 13.56822, 13.32205, 13.24212, 12.964, 13.00672, 13.26919, 13.34371, 13.24403, 13.07304, 12.97566,
   12.87077, 12.81443, 13.23584, 13.21824, 12.26808, 12.66841, 13.00157, 12.87556, 12.56399, 12.6977, 12.49588, 12.94971, 12.6384, 23.30147, 12.52355, 12.70318,
   13.21637, 12.39919, 12.23928, 12.44386, 12.29688, 12.69377, 12.30589, 12.22554, 12.07491, 12.43341, 11.78933, 12.49394, 12.1684, 12.09877, 12.20175, 12.20185,
   11.64955, 12.23114, 12.27432, 11.62301, 12.35487, 12.1288, 11.96665, 12.66227, 11.71011, 11.77845, 12.08418, 12.09743, 12.25319, 12.20593, 11.91413, 11.79155,
   11.89276, 11.71081, 12.02948, 12.16316, 11.41725, 11.55214, 11.99111, 11.40418, 11.29143, 11.63335, 11.03132, 11.64571, 11.02944, 11.29555, 11.68247, 11.51513,
   11.30967, 11.75613, 11.44432, 11.34911, 11.34049, 11.31038, 10.9324, 11.49495, 11.28279, 11.31405, 10.97335, 11.29653, 11.20114, 11.17162, 11.24532, 10.57683,
   11.31694, 10.57332, 10.46473, 11.08431, 10.79412, 10.87131, 10.91447, 10.91921, 10.61286, 10.47798, 10.68856, 11.05103, 10.80126, 10.91928, 10.78697, 11.06633,
   10.71171, 10.33434, 11.14728, 11.2477, 10.76878, 11.04909, 10.79276, 10.81853, 10.52585, 10.39098, 10.44707, 10.44876, 10.58984, 10.41086, 10.42515, 10.39411,
   10.02655, 9.893299, 10.51419, 10.83651, 10.19471, 10.28713, 9.871383, 10.36549, 10.11264, 9.994556, 10.28441, 9.627716, 10.07026, 10.17938, 10.36439, 9.888452,
   10.16895, 10.11014, 9.907309, 9.762306, 9.913205, 10.31648, 10.09571, 10.06991, 9.584004, 9.244539, 9.987202, 9.8506, 9.99461, 9.763846, 9.00312, 9.659197,
   9.699302, 9.853896, 9.419039, 9.291365, 9.772566, 9.507188, 9.429122, 9.330963, 9.927348, 9.682198, 9.560848, 10.00278, 9.6522, 9.465577, 9.548959, 9.18669,
   9.632319, 9.259966, 9.45522, 9.244183, 9.635272, 9.279842, 9.339877, 9.195578, 9.362059, 9.31487, 9.206322, 9.286246, 8.956167, 9.020822, 8.919736, 9.168522,
   9.075615, 9.083166, 9.156401, 9.457743, 8.614007, 8.945742, 9.291594 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1277,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1277,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1277,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1277);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->SetMinimum(-2055.16);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->SetMaximum(21391.33);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1277);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__278 = new TH1D("data_mc_ratio__278","",1000,0,2000);
   data_mc_ratio__278->SetBinContent(26,1.135968);
   data_mc_ratio__278->SetBinContent(27,1.11216);
   data_mc_ratio__278->SetBinContent(28,1.105955);
   data_mc_ratio__278->SetBinContent(29,1.102798);
   data_mc_ratio__278->SetBinContent(30,1.084981);
   data_mc_ratio__278->SetBinContent(61,1.240542);
   data_mc_ratio__278->SetBinContent(62,1.245266);
   data_mc_ratio__278->SetBinContent(63,1.254185);
   data_mc_ratio__278->SetBinContent(64,1.26026);
   data_mc_ratio__278->SetBinContent(65,1.258719);
   data_mc_ratio__278->SetBinContent(1000,1.032877);
   data_mc_ratio__278->SetBinContent(1001,1.100919);
   data_mc_ratio__278->SetBinError(26,0.008777776);
   data_mc_ratio__278->SetBinError(27,0.008294161);
   data_mc_ratio__278->SetBinError(28,0.008004716);
   data_mc_ratio__278->SetBinError(29,0.007767726);
   data_mc_ratio__278->SetBinError(30,0.007489934);
   data_mc_ratio__278->SetBinError(61,0.009956887);
   data_mc_ratio__278->SetBinError(62,0.01010343);
   data_mc_ratio__278->SetBinError(63,0.01019865);
   data_mc_ratio__278->SetBinError(64,0.01032411);
   data_mc_ratio__278->SetBinError(65,0.01034172);
   data_mc_ratio__278->SetBinError(1000,0.110105);
   data_mc_ratio__278->SetBinError(1001,0.00655884);
   data_mc_ratio__278->SetMinimum(0.4);
   data_mc_ratio__278->SetMaximum(1.6);
   data_mc_ratio__278->SetEntries(6284.899);
   data_mc_ratio__278->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__278->SetLineColor(ci);
   data_mc_ratio__278->SetLineWidth(2);
   data_mc_ratio__278->SetMarkerStyle(20);
   data_mc_ratio__278->SetMarkerSize(1.2);
   data_mc_ratio__278->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__278->GetXaxis()->SetRange(1,150);
   data_mc_ratio__278->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__278->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__278->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__278->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__278->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__278->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__278->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__278->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__278->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__278->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__278->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__278->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__278->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__278->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1278[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1278[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1278[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1278[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.005753752, 0.005475278, 0.005306736, 0.005176623, 0.005016504, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006720122, 0.006847737, 0.006892249, 0.007078319, 0.006956093,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1090576 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1278,Graph_from_mc_statistical_error_fy1278,Graph_from_mc_statistical_error_fex1278,Graph_from_mc_statistical_error_fey1278);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1278 = new TH1F("Graph_Graph_from_mc_statistical_error1278","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1278->SetMinimum(0.8691309);
   Graph_Graph_from_mc_statistical_error1278->SetMaximum(1.130869);
   Graph_Graph_from_mc_statistical_error1278->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1278->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1278->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1278->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1278);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->SetSelected(Z_mass_tagFirst_VR_18);
}
