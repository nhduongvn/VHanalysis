#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_VR_16()
{
//=========Macro generated from canvas: H_mass_tagOnly_VR_16/H_mass_tagOnly_VR_16
//=========  (Fri May 24 11:23:51 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-46.29824,315.7258,46261.93);
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
   st->SetMaximum(41631.11);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",1000,0,2000);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(41631.11);
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
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(43,7014.716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(44,14152.54);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(45,14174.34);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(46,14127.84);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(47,14085.16);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,7080.963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,6909.192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(79,13709.98);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(80,13618.39);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(81,13671.86);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(82,13432.69);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(83,6697.219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,50.12872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,27255.32);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.4129504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.7181248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,2.974612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,7.185446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,12.47273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,17.83104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,23.60981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,29.55725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,35.48275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,40.93711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,46.39285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,51.18752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,55.45312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,59.3749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,62.67994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,64.90629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,66.93845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,68.30727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,69.89016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,70.49791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,71.0642);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,71.79293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,71.96242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,71.77989);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,72.34436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,72.09162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,72.84977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,72.76053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,73.08604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,73.21932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,73.1303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,72.92295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,72.79561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,72.8082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,72.52781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,72.04619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,71.70828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,71.08098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,70.74155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,70.61612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,70.42617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,70.28177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,69.93751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,69.82717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,69.96129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,69.70185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,69.86617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,69.77155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,69.61913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,69.6619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,69.75277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,69.12966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,69.61764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,69.68526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,69.4012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,69.12761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,68.91826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,68.90948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,68.6754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,68.72087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,68.68641);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,68.3919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,68.06236);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,68.04523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,67.93767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,67.3838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,67.25735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,67.0764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,66.86993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,66.65184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,66.48172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,66.55023);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,65.97443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,65.77689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,65.25553);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,65.06423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,64.93444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,64.55779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,64.6499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,64.07233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,63.92301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,63.4415);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,63.08408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,63.1194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,62.65011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,62.40729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,62.14129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,61.83306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,61.859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,61.4549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,61.26924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,60.89552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,60.87463);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,60.31655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,60.13453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,59.68018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,59.85007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,59.56907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,59.12489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,58.76773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,58.56784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,58.21923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,58.13399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,58.29716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,57.84213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,57.783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,57.35088);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,57.35392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,56.92229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,56.85401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,56.5765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,56.4659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,56.24006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,56.34239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,55.95432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,55.33017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,55.27674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,55.32982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,55.21986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,55.02708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,54.88072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,54.38817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,54.41631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,54.38145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,54.15929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,53.91999);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,53.76488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,53.6584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,53.42765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,53.22467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,53.15175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,52.8271);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,52.56303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,52.6506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,52.28238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,52.24635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,52.16813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,51.78085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,51.58254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,51.68146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,51.53229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,51.57283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,51.22863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,50.94068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,51.04533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,50.92314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,50.3041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,50.4334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,49.96258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,49.99784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,49.98772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,49.6884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,49.7378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,49.23492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,49.20367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,49.20785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,48.78444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,49.13856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,48.61367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,48.73857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,48.2333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,48.36807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,48.03089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,47.98274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,48.053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,47.58287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,47.50842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,47.31336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,47.43298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,47.20934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,47.45536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,46.80196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,47.0108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,46.66408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,46.64239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,46.34222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,46.23744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,46.16721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,46.0968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,45.9054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,45.43438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,45.70201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,45.48378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,45.49739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,45.24941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,44.93088);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,44.8112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,44.94918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,44.95662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,44.72441);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,44.36084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,44.39266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,44.28861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,44.05487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,44.14195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,43.47395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,43.66344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,43.75982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,43.51836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,43.50384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,43.403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,43.23121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,42.91678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,42.85396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,42.74373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,42.47177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,42.39991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,42.65906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,42.50786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,41.71964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,41.98154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,41.87621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,41.61533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,41.41385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,41.36641);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,41.06826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,41.23421);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,41.27028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,41.1372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,40.77308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,40.79912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,40.9394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,40.53441);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,40.57379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,40.29229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,40.48038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,39.9964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,40.20478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,39.78231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,39.58581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,39.578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,39.45265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,39.25502);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,39.27177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,39.20119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,39.42916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,39.12212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,38.87911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,38.9695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,38.76738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,38.76478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,38.44091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,38.5701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,38.13073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,38.22833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,38.12224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,37.85809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,37.85602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,37.79745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,37.57527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,37.5745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,37.70713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,37.48682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,36.95316);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,36.91193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,36.83191);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,37.01925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,36.94393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,36.66835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,36.40448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,36.46503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,36.35881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,36.06309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,35.91314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,36.09753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,36.02222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,35.91729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,35.92392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,35.4814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,35.51973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,35.20516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,35.42963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,35.38559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,35.14163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,34.98619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,35.01856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,34.7923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,34.71889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,34.69848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,34.66322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,34.45819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,34.26121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,34.347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,34.19389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,34.04838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,33.75597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,34.12238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,33.63378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,33.88682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,33.55875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,33.61261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,33.64195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,33.15284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,33.05618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,32.98206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,33.04601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,32.91041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,32.83503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,32.88349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,32.83437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,32.76968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,32.55865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,32.37367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,32.60111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,32.2327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,32.19197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,31.9633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,31.94256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,31.62256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,32.03739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,31.71377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,31.82686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,31.89972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,31.42465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,31.57206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,31.34929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,31.17423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,31.21249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,30.92065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,30.88348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,30.87685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,30.78586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,30.79207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,30.71624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,30.39115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,30.61841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,30.49974);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,30.41347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,30.38158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,30.30947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,29.96077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,29.95394);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,29.94719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,29.93047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,29.85377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,29.4449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,29.74303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,29.53515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,29.56754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,29.29895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,29.30013);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,29.20652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,29.12988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,29.03992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,29.07685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,28.98297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,28.63794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,28.72834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,28.66072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,28.80153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,28.30085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,28.65172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,28.39644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,28.20204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,28.12254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,28.07031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,28.19092);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,27.95433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,27.79319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,27.92004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,27.73526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,27.58686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,27.29703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,27.64798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,27.16356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,27.25496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,27.30448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,27.23186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,27.25771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,27.0463);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,26.9493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,27.05474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,26.85149);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,26.70984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,26.88244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,26.71176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,26.61508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,26.44917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,26.51684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,26.31182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,26.16761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,26.03891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,26.20596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,26.13446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,25.9162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,25.87663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,25.85572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,25.9807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,25.83028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,25.67489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,25.57733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,25.54997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,25.4605);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,25.4645);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,25.35201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,25.16774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,25.40175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,24.98499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,25.13663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,25.20197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,24.96634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,24.8016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,24.77132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,24.78784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,24.79346);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,24.52604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,24.4511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,24.73526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,24.44152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,24.4456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,24.17731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,24.2239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,24.30525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,23.75499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,24.17224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,23.78648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,23.96281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,23.87491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,23.91624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,23.97497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,23.61207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,23.69838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,23.35168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,23.63065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,23.42166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,23.35769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,23.40106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,23.22965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,23.1569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,22.97908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,22.94142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,23.11337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,22.90033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,22.88579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,22.74597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,22.71294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,22.55108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,22.66177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,22.83014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,22.73662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,22.28824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,22.21887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,22.55099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,22.40325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,22.29851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,22.27073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,21.89265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,22.09004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,21.78129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,21.86145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,21.75468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,21.7746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,21.94485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,21.66553);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,21.74955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,21.59941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,21.59728);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,21.43485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,21.36428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,21.44985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,21.50356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,21.35165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,21.42957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,21.13468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,21.01996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,21.22511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,20.76885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,21.00396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,20.91196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,20.72077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,20.74643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,20.66205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,20.42753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,20.52299);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,20.63239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,20.42797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,20.50807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,20.19552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,20.54961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,20.18653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,20.05772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,20.21259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,19.90086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,19.88214);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,19.80362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,19.86192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,19.89096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,19.53011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,19.85053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,19.64589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,19.77004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,19.66255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,19.73348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,19.732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,19.32696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,19.58302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,19.39845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,19.54381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,19.15086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,19.00293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,19.30048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,18.85427);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,18.94933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,19.17986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,19.00617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,19.0376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,19.17298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,18.6774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,18.8071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,18.63833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,18.6313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,18.69229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,18.67401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,18.57462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,18.59949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,18.30845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,18.3068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,18.27275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,18.15098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,18.53759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,18.29712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,18.22332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,18.17606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,17.91242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,17.90196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,18.06624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,18.05096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,18.14972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,17.96742);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,17.83954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,17.70421);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,17.97692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,17.80709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,17.40137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,17.77385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,17.74054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,17.65134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,17.27893);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,17.68005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,17.55226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,17.07816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,17.20676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,17.37401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,17.14326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,17.10429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,17.02864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,17.17248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,16.99946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,17.02638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,16.93514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,16.6578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,17.018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,16.74828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,16.54342);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,16.61683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,16.49135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,16.57837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,16.32122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,16.7908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,16.75475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,16.48344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,16.54429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,16.40605);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,16.33666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,16.53951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,15.97899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,16.20456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,16.13964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,15.93944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,16.10148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,16.02741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,15.9782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,15.79066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,15.86059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,15.92338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,16.05128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,15.52234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,15.70414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,15.71925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,15.62549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,15.66142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,15.68601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,15.55569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,15.53431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,15.57525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,15.35761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,15.31762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,15.3312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,15.33436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,15.46599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,15.44387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,15.05404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,15.32784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,15.22856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,15.18449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,15.03128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,14.92025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,14.81231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,15.11076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,14.73176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,14.96665);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,14.76283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,14.61377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,14.6524);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,14.70448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,14.45672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,14.72622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,14.61551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,14.5386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,14.48102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,14.73309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,14.23188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,14.45151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,14.14694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,14.28545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,14.5422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,14.45841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,14.28127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,14.35045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,14.07483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,13.92631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,13.71483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,13.73801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,14.06602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,13.97227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,14.08368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,13.98032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,13.88839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,13.92677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,13.6497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,13.89647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,13.71297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,13.75337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,13.4428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,13.34842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,13.35884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,13.33483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,13.73873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,13.3452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,13.63435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,13.60338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,13.45047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,13.38712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,13.34495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,13.46244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,12.93332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,13.07743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,13.12054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,13.00273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,13.1462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,12.88511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,13.3515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,13.16935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,12.88239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,12.8813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,12.78065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,12.74069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,12.8741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,13.00871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,12.78268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,12.7414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,12.5063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,12.59773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,12.5694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,12.57806);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,12.52244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,12.68064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,12.71557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,12.36368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,12.14672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,12.34105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,12.25531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,12.38077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,12.28498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,12.18756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,12.03344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,12.06976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,12.12902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,12.23539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,12.2229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,12.227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,12.5172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,12.17631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,11.91959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,11.6979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,11.77709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,11.97163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,11.96894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,11.8991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,11.98446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,11.9383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,11.79826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,11.95287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,11.88057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,11.79495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,11.4334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,11.64552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,11.55557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,11.78608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,11.5113);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,11.39862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,11.61464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,11.61149);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,11.46545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,11.54139);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,11.48478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,11.5108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,11.36907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,11.76639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,11.11419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,11.59926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,11.23018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,11.36263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,11.29027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,11.0941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,11.13978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,10.96201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,11.03492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,10.95277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,11.09623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,10.86396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,10.85736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,10.85477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,11.25993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,10.69475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,11.13816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,10.87667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,10.82323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,10.90108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,10.66157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,10.93366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,10.56199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,10.87921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,10.71095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,10.73582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,10.52373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,10.53042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,10.5212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,10.6652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,10.42301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,10.73623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,10.41124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,10.49773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,10.4996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,10.49065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,10.50691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,10.40502);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,10.14878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,10.31403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,10.44014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,10.24353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,10.02771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,9.961003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,9.89459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,10.32582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,10.29853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,9.979063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,9.900542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,9.753145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,9.798452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,9.998946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,10.09044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,9.606127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,9.853445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,9.800278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,9.724744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,9.942276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,9.945603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,9.66636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,9.606005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,9.712164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,9.755522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,9.87179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,9.939246);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,9.621667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,9.784823);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,9.921497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,9.716022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,9.595895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,9.828674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,9.416736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,9.523435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,9.40975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,9.612122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,9.392393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,9.340682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,9.637845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,9.405281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,9.376443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,9.326233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,9.320435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,9.056743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,9.475869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,9.080005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,9.328284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,9.3514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,9.145606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,9.014044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,9.346865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,9.262704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,9.215765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,9.073129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,9.211812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,8.927009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,9.038873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,8.896319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,9.113321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,8.963753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,8.984863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,8.959857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,8.841644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,8.784068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,8.776476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,8.937017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,8.778273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,8.809679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,8.719515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,8.46053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,8.375592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,8.67561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,8.616747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,8.821133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,8.443204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,8.669773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,8.397167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,8.513455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,8.514513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,8.604942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,8.508502);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,8.392931);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,8.515763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,8.132496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,8.557474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,8.567335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,8.376455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,8.348764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,8.468778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,8.082835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,8.373018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,8.567111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,8.046237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,8.603998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,8.147062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,8.558933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,7.921183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,8.025604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,7.985441);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,8.161793);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,8.13207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,8.076106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,8.046523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,7.879232);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,7.920487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,8.003278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,8.149184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,8.0099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,8.308265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,7.899144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,7.907488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,8.067783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,7.632949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,7.924074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,7.645837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,7.784612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,7.780412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,7.680155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,7.946712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,7.968159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,7.738312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,7.915851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,7.797677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,7.6548);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,7.821555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,7.674492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,7.593928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,7.459535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,7.378659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,7.715216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,7.554737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,7.446866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,7.745842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,7.444465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,7.814153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,7.551833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,7.489688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,7.36279);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,7.753267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,7.150971);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,7.425217);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,7.52254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,7.262096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,7.587143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,7.069538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,7.357774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,7.232739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,7.359069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,7.103594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,7.36878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,7.121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,7.126869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,7.162949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,7.189656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,7.219247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,7.04183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,7.116075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,7.292284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,7.107338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,7.153937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,7.070414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,7.005317);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,7.042371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,7.081892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,7.062922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,7.051356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,6.852256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,6.936982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,6.655752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,6.557537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,6.924364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,6.770011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,6.798456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,6.989956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,6.999611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,6.67213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,6.810237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,6.642828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,6.704554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,6.913186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,6.486795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,6.950951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,6.810885);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,6.626711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,6.686021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,6.813265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,6.516442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,6.848945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,6.530756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,6.667831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,6.660424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,6.817662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,6.444561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,6.335865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,6.465501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,6.664894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,6.260563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,6.477884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,6.463521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,6.690564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,6.469497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,6.343307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,6.309808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,6.350468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,6.229212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,6.469729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,6.119678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,6.436889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,6.469789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,6.411675);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,6.37903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,6.221661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,6.175203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,6.343363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,6.435115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,6.056107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,6.01332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,6.501121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,6.133647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,6.347486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,6.102434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,6.125446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,6.258799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,6.087539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,5.977306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,6.032528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,6.405799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,5.973835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,6.321188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,5.750847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,6.177753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,6.352061);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,5.930541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,5.987904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,6.460802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,6.049524);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,5.917285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,6.060129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,6.050682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,5.866543);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,5.843549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,5.89264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,5.477602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,94.09062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(9297840);

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
   VH_tagOnly_H_mass__5->SetBinContent(43,9460);
   VH_tagOnly_H_mass__5->SetBinContent(44,18734);
   VH_tagOnly_H_mass__5->SetBinContent(45,18425);
   VH_tagOnly_H_mass__5->SetBinContent(46,18164);
   VH_tagOnly_H_mass__5->SetBinContent(47,18055);
   VH_tagOnly_H_mass__5->SetBinContent(48,8795);
   VH_tagOnly_H_mass__5->SetBinContent(78,7811);
   VH_tagOnly_H_mass__5->SetBinContent(79,15541);
   VH_tagOnly_H_mass__5->SetBinContent(80,15291);
   VH_tagOnly_H_mass__5->SetBinContent(81,15277);
   VH_tagOnly_H_mass__5->SetBinContent(82,15156);
   VH_tagOnly_H_mass__5->SetBinContent(83,7629);
   VH_tagOnly_H_mass__5->SetBinContent(1000,62);
   VH_tagOnly_H_mass__5->SetBinContent(1001,38455);
   VH_tagOnly_H_mass__5->SetEntries(3599397);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7014.716, 14152.54, 14174.34, 14127.84, 14085.16, 7080.963, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6909.192, 13709.98, 13618.39, 13671.86,
   13432.69, 6697.219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 50.12872 };
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4129504, 0.7181248, 2.974612, 7.185446, 12.47273, 17.83104, 23.60981, 29.55725,
   35.48275, 40.93711, 46.39285, 51.18752, 55.45312, 59.3749, 62.67994, 64.90629, 66.93845, 68.30727, 69.89016, 70.49791, 71.0642, 71.79293, 71.96242, 71.77989,
   72.34436, 72.09162, 72.84977, 72.76053, 73.08604, 73.21932, 73.1303, 72.92295, 72.79561, 72.8082, 72.52781, 72.04619, 71.70828, 71.08098, 70.74155, 70.61612,
   70.42617, 70.28177, 69.93751, 69.82717, 69.96129, 69.70185, 69.86617, 69.77155, 69.61913, 69.6619, 69.75277, 69.12966, 69.61764, 69.68526, 69.4012, 69.12761,
   68.91826, 68.90948, 68.6754, 68.72087, 68.68641, 68.3919, 68.06236, 68.04523, 67.93767, 67.3838, 67.25735, 67.0764, 66.86993, 66.65184, 66.48172, 66.55023,
   65.97443, 65.77689, 65.25553, 65.06423, 64.93444, 64.55779, 64.6499, 64.07233, 63.92301, 63.4415, 63.08408, 63.1194, 62.65011, 62.40729, 62.14129, 61.83306,
   61.859, 61.4549, 61.26924, 60.89552, 60.87463, 60.31655, 60.13453, 59.68018, 59.85007, 59.56907, 59.12489, 58.76773, 58.56784, 58.21923, 58.13399, 58.29716,
   57.84213, 57.783, 57.35088, 57.35392, 56.92229, 56.85401, 56.5765, 56.4659, 56.24006, 56.34239, 55.95432, 55.33017, 55.27674, 55.32982, 55.21986, 55.02708,
   54.88072, 54.38817, 54.41631, 54.38145, 54.15929, 53.91999, 53.76488, 53.6584, 53.42765, 53.22467, 53.15175, 52.8271, 52.56303, 52.6506, 52.28238, 52.24635,
   52.16813, 51.78085, 51.58254, 51.68146, 51.53229, 51.57283, 51.22863, 50.94068, 51.04533, 50.92314, 50.3041, 50.4334, 49.96258, 49.99784, 49.98772, 49.6884,
   49.7378, 49.23492, 49.20367, 49.20785, 48.78444, 49.13856, 48.61367, 48.73857, 48.2333, 48.36807, 48.03089, 47.98274, 48.053, 47.58287, 47.50842, 47.31336,
   47.43298, 47.20934, 47.45536, 46.80196, 47.0108, 46.66408, 46.64239, 46.34222, 46.23744, 46.16721, 46.0968, 45.9054, 45.43438, 45.70201, 45.48378, 45.49739,
   45.24941, 44.93088, 44.8112, 44.94918, 44.95662, 44.72441, 44.36084, 44.39266, 44.28861, 44.05487, 44.14195, 43.47395, 43.66344, 43.75982, 43.51836, 43.50384,
   43.403, 43.23121, 42.91678, 42.85396, 42.74373, 42.47177, 42.39991, 42.65906, 42.50786, 41.71964, 41.98154, 41.87621, 41.61533, 41.41385, 41.36641, 41.06826,
   41.23421, 41.27028, 41.1372, 40.77308, 40.79912, 40.9394, 40.53441, 40.57379, 40.29229, 40.48038, 39.9964, 40.20478, 39.78231, 39.58581, 39.578, 39.45265,
   39.25502, 39.27177, 39.20119, 39.42916, 39.12212, 38.87911, 38.9695, 38.76738, 38.76478, 38.44091, 38.5701, 38.13073, 38.22833, 38.12224, 37.85809, 37.85602,
   37.79745, 37.57527, 37.5745, 37.70713, 37.48682, 36.95316, 36.91193, 36.83191, 37.01925, 36.94393, 36.66835, 36.40448, 36.46503, 36.35881, 36.06309, 35.91314,
   36.09753, 36.02222, 35.91729, 35.92392, 35.4814, 35.51973, 35.20516, 35.42963, 35.38559, 35.14163, 34.98619, 35.01856, 34.7923, 34.71889, 34.69848, 34.66322,
   34.45819, 34.26121, 34.347, 34.19389, 34.04838, 33.75597, 34.12238, 33.63378, 33.88682, 33.55875, 33.61261, 33.64195, 33.15284, 33.05618, 32.98206, 33.04601,
   32.91041, 32.83503, 32.88349, 32.83437, 32.76968, 32.55865, 32.37367, 32.60111, 32.2327, 32.19197, 31.9633, 31.94256, 31.62256, 32.03739, 31.71377, 31.82686,
   31.89972, 31.42465, 31.57206, 31.34929, 31.17423, 31.21249, 30.92065, 30.88348, 30.87685, 30.78586, 30.79207, 30.71624, 30.39115, 30.61841, 30.49974, 30.41347,
   30.38158, 30.30947, 29.96077, 29.95394, 29.94719, 29.93047, 29.85377, 29.4449, 29.74303, 29.53515, 29.56754, 29.29895, 29.30013, 29.20652, 29.12988, 29.03992,
   29.07685, 28.98297, 28.63794, 28.72834, 28.66072, 28.80153, 28.30085, 28.65172, 28.39644, 28.20204, 28.12254, 28.07031, 28.19092, 27.95433, 27.79319, 27.92004,
   27.73526, 27.58686, 27.29703, 27.64798, 27.16356, 27.25496, 27.30448, 27.23186, 27.25771, 27.0463, 26.9493, 27.05474, 26.85149, 26.70984, 26.88244, 26.71176,
   26.61508, 26.44917, 26.51684, 26.31182, 26.16761, 26.03891, 26.20596, 26.13446, 25.9162, 25.87663, 25.85572, 25.9807, 25.83028, 25.67489, 25.57733, 25.54997,
   25.4605, 25.4645, 25.35201, 25.16774, 25.40175, 24.98499, 25.13663, 25.20197, 24.96634, 24.8016, 24.77132, 24.78784, 24.79346, 24.52604, 24.4511, 24.73526,
   24.44152, 24.4456, 24.17731, 24.2239, 24.30525, 23.75499, 24.17224, 23.78648, 23.96281, 23.87491, 23.91624, 23.97497, 23.61207, 23.69838, 23.35168, 23.63065,
   23.42166, 23.35769, 23.40106, 23.22965, 23.1569, 22.97908, 22.94142, 23.11337, 22.90033, 22.88579, 22.74597, 22.71294, 22.55108, 22.66177, 22.83014, 22.73662,
   22.28824, 22.21887, 22.55099, 22.40325, 22.29851, 22.27073, 21.89265, 22.09004, 21.78129, 21.86145, 21.75468, 21.7746, 21.94485, 21.66553, 21.74955, 21.59941,
   21.59728, 21.43485, 21.36428, 21.44985, 21.50356, 21.35165, 21.42957, 21.13468, 21.01996, 21.22511, 20.76885, 21.00396, 20.91196, 20.72077, 20.74643, 20.66205,
   20.42753, 20.52299, 20.63239, 20.42797, 20.50807, 20.19552, 20.54961, 20.18653, 20.05772, 20.21259, 19.90086, 19.88214, 19.80362, 19.86192, 19.89096, 19.53011,
   19.85053, 19.64589, 19.77004, 19.66255, 19.73348, 19.732, 19.32696, 19.58302, 19.39845, 19.54381, 19.15086, 19.00293, 19.30048, 18.85427, 18.94933, 19.17986,
   19.00617, 19.0376, 19.17298, 18.6774, 18.8071, 18.63833, 18.6313, 18.69229, 18.67401, 18.57462, 18.59949, 18.30845, 18.3068, 18.27275, 18.15098, 18.53759,
   18.29712, 18.22332, 18.17606, 17.91242, 17.90196, 18.06624, 18.05096, 18.14972, 17.96742, 17.83954, 17.70421, 17.97692, 17.80709, 17.40137, 17.77385, 17.74054,
   17.65134, 17.27893, 17.68005, 17.55226, 17.07816, 17.20676, 17.37401, 17.14326, 17.10429, 17.02864, 17.17248, 16.99946, 17.02638, 16.93514, 16.6578, 17.018,
   16.74828, 16.54342, 16.61683, 16.49135, 16.57837, 16.32122, 16.7908, 16.75475, 16.48344, 16.54429, 16.40605, 16.33666, 16.53951, 15.97899, 16.20456, 16.13964,
   15.93944, 16.10148, 16.02741, 15.9782, 15.79066, 15.86059, 15.92338, 16.05128, 15.52234, 15.70414, 15.71925, 15.62549, 15.66142, 15.68601, 15.55569, 15.53431,
   15.57525, 15.35761, 15.31762, 15.3312, 15.33436, 15.46599, 15.44387, 15.05404, 15.32784, 15.22856, 15.18449, 15.03128, 14.92025, 14.81231, 15.11076, 14.73176,
   14.96665, 14.76283, 14.61377, 14.6524, 14.70448, 14.45672, 14.72622, 14.61551, 14.5386, 14.48102, 14.73309, 14.23188, 14.45151, 14.14694, 14.28545, 14.5422,
   14.45841, 14.28127, 14.35045, 14.07483, 13.92631, 13.71483, 13.73801, 14.06602, 13.97227, 14.08368, 13.98032, 13.88839, 13.92677, 13.6497, 13.89647, 13.71297,
   13.75337, 13.4428, 13.34842, 13.35884, 13.33483, 13.73873, 13.3452, 13.63435, 13.60338, 13.45047, 13.38712, 13.34495, 13.46244, 12.93332, 13.07743, 13.12054,
   13.00273, 13.1462, 12.88511, 13.3515, 13.16935, 12.88239, 12.8813, 12.78065, 12.74069, 12.8741, 13.00871, 12.78268, 12.7414, 12.5063, 12.59773, 12.5694,
   12.57806, 12.52244, 12.68064, 12.71557, 12.36368, 12.14672, 12.34105, 12.25531, 12.38077, 12.28498, 12.18756, 12.03344, 12.06976, 12.12902, 12.23539, 12.2229,
   12.227, 12.5172, 12.17631, 11.91959, 11.6979, 11.77709, 11.97163, 11.96894, 11.8991, 11.98446, 11.9383, 11.79826, 11.95287, 11.88057, 11.79495, 11.4334,
   11.64552, 11.55557, 11.78608, 11.5113, 11.39862, 11.61464, 11.61149, 11.46545, 11.54139, 11.48478, 11.5108, 11.36907, 11.76639, 11.11419, 11.59926, 11.23018,
   11.36263, 11.29027, 11.0941, 11.13978, 10.96201, 11.03492, 10.95277, 11.09623, 10.86396, 10.85736, 10.85477, 11.25993, 10.69475, 11.13816, 10.87667, 10.82323,
   10.90108, 10.66157, 10.93366, 10.56199, 10.87921, 10.71095, 10.73582, 10.52373, 10.53042, 10.5212, 10.6652, 10.42301, 10.73623, 10.41124, 10.49773, 10.4996,
   10.49065, 10.50691, 10.40502, 10.14878, 10.31403, 10.44014, 10.24353, 10.02771, 9.961003, 9.89459, 10.32582, 10.29853, 9.979063, 9.900542, 9.753145, 9.798452,
   9.998946, 10.09044, 9.606127, 9.853445, 9.800278, 9.724744, 9.942276, 9.945603, 9.66636, 9.606005, 9.712164, 9.755522, 9.87179, 9.939246, 9.621667, 9.784823,
   9.921497, 9.716022, 9.595895, 9.828674, 9.416736, 9.523435, 9.40975, 9.612122, 9.392393, 9.340682, 9.637845, 9.405281, 9.376443, 9.326233, 9.320435, 9.056743,
   9.475869, 9.080005, 9.328284, 9.3514, 9.145606, 9.014044, 9.346865, 9.262704, 9.215765, 9.073129, 9.211812, 8.927009, 9.038873, 8.896319, 9.113321, 8.963753,
   8.984863, 8.959857, 8.841644, 8.784068, 8.776476, 8.937017, 8.778273, 8.809679, 8.719515, 8.46053, 8.375592, 8.67561, 8.616747, 8.821133, 8.443204, 8.669773,
   8.397167, 8.513455, 8.514513, 8.604942, 8.508502, 8.392931, 8.515763, 8.132496, 8.557474, 8.567335, 8.376455, 8.348764, 8.468778, 8.082835, 8.373018, 8.567111,
   8.046237, 8.603998, 8.147062, 8.558933, 7.921183, 8.025604, 7.985441, 8.161793, 8.13207, 8.076106, 8.046523, 7.879232, 7.920487, 8.003278, 8.149184, 8.0099,
   8.308265, 7.899144, 7.907488, 8.067783, 7.632949, 7.924074, 7.645837, 7.784612, 7.780412, 7.680155, 7.946712, 7.968159, 7.738312, 7.915851, 7.797677, 7.6548,
   7.821555, 7.674492, 7.593928, 7.459535, 7.378659, 7.715216, 7.554737, 7.446866, 7.745842, 7.444465, 7.814153, 7.551833, 7.489688, 7.36279, 7.753267, 7.150971,
   7.425217, 7.52254, 7.262096, 7.587143, 7.069538, 7.357774, 7.232739, 7.359069, 7.103594, 7.36878, 7.121, 7.126869, 7.162949, 7.189656, 7.219247, 7.04183,
   7.116075, 7.292284, 7.107338, 7.153937, 7.070414, 7.005317, 7.042371, 7.081892, 7.062922, 7.051356, 6.852256, 6.936982, 6.655752, 6.557537, 6.924364, 6.770011,
   6.798456, 6.989956, 6.999611, 6.67213, 6.810237, 6.642828, 6.704554, 6.913186, 6.486795, 6.950951, 6.810885, 6.626711, 6.686021, 6.813265, 6.516442, 6.848945,
   6.530756, 6.667831, 6.660424, 6.817662, 6.444561, 6.335865, 6.465501, 6.664894, 6.260563, 6.477884, 6.463521, 6.690564, 6.469497, 6.343307, 6.309808, 6.350468,
   6.229212, 6.469729, 6.119678, 6.436889, 6.469789, 6.411675, 6.37903, 6.221661, 6.175203, 6.343363, 6.435115, 6.056107, 6.01332, 6.501121, 6.133647, 6.347486,
   6.102434, 6.125446, 6.258799, 6.087539, 5.977306, 6.032528, 6.405799, 5.973835, 6.321188, 5.750847, 6.177753, 6.352061, 5.930541, 5.987904, 6.460802, 6.049524,
   5.917285, 6.060129, 6.050682, 5.866543, 5.843549, 5.89264, 5.477602 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1005,Graph_from_VH_tagOnly_2b1c_H_mass_fy1005,Graph_from_VH_tagOnly_2b1c_H_mass_fex1005,Graph_from_VH_tagOnly_2b1c_H_mass_fey1005);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMinimum(-1505.18);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMaximum(15678.35);
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
   data_mc_ratio__6->SetBinContent(43,1.348593);
   data_mc_ratio__6->SetBinContent(44,1.32372);
   data_mc_ratio__6->SetBinContent(45,1.299884);
   data_mc_ratio__6->SetBinContent(46,1.285688);
   data_mc_ratio__6->SetBinContent(47,1.281845);
   data_mc_ratio__6->SetBinContent(48,1.242063);
   data_mc_ratio__6->SetBinContent(78,1.130523);
   data_mc_ratio__6->SetBinContent(79,1.133554);
   data_mc_ratio__6->SetBinContent(80,1.12282);
   data_mc_ratio__6->SetBinContent(81,1.117405);
   data_mc_ratio__6->SetBinContent(82,1.128292);
   data_mc_ratio__6->SetBinContent(83,1.13913);
   data_mc_ratio__6->SetBinContent(1000,1.236816);
   data_mc_ratio__6->SetBinContent(1001,1.410917);
   data_mc_ratio__6->SetBinError(43,0.0138655);
   data_mc_ratio__6->SetBinError(44,0.009671214);
   data_mc_ratio__6->SetBinError(45,0.009576367);
   data_mc_ratio__6->SetBinError(46,0.009539596);
   data_mc_ratio__6->SetBinError(47,0.009539746);
   data_mc_ratio__6->SetBinError(48,0.0132442);
   data_mc_ratio__6->SetBinError(78,0.01279163);
   data_mc_ratio__6->SetBinError(79,0.009092904);
   data_mc_ratio__6->SetBinError(80,0.00908013);
   data_mc_ratio__6->SetBinError(81,0.00904048);
   data_mc_ratio__6->SetBinError(82,0.009164932);
   data_mc_ratio__6->SetBinError(83,0.01304185);
   data_mc_ratio__6->SetBinError(1000,0.1570758);
   data_mc_ratio__6->SetBinError(1001,0.008688552);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(5512.982);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01037935, 0.005124722, 0.005082859, 0.005075672, 0.005046514, 0.009990385, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009678401, 0.004861555, 0.004881759, 0.00486768,
   0.004911482, 0.009821523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1092707 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.8688751);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.131125);
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
