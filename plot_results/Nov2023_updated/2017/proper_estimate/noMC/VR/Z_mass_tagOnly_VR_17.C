#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_17()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_17/Z_mass_tagOnly_VR_17
//=========  (Thu Jan 25 12:40:51 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-25.33339,315.7258,25318.05);
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
   st->SetMaximum(22783.72);
   
   TH1F *st_stack_30 = new TH1F("st_stack_30","",1000,0,2000);
   st_stack_30->SetMinimum(0.01);
   st_stack_30->SetMaximum(22783.72);
   st_stack_30->SetDirectory(nullptr);
   st_stack_30->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_30->SetLineColor(ci);
   st_stack_30->SetLineWidth(0);
   st_stack_30->GetXaxis()->SetRange(1,150);
   st_stack_30->GetXaxis()->SetLabelFont(42);
   st_stack_30->GetXaxis()->SetTitleOffset(1);
   st_stack_30->GetXaxis()->SetTitleFont(42);
   st_stack_30->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_30->GetYaxis()->SetLabelFont(42);
   st_stack_30->GetYaxis()->SetLabelSize(0.05);
   st_stack_30->GetYaxis()->SetTitleSize(0.057);
   st_stack_30->GetYaxis()->SetTitleOffset(1.2);
   st_stack_30->GetYaxis()->SetTitleFont(42);
   st_stack_30->GetZaxis()->SetLabelFont(42);
   st_stack_30->GetZaxis()->SetTitleOffset(1);
   st_stack_30->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_30);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,8061.454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,8719.2);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,9376.254);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,9875.186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,10252.67);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,6595.106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,6587.148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,6395.118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,6376.088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,6291.664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,25.95);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,14186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.5992896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,0.7736795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,2.612243);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,5.892168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,9.725001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,14.19444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,19.0834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,24.49768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,29.21191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,34.08583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,38.75818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,43.10582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,46.80218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,50.23081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,52.81347);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,54.9258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,56.95774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,58.45352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,59.56026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,60.02277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,60.49461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,60.59447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,60.40252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,60.22985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,60.23481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,59.75591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,59.41637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,58.53232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,58.28021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,57.7706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,57.43287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,56.43938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,56.11924);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,55.51979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,55.27452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,54.29334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,54.16088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,53.4007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,53.11635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,52.44954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,51.76488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,51.56909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,50.71468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,50.39262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,50.28917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,49.89843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,48.87304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,48.69389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,48.11764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,47.76931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,47.74048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,47.03946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,46.96942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,46.65743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,46.30974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,46.1829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,45.56572);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,45.29165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,45.18712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,44.77727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,44.57898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,44.23661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,44.00734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,43.58913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,43.60012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,43.38542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,42.6395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,42.58893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,42.57769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,42.13536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,41.99876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,41.72708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,41.13473);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,41.02545);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,40.66641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,40.47017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,40.45833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,40.10168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,39.85313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,39.31632);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,39.07809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,39.05204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,39.12708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,38.36546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,38.51339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,38.2686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,38.00334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,38.00491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,37.52306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,37.18333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,36.98318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,36.67763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,36.62537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,36.45336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,36.1781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,36.08865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,36.14003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,35.65983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,35.11005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,35.43587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,35.63128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,34.82417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,34.98366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,34.70537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,34.54979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,34.26274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,33.85323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,34.07353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,33.87268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,33.6297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,33.59587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,33.64928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,33.55843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,33.08419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,33.18174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,32.92277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,32.81897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,32.61406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,32.44661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,32.58468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,32.26346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,32.00266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,31.99892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,31.72463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,31.85268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,31.96336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,31.7906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,31.65285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,31.40986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,31.45176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,31.3908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,31.15922);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,31.21871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,31.06687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,31.02638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,30.84838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,30.65373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,30.65373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,30.59117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,30.56181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,30.33179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,30.52654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,30.03232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,30.02235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,30.02036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,29.98445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,29.71775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,29.59868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,29.66534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,29.50956);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,29.7399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,29.34684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,29.50753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,29.59261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,29.33052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,29.30602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,29.20371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,29.00008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,28.88841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,28.72842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,28.58639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,28.9443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,28.40995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,28.74092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,28.26632);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,28.73675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,28.28748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,28.55077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,28.54657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,28.22393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,28.34034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,28.2896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,27.87609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,27.88468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,27.56732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,27.67351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,27.73833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,27.69297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,27.44764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,27.57818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,27.3537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,27.31209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,27.24187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,27.71242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,27.27481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,27.20009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,27.23088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,26.96137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,26.91026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,26.76305);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,26.94805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,26.77199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,26.71828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,26.89914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,26.62852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,26.4707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,26.33012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,26.60153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,26.51137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,26.12701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,26.46843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,26.3142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,26.21392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,25.87377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,25.96845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,26.08344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,25.91307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,25.79035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,25.83209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,25.72761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,25.85757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,25.61802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,25.58763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,25.33136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,25.34789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,25.28406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,25.73691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,25.22243);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,25.33608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,25.22955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,25.15351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,25.11779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,25.12732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,24.89277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,24.99835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,24.81329);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,24.98638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,25.05097);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,24.86871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,24.63899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,24.46345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,24.54406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,24.57087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,24.47812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,24.26938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,24.56356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,24.25211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,24.29649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,24.1507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,23.97907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,23.9366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,23.84389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,23.91158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,23.98407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,23.74831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,23.63714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,23.55851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,23.80872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,23.51528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,23.62955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,23.50764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,23.43879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,23.49745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,23.01615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,23.01355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,23.2722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,23.1665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,23.37998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,23.06811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,22.99273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,23.0707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,22.92495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,22.73091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,22.73618);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,22.99273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,22.59886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,22.76249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,22.6412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,22.4287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,22.4607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,22.55379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,22.40467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,22.42336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,22.43404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,21.81721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,22.00843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,22.16831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,22.35117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,22.03833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,22.20878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,21.71271);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,21.75127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,21.70995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,21.59938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,21.52165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,21.52721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,21.67408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,21.48267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,21.14567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,21.2783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,21.0492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,21.5661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,21.09181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,21.14284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,21.28673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,20.88648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,21.33448);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,20.98084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,21.20503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,20.90081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,21.02359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,20.89794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,20.74269);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,20.69936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,20.78593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,20.59209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,20.58918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,20.46671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,20.69936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,20.56591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,20.45208);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,20.51345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,20.67332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,20.33762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,20.29932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,20.1454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,20.05607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,20.08291);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,19.95133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,20.10376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,20.11567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,19.90628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,20.22251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,19.90929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,19.7705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,19.64598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,19.6612);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,19.50532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,19.54517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,19.34818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,19.55436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,19.34199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,19.44692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,19.23026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,19.45616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,19.17414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,19.05515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,19.2831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,18.91642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,18.8435);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,19.1991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,18.83397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,18.90693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,18.94804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,19.1554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,18.89426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,18.55541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,18.67439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,18.78942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,18.55863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,18.69681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,18.58764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,18.35757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,18.53281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,18.44216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,18.30533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,18.21025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,18.29552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,18.20368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,17.85843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,18.16747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,17.87183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,17.83159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,18.3282);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,18.0186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,17.8148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,18.03188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,17.82152);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,17.55076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,17.58824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,17.63921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,17.68327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,17.51662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,17.51321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,17.31038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,17.46529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,17.24108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,17.10864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,16.99279);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,17.15057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,17.04204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,17.14359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,17.1715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,16.97517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,16.91512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,16.74797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,16.69786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,17.19589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,17.17847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,16.69786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,16.84775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,16.45593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,16.88324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,16.608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,16.70145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,16.72294);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,16.43409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,16.68352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,16.3501);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,16.78724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,16.44137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,16.09923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,16.31712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,16.47411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,16.37936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,16.43045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,16.21039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,15.93104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,16.21039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,16.34644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,16.1549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,16.21408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,15.7116);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,16.07318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,16.00227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,15.57384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,15.9873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,15.70398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,15.59689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,15.8406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,15.53536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,15.67346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,15.39992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,15.63522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,15.49292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,15.29069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,15.32198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,15.01018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,15.43486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,15.32979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,15.11747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,15.15306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,15.3415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,14.99023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,15.15701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,15.06591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,14.99023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,14.91015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,14.97425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,14.86995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,14.91818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,14.75681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,14.90212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,14.70805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,14.67546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,14.76086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,14.46181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,14.52788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,14.74057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,14.67546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,14.72839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,14.28272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,14.51964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,14.15643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,14.51139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,14.35796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,14.41621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,13.98628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,14.08012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,14.13104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,13.96057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,14.02474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,13.95629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,14.52788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,14.19865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,14.05459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,13.71837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,13.97771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,13.86161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,13.70527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,13.84865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,13.79668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,13.58243);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,13.65714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,13.74888);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,13.56038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,13.37369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,14.0418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,13.60884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,13.54713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,13.37817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,13.37817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,13.36922);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,13.34233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,13.494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,13.0107);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,13.2523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,13.35578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,13.22969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,13.08411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,13.37369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,13.30189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,13.13889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,13.0015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,13.08868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,12.90909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,13.17074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,13.16165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,12.79265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,12.72697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,13.0658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,12.90445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,12.90909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,12.81602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,12.456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,12.71285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,12.83002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,12.63255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,12.49439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,12.31585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,12.75985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,12.71285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,12.58984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,12.40785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,12.13962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,12.16917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,12.19374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,12.49439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,12.34498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,12.23295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,12.60884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,12.13962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,12.62782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,11.99578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,12.33528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,12.32557);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,11.98579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,12.16917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,11.8249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,11.9808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,12.31585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,12.16425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,11.71812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,12.10011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,12.03563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,11.65666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,11.57937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,11.76909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,11.86028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,11.75382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,11.67718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,11.67205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,11.47552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,11.56386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,11.72322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,11.58971);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,11.75382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,11.44941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,11.23834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,11.56386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,11.31267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,11.37072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,11.56386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,11.19031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,11.45986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,11.29678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,11.23834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,10.94148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,11.34437);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,11.1528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,11.24899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,11.02867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,11.45464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,11.10978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,11.26494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,11.08821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,10.88664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,11.10439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,10.65882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,11.12055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,10.86462);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,10.70924);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,10.95788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,10.87013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,10.55725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,10.85911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,10.94148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,10.83704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,10.76499);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,11.1528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,10.69246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,10.57991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,10.95242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,10.36846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,10.63633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,10.46042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,10.80939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,10.33955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,10.4947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,10.33955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,10.64196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,10.63071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,10.72042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,10.5118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,10.47186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,10.2114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,9.992154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,10.33955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,10.01011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,10.24066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,10.09348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,10.36846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,10.29895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,10.15261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,9.920008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,10.55158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,10.2815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,9.932068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,10.14671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,9.901889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,10.24651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,10.01609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,9.810793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,10.14671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,10.00413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,9.859482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,9.853409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,9.944115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,10.03996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,9.80469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,9.767991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,9.913972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,9.786358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,9.469281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,9.538562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,9.859482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,9.731154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,9.626016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,9.613571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,9.632232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,9.56363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,9.657058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,9.258329);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,9.60111);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,9.644653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,9.594874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,9.462958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,9.212961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,9.761861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,9.1543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,9.681819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,9.424928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,10.03996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,9.251861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,9.361202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,9.424928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,9.245389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,9.373982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,9.173895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,9.147758);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,9.251861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,8.848405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,9.290599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,9.173895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,8.949302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,9.009298);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,8.996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,8.902359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,9.075495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,9.271251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,8.868676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,9.271251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,9.167368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,8.855167);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,8.766851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,8.746343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,9.075495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,8.705184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,8.800923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,8.807722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,9.322758);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,8.663829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,8.976016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,8.573542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,8.773676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,8.848405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,8.52453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,8.559567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,8.622276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,8.496396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,8.489348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,8.538562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,8.566558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,8.622276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,8.425651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,8.766851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,8.02541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,8.559567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,8.566558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,8.439847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,8.354306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,8.418543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,8.552571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,8.517505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,8.311205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,8.217045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,8.143873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,8.361468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,8.311205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,8.325597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,8.375773);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,8.165893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,8.180541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,8.54557);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,7.844363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,7.905172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,7.905172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,7.942942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,8.475235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,7.935403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,8.143873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,7.99552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,7.635554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,8.055189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,7.958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,7.965518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,8.099652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,7.973029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,7.905172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,7.927856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,7.890014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,7.890014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,7.775383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,7.859609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,7.790765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,7.821437);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,8.217045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,7.927856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,7.58048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,7.752253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,7.71355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,7.920302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,7.477123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,7.698014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,7.844363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,7.736795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,7.461095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,7.897597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,7.890014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,7.682447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,7.806116);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,7.517044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,7.372317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,7.412803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,7.216402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,7.174809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,7.266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,7.331609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,7.453068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,7.674651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,7.525003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,7.404723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,7.32344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,7.525003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,7.216402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,7.493117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,7.564671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,7.224692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,7.082443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,7.116169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,7.082443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,7.436988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,7.404723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,7.09089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,7.315262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,7.132973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,7.023033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,6.954514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,7.132973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,7.469113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,7.183147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,7.199794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,7.132973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,7.06552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,6.81541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,6.841707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,7.005966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,6.937278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,7.014505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,7.099326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,7.023033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,6.673406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,6.911345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,6.780188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,6.867904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,6.997417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,6.61937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,6.753651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,6.945902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,6.628406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,6.727009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,6.664431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,6.937278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,6.771353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,6.646443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,6.81541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,6.980287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,6.40801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,6.637431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,6.664431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,6.555764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,6.691322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,6.92);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,6.637431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,6.33284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,6.379925);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,6.491535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,6.61937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,6.454546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,6.426665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,6.463813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,6.780188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,6.61937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,6.426665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,6.574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,6.867904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,6.285402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,6.342285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,6.228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,6.256767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,6.3893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,6.583099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,6.04263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,6.40801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,6.426665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,5.727319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,6.256767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,6.351716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,6.266327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,6.361133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,6.237604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,6.417344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,6.04263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,6.208748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,6.101776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,5.972886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,5.972886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,6.247193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,6.228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,5.942745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,5.892168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,6.032716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,5.942745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,6.012839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,6.032716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,6.012839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,6.111579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,6.101776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,5.922566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,6.04263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,5.768973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,6.111579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,5.758588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,5.830896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,5.972886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,5.892168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,5.912451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,5.982899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,5.851391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,5.737761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,5.748184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,5.882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,5.779339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,5.481671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,5.758588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,5.810328);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,5.922566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,5.912451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,5.922566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,5.611177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,5.653687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,5.579082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,5.213016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,5.820621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,5.404693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,5.748184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,5.579082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,5.861612);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,5.292782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,5.47074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,5.514333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,5.514333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,5.727319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,5.49258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,5.404693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,5.448813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,5.201521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,5.292782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,5.568343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,4.990083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,5.448813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,5.382497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,5.47074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,5.737761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,5.337828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,5.611177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,5.47074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,5.737761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,5.292782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,5.201521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,5.224485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,5.270115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,5.24735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,5.270115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,5.415757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,5.292782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,5.448813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,5.061544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,5.002064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,5.108629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,5.426798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,5.096898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,5.393606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,5.270115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,5.23593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,5.073356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,5.315353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,5.201521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,4.941868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,5.448813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,5.073356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,4.978073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,4.929741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,5.061544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,5.02594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,5.085141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,5.073356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,5.049704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,5.155284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,5.213016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,4.905397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,4.642077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,4.966034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,4.893179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,5.085141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,5.155284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,5.049704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,4.693372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,4.794317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,4.693372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,4.953966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,4.844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,5.002064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,4.806786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,5.073356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,4.590209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,4.905397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,4.978073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,4.769281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,4.706109);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,4.905397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,5.061544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,5.014016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,4.616216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,4.680601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,4.806786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,4.498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,4.953966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,4.349153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,4.744113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,4.498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,4.819222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,5.085141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,4.706109);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,4.524537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,4.616216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,4.654954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,4.417432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,4.756714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,4.537747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,4.654954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,4.223468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,4.603231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,4.484673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,4.498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,4.524537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,4.251719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,4.524537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,4.629165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,4.484673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,4.293747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,4.44445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,4.57715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,4.195027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,4.293747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,4.471305);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,4.279784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,4.403861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,4.195027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,70.05966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(3730810);

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
   
   TH1D *VH_tagOnly_Z_mass__59 = new TH1D("VH_tagOnly_Z_mass__59","",1000,0,2000);
   VH_tagOnly_Z_mass__59->SetBinContent(26,8038);
   VH_tagOnly_Z_mass__59->SetBinContent(27,8417);
   VH_tagOnly_Z_mass__59->SetBinContent(28,9063);
   VH_tagOnly_Z_mass__59->SetBinContent(29,9517);
   VH_tagOnly_Z_mass__59->SetBinContent(30,9982);
   VH_tagOnly_Z_mass__59->SetBinContent(61,6618);
   VH_tagOnly_Z_mass__59->SetBinContent(62,6538);
   VH_tagOnly_Z_mass__59->SetBinContent(63,6365);
   VH_tagOnly_Z_mass__59->SetBinContent(64,6324);
   VH_tagOnly_Z_mass__59->SetBinContent(65,6309);
   VH_tagOnly_Z_mass__59->SetBinContent(1000,28);
   VH_tagOnly_Z_mass__59->SetBinContent(1001,15146);
   VH_tagOnly_Z_mass__59->SetEntries(1273960);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__59->SetLineColor(ci);
   VH_tagOnly_Z_mass__59->SetLineWidth(2);
   VH_tagOnly_Z_mass__59->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__59->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__59->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__59->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__59->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__59->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__59->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__59->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__59->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__59->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__59->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__59->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1059[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1059[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 8061.454, 8719.2, 9376.254, 9875.186, 10252.67, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6595.106, 6587.148, 6395.118, 6376.088, 6291.664,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 25.95 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1059[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1059[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5992896, 0.7736795, 2.612243, 5.892168, 9.725001, 14.19444,
   19.0834, 24.49768, 29.21191, 34.08583, 38.75818, 43.10582, 46.80218, 50.23081, 52.81347, 54.9258, 56.95774, 58.45352, 59.56026, 60.02277, 60.49461, 60.59447,
   60.40252, 60.22985, 60.23481, 59.75591, 59.41637, 58.53232, 58.28021, 57.7706, 57.43287, 56.43938, 56.11924, 55.51979, 55.27452, 54.29334, 54.16088, 53.4007,
   53.11635, 52.44954, 51.76488, 51.56909, 50.71468, 50.39262, 50.28917, 49.89843, 48.87304, 48.69389, 48.11764, 47.76931, 47.74048, 47.03946, 46.96942, 46.65743,
   46.30974, 46.1829, 45.56572, 45.29165, 45.18712, 44.77727, 44.57898, 44.23661, 44.00734, 43.58913, 43.60012, 43.38542, 42.6395, 42.58893, 42.57769, 42.13536,
   41.99876, 41.72708, 41.13473, 41.02545, 40.66641, 40.47017, 40.45833, 40.10168, 39.85313, 39.31632, 39.07809, 39.05204, 39.12708, 38.36546, 38.51339, 38.2686,
   38.00334, 38.00491, 37.52306, 37.18333, 36.98318, 36.67763, 36.62537, 36.45336, 36.1781, 36.08865, 36.14003, 35.65983, 35.11005, 35.43587, 35.63128, 34.82417,
   34.98366, 34.70537, 34.54979, 34.26274, 33.85323, 34.07353, 33.87268, 33.6297, 33.59587, 33.64928, 33.55843, 33.08419, 33.18174, 32.92277, 32.81897, 32.61406,
   32.44661, 32.58468, 32.26346, 32.00266, 31.99892, 31.72463, 31.85268, 31.96336, 31.7906, 31.65285, 31.40986, 31.45176, 31.3908, 31.15922, 31.21871, 31.06687,
   31.02638, 30.84838, 30.65373, 30.65373, 30.59117, 30.56181, 30.33179, 30.52654, 30.03232, 30.02235, 30.02036, 29.98445, 29.71775, 29.59868, 29.66534, 29.50956,
   29.7399, 29.34684, 29.50753, 29.59261, 29.33052, 29.30602, 29.20371, 29.00008, 28.88841, 28.72842, 28.58639, 28.9443, 28.40995, 28.74092, 28.26632, 28.73675,
   28.28748, 28.55077, 28.54657, 28.22393, 28.34034, 28.2896, 27.87609, 27.88468, 27.56732, 27.67351, 27.73833, 27.69297, 27.44764, 27.57818, 27.3537, 27.31209,
   27.24187, 27.71242, 27.27481, 27.20009, 27.23088, 26.96137, 26.91026, 26.76305, 26.94805, 26.77199, 26.71828, 26.89914, 26.62852, 26.4707, 26.33012, 26.60153,
   26.51137, 26.12701, 26.46843, 26.3142, 26.21392, 25.87377, 25.96845, 26.08344, 25.91307, 25.79035, 25.83209, 25.72761, 25.85757, 25.61802, 25.58763, 25.33136,
   25.34789, 25.28406, 25.73691, 25.22243, 25.33608, 25.22955, 25.15351, 25.11779, 25.12732, 24.89277, 24.99835, 24.81329, 24.98638, 25.05097, 24.86871, 24.63899,
   24.46345, 24.54406, 24.57087, 24.47812, 24.26938, 24.56356, 24.25211, 24.29649, 24.1507, 23.97907, 23.9366, 23.84389, 23.91158, 23.98407, 23.74831, 23.63714,
   23.55851, 23.80872, 23.51528, 23.62955, 23.50764, 23.43879, 23.49745, 23.01615, 23.01355, 23.2722, 23.1665, 23.37998, 23.06811, 22.99273, 23.0707, 22.92495,
   22.73091, 22.73618, 22.99273, 22.59886, 22.76249, 22.6412, 22.4287, 22.4607, 22.55379, 22.40467, 22.42336, 22.43404, 21.81721, 22.00843, 22.16831, 22.35117,
   22.03833, 22.20878, 21.71271, 21.75127, 21.70995, 21.59938, 21.52165, 21.52721, 21.67408, 21.48267, 21.14567, 21.2783, 21.0492, 21.5661, 21.09181, 21.14284,
   21.28673, 20.88648, 21.33448, 20.98084, 21.20503, 20.90081, 21.02359, 20.89794, 20.74269, 20.69936, 20.78593, 20.59209, 20.58918, 20.46671, 20.69936, 20.56591,
   20.45208, 20.51345, 20.67332, 20.33762, 20.29932, 20.1454, 20.05607, 20.08291, 19.95133, 20.10376, 20.11567, 19.90628, 20.22251, 19.90929, 19.7705, 19.64598,
   19.6612, 19.50532, 19.54517, 19.34818, 19.55436, 19.34199, 19.44692, 19.23026, 19.45616, 19.17414, 19.05515, 19.2831, 18.91642, 18.8435, 19.1991, 18.83397,
   18.90693, 18.94804, 19.1554, 18.89426, 18.55541, 18.67439, 18.78942, 18.55863, 18.69681, 18.58764, 18.35757, 18.53281, 18.44216, 18.30533, 18.21025, 18.29552,
   18.20368, 17.85843, 18.16747, 17.87183, 17.83159, 18.3282, 18.0186, 17.8148, 18.03188, 17.82152, 17.55076, 17.58824, 17.63921, 17.68327, 17.51662, 17.51321,
   17.31038, 17.46529, 17.24108, 17.10864, 16.99279, 17.15057, 17.04204, 17.14359, 17.1715, 16.97517, 16.91512, 16.74797, 16.69786, 17.19589, 17.17847, 16.69786,
   16.84775, 16.45593, 16.88324, 16.608, 16.70145, 16.72294, 16.43409, 16.68352, 16.3501, 16.78724, 16.44137, 16.09923, 16.31712, 16.47411, 16.37936, 16.43045,
   16.21039, 15.93104, 16.21039, 16.34644, 16.1549, 16.21408, 15.7116, 16.07318, 16.00227, 15.57384, 15.9873, 15.70398, 15.59689, 15.8406, 15.53536, 15.67346,
   15.39992, 15.63522, 15.49292, 15.29069, 15.32198, 15.01018, 15.43486, 15.32979, 15.11747, 15.15306, 15.3415, 14.99023, 15.15701, 15.06591, 14.99023, 14.91015,
   14.97425, 14.86995, 14.91818, 14.75681, 14.90212, 14.70805, 14.67546, 14.76086, 14.46181, 14.52788, 14.74057, 14.67546, 14.72839, 14.28272, 14.51964, 14.15643,
   14.51139, 14.35796, 14.41621, 13.98628, 14.08012, 14.13104, 13.96057, 14.02474, 13.95629, 14.52788, 14.19865, 14.05459, 13.71837, 13.97771, 13.86161, 13.70527,
   13.84865, 13.79668, 13.58243, 13.65714, 13.74888, 13.56038, 13.37369, 14.0418, 13.60884, 13.54713, 13.37817, 13.37817, 13.36922, 13.34233, 13.494, 13.0107,
   13.2523, 13.35578, 13.22969, 13.08411, 13.37369, 13.30189, 13.13889, 13.0015, 13.08868, 12.90909, 13.17074, 13.16165, 12.79265, 12.72697, 13.0658, 12.90445,
   12.90909, 12.81602, 12.456, 12.71285, 12.83002, 12.63255, 12.49439, 12.31585, 12.75985, 12.71285, 12.58984, 12.40785, 12.13962, 12.16917, 12.19374, 12.49439,
   12.34498, 12.23295, 12.60884, 12.13962, 12.62782, 11.99578, 12.33528, 12.32557, 11.98579, 12.16917, 11.8249, 11.9808, 12.31585, 12.16425, 11.71812, 12.10011,
   12.03563, 11.65666, 11.57937, 11.76909, 11.86028, 11.75382, 11.67718, 11.67205, 11.47552, 11.56386, 11.72322, 11.58971, 11.75382, 11.44941, 11.23834, 11.56386,
   11.31267, 11.37072, 11.56386, 11.19031, 11.45986, 11.29678, 11.23834, 10.94148, 11.34437, 11.1528, 11.24899, 11.02867, 11.45464, 11.10978, 11.26494, 11.08821,
   10.88664, 11.10439, 10.65882, 11.12055, 10.86462, 10.70924, 10.95788, 10.87013, 10.55725, 10.85911, 10.94148, 10.83704, 10.76499, 11.1528, 10.69246, 10.57991,
   10.95242, 10.36846, 10.63633, 10.46042, 10.80939, 10.33955, 10.4947, 10.33955, 10.64196, 10.63071, 10.72042, 10.5118, 10.47186, 10.2114, 9.992154, 10.33955,
   10.01011, 10.24066, 10.09348, 10.36846, 10.29895, 10.15261, 9.920008, 10.55158, 10.2815, 9.932068, 10.14671, 9.901889, 10.24651, 10.01609, 9.810793, 10.14671,
   10.00413, 9.859482, 9.853409, 9.944115, 10.03996, 9.80469, 9.767991, 9.913972, 9.786358, 9.469281, 9.538562, 9.859482, 9.731154, 9.626016, 9.613571, 9.632232,
   9.56363, 9.657058, 9.258329, 9.60111, 9.644653, 9.594874, 9.462958, 9.212961, 9.761861, 9.1543, 9.681819, 9.424928, 10.03996, 9.251861, 9.361202, 9.424928,
   9.245389, 9.373982, 9.173895, 9.147758, 9.251861, 8.848405, 9.290599, 9.173895, 8.949302, 9.009298, 8.996, 8.902359, 9.075495, 9.271251, 8.868676, 9.271251,
   9.167368, 8.855167, 8.766851, 8.746343, 9.075495, 8.705184, 8.800923, 8.807722, 9.322758, 8.663829, 8.976016, 8.573542, 8.773676, 8.848405, 8.52453, 8.559567,
   8.622276, 8.496396, 8.489348, 8.538562, 8.566558, 8.622276, 8.425651, 8.766851, 8.02541, 8.559567, 8.566558, 8.439847, 8.354306, 8.418543, 8.552571, 8.517505,
   8.311205, 8.217045, 8.143873, 8.361468, 8.311205, 8.325597, 8.375773, 8.165893, 8.180541, 8.54557, 7.844363, 7.905172, 7.905172, 7.942942, 8.475235, 7.935403,
   8.143873, 7.99552, 7.635554, 8.055189, 7.958, 7.965518, 8.099652, 7.973029, 7.905172, 7.927856, 7.890014, 7.890014, 7.775383, 7.859609, 7.790765, 7.821437,
   8.217045, 7.927856, 7.58048, 7.752253, 7.71355, 7.920302, 7.477123, 7.698014, 7.844363, 7.736795, 7.461095, 7.897597, 7.890014, 7.682447, 7.806116, 7.517044,
   7.372317, 7.412803, 7.216402, 7.174809, 7.266, 7.331609, 7.453068, 7.674651, 7.525003, 7.404723, 7.32344, 7.525003, 7.216402, 7.493117, 7.564671, 7.224692,
   7.082443, 7.116169, 7.082443, 7.436988, 7.404723, 7.09089, 7.315262, 7.132973, 7.023033, 6.954514, 7.132973, 7.469113, 7.183147, 7.199794, 7.132973, 7.06552,
   6.81541, 6.841707, 7.005966, 6.937278, 7.014505, 7.099326, 7.023033, 6.673406, 6.911345, 6.780188, 6.867904, 6.997417, 6.61937, 6.753651, 6.945902, 6.628406,
   6.727009, 6.664431, 6.937278, 6.771353, 6.646443, 6.81541, 6.980287, 6.40801, 6.637431, 6.664431, 6.555764, 6.691322, 6.92, 6.637431, 6.33284, 6.379925,
   6.491535, 6.61937, 6.454546, 6.426665, 6.463813, 6.780188, 6.61937, 6.426665, 6.574, 6.867904, 6.285402, 6.342285, 6.228, 6.256767, 6.3893, 6.583099,
   6.04263, 6.40801, 6.426665, 5.727319, 6.256767, 6.351716, 6.266327, 6.361133, 6.237604, 6.417344, 6.04263, 6.208748, 6.101776, 5.972886, 5.972886, 6.247193,
   6.228, 5.942745, 5.892168, 6.032716, 5.942745, 6.012839, 6.032716, 6.012839, 6.111579, 6.101776, 5.922566, 6.04263, 5.768973, 6.111579, 5.758588, 5.830896,
   5.972886, 5.892168, 5.912451, 5.982899, 5.851391, 5.737761, 5.748184, 5.882, 5.779339, 5.481671, 5.758588, 5.810328, 5.922566, 5.912451, 5.922566, 5.611177,
   5.653687, 5.579082, 5.213016, 5.820621, 5.404693, 5.748184, 5.579082, 5.861612, 5.292782, 5.47074, 5.514333, 5.514333, 5.727319, 5.49258, 5.404693, 5.448813,
   5.201521, 5.292782, 5.568343, 4.990083, 5.448813, 5.382497, 5.47074, 5.737761, 5.337828, 5.611177, 5.47074, 5.737761, 5.292782, 5.201521, 5.224485, 5.270115,
   5.24735, 5.270115, 5.415757, 5.292782, 5.448813, 5.061544, 5.002064, 5.108629, 5.426798, 5.096898, 5.393606, 5.270115, 5.23593, 5.073356, 5.315353, 5.201521,
   4.941868, 5.448813, 5.073356, 4.978073, 4.929741, 5.061544, 5.02594, 5.085141, 5.073356, 5.049704, 5.155284, 5.213016, 4.905397, 4.642077, 4.966034, 4.893179,
   5.085141, 5.155284, 5.049704, 4.693372, 4.794317, 4.693372, 4.953966, 4.844, 5.002064, 4.806786, 5.073356, 4.590209, 4.905397, 4.978073, 4.769281, 4.706109,
   4.905397, 5.061544, 5.014016, 4.616216, 4.680601, 4.806786, 4.498, 4.953966, 4.349153, 4.744113, 4.498, 4.819222, 5.085141, 4.706109, 4.524537, 4.616216,
   4.654954, 4.417432, 4.756714, 4.537747, 4.654954, 4.223468, 4.603231, 4.484673, 4.498, 4.524537, 4.251719, 4.524537, 4.629165, 4.484673, 4.293747, 4.44445,
   4.57715, 4.195027, 4.293747, 4.471305, 4.279784, 4.403861, 4.195027 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1059,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1059,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1059,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1059);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->SetMinimum(-1097.877);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->SetMaximum(11349.51);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1059);
   
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
   
   TH1D *data_mc_ratio__60 = new TH1D("data_mc_ratio__60","",1000,0,2000);
   data_mc_ratio__60->SetBinContent(26,0.9970906);
   data_mc_ratio__60->SetBinContent(27,0.9653409);
   data_mc_ratio__60->SetBinContent(28,0.9665907);
   data_mc_ratio__60->SetBinContent(29,0.9637287);
   data_mc_ratio__60->SetBinContent(30,0.9735999);
   data_mc_ratio__60->SetBinContent(61,1.003471);
   data_mc_ratio__60->SetBinContent(62,0.9925388);
   data_mc_ratio__60->SetBinContent(63,0.9952905);
   data_mc_ratio__60->SetBinContent(64,0.9918307);
   data_mc_ratio__60->SetBinContent(65,1.002755);
   data_mc_ratio__60->SetBinContent(1000,1.078998);
   data_mc_ratio__60->SetBinContent(1001,1.067672);
   data_mc_ratio__60->SetBinError(26,0.01112143);
   data_mc_ratio__60->SetBinError(27,0.01052209);
   data_mc_ratio__60->SetBinError(28,0.01015329);
   data_mc_ratio__60->SetBinError(29,0.009878813);
   data_mc_ratio__60->SetBinError(30,0.009744773);
   data_mc_ratio__60->SetBinError(61,0.01233507);
   data_mc_ratio__60->SetBinError(62,0.0122751);
   data_mc_ratio__60->SetBinError(63,0.01247529);
   data_mc_ratio__60->SetBinError(64,0.01247216);
   data_mc_ratio__60->SetBinError(65,0.01262452);
   data_mc_ratio__60->SetBinError(1000,0.2039115);
   data_mc_ratio__60->SetBinError(1001,0.01015211);
   data_mc_ratio__60->SetMinimum(0.4);
   data_mc_ratio__60->SetMaximum(1.6);
   data_mc_ratio__60->SetEntries(1620.137);
   data_mc_ratio__60->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__60->SetLineColor(ci);
   data_mc_ratio__60->SetLineWidth(2);
   data_mc_ratio__60->SetMarkerStyle(20);
   data_mc_ratio__60->SetMarkerSize(1.2);
   data_mc_ratio__60->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__60->GetXaxis()->SetRange(1,150);
   data_mc_ratio__60->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__60->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__60->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__60->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__60->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__60->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__60->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__60->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__60->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__60->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1060[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1060[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1060[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1060[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.006551358, 0.006299408, 0.006074679, 0.005919233, 0.005809243, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007243145, 0.007247519, 0.007355527, 0.007366495, 0.007415754,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1616581 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1060,Graph_from_mc_statistical_error_fy1060,Graph_from_mc_statistical_error_fex1060,Graph_from_mc_statistical_error_fey1060);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1060 = new TH1F("Graph_Graph_from_mc_statistical_error1060","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1060->SetMinimum(0.8060103);
   Graph_Graph_from_mc_statistical_error1060->SetMaximum(1.19399);
   Graph_Graph_from_mc_statistical_error1060->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1060->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1060->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1060->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1060->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1060->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1060->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1060->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1060);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_17->cd();
   Z_mass_tagOnly_VR_17->Modified();
   Z_mass_tagOnly_VR_17->cd();
   Z_mass_tagOnly_VR_17->SetSelected(Z_mass_tagOnly_VR_17);
}
