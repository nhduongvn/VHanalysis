#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Fri Jan 26 12:50:33 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_18 = new TCanvas("H_mass_tagFirst_VR_18", "H_mass_tagFirst_VR_18",0,0,600,600);
   H_mass_tagFirst_VR_18->SetHighLightColor(2);
   H_mass_tagFirst_VR_18->Range(0,0,1,1);
   H_mass_tagFirst_VR_18->SetFillColor(0);
   H_mass_tagFirst_VR_18->SetFillStyle(4000);
   H_mass_tagFirst_VR_18->SetBorderMode(0);
   H_mass_tagFirst_VR_18->SetBorderSize(2);
   H_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-38.29181,315.7258,38263.51);
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
   st->SetMaximum(34433.33);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",1000,0,2000);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(34433.33);
   st_stack_19->SetDirectory(nullptr);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->SetLineWidth(0);
   st_stack_19->GetXaxis()->SetRange(1,150);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,6165.713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,12443.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,12237.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,12086.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,11989.15);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,5931.175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,4901.354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,9492.254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,9567.295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,9437.791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,9411.812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,4693.388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,42.31741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19101.87);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(5,0.06047257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(7,0.06598141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(8,0.07062799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.09185235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.0955803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6373798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,2.974453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.930059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.09978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.49272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,28.23295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,35.81993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,42.30964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,49.31074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,55.61656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,61.43488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,65.89723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,70.27795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,73.32968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,76.47661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,78.17265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,79.79674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,81.20372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,82.32214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,82.93515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,83.77183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,83.41642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,83.61099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.85265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,83.21463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,83.28524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,83.73303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,83.01726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,82.5018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,83.00095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,82.79978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,81.27776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,80.87922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,80.86808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,80.33807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,80.15002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,79.40631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.8758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.96719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.53367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.44805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,77.64362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.22071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,77.52675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.15299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,76.86984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,76.92788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,76.66836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,75.78086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.30032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,75.3712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,75.27624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,74.91542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,74.58928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,74.86985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,74.51881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,74.47568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,73.98433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,73.72644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,73.44547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,73.12583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,73.92003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.24322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,72.63441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,72.52211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.19435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,71.50588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.21618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,70.55585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,70.89102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,70.47523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,70.57878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.22122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,69.70054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,69.37104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,68.72707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,68.97254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.02596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.30801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.11103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.44436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,67.74369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,67.76096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,67.08691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,66.83096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,66.70586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,66.59343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.14266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,66.24731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,66.10379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,65.87388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,65.27495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,65.11248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,65.32139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,65.06244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,64.86162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,64.42737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,64.32438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,64.02466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,63.72812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,64.08464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,64.10145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,63.18835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.39533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,63.84744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,63.55133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,62.59219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,62.64167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,67.53911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,62.47116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,62.76484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,62.21832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,62.87601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.0092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.14885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,61.6008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,61.11418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,60.7154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.84833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,60.65505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.24432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,60.91776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,60.05363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,60.34381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,61.25265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,60.00292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,59.7412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,59.79938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,59.99809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,59.74527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,59.57145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,59.15813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,59.28516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,59.31627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,58.75638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,59.03489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,58.7557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,59.24338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,58.61009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,58.58226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.33389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.42418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,57.36048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.64248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,58.61146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,57.71776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,57.71823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,57.4994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,56.97035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,57.10973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.58815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,56.56766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,57.073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,56.76889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,56.56384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,56.58381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,56.38095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,56.34571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,55.90021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,55.97935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.10451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,55.52331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.27851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,55.01626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,55.37468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,55.73337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.20803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,54.83874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,54.769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,54.50342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,54.28651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,54.47089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,54.66697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.04814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.20384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.1635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,53.80089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,53.91104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,53.23067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.69672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.2317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.35398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.55926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,52.70433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,52.80157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.72399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.48667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.49836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.2778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,52.29713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.16281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.94368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.89256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,51.5093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.25717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.07216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.46314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.54829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.51688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,51.53392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.58943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.70631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.60885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,50.55401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,50.59327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,50.48343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,50.61559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.5004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,50.24673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,49.81058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,49.65614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.08951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,50.7763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,57.86819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,49.19013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,49.53348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,48.76487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.07667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,48.68876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,48.41909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,50.12331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,48.44172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,48.64735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,48.16041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,48.1042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,47.46144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,47.56892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,47.97554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,47.07401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,47.5151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,47.3827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,46.88984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,47.61623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,46.92515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,46.99413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,46.45587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,46.17563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,46.66244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,46.26411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.01426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,46.68617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,46.35739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,45.667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,45.74223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,46.90188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,45.80066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,45.40463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.70608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.38945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,45.18205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,44.93549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,44.34172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,44.56228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,44.56662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,44.57764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,44.52151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.00062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.21013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,44.76839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,43.91194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,43.35208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,43.60613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,43.78278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,50.14746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,43.58789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.34331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,42.78875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,43.20803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,42.7242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,43.80191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,42.99922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,42.60037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.39621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,42.14155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,41.98927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.04795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.10052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,41.6921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,41.62284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,41.7389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,41.23719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,41.51676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.02026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,40.88306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,41.34193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,40.11622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,40.45702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,42.96283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,40.16046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,40.42555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,40.23803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.05724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,39.6545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,39.79514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,39.57163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,39.77244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,39.60848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,39.33736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,39.16817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,39.51992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,38.86441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.29106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.02885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,38.98659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,38.94436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,38.66363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,38.32966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,38.39144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.10133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.58134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,37.93027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,37.96013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,37.64167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.12669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,37.38588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.3661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.25302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.52216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,37.10786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.04591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,36.95034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,36.88707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,36.27445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,36.55058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.00793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.46456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,35.18509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,36.28623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,35.75582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,35.56394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,35.65191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,35.58114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.17876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,35.21511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,35.47512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,35.45442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.11583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,35.15851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.0571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,36.21613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,34.82853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,34.36912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.13208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,34.3553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,34.39042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,35.228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,34.23093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,33.72979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,33.82581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,33.77415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.50238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,33.71051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,33.7634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.25616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.08281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.11839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,32.86483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.09941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,32.67694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,32.81987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,32.86574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,32.32433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,32.62678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.14546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,32.52591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.31828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.16868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.12439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,31.80423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,31.59312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,31.84413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,31.53104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,52.50837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.14999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,31.15636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.16192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,30.83958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.10581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,30.86678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,30.57857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,30.78698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,31.13831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,30.43301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,30.48475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,30.3363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,37.37775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,33.223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,29.86675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,29.88464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,29.53965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.06993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,29.75008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,29.51818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,29.71449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,29.70625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,29.68995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.02733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,28.88545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,28.94606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.18127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.11133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.29457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,28.71936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,28.7805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,28.67765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,28.41428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,28.5239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,28.26696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.30237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,28.58871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.17878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,27.95468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,27.41142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,27.87232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,29.31298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,27.53725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,27.6817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,27.43613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,26.8475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,26.89625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,27.41026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,26.84723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.36942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.04357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,26.61873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.25932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.13383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.34369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,26.38875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,26.37968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,26.34751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,26.39234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.22415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.08825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,25.67774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.01433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,25.90892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,25.93976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,25.83815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,25.83391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,25.65623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.31983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.42074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.5354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,24.8259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.11503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,25.45191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,24.46847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,25.82794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,24.93173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.01353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,24.71746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,24.76635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,24.7974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,24.64825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.22403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,24.84792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,23.96932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.11988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.19895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,23.99359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.15434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,23.96754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.52222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,23.68603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,23.88602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,23.48858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,23.79633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,23.64598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,23.35487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.21167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,23.39096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,23.58023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.00412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.06442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.2474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.12562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.0148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,22.95339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,22.71655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,22.81258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,22.91198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,22.58742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,22.84989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,22.74706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,22.73099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.40275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.06591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,22.27353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.13022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.17034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,21.90359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.30301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,21.55201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.43006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,21.49825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,21.53096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,21.46207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,21.70782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,21.44608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.20521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,21.6007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.12305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.85989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,20.95869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,20.82535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,20.7321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.05353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,20.58738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.12421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,20.77856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,20.85538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.16612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,20.6371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,20.6486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,20.45648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.20251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,20.36121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.43039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.39454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.08203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.12677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,20.34565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.04262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.28014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.45256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,19.83884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.7311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,19.87876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,19.80299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.46467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,19.52712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,19.72974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,19.71669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.39679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.25244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,19.50892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.14207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.24115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.26823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.17815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,18.77188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,19.70424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,18.9387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.36691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,18.59403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,18.76258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,18.80766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.01131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.36833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,18.89304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,18.75836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.1781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,18.55847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,18.63849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,17.86734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,17.9942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.30105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.10654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.32271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,18.38159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,19.27464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,17.80591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,17.70874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,17.54847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,17.45251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.30672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.3687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.22022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,17.53223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.29231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.42609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,17.75352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.23072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.47122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.21303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.28695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.0012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.0306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,16.88932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.28617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.17479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.17616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.18897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,16.78639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,16.84548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,16.87295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,16.9432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,17.27857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.43256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.56016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,16.70462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,16.62378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.70988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.18214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.47348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.03317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.41003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,15.99098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.15246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,15.98495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.11938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.09471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.09611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,15.66717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,15.63989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.03506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,15.62118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,15.53089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,15.71104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,15.86906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,15.65601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,15.71803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.39252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,15.71473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,15.59747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.37108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.59733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.37211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.20458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.16903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.19986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,14.90415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,15.77107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.06537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,14.9937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,14.9127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,14.92044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,14.92309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,14.71818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.21079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.54683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,14.76499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.02605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,14.65764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,14.85233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.37124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,14.58671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.29107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,14.58733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.32321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.22662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.04014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.24052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.32828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.28539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.15128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.64975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.20503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.19724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,13.92276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,13.96456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,13.88735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.64015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,13.83613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,13.78796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,13.73579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,13.61249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,13.98885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.5946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,13.68935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,13.87733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,13.95471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,13.62079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,13.8719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.32741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.51714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.32517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.34244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.52213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.32751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.19839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.30028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,13.56998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.02911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.03224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.21846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.10782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.12296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,12.91309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,12.83264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,12.80504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.00188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,12.59271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,12.9542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,12.84237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,12.69981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.02084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,12.62545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,12.93024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.55629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,12.82748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.49644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.43706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,12.77241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.30101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.42492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.42038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,12.78692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.55434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.36122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.3259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,12.65501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.38005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.21405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,12.6967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.49095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.24215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.07962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,11.61973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.13827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.14925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,11.71763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.2042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,11.69855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.09774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,11.69141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,11.73238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.39768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,11.65702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.10267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,11.67529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,11.72045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.58117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.17459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.01362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,11.91925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,11.67604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.53441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.36046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.1428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.41478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.29215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.25806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.49566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,10.92585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.35696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.13394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.37098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.33614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,10.91951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.26028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.33122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.18431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.07026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.34827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.22244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,10.74207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,10.80063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,10.9603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.22035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,10.76794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.57988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,10.78263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.57437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.38216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.35505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.54424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.61339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.49288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,10.84093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.52615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,10.75439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,10.85114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.19131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.0097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.61658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.76604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.33584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.28292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,11.00797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,9.971969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.34926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.33703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.26812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.34501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.33002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.14752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.2792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.08901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.665976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,9.895153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.18236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,9.902293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,9.939702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,9.710233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.602064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,9.947098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,9.825053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.17262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.02035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.345759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.43218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,9.899382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,9.855574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,9.822464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,9.731754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.633005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,9.666625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.522739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.603583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.335058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.468475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.309352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,9.674791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.31608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.493736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.320153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.154806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.383145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.522617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.471961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.487152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.296165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.34146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.350181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.670501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.157342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.264394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.030148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,8.993731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,8.883483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.286866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.206623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.66263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,8.942303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.061526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.133779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.161461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.254689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.066191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.233443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.629366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,8.966331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.443254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.875271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,8.784226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,8.84562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.503682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.600211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.020692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.151237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,8.866607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.435972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.596654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.586643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,8.802381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.574096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.109012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.334119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.216841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.145286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.5096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.157901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,8.809179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.407794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.261723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,8.772349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.297482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.220743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.287514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.18712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.094956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.67476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.019187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.130483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.198419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.266253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.116052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.179195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.090712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.200845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.015092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.568286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.19083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,7.749803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.001984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.527896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.793687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,7.753658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.687012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.58961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,7.979449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.784132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,7.915276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.411082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.768218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,7.783626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.427401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,7.962704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,7.700979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,7.949271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,7.703972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,7.870887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.521119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.685703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.281371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.6434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.200211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.395233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.556778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.31849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.261215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.671442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.337626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.344305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.530952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.318923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.460607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.501451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.340182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.31733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.397222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.475684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.495927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.589005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.279488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.239379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.090711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.033027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.913192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.160469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.011198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.033718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.197819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.902817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.929486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.203404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.036926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.984584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.053276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.182757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.277261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.852722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.863093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.133409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.104263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,6.923082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.565344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,6.833549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.781295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.073891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,6.761637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,6.751124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.667836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.630757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.532827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,6.917118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.454494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.685875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,6.933326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.469933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,6.866249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,6.890133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,6.932554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.234949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.992872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,6.779059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.301118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.087224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.634097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.432204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.447994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.131546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.608729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.976325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.976804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.859394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.80866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.453081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.239769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.624747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.405176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,6.813129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.51432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.058829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.648366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.491588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.176354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.495712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.23185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.238163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.524691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,5.900141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.239774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.133187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.055404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,95.7151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(4401412);

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
   
   TH1D *VH_tagFirst_H_mass__37 = new TH1D("VH_tagFirst_H_mass__37","",1000,0,2000);
   VH_tagFirst_H_mass__37->SetBinContent(43,7726);
   VH_tagFirst_H_mass__37->SetBinContent(44,15495);
   VH_tagFirst_H_mass__37->SetBinContent(45,15313);
   VH_tagFirst_H_mass__37->SetBinContent(46,15116);
   VH_tagFirst_H_mass__37->SetBinContent(47,15023);
   VH_tagFirst_H_mass__37->SetBinContent(48,7407);
   VH_tagFirst_H_mass__37->SetBinContent(78,6045);
   VH_tagFirst_H_mass__37->SetBinContent(79,11919);
   VH_tagFirst_H_mass__37->SetBinContent(80,11878);
   VH_tagFirst_H_mass__37->SetBinContent(81,11691);
   VH_tagFirst_H_mass__37->SetBinContent(82,11642);
   VH_tagFirst_H_mass__37->SetBinContent(83,5854);
   VH_tagFirst_H_mass__37->SetBinContent(1000,55);
   VH_tagFirst_H_mass__37->SetBinContent(1001,24026);
   VH_tagFirst_H_mass__37->SetEntries(3123535);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__37->SetLineColor(ci);
   VH_tagFirst_H_mass__37->SetLineWidth(2);
   VH_tagFirst_H_mass__37->SetMarkerStyle(20);
   VH_tagFirst_H_mass__37->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__37->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__37->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__37->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__37->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1037[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1037[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 6165.713, 12443.53, 12237.26, 12086.59, 11989.15, 5931.175, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4901.354, 9492.254, 9567.295, 9437.791,
   9411.812, 4693.388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 42.31741 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1037[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1037[1000] = { 0, 0, 0, 0, 0.06047257, 0, 0.06598141, 0.07062799, 0.09185235, 0.0955803, 0.6373798, 2.974453, 7.930059, 14.09978, 21.49272, 28.23295, 35.81993,
   42.30964, 49.31074, 55.61656, 61.43488, 65.89723, 70.27795, 73.32968, 76.47661, 78.17265, 79.79674, 81.20372, 82.32214, 82.93515, 83.77183, 83.41642, 83.61099,
   83.85265, 83.21463, 83.28524, 83.73303, 83.01726, 82.5018, 83.00095, 82.79978, 81.27776, 80.87922, 80.86808, 80.33807, 80.15002, 79.40631, 78.8758, 78.96719,
   78.53367, 78.44805, 77.64362, 77.22071, 77.52675, 77.15299, 76.86984, 76.92788, 76.66836, 75.78086, 76.30032, 75.3712, 75.27624, 74.91542, 74.58928, 74.86985,
   74.51881, 74.47568, 73.98433, 73.72644, 73.44547, 73.12583, 73.92003, 73.24322, 72.63441, 72.52211, 72.19435, 71.50588, 72.21618, 70.55585, 70.89102, 70.47523,
   70.57878, 70.22122, 69.70054, 69.37104, 68.72707, 68.97254, 69.02596, 69.30801, 69.11103, 68.44436, 67.74369, 67.76096, 67.08691, 66.83096, 66.70586, 66.59343,
   67.14266, 66.24731, 66.10379, 65.87388, 65.27495, 65.11248, 65.32139, 65.06244, 64.86162, 64.42737, 64.32438, 64.02466, 63.72812, 64.08464, 64.10145, 63.18835,
   64.39533, 63.84744, 63.55133, 62.59219, 62.64167, 67.53911, 62.47116, 62.76484, 62.21832, 62.87601, 62.0092, 63.14885, 61.6008, 61.11418, 60.7154, 63.84833,
   60.65505, 61.24432, 60.91776, 60.05363, 60.34381, 61.25265, 60.00292, 59.7412, 59.79938, 59.99809, 59.74527, 59.57145, 59.15813, 59.28516, 59.31627, 58.75638,
   59.03489, 58.7557, 59.24338, 58.61009, 58.58226, 59.33389, 58.42418, 57.36048, 58.64248, 58.61146, 57.71776, 57.71823, 57.4994, 56.97035, 57.10973, 57.58815,
   56.56766, 57.073, 56.76889, 56.56384, 56.58381, 56.38095, 56.34571, 55.90021, 55.97935, 56.10451, 55.52331, 56.27851, 55.01626, 55.37468, 55.73337, 55.20803,
   54.83874, 54.769, 54.50342, 54.28651, 54.47089, 54.66697, 54.04814, 54.20384, 54.1635, 53.80089, 53.91104, 53.23067, 53.69672, 53.2317, 53.35398, 53.55926,
   52.70433, 52.80157, 52.72399, 52.48667, 52.49836, 52.2778, 52.29713, 52.16281, 51.94368, 51.89256, 51.5093, 51.25717, 51.07216, 51.46314, 51.54829, 51.51688,
   51.53392, 50.58943, 50.70631, 50.60885, 50.55401, 50.59327, 50.48343, 50.61559, 49.5004, 50.24673, 49.81058, 49.65614, 50.08951, 50.7763, 57.86819, 49.19013,
   49.53348, 48.76487, 49.07667, 48.68876, 48.41909, 50.12331, 48.44172, 48.64735, 48.16041, 48.1042, 47.46144, 47.56892, 47.97554, 47.07401, 47.5151, 47.3827,
   46.88984, 47.61623, 46.92515, 46.99413, 46.45587, 46.17563, 46.66244, 46.26411, 46.01426, 46.68617, 46.35739, 45.667, 45.74223, 46.90188, 45.80066, 45.40463,
   45.70608, 45.38945, 45.18205, 44.93549, 44.34172, 44.56228, 44.56662, 44.57764, 44.52151, 45.00062, 44.21013, 44.76839, 43.91194, 43.35208, 43.60613, 43.78278,
   50.14746, 43.58789, 43.34331, 42.78875, 43.20803, 42.7242, 43.80191, 42.99922, 42.60037, 43.39621, 42.14155, 41.98927, 42.04795, 42.10052, 41.6921, 41.62284,
   41.7389, 41.23719, 41.51676, 41.02026, 40.88306, 41.34193, 40.11622, 40.45702, 42.96283, 40.16046, 40.42555, 40.23803, 41.05724, 39.6545, 39.79514, 39.57163,
   39.77244, 39.60848, 39.33736, 39.16817, 39.51992, 38.86441, 39.29106, 39.02885, 38.98659, 38.94436, 38.66363, 38.32966, 38.39144, 38.10133, 38.58134, 37.93027,
   37.96013, 37.64167, 38.12669, 37.38588, 37.3661, 37.25302, 37.52216, 37.10786, 37.04591, 37.564, 36.95034, 36.88707, 36.27445, 36.55058, 36.00793, 36.46456,
   35.18509, 36.28623, 35.75582, 35.56394, 35.65191, 35.58114, 35.17876, 35.21511, 35.47512, 35.45442, 35.11583, 35.15851, 35.0571, 36.21613, 34.82853, 34.36912,
   34.13208, 34.3553, 34.39042, 35.228, 34.23093, 33.72979, 33.82581, 33.77415, 34.50238, 33.71051, 33.7634, 33.25616, 33.08281, 33.11839, 32.86483, 33.09941,
   32.67694, 32.81987, 32.86574, 32.32433, 32.62678, 32.14546, 32.52591, 32.31828, 32.16868, 32.12439, 31.80423, 31.59312, 31.84413, 31.53104, 52.50837, 31.14999,
   31.15636, 31.16192, 30.83958, 31.10581, 30.86678, 30.57857, 30.78698, 31.13831, 30.43301, 30.48475, 30.3363, 37.37775, 33.223, 29.86675, 29.88464, 29.53965,
   30.06993, 29.75008, 29.51818, 29.71449, 29.70625, 29.68995, 29.02733, 28.88545, 28.94606, 29.18127, 29.11133, 29.29457, 28.71936, 28.7805, 28.67765, 28.41428,
   28.5239, 28.26696, 28.30237, 28.58871, 28.17878, 27.95468, 27.41142, 27.87232, 29.31298, 27.53725, 27.6817, 27.43613, 26.8475, 26.89625, 27.41026, 26.84723,
   27.36942, 27.04357, 26.61873, 27.25932, 27.13383, 26.34369, 26.38875, 26.37968, 26.34751, 26.39234, 26.22415, 26.08825, 25.67774, 26.01433, 25.90892, 25.93976,
   25.83815, 25.83391, 25.65623, 25.31983, 25.42074, 25.5354, 24.8259, 25.11503, 25.45191, 24.46847, 25.82794, 24.93173, 25.01353, 24.71746, 24.76635, 24.7974,
   24.64825, 24.22403, 24.84792, 23.96932, 24.11988, 24.19895, 23.99359, 24.15434, 23.96754, 23.52222, 23.68603, 23.88602, 23.48858, 23.79633, 23.64598, 23.35487,
   23.21167, 23.39096, 23.58023, 23.00412, 23.06442, 23.2474, 23.12562, 23.0148, 22.95339, 22.71655, 22.81258, 22.91198, 22.58742, 22.84989, 22.74706, 22.73099,
   22.40275, 22.06591, 22.27353, 22.13022, 22.17034, 21.90359, 22.30301, 21.55201, 22.43006, 21.49825, 21.53096, 21.46207, 21.70782, 21.44608, 21.20521, 21.6007,
   21.12305, 21.85989, 20.95869, 20.82535, 20.7321, 21.05353, 20.58738, 21.12421, 20.77856, 20.85538, 20.16612, 20.6371, 20.6486, 20.45648, 20.20251, 20.36121,
   20.43039, 20.39454, 20.08203, 20.12677, 20.34565, 20.04262, 20.28014, 20.45256, 19.83884, 20.7311, 19.87876, 19.80299, 19.46467, 19.52712, 19.72974, 19.71669,
   19.39679, 19.25244, 19.50892, 19.14207, 19.24115, 19.26823, 19.17815, 18.77188, 19.70424, 18.9387, 18.36691, 18.59403, 18.76258, 18.80766, 19.01131, 18.36833,
   18.89304, 18.75836, 18.1781, 18.55847, 18.021, 18.63849, 17.86734, 17.9942, 18.30105, 18.10654, 18.32271, 18.38159, 19.27464, 17.80591, 17.70874, 17.54847,
   17.45251, 17.30672, 17.3687, 17.22022, 17.53223, 17.29231, 17.42609, 17.75352, 17.23072, 17.47122, 17.21303, 17.28695, 17.0012, 17.0306, 16.88932, 17.28617,
   17.17479, 17.17616, 17.18897, 16.78639, 16.84548, 16.87295, 16.9432, 17.27857, 16.43256, 16.56016, 16.70462, 16.62378, 16.70988, 16.18214, 16.47348, 16.03317,
   16.41003, 15.99098, 16.15246, 15.98495, 16.11938, 16.09471, 16.09611, 15.66717, 15.63989, 16.03506, 15.62118, 15.53089, 15.71104, 15.86906, 15.65601, 15.71803,
   15.39252, 15.71473, 15.59747, 15.37108, 15.59733, 15.37211, 15.20458, 15.16903, 15.19986, 14.90415, 15.77107, 15.06537, 14.9937, 14.9127, 14.92044, 14.92309,
   14.71818, 15.21079, 14.54683, 14.76499, 15.02605, 14.65764, 14.85233, 14.37124, 14.58671, 14.29107, 14.58733, 14.32321, 14.22662, 14.04014, 14.24052, 14.32828,
   14.28539, 14.15128, 14.64975, 14.20503, 14.19724, 13.92276, 13.96456, 13.88735, 13.64015, 13.83613, 13.78796, 13.73579, 13.61249, 13.98885, 13.5946, 13.68935,
   13.87733, 13.95471, 13.62079, 13.8719, 13.32741, 13.51714, 13.32517, 13.34244, 13.52213, 13.32751, 13.19839, 13.30028, 13.56998, 13.02911, 13.03224, 13.21846,
   13.10782, 13.12296, 12.91309, 12.83264, 12.80504, 13.00188, 12.59271, 12.9542, 12.84237, 12.69981, 13.02084, 12.62545, 12.93024, 12.55629, 12.82748, 12.49644,
   12.43706, 12.77241, 12.30101, 12.42492, 12.42038, 12.78692, 12.55434, 12.36122, 12.3259, 12.65501, 12.38005, 12.21405, 12.6967, 12.49095, 12.24215, 12.07962,
   11.61973, 12.13827, 12.14925, 11.71763, 12.2042, 11.69855, 12.09774, 11.69141, 11.73238, 12.39768, 11.65702, 11.10267, 11.67529, 11.72045, 11.58117, 11.17459,
   12.01362, 11.91925, 11.67604, 11.53441, 11.36046, 11.1428, 11.41478, 11.29215, 11.25806, 11.49566, 10.92585, 11.35696, 11.13394, 11.37098, 11.33614, 10.91951,
   11.26028, 11.33122, 11.18431, 11.07026, 11.34827, 11.22244, 10.74207, 10.80063, 10.9603, 11.22035, 10.76794, 10.57988, 10.78263, 10.57437, 10.38216, 10.35505,
   10.54424, 10.61339, 10.49288, 10.84093, 10.52615, 10.75439, 10.85114, 10.19131, 10.0097, 10.61658, 10.76604, 10.33584, 10.28292, 11.00797, 9.971969, 10.34926,
   10.33703, 10.26812, 10.34501, 10.33002, 10.421, 10.14752, 10.2792, 10.08901, 9.665976, 9.895153, 10.18236, 9.902293, 9.939702, 9.710233, 9.602064, 9.947098,
   9.825053, 10.17262, 10.02035, 9.345759, 10.43218, 9.899382, 9.855574, 9.822464, 9.731754, 9.633005, 9.666625, 9.522739, 9.603583, 9.335058, 9.468475, 9.309352,
   9.674791, 9.31608, 9.493736, 9.320153, 9.154806, 9.383145, 9.522617, 9.471961, 9.487152, 9.296165, 9.34146, 9.350181, 9.670501, 9.157342, 9.264394, 9.030148,
   8.993731, 8.883483, 9.286866, 9.206623, 9.66263, 8.942303, 9.061526, 9.133779, 9.161461, 9.254689, 9.066191, 9.233443, 8.629366, 8.966331, 8.443254, 9.875271,
   8.784226, 8.84562, 8.503682, 8.600211, 9.020692, 9.151237, 8.866607, 8.435972, 8.596654, 8.586643, 8.802381, 8.574096, 8.109012, 8.334119, 8.216841, 8.145286,
   8.5096, 8.157901, 8.809179, 8.407794, 8.261723, 8.772349, 8.297482, 8.220743, 8.287514, 8.18712, 8.094956, 8.67476, 8.019187, 8.130483, 8.198419, 8.266253,
   8.116052, 8.179195, 8.090712, 8.200845, 8.015092, 8.568286, 8.19083, 7.749803, 8.001984, 7.527896, 7.793687, 7.753658, 7.687012, 7.58961, 7.979449, 7.784132,
   7.915276, 7.411082, 7.768218, 7.783626, 7.427401, 7.962704, 7.700979, 7.949271, 7.703972, 7.870887, 7.521119, 7.685703, 7.281371, 7.6434, 7.200211, 7.395233,
   7.556778, 7.31849, 7.261215, 7.671442, 7.337626, 7.344305, 7.530952, 7.318923, 7.460607, 7.501451, 7.340182, 7.31733, 7.397222, 7.475684, 7.495927, 7.589005,
   7.279488, 7.239379, 7.090711, 7.033027, 6.913192, 7.160469, 7.011198, 7.033718, 7.197819, 6.902817, 6.929486, 7.203404, 7.036926, 6.984584, 7.053276, 7.182757,
   7.277261, 6.852722, 6.863093, 7.133409, 7.104263, 6.923082, 6.565344, 6.833549, 6.781295, 7.073891, 6.761637, 6.751124, 6.667836, 6.630757, 6.532827, 6.917118,
   6.454494, 6.685875, 6.933326, 6.469933, 6.866249, 6.890133, 6.932554, 6.234949, 6.992872, 6.779059, 6.301118, 6.087224, 6.634097, 6.432204, 6.447994, 6.131546,
   6.608729, 5.976325, 5.976804, 6.859394, 5.80866, 6.453081, 6.239769, 6.624747, 6.405176, 6.813129, 6.51432, 6.058829, 6.648366, 6.491588, 6.176354, 6.495712,
   6.23185, 6.238163, 6.524691, 5.900141, 6.239774, 6.133187, 6.055404 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1037,Graph_from_VH_tagFirst_2b1c_H_mass_fy1037,Graph_from_VH_tagFirst_2b1c_H_mass_fex1037,Graph_from_VH_tagFirst_2b1c_H_mass_fey1037);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetMinimum(-1344.678);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetMaximum(13785.23);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",1000,0,2000);
   data_mc_ratio__38->SetBinContent(43,1.253059);
   data_mc_ratio__38->SetBinContent(44,1.245225);
   data_mc_ratio__38->SetBinContent(45,1.251342);
   data_mc_ratio__38->SetBinContent(46,1.250643);
   data_mc_ratio__38->SetBinContent(47,1.253049);
   data_mc_ratio__38->SetBinContent(48,1.248825);
   data_mc_ratio__38->SetBinContent(78,1.233333);
   data_mc_ratio__38->SetBinContent(79,1.255655);
   data_mc_ratio__38->SetBinContent(80,1.241521);
   data_mc_ratio__38->SetBinContent(81,1.238743);
   data_mc_ratio__38->SetBinContent(82,1.236956);
   data_mc_ratio__38->SetBinContent(83,1.247287);
   data_mc_ratio__38->SetBinContent(1000,1.299701);
   data_mc_ratio__38->SetBinContent(1001,1.257783);
   data_mc_ratio__38->SetBinError(43,0.01425588);
   data_mc_ratio__38->SetBinError(44,0.0100035);
   data_mc_ratio__38->SetBinError(45,0.0101122);
   data_mc_ratio__38->SetBinError(46,0.0101722);
   data_mc_ratio__38->SetBinError(47,0.01022327);
   data_mc_ratio__38->SetBinError(48,0.01451043);
   data_mc_ratio__38->SetBinError(78,0.01586288);
   data_mc_ratio__38->SetBinError(79,0.0115014);
   data_mc_ratio__38->SetBinError(80,0.01139154);
   data_mc_ratio__38->SetBinError(81,0.01145659);
   data_mc_ratio__38->SetBinError(82,0.01146412);
   data_mc_ratio__38->SetBinError(83,0.01630196);
   data_mc_ratio__38->SetBinError(1000,0.1752517);
   data_mc_ratio__38->SetBinError(1001,0.01027458);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(3829.143);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__38->GetXaxis()->SetRange(1,150);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01311758, 0.006498804, 0.006565035, 0.006631321, 0.006623178, 0.01329851, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01473392, 0.007432993, 0.007409724, 0.007467344,
   0.007498958, 0.01496173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1430948 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.8282862);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.171714);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
