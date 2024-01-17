#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_17/H_mass_tagFirst_VR_17
//=========  (Mon Jan  8 11:15:51 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_17 = new TCanvas("H_mass_tagFirst_VR_17", "H_mass_tagFirst_VR_17",0,0,600,600);
   H_mass_tagFirst_VR_17->SetHighLightColor(2);
   H_mass_tagFirst_VR_17->Range(0,0,1,1);
   H_mass_tagFirst_VR_17->SetFillColor(0);
   H_mass_tagFirst_VR_17->SetFillStyle(4000);
   H_mass_tagFirst_VR_17->SetBorderMode(0);
   H_mass_tagFirst_VR_17->SetBorderSize(2);
   H_mass_tagFirst_VR_17->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-16.4898,315.7258,16483.31);
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
   st->SetMaximum(14833.33);
   
   TH1F *st_stack_47 = new TH1F("st_stack_47","",1000,0,2000);
   st_stack_47->SetMinimum(0.01);
   st_stack_47->SetMaximum(14833.33);
   st_stack_47->SetDirectory(nullptr);
   st_stack_47->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_47->SetLineColor(ci);
   st_stack_47->SetLineWidth(0);
   st_stack_47->GetXaxis()->SetRange(1,150);
   st_stack_47->GetXaxis()->SetLabelFont(42);
   st_stack_47->GetXaxis()->SetTitleOffset(1);
   st_stack_47->GetXaxis()->SetTitleFont(42);
   st_stack_47->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_47->GetYaxis()->SetLabelFont(42);
   st_stack_47->GetYaxis()->SetLabelSize(0.05);
   st_stack_47->GetYaxis()->SetTitleSize(0.057);
   st_stack_47->GetYaxis()->SetTitleOffset(1.2);
   st_stack_47->GetYaxis()->SetTitleFont(42);
   st_stack_47->GetZaxis()->SetLabelFont(42);
   st_stack_47->GetZaxis()->SetTitleOffset(1);
   st_stack_47->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_47);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,3262.387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,6512.233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,6474.178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,6401.526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,6247.575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,3184.546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2496.522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,5213.592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,5184.185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,5067.857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,5099.858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,2527.658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,22.91974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,8297.81);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.834721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.410121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,9.28505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,13.46851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,18.51463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,23.59914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,28.37728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,33.45817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,37.93729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,41.71049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,45.04937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,48.17477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,50.13039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,52.15795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,53.26663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,54.68201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,55.77404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,55.87287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,55.99658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,56.13667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,56.04999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,55.84609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,55.54052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,55.51358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,55.24004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,54.88853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,54.77256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,54.39569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,54.35786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,54.09921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,52.99031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,53.06437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,53.06789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,52.91261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,52.61489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,51.97837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,51.99815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,51.75843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,51.32849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,51.31391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,51.35945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,51.10941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,51.25557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,50.81585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,50.78272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,50.39827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,50.27753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,50.50392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,50.34258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,49.72963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,49.77473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,49.81605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,49.78413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,49.71458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,49.31423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,49.22693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,49.11093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,49.05759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,48.53445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,48.63261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,48.53252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,48.00172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,47.82412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,48.13982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,47.89251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,47.89641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,47.02958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,47.4827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,47.3486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,46.81436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,46.96193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,46.60617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,46.24565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,46.52183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,46.39704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,45.50166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,45.86599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,45.47493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,45.82724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,45.42144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,45.01407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,44.97042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,44.80586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,44.40547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,44.74739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,44.23881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,44.36966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,44.21344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,44.09696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,43.6494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,43.7072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,43.44972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,43.40019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,43.49704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,43.52712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,43.30961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,43.01281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,43.04323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,42.63068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,42.56922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,42.54505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,42.58459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,42.52307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,42.18529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,42.68329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,42.64384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,42.21409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,41.89391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,41.53526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,41.57352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,42.14537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,41.60275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,41.67909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,41.1144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,41.32311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,41.11213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,41.59151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,41.49698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,40.81997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,40.6455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,40.4518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,40.53954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,40.45642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,40.57182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,41.05067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,40.38008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,40.6731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,40.53954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,40.6708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,40.01721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,39.74994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,39.96577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,39.9798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,40.06625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,39.72641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,39.55657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,39.46191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,39.61091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,39.6345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,39.6463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,39.26236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,39.31948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,39.20039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,39.03306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,38.87464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,38.98033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,39.17892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,39.2147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,38.44411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.8265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.84336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.63578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,38.52914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,38.16582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,38.03084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,38.17562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,38.07998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,38.34913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.86081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,38.1266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.63042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.56327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,37.42361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,37.35359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,37.33856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,37.21314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,37.01158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,37.01158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.69697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,36.86729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,37.15782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.73008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,37.02421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,37.3085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,36.95343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,36.18636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.62045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,36.32048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,36.53609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,36.34106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,36.31018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.53711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.88275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,36.06989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.65795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,35.18542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,35.44754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,35.41059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,35.15086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,35.38153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,35.40003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,35.07096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,35.3551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.81676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.85702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,34.93205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,34.33538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,34.30541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,34.5011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,34.49026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,34.33811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,34.0702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.75034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,33.98226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,34.11956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.59483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.6921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,33.38263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.70598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,33.4358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,33.10134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,33.11263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,33.28444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,33.33778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,33.2254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,33.15497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,33.1324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,32.32964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.5602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.56881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.74347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,32.31807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,32.22825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,32.05078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,32.12945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.93094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.87819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,31.94851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.7194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,31.44405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,31.99238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,31.44702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,31.36067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,31.00685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,31.4381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,30.97969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,30.91322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,31.13325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,31.12123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,31.02795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,30.41311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.73728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.62452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.56339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,29.91089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,29.92964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,30.01076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,30.02322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,29.98271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,30.14754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.77931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.65029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.88274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.6061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,29.17021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,29.38737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.77303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,29.20224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,29.01916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,29.13171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,28.87055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,29.00949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,29.01916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,28.95141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.43324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.67557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.45954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,28.27495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,28.1822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,28.37399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,27.87864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,28.13571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,28.08249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,28.14568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.64624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,27.85179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.7003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,27.15139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,27.27852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.42211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,27.20987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,27.0617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,26.86055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,27.12383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,26.55244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,26.95785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,26.29767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.50662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,26.83966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.43951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,26.2514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,25.9072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,26.24784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,25.92885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,26.11928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,25.93246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,26.3545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,25.82768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,25.78057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.85662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,25.28619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.84939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,25.31945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,25.36004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,25.30836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,25.4447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,25.16386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,24.95116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,25.13784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,25.02973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,24.34801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.90239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,24.78572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,24.61157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,24.34801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,24.13974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,24.53546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,24.41321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,24.17844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.91402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,23.42415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,23.6664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.6743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,23.7925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,23.77284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.84353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.85921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,23.49191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,23.17533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,23.4441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,23.07425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,23.34418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,23.3802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,23.2398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,23.0945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.90341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.84619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.85437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,22.429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,22.59928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,22.98899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,22.27422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,22.24481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,22.291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,22.16902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,22.36638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,22.10989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,22.09297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,21.80327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,22.47065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,21.49227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.91022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,21.78181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,21.51836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,21.47486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.76893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,22.30358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,21.50097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.9101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,21.00379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,21.40508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,21.03493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,20.94584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.93691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,20.99934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.82945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.78001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.88325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.86981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,20.49);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.86981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,20.38477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,20.20508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,20.35264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,20.18193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.8879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,20.00042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,20.05178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,20.21896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,20.01444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,20.17266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.74161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,19.77474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.73688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,19.68944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,19.46496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,19.55602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,19.25243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.69419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.83011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,19.41205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,19.12085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.29609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,19.14528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,18.9982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.88466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.9094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,19.04244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,18.50958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,18.4235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,18.245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.88466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,18.41842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,18.41842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,18.48936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,18.51968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,18.5852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,18.25524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,18.18853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,17.98172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.92965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.30129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,18.29106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.68812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,18.05438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,18.20395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,18.10609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,17.60865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.69869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,17.52348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,17.65638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.74618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.51814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,17.15679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,17.12406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.38957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,17.28169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,17.22207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.29792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,16.96497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,17.16769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,17.05293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.84328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,16.60848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.28169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,17.02549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,16.97048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,16.35888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,16.45008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,16.55773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,16.12863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.89317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.56902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.7598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,16.31882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,16.0356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,16.17494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.38744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,16.32455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,16.0938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.79471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,15.49588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.66393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,16.0356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,15.27711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,15.37472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.75322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.69375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,15.31989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,15.38688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.31989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.93668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,15.26486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.28934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,15.11094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.24647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,15.11094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,15.07997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,15.06136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.30768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.88023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,14.9617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,15.01784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.71594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,15.1727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,14.31657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,15.1295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.45955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,14.55622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.72229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,14.31657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,14.34267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.76035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.45955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.65226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.37523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.54337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.38824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.93932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,14.17875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.23141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.31657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.9259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.84509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.6957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,14.18535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.6752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.70253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.55157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.89228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.64783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.62726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.5929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.64783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.66152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,13.33595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.57225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.64097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.34997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,13.43376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,13.2727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,13.1666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.57914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.55157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,13.04531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,13.14528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,13.08825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,13.12392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,13.02379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.71132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.92289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,13.1595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,13.1737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.5186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.73337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.50365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.50365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.68186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.67449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.56334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,11.96873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.63755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.6005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.30768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.33803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.36075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.57821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.37587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.93744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.42112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.30768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.36075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,11.99215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.65204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.35318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.38342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.96092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.63598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.30008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,11.46599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.59573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,12.17016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.85885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,12.10854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.91392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.62794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,11.23533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,11.4415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.48229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.87461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,11.98435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.66808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.88248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.59573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,11.45783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,11.15179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.48229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,11.10137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.35948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.81984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.87157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.70009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.82848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.92306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,11.13501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,11.05917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.92306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,11.04225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,10.94016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.84574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.75048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.85436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.78522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.5574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.69817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.61922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.94871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.53079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.67192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,10.36072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.69817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.61041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.44162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,10.03987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.99133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.62802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.41472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.955698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.37875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.45058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,10.27917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,9.983835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.87157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.27007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,10.06777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,9.983835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,10.1141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,10.20614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,10.10486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,10.1141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.27917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.775618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.804272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.804272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.936896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,10.04918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,9.974465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.993196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.621358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,10.10486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.660154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.611635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.621358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.375247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.804272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.4547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.640776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.553086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.355278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.727675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.79473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.572642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.40512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,9.091696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,9.173605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.820241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,9.122498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.582405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.204133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,8.998658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,9.122498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.434899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,9.081406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.444805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.153197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.23456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,8.977852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.904647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.841418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,8.998658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.883621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,9.183793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.583846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.873089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,9.183793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.295115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.507252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.841418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.777734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,8.988261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.518236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.496253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.670553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.841418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.681331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.295789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.616463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.767075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.915142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.594732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.78838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.540162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.507252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.507252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.452116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.452116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.182298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.363144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.340753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.25058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.227882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.507252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.627309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.831965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.147943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.239239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.21651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.616463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,8.101909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,8.078793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,8.032363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,7.997364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,8.067211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.147943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.735863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,8.055612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.747941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.903274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.855806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.938688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.973945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.950458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.662996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.77204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.552378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.687362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.820016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.879576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.527575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.650784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.564749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.564749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.414937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.879576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.747941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.614031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.440115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.552378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.80805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.577099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.490217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.377009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.262035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.338884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.402316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.145212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.477723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.60174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.210347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.60174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.300561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,7.013126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.58943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.262035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,7.066257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.851263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.919166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.2749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.539987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,7.118991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.2749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.249148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.402316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.300561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,7.105844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.515143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,6.999781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,7.026447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.878505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.810196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,7.105844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.741196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.741196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.465208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,7.105844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.741196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.892085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.878505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.515485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.741196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.741196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.399645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.472288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.796452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,7.013126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.296536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.100428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.796452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.311369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.837602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,7.132113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.544124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.472288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.671481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.558397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.851263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.370355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.685482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.457824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.501117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.443329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.572639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.191712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.558397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.850047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.176591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.501117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.457824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.146239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.191712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.146239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,6.038806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.370355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.236852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.70438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.414239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.70438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.687964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.266765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.65499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,6.038806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.769575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.850047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.558397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.913636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,6.054271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,5.913636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.131007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.191712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.945176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.945176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,6.023302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.976549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.929427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,6.038806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.4288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.70438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.131007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.945176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.801897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.945176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.850047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.960883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.671501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.65499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.687964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.588458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.131007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.671501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.671501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.897803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.769575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.769575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.349085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.314009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.470081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.70438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.621823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.73707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.769575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.554894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.638431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.080113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.638431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.349085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.470081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.992174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.278699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.70438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.116793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.418557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.349085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.850047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.171325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.987232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.930665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.153211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.296383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.987232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.116793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,5.043166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.571701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.260956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.207362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.061673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.225288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.756927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.225288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,5.061673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.207362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.71745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.116793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.080113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.116793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.366537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.207362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.135034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.135034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,5.005946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.987232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.189375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.815536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.796079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.487149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.776543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.71745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.556121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,5.043166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.87344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,5.061673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.854216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.61728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.596984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.911664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.171325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.930665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.756927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.987232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.71745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.987232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,5.043166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.596984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.737229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.892589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.388867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.079705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.756927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.677639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.61728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.324479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.514889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.911664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.214981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.776543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,5.005946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.281016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.657606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.556121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.96345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.535552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.556121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.192738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.87344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.61728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.61728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.576598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.473276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.514889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.677639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,4.033605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.237107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.410121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.033605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.324479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.36751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.259118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.556121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.170377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.535552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.346048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,4.033605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.388867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.410121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.192738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.410121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.102561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.214981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.079705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.281016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.657606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.170377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.96345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.769993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.36751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.915982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.769993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.12529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.281016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.281016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.12529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.170377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.431272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,4.010357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.96345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.102561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.147895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,4.010357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.819276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.259118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.843681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.96345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.618119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.694836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.986973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.892031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.170377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.643871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.769993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.643871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.192738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.819276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.643871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.643871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.12529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.892031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.769993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.745109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.237107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,59.90301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(3075643);

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
   
   TH1D *VH_tagFirst_H_mass__93 = new TH1D("VH_tagFirst_H_mass__93","",1000,0,2000);
   VH_tagFirst_H_mass__93->SetBinContent(43,3356);
   VH_tagFirst_H_mass__93->SetBinContent(44,6675);
   VH_tagFirst_H_mass__93->SetBinContent(45,6502);
   VH_tagFirst_H_mass__93->SetBinContent(46,6537);
   VH_tagFirst_H_mass__93->SetBinContent(47,6234);
   VH_tagFirst_H_mass__93->SetBinContent(48,3242);
   VH_tagFirst_H_mass__93->SetBinContent(78,2542);
   VH_tagFirst_H_mass__93->SetBinContent(79,5315);
   VH_tagFirst_H_mass__93->SetBinContent(80,5131);
   VH_tagFirst_H_mass__93->SetBinContent(81,5115);
   VH_tagFirst_H_mass__93->SetBinContent(82,5163);
   VH_tagFirst_H_mass__93->SetBinContent(83,2526);
   VH_tagFirst_H_mass__93->SetBinContent(1000,26);
   VH_tagFirst_H_mass__93->SetBinContent(1001,9229);
   VH_tagFirst_H_mass__93->SetEntries(1360367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__93->SetLineColor(ci);
   VH_tagFirst_H_mass__93->SetLineWidth(2);
   VH_tagFirst_H_mass__93->SetMarkerStyle(20);
   VH_tagFirst_H_mass__93->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__93->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__93->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__93->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__93->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__93->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__93->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__93->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__93->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__93->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__93->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1093[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1093[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 3262.387, 6512.233, 6474.178, 6401.526, 6247.575, 3184.546, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2496.522, 5213.592, 5184.185, 5067.857,
   5099.858, 2527.658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 22.91974 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1093[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1093[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.834721, 4.410121, 9.28505, 13.46851, 18.51463, 23.59914,
   28.37728, 33.45817, 37.93729, 41.71049, 45.04937, 48.17477, 50.13039, 52.15795, 53.26663, 54.68201, 55.77404, 55.87287, 55.99658, 56.13667, 56.04999, 55.84609,
   55.54052, 55.51358, 55.24004, 54.88853, 54.77256, 54.39569, 54.35786, 54.09921, 52.99031, 53.06437, 53.06789, 52.91261, 52.61489, 51.97837, 51.99815, 51.75843,
   51.32849, 51.31391, 51.35945, 51.10941, 51.25557, 50.81585, 50.78272, 50.39827, 50.27753, 50.50392, 50.34258, 49.72963, 49.77473, 49.81605, 49.78413, 49.71458,
   49.31423, 49.22693, 49.11093, 49.05759, 48.53445, 48.63261, 48.53252, 48.00172, 47.82412, 48.13982, 47.89251, 47.89641, 47.02958, 47.4827, 47.3486, 46.81436,
   46.96193, 46.60617, 46.24565, 46.52183, 46.39704, 45.50166, 45.86599, 45.47493, 45.82724, 45.42144, 45.01407, 44.97042, 44.80586, 44.40547, 44.74739, 44.23881,
   44.36966, 44.21344, 44.09696, 43.6494, 43.7072, 43.44972, 43.40019, 43.49704, 43.52712, 43.30961, 43.01281, 43.04323, 42.63068, 42.56922, 42.54505, 42.58459,
   42.52307, 42.18529, 42.68329, 42.64384, 42.21409, 41.89391, 41.53526, 41.57352, 42.14537, 41.60275, 41.67909, 41.1144, 41.32311, 41.11213, 41.59151, 41.49698,
   40.81997, 40.6455, 40.4518, 40.53954, 40.45642, 40.57182, 41.05067, 40.38008, 40.6731, 40.53954, 40.6708, 40.01721, 39.74994, 39.96577, 39.9798, 40.06625,
   39.72641, 39.55657, 39.46191, 39.61091, 39.6345, 39.6463, 39.26236, 39.31948, 39.20039, 39.03306, 38.87464, 38.98033, 39.17892, 39.2147, 38.44411, 38.8265,
   38.84336, 38.63578, 38.52914, 38.16582, 38.03084, 38.17562, 38.07998, 38.34913, 37.86081, 38.1266, 37.63042, 37.56327, 37.42361, 37.35359, 37.33856, 37.21314,
   37.01158, 37.01158, 36.69697, 36.86729, 37.15782, 36.73008, 37.02421, 37.3085, 36.95343, 36.18636, 36.62045, 36.32048, 36.53609, 36.34106, 36.31018, 35.53711,
   35.88275, 36.06989, 35.65795, 35.18542, 35.44754, 35.41059, 35.15086, 35.38153, 35.40003, 35.07096, 35.3551, 34.81676, 34.85702, 34.93205, 34.33538, 34.30541,
   34.5011, 34.49026, 34.33811, 34.0702, 33.75034, 33.98226, 34.11956, 33.59483, 33.6921, 33.38263, 33.70598, 33.4358, 33.10134, 33.11263, 33.28444, 33.33778,
   33.2254, 33.15497, 33.1324, 32.32964, 32.5602, 32.56881, 32.74347, 32.31807, 32.22825, 32.05078, 32.12945, 31.93094, 31.87819, 31.94851, 31.7194, 31.44405,
   31.99238, 31.44702, 31.36067, 31.00685, 31.4381, 30.97969, 30.91322, 31.13325, 31.12123, 31.02795, 30.41311, 30.73728, 30.62452, 30.56339, 29.91089, 29.92964,
   30.01076, 30.02322, 29.98271, 30.14754, 29.77931, 29.65029, 29.88274, 29.6061, 29.17021, 29.38737, 29.77303, 29.20224, 29.01916, 29.13171, 28.87055, 29.00949,
   29.01916, 28.95141, 28.43324, 28.67557, 28.45954, 28.27495, 28.1822, 28.37399, 27.87864, 28.13571, 28.08249, 28.14568, 27.64624, 27.85179, 27.7003, 27.15139,
   27.27852, 27.42211, 27.20987, 27.0617, 26.86055, 27.12383, 26.55244, 26.95785, 26.29767, 26.50662, 26.83966, 26.43951, 26.2514, 25.9072, 26.24784, 25.92885,
   26.11928, 25.93246, 26.3545, 25.82768, 25.78057, 25.85662, 25.28619, 25.84939, 25.31945, 25.36004, 25.30836, 25.4447, 25.16386, 24.95116, 25.13784, 25.02973,
   24.34801, 24.90239, 24.78572, 24.61157, 24.34801, 24.13974, 24.53546, 24.41321, 24.17844, 23.91402, 23.42415, 23.6664, 23.6743, 23.7925, 23.77284, 23.84353,
   23.85921, 23.49191, 23.17533, 23.4441, 23.07425, 23.34418, 23.3802, 23.2398, 23.0945, 22.90341, 22.84619, 22.85437, 22.429, 22.59928, 22.98899, 22.27422,
   22.24481, 22.291, 22.16902, 22.36638, 22.10989, 22.09297, 21.80327, 22.47065, 21.49227, 21.91022, 21.78181, 21.51836, 21.47486, 21.76893, 22.30358, 21.50097,
   20.9101, 21.00379, 21.40508, 21.03493, 20.94584, 20.93691, 20.99934, 20.82945, 20.78001, 20.88325, 20.86981, 20.49, 20.86981, 20.38477, 20.20508, 20.35264,
   20.18193, 19.8879, 20.00042, 20.05178, 20.21896, 20.01444, 20.17266, 19.74161, 19.77474, 19.73688, 19.68944, 19.46496, 19.55602, 19.25243, 19.69419, 18.83011,
   19.41205, 19.12085, 19.29609, 19.14528, 18.9982, 18.88466, 18.9094, 19.04244, 18.50958, 18.4235, 18.245, 18.88466, 18.41842, 18.41842, 18.48936, 18.51968,
   18.5852, 18.25524, 18.18853, 17.98172, 17.92965, 18.30129, 18.29106, 17.68812, 18.05438, 18.20395, 18.10609, 17.60865, 17.69869, 17.52348, 17.65638, 17.74618,
   17.51814, 17.15679, 17.12406, 17.38957, 17.28169, 17.22207, 17.29792, 16.96497, 17.16769, 17.05293, 16.84328, 16.60848, 17.28169, 17.02549, 16.97048, 16.35888,
   16.45008, 16.55773, 16.12863, 16.89317, 16.56902, 16.7598, 16.31882, 16.0356, 16.17494, 16.38744, 16.32455, 16.0938, 15.842, 15.79471, 15.49588, 15.66393,
   16.0356, 15.27711, 15.37472, 15.75322, 15.69375, 15.31989, 15.38688, 15.31989, 14.93668, 15.26486, 15.28934, 15.11094, 15.24647, 15.11094, 15.07997, 15.06136,
   15.30768, 14.88023, 14.9617, 15.01784, 14.71594, 15.1727, 14.31657, 15.1295, 14.45955, 14.55622, 14.72229, 14.31657, 14.34267, 14.76035, 14.45955, 14.65226,
   14.37523, 14.54337, 14.38824, 13.93932, 14.17875, 14.23141, 14.31657, 13.9259, 13.84509, 13.6957, 14.18535, 13.6752, 13.70253, 13.55157, 13.89228, 13.64783,
   13.62726, 13.5929, 13.64783, 13.66152, 13.33595, 13.57225, 13.64097, 13.34997, 13.43376, 13.2727, 13.1666, 13.57914, 13.55157, 13.04531, 13.14528, 13.08825,
   13.12392, 13.02379, 12.71132, 12.92289, 13.1595, 13.1737, 12.5186, 12.73337, 12.50365, 12.50365, 12.68186, 12.67449, 12.56334, 11.96873, 12.63755, 12.6005,
   12.30768, 12.33803, 12.36075, 12.57821, 12.37587, 11.93744, 12.42112, 12.30768, 12.36075, 11.99215, 11.65204, 12.35318, 12.38342, 11.96092, 11.63598, 12.30008,
   11.46599, 11.59573, 12.17016, 11.85885, 12.10854, 11.91392, 11.62794, 11.23533, 11.4415, 11.48229, 11.87461, 11.98435, 11.66808, 11.88248, 11.59573, 11.45783,
   11.15179, 11.48229, 11.10137, 11.35948, 10.81984, 10.87157, 11.70009, 10.82848, 10.92306, 11.13501, 11.05917, 10.92306, 11.04225, 10.94016, 10.84574, 10.75048,
   10.85436, 10.78522, 10.5574, 10.69817, 10.61922, 10.94871, 10.53079, 10.67192, 10.36072, 10.69817, 10.61041, 10.44162, 10.03987, 10.99133, 10.62802, 10.41472,
   9.955698, 10.37875, 10.45058, 10.27917, 9.983835, 10.87157, 10.27007, 10.06777, 9.983835, 10.1141, 10.20614, 10.10486, 10.1141, 10.27917, 9.775618, 9.804272,
   9.804272, 9.936896, 10.04918, 9.974465, 9.993196, 9.621358, 10.10486, 9.660154, 9.611635, 9.621358, 9.375247, 9.804272, 9.4547, 9.640776, 9.553086, 9.355278,
   9.727675, 9.79473, 9.572642, 9.40512, 9.091696, 9.173605, 8.820241, 9.122498, 9.582405, 9.204133, 8.998658, 9.122498, 9.434899, 9.081406, 9.444805, 9.153197,
   9.23456, 8.977852, 8.904647, 8.841418, 8.998658, 8.883621, 9.183793, 8.583846, 8.873089, 9.183793, 9.295115, 8.507252, 8.841418, 8.777734, 8.988261, 8.518236,
   8.496253, 8.670553, 8.841418, 8.681331, 8.295789, 8.616463, 8.767075, 8.915142, 8.594732, 8.78838, 8.540162, 8.507252, 8.507252, 8.452116, 8.452116, 8.182298,
   8.363144, 8.340753, 8.25058, 8.227882, 8.507252, 8.627309, 7.831965, 8.147943, 8.239239, 8.21651, 8.616463, 8.101909, 8.078793, 8.032363, 7.997364, 8.067211,
   8.147943, 7.735863, 8.055612, 7.747941, 7.903274, 7.855806, 7.938688, 7.973945, 7.950458, 7.662996, 7.77204, 7.552378, 7.687362, 7.820016, 7.879576, 7.527575,
   7.650784, 7.564749, 7.564749, 7.414937, 7.879576, 7.747941, 7.614031, 7.440115, 7.552378, 7.80805, 7.577099, 7.490217, 7.377009, 7.262035, 7.338884, 7.402316,
   7.145212, 7.477723, 7.60174, 7.210347, 7.60174, 7.300561, 7.013126, 7.58943, 7.262035, 7.066257, 6.851263, 6.919166, 7.2749, 7.539987, 7.118991, 7.2749,
   7.249148, 7.402316, 7.300561, 7.105844, 7.515143, 6.999781, 7.026447, 6.878505, 6.810196, 7.105844, 6.741196, 6.741196, 7.465208, 7.105844, 6.741196, 6.892085,
   6.878505, 6.515485, 6.741196, 6.741196, 6.399645, 6.472288, 6.796452, 7.013126, 6.296536, 6.100428, 6.796452, 6.311369, 6.837602, 7.132113, 6.544124, 6.472288,
   6.671481, 6.558397, 6.851263, 6.370355, 6.685482, 6.457824, 6.501117, 6.443329, 6.572639, 6.191712, 6.558397, 5.850047, 6.176591, 6.501117, 6.457824, 6.146239,
   6.191712, 6.146239, 6.038806, 6.370355, 6.236852, 5.70438, 6.414239, 5.70438, 5.687964, 6.266765, 5.65499, 6.038806, 5.769575, 5.850047, 6.558397, 5.913636,
   6.054271, 5.913636, 6.131007, 6.191712, 5.945176, 5.945176, 6.023302, 5.976549, 5.929427, 6.038806, 6.4288, 5.70438, 6.131007, 5.945176, 5.801897, 5.945176,
   5.850047, 5.960883, 5.671501, 5.65499, 5.687964, 5.588458, 6.131007, 5.671501, 5.671501, 5.897803, 5.769575, 5.769575, 5.349085, 5.314009, 5.470081, 5.70438,
   5.621823, 5.73707, 5.769575, 5.554894, 5.638431, 5.080113, 5.638431, 5.349085, 5.470081, 5.992174, 5.278699, 5.70438, 5.116793, 5.418557, 5.349085, 5.850047,
   5.171325, 4.987232, 4.930665, 5.153211, 5.296383, 4.987232, 5.116793, 5.043166, 5.571701, 5.260956, 5.207362, 5.061673, 5.225288, 4.756927, 5.225288, 5.061673,
   5.207362, 4.71745, 5.116793, 5.080113, 5.116793, 5.366537, 5.207362, 5.135034, 5.135034, 5.005946, 4.987232, 5.189375, 4.815536, 4.796079, 5.487149, 4.776543,
   4.71745, 4.556121, 5.043166, 4.87344, 5.061673, 4.854216, 4.61728, 4.596984, 4.911664, 5.171325, 4.930665, 4.756927, 4.987232, 4.71745, 4.987232, 5.043166,
   4.596984, 4.737229, 4.892589, 4.388867, 4.079705, 4.756927, 4.677639, 4.61728, 4.324479, 4.514889, 4.911664, 4.214981, 4.776543, 5.005946, 4.281016, 4.657606,
   4.556121, 3.96345, 4.535552, 4.556121, 4.192738, 4.87344, 4.61728, 4.61728, 4.576598, 4.473276, 4.514889, 4.677639, 4.033605, 4.237107, 4.410121, 4.033605,
   4.324479, 4.36751, 4.259118, 4.556121, 4.170377, 4.535552, 4.346048, 4.033605, 4.388867, 4.410121, 4.192738, 4.410121, 4.102561, 4.214981, 4.079705, 4.281016,
   4.657606, 4.170377, 3.96345, 3.769993, 4.36751, 3.915982, 3.769993, 4.12529, 4.281016, 4.281016, 4.12529, 4.170377, 4.431272, 4.010357, 3.96345, 4.102561,
   4.147895, 4.010357, 3.819276, 4.259118, 3.843681, 3.96345, 3.618119, 3.694836, 3.986973, 3.892031, 4.170377, 3.643871, 3.769993, 3.643871, 4.192738, 3.819276,
   3.643871, 3.643871, 4.12529, 3.892031, 3.769993, 3.745109, 4.237107 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1093,Graph_from_VH_tagFirst_2b1c_H_mass_fy1093,Graph_from_VH_tagFirst_2b1c_H_mass_fex1093,Graph_from_VH_tagFirst_2b1c_H_mass_fey1093);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->SetMinimum(-718.2804);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->SetMaximum(7227.445);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1093);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__94 = new TH1D("data_mc_ratio__94","",1000,0,2000);
   data_mc_ratio__94->SetBinContent(43,1.028695);
   data_mc_ratio__94->SetBinContent(44,1.024994);
   data_mc_ratio__94->SetBinContent(45,1.004297);
   data_mc_ratio__94->SetBinContent(46,1.021163);
   data_mc_ratio__94->SetBinContent(47,0.9978272);
   data_mc_ratio__94->SetBinContent(48,1.018041);
   data_mc_ratio__94->SetBinContent(78,1.018217);
   data_mc_ratio__94->SetBinContent(79,1.019451);
   data_mc_ratio__94->SetBinContent(80,0.9897408);
   data_mc_ratio__94->SetBinContent(81,1.009302);
   data_mc_ratio__94->SetBinContent(82,1.012381);
   data_mc_ratio__94->SetBinContent(83,0.9993441);
   data_mc_ratio__94->SetBinContent(1000,1.134393);
   data_mc_ratio__94->SetBinContent(1001,1.112221);
   data_mc_ratio__94->SetBinError(43,0.01775724);
   data_mc_ratio__94->SetBinError(44,0.01254572);
   data_mc_ratio__94->SetBinError(45,0.01245486);
   data_mc_ratio__94->SetBinError(46,0.01263007);
   data_mc_ratio__94->SetBinError(47,0.01263781);
   data_mc_ratio__94->SetBinError(48,0.01787965);
   data_mc_ratio__94->SetBinError(78,0.0201954);
   data_mc_ratio__94->SetBinError(79,0.01398346);
   data_mc_ratio__94->SetBinError(80,0.01381721);
   data_mc_ratio__94->SetBinError(81,0.01411232);
   data_mc_ratio__94->SetBinError(82,0.01408942);
   data_mc_ratio__94->SetBinError(83,0.01988375);
   data_mc_ratio__94->SetBinError(1000,0.2224728);
   data_mc_ratio__94->SetBinError(1001,0.01408926);
   data_mc_ratio__94->SetMinimum(0.4);
   data_mc_ratio__94->SetMaximum(1.6);
   data_mc_ratio__94->SetEntries(1795.156);
   data_mc_ratio__94->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__94->SetLineColor(ci);
   data_mc_ratio__94->SetLineWidth(2);
   data_mc_ratio__94->SetMarkerStyle(20);
   data_mc_ratio__94->SetMarkerSize(1.2);
   data_mc_ratio__94->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__94->GetXaxis()->SetRange(1,150);
   data_mc_ratio__94->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__94->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__94->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__94->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__94->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__94->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__94->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__94->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__94->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__94->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1094[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1094[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1094[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1094[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0162655, 0.008148955, 0.00817287, 0.008219116, 0.008319767, 0.01632828, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01883804, 0.009107483, 0.009133277, 0.009237506,
   0.009208478, 0.01843848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1848672 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1094,Graph_from_mc_statistical_error_fy1094,Graph_from_mc_statistical_error_fex1094,Graph_from_mc_statistical_error_fey1094);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1094 = new TH1F("Graph_Graph_from_mc_statistical_error1094","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1094->SetMinimum(0.7781594);
   Graph_Graph_from_mc_statistical_error1094->SetMaximum(1.221841);
   Graph_Graph_from_mc_statistical_error1094->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1094->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1094->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1094);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->SetSelected(H_mass_tagFirst_VR_17);
}
