#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_18()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_18/Z_mass_tagOnly_VR_18
//=========  (Mon Apr  8 13:43:38 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_VR_18 = new TCanvas("Z_mass_tagOnly_VR_18", "Z_mass_tagOnly_VR_18",0,0,600,600);
   Z_mass_tagOnly_VR_18->SetHighLightColor(2);
   Z_mass_tagOnly_VR_18->Range(0,0,1,1);
   Z_mass_tagOnly_VR_18->SetFillColor(0);
   Z_mass_tagOnly_VR_18->SetFillStyle(4000);
   Z_mass_tagOnly_VR_18->SetBorderMode(0);
   Z_mass_tagOnly_VR_18->SetBorderSize(2);
   Z_mass_tagOnly_VR_18->SetFrameFillStyle(1000);
   Z_mass_tagOnly_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-49.59573,315.7258,49556.13);
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
   st->SetMaximum(44595.56);
   
   TH1F *st_stack_43 = new TH1F("st_stack_43","",1000,0,2000);
   st_stack_43->SetMinimum(0.01);
   st_stack_43->SetMaximum(44595.56);
   st_stack_43->SetDirectory(nullptr);
   st_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_43->SetLineColor(ci);
   st_stack_43->SetLineWidth(0);
   st_stack_43->GetXaxis()->SetRange(1,150);
   st_stack_43->GetXaxis()->SetLabelFont(42);
   st_stack_43->GetXaxis()->SetTitleOffset(1);
   st_stack_43->GetXaxis()->SetTitleFont(42);
   st_stack_43->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_43->GetYaxis()->SetLabelFont(42);
   st_stack_43->GetYaxis()->SetLabelSize(0.05);
   st_stack_43->GetYaxis()->SetTitleSize(0.057);
   st_stack_43->GetYaxis()->SetTitleOffset(1.2);
   st_stack_43->GetYaxis()->SetTitleFont(42);
   st_stack_43->GetZaxis()->SetLabelFont(42);
   st_stack_43->GetZaxis()->SetTitleOffset(1);
   st_stack_43->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_43);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,14590.14);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,15992.28);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,17139.47);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,18071.44);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,19000.61);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,12006.16);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,11791.66);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,11673.26);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,11415.85);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,11313.07);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,69.98664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,35002.02);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(5,0.02793584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(7,0.02012526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(8,0.0461157);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(9,0.03731589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(10,0.057066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(11,0.04335512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.4961016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,1.488092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,3.766196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,8.773179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,14.25075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,21.24281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,27.15784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,34.39256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,41.4875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,48.70895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,55.52201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,60.4753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,65.46627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,70.77814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,74.47773);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,77.44424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,80.25358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,82.80493);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,84.56268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,85.82323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,86.87425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,87.69617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,88.23441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,88.03462);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,87.83096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,87.44486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,87.24678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,87.18037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,86.45979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,86.39542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,85.12767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,85.23776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,84.30209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,83.7868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,82.82832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,81.68559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,81.24768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,80.85287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,79.75406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,79.21712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,78.44059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,77.36181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,76.32276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,75.43906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,75.34081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,74.21399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,73.59623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,72.91551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,72.98385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,71.95321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,71.67623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,71.20316);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,70.54289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,69.92345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,69.62453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,68.83602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,68.90869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,68.17661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,67.90583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,66.80791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,66.61634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,69.59935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,66.02881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,65.55378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,65.10719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,65.03086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,63.72789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,65.44862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,63.24415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,63.56695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,67.1364);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,63.21688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,62.76759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,61.23166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,60.80019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,60.64517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,60.04712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,59.96757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,59.73172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,69.34083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,59.35388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,58.56389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,58.2564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,58.28391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,57.56449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,56.72409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,56.39676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,56.54417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,56.29262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,56.22183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,55.42574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,55.28558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,55.14346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,54.86903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,54.28038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,54.28302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,53.16314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,53.33113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,53.4872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,52.70842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,53.03598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,52.06587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,52.06019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,51.70538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,50.83359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,51.5964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,51.12171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,50.52802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,50.31609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,50.21524);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,50.87277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,49.72957);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,50.34041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,50.68776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,49.39289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,48.99676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,53.13974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,49.17797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,48.66538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,48.10102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,48.03645);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,47.70891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,47.48153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,47.12356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,47.44667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,47.30232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,48.52106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,47.11791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,46.49018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,46.57587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,46.49531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,46.0466);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,45.94747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,45.72907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,45.55022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,45.54554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,45.09003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,46.13136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,45.2395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,45.32289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,45.16381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,44.29518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,45.31086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,44.18539);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,44.32262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,43.82051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,44.00106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,44.65214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,43.85049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,43.63337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,43.70612);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,44.38647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,42.82658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,43.08878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,43.35459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,43.06565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,42.4209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,42.9636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,42.78139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,42.3856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,42.08707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,42.02582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,42.04171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,42.05504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,41.82257);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,41.74984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,41.59608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,41.54767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,41.49344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,42.11169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,42.24756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,41.43584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,41.60021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,40.879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,41.22134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,40.79619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,41.33345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,40.651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,41.13096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,40.34473);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,40.8763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,40.82565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,40.51568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,39.98871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,40.10594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,40.28691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,39.94354);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,39.54062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,39.69502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,40.11089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,39.82286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,39.96675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,40.05316);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,39.38789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,39.21787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,39.30903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,39.31478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,38.67529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,39.42872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,38.70634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,38.72718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,38.8416);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,38.69691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,38.89279);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,38.75078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,38.57761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,38.2512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,37.98728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,38.52216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,38.16864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,38.41723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,37.84281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,37.83205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,37.89358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,38.06634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,39.28233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,37.84827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,37.88989);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,38.20379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,37.80458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,37.89195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,37.67456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,37.28065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,36.84159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,37.35662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,37.0689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,37.00205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,37.51704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,36.35721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,37.1274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,36.64981);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,36.64518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,36.37422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,36.45602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,36.42451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,36.32271);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,36.34753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,37.02303);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,35.97336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,35.9481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,36.08536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,35.42472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,35.71649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,36.16709);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,35.55403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,35.65861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,35.57188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,35.66609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,35.24895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,35.59852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,35.49504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,35.11207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,35.14504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,35.06814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,34.7484);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,34.72452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,34.70781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,35.14913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,34.60232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,34.58107);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,34.5345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,34.48951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,34.16701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,33.84032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,34.21396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,34.07397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,34.04268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,33.92765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,34.01843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,34.81823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,34.10712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,34.83816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,33.89259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,33.44694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,33.83449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,33.5458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,33.45719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,33.5119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,33.06197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,33.32276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,33.96894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,33.35491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,33.08674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,32.79453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,32.80535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,32.89168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,32.57644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,32.91237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,32.80864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,32.74833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,32.3909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,32.306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,34.24339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,32.17365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,32.4156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,32.17181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,32.11646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,31.96967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,32.09616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,32.74794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,32.04792);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,31.56401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,31.70443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,31.91426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,31.85015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,31.81155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,32.54284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,32.39676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,31.22724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,31.50781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,31.03588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,31.02874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,30.99997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,31.287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,31.38498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,30.82624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,30.70409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,40.90745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,30.70836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,30.62833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,30.56401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,30.34474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,30.09031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,30.43637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,30.20041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,30.21575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,30.08164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,30.07793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,30.06697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,29.89695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,30.00339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,29.6766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,29.7828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,29.68984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,29.78244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,29.64549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,29.60855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,29.32894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,29.36643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,29.36071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,29.79343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,29.56346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,29.25869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,28.91984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,28.90988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,29.00637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,28.99562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,29.20695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,28.96308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,29.1925);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,28.57586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,28.5397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,28.41723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,29.50779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,28.2565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,30.45455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,28.13906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,28.26432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,28.45918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,28.38102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,28.40499);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,28.26354);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,28.28597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,27.96742);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,27.58624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,27.51833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,28.02305);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,27.61897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,27.50566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,27.44556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,27.39567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,27.53577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,27.22175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,28.66292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,27.51492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,26.95645);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,26.86614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,26.80045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,26.96191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,27.47486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,26.67789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,26.91672);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,26.77544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,26.87776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,26.3682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,27.10526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,26.49576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,26.54406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,25.95136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,26.42829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,25.8885);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,26.33817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,26.21237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,26.25708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,25.94582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,25.85251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,26.02059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,25.76859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,25.6586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,25.89373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,25.51678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,25.64397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,26.51679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,25.31891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,25.78781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,25.43362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,28.22718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,25.66011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,25.92741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,25.39289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,25.66806);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,25.04956);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,25.33515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,24.79326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,24.84101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,24.90824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,24.85401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,24.85883);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,24.44833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,24.88343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,24.63309);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,24.11614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,24.53859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,24.31615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,24.72562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,24.37166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,24.02164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,24.13145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,24.10227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,24.10635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,23.80197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,23.81602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,23.68389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,23.94326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,23.83403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,23.85867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,24.03375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,23.76023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,24.08043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,23.87788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,23.23983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,23.74375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,23.36182);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,23.23082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,23.35524);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,23.25234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,23.23501);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,23.21074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,24.47124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,23.03235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,23.02383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,23.01164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,23.02131);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,22.62495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,22.90994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,22.44798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,22.26881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,23.02383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,22.41385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,22.56909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,22.29184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,22.80803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,22.65432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,22.18403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,22.15116);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,22.2438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,22.61487);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,21.96979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,21.99579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,21.944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,22.26436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,21.93164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,21.61221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,21.83828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,22.81006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,21.45638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,21.51527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,21.53589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,21.39677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,21.68252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,21.41982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,21.49143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,21.49334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,21.34824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,21.67875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,21.00389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,20.9005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,21.03176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,21.5348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,21.10015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,20.85722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,20.92423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,20.81391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,20.93174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,20.85912);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,20.49905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,20.64945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,20.58231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,20.47766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,20.28899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,20.91635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,20.50092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,20.52477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,20.44738);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,20.2667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,20.34044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,20.40633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,20.18751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,20.29123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,20.17553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,19.85129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,19.80335);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,19.62908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,19.84067);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,19.86899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,19.95126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,19.62053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,19.658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,19.87456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,19.60443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,19.62476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,19.73297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,19.71236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,19.3417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,19.43263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,19.35353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,19.50191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,20.10715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,19.48739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,19.49008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,19.12336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,19.06697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,19.37953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,19.04211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,18.88779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,19.42807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,18.74355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,19.08695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,19.08625);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,18.82259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,18.55681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,18.67869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,18.7218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,18.37723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,18.42583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,19.85902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,18.43748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,18.22547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,18.40327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,18.521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,18.22249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,18.12214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,18.34735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,18.25314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,18.37972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,18.05584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,18.27326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,18.07436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,18.11007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,17.9856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,18.09369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,17.81258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,17.80077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,17.6028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,18.13409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,21.08072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,17.59194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,17.69326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,17.63032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,17.4311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,17.48039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,17.87241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,17.65239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,17.78057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,17.44042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,17.29689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,17.19426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,17.05544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,17.25648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,17.09409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,17.73859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,16.90304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,17.33363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,16.83877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,16.85942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,24.41068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,16.87127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,16.86786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,16.91554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,16.56795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,16.73336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,16.98349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,16.60938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,16.48759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,16.30308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,16.56709);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,16.50184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,16.69851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,16.49274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,16.84345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,16.2646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,16.40028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,16.12622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,16.66911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,16.54643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,16.05024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,16.31977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,16.31897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,15.85138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,15.98538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,16.00681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,15.79266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,15.79434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,16.2041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,15.89205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,15.77349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,15.93497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,15.55175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,16.10873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,15.86606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,15.80914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,15.80203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,15.7722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,15.3657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,15.78687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,15.40355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,15.59793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,15.60189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,15.70694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,15.28563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,15.23249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,15.3386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,15.56223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,15.75016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,15.56341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,15.13917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,15.11968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,15.07244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,15.27414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,15.18534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,15.10169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,15.3259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,14.884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,15.25641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,15.222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,15.14381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,15.02275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,14.50525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,14.74639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,14.77649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,15.05769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,14.7392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,14.844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,14.76365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,14.56906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,14.62233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,14.57594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,14.35028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,14.61898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,14.49516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,14.50732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,14.24564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,14.55978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,14.35247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,14.14098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,14.11429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,14.15818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,14.60019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,14.21204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,14.25503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,13.95415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,14.4146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,14.32483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,14.02451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,13.76435);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,14.33007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,14.08089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,14.1089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,14.1064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,14.14112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,14.14983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,13.88154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,16.49884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,14.01118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,13.85114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,13.78358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,14.11624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,13.53377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,13.90545);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,13.96106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,14.21795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,13.77925);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,13.80848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,13.70318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,13.27835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,13.66891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,13.59727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,13.49196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,13.34418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,13.20654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,12.98044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,13.54567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,13.14113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,13.19809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,12.77235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,13.41492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,13.433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,13.17746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,13.62189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,12.80148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,13.17826);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,12.8325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,12.94671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,12.86736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,13.10001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,12.88514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,13.0199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,13.10972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,12.4012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,12.69033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,12.86918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,13.55701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,12.94665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,12.58658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,12.81714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,12.92947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,12.70402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,12.72935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,12.57515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,12.78963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,12.69507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,12.34697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,12.31058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,12.51251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,12.66841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,12.26626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,12.26301);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,12.3633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,12.36319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,12.94055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,12.44718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,12.36771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,12.11989);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,12.22102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,12.16349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,12.52207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,11.9761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,12.19103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,12.23547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,12.42682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,11.99366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,11.97016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,11.88968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,11.97194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,12.3835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,12.03363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,12.00679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,11.66452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,12.13661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,11.87662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,11.65244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,11.80164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,11.69819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,11.83662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,11.92632);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,11.61144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,11.77483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,11.86283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,11.52095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,11.86861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,11.36821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,11.49671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,11.7359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,11.4657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,11.42865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,11.31071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,11.3778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,11.46362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,14.50331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,11.44732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,11.22772);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,11.3899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,11.21959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,11.01232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,11.04265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,11.35845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,11.43729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,10.85704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,10.92878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,11.0446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,11.70824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,10.93838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,10.97678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,10.91436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,11.02658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,10.83408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,11.22355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,11.09642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,10.97633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,10.90558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,10.65466);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,10.98996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,10.91668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,10.88739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,10.79708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,11.08169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,10.6543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,10.93708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,10.85148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,10.95082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,10.33259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,10.57467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,10.65153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,10.7714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,10.37871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,10.53966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,10.40304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,10.74319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,10.48468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,18.52694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,10.41299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,10.54017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,10.72802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,10.24717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,10.2646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,10.27759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,10.24728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,10.33234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,10.25781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,10.16336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,10.3355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,10.30837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,9.823228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,10.33273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,10.11189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,9.99523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,10.00142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,10.16547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,9.853927);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,9.992661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,10.13988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,9.584844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,10.36335);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,10.23943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,10.00284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,10.30318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,9.889823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,9.753186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,10.08692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,10.17491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,10.1682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,10.28552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,9.830827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,9.76765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,9.721696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,9.800654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,9.967418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,10.00748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,9.412582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,9.596771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,9.983274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,9.617637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,9.432146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,9.547035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,9.29684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,9.39979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,9.381069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,9.332313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,9.613492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,9.416202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,9.523881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,9.665518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,9.428832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,9.246479);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,9.188316);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,9.356784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,9.198778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,9.61471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,9.426511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,9.549332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,9.169319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,9.43265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,9.157535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,9.244045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,9.388364);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,8.962481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,9.342038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,8.845157);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,8.723953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,9.033402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,9.027055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,9.585873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,9.05699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,9.210387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,8.910955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,8.71336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,8.899958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,9.068487);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,8.899407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,8.993339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,9.08858);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,12.34847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,8.814242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,8.474526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,9.161652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,9.031965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,9.053765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,9.091566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,8.857995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,9.022029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,8.717968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,8.492732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,8.711269);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,8.447332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,8.838685);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,8.677173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,8.612507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,8.583796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,8.191202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,8.298865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,8.585212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,8.954753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,8.471926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,8.435415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,8.247169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,8.482906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,8.326993);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,8.289029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,8.576882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,8.249339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,8.435467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,8.520488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,8.432272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,8.227754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,8.448837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,8.194809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,8.302882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,8.054163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,8.239178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,8.512088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,8.360235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,8.369232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,7.90199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,7.867917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,8.447832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,8.312264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,8.293828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,8.012122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,7.583652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,8.022082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,8.108485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,8.133755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,7.780805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,7.605367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,8.169351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,7.897016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,7.848766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,7.912774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,8.284918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,7.84477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,7.939588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,8.164673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,7.869551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,7.877677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,7.95492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,7.712525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,7.63072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,7.725392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,7.667229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,7.663504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,8.045005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,7.796715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,7.609705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,7.649416);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,7.544811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,7.856361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,7.670161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,7.641472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,7.334573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,7.47586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,7.417947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,7.523145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,7.504361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,7.671467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,7.424309);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,7.776658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,7.335044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,7.475024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,7.437898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,118.0338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(4876164);

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
   
   TH1D *VH_tagOnly_Z_mass__85 = new TH1D("VH_tagOnly_Z_mass__85","",1000,0,2000);
   VH_tagOnly_Z_mass__85->SetBinContent(26,15944);
   VH_tagOnly_Z_mass__85->SetBinContent(27,17166);
   VH_tagOnly_Z_mass__85->SetBinContent(28,18192);
   VH_tagOnly_Z_mass__85->SetBinContent(29,19278);
   VH_tagOnly_Z_mass__85->SetBinContent(30,20068);
   VH_tagOnly_Z_mass__85->SetBinContent(61,14684);
   VH_tagOnly_Z_mass__85->SetBinContent(62,14386);
   VH_tagOnly_Z_mass__85->SetBinContent(63,14280);
   VH_tagOnly_Z_mass__85->SetBinContent(64,14068);
   VH_tagOnly_Z_mass__85->SetBinContent(65,14032);
   VH_tagOnly_Z_mass__85->SetBinContent(1000,80);
   VH_tagOnly_Z_mass__85->SetBinContent(1001,41058);
   VH_tagOnly_Z_mass__85->SetEntries(2828263);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__85->SetLineColor(ci);
   VH_tagOnly_Z_mass__85->SetLineWidth(2);
   VH_tagOnly_Z_mass__85->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__85->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__85->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__85->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__85->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__85->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__85->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__85->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__85->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__85->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__85->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__85->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1085[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1085[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 14590.14, 15992.28, 17139.47, 18071.44, 19000.61, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12006.16, 11791.66, 11673.26, 11415.85, 11313.07,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 69.98664 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1085[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1085[1000] = { 0, 0, 0, 0, 0.02793584, 0, 0.02012526, 0.0461157, 0.03731589, 0.057066, 0.04335512, 0.4961016, 1.488092, 3.766196, 8.773179, 14.25075, 21.24281,
   27.15784, 34.39256, 41.4875, 48.70895, 55.52201, 60.4753, 65.46627, 70.77814, 74.47773, 77.44424, 80.25358, 82.80493, 84.56268, 85.82323, 86.87425, 87.69617,
   88.23441, 88.03462, 87.83096, 87.44486, 87.24678, 87.18037, 86.45979, 86.39542, 85.12767, 85.23776, 84.30209, 83.7868, 82.82832, 81.68559, 81.24768, 80.85287,
   79.75406, 79.21712, 78.44059, 77.36181, 76.32276, 75.43906, 75.34081, 74.21399, 73.59623, 72.91551, 72.98385, 71.95321, 71.67623, 71.20316, 70.54289, 69.92345,
   69.62453, 68.83602, 68.90869, 68.17661, 67.90583, 66.80791, 66.61634, 69.59935, 66.02881, 65.55378, 65.10719, 65.03086, 63.72789, 65.44862, 63.24415, 63.56695,
   67.1364, 63.21688, 62.76759, 61.23166, 60.80019, 60.64517, 60.04712, 59.96757, 59.73172, 69.34083, 59.35388, 58.56389, 58.2564, 58.28391, 57.56449, 56.72409,
   56.39676, 56.54417, 56.29262, 56.22183, 55.42574, 55.28558, 55.14346, 54.86903, 54.28038, 54.28302, 53.16314, 53.33113, 53.4872, 52.70842, 53.03598, 52.06587,
   52.06019, 51.70538, 50.83359, 51.5964, 51.12171, 50.52802, 50.31609, 50.21524, 50.87277, 49.72957, 50.34041, 50.68776, 49.39289, 48.99676, 53.13974, 49.17797,
   48.66538, 48.10102, 48.03645, 47.70891, 47.48153, 47.12356, 47.44667, 47.30232, 48.52106, 47.11791, 46.49018, 46.57587, 46.49531, 46.0466, 45.94747, 45.72907,
   45.55022, 45.54554, 45.09003, 46.13136, 45.2395, 45.32289, 45.16381, 44.29518, 45.31086, 44.18539, 44.32262, 43.82051, 44.00106, 44.65214, 43.85049, 43.63337,
   43.70612, 44.38647, 42.82658, 43.08878, 43.35459, 43.06565, 42.4209, 42.9636, 42.78139, 42.3856, 42.08707, 42.02582, 42.04171, 42.05504, 41.82257, 41.74984,
   41.59608, 41.54767, 41.49344, 42.11169, 42.24756, 41.43584, 41.60021, 40.879, 41.22134, 40.79619, 41.33345, 40.651, 41.13096, 40.34473, 40.8763, 40.82565,
   40.51568, 39.98871, 40.10594, 40.28691, 39.94354, 39.54062, 39.69502, 40.11089, 39.82286, 39.96675, 40.05316, 39.38789, 39.21787, 39.30903, 39.31478, 38.67529,
   39.42872, 38.70634, 38.72718, 38.8416, 38.69691, 38.89279, 38.75078, 38.57761, 38.2512, 37.98728, 38.52216, 38.16864, 38.41723, 37.84281, 37.83205, 37.89358,
   38.06634, 39.28233, 37.84827, 37.88989, 38.20379, 37.80458, 37.89195, 37.67456, 37.28065, 36.84159, 37.35662, 37.0689, 37.00205, 37.51704, 36.35721, 37.1274,
   36.64981, 36.64518, 36.37422, 36.45602, 36.42451, 36.32271, 36.34753, 37.02303, 35.97336, 35.9481, 36.08536, 35.42472, 35.71649, 36.16709, 35.55403, 35.65861,
   35.57188, 35.66609, 35.24895, 35.59852, 35.49504, 35.11207, 35.14504, 35.06814, 34.7484, 34.72452, 34.70781, 35.14913, 34.60232, 34.58107, 34.5345, 34.48951,
   34.16701, 33.84032, 34.21396, 34.07397, 34.04268, 33.92765, 34.01843, 34.81823, 34.10712, 34.83816, 33.89259, 33.44694, 33.83449, 33.5458, 33.45719, 33.5119,
   33.06197, 33.32276, 33.96894, 33.35491, 33.08674, 32.79453, 32.80535, 32.89168, 32.57644, 32.91237, 32.80864, 32.74833, 32.3909, 32.306, 34.24339, 32.17365,
   32.4156, 32.17181, 32.11646, 31.96967, 32.09616, 32.74794, 32.04792, 31.56401, 31.70443, 31.91426, 31.85015, 31.81155, 32.54284, 32.39676, 31.22724, 31.50781,
   31.03588, 31.02874, 30.99997, 31.287, 31.38498, 30.82624, 30.70409, 40.90745, 30.70836, 30.62833, 30.56401, 30.34474, 30.09031, 30.43637, 30.20041, 30.21575,
   30.08164, 30.07793, 30.06697, 29.89695, 30.00339, 29.6766, 29.7828, 29.68984, 29.78244, 29.64549, 29.60855, 29.32894, 29.36643, 29.36071, 29.79343, 29.56346,
   29.25869, 28.91984, 28.90988, 29.00637, 28.99562, 29.20695, 28.96308, 29.1925, 28.57586, 28.5397, 28.41723, 29.50779, 28.2565, 30.45455, 28.13906, 28.26432,
   28.45918, 28.38102, 28.40499, 28.26354, 28.28597, 27.96742, 27.58624, 27.51833, 28.02305, 27.61897, 27.50566, 27.44556, 27.39567, 27.53577, 27.22175, 28.66292,
   27.51492, 26.95645, 26.86614, 26.80045, 26.96191, 27.47486, 26.67789, 26.91672, 26.77544, 26.87776, 26.3682, 27.10526, 26.49576, 26.54406, 25.95136, 26.42829,
   25.8885, 26.33817, 26.21237, 26.25708, 25.94582, 25.85251, 26.02059, 25.76859, 25.6586, 25.89373, 25.51678, 25.64397, 26.51679, 25.31891, 25.78781, 25.43362,
   28.22718, 25.66011, 25.92741, 25.39289, 25.66806, 25.04956, 25.33515, 24.79326, 24.84101, 24.90824, 24.85401, 24.85883, 24.44833, 24.88343, 24.63309, 24.11614,
   24.53859, 24.31615, 24.72562, 24.37166, 24.02164, 24.13145, 24.10227, 24.10635, 23.80197, 23.81602, 23.68389, 23.94326, 23.83403, 23.85867, 24.03375, 23.76023,
   24.08043, 23.87788, 23.23983, 23.74375, 23.36182, 23.23082, 23.35524, 23.25234, 23.23501, 23.21074, 24.47124, 23.03235, 23.02383, 23.01164, 23.02131, 22.62495,
   22.90994, 22.44798, 22.26881, 23.02383, 22.41385, 22.56909, 22.29184, 22.80803, 22.65432, 22.18403, 22.15116, 22.2438, 22.61487, 21.96979, 21.99579, 21.944,
   22.26436, 21.93164, 21.61221, 21.83828, 22.81006, 21.45638, 21.51527, 21.53589, 21.39677, 21.68252, 21.41982, 21.49143, 21.49334, 21.34824, 21.67875, 21.00389,
   20.9005, 21.03176, 21.5348, 21.10015, 20.85722, 20.92423, 20.81391, 20.93174, 20.85912, 20.49905, 20.64945, 20.58231, 20.47766, 20.28899, 20.91635, 20.50092,
   20.52477, 20.44738, 20.2667, 20.34044, 20.40633, 20.18751, 20.29123, 20.17553, 19.85129, 19.80335, 19.62908, 19.84067, 19.86899, 19.95126, 19.62053, 19.658,
   19.87456, 19.60443, 19.62476, 19.73297, 19.71236, 19.3417, 19.43263, 19.35353, 19.50191, 20.10715, 19.48739, 19.49008, 19.12336, 19.06697, 19.37953, 19.04211,
   18.88779, 19.42807, 18.74355, 19.08695, 19.08625, 18.82259, 18.55681, 18.67869, 18.7218, 18.37723, 18.42583, 19.85902, 18.43748, 18.22547, 18.40327, 18.521,
   18.22249, 18.12214, 18.34735, 18.25314, 18.37972, 18.05584, 18.27326, 18.07436, 18.11007, 17.9856, 18.09369, 17.81258, 17.80077, 17.6028, 18.13409, 21.08072,
   17.59194, 17.69326, 17.63032, 17.4311, 17.48039, 17.87241, 17.65239, 17.78057, 17.44042, 17.29689, 17.19426, 17.05544, 17.25648, 17.09409, 17.73859, 16.90304,
   17.33363, 16.83877, 16.85942, 24.41068, 16.87127, 16.86786, 16.91554, 16.56795, 16.73336, 16.98349, 16.60938, 16.48759, 16.30308, 16.56709, 16.50184, 16.69851,
   16.49274, 16.84345, 16.2646, 16.40028, 16.12622, 16.66911, 16.54643, 16.05024, 16.31977, 16.31897, 15.85138, 15.98538, 16.00681, 15.79266, 15.79434, 16.2041,
   15.89205, 15.77349, 15.93497, 15.55175, 16.10873, 15.86606, 15.80914, 15.80203, 15.7722, 15.3657, 15.78687, 15.40355, 15.59793, 15.60189, 15.70694, 15.28563,
   15.23249, 15.3386, 15.56223, 15.75016, 15.56341, 15.13917, 15.11968, 15.07244, 15.27414, 15.18534, 15.10169, 15.3259, 14.884, 15.25641, 15.222, 15.14381,
   15.02275, 14.50525, 14.74639, 14.77649, 15.05769, 14.7392, 14.844, 14.76365, 14.56906, 14.62233, 14.57594, 14.35028, 14.61898, 14.49516, 14.50732, 14.24564,
   14.55978, 14.35247, 14.14098, 14.11429, 14.15818, 14.60019, 14.21204, 14.25503, 13.95415, 14.4146, 14.32483, 14.02451, 13.76435, 14.33007, 14.08089, 14.1089,
   14.1064, 14.14112, 14.14983, 13.88154, 16.49884, 14.01118, 13.85114, 13.78358, 14.11624, 13.53377, 13.90545, 13.96106, 14.21795, 13.77925, 13.80848, 13.70318,
   13.27835, 13.66891, 13.59727, 13.49196, 13.34418, 13.20654, 12.98044, 13.54567, 13.14113, 13.19809, 12.77235, 13.41492, 13.433, 13.17746, 13.62189, 12.80148,
   13.17826, 12.8325, 12.94671, 12.86736, 13.10001, 12.88514, 13.0199, 13.10972, 12.4012, 12.69033, 12.86918, 13.55701, 12.94665, 12.58658, 12.81714, 12.92947,
   12.70402, 12.72935, 12.57515, 12.78963, 12.69507, 12.34697, 12.31058, 12.51251, 12.66841, 12.26626, 12.26301, 12.3633, 12.36319, 12.94055, 12.44718, 12.36771,
   12.11989, 12.22102, 12.16349, 12.52207, 11.9761, 12.19103, 12.23547, 12.42682, 11.99366, 11.97016, 11.88968, 11.97194, 12.3835, 12.03363, 12.00679, 11.66452,
   12.13661, 11.87662, 11.65244, 11.80164, 11.69819, 11.83662, 11.92632, 11.61144, 11.77483, 11.86283, 11.52095, 11.86861, 11.36821, 11.49671, 11.7359, 11.4657,
   11.42865, 11.31071, 11.3778, 11.46362, 14.50331, 11.44732, 11.22772, 11.3899, 11.21959, 11.01232, 11.04265, 11.35845, 11.43729, 10.85704, 10.92878, 11.0446,
   11.70824, 10.93838, 10.97678, 10.91436, 11.02658, 10.83408, 11.22355, 11.09642, 10.97633, 10.90558, 10.65466, 10.98996, 10.91668, 10.88739, 10.79708, 11.08169,
   10.6543, 10.93708, 10.85148, 10.95082, 10.33259, 10.57467, 10.65153, 10.7714, 10.37871, 10.53966, 10.40304, 10.74319, 10.48468, 18.52694, 10.41299, 10.54017,
   10.72802, 10.24717, 10.2646, 10.27759, 10.24728, 10.33234, 10.25781, 10.16336, 10.3355, 10.30837, 9.823228, 10.33273, 10.11189, 9.99523, 10.00142, 10.16547,
   9.853927, 9.992661, 10.13988, 9.584844, 10.36335, 10.23943, 10.00284, 10.30318, 9.889823, 9.753186, 10.08692, 10.17491, 10.1682, 10.28552, 9.830827, 9.76765,
   9.721696, 9.800654, 9.967418, 10.00748, 9.412582, 9.596771, 9.983274, 9.617637, 9.432146, 9.547035, 9.29684, 9.39979, 9.381069, 9.332313, 9.613492, 9.416202,
   9.523881, 9.665518, 9.428832, 9.246479, 9.188316, 9.356784, 9.198778, 9.61471, 9.426511, 9.549332, 9.169319, 9.43265, 9.157535, 9.244045, 9.388364, 8.962481,
   9.342038, 8.845157, 8.723953, 9.033402, 9.027055, 9.585873, 9.05699, 9.210387, 8.910955, 8.71336, 8.899958, 9.068487, 8.899407, 8.993339, 9.08858, 12.34847,
   8.814242, 8.474526, 9.161652, 9.031965, 9.053765, 9.091566, 8.857995, 9.022029, 8.717968, 8.492732, 8.711269, 8.447332, 8.838685, 8.677173, 8.612507, 8.583796,
   8.191202, 8.298865, 8.585212, 8.954753, 8.471926, 8.435415, 8.247169, 8.482906, 8.326993, 8.289029, 8.576882, 8.249339, 8.435467, 8.520488, 8.432272, 8.227754,
   8.448837, 8.194809, 8.302882, 8.054163, 8.239178, 8.512088, 8.360235, 8.369232, 7.90199, 7.867917, 8.447832, 8.312264, 8.293828, 8.012122, 7.583652, 8.022082,
   8.108485, 8.133755, 7.780805, 7.605367, 8.169351, 7.897016, 7.848766, 7.912774, 8.284918, 7.84477, 7.939588, 8.164673, 7.869551, 7.877677, 7.95492, 7.712525,
   7.63072, 7.725392, 7.667229, 7.663504, 8.045005, 7.796715, 7.609705, 7.649416, 7.544811, 7.856361, 7.670161, 7.641472, 7.334573, 7.47586, 7.417947, 7.523145,
   7.504361, 7.671467, 7.424309, 7.776658, 7.335044, 7.475024, 7.437898 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1085,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1085,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1085,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1085);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->SetMinimum(-2005.575);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->SetMaximum(21002.51);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1085);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagOnly_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__86 = new TH1D("data_mc_ratio__86","",1000,0,2000);
   data_mc_ratio__86->SetBinContent(26,1.092793);
   data_mc_ratio__86->SetBinContent(27,1.073393);
   data_mc_ratio__86->SetBinContent(28,1.06141);
   data_mc_ratio__86->SetBinContent(29,1.066766);
   data_mc_ratio__86->SetBinContent(30,1.056177);
   data_mc_ratio__86->SetBinContent(61,1.223038);
   data_mc_ratio__86->SetBinContent(62,1.220015);
   data_mc_ratio__86->SetBinContent(63,1.223308);
   data_mc_ratio__86->SetBinContent(64,1.232321);
   data_mc_ratio__86->SetBinContent(65,1.240335);
   data_mc_ratio__86->SetBinContent(1000,1.143075);
   data_mc_ratio__86->SetBinContent(1001,1.173018);
   data_mc_ratio__86->SetBinError(26,0.008654444);
   data_mc_ratio__86->SetBinError(27,0.008192647);
   data_mc_ratio__86->SetBinError(28,0.007869421);
   data_mc_ratio__86->SetBinError(29,0.007683131);
   data_mc_ratio__86->SetBinError(30,0.007455634);
   data_mc_ratio__86->SetBinError(61,0.01009295);
   data_mc_ratio__86->SetBinError(62,0.01017174);
   data_mc_ratio__86->SetBinError(63,0.01023698);
   data_mc_ratio__86->SetBinError(64,0.01038981);
   data_mc_ratio__86->SetBinError(65,0.01047079);
   data_mc_ratio__86->SetBinError(1000,0.1277997);
   data_mc_ratio__86->SetBinError(1001,0.00701142);
   data_mc_ratio__86->SetMinimum(0.4);
   data_mc_ratio__86->SetMaximum(1.6);
   data_mc_ratio__86->SetEntries(4933.521);
   data_mc_ratio__86->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__86->SetLineColor(ci);
   data_mc_ratio__86->SetLineWidth(2);
   data_mc_ratio__86->SetMarkerStyle(20);
   data_mc_ratio__86->SetMarkerSize(1.2);
   data_mc_ratio__86->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__86->GetXaxis()->SetRange(1,150);
   data_mc_ratio__86->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__86->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__86->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__86->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__86->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__86->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__86->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__86->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__86->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__86->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__86->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__86->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__86->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__86->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1086[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1086[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1086[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1086[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.005104662, 0.004842602, 0.004682383, 0.004582088, 0.004450525, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005993023, 0.006078555, 0.00609968, 0.00617938, 0.006180767,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.106276 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1086,Graph_from_mc_statistical_error_fy1086,Graph_from_mc_statistical_error_fex1086,Graph_from_mc_statistical_error_fey1086);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1086 = new TH1F("Graph_Graph_from_mc_statistical_error1086","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1086->SetMinimum(0.8724689);
   Graph_Graph_from_mc_statistical_error1086->SetMaximum(1.127531);
   Graph_Graph_from_mc_statistical_error1086->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1086->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1086->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1086->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1086->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1086);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_18->cd();
   Z_mass_tagOnly_VR_18->Modified();
   Z_mass_tagOnly_VR_18->cd();
   Z_mass_tagOnly_VR_18->SetSelected(Z_mass_tagOnly_VR_18);
}
