#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Mon Jan  8 11:15:26 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_16 = new TCanvas("H_mass_tagFirst_VR_16", "H_mass_tagFirst_VR_16",0,0,600,600);
   H_mass_tagFirst_VR_16->SetHighLightColor(2);
   H_mass_tagFirst_VR_16->Range(0,0,1,1);
   H_mass_tagFirst_VR_16->SetFillColor(0);
   H_mass_tagFirst_VR_16->SetFillStyle(4000);
   H_mass_tagFirst_VR_16->SetBorderMode(0);
   H_mass_tagFirst_VR_16->SetBorderSize(2);
   H_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-44.37264,315.7258,44338.26);
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
   st->SetMaximum(39900);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",1000,0,2000);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(39900);
   st_stack_23->SetDirectory(nullptr);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->SetLineWidth(0);
   st_stack_23->GetXaxis()->SetRange(1,150);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,8507.411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,17279.54);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,17037.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,16803.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,16697.52);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8317.107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,7048.659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,13961.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,13841.11);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,13859.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,13564.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6859.466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,30.73005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19677.6);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5236007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.9795671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.253752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.900069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.61276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,25.24168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.33202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.60072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,49.84942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,57.14688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,63.45621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,69.32026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,73.85739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,77.47521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,80.46688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,82.52235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,83.74583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,84.25172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,84.89115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,85.17729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,84.79502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.64373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.21185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,83.83335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.74665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,82.90105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.73884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,82.32278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,81.74713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,81.32177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,81.00679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,80.79584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,80.27671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,79.9053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,79.98503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,79.42264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,78.87536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,78.62644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.42744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.36974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.3435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.24108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,77.87669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.98486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.13501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.69341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.52385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.21201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.1072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.84988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.97375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.56395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,76.37752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.44301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.01953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.5692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.50296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.11343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.79338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.82361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.47011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.3015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.01313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.66226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.41994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.2096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.65891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.56263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.36494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.89649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.58599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.63481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,70.86814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.91165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.61333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.45786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.74314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.79127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.92275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.51772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.34596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.60867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.84801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.88185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.42862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.07111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.93605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.41651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.60737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.58405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.19451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.2353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.08732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.37658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.51171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.09408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.40549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.0723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,66.0391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.50661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.32639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.24556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.50137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,65.22454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,65.03828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,65.11201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.70865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.95709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.53259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,64.57506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,64.31982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,64.18434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,64.19929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.10955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,64.08068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.6234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,63.39894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.57814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.34486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.43892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,63.30914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.47875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.74257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.77315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.48862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.59492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.41289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.19067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,61.91564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,62.0395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.79375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.60602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.10444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.22211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,61.07976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,61.15266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.96632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.65072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.39365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.27551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.27437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.46284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.8762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.82238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.80175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.81321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,59.31496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.62959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.88704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,59.17151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.48645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.40201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,58.34448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.23395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,58.301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,58.03234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.59488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.80632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.49245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.39341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.95586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,57.22838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.63244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.48217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.80645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.38622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.20848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.81937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.88808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.68906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.59174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.30993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.28886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.41268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.56763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.68306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.76572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.47838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.1237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.06668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.43806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.40727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.63521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.49959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.11902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.0325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.90181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.99113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.83699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.12786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,51.86555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.0252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.58729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.53013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.12391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.04636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,50.96708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.03294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.03428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.81355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.5634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.46299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.02647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.25612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,49.75308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.69243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.60546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.45324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.56953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.46489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,48.73285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,48.97976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.52708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,47.9445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,48.23382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.30696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,47.88728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,47.87153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,47.59873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,47.09059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,47.12697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,47.05856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,46.94336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,46.96234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.36749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,46.95358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.41477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,46.1957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.76641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.09768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.37537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.63293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,45.23013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,45.01748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,45.38896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,45.15885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,44.75025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,44.85733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.51529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.5999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.42127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,44.23728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,44.06652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.8951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.58327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.42099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.68694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,43.13592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,43.08346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,43.08664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.78814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.47947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.83457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,42.62926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.77828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,42.01222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.87169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.8946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.50836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.36942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,41.26824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.31471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.91463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,40.94309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.81567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.50382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.50551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.08367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,40.06828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,39.94493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.31385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,40.13665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,40.02721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.41812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.52058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.60893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,39.10214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.34851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.84538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.05127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.33386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.57093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.23898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.1223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,38.00526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.01067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.75012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.5973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.77008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.26404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.09813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.10183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.21066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,36.85345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.03156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,36.98155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.54718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.24966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.37046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.42319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.09618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.08289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,35.77384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.66447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.44664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.59907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.55669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.19048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.44278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,34.85387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.33044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.07929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,34.84011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.3707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.68632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.35674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.38466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,33.87862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.47225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.45237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.78949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,33.87053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.85636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.64924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.69809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.26616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,33.18984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.05741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.11748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.16918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,32.89946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.82855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.80975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.73028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.36386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.41042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.27479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.04034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,31.90529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.81709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.78476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.5597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.47707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.52059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,31.08266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.15534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,31.22127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.84137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.34615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,30.83692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,30.91905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.49271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.5511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,30.25125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.18775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,30.17412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,29.79697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.09224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,30.19229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.77166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.46621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.63089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.27953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.25611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.30527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,29.08695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.33799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,28.83609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,28.89071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.79566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.62856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.55424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.70745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.48455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,28.07252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.86421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,27.95998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,27.90354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,27.87651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.79526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.42192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,28.0163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.40538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.42038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.52765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,27.17684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,27.26245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.29763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,26.99973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.19701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.6291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.75236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.59819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.42757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,26.90818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.56983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.49492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.34445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,26.1748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.34445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,26.23495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.14598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,26.08036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,25.85601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.7258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.72846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.59224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.2878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.16554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,25.16826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,25.07003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,24.97416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.18731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.70374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.28238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.47798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.69264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.73701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.78684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.55905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.28683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.55067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,24.00296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.23032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,24.21901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.85976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.34884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.30376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.61723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.76766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.65783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.88847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.53583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.41906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.48336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.37512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.45415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,22.95796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.73898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.44165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,22.8862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,23.15416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.65745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,23.03545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.81121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.59384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.37436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.5908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.37129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.74501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.35904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,21.97564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,21.92568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,21.98811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.84425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.81285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,21.8944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.85053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.3299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.49953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.42608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.53457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.56002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,21.13622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,20.99306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,21.055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,21.15243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.23974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,21.01264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.78635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.63744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.73683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.52421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,20.99306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.72361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.4841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.29586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.45061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.35992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.50416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,20.17392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,20.14672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,20.23498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,20.07857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.70645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.5072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.82435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.8727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.68209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.95873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.71341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.20266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.6577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.50017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.45795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,19.16335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.82415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.26324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.61914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,19.1168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,19.12756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.80958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.47131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.24544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.74022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.80594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.69995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.78041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.53798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.50467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.50838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.47131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.26233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,18.12294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,18.13428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.49356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.91755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,18.06612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.74844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.33724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.47995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.82166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.78316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.24356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.40135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.61665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.87159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.31053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.61665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.15142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.34612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.47603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.26692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.29072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.92211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.19931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.47995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.26692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.81239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.9059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.70606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.63617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.40801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.73476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.48303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.61143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.12571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.45806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.32005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.1978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.26115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,16.13421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.27379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.9376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.1978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.52041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.11721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,16.03193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.89454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,16.07463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,16.16392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.82106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,15.98483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.62051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.77333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.80806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.58097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.30133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.27443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.48832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.28788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.62051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,15.02561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.58097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,15.02561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.29237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.31476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,15.15279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.83278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,15.15731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.22049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.81429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.74008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.79577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.74008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.61868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.81429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.43942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.74473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.74938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.51989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.60461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.2194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.24348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.46787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.35373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.4014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.4014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.20975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,14.0106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.98122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.91242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.98122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.83337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,14.07892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,14.06918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.95177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.82841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.92226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.75386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.83832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.69393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,14.02527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.5985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.20471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.52269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.47191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.43115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.94258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.30811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.55812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.35951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.50748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.90014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,13.03755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.97959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.13706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,13.13706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.16832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.85757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,13.04806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.16832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.68584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.66962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.6317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,13.14227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.84157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.70743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.94787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.52818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.44585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.41828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.73437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.48982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.11658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.41276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.50079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.00597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.7988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.45135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.41276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.88816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,12.15611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.9686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.45685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.89392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.07691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.83615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.87662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,12.08826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.90544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.69049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.79555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.95141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.87085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.20554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.82457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.52516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.68463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.59039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.67289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.51921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.2787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.41762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.48943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.71392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.78974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.63172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.71392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.18105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.24828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.08872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.48943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.32721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,11.1319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.33931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.41161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.0949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,11.08254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,11.04537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.32721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,11.06397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.87654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.87654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.87023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.76251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.9331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.83233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.98314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.47856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.88284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.92056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.60857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.55676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.76888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.49163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.46547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.38658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.62793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.63438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.43924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.60211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.6537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.45891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.15974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.4261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.15974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.16649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.17996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.26044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.920816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.45891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.774658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.886213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.05804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.0444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.30044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.989664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.17996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.21357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.26711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.927722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.927722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.920816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.781667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.69722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.07846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.830594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.920816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.417537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.711345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.569151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.711345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.263441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.263441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.446603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.569151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.241218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.482811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.85489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.597758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.263441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.31509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.359133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.211503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.151785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.446603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.189154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.000755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.129289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.993137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.015971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.189154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.218941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.901211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.114262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.714452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.962599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.099209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.000755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.931958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.129289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.908908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.263441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.738015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.893508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.901211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.698707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.808326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.603637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.722313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.539668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.847147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.682934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.753688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.682934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.491376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.738015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.54769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.262279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.643377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.426555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.714452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.459027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.253979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.611599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.54769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.22903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.459027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.442807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.914861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.212355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.237355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.27057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.162126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.043706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.204005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.27057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.237355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.187279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.06073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.00955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.914861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.09467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.66856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.730871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.000988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.533302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.792684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.120032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.686415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.533302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.596722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.85401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.605739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.766253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.659617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.386296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.596722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.940797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.792684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.460161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.404831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.713119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.677493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.686415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.236305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.560547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.404831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.748582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.578656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.188791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.460161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.505957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.623741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.073455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.092808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.946348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.975886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.112108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.404831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.083138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.650664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.339753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.169697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.330409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.121739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.112108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.292913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.264664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.207834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.092808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.03459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.083138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.946348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.160131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.283509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.063759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.207834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.063759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.846967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.005299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,7.005299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.975886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.836949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.715574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.169697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.906767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.092808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.756275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.78664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.591964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.796732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.380628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.725772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.956208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.956208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.956208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.560697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.715574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.465991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.602353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.139762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.369877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.487156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.434113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.654056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.581558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.571136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.348321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.476582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.487156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.348321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.602353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.348321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.455382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.315848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.654056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.261353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.402075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.294107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.348321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.969966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.061116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.86573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.004309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.027096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.359108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.228427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.239422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.380628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.90068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.049797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.239422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.39136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.004309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.015713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.128588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.889053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.128588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.038457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.049797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.015713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.283208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.304987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.981436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.807012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.923865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.912284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.83057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.771495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.935424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.553624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.818803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.735758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.747695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.675696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.504037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.687759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.614991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.969966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.723796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.711809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.723796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.889053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.651492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.83057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.759607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.3397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.390799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.83057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.326849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.639352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.675696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.441418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.528886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.699797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.541268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.403498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.466551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.103428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.24908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.541268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.541268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.627185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.170142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.675696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.651492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.855673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.663607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.062977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.236007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,85.35494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(9237222);

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
   
   TH1D *VH_tagFirst_H_mass__45 = new TH1D("VH_tagFirst_H_mass__45","",1000,0,2000);
   VH_tagFirst_H_mass__45->SetBinContent(43,8825);
   VH_tagFirst_H_mass__45->SetBinContent(44,17955);
   VH_tagFirst_H_mass__45->SetBinContent(45,17540);
   VH_tagFirst_H_mass__45->SetBinContent(46,17248);
   VH_tagFirst_H_mass__45->SetBinContent(47,17470);
   VH_tagFirst_H_mass__45->SetBinContent(48,8550);
   VH_tagFirst_H_mass__45->SetBinContent(78,7206);
   VH_tagFirst_H_mass__45->SetBinContent(79,14405);
   VH_tagFirst_H_mass__45->SetBinContent(80,14133);
   VH_tagFirst_H_mass__45->SetBinContent(81,14153);
   VH_tagFirst_H_mass__45->SetBinContent(82,14116);
   VH_tagFirst_H_mass__45->SetBinContent(83,7000);
   VH_tagFirst_H_mass__45->SetBinContent(1000,25);
   VH_tagFirst_H_mass__45->SetBinContent(1001,23051);
   VH_tagFirst_H_mass__45->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__45->SetLineColor(ci);
   VH_tagFirst_H_mass__45->SetLineWidth(2);
   VH_tagFirst_H_mass__45->SetMarkerStyle(20);
   VH_tagFirst_H_mass__45->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__45->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__45->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__45->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__45->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__45->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__45->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__45->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__45->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__45->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__45->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1045[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1045[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 8507.411, 17279.54, 17037.41, 16803.41, 16697.52, 8317.107, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7048.659, 13961.44, 13841.11, 13859.99,
   13564.91, 6859.466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 30.73005 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1045[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1045[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5236007, 0.9795671, 4.253752, 9.900069, 17.61276, 25.24168, 33.33202, 41.60072,
   49.84942, 57.14688, 63.45621, 69.32026, 73.85739, 77.47521, 80.46688, 82.52235, 83.74583, 84.25172, 84.89115, 85.17729, 84.79502, 84.64373, 84.21185, 83.83335,
   83.74665, 82.90105, 82.73884, 82.32278, 81.74713, 81.32177, 81.00679, 80.79584, 80.27671, 79.9053, 79.98503, 79.42264, 78.87536, 78.62644, 78.42744, 78.36974,
   78.3435, 78.24108, 77.87669, 77.98486, 78.13501, 77.69341, 77.52385, 77.21201, 77.1072, 76.84988, 76.97375, 76.56395, 76.37752, 76.44301, 76.01953, 75.5692,
   75.50296, 75.11343, 74.79338, 74.82361, 74.47011, 74.3015, 74.01313, 73.66226, 73.41994, 73.2096, 72.65891, 72.56263, 72.36494, 71.89649, 71.58599, 71.63481,
   70.86814, 70.91165, 70.61333, 70.45786, 69.74314, 69.79127, 69.92275, 69.51772, 69.34596, 68.60867, 68.84801, 68.88185, 68.42862, 68.07111, 67.93605, 67.41651,
   67.60737, 67.58405, 67.19451, 67.2353, 67.08732, 66.37658, 66.51171, 66.09408, 66.40549, 66.0723, 66.0391, 65.50661, 65.32639, 65.24556, 65.50137, 65.22454,
   65.03828, 65.11201, 64.70865, 64.95709, 64.53259, 64.57506, 64.31982, 64.18434, 64.19929, 64.10955, 64.08068, 63.6234, 63.39894, 63.57814, 63.34486, 63.43892,
   63.30914, 62.47875, 62.74257, 62.77315, 62.48862, 62.59492, 62.41289, 62.19067, 61.91564, 62.0395, 61.79375, 61.60602, 61.10444, 61.22211, 61.07976, 61.15266,
   60.96632, 60.65072, 60.39365, 60.27551, 60.27437, 60.46284, 59.8762, 59.82238, 59.80175, 59.81321, 59.31496, 59.62959, 58.88704, 59.17151, 58.48645, 58.40201,
   58.34448, 58.23395, 58.301, 58.03234, 57.59488, 57.80632, 57.49245, 57.39341, 56.95586, 57.22838, 56.63244, 56.48217, 56.80645, 56.38622, 56.20848, 55.81937,
   55.88808, 55.68906, 55.59174, 55.30993, 55.28886, 55.41268, 54.56763, 54.68306, 54.76572, 54.47838, 54.1237, 54.06668, 53.43806, 53.40727, 53.63521, 53.49959,
   53.11902, 53.0325, 52.90181, 52.99113, 52.83699, 52.12786, 51.86555, 52.0252, 51.58729, 51.53013, 52.12391, 51.04636, 50.96708, 51.03294, 51.03428, 50.81355,
   50.5634, 50.46299, 50.02647, 50.25612, 49.75308, 49.69243, 49.60546, 49.45324, 49.56953, 48.46489, 48.73285, 48.97976, 48.52708, 47.9445, 48.23382, 47.30696,
   47.88728, 47.87153, 47.59873, 47.09059, 47.12697, 47.05856, 46.94336, 46.96234, 46.36749, 46.95358, 46.41477, 46.1957, 45.76641, 46.09768, 45.37537, 45.63293,
   45.23013, 45.01748, 45.38896, 45.15885, 44.75025, 44.85733, 44.51529, 44.5999, 44.42127, 44.23728, 44.06652, 43.8951, 43.58327, 43.42099, 43.68694, 43.13592,
   43.08346, 43.08664, 42.78814, 42.47947, 42.83457, 42.62926, 41.77828, 42.01222, 41.87169, 41.8946, 41.50836, 41.36942, 41.26824, 41.31471, 40.91463, 40.94309,
   40.81567, 40.50382, 40.50551, 40.08367, 40.06828, 39.94493, 40.31385, 40.13665, 40.02721, 39.41812, 39.52058, 39.60893, 39.10214, 39.34851, 38.84538, 39.05127,
   38.498, 38.33386, 38.57093, 38.23898, 38.1223, 38.00526, 38.01067, 37.75012, 37.5973, 37.77008, 37.26404, 37.09813, 37.10183, 37.21066, 36.85345, 37.03156,
   36.98155, 36.54718, 36.24966, 36.37046, 36.42319, 36.09618, 36.08289, 35.77384, 35.66447, 35.44664, 35.59907, 35.55669, 35.19048, 35.44278, 34.85387, 35.33044,
   35.07929, 34.84011, 34.3707, 34.68632, 34.35674, 34.38466, 33.87862, 34.47225, 34.45237, 33.78949, 33.87053, 33.85636, 33.64924, 33.69809, 33.26616, 33.18984,
   33.05741, 33.11748, 33.16918, 32.89946, 32.82855, 32.80975, 32.73028, 32.36386, 32.41042, 32.27479, 32.04034, 31.90529, 31.81709, 31.78476, 31.5597, 31.47707,
   31.52059, 31.08266, 31.15534, 31.22127, 30.84137, 31.34615, 30.83692, 30.91905, 30.49271, 30.5511, 30.25125, 30.18775, 30.344, 30.17412, 29.79697, 30.09224,
   30.19229, 29.77166, 29.46621, 29.63089, 29.27953, 29.25611, 29.30527, 29.08695, 29.33799, 28.83609, 28.89071, 28.79566, 28.62856, 28.55424, 28.70745, 28.48455,
   28.07252, 27.86421, 27.95998, 27.90354, 27.87651, 27.79526, 28.42192, 28.0163, 27.40538, 27.42038, 27.52765, 27.17684, 27.26245, 27.29763, 26.99973, 27.19701,
   26.6291, 26.75236, 26.59819, 26.42757, 26.90818, 26.56983, 26.49492, 26.34445, 26.1748, 26.34445, 26.23495, 26.14598, 26.08036, 25.85601, 25.7258, 25.72846,
   25.59224, 25.2878, 25.16554, 25.16826, 25.07003, 24.97416, 25.18731, 24.70374, 25.28238, 24.47798, 24.69264, 24.73701, 24.78684, 24.55905, 24.28683, 24.55067,
   24.00296, 24.23032, 24.21901, 23.85976, 24.34884, 24.30376, 23.61723, 23.76766, 23.65783, 23.88847, 23.53583, 23.41906, 23.48336, 23.37512, 23.45415, 22.95796,
   22.73898, 22.44165, 22.8862, 23.15416, 22.65745, 23.03545, 22.81121, 22.59384, 22.527, 22.37436, 22.5908, 22.37129, 22.74501, 22.35904, 21.97564, 21.92568,
   21.98811, 21.84425, 21.81285, 21.8944, 21.85053, 21.3299, 21.49953, 21.42608, 21.53457, 21.56002, 21.13622, 20.99306, 21.055, 21.15243, 21.23974, 21.01264,
   20.78635, 20.63744, 20.73683, 20.52421, 20.99306, 20.72361, 20.4841, 20.29586, 20.45061, 20.35992, 20.50416, 20.17392, 20.14672, 20.23498, 20.07857, 19.70645,
   19.5072, 19.82435, 19.8727, 19.68209, 19.95873, 19.71341, 19.20266, 19.6577, 19.50017, 19.45795, 19.16335, 18.82415, 19.26324, 18.61914, 19.1168, 19.12756,
   18.80958, 18.47131, 19.24544, 18.74022, 18.80594, 18.69995, 18.78041, 18.53798, 18.50467, 18.50838, 18.47131, 18.26233, 18.12294, 18.13428, 18.49356, 17.91755,
   18.06612, 17.74844, 18.33724, 17.47995, 17.82166, 17.78316, 18.24356, 17.40135, 17.61665, 17.87159, 17.31053, 17.61665, 17.15142, 17.34612, 17.47603, 17.26692,
   17.29072, 16.92211, 17.19931, 17.47995, 17.26692, 16.81239, 16.9059, 16.70606, 16.63617, 16.40801, 16.73476, 16.48303, 16.61143, 16.792, 16.12571, 16.45806,
   16.32005, 16.1978, 16.26115, 16.13421, 16.27379, 15.9376, 16.1978, 16.52041, 16.11721, 16.03193, 15.89454, 16.07463, 16.16392, 15.82106, 15.98483, 15.62051,
   15.77333, 15.80806, 15.58097, 15.30133, 15.27443, 15.48832, 15.28788, 15.62051, 15.02561, 15.58097, 15.02561, 15.29237, 15.31476, 15.15279, 14.83278, 15.15731,
   15.22049, 14.81429, 14.74008, 14.79577, 14.74008, 14.61868, 14.81429, 14.43942, 14.74473, 14.74938, 14.51989, 14.60461, 14.2194, 14.24348, 14.46787, 14.35373,
   14.4014, 14.4014, 14.20975, 14.0106, 13.98122, 13.91242, 13.98122, 13.83337, 14.07892, 14.06918, 13.95177, 13.82841, 13.92226, 13.75386, 13.83832, 13.69393,
   14.02527, 13.5985, 13.20471, 13.52269, 13.47191, 13.43115, 12.94258, 13.30811, 13.55812, 13.35951, 13.50748, 12.90014, 13.03755, 12.97959, 13.13706, 13.13706,
   13.16832, 12.85757, 13.04806, 13.16832, 12.68584, 12.66962, 12.6317, 13.14227, 12.84157, 12.70743, 12.94787, 12.52818, 12.44585, 12.41828, 12.73437, 12.48982,
   12.11658, 12.41276, 12.50079, 13.00597, 12.7988, 12.45135, 12.41276, 11.88816, 12.15611, 11.9686, 12.45685, 11.89392, 12.07691, 11.83615, 11.87662, 12.08826,
   11.90544, 11.69049, 11.79555, 11.95141, 11.87085, 11.20554, 11.82457, 11.52516, 11.68463, 11.59039, 11.67289, 11.51921, 11.2787, 11.41762, 11.48943, 11.71392,
   11.78974, 11.63172, 11.71392, 11.18105, 11.24828, 11.08872, 11.48943, 11.32721, 11.1319, 11.33931, 11.41161, 11.0949, 11.08254, 11.04537, 11.32721, 11.06397,
   10.87654, 10.87654, 10.87023, 10.76251, 10.9331, 10.83233, 10.98314, 10.47856, 10.88284, 10.92056, 10.60857, 10.55676, 10.76888, 10.49163, 10.46547, 10.38658,
   10.62793, 10.63438, 10.43924, 10.60211, 10.6537, 10.45891, 10.15974, 10.4261, 10.15974, 10.16649, 10.17996, 10.26044, 9.920816, 10.45891, 9.774658, 9.886213,
   10.05804, 10.0444, 10.30044, 9.989664, 10.17996, 10.21357, 10.26711, 9.927722, 9.927722, 9.920816, 9.781667, 9.69722, 10.07846, 9.830594, 9.920816, 9.417537,
   9.711345, 9.569151, 9.711345, 9.263441, 9.263441, 9.446603, 9.569151, 9.241218, 9.482811, 8.85489, 9.597758, 9.263441, 9.31509, 9.359133, 9.211503, 9.151785,
   9.446603, 9.189154, 9.000755, 9.129289, 8.993137, 9.015971, 9.189154, 9.218941, 8.901211, 9.114262, 8.714452, 8.962599, 9.099209, 9.000755, 8.931958, 9.129289,
   8.908908, 9.263441, 8.738015, 8.893508, 8.901211, 8.698707, 8.808326, 8.603637, 8.722313, 8.539668, 8.847147, 8.682934, 8.753688, 8.682934, 8.491376, 8.738015,
   8.54769, 8.262279, 8.643377, 8.426555, 8.714452, 8.459027, 8.253979, 8.611599, 8.54769, 8.22903, 8.459027, 8.442807, 7.914861, 8.212355, 8.237355, 8.27057,
   8.162126, 8.043706, 8.204005, 8.27057, 8.237355, 8.187279, 8.06073, 8.00955, 7.914861, 8.09467, 7.66856, 7.730871, 8.000988, 7.533302, 7.792684, 8.120032,
   7.686415, 7.533302, 7.596722, 7.85401, 7.605739, 7.766253, 7.659617, 7.386296, 7.596722, 7.940797, 7.792684, 7.460161, 7.404831, 7.713119, 7.677493, 7.686415,
   7.236305, 7.560547, 7.404831, 7.748582, 7.578656, 7.188791, 7.460161, 7.505957, 7.623741, 7.073455, 7.092808, 6.946348, 6.975886, 7.112108, 7.404831, 7.083138,
   7.650664, 7.339753, 7.169697, 7.330409, 7.121739, 7.112108, 7.292913, 7.264664, 7.207834, 7.092808, 7.03459, 7.083138, 6.946348, 7.160131, 7.283509, 7.063759,
   7.207834, 7.063759, 6.846967, 7.005299, 7.005299, 6.975886, 6.836949, 6.715574, 7.169697, 6.906767, 7.092808, 6.756275, 6.78664, 6.591964, 6.796732, 6.380628,
   6.725772, 6.956208, 6.956208, 6.956208, 6.560697, 6.715574, 6.465991, 6.602353, 6.139762, 6.369877, 6.487156, 6.434113, 6.654056, 6.581558, 6.571136, 6.348321,
   6.476582, 6.487156, 6.348321, 6.602353, 6.348321, 6.455382, 6.315848, 6.654056, 6.261353, 6.402075, 6.294107, 6.348321, 5.969966, 6.061116, 5.86573, 6.004309,
   6.027096, 6.359108, 6.228427, 6.239422, 6.380628, 5.90068, 6.049797, 6.239422, 6.39136, 6.004309, 6.015713, 6.128588, 5.889053, 6.128588, 6.038457, 6.049797,
   6.015713, 6.283208, 6.304987, 5.981436, 5.807012, 5.923865, 5.912284, 5.83057, 5.771495, 5.935424, 5.553624, 5.818803, 5.735758, 5.747695, 5.663607, 5.675696,
   5.504037, 5.687759, 5.614991, 5.969966, 5.663607, 5.723796, 5.711809, 5.723796, 5.889053, 5.663607, 5.651492, 5.663607, 5.83057, 5.759607, 5.3397, 5.390799,
   5.83057, 5.326849, 5.639352, 5.675696, 5.441418, 5.528886, 5.699797, 5.541268, 5.663607, 5.403498, 5.466551, 5.103428, 5.24908, 5.541268, 5.541268, 5.627185,
   5.170142, 5.675696, 5.651492, 4.855673, 5.663607, 5.062977, 5.236007 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1045,Graph_from_VH_tagFirst_2b1c_H_mass_fy1045,Graph_from_VH_tagFirst_2b1c_H_mass_fex1045,Graph_from_VH_tagFirst_2b1c_H_mass_fey1045);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->SetMinimum(-1829.648);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->SetMaximum(19104);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",1000,0,2000);
   data_mc_ratio__46->SetBinContent(43,1.037331);
   data_mc_ratio__46->SetBinContent(44,1.03909);
   data_mc_ratio__46->SetBinContent(45,1.029499);
   data_mc_ratio__46->SetBinContent(46,1.026458);
   data_mc_ratio__46->SetBinContent(47,1.046263);
   data_mc_ratio__46->SetBinContent(48,1.028002);
   data_mc_ratio__46->SetBinContent(78,1.022322);
   data_mc_ratio__46->SetBinContent(79,1.03177);
   data_mc_ratio__46->SetBinContent(80,1.021089);
   data_mc_ratio__46->SetBinContent(81,1.02114);
   data_mc_ratio__46->SetBinContent(82,1.040626);
   data_mc_ratio__46->SetBinContent(83,1.020488);
   data_mc_ratio__46->SetBinContent(1000,0.8135359);
   data_mc_ratio__46->SetBinContent(1001,1.171434);
   data_mc_ratio__46->SetBinError(43,0.01104231);
   data_mc_ratio__46->SetBinError(44,0.007754618);
   data_mc_ratio__46->SetBinError(45,0.007773405);
   data_mc_ratio__46->SetBinError(46,0.007815771);
   data_mc_ratio__46->SetBinError(47,0.007915792);
   data_mc_ratio__46->SetBinError(48,0.01111759);
   data_mc_ratio__46->SetBinError(78,0.01204316);
   data_mc_ratio__46->SetBinError(79,0.008596594);
   data_mc_ratio__46->SetBinError(80,0.008589072);
   data_mc_ratio__46->SetBinError(81,0.008583437);
   data_mc_ratio__46->SetBinError(82,0.008758685);
   data_mc_ratio__46->SetBinError(83,0.01219716);
   data_mc_ratio__46->SetBinError(1000,0.1627072);
   data_mc_ratio__46->SetBinError(1001,0.009238553);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(3664.474);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__46->GetXaxis()->SetRange(1,150);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1046[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1046[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1046[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009392435, 0.004628886, 0.004661663, 0.004694008, 0.004708868, 0.009429655, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01026648, 0.005149647, 0.005171983, 0.005168459,
   0.005224372, 0.01033778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1703872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.7955354);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.204465);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
