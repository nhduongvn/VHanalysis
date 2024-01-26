#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_16/Z_mass_tagFirst_VR_16
//=========  (Thu Jan 25 12:40:56 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-62.76344,315.7258,62710.68);
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
   st->SetMaximum(56433.33);
   
   TH1F *st_stack_107 = new TH1F("st_stack_107","",1000,0,2000);
   st_stack_107->SetMinimum(0.01);
   st_stack_107->SetMaximum(56433.33);
   st_stack_107->SetDirectory(nullptr);
   st_stack_107->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_107->SetLineColor(ci);
   st_stack_107->SetLineWidth(0);
   st_stack_107->GetXaxis()->SetRange(1,150);
   st_stack_107->GetXaxis()->SetLabelFont(42);
   st_stack_107->GetXaxis()->SetTitleOffset(1);
   st_stack_107->GetXaxis()->SetTitleFont(42);
   st_stack_107->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_107->GetYaxis()->SetLabelFont(42);
   st_stack_107->GetYaxis()->SetLabelSize(0.05);
   st_stack_107->GetYaxis()->SetTitleSize(0.057);
   st_stack_107->GetYaxis()->SetTitleOffset(1.2);
   st_stack_107->GetYaxis()->SetTitleFont(42);
   st_stack_107->GetZaxis()->SetLabelFont(42);
   st_stack_107->GetZaxis()->SetTitleOffset(1);
   st_stack_107->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_107);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,19450.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,20720.42);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,21720.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,22692.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,23083.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,16712.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,16608.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,16411.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,16227.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,16231.09);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,88.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,45703.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.8863267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.594899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.302987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,11.82982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,18.13647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,25.42471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,33.14469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,40.68699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,48.29348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,54.91037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,62.13776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,67.92657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,72.57603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,76.77934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,80.72179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,83.31471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,85.30208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,87.1895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,87.9367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,89.29682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,89.38727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,89.55472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,89.40735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,89.001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,88.75098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,88.52117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,88.27488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,87.72971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,87.45233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,86.93169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,86.14517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,85.81625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,85.41646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,84.80265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,84.09835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,83.48627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,82.27234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,81.62047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,81.10114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,80.39511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,79.50306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,78.81832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,78.21443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,77.62609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,77.01212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,76.70988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,76.33591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,75.94236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,75.32511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,74.82433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,74.59225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,74.14784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,73.73121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,73.73882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,72.91697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,72.47855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,71.79481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,71.70096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,71.72991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,71.03896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,70.81349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,70.39784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,70.28776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,69.52763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,69.06202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,68.80398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,68.26853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,68.04542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,67.52473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,67.1464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,66.542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,66.39004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,65.91588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,65.2614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,65.10387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,64.52034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,64.27898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,63.71608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,63.26712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,63.11172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,62.45751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,61.75459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,61.51698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,61.4394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,61.08493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,60.61556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,59.78788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,59.77943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,59.20408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,58.64605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,58.49085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,57.92982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,57.5976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,57.09662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,56.89085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,56.45222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,56.00915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,55.5373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,55.52619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,54.90731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,54.83879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,54.63377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,53.81835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,53.55497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,53.2987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,52.96391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,52.61633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,52.40154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,52.21703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,51.5443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,51.55192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,51.10589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,50.91559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,50.57723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,50.01495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,49.81147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,49.61507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,49.43492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,49.11379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,48.76178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,48.92835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,48.17948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,48.17598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,47.82646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,47.31453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,47.38089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,47.41049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,46.93947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,46.87367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,46.45521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,46.38873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,46.13158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,45.48481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,45.40455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,45.47741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,44.8775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,44.95995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,44.63679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,44.38466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,44.31);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,43.75695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,43.85046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,43.89139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,43.37312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,43.48166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,43.20461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,42.92839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,42.65696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,42.65959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,42.52917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,42.37452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,42.20468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,42.06752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,42.3361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,41.78109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,41.61827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,41.31108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,41.09591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,41.23767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,40.82604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,41.08635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,40.70078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,40.40328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,40.71043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,40.48791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,40.07418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,40.01953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,40.39078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,40.01813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,39.68725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,39.63207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,39.40061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,39.46038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,39.29223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,39.32934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,39.45896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,39.24365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,39.32506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,38.92637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,39.19357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,38.80075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,38.69214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,38.59776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,38.90618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,38.45794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,38.04721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,38.14148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,38.40684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,37.66926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,37.98965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,37.74664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,37.96749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,37.61858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,37.73474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,37.7511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,37.53944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,37.4796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,37.41367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,37.51551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,37.03228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,36.99589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,36.93821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,37.185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,37.03834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,36.86827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,36.80429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,36.31313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,36.4581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,36.16294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,36.39494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,36.14586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,36.19241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,36.06972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,36.36718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,36.17069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,36.02769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,35.93412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,35.80271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,35.65508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,35.73839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,35.65036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,35.23557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,35.41506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,35.17021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,35.3786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,35.06476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,35.28331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,35.09195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,35.37543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,34.82389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,34.85449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,34.73677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,34.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,34.87381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,34.59757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,34.72869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,34.38771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,34.34853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,34.37139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,34.85288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,34.16343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,34.23398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,33.99218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,34.28639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,34.13221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,33.78023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,33.9575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,33.57362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,33.85324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,33.70373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,33.68541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,33.55021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,33.40943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,33.45642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,33.13453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,33.64041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,33.11759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,33.33881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,33.1853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,33.05145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,32.95283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,32.95283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,32.85563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,32.82829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,32.66207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,32.76499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,32.61393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,32.56917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,32.64661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,32.53124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,32.4518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,32.52262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,32.31491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,32.09887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,32.01836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,32.1181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,32.30449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,31.95345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,31.84615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,32.02186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,31.55586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,31.71903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,31.48109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,31.64819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,31.56297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,31.47752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,31.52384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,31.54875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,31.39542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,31.11896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,31.31489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,31.0937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,30.88002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,31.07204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,30.73796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,31.13338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,31.04675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,30.85821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,30.75804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,30.4629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,30.47027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,30.49972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,30.86548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,30.27814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,30.51076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,30.19649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,29.96893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,30.2225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,30.18348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,30.02318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,29.85262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,29.94458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,30.15744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,30.07546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,29.89957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,29.54085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,29.62809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,29.7434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,29.51044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,29.28904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,29.57691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,29.39422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,29.37704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,29.38468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,29.04858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,29.35793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,29.04278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,29.04471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,28.99444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,29.08911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,28.88586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,28.83725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,28.73394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,29.04664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,28.81779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,28.55175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,28.63025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,28.64593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,28.40397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,28.3585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,28.29114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,28.45923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,28.30502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,28.16392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,28.06612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,28.23356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,28.00207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,27.82719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,27.86346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,28.08211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,27.67149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,27.50266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,27.70391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,27.28965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,27.64308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,27.43321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,27.4107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,27.17839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,27.11845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,27.07082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,27.06667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,27.21965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,27.1081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,26.88153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,26.74341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,26.82511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,26.756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,27.09568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,26.60035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,26.87527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,27.08118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,27.03348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,26.42256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,26.39706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,26.63197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,26.1922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,26.56869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,26.45228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,26.66145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,26.19006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,26.46076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,26.18363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,26.00299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,26.12785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,26.02672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,25.93385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,25.75799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,25.95547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,25.68382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,25.7362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,25.5919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,25.795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,25.44677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,25.59628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,25.45559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,25.52383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,25.2542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,25.29195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,25.47542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,25.22308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,25.16517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,25.57874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,25.17631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,25.01308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,25.10713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,24.8691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,24.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,24.93669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,24.81262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,24.59913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,24.82393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,25.34292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,24.69929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,24.65609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,24.67656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,24.83523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,24.47564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,24.42056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,24.22909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,24.2823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,24.41137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,24.25918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,24.25224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,23.99405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,24.1386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,24.08741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,24.10138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,23.85332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,24.1293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,24.12465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,24.09672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,24.01976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,23.45);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,23.59789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,23.76612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,23.63828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,23.73777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,23.60265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,23.54552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,23.35889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,23.32043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,23.10529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,23.29154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,23.18045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,23.3949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,23.55505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,23.06883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,23.09071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,22.95911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,22.8636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,22.86605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,23.13199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,22.96889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,22.73562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,22.80216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,22.56468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,22.48496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,22.54478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,22.52237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,22.73068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,22.68868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,22.56468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,22.38241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,22.24915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,22.12522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,22.17589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,22.4525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,22.31965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,22.23653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,22.30959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,22.15057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,21.9955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,21.90347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,21.91115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,21.65355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,21.67686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,21.60945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,21.86244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,21.60685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,21.57306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,21.7234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,21.58347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,21.56266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,21.64059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,21.71307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,21.59906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,21.45308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,20.83743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,21.35346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,21.22431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,21.36922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,21.26129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,21.13423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,20.86434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,20.72402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,20.99036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,20.94755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,20.59365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,20.69693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,20.53088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,21.15015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,20.67794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,20.46792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,20.38276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,20.49806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,20.74026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,20.52268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,20.37725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,20.32487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,20.59637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,20.50353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,20.4597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,20.04409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,20.09442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,20.42127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,20.18914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,20.60999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,20.01607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,20.08045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,19.98241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,19.86694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,19.43289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,19.83019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,19.95712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,19.81037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,19.45886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,20.00486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,19.77919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,20.03849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,19.62826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,19.46462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,19.42711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,19.33156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,19.51932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,19.48479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,19.27051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,19.2297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,19.22386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,19.09206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,19.02139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,19.21218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,18.88521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,19.16832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,18.88224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,19.17418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,18.9149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,19.22094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,18.983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,18.79287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,18.85547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,18.91193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,18.52826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,18.89412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,18.63696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,18.79287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,18.38842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,18.4767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,18.44022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,18.53128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,18.65803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,18.69108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,18.16738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,18.39147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,18.02786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,18.17973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,18.32116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,18.41281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,18.13028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,18.12099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,18.31504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,18.2813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,17.76132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,17.89038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,18.15502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,17.97487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,17.68851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,17.72337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,17.66946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,17.755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,17.83069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,17.85899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,17.42644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,17.63131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,17.46182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,17.66946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,17.21913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,17.53238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,17.65676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,17.33605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,17.11781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,17.23542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,17.28094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,17.14729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,17.32957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,17.14074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,16.97297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,17.10141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,17.06857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,16.93325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,17.02578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,16.67277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,16.60195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,16.78012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,16.98949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,16.79683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,16.70303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,16.45256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,16.64583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,16.55795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,16.57488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,16.52742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,16.67614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,16.61208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,16.38078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,16.48323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,16.38763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,16.58165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,16.32588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,16.63571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,16.29492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,15.95388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,16.13921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,16.23627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,15.82321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,16.13921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,15.97497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,15.82321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,16.17047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,15.92924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,15.86571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,16.06604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,16.01006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,15.70932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,15.61618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,15.75569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,15.71646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,15.6843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,16.04507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,15.60539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,15.63413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,15.74856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,15.591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,15.61977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,15.0936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,15.20103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,15.80192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,15.28202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,15.19734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,15.075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,15.68788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,15.271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,15.10103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,15.10846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,15.1196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,15.06755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,15.01906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,15.08244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,14.97791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,15.16777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,14.90279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,14.65218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,14.75522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,14.70951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,14.83487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,14.98166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,14.47107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,14.66367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,14.73619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,14.76662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,14.85754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,14.64835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,14.77042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,14.64452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,14.57539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,14.50979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,14.64069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,14.35427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,14.14557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,14.35036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,14.13367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,14.13764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,14.31121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,14.55227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,14.2798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,14.29551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,14.05404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,14.07399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,13.80834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,14.05005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,14.17727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,13.91359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,13.94582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,14.10585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,13.65716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,13.95789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,13.94984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,13.84487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,13.59951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,13.98199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,13.75949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,13.82459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,13.9418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,13.89342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,13.88534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,13.51259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,13.52089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,13.60364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,13.68589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,13.37485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,13.11644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,13.50428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,13.34125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,13.21022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,13.36226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,13.41256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,13.41674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,13.31599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,13.22296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,13.08217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,12.96584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,13.2272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,12.87464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,13.05211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,13.05641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,12.81348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,12.98314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,12.93985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,13.39581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,12.83535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,12.91815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,12.90511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,12.94418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,12.95718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,12.65484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,12.59707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,12.82661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,12.5837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,12.67699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,12.69027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,12.53903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,12.41761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,12.59261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,12.55692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,12.72118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,12.45371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,12.32691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,12.52112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,12.49869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,12.35419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,12.3451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,12.49869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,12.61043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,12.46722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,12.52112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,12.41761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,12.33146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,11.97127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,12.39047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,11.81083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,12.26759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,12.07395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,11.92901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,11.92431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,11.91489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,12.02272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,12.32691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,11.8866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,12.24011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,11.93841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,12.12034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,11.94311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,12.02272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,12.03205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,11.74413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,11.66262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,11.42934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,11.40477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,11.85824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,11.79181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,11.61924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,11.59023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,11.53685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,11.77753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,11.63372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,11.41461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,11.70584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,11.63372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,11.78229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,11.70584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,11.42443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,11.67224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,11.24622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,11.30098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,11.25121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,11.32577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,11.40477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,10.9786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,11.49299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,11.2562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,10.94276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,11.12583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,11.04484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,11.09553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,10.9786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,10.98882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,10.6938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,10.5352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,10.64119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,11.17113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,10.80343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,11.07528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,10.9786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,10.94789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,10.70953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,10.59893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,10.92737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,10.9325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,10.82418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,10.74614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,10.6833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,10.67279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,10.77222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,10.40659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,10.52455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,10.52455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,10.74614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,10.63592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,10.40659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,10.62536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,10.66753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,10.385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,10.80343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,10.23807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,10.56711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,10.57242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,10.31996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,10.25997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,10.28183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,10.21063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,10.03324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,10.22162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,10.01084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,10.3958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,10.08901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,9.971527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,10.16657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,10.21063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,10.2545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,9.835545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,10.17761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,10.08901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,9.801255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,9.926407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,10.12787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,9.909434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,9.680283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,9.835545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,9.755347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,9.766844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,9.920752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,10.05558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,9.743837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,9.622142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,9.954631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,9.789798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,9.841249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,9.726545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,9.639621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,9.551907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,9.674484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,9.668683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,9.522489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,9.587089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,9.627972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,9.610472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,9.356041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,9.481151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,9.168235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,9.639621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,9.433686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,9.301907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,9.691869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,9.259584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,9.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,9.540151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,9.198785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,9.433686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,9.38598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,9.307937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,9.469307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,9.192683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,9.125292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.013928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,9.235313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,8.970247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,9.223153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,9.247456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,9.088322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,9.362036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,9.137582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,8.780579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,8.982749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.032584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,8.690652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,8.856934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,9.174353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,8.9765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,8.920063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,8.995233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,8.901171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,8.780579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,8.932635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,8.850596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,8.9765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.001469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,8.684193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,8.651825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,8.514538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,8.767789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,8.42843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,8.580186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,8.818839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,8.761387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,8.381697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,8.314481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,8.837907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,8.573644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,8.573644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,8.334703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,8.375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,8.314481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,8.67126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,8.388389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,8.388389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,8.23991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,8.321227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,8.67126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,8.441734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,8.606306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,8.501347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,8.219456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,8.455018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,8.560545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,8.157783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,8.260315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,8.27389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,8.341433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,7.969903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.067868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,8.212626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,8.354876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.04);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.116408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,7.955809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,7.934622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.07482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,7.962859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,7.892077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,7.668501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,7.66118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,7.719551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,7.870718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,7.763042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,7.755811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.102569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,7.799099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,8.219456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.033018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,7.777485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,7.849301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.02603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,7.62447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,7.690421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,7.791901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,7.705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,7.955809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,7.741327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,7.247158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,7.705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,7.842149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,7.392806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,7.639175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,7.770267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.223893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,7.697714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,7.62447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,7.920466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,7.763042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,7.528189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,123.7361);
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
   
   TH1D *VH_tagFirst_Z_mass__213 = new TH1D("VH_tagFirst_Z_mass__213","",1000,0,2000);
   VH_tagFirst_Z_mass__213->SetBinContent(26,21480);
   VH_tagFirst_Z_mass__213->SetBinContent(27,22743);
   VH_tagFirst_Z_mass__213->SetBinContent(28,24065);
   VH_tagFirst_Z_mass__213->SetBinContent(29,24984);
   VH_tagFirst_Z_mass__213->SetBinContent(30,25395);
   VH_tagFirst_Z_mass__213->SetBinContent(61,18928);
   VH_tagFirst_Z_mass__213->SetBinContent(62,18825);
   VH_tagFirst_Z_mass__213->SetBinContent(63,18522);
   VH_tagFirst_Z_mass__213->SetBinContent(64,18732);
   VH_tagFirst_Z_mass__213->SetBinContent(65,18377);
   VH_tagFirst_Z_mass__213->SetBinContent(1000,110);
   VH_tagFirst_Z_mass__213->SetBinContent(1001,60794);
   VH_tagFirst_Z_mass__213->SetEntries(3573384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__213->SetLineColor(ci);
   VH_tagFirst_Z_mass__213->SetLineWidth(2);
   VH_tagFirst_Z_mass__213->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__213->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__213->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__213->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__213->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__213->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__213->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__213->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__213->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__213->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__213->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__213->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1213[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1213[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 19450.77, 20720.42, 21720.73, 22692.57, 23083.18, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16712.48, 16608.97, 16411.65, 16227.74, 16231.09,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 88.44 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1213[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1213[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.8863267, 2.594899, 6.302987, 11.82982, 18.13647, 25.42471,
   33.14469, 40.68699, 48.29348, 54.91037, 62.13776, 67.92657, 72.57603, 76.77934, 80.72179, 83.31471, 85.30208, 87.1895, 87.9367, 89.29682, 89.38727, 89.55472,
   89.40735, 89.001, 88.75098, 88.52117, 88.27488, 87.72971, 87.45233, 86.93169, 86.14517, 85.81625, 85.41646, 84.80265, 84.09835, 83.48627, 82.27234, 81.62047,
   81.10114, 80.39511, 79.50306, 78.81832, 78.21443, 77.62609, 77.01212, 76.70988, 76.33591, 75.94236, 75.32511, 74.82433, 74.59225, 74.14784, 73.73121, 73.73882,
   72.91697, 72.47855, 71.79481, 71.70096, 71.72991, 71.03896, 70.81349, 70.39784, 70.28776, 69.52763, 69.06202, 68.80398, 68.26853, 68.04542, 67.52473, 67.1464,
   66.542, 66.39004, 65.91588, 65.2614, 65.10387, 64.52034, 64.27898, 63.71608, 63.26712, 63.11172, 62.45751, 61.75459, 61.51698, 61.4394, 61.08493, 60.61556,
   59.78788, 59.77943, 59.20408, 58.64605, 58.49085, 57.92982, 57.5976, 57.09662, 56.89085, 56.45222, 56.00915, 55.5373, 55.52619, 54.90731, 54.83879, 54.63377,
   53.81835, 53.55497, 53.2987, 52.96391, 52.61633, 52.40154, 52.21703, 51.5443, 51.55192, 51.10589, 50.91559, 50.57723, 50.01495, 49.81147, 49.61507, 49.43492,
   49.11379, 48.76178, 48.92835, 48.17948, 48.17598, 47.82646, 47.31453, 47.38089, 47.41049, 46.93947, 46.87367, 46.45521, 46.38873, 46.13158, 45.48481, 45.40455,
   45.47741, 44.8775, 44.95995, 44.63679, 44.38466, 44.31, 43.75695, 43.85046, 43.89139, 43.37312, 43.48166, 43.20461, 42.92839, 42.65696, 42.65959, 42.52917,
   42.37452, 42.20468, 42.06752, 42.3361, 41.78109, 41.61827, 41.31108, 41.09591, 41.23767, 40.82604, 41.08635, 40.70078, 40.40328, 40.71043, 40.48791, 40.07418,
   40.01953, 40.39078, 40.01813, 39.68725, 39.63207, 39.40061, 39.46038, 39.29223, 39.32934, 39.45896, 39.24365, 39.32506, 38.92637, 39.19357, 38.80075, 38.69214,
   38.59776, 38.90618, 38.45794, 38.04721, 38.14148, 38.40684, 37.66926, 37.98965, 37.74664, 37.96749, 37.61858, 37.73474, 37.7511, 37.53944, 37.4796, 37.41367,
   37.51551, 37.03228, 36.99589, 36.93821, 37.185, 37.03834, 36.86827, 36.80429, 36.31313, 36.4581, 36.16294, 36.39494, 36.14586, 36.19241, 36.06972, 36.36718,
   36.17069, 36.02769, 35.93412, 35.80271, 35.65508, 35.73839, 35.65036, 35.23557, 35.41506, 35.17021, 35.3786, 35.06476, 35.28331, 35.09195, 35.37543, 34.82389,
   34.85449, 34.73677, 34.74, 34.87381, 34.59757, 34.72869, 34.38771, 34.34853, 34.37139, 34.85288, 34.16343, 34.23398, 33.99218, 34.28639, 34.13221, 33.78023,
   33.9575, 33.57362, 33.85324, 33.70373, 33.68541, 33.55021, 33.40943, 33.45642, 33.13453, 33.64041, 33.11759, 33.33881, 33.1853, 33.05145, 32.95283, 32.95283,
   32.85563, 32.82829, 32.66207, 32.76499, 32.61393, 32.56917, 32.64661, 32.53124, 32.4518, 32.52262, 32.31491, 32.09887, 32.01836, 32.1181, 32.30449, 31.95345,
   31.84615, 32.02186, 31.55586, 31.71903, 31.48109, 31.64819, 31.56297, 31.47752, 31.52384, 31.54875, 31.39542, 31.11896, 31.31489, 31.0937, 30.88002, 31.07204,
   30.73796, 31.13338, 31.04675, 30.85821, 30.75804, 30.4629, 30.47027, 30.49972, 30.86548, 30.27814, 30.51076, 30.19649, 29.96893, 30.2225, 30.18348, 30.02318,
   29.85262, 29.94458, 30.15744, 30.07546, 29.89957, 29.54085, 29.62809, 29.7434, 29.51044, 29.28904, 29.57691, 29.39422, 29.37704, 29.38468, 29.04858, 29.35793,
   29.04278, 29.04471, 28.99444, 29.08911, 28.88586, 28.83725, 28.73394, 29.04664, 28.81779, 28.55175, 28.63025, 28.64593, 28.40397, 28.3585, 28.29114, 28.45923,
   28.30502, 28.16392, 28.06612, 28.23356, 28.00207, 27.82719, 27.86346, 28.08211, 27.67149, 27.50266, 27.70391, 27.28965, 27.64308, 27.43321, 27.4107, 27.17839,
   27.11845, 27.07082, 27.06667, 27.21965, 27.1081, 26.88153, 26.74341, 26.82511, 26.756, 27.09568, 26.60035, 26.87527, 27.08118, 27.03348, 26.42256, 26.39706,
   26.63197, 26.1922, 26.56869, 26.45228, 26.66145, 26.19006, 26.46076, 26.18363, 26.00299, 26.12785, 26.02672, 25.93385, 25.75799, 25.95547, 25.68382, 25.7362,
   25.5919, 25.795, 25.44677, 25.59628, 25.45559, 25.52383, 25.2542, 25.29195, 25.47542, 25.22308, 25.16517, 25.57874, 25.17631, 25.01308, 25.10713, 24.8691,
   24.79, 24.93669, 24.81262, 24.59913, 24.82393, 25.34292, 24.69929, 24.65609, 24.67656, 24.83523, 24.47564, 24.42056, 24.22909, 24.2823, 24.41137, 24.25918,
   24.25224, 23.99405, 24.1386, 24.08741, 24.10138, 23.85332, 24.1293, 24.12465, 24.09672, 24.01976, 23.45, 23.59789, 23.76612, 23.63828, 23.73777, 23.60265,
   23.54552, 23.35889, 23.32043, 23.10529, 23.29154, 23.18045, 23.3949, 23.55505, 23.06883, 23.09071, 22.95911, 22.8636, 22.86605, 23.13199, 22.96889, 22.73562,
   22.80216, 22.56468, 22.48496, 22.54478, 22.52237, 22.73068, 22.68868, 22.56468, 22.38241, 22.24915, 22.12522, 22.17589, 22.4525, 22.31965, 22.23653, 22.30959,
   22.15057, 21.9955, 21.90347, 21.91115, 21.65355, 21.67686, 21.60945, 21.86244, 21.60685, 21.57306, 21.7234, 21.58347, 21.56266, 21.64059, 21.71307, 21.59906,
   21.45308, 20.83743, 21.35346, 21.22431, 21.36922, 21.26129, 21.13423, 20.86434, 20.72402, 20.99036, 20.94755, 20.59365, 20.69693, 20.53088, 21.15015, 20.67794,
   20.46792, 20.38276, 20.49806, 20.74026, 20.52268, 20.37725, 20.32487, 20.59637, 20.50353, 20.4597, 20.04409, 20.09442, 20.42127, 20.18914, 20.60999, 20.01607,
   20.08045, 19.98241, 19.86694, 19.43289, 19.83019, 19.95712, 19.81037, 19.45886, 20.00486, 19.77919, 20.03849, 19.62826, 19.46462, 19.42711, 19.33156, 19.51932,
   19.48479, 19.27051, 19.2297, 19.22386, 19.09206, 19.02139, 19.21218, 18.88521, 19.16832, 18.88224, 19.17418, 18.9149, 19.22094, 18.983, 18.79287, 18.85547,
   18.91193, 18.52826, 18.89412, 18.63696, 18.79287, 18.38842, 18.4767, 18.44022, 18.53128, 18.65803, 18.69108, 18.16738, 18.39147, 18.02786, 18.17973, 18.32116,
   18.41281, 18.13028, 18.12099, 18.31504, 18.2813, 17.76132, 17.89038, 18.15502, 17.97487, 17.68851, 17.72337, 17.66946, 17.755, 17.83069, 17.85899, 17.42644,
   17.63131, 17.46182, 17.66946, 17.21913, 17.53238, 17.65676, 17.33605, 17.11781, 17.23542, 17.28094, 17.14729, 17.32957, 17.14074, 16.97297, 17.10141, 17.06857,
   16.93325, 17.02578, 16.67277, 16.60195, 16.78012, 16.98949, 16.79683, 16.70303, 16.45256, 16.64583, 16.55795, 16.57488, 16.52742, 16.67614, 16.61208, 16.38078,
   16.48323, 16.38763, 16.58165, 16.32588, 16.63571, 16.29492, 15.95388, 16.13921, 16.23627, 15.82321, 16.13921, 15.97497, 15.82321, 16.17047, 15.92924, 15.86571,
   16.06604, 16.01006, 15.70932, 15.61618, 15.75569, 15.71646, 15.6843, 16.04507, 15.60539, 15.63413, 15.74856, 15.591, 15.61977, 15.0936, 15.20103, 15.80192,
   15.28202, 15.19734, 15.075, 15.68788, 15.271, 15.10103, 15.10846, 15.1196, 15.06755, 15.01906, 15.08244, 14.97791, 15.16777, 14.90279, 14.65218, 14.75522,
   14.70951, 14.83487, 14.98166, 14.47107, 14.66367, 14.73619, 14.76662, 14.85754, 14.64835, 14.77042, 14.64452, 14.57539, 14.50979, 14.64069, 14.35427, 14.14557,
   14.35036, 14.13367, 14.13764, 14.31121, 14.55227, 14.2798, 14.29551, 14.05404, 14.07399, 13.80834, 14.05005, 14.17727, 13.91359, 13.94582, 14.10585, 13.65716,
   13.95789, 13.94984, 13.84487, 13.59951, 13.98199, 13.75949, 13.82459, 13.9418, 13.89342, 13.88534, 13.51259, 13.52089, 13.60364, 13.68589, 13.37485, 13.11644,
   13.50428, 13.34125, 13.21022, 13.36226, 13.41256, 13.41674, 13.31599, 13.22296, 13.08217, 12.96584, 13.2272, 12.87464, 13.05211, 13.05641, 12.81348, 12.98314,
   12.93985, 13.39581, 12.83535, 12.91815, 12.90511, 12.94418, 12.95718, 12.65484, 12.59707, 12.82661, 12.5837, 12.67699, 12.69027, 12.53903, 12.41761, 12.59261,
   12.55692, 12.72118, 12.45371, 12.32691, 12.52112, 12.49869, 12.35419, 12.3451, 12.49869, 12.61043, 12.46722, 12.52112, 12.41761, 12.33146, 11.97127, 12.39047,
   11.81083, 12.26759, 12.07395, 11.92901, 11.92431, 11.91489, 12.02272, 12.32691, 11.8866, 12.24011, 11.93841, 12.12034, 11.94311, 12.02272, 12.03205, 11.74413,
   11.66262, 11.42934, 11.40477, 11.85824, 11.79181, 11.61924, 11.59023, 11.53685, 11.77753, 11.63372, 11.41461, 11.70584, 11.63372, 11.78229, 11.70584, 11.42443,
   11.67224, 11.24622, 11.30098, 11.25121, 11.32577, 11.40477, 10.9786, 11.49299, 11.2562, 10.94276, 11.12583, 11.04484, 11.09553, 10.9786, 10.98882, 10.6938,
   10.5352, 10.64119, 11.17113, 10.80343, 11.07528, 10.9786, 10.94789, 10.70953, 10.59893, 10.92737, 10.9325, 10.82418, 10.74614, 10.6833, 10.67279, 10.77222,
   10.40659, 10.52455, 10.52455, 10.74614, 10.63592, 10.40659, 10.62536, 10.66753, 10.385, 10.80343, 10.23807, 10.56711, 10.57242, 10.31996, 10.25997, 10.28183,
   10.21063, 10.03324, 10.22162, 10.01084, 10.3958, 10.08901, 9.971527, 10.16657, 10.21063, 10.2545, 9.835545, 10.17761, 10.08901, 9.801255, 9.926407, 10.12787,
   9.909434, 9.680283, 9.835545, 9.755347, 9.766844, 9.920752, 10.05558, 9.743837, 9.622142, 9.954631, 9.789798, 9.841249, 9.726545, 9.639621, 9.551907, 9.674484,
   9.668683, 9.522489, 9.587089, 9.627972, 9.610472, 9.356041, 9.481151, 9.168235, 9.639621, 9.433686, 9.301907, 9.691869, 9.259584, 9.38, 9.540151, 9.198785,
   9.433686, 9.38598, 9.307937, 9.469307, 9.192683, 9.125292, 9.013928, 9.235313, 8.970247, 9.223153, 9.247456, 9.088322, 9.362036, 9.137582, 8.780579, 8.982749,
   9.032584, 8.690652, 8.856934, 9.174353, 8.9765, 8.920063, 8.995233, 8.901171, 8.780579, 8.932635, 8.850596, 8.9765, 9.001469, 8.684193, 8.651825, 8.514538,
   8.767789, 8.42843, 8.580186, 8.818839, 8.761387, 8.381697, 8.314481, 8.837907, 8.573644, 8.573644, 8.334703, 8.375, 8.314481, 8.67126, 8.388389, 8.388389,
   8.23991, 8.321227, 8.67126, 8.441734, 8.606306, 8.501347, 8.219456, 8.455018, 8.560545, 8.157783, 8.260315, 8.27389, 8.341433, 7.969903, 8.067868, 8.212626,
   8.354876, 8.04, 8.116408, 7.955809, 7.934622, 8.07482, 7.962859, 7.892077, 7.668501, 7.66118, 7.719551, 7.870718, 7.763042, 7.755811, 8.102569, 7.799099,
   8.219456, 8.033018, 7.777485, 7.849301, 8.02603, 7.62447, 7.690421, 7.791901, 7.705, 7.955809, 7.741327, 7.247158, 7.705, 7.842149, 7.392806, 7.639175,
   7.770267, 7.223893, 7.697714, 7.62447, 7.920466, 7.763042, 7.528189 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1213,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1213,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1213,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1213);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->SetMinimum(-2415.621);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->SetMaximum(25497.18);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1213);
   
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
   
   TH1D *data_mc_ratio__214 = new TH1D("data_mc_ratio__214","",1000,0,2000);
   data_mc_ratio__214->SetBinContent(26,1.104326);
   data_mc_ratio__214->SetBinContent(27,1.097613);
   data_mc_ratio__214->SetBinContent(28,1.107928);
   data_mc_ratio__214->SetBinContent(29,1.100977);
   data_mc_ratio__214->SetBinContent(30,1.100152);
   data_mc_ratio__214->SetBinContent(61,1.132567);
   data_mc_ratio__214->SetBinContent(62,1.133424);
   data_mc_ratio__214->SetBinContent(63,1.128589);
   data_mc_ratio__214->SetBinContent(64,1.15432);
   data_mc_ratio__214->SetBinContent(65,1.13221);
   data_mc_ratio__214->SetBinContent(1000,1.243781);
   data_mc_ratio__214->SetBinContent(1001,1.330186);
   data_mc_ratio__214->SetBinError(26,0.007534949);
   data_mc_ratio__214->SetBinError(27,0.007278222);
   data_mc_ratio__214->SetBinError(28,0.007141978);
   data_mc_ratio__214->SetBinError(29,0.006965421);
   data_mc_ratio__214->SetBinError(30,0.006903647);
   data_mc_ratio__214->SetBinError(61,0.008232116);
   data_mc_ratio__214->SetBinError(62,0.008260854);
   data_mc_ratio__214->SetBinError(63,0.008292619);
   data_mc_ratio__214->SetBinError(64,0.008434011);
   data_mc_ratio__214->SetBinError(65,0.008351986);
   data_mc_ratio__214->SetBinError(1000,0.1185899);
   data_mc_ratio__214->SetBinError(1001,0.006486463);
   data_mc_ratio__214->SetMinimum(0.4);
   data_mc_ratio__214->SetMaximum(1.6);
   data_mc_ratio__214->SetEntries(5924.943);
   data_mc_ratio__214->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__214->SetLineColor(ci);
   data_mc_ratio__214->SetLineWidth(2);
   data_mc_ratio__214->SetMarkerStyle(20);
   data_mc_ratio__214->SetMarkerSize(1.2);
   data_mc_ratio__214->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__214->GetXaxis()->SetRange(1,150);
   data_mc_ratio__214->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__214->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__214->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__214->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__214->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__214->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__214->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__214->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__214->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__214->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__214->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__214->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__214->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__214->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__214->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__214->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1214[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1214[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1214[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1214[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1214,Graph_from_mc_statistical_error_fy1214,Graph_from_mc_statistical_error_fex1214,Graph_from_mc_statistical_error_fey1214);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1214 = new TH1F("Graph_Graph_from_mc_statistical_error1214","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1214->SetMinimum(0.8978536);
   Graph_Graph_from_mc_statistical_error1214->SetMaximum(1.102146);
   Graph_Graph_from_mc_statistical_error1214->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1214->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1214->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1214->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1214->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1214->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1214->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1214);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->SetSelected(Z_mass_tagFirst_VR_16);
}
