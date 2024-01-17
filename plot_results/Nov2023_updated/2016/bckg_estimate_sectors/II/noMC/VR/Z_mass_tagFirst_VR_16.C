#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_16/Z_mass_tagFirst_VR_16
//=========  (Mon Jan  8 11:15:25 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_16 = new TCanvas("Z_mass_tagFirst_VR_16", "Z_mass_tagFirst_VR_16",0,0,600,600);
   Z_mass_tagFirst_VR_16->SetHighLightColor(2);
   Z_mass_tagFirst_VR_16->Range(0,0,1,1);
   Z_mass_tagFirst_VR_16->SetFillColor(0);
   Z_mass_tagFirst_VR_16->SetFillStyle(4000);
   Z_mass_tagFirst_VR_16->SetBorderMode(0);
   Z_mass_tagFirst_VR_16->SetBorderSize(2);
   Z_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-63.05137,315.7258,62998.31);
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
   st->SetMaximum(56692.18);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",1000,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(56692.18);
   st_stack_11->SetDirectory(nullptr);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->SetLineWidth(0);
   st_stack_11->GetXaxis()->SetRange(1,150);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,21496.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,22900.17);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,24005.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,25079.78);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,25511.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,18470.6);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,18356.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,18138.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,17934.86);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,17938.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,97.74371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50511.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9795665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.867877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.966049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,13.07429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,20.04439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,28.09934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.63145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,44.96718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,53.37386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.68684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,68.67453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,75.07231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,80.21089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,84.85638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,89.21357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,92.07925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,94.27569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,96.36167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.18747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.69068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,98.79063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,98.9757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,98.81283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,98.36372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,98.08741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,97.83343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.56123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,96.95871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.65214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.07674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,95.20747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,94.84395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,94.4021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,93.72373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,92.94533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.26887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,90.92723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,90.20678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.63282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,88.85252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.86662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.10985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.44243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.7922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.11364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.77961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.3663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,83.93135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.24916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.69571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.4392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.94805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.48759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.58769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.10315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.34748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.24376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.27575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.51212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.26292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.80356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.68189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.8418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.32721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.04202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.45024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.20366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.6282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.21007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.54208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.37414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.8501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.12678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.95267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.30775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.04101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.41889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.9227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.75095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.02792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.25106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,67.98845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,67.90271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.51095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.9922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.07745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.06811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.43224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.8155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.64397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.02392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.65675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.10307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,62.87566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.39088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,61.90121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,61.37972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,61.36743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.68345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,60.60773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.38113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.47994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,59.18884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,58.90562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.53561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,58.15147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,57.91408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,57.71016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,56.96666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,56.97508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.48213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,56.27181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,55.89786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,55.27642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,55.05154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,54.83448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,54.63538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,54.28046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,53.89142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,54.07552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,53.24786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,53.244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,52.85771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,52.29192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,52.36527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,52.39798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,51.8774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.80469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.34221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.26873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,50.98453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,50.26972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,50.18102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,50.26154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.59852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.68964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,49.33249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,49.05383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,48.97133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.3601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.46345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.50868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,47.93589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,48.05584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.74965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.44437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,47.14439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,47.14729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,47.00316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,46.83224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.64453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.49294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.78978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,46.17638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,45.99643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.65693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,45.41912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.57579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,45.12086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,45.40856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,44.98242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.65362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,44.99308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,44.74715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,44.2899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,44.22951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.63981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,44.22796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,43.86227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,43.80129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.54548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.61154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.4257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.46671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.60997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.46198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,43.02134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.31665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,42.88252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,42.76247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.65817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,42.99903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.50364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,42.0497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,42.15389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.44716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.63199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,41.98609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,41.71751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,41.96159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.57598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.70436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.72244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.48851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.42238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,41.34951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.46207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,40.928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,40.88779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,40.82404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.09679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,40.9347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.74674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.67603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.1332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.29342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,39.96721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.22362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,39.94834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,39.99978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,39.86418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.19293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,39.97578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.81773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.71432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.56908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.40593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.40071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,38.94228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.14066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,38.87005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,39.10036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,38.7535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,38.99504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,38.78355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.09685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.4873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.52112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.39101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.39458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.54246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.23717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.38208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,38.00523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,37.96193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,37.98719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.51934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.75736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,37.83533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.5681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,37.89326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,37.72285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.33384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.52976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,37.1055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.41453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,37.2493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.22905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,37.07963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,36.92403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,36.97597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.62022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.17931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.6015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.84599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.67632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.52839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.4194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.4194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.31198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.28176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,36.09806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,36.2118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.04485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,35.99538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,36.08096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,35.95347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,35.86567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,35.94393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.71438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.47561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.38663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.49686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.70286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.31489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,35.1963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.3905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,34.87548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,35.05581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,34.79284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,34.97752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,34.88334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.7889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,34.84008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,34.86761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.69815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.39261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.60915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.3647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,34.12854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.34076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,33.97153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.40855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,34.3128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,34.10443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,33.99372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.66754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.67568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.70823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,34.11247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.46335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.72043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.3731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,33.1216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.40184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.35872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,33.18156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,32.99305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,33.09469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.32995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,33.23934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,33.04495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.64849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.74491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.87234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.61488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.37019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.68835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.48644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.46744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.47589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,32.10443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.44633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,32.09802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,32.10016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,32.0446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,32.14923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,31.92459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,31.87088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.75669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,32.10229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.84936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.55534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.6421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.65942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.39201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.34176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,31.26731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.45309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.28265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,31.12671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,31.01862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,31.20368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,30.94784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.75456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,30.79464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,31.0363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.58247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.39589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.61831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.16047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.55108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.31913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.29425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,30.0375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,29.97126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,29.91862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,29.91403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,30.08311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,29.95982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.70942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.55676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.64706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.57067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,29.94609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.39865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.70249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,29.93007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,29.87735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,29.20216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,29.17398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.4336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,28.94757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.36366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,29.235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.46619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,28.9452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.24438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,28.9381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.73846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,28.87645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.76468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.66204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.46768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.68594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.38571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.4436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.28411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.50858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,28.12372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.28896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.13347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,28.20889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,27.91089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,27.95261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.15539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,27.87649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,27.81249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.26957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,27.82481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.64441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.74835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.48528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.39786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.55999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.42286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.18691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.43536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.00895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.29761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.24986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.27249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.44785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.05043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,26.98955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,26.77795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.83675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,26.97939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.8112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.80353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.51817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.67794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.62136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.6368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.36264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.66766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.66252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.63165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.54659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.91689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.08034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.26627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.12498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.23494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.0856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.02246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,25.8162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.77369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.53592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.74176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.61899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,26.033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.49563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.51981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.37437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.2688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.27151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.56543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.38517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.12736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.2009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,24.93844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.85034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,24.91644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.89168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.1219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.07548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.93844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.58971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.45275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.50875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.81446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.66763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.57577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.65652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.48077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.30938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.20767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.21616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,23.93146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,23.95722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.88272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,24.16233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.87985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.84251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.00866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.83101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.91713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,23.99724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.87124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.7099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.02949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.5998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.45706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.61722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.49793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.3575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,23.05923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.90415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.19851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,23.15119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.76006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.8742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.69069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.3751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.85322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.62111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.52699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.65441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.9221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.68163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.5209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.76307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.66046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.61202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,22.15269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.20831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.56954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.31299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.77812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,22.12173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.19287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,22.08452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,21.9569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.47719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.91629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,22.05657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.89438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.50589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,22.10933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.85992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,22.1465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.69311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.51226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.47081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.3652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.57271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.53456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.29773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.25263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.24618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,21.10051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,21.02241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.23327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.87189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.18479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.86861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.19126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.90471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.24295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,20.97998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.76985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.83903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.90143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.47739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.88174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.59753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.76985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.32284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.42041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.3801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.48074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.62081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.65734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,20.07855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.32622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.92435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,20.0922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.24851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.34981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,20.03755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.02728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.24174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,20.20446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.62978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.77241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,20.06489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.86579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.5493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.58783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.52826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.62279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.70644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.73772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.25967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.48609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.29877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.52826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,19.03055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.37675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.51421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.15977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.91857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,19.04855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,19.09886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.95115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.15261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.94391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.75849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.90045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.86415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.71459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.81686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.42671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.34844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.54536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.77675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.56383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.46016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.18334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.39693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.29981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.31853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.26607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.43043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.35964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.10401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,18.21723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,18.11158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.32601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.04333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.38575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,18.00911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.6322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.83703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.9443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.48778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.83703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.6555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.48778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,17.87158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.60497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.53475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.75615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.69428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.36191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.25897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.41316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.3698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.33426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.73298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.24705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.27881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.40528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.23114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.26294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.68142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.80015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.46425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.88966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.79607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.66086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.33821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.87748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.68963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.69784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.71015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.65263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.59904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.66909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.55356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.76339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.47054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.19356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.30744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.25693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.39546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.5577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.9934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,16.20625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.28641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.32004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.42053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.18933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.32424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.1851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,16.10869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.03619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.18086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.86431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.63366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.85999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.6205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.62489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.81672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,16.08314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.78201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.79937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.5325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.55454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.26095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.52808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.66869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.37728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.41289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.58975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,15.09386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.42623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.41734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.30132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,15.03016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.45286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.20696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.27891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.40845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.35498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.34605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.93409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.94326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,15.03472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.12562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.78186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.49626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.92491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.74472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.59991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.76794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.82353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.82815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.7168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.61398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.45839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.32982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.61867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.22903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.42517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.42992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.16143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.34894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.3011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,14.80502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.18561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.27711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.2627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.30589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.32025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.98611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.92226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.17594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.90748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.01059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.02526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.85811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.72392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.91733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.87788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.05942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.76382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.62367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.83831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.81353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.65383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.64378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.81353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.93702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.77875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.83831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.72392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.6287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.23062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.69393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,13.0533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.55811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.34411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,13.18392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.17872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.16831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.28749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.62367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.13705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.52775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.19431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.39537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.19951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.28749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.2978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.97959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.8895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.63169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.60453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.10571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,13.03228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.84156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.80949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.7505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.0165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.85756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.6154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.93727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.85756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.02176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.93727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.62626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.90013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.42931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.48982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.43482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.51722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.60453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.70203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.44033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.09392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.29625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.20674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.26276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.14482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.81876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.64349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.76063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.34631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.93992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.24038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.13353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,12.09959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.83615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.71391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.07691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.08258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.96286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.87661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.80716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.79554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.90543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.50134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.63171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.63171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.87661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.7548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.50134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.74313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.78973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.47748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.93992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.3151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.67875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.68462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.4056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.3393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.36345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.28477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.08871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.29691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.06396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.48942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.15035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.02051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.23608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.28477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.33326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.87023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.24827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.15035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.83233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.97065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.1933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.95189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.69863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.87023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.78159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.7943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.9644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.11341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.76887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.63437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.00184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.81967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.87653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.74976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.65369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.55675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.69222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.68581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.52424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.59563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.64082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.62147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.34028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.47855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.13271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.65369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.42609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.28045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.71143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.23367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.36676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.54376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.16648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.42609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.37337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.28711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.46546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.15974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.08525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.962176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.20685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.913899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.19341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.22027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.0444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.3469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.09884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.704279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.927716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.982794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.604891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.788666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.13948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.92081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.858436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.941514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.837557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.704279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.872331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.781661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.92081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.948406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.597752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.56198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.41025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.690143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.315084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.482805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.746564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.683068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.263435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.189148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.767637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.475575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.475575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.211497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.256034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.189148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.583459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.270831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.270831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.106733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.196604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.583459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.329788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.511672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.395672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.084126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.344469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.461097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.015966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.129284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.144287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.218935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.808321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.916592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.076578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.233792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.885792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.970238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.792745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.769329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.924276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.800536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.722308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.475212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.467121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.531633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.698702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.579699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.571707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.954943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.619549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.084126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.878075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.595661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.675032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.870352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.42655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.499438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.611594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.515551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.792745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.5557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.009545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.515551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.667128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.170514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.442802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.587684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.983832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.507498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.42655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.753683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.579699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.320139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,136.7529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(9237222);

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
   
   TH1D *VH_tagFirst_Z_mass__21 = new TH1D("VH_tagFirst_Z_mass__21","",1000,0,2000);
   VH_tagFirst_Z_mass__21->SetBinContent(26,21480);
   VH_tagFirst_Z_mass__21->SetBinContent(27,22743);
   VH_tagFirst_Z_mass__21->SetBinContent(28,24065);
   VH_tagFirst_Z_mass__21->SetBinContent(29,24984);
   VH_tagFirst_Z_mass__21->SetBinContent(30,25395);
   VH_tagFirst_Z_mass__21->SetBinContent(61,18928);
   VH_tagFirst_Z_mass__21->SetBinContent(62,18825);
   VH_tagFirst_Z_mass__21->SetBinContent(63,18522);
   VH_tagFirst_Z_mass__21->SetBinContent(64,18732);
   VH_tagFirst_Z_mass__21->SetBinContent(65,18377);
   VH_tagFirst_Z_mass__21->SetBinContent(1000,110);
   VH_tagFirst_Z_mass__21->SetBinContent(1001,60794);
   VH_tagFirst_Z_mass__21->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__21->SetLineColor(ci);
   VH_tagFirst_Z_mass__21->SetLineWidth(2);
   VH_tagFirst_Z_mass__21->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__21->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__21->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__21->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__21->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__21->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__21->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__21->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__21->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__21->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__21->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__21->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1021[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1021[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 21496.95, 22900.17, 24005.71, 25079.78, 25511.48, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18470.6, 18356.2, 18138.12, 17934.86, 17938.56,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 97.74371 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1021[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1021[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9795665, 2.867877, 6.966049, 13.07429, 20.04439, 28.09934,
   36.63145, 44.96718, 53.37386, 60.68684, 68.67453, 75.07231, 80.21089, 84.85638, 89.21357, 92.07925, 94.27569, 96.36167, 97.18747, 98.69068, 98.79063, 98.9757,
   98.81283, 98.36372, 98.08741, 97.83343, 97.56123, 96.95871, 96.65214, 96.07674, 95.20747, 94.84395, 94.4021, 93.72373, 92.94533, 92.26887, 90.92723, 90.20678,
   89.63282, 88.85252, 87.86662, 87.10985, 86.44243, 85.7922, 85.11364, 84.77961, 84.3663, 83.93135, 83.24916, 82.69571, 82.4392, 81.94805, 81.48759, 81.496,
   80.58769, 80.10315, 79.34748, 79.24376, 79.27575, 78.51212, 78.26292, 77.80356, 77.68189, 76.8418, 76.32721, 76.04202, 75.45024, 75.20366, 74.6282, 74.21007,
   73.54208, 73.37414, 72.8501, 72.12678, 71.95267, 71.30775, 71.04101, 70.41889, 69.9227, 69.75095, 69.02792, 68.25106, 67.98845, 67.90271, 67.51095, 66.9922,
   66.07745, 66.06811, 65.43224, 64.8155, 64.64397, 64.02392, 63.65675, 63.10307, 62.87566, 62.39088, 61.90121, 61.37972, 61.36743, 60.68345, 60.60773, 60.38113,
   59.47994, 59.18884, 58.90562, 58.53561, 58.15147, 57.91408, 57.71016, 56.96666, 56.97508, 56.48213, 56.27181, 55.89786, 55.27642, 55.05154, 54.83448, 54.63538,
   54.28046, 53.89142, 54.07552, 53.24786, 53.244, 52.85771, 52.29192, 52.36527, 52.39798, 51.8774, 51.80469, 51.34221, 51.26873, 50.98453, 50.26972, 50.18102,
   50.26154, 49.59852, 49.68964, 49.33249, 49.05383, 48.97133, 48.3601, 48.46345, 48.50868, 47.93589, 48.05584, 47.74965, 47.44437, 47.14439, 47.14729, 47.00316,
   46.83224, 46.64453, 46.49294, 46.78978, 46.17638, 45.99643, 45.65693, 45.41912, 45.57579, 45.12086, 45.40856, 44.98242, 44.65362, 44.99308, 44.74715, 44.2899,
   44.22951, 44.63981, 44.22796, 43.86227, 43.80129, 43.54548, 43.61154, 43.4257, 43.46671, 43.60997, 43.372, 43.46198, 43.02134, 43.31665, 42.88252, 42.76247,
   42.65817, 42.99903, 42.50364, 42.0497, 42.15389, 42.44716, 41.63199, 41.98609, 41.71751, 41.96159, 41.57598, 41.70436, 41.72244, 41.48851, 41.42238, 41.34951,
   41.46207, 40.928, 40.88779, 40.82404, 41.09679, 40.9347, 40.74674, 40.67603, 40.1332, 40.29342, 39.96721, 40.22362, 39.94834, 39.99978, 39.86418, 40.19293,
   39.97578, 39.81773, 39.71432, 39.56908, 39.40593, 39.498, 39.40071, 38.94228, 39.14066, 38.87005, 39.10036, 38.7535, 38.99504, 38.78355, 39.09685, 38.4873,
   38.52112, 38.39101, 38.39458, 38.54246, 38.23717, 38.38208, 38.00523, 37.96193, 37.98719, 38.51934, 37.75736, 37.83533, 37.5681, 37.89326, 37.72285, 37.33384,
   37.52976, 37.1055, 37.41453, 37.2493, 37.22905, 37.07963, 36.92403, 36.97597, 36.62022, 37.17931, 36.6015, 36.84599, 36.67632, 36.52839, 36.4194, 36.4194,
   36.31198, 36.28176, 36.09806, 36.2118, 36.04485, 35.99538, 36.08096, 35.95347, 35.86567, 35.94393, 35.71438, 35.47561, 35.38663, 35.49686, 35.70286, 35.31489,
   35.1963, 35.3905, 34.87548, 35.05581, 34.79284, 34.97752, 34.88334, 34.7889, 34.84008, 34.86761, 34.69815, 34.39261, 34.60915, 34.3647, 34.12854, 34.34076,
   33.97153, 34.40855, 34.3128, 34.10443, 33.99372, 33.66754, 33.67568, 33.70823, 34.11247, 33.46335, 33.72043, 33.3731, 33.1216, 33.40184, 33.35872, 33.18156,
   32.99305, 33.09469, 33.32995, 33.23934, 33.04495, 32.64849, 32.74491, 32.87234, 32.61488, 32.37019, 32.68835, 32.48644, 32.46744, 32.47589, 32.10443, 32.44633,
   32.09802, 32.10016, 32.0446, 32.14923, 31.92459, 31.87088, 31.75669, 32.10229, 31.84936, 31.55534, 31.6421, 31.65942, 31.39201, 31.34176, 31.26731, 31.45309,
   31.28265, 31.12671, 31.01862, 31.20368, 30.94784, 30.75456, 30.79464, 31.0363, 30.58247, 30.39589, 30.61831, 30.16047, 30.55108, 30.31913, 30.29425, 30.0375,
   29.97126, 29.91862, 29.91403, 30.08311, 29.95982, 29.70942, 29.55676, 29.64706, 29.57067, 29.94609, 29.39865, 29.70249, 29.93007, 29.87735, 29.20216, 29.17398,
   29.4336, 28.94757, 29.36366, 29.235, 29.46619, 28.9452, 29.24438, 28.9381, 28.73846, 28.87645, 28.76468, 28.66204, 28.46768, 28.68594, 28.38571, 28.4436,
   28.28411, 28.50858, 28.12372, 28.28896, 28.13347, 28.20889, 27.91089, 27.95261, 28.15539, 27.87649, 27.81249, 28.26957, 27.82481, 27.64441, 27.74835, 27.48528,
   27.39786, 27.55999, 27.42286, 27.18691, 27.43536, 28.00895, 27.29761, 27.24986, 27.27249, 27.44785, 27.05043, 26.98955, 26.77795, 26.83675, 26.97939, 26.8112,
   26.80353, 26.51817, 26.67794, 26.62136, 26.6368, 26.36264, 26.66766, 26.66252, 26.63165, 26.54659, 25.91689, 26.08034, 26.26627, 26.12498, 26.23494, 26.0856,
   26.02246, 25.8162, 25.77369, 25.53592, 25.74176, 25.61899, 25.856, 26.033, 25.49563, 25.51981, 25.37437, 25.2688, 25.27151, 25.56543, 25.38517, 25.12736,
   25.2009, 24.93844, 24.85034, 24.91644, 24.89168, 25.1219, 25.07548, 24.93844, 24.737, 24.58971, 24.45275, 24.50875, 24.81446, 24.66763, 24.57577, 24.65652,
   24.48077, 24.30938, 24.20767, 24.21616, 23.93146, 23.95722, 23.88272, 24.16233, 23.87985, 23.84251, 24.00866, 23.854, 23.83101, 23.91713, 23.99724, 23.87124,
   23.7099, 23.02949, 23.5998, 23.45706, 23.61722, 23.49793, 23.3575, 23.05923, 22.90415, 23.19851, 23.15119, 22.76006, 22.8742, 22.69069, 23.3751, 22.85322,
   22.62111, 22.52699, 22.65441, 22.9221, 22.68163, 22.5209, 22.463, 22.76307, 22.66046, 22.61202, 22.15269, 22.20831, 22.56954, 22.31299, 22.77812, 22.12173,
   22.19287, 22.08452, 21.9569, 21.47719, 21.91629, 22.05657, 21.89438, 21.50589, 22.10933, 21.85992, 22.1465, 21.69311, 21.51226, 21.47081, 21.3652, 21.57271,
   21.53456, 21.29773, 21.25263, 21.24618, 21.10051, 21.02241, 21.23327, 20.87189, 21.18479, 20.86861, 21.19126, 20.90471, 21.24295, 20.97998, 20.76985, 20.83903,
   20.90143, 20.47739, 20.88174, 20.59753, 20.76985, 20.32284, 20.42041, 20.3801, 20.48074, 20.62081, 20.65734, 20.07855, 20.32622, 19.92435, 20.0922, 20.24851,
   20.34981, 20.03755, 20.02728, 20.24174, 20.20446, 19.62978, 19.77241, 20.06489, 19.86579, 19.5493, 19.58783, 19.52826, 19.62279, 19.70644, 19.73772, 19.25967,
   19.48609, 19.29877, 19.52826, 19.03055, 19.37675, 19.51421, 19.15977, 18.91857, 19.04855, 19.09886, 18.95115, 19.15261, 18.94391, 18.75849, 18.90045, 18.86415,
   18.71459, 18.81686, 18.42671, 18.34844, 18.54536, 18.77675, 18.56383, 18.46016, 18.18334, 18.39693, 18.29981, 18.31853, 18.26607, 18.43043, 18.35964, 18.10401,
   18.21723, 18.11158, 18.32601, 18.04333, 18.38575, 18.00911, 17.6322, 17.83703, 17.9443, 17.48778, 17.83703, 17.6555, 17.48778, 17.87158, 17.60497, 17.53475,
   17.75615, 17.69428, 17.36191, 17.25897, 17.41316, 17.3698, 17.33426, 17.73298, 17.24705, 17.27881, 17.40528, 17.23114, 17.26294, 16.68142, 16.80015, 17.46425,
   16.88966, 16.79607, 16.66086, 17.33821, 16.87748, 16.68963, 16.69784, 16.71015, 16.65263, 16.59904, 16.66909, 16.55356, 16.76339, 16.47054, 16.19356, 16.30744,
   16.25693, 16.39546, 16.5577, 15.9934, 16.20625, 16.28641, 16.32004, 16.42053, 16.18933, 16.32424, 16.1851, 16.10869, 16.03619, 16.18086, 15.86431, 15.63366,
   15.85999, 15.6205, 15.62489, 15.81672, 16.08314, 15.78201, 15.79937, 15.5325, 15.55454, 15.26095, 15.52808, 15.66869, 15.37728, 15.41289, 15.58975, 15.09386,
   15.42623, 15.41734, 15.30132, 15.03016, 15.45286, 15.20696, 15.27891, 15.40845, 15.35498, 15.34605, 14.93409, 14.94326, 15.03472, 15.12562, 14.78186, 14.49626,
   14.92491, 14.74472, 14.59991, 14.76794, 14.82353, 14.82815, 14.7168, 14.61398, 14.45839, 14.32982, 14.61867, 14.22903, 14.42517, 14.42992, 14.16143, 14.34894,
   14.3011, 14.80502, 14.18561, 14.27711, 14.2627, 14.30589, 14.32025, 13.98611, 13.92226, 14.17594, 13.90748, 14.01059, 14.02526, 13.85811, 13.72392, 13.91733,
   13.87788, 14.05942, 13.76382, 13.62367, 13.83831, 13.81353, 13.65383, 13.64378, 13.81353, 13.93702, 13.77875, 13.83831, 13.72392, 13.6287, 13.23062, 13.69393,
   13.0533, 13.55811, 13.34411, 13.18392, 13.17872, 13.16831, 13.28749, 13.62367, 13.13705, 13.52775, 13.19431, 13.39537, 13.19951, 13.28749, 13.2978, 12.97959,
   12.8895, 12.63169, 12.60453, 13.10571, 13.03228, 12.84156, 12.80949, 12.7505, 13.0165, 12.85756, 12.6154, 12.93727, 12.85756, 13.02176, 12.93727, 12.62626,
   12.90013, 12.42931, 12.48982, 12.43482, 12.51722, 12.60453, 12.13353, 12.70203, 12.44033, 12.09392, 12.29625, 12.20674, 12.26276, 12.13353, 12.14482, 11.81876,
   11.64349, 11.76063, 12.34631, 11.93992, 12.24038, 12.13353, 12.09959, 11.83615, 11.71391, 12.07691, 12.08258, 11.96286, 11.87661, 11.80716, 11.79554, 11.90543,
   11.50134, 11.63171, 11.63171, 11.87661, 11.7548, 11.50134, 11.74313, 11.78973, 11.47748, 11.93992, 11.3151, 11.67875, 11.68462, 11.4056, 11.3393, 11.36345,
   11.28477, 11.08871, 11.29691, 11.06396, 11.48942, 11.15035, 11.02051, 11.23608, 11.28477, 11.33326, 10.87023, 11.24827, 11.15035, 10.83233, 10.97065, 11.1933,
   10.95189, 10.69863, 10.87023, 10.78159, 10.7943, 10.9644, 11.11341, 10.76887, 10.63437, 11.00184, 10.81967, 10.87653, 10.74976, 10.65369, 10.55675, 10.69222,
   10.68581, 10.52424, 10.59563, 10.64082, 10.62147, 10.34028, 10.47855, 10.13271, 10.65369, 10.42609, 10.28045, 10.71143, 10.23367, 10.36676, 10.54376, 10.16648,
   10.42609, 10.37337, 10.28711, 10.46546, 10.15974, 10.08525, 9.962176, 10.20685, 9.913899, 10.19341, 10.22027, 10.0444, 10.3469, 10.09884, 9.704279, 9.927716,
   9.982794, 9.604891, 9.788666, 10.13948, 9.92081, 9.858436, 9.941514, 9.837557, 9.704279, 9.872331, 9.781661, 9.92081, 9.948406, 9.597752, 9.56198, 9.41025,
   9.690143, 9.315084, 9.482805, 9.746564, 9.683068, 9.263435, 9.189148, 9.767637, 9.475575, 9.475575, 9.211497, 9.256034, 9.189148, 9.583459, 9.270831, 9.270831,
   9.106733, 9.196604, 9.583459, 9.329788, 9.511672, 9.395672, 9.084126, 9.344469, 9.461097, 9.015966, 9.129284, 9.144287, 9.218935, 8.808321, 8.916592, 9.076578,
   9.233792, 8.885792, 8.970238, 8.792745, 8.769329, 8.924276, 8.800536, 8.722308, 8.475212, 8.467121, 8.531633, 8.698702, 8.579699, 8.571707, 8.954943, 8.619549,
   9.084126, 8.878075, 8.595661, 8.675032, 8.870352, 8.42655, 8.499438, 8.611594, 8.515551, 8.792745, 8.5557, 8.009545, 8.515551, 8.667128, 8.170514, 8.442802,
   8.587684, 7.983832, 8.507498, 8.42655, 8.753683, 8.579699, 8.320139 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1021,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1021,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1021,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1021);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->SetMinimum(-2669.74);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->SetMaximum(28179.43);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1021);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",1000,0,2000);
   data_mc_ratio__22->SetBinContent(26,0.9992114);
   data_mc_ratio__22->SetBinContent(27,0.9931368);
   data_mc_ratio__22->SetBinContent(28,1.00247);
   data_mc_ratio__22->SetBinContent(29,0.9961811);
   data_mc_ratio__22->SetBinContent(30,0.9954342);
   data_mc_ratio__22->SetBinContent(61,1.024764);
   data_mc_ratio__22->SetBinContent(62,1.025539);
   data_mc_ratio__22->SetBinContent(63,1.021164);
   data_mc_ratio__22->SetBinContent(64,1.044446);
   data_mc_ratio__22->SetBinContent(65,1.024441);
   data_mc_ratio__22->SetBinContent(1000,1.125392);
   data_mc_ratio__22->SetBinContent(1001,1.203573);
   data_mc_ratio__22->SetBinError(26,0.006817737);
   data_mc_ratio__22->SetBinError(27,0.006585446);
   data_mc_ratio__22->SetBinError(28,0.006462171);
   data_mc_ratio__22->SetBinError(29,0.006302419);
   data_mc_ratio__22->SetBinError(30,0.006246525);
   data_mc_ratio__22->SetBinError(61,0.007448544);
   data_mc_ratio__22->SetBinError(62,0.007474546);
   data_mc_ratio__22->SetBinError(63,0.007503288);
   data_mc_ratio__22->SetBinError(64,0.007631222);
   data_mc_ratio__22->SetBinError(65,0.007557004);
   data_mc_ratio__22->SetBinError(1000,0.1073019);
   data_mc_ratio__22->SetBinError(1001,0.005869051);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(5924.943);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(1,150);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1022[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1022[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1022[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.004150056, 0.004020899, 0.00392722, 0.003842206, 0.003809558, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004477153, 0.004491083, 0.004518001, 0.004543531, 0.004543062,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08512199 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0.8978536);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(1.102146);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->SetSelected(Z_mass_tagFirst_VR_16);
}
