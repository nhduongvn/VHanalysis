#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_17/Z_mass_tagFirst_VR_17
//=========  (Wed Feb 14 12:27:16 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_17 = new TCanvas("Z_mass_tagFirst_VR_17", "Z_mass_tagFirst_VR_17",0,0,600,600);
   Z_mass_tagFirst_VR_17->SetHighLightColor(2);
   Z_mass_tagFirst_VR_17->Range(0,0,1,1);
   Z_mass_tagFirst_VR_17->SetFillColor(0);
   Z_mass_tagFirst_VR_17->SetFillStyle(4000);
   Z_mass_tagFirst_VR_17->SetBorderMode(0);
   Z_mass_tagFirst_VR_17->SetBorderSize(2);
   Z_mass_tagFirst_VR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-20.95155,315.7258,20940.6);
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
   st->SetMaximum(18844.44);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",1000,0,2000);
   st_stack_35->SetMinimum(0.01);
   st_stack_35->SetMaximum(18844.44);
   st_stack_35->SetDirectory(nullptr);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->SetLineWidth(0);
   st_stack_35->GetXaxis()->SetRange(1,150);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetTitleOffset(1);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetLabelSize(0.05);
   st_stack_35->GetYaxis()->SetTitleSize(0.057);
   st_stack_35->GetYaxis()->SetTitleOffset(1.2);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetTitleOffset(1);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,5465.245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,6005.759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,6586.013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,7058.627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,7385.325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,5153.025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,5106.599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,5076.072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,5062.858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,5005.829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,33.84238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,18567.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(6,0.04610043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.0384553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.01478622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.03353407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.8318896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7320117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.515314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.293215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.56863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,12.70021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,16.90835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,21.6699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,25.88796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,30.84085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,35.61652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,39.45824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,43.29903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,46.88662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,50.27025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,52.76804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,55.59182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,57.10857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,59.11873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,59.93406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,60.83382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,61.84455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,61.87711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,62.00302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,62.30423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,62.62806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,62.8484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,62.01039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,62.14084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,62.09728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,62.60205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,62.20483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,61.97586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,61.42904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,61.20527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,60.40722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,60.26321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,58.88606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,58.36107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,58.3102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,57.23045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,56.92406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,55.62615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,55.37519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,55.33452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,54.47169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,53.94266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,53.5537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,53.19053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,52.6022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,53.00806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,52.19154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,52.11019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,51.91957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,51.80747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,51.20353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,50.85032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,50.57765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,50.39929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,50.00212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,49.75611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,49.79217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,49.53745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,49.01247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,48.83231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,48.45726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,48.31869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,47.87132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,48.09183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,47.58566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,47.2428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,47.11179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,46.60895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,46.25095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,46.25824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,46.08764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,45.85849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,45.27642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,45.28291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,44.59186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,44.34274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,44.12064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,44.31853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,43.69975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,43.85918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,43.25906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,43.34116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,42.51503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,42.50886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,42.14099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,41.70446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,41.98119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,40.85541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,41.09302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,40.71821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,40.58435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,40.66354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,39.98711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,39.68057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,40.02419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,39.41593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,39.03817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,38.85946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,38.78718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,38.56071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,38.17619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,37.45262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,37.66001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,37.29358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,37.47021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,37.01361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,37.10799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,36.89271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,36.13969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,36.55484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,35.99255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,36.01568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,35.7495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,35.3734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,35.06658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,35.14881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,35.13694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,34.38966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,34.67557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,34.52109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,34.15161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,33.92152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,33.88022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,33.99114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,34.27218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,33.58258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,33.25785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,33.49482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,32.68097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,32.64219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,32.48185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,32.47078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,32.33496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,32.19485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,32.37628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,32.36434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,31.76384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,31.422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,31.56226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,31.73648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,30.96028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,31.16477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,30.48294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,31.02537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,30.49047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,30.77134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,30.24249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,30.44488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,30.59404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,30.35806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,30.0713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,30.14281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,29.70336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,29.75001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,29.60179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,29.08544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,29.30682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,29.45302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,29.30868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,28.93882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,29.05875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,28.87181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,29.31966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,28.74109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,28.59716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.07594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,28.56207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,28.5529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,28.34498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,28.65301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,28.63431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,27.9709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,27.95123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,27.91691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,27.89995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,27.92849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,27.61067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,27.75234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,27.99055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,27.80573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,27.35688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,27.32363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,27.14245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,26.84548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,27.09467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,27.37746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,26.96767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,27.15906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,27.05691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,26.92961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,26.74435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,26.5327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,26.75679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,26.51444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,26.16699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,26.81733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,26.65897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,26.24796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,26.06959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,26.05832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,26.31836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.03138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,26.35088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,26.17593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,25.85642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,26.09249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,25.67603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,25.76754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,25.31121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,25.6413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,25.66389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,25.60273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,25.57525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,25.46876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,25.60655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,25.77174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,25.28415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,25.38148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,24.9124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,25.56235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,25.09929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,25.45784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,25.27711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,25.08082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,25.30326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,24.58362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,24.28264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,24.97375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,24.73632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,24.70981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,24.84097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,24.47349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,24.74402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,24.87216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,24.51046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,24.56452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,24.32469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,24.50092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,24.21675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,24.6551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,23.98282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,23.80632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,24.09575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,24.04454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.2824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,24.22069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,24.28144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,24.04676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,23.60002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,23.76147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,24.1316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,24.69233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,23.77446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,23.50995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,23.74505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,23.92146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,23.83605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.00066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,23.35056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,23.62137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,23.17643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,23.40478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,23.85364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,23.30281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,22.96453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,23.27661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,23.62221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,23.11675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,23.47462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.22177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,23.12165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,22.89318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,23.24683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,22.90013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,23.04954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.0551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,22.93725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,22.78895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,22.77058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,22.75348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,22.76845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,22.64715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,22.42016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,22.47659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,22.64594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,22.58402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,22.35856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,22.48059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,22.41499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,22.10823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.04992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,22.37812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,22.53629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,22.31709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,21.71085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.0505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.03435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,22.56746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,22.10917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,22.10879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,22.07159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,22.15902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,21.8603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,21.79554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.04662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,23.85932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,21.77086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,21.7717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,21.86333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,22.93283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,21.57906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,21.69754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,21.59591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,21.71764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,21.86576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,21.62795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,21.35981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.04961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,21.50277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,21.35929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,21.40429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,21.34707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.07189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.13489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.07137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,21.42348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.15273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,21.39436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,21.24772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,21.3639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,20.90281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,20.59132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,20.67259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,20.64102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,20.80307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,21.20848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,20.53386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,20.8744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,20.66086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,20.71196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,20.95577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,20.38649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,20.73975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,20.47944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,20.42977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,20.35757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,20.19422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,20.39168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,20.14779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,20.23947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,19.98746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,19.8767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,19.79639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,19.95753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,19.86282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,20.3219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,19.56488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,19.86628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,19.93596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,19.85031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,19.87423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.02201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.0871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,19.60352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,19.80856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,19.57928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,19.81879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,19.74726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,19.79481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,19.53302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,19.50969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,19.17026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,19.21844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,19.33012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,19.40157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.04435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.06365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,19.25417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.09323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,18.858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.01728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,18.96439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,19.60671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.09691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,19.3972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,18.61962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,18.88212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,18.9893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.06946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,19.3344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,18.94058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,18.76346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,18.95778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,18.3722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.02583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.17171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,18.23381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,18.89389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,18.66455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,18.75514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,18.44056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,18.56218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,18.67529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,18.55792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,18.55967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,18.58507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,18.40797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.01366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,18.30949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,18.45442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,18.2187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,18.49425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,18.25373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.07917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,17.82224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,17.74341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,17.94658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.05224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,17.90979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.01155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,17.72806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,17.60675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,17.84237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.29838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.21267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,17.65667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,17.41767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,17.71952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,17.73585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,17.94032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,17.55941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,17.64927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,17.98699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,17.44037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,16.94572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,17.75544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,17.43349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,17.36077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,17.5854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,17.29348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.16467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.35333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,16.90865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.12971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,16.94489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,17.25106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.30192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.06449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,16.67979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.09814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.10032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,16.63264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,16.97505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,16.85363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,16.56679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,16.81679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,16.36684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,16.9217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,16.81196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,16.82241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,16.61674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,16.59721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,16.58805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,16.36881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,16.66228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.24148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,16.73172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.45062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,16.63336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,16.6633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,16.69189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,15.89399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,16.3218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,15.94316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.03685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,15.76497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.18049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.24767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.18467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,15.92965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,15.96925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.03007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,15.80606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,15.68524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,15.72841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,15.99275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,15.93015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,15.99037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,15.81405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,15.95822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,15.71624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,15.87889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,15.95912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,15.59874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.30122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,15.58203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,15.4497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.43844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,15.73412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.07461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.37005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,15.38923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,15.46615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.07672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.25114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.27705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.82303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.23666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,15.35899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,14.60635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,16.6442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,14.72322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.32721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,14.7285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,14.76806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.22846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,14.94431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.14946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,14.6861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,14.80868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,14.70961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,14.72719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,14.58407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,14.65629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,14.52753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,14.93903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,14.68235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.3457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,14.59035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,14.43592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.23385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.1307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.31079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.24008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.40791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.20822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.4299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,13.96604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.41722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,14.58186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.41811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.42124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.03182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,13.95831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.18196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,15.09045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.30974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,14.41215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,13.91907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.08015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,13.68981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,13.95428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,13.73101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,13.93714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,13.67107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,13.64611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,13.63487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.16889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,13.8338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,13.58511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.31904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,13.73973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,13.59853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,14.05473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.50057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.40223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.27202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.33283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.10709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.15861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.22044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.22933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,12.94263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.09108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.16449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.17246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.37865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.53149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.02662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.02871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.14704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.34077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.03355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.09958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.24869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,12.99259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.08074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.07013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.16172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,12.96193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,12.88311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.13847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,12.5738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,12.68467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,12.67959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,12.92143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,12.78895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,12.76526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,12.76947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,12.91499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,12.68063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.33075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.19511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,12.46461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.50889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.42921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.9143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,12.54169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.28978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,12.68096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,12.48324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.44907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,12.63751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.19644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.31125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,12.54669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.29623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.18321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.44491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.15568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.17739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.07705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.05308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.0701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,11.93749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,11.62969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,11.92126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,11.76804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,11.81609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,11.99838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,11.88648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,11.53879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,11.95404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,11.51018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.48191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,11.92726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.35719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.00627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,11.7036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,11.7622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.41581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.53096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,11.74848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.12737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,11.87957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,11.71512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.40167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.11567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.17495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.28125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.28601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,11.49182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.32777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,11.69036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.43858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.40552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.2495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.14051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.14833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.00392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.07229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,10.92047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.34799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.01602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.37066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,10.99124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,10.87053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.29152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.0133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,10.80871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,10.82129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.20224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,10.69866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.0635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,10.6406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,10.98074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,10.94263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.21936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.55467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,10.8454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,10.64243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,10.70067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.50758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,10.85931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,10.74328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.5397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,10.78377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.43005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.5085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,10.72919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.33558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,10.7208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,10.66979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.36092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.37941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,10.62901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.57115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.48813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.22209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.25635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.34351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,11.50184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.22128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.44536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.11265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.25708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.25445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.33728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.28368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.06799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.57626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.37994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.07223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,9.954675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,9.811176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,9.883768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.07696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,9.939758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.11585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,9.932011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,9.796037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.21944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,9.930519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.21616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,9.691001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,9.941314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,9.978244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,9.665668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.392298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.18254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,9.865991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.79345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,9.704881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,9.919211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.591673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.36622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.465231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.395686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,9.663925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,10.04627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,9.616574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.519907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.517408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.329528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.332136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.551947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.342989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.552351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.146416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,9.614655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.114682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.036142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.357515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.35327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.23072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,8.826777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.331242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.160145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,8.854781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,8.873484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.388973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.481231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,8.970759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.062797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.403419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,8.977589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.331673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,8.924838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,8.931953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.069331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.267272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.213997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,8.789765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,8.720052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,8.654748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.615339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,8.836876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,8.79209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,8.674878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,8.841561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,8.874858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.624451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,8.896049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.555817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.056111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,8.707483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,8.719669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,8.906584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.062334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.237999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.641071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.6614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.475044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,8.767623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.466099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,8.673108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.304837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.490131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.618387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.442665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.518391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.476458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.122546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.688525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.307994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,7.948692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.337286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,8.672729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.31994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.351351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,7.981242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.313592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.495645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.27539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,7.950185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.367828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.467589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,7.775104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.055647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.090489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,7.865976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,7.994464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.124146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.058768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.036986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.045237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.146295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.009998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.005402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.25676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.220537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,7.77512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.088449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,7.818917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,7.801506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.691706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,7.853155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.456978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,7.857312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,7.773632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,7.821834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.558158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,7.740879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,7.780248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,7.898164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,7.67237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,7.712659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.617674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,7.893122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.008373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.688389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,7.735346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.36311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.462325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.566443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.334934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,7.906592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,7.697859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,7.793738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.763498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.599063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.482646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.47253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.361647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.153048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.347083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,6.933465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.370171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.139681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.368326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.134799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.479846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.165771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,6.956584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.518738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.360193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,6.933206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,6.97139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.303884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.100588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.273033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.704672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,6.862087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.225187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.179075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.385112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.138822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.222779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.04203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,6.935049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,6.734304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,6.845292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.65915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,6.735007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.052398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.064924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.074539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.124556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,6.843348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,6.923105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.029212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.538215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.492824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,6.800256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.037295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.253571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,6.839829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.577199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,6.915088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,6.794652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.354443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,6.891889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.62384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.525873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.698883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,6.78277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.592298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,6.711884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.471767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.624245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.064199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,6.957622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.395436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.285154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.595544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.296734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,6.71641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,6.699635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.67355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.512712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.381678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.428205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,6.732199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.660132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.431159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.240238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.717551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.324714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.56714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.254955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.403811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.408112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.632037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.534647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.573146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.097541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.341755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.275113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,5.945756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.583117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.094917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.243735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.250857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.210101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.547037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.379614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.537268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,5.927808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.373031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.08637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.115581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.149158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.073773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.084292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.117471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.179341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.111731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,5.853928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.819461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.240576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.078719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,5.929154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.557886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.040894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.116527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,5.840696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,5.796393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.319255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.414411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,5.929331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,5.784936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,96.39178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(1832655);

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
   
   TH1D *VH_tagFirst_Z_mass__69 = new TH1D("VH_tagFirst_Z_mass__69","",1000,0,2000);
   VH_tagFirst_Z_mass__69->SetBinContent(26,6374);
   VH_tagFirst_Z_mass__69->SetBinContent(27,6805);
   VH_tagFirst_Z_mass__69->SetBinContent(28,7519);
   VH_tagFirst_Z_mass__69->SetBinContent(29,7898);
   VH_tagFirst_Z_mass__69->SetBinContent(30,8480);
   VH_tagFirst_Z_mass__69->SetBinContent(61,6945);
   VH_tagFirst_Z_mass__69->SetBinContent(62,6784);
   VH_tagFirst_Z_mass__69->SetBinContent(63,6818);
   VH_tagFirst_Z_mass__69->SetBinContent(64,6711);
   VH_tagFirst_Z_mass__69->SetBinContent(65,6727);
   VH_tagFirst_Z_mass__69->SetBinContent(1000,45);
   VH_tagFirst_Z_mass__69->SetBinContent(1001,26483);
   VH_tagFirst_Z_mass__69->SetEntries(1337267);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__69->SetLineColor(ci);
   VH_tagFirst_Z_mass__69->SetLineWidth(2);
   VH_tagFirst_Z_mass__69->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__69->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__69->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__69->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__69->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__69->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__69->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__69->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__69->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__69->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__69->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__69->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1069[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1069[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 5465.245, 6005.759, 6586.013, 7058.627, 7385.325, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5153.025, 5106.599, 5076.072, 5062.858, 5005.829,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 33.84238 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1069[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1069[1000] = { 0, 0, 0, 0, 0, 0.04610043, 0.0384553, 0, 0.01478622, 0, 0.03353407, 0.8318896, 0.7320117, 2.515314, 5.293215, 8.56863, 12.70021,
   16.90835, 21.6699, 25.88796, 30.84085, 35.61652, 39.45824, 43.29903, 46.88662, 50.27025, 52.76804, 55.59182, 57.10857, 59.11873, 59.93406, 60.83382, 61.84455,
   61.87711, 62.00302, 62.30423, 62.62806, 62.8484, 62.01039, 62.14084, 62.09728, 62.60205, 62.20483, 61.97586, 61.42904, 61.20527, 60.40722, 60.26321, 58.88606,
   58.36107, 58.3102, 57.23045, 56.92406, 55.62615, 55.37519, 55.33452, 54.47169, 53.94266, 53.5537, 53.19053, 52.6022, 53.00806, 52.19154, 52.11019, 51.91957,
   51.80747, 51.20353, 50.85032, 50.57765, 50.39929, 50.00212, 49.75611, 49.79217, 49.53745, 49.01247, 48.83231, 48.45726, 48.31869, 47.87132, 48.09183, 47.58566,
   47.2428, 47.11179, 46.60895, 46.25095, 46.25824, 46.08764, 45.85849, 45.27642, 45.28291, 44.59186, 44.34274, 44.12064, 44.31853, 43.69975, 43.85918, 43.25906,
   43.34116, 42.51503, 42.50886, 42.14099, 41.70446, 41.98119, 40.85541, 41.09302, 40.71821, 40.58435, 40.66354, 39.98711, 39.68057, 40.02419, 39.41593, 39.03817,
   38.85946, 38.78718, 38.56071, 38.17619, 37.45262, 37.66001, 37.29358, 37.47021, 37.01361, 37.10799, 36.89271, 36.13969, 36.55484, 35.99255, 36.01568, 35.7495,
   35.3734, 35.06658, 35.14881, 35.13694, 34.38966, 34.67557, 34.52109, 34.15161, 33.92152, 33.88022, 33.99114, 34.27218, 33.58258, 33.25785, 33.49482, 32.68097,
   32.64219, 32.48185, 32.47078, 32.33496, 32.19485, 32.37628, 32.36434, 31.76384, 31.422, 31.56226, 31.73648, 30.96028, 31.16477, 30.48294, 31.02537, 30.49047,
   30.77134, 30.24249, 30.44488, 30.59404, 30.35806, 30.0713, 30.14281, 29.70336, 29.75001, 29.60179, 29.08544, 29.30682, 29.45302, 29.30868, 28.93882, 29.05875,
   28.87181, 29.31966, 28.74109, 28.59716, 29.07594, 28.56207, 28.5529, 28.34498, 28.65301, 28.63431, 27.9709, 27.95123, 27.91691, 27.89995, 27.92849, 27.61067,
   27.75234, 27.99055, 27.80573, 27.35688, 27.32363, 27.14245, 26.84548, 27.09467, 27.37746, 26.96767, 27.15906, 27.05691, 26.92961, 26.74435, 26.5327, 26.75679,
   26.51444, 26.16699, 26.81733, 26.65897, 26.24796, 26.06959, 26.05832, 26.31836, 26.03138, 26.35088, 26.17593, 25.85642, 26.09249, 25.67603, 25.76754, 25.31121,
   25.6413, 25.66389, 25.60273, 25.57525, 25.46876, 25.60655, 25.77174, 25.28415, 25.38148, 24.9124, 25.56235, 25.09929, 25.45784, 25.27711, 25.08082, 25.30326,
   24.58362, 24.28264, 24.97375, 24.73632, 24.70981, 24.84097, 24.47349, 24.74402, 24.87216, 24.51046, 24.56452, 24.32469, 24.50092, 24.21675, 24.6551, 23.98282,
   23.80632, 24.09575, 24.04454, 24.2824, 24.22069, 24.28144, 24.04676, 23.60002, 23.76147, 24.1316, 24.69233, 23.77446, 23.50995, 23.74505, 23.92146, 23.83605,
   24.00066, 23.35056, 23.62137, 23.17643, 23.40478, 23.85364, 23.30281, 22.96453, 23.27661, 23.62221, 23.11675, 23.47462, 23.22177, 23.12165, 22.89318, 23.24683,
   22.90013, 23.04954, 23.0551, 22.93725, 22.78895, 22.77058, 22.75348, 22.76845, 22.64715, 22.42016, 22.47659, 22.64594, 22.58402, 22.35856, 22.48059, 22.41499,
   22.10823, 22.04992, 22.37812, 22.53629, 22.31709, 21.71085, 22.0505, 22.03435, 22.56746, 22.10917, 22.10879, 22.07159, 22.15902, 21.8603, 21.79554, 22.04662,
   23.85932, 21.77086, 21.7717, 21.86333, 22.93283, 21.57906, 21.69754, 21.59591, 21.71764, 21.86576, 21.62795, 21.35981, 22.04961, 21.50277, 21.35929, 21.40429,
   21.34707, 21.07189, 21.13489, 21.07137, 21.42348, 21.15273, 21.39436, 21.24772, 21.3639, 20.90281, 20.59132, 20.67259, 20.64102, 20.80307, 21.20848, 20.53386,
   20.8744, 20.66086, 20.71196, 20.95577, 20.38649, 20.73975, 20.47944, 20.42977, 20.35757, 20.19422, 20.39168, 20.14779, 20.23947, 19.98746, 19.8767, 19.79639,
   19.95753, 19.86282, 20.3219, 19.56488, 19.86628, 19.93596, 19.85031, 19.87423, 20.02201, 20.0871, 19.60352, 19.80856, 19.57928, 19.81879, 19.74726, 19.79481,
   19.53302, 19.50969, 19.17026, 19.21844, 19.33012, 19.40157, 19.04435, 19.06365, 19.25417, 19.09323, 18.858, 19.01728, 18.96439, 19.60671, 19.09691, 19.3972,
   18.61962, 18.88212, 18.9893, 19.06946, 19.3344, 18.94058, 18.76346, 18.95778, 18.3722, 19.02583, 19.17171, 18.23381, 18.89389, 18.66455, 18.75514, 18.44056,
   18.56218, 18.67529, 18.55792, 18.55967, 18.58507, 18.40797, 18.01366, 18.30949, 18.45442, 18.2187, 18.49425, 18.25373, 18.07917, 17.82224, 17.74341, 17.94658,
   18.05224, 17.90979, 18.01155, 17.72806, 17.60675, 17.84237, 17.29838, 18.21267, 17.65667, 17.41767, 17.71952, 17.73585, 17.94032, 17.55941, 17.64927, 17.98699,
   17.44037, 16.94572, 17.75544, 17.43349, 17.36077, 17.5854, 17.29348, 17.16467, 17.35333, 16.90865, 17.12971, 16.94489, 17.25106, 17.30192, 17.06449, 16.67979,
   17.09814, 17.10032, 16.63264, 16.97505, 16.85363, 16.56679, 16.81679, 16.36684, 16.9217, 16.81196, 16.82241, 16.61674, 16.59721, 16.58805, 16.36881, 16.66228,
   16.24148, 16.73172, 16.45062, 16.63336, 16.6633, 16.69189, 15.89399, 16.3218, 15.94316, 16.03685, 15.76497, 16.18049, 16.24767, 16.18467, 15.92965, 15.96925,
   16.03007, 15.80606, 15.68524, 15.72841, 15.99275, 15.93015, 15.99037, 15.81405, 15.95822, 15.71624, 15.87889, 15.95912, 15.59874, 15.30122, 15.58203, 15.4497,
   15.43844, 15.73412, 15.07461, 15.37005, 15.38923, 15.46615, 15.07672, 15.25114, 15.27705, 15.82303, 15.23666, 15.35899, 14.60635, 16.6442, 14.72322, 15.32721,
   14.7285, 14.76806, 15.22846, 14.94431, 15.14946, 14.6861, 14.80868, 14.70961, 14.72719, 14.58407, 14.65629, 14.52753, 14.93903, 14.68235, 14.3457, 14.59035,
   14.43592, 14.23385, 14.1307, 14.31079, 14.24008, 14.40791, 14.20822, 14.4299, 13.96604, 14.41722, 14.58186, 14.41811, 14.42124, 14.03182, 13.95831, 14.18196,
   15.09045, 14.30974, 14.41215, 13.91907, 14.08015, 13.68981, 13.95428, 13.73101, 13.93714, 13.67107, 13.64611, 13.63487, 14.056, 13.16889, 13.8338, 13.58511,
   13.31904, 13.73973, 13.59853, 14.05473, 13.50057, 13.40223, 13.27202, 13.33283, 13.10709, 13.15861, 13.22044, 13.22933, 12.94263, 13.09108, 13.16449, 13.17246,
   13.37865, 13.53149, 13.02662, 13.02871, 13.14704, 13.34077, 13.03355, 13.09958, 13.24869, 12.99259, 13.08074, 13.07013, 13.16172, 12.96193, 12.88311, 13.13847,
   12.5738, 12.68467, 12.67959, 12.92143, 12.78895, 12.76526, 12.76947, 12.91499, 12.68063, 12.33075, 12.19511, 12.46461, 12.50889, 12.42921, 12.9143, 12.54169,
   12.28978, 12.68096, 12.48324, 12.44907, 12.63751, 12.19644, 12.31125, 12.54669, 12.29623, 12.289, 12.18321, 12.44491, 12.15568, 12.17739, 12.07705, 12.05308,
   12.0701, 11.93749, 11.62969, 11.92126, 11.76804, 11.81609, 11.99838, 11.88648, 12.082, 11.53879, 11.95404, 11.51018, 12.48191, 11.92726, 11.35719, 12.00627,
   11.7036, 11.7622, 11.41581, 11.53096, 11.74848, 11.12737, 11.87957, 11.71512, 11.40167, 11.11567, 11.17495, 11.28125, 11.28601, 11.49182, 11.32777, 11.69036,
   11.43858, 11.40552, 11.2495, 11.14051, 11.14833, 11.00392, 11.07229, 10.92047, 11.34799, 11.01602, 11.37066, 10.99124, 10.87053, 11.29152, 11.0133, 10.80871,
   10.82129, 11.20224, 10.69866, 11.0635, 10.6406, 10.98074, 10.94263, 11.21936, 10.55467, 10.8454, 10.64243, 10.70067, 10.50758, 10.85931, 10.74328, 10.5397,
   10.78377, 10.43005, 10.5085, 10.72919, 10.33558, 10.7208, 10.66979, 10.36092, 10.37941, 10.62901, 10.57115, 10.48813, 10.22209, 10.25635, 10.34351, 11.50184,
   10.22128, 10.44536, 10.11265, 10.25708, 10.25445, 10.33728, 10.28368, 10.06799, 10.57626, 10.37994, 10.07223, 9.954675, 9.811176, 9.883768, 10.07696, 9.939758,
   10.11585, 9.932011, 9.796037, 10.21944, 9.930519, 10.21616, 9.691001, 9.941314, 9.978244, 9.665668, 9.392298, 10.18254, 9.865991, 10.79345, 9.704881, 9.919211,
   9.591673, 9.36622, 9.465231, 9.395686, 9.663925, 10.04627, 9.616574, 9.519907, 9.517408, 9.329528, 9.332136, 9.551947, 9.342989, 9.552351, 9.146416, 9.614655,
   9.114682, 9.036142, 9.357515, 9.35327, 9.23072, 8.826777, 9.331242, 9.160145, 8.854781, 8.873484, 9.388973, 9.481231, 8.970759, 9.062797, 9.403419, 8.977589,
   9.331673, 8.924838, 8.931953, 9.069331, 9.267272, 9.213997, 8.789765, 8.720052, 8.654748, 8.615339, 8.836876, 8.79209, 8.674878, 8.841561, 8.874858, 8.624451,
   8.896049, 8.555817, 9.056111, 8.707483, 8.719669, 8.906584, 9.062334, 8.237999, 8.641071, 8.6614, 8.475044, 8.767623, 8.466099, 8.673108, 8.304837, 8.490131,
   8.618387, 9.442665, 8.518391, 8.476458, 8.122546, 8.688525, 8.307994, 7.948692, 8.337286, 8.672729, 8.31994, 8.351351, 7.981242, 8.313592, 8.495645, 8.27539,
   7.950185, 8.367828, 8.467589, 7.775104, 8.055647, 8.090489, 7.865976, 7.994464, 8.124146, 8.058768, 8.036986, 8.045237, 8.146295, 8.009998, 8.005402, 8.25676,
   8.220537, 7.77512, 8.088449, 7.818917, 7.801506, 7.691706, 7.853155, 7.456978, 7.857312, 7.773632, 7.821834, 7.558158, 7.740879, 7.780248, 7.898164, 7.67237,
   7.712659, 7.617674, 7.893122, 8.008373, 7.688389, 7.735346, 7.36311, 7.462325, 7.566443, 7.334934, 7.906592, 7.697859, 7.793738, 7.763498, 7.599063, 7.482646,
   7.47253, 7.361647, 7.153048, 7.347083, 6.933465, 7.370171, 7.139681, 7.368326, 7.134799, 7.479846, 7.165771, 6.956584, 7.518738, 7.360193, 6.933206, 6.97139,
   7.303884, 7.100588, 7.273033, 6.704672, 6.862087, 7.225187, 7.179075, 7.385112, 7.138822, 7.222779, 7.04203, 6.935049, 6.734304, 6.845292, 6.65915, 6.735007,
   7.052398, 7.064924, 7.074539, 7.124556, 6.843348, 6.923105, 7.029212, 6.538215, 7.492824, 6.800256, 7.037295, 7.253571, 6.839829, 6.577199, 6.915088, 6.794652,
   6.354443, 6.891889, 6.62384, 6.525873, 6.698883, 6.78277, 6.592298, 6.711884, 6.471767, 6.624245, 7.064199, 6.957622, 6.395436, 6.285154, 6.595544, 6.296734,
   6.71641, 6.699635, 6.67355, 6.512712, 6.381678, 6.428205, 6.732199, 6.660132, 6.431159, 6.240238, 6.717551, 6.324714, 6.56714, 6.254955, 6.403811, 6.408112,
   6.632037, 6.534647, 6.573146, 6.097541, 6.341755, 6.275113, 5.945756, 6.583117, 6.094917, 6.243735, 6.250857, 6.210101, 6.547037, 6.379614, 6.537268, 5.927808,
   6.373031, 6.08637, 6.115581, 6.149158, 6.073773, 6.084292, 6.117471, 6.179341, 6.111731, 5.853928, 5.819461, 6.240576, 6.078719, 5.929154, 5.557886, 6.040894,
   6.116527, 5.840696, 5.796393, 6.319255, 5.414411, 5.929331, 5.784936 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1069,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1069,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1069,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1069);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->SetMinimum(-813.5776);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->SetMaximum(8195.173);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1069);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_VR_17->cd();
  
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
   
   TH1D *data_mc_ratio__70 = new TH1D("data_mc_ratio__70","",1000,0,2000);
   data_mc_ratio__70->SetBinContent(26,1.166279);
   data_mc_ratio__70->SetBinContent(27,1.133079);
   data_mc_ratio__70->SetBinContent(28,1.141662);
   data_mc_ratio__70->SetBinContent(29,1.118915);
   data_mc_ratio__70->SetBinContent(30,1.148223);
   data_mc_ratio__70->SetBinContent(61,1.347752);
   data_mc_ratio__70->SetBinContent(62,1.328477);
   data_mc_ratio__70->SetBinContent(63,1.343165);
   data_mc_ratio__70->SetBinContent(64,1.325536);
   data_mc_ratio__70->SetBinContent(65,1.343833);
   data_mc_ratio__70->SetBinContent(1000,1.329694);
   data_mc_ratio__70->SetBinContent(1001,1.4263);
   data_mc_ratio__70->SetBinError(26,0.01460819);
   data_mc_ratio__70->SetBinError(27,0.01373555);
   data_mc_ratio__70->SetBinError(28,0.01316611);
   data_mc_ratio__70->SetBinError(29,0.01259037);
   data_mc_ratio__70->SetBinError(30,0.0124689);
   data_mc_ratio__70->SetBinError(61,0.01617238);
   data_mc_ratio__70->SetBinError(62,0.01612914);
   data_mc_ratio__70->SetBinError(63,0.01626675);
   data_mc_ratio__70->SetBinError(64,0.01618072);
   data_mc_ratio__70->SetBinError(65,0.01638456);
   data_mc_ratio__70->SetBinError(1000,0.198219);
   data_mc_ratio__70->SetBinError(1001,0.01147357);
   data_mc_ratio__70->SetMinimum(0.4);
   data_mc_ratio__70->SetMaximum(1.6);
   data_mc_ratio__70->SetEntries(1992.098);
   data_mc_ratio__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__70->SetLineColor(ci);
   data_mc_ratio__70->SetLineWidth(2);
   data_mc_ratio__70->SetMarkerStyle(20);
   data_mc_ratio__70->SetMarkerSize(1.2);
   data_mc_ratio__70->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__70->GetXaxis()->SetRange(1,150);
   data_mc_ratio__70->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__70->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__70->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__70->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__70->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__70->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__70->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1070[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1070[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1070[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1070[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.009198171, 0.00878624, 0.008440892, 0.008090606, 0.008004892, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01020802, 0.01038031, 0.01028188, 0.01029264, 0.01037182,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1709376 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1070,Graph_from_mc_statistical_error_fy1070,Graph_from_mc_statistical_error_fex1070,Graph_from_mc_statistical_error_fey1070);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1070 = new TH1F("Graph_Graph_from_mc_statistical_error1070","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1070->SetMinimum(0.7948749);
   Graph_Graph_from_mc_statistical_error1070->SetMaximum(1.205125);
   Graph_Graph_from_mc_statistical_error1070->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1070->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1070);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->Modified();
   Z_mass_tagFirst_VR_17->cd();
   Z_mass_tagFirst_VR_17->SetSelected(Z_mass_tagFirst_VR_17);
}
