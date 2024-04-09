#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_16/Z_mass_tagFirst_VR_16
//=========  (Mon Apr  8 13:43:43 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-70.63145,315.7258,70570.81);
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
   st->SetMaximum(63506.67);
   
   TH1F *st_stack_123 = new TH1F("st_stack_123","",1000,0,2000);
   st_stack_123->SetMinimum(0.01);
   st_stack_123->SetMaximum(63506.67);
   st_stack_123->SetDirectory(nullptr);
   st_stack_123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_123->SetLineColor(ci);
   st_stack_123->SetLineWidth(0);
   st_stack_123->GetXaxis()->SetRange(1,150);
   st_stack_123->GetXaxis()->SetLabelFont(42);
   st_stack_123->GetXaxis()->SetTitleOffset(1);
   st_stack_123->GetXaxis()->SetTitleFont(42);
   st_stack_123->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_123->GetYaxis()->SetLabelFont(42);
   st_stack_123->GetYaxis()->SetLabelSize(0.05);
   st_stack_123->GetYaxis()->SetTitleSize(0.057);
   st_stack_123->GetYaxis()->SetTitleOffset(1.2);
   st_stack_123->GetYaxis()->SetTitleFont(42);
   st_stack_123->GetZaxis()->SetLabelFont(42);
   st_stack_123->GetZaxis()->SetTitleOffset(1);
   st_stack_123->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_123);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,22109.23);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,23653.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,24708.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,25802.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,26194.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,17705.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,17598.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,17403.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,17272.4);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,17249.23);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,101.1315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50787.59);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01470589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01986148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.04853897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01934689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,1.20524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,3.650033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,7.480926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,14.05884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,21.74737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,30.54336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,39.84102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,48.71142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,57.70056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,65.74286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,74.26444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,81.31622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,86.94536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,92.15015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,96.6728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,99.97224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,102.3028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,104.6596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,105.5117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,107.1291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,107.1932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,107.3755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,107.4066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,106.9383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,106.6491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,106.2561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,106.3027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,105.5956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,105.3255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,104.7749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,104.1742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,103.6423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,103.0996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,102.6089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,101.633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,100.9979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,99.43217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,98.68028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,98.01064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,97.13655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,96.12489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,95.21936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,94.41117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,93.60747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,92.91284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,92.58944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,92.09922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,91.71223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,90.85562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,90.41073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,90.08286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,89.38404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,89.11555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,89.11046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,88.07093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,87.55602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,86.85964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,86.58906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,86.54224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,85.72137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,85.51595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,84.9909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,84.7796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,83.92768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,83.37011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,83.12071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,82.50466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,82.02812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,81.47372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,81.00819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,80.2074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,80.22819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,79.60313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,78.67741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,78.48244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,77.74148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,77.50854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,76.91076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,76.40779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,76.17586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,75.49556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,74.57873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,74.29236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,74.20413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,73.71614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,73.1817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,72.1939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,72.30692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,71.49992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,70.74884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,70.71096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,70.05431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,69.53794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,68.92688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,68.70886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,68.09766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,67.75457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,67.08616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,67.05274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,66.30984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,66.31644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,66.12232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,65.14617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,64.68344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,64.42247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,63.94327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,63.63832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,63.31589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,63.04302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,62.31308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,62.36329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,61.70522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,61.49771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,61.18302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,60.37694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,60.17132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,59.91894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,59.92465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,59.28083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,58.94932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,59.06941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,58.19998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,58.02102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,57.62754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,57.16707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,57.33594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,57.24185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,56.91055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,56.50661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,56.16729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,55.93013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,55.69293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,55.1906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,54.88401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,54.89275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,54.22904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,54.28628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,53.84943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,53.66494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,53.57859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,52.93888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,53.10366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,53.0256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,52.31173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,52.54594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,52.13851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,51.9281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,51.62263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,51.54945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,51.23106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,51.11254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,51.04963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,50.88047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,51.1146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,50.44029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,50.21402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,49.91328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,49.55658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,49.74721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,49.19868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,49.5392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,49.30819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,48.7507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,49.156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,48.94875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,48.40677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,48.23856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,48.87919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,48.43682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,47.92995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,47.93513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,47.69892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,47.65444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,47.44894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,47.5589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,47.68464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,47.37252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,47.51173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,47.01516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,47.31149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,46.89817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,46.77878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,46.60468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,46.93285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,46.5157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,46.05417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,46.32197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,46.35322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,45.56124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,45.93216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,45.65879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,45.71118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,45.39726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,45.45784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,45.59033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,45.17253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,45.30461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,45.04032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,45.18739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,44.7792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,44.57838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,44.63589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,44.89591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,44.73189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,44.42109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,44.41436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,43.99624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,43.95964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,43.70016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,43.90087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,43.75933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,43.80372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,43.64043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,43.84549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,43.69943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,43.34737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,43.43919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,43.32806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,43.09507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,43.25251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,43.04333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,42.40029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,42.94483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,42.45826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,42.58994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,42.40484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,42.57351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,42.47792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,42.52874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,42.24343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,41.95865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,42.00098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,41.9803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,41.9358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,41.82234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,41.95799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,41.61299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,41.37123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,41.52901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,41.97542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,41.13918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,41.36029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,40.97809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,41.30926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,41.26539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,40.84853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,41.01349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,40.49561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,40.89683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,40.68137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,40.76479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,40.52608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,40.31062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,40.36747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,40.06959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,40.67686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,40.12119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,40.17795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,40.05789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,39.92359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,39.80495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,39.79157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,39.50847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,39.71451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,39.4212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,39.58064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,39.40005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,39.20706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,39.33976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,39.1538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,39.12376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,39.1533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,38.9794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,38.69655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,38.61196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,38.86003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,38.94165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,38.55506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,38.41259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,38.73247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,38.14013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,38.36043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,38.1479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,38.29513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,38.05819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,37.8932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,38.08834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,38.11701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,37.75374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,37.50755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,37.74479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,37.44368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,37.28767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,37.41766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,36.98717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,37.56864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,37.36312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,37.23961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,37.08412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.69128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,36.80098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,36.86494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,37.18651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,36.47771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,36.86392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,36.58921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,36.15827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,36.35015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,36.32477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,36.11872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,35.94759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,36.12314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,36.36315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,36.21153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,36.02751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,35.65522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.63968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,35.81423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,35.5704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,35.29691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,35.59468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,35.54393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,35.40065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,35.50535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,35.07607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,35.29174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,35.05004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,35.08401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.9775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,35.18054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.89426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,34.89767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.68271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,35.08043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,34.72336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.50406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.52039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,34.53879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,34.34007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,34.14873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.21848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,34.41944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,34.23804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.7984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.93174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,34.06862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.68318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.56972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.67342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.90156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.61868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,33.17476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,33.4471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,33.09085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.50883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,33.03914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,33.03008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,32.89876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,32.7995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,32.67244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,32.60407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.86112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.8141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.54086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.26934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.54106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.31422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.66503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.21266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.47003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.60644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,32.62428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,31.98127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,31.80691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.16069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,31.68979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,32.07552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,32.0228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.12123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,31.74134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.99901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.62879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,31.33694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.59973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.41019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.36784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.13516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.30331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,30.91376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.04416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,30.87968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.00031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,30.71453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,30.71837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,30.76258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,30.82677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,30.53399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,30.57975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.69641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.50917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,30.43984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.88309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,30.4855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.11885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,30.40304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,30.06752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,29.9774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.17086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,29.90775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,29.72037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,29.88036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,30.57269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,29.88127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,29.79781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.78664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,29.93069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,29.58263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,29.45674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.52808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,29.38962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.49553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.21414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.32483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,28.98829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.31753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,28.93057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,28.99283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,28.78057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.08222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.21187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,29.11138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,28.96329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,28.38931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,28.48724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,28.68697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,28.60526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,28.67037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.43377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,28.37361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,28.22696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.28872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,27.89718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.11066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,27.84968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.25984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.41214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,27.85372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,27.99891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,27.73106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,27.67759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,27.60592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,27.9448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,27.87125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,27.68444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,27.57119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,27.31841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.20966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,27.36118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,27.16727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.46693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.31365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.31108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,27.17143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,26.75919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,26.72787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,26.94711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,27.08928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,27.01803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,26.77899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,26.87013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,26.76373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,26.54818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,26.50953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.44952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,26.23623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,26.20226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,26.02041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,26.21575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.04044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,25.9553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,26.32257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.19973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,26.00542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.12848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,26.33574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.12557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,25.99747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,25.28955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,25.91114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,25.68171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,25.74897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,25.71015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,25.53998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.31605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,25.11014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.37394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,25.25226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,24.99678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,24.99357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,24.81706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,25.62258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,25.15908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,24.72615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,24.68173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,24.8023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.01787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,24.71147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,24.58538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,24.63479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,24.78654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,24.84271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.69622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.20701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.29915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,24.65908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,24.46365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,24.84718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.18456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.30217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,24.08476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.02642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,23.45817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,23.86699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.1218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,23.94791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,23.46412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.06161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,23.8577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.07144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,23.72088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,23.50136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,23.40852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,23.42693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,23.64106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,23.60058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,23.16337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,23.26576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,23.34866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,23.12864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,23.05568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,23.19636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,22.82342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.19374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,22.8245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.1346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,22.99691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,23.13911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,22.86355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,22.78761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,22.93555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,22.81803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,22.45463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,22.73619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,22.53705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,22.7185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,22.38524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,22.41462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,22.31953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,22.38424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,22.59367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.42511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,21.99333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,22.04628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,21.82043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,21.97368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,22.10344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.35751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,21.95838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.13906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.24791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.03082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,21.56427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,21.59178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,21.98016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,21.66127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,21.6053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,21.33706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,21.34207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,21.53303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,21.57765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,21.49191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,21.20157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,21.34618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.00248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.43945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,20.87887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.17485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.25368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,20.89926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,20.75332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,20.85698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,20.95982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,20.65294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,20.90363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,20.74872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,20.5251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.6323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,20.54046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,20.45688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,20.64986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,20.32064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,20.07892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,20.40262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,20.5159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,20.34354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,20.22719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,19.90175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,20.07253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,20.02299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,20.04483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,19.9614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,20.08192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.11997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,19.87225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,19.91437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,19.8028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.00163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,19.80094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.07529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,19.6187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,19.40965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,19.41746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,19.51593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.14833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,19.32978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.32732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,19.15699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,19.57129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,19.21583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,19.05496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.32902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,19.21169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,19.12715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,18.89314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,18.96182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.05958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,18.99489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,19.5685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,18.77991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,18.93887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.11578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,18.82666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,18.98179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,18.21488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,18.26983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.11557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,18.52415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,18.43992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,18.10952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,18.90706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,18.47176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,18.29013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,18.24637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,18.19986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,18.32383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.26137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,18.20471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.06324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,18.29274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,17.94553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,17.64012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,17.8363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,17.64501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,17.89712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,17.97441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,17.49281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,17.71036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,17.77875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,17.67279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,17.90359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,17.62319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,17.8275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,17.66958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,17.51486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,17.55441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,17.66821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,17.26202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,17.20198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,17.28546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,17.14907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,17.09473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,17.24399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,17.6242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,17.32771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,17.42885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,16.98589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,17.01684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,16.66746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,17.03881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,17.0973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,16.79842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,16.83954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.01858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,16.48629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,16.94018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,16.78953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,16.86371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,16.49424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,16.98448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,16.60573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,16.59793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,16.89667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,16.8615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,16.7798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,16.38052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,16.42621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,16.44113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,16.57436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,16.32208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,15.86857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,16.28182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,16.08191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.05228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,16.18222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.36277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,16.13364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,16.04632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,15.98972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,15.75995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,15.61779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,16.02124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,15.57721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,15.76656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,15.73557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,15.4827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,15.76791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,15.47124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.42434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,15.63242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,15.62926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,15.60763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,15.65954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,15.64576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,15.33147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,15.1692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,15.45125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,15.20905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,15.35586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,15.3559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,15.17996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.12932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,15.21866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.14525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,15.28199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.0896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,14.82139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.26041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.05586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,14.89628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,14.85779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,15.22419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.35017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.15667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,15.1128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,14.99183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,14.90261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,14.66503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,14.98763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,14.30598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,14.7764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,14.60211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,14.40446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,14.33635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,14.41129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,14.60991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,14.88657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,14.57502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,14.72185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,14.3746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,14.56196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,14.63374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,14.52792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,14.46687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,14.29822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,14.09575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,13.78811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,13.87117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,14.28291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,14.11548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,14.0742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,13.83155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,13.89588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,14.23385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,14.07453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,13.86159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.01163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,14.05188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.27379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.22956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,13.87121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.10022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,13.63558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,13.5766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,13.60907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,13.62758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,13.80964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,13.21333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,13.88363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,13.57632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,13.23675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,13.35033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,13.30588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,13.444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,13.23236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,13.26013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,12.85572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,12.65881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,12.82176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,13.47134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,13.00494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,13.27657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,13.37765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,13.22521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,12.98149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,12.89665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,13.26201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.19176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,13.17232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,12.90138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,12.89699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,12.75328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.01684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,12.59465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,12.91659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,12.72108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,12.96408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,12.91914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,12.62672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,12.85717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,12.93256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,12.60235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,12.89234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,12.34432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,12.7339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,12.87533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,12.56709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,12.3592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,12.49304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,12.33971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,12.21823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,12.33037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,12.22259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,12.58304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,12.15442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,12.06845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,12.35324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.30511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.31592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,12.07307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,12.27433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,12.18379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,11.92513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.00113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.32617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,11.94676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,11.89854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,11.93093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,11.72793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,11.78704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,11.88401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.12984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,11.90422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,11.67453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.95318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,11.782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,11.86058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,11.71448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,11.62745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,11.51299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,11.73019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,11.63491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,11.52092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,11.62725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,11.57132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,11.61141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,11.2411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,11.49907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,11.14617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,11.60742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,11.35572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,11.26487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,11.69144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,11.18943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,11.26913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,11.5153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.16447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,11.33586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,11.26673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.25978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,11.49156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,11.14603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.97665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,10.97556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,11.10199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,10.71502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.18398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.13234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.97109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.23029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.13669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,10.73888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,10.97423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,10.94259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,10.52452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,10.81092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,11.12207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,10.90284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,10.91834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,10.85797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,10.67858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,10.66581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,10.74075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,10.67061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,10.84548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,10.81314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,10.56597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,10.53872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,10.29015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,10.60905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,10.12838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,10.30763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,10.56818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,10.67113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,10.17427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,10.04065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,10.73292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,10.37091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,10.37972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.998352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.12184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,10.13641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,10.56103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.984171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,10.21414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.99378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,10.02073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,10.41666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.0783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.47809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,10.27005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.9339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,10.106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.34011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.83628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,10.0325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.10017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,10.13813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,9.649524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,9.66638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.842853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,10.09234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,9.65007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,9.87389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,9.572213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,9.562327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,9.791176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,9.657208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,9.609649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,9.288467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,9.263295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,9.340706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,9.563871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,9.516469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,9.477834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,9.724783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,9.406228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.882936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,9.738594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,9.46621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,9.485305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,9.720671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,9.366044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,9.271891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,9.440389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,9.250803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,9.697002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,9.521203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.752412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,9.222987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.519385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.884332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,9.222899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,9.514095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,8.750748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,9.363055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,9.243328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.582469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,9.524511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,9.131847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,149.8707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(7158811);

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
   
   TH1D *VH_tagFirst_Z_mass__245 = new TH1D("VH_tagFirst_Z_mass__245","",1000,0,2000);
   VH_tagFirst_Z_mass__245->SetBinContent(26,25405);
   VH_tagFirst_Z_mass__245->SetBinContent(27,26678);
   VH_tagFirst_Z_mass__245->SetBinContent(28,27983);
   VH_tagFirst_Z_mass__245->SetBinContent(29,28262);
   VH_tagFirst_Z_mass__245->SetBinContent(30,28578);
   VH_tagFirst_Z_mass__245->SetBinContent(61,18705);
   VH_tagFirst_Z_mass__245->SetBinContent(62,18262);
   VH_tagFirst_Z_mass__245->SetBinContent(63,18265);
   VH_tagFirst_Z_mass__245->SetBinContent(64,18048);
   VH_tagFirst_Z_mass__245->SetBinContent(65,17634);
   VH_tagFirst_Z_mass__245->SetBinContent(1000,71);
   VH_tagFirst_Z_mass__245->SetBinContent(1001,44449);
   VH_tagFirst_Z_mass__245->SetEntries(3591155);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__245->SetLineColor(ci);
   VH_tagFirst_Z_mass__245->SetLineWidth(2);
   VH_tagFirst_Z_mass__245->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__245->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__245->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__245->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__245->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__245->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__245->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__245->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__245->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__245->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__245->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__245->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1245[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1245[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 22109.23, 23653.14, 24708.63, 25802.92, 26194.12, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17705.79, 17598.18, 17403.3, 17272.4, 17249.23,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 101.1315 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1245[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1245[1000] = { 0, 0, 0, 0, 0, 0, 0.01470589, 0.01986148, 0.04853897, 0.01934689, 0, 1.20524, 3.650033, 7.480926, 14.05884, 21.74737, 30.54336,
   39.84102, 48.71142, 57.70056, 65.74286, 74.26444, 81.31622, 86.94536, 92.15015, 96.6728, 99.97224, 102.3028, 104.6596, 105.5117, 107.1291, 107.1932, 107.3755,
   107.4066, 106.9383, 106.6491, 106.2561, 106.3027, 105.5956, 105.3255, 104.7749, 104.1742, 103.6423, 103.0996, 102.6089, 101.633, 100.9979, 99.43217, 98.68028,
   98.01064, 97.13655, 96.12489, 95.21936, 94.41117, 93.60747, 92.91284, 92.58944, 92.09922, 91.71223, 90.85562, 90.41073, 90.08286, 89.38404, 89.11555, 89.11046,
   88.07093, 87.55602, 86.85964, 86.58906, 86.54224, 85.72137, 85.51595, 84.9909, 84.7796, 83.92768, 83.37011, 83.12071, 82.50466, 82.02812, 81.47372, 81.00819,
   80.2074, 80.22819, 79.60313, 78.67741, 78.48244, 77.74148, 77.50854, 76.91076, 76.40779, 76.17586, 75.49556, 74.57873, 74.29236, 74.20413, 73.71614, 73.1817,
   72.1939, 72.30692, 71.49992, 70.74884, 70.71096, 70.05431, 69.53794, 68.92688, 68.70886, 68.09766, 67.75457, 67.08616, 67.05274, 66.30984, 66.31644, 66.12232,
   65.14617, 64.68344, 64.42247, 63.94327, 63.63832, 63.31589, 63.04302, 62.31308, 62.36329, 61.70522, 61.49771, 61.18302, 60.37694, 60.17132, 59.91894, 59.92465,
   59.28083, 58.94932, 59.06941, 58.19998, 58.02102, 57.62754, 57.16707, 57.33594, 57.24185, 56.91055, 56.50661, 56.16729, 55.93013, 55.69293, 55.1906, 54.88401,
   54.89275, 54.22904, 54.28628, 53.84943, 53.66494, 53.57859, 52.93888, 53.10366, 53.0256, 52.31173, 52.54594, 52.13851, 51.9281, 51.62263, 51.54945, 51.23106,
   51.11254, 51.04963, 50.88047, 51.1146, 50.44029, 50.21402, 49.91328, 49.55658, 49.74721, 49.19868, 49.5392, 49.30819, 48.7507, 49.156, 48.94875, 48.40677,
   48.23856, 48.87919, 48.43682, 47.92995, 47.93513, 47.69892, 47.65444, 47.44894, 47.5589, 47.68464, 47.37252, 47.51173, 47.01516, 47.31149, 46.89817, 46.77878,
   46.60468, 46.93285, 46.5157, 46.05417, 46.32197, 46.35322, 45.56124, 45.93216, 45.65879, 45.71118, 45.39726, 45.45784, 45.59033, 45.17253, 45.30461, 45.04032,
   45.18739, 44.7792, 44.57838, 44.63589, 44.89591, 44.73189, 44.42109, 44.41436, 43.99624, 43.95964, 43.70016, 43.90087, 43.75933, 43.80372, 43.64043, 43.84549,
   43.69943, 43.34737, 43.43919, 43.32806, 43.09507, 43.25251, 43.04333, 42.40029, 42.94483, 42.45826, 42.58994, 42.40484, 42.57351, 42.47792, 42.52874, 42.24343,
   41.95865, 42.00098, 41.9803, 41.9358, 41.82234, 41.95799, 41.61299, 41.37123, 41.52901, 41.97542, 41.13918, 41.36029, 40.97809, 41.30926, 41.26539, 40.84853,
   41.01349, 40.49561, 40.89683, 40.68137, 40.76479, 40.52608, 40.31062, 40.36747, 40.06959, 40.67686, 40.12119, 40.17795, 40.05789, 39.92359, 39.80495, 39.79157,
   39.50847, 39.71451, 39.4212, 39.58064, 39.40005, 39.20706, 39.33976, 39.1538, 39.12376, 39.1533, 38.9794, 38.69655, 38.61196, 38.86003, 38.94165, 38.55506,
   38.41259, 38.73247, 38.14013, 38.36043, 38.1479, 38.29513, 38.05819, 37.8932, 38.08834, 38.11701, 37.75374, 37.50755, 37.74479, 37.44368, 37.28767, 37.41766,
   36.98717, 37.56864, 37.36312, 37.23961, 37.08412, 36.69128, 36.80098, 36.86494, 37.18651, 36.47771, 36.86392, 36.58921, 36.15827, 36.35015, 36.32477, 36.11872,
   35.94759, 36.12314, 36.36315, 36.21153, 36.02751, 35.65522, 35.63968, 35.81423, 35.5704, 35.29691, 35.59468, 35.54393, 35.40065, 35.50535, 35.07607, 35.29174,
   35.05004, 35.08401, 34.9775, 35.18054, 34.89426, 34.89767, 34.68271, 35.08043, 34.72336, 34.50406, 34.52039, 34.53879, 34.34007, 34.14873, 34.21848, 34.41944,
   34.23804, 33.7984, 33.93174, 34.06862, 33.68318, 33.56972, 33.67342, 33.90156, 33.61868, 33.17476, 33.4471, 33.09085, 33.50883, 33.03914, 33.03008, 32.89876,
   32.7995, 32.67244, 32.60407, 32.86112, 32.8141, 32.54086, 32.26934, 32.54106, 32.31422, 32.66503, 32.21266, 32.47003, 32.60644, 32.62428, 31.98127, 31.80691,
   32.16069, 31.68979, 32.07552, 32.0228, 32.12123, 31.74134, 31.99901, 31.62879, 31.33694, 31.59973, 31.41019, 31.36784, 31.13516, 31.30331, 30.91376, 31.04416,
   30.87968, 31.00031, 30.71453, 30.71837, 30.76258, 30.82677, 30.53399, 30.57975, 30.69641, 30.50917, 30.43984, 30.88309, 30.4855, 30.11885, 30.40304, 30.06752,
   29.9774, 30.17086, 29.90775, 29.72037, 29.88036, 30.57269, 29.88127, 29.79781, 29.78664, 29.93069, 29.58263, 29.45674, 29.52808, 29.38962, 29.49553, 29.21414,
   29.32483, 28.98829, 29.31753, 28.93057, 28.99283, 28.78057, 29.08222, 29.21187, 29.11138, 28.96329, 28.38931, 28.48724, 28.68697, 28.60526, 28.67037, 28.43377,
   28.37361, 28.22696, 28.28872, 27.89718, 28.11066, 27.84968, 28.25984, 28.41214, 27.85372, 27.99891, 27.73106, 27.67759, 27.60592, 27.9448, 27.87125, 27.68444,
   27.57119, 27.31841, 27.20966, 27.36118, 27.16727, 27.46693, 27.31365, 27.31108, 27.17143, 26.75919, 26.72787, 26.94711, 27.08928, 27.01803, 26.77899, 26.87013,
   26.76373, 26.54818, 26.50953, 26.44952, 26.23623, 26.20226, 26.02041, 26.21575, 26.04044, 25.9553, 26.32257, 26.19973, 26.00542, 26.12848, 26.33574, 26.12557,
   25.99747, 25.28955, 25.91114, 25.68171, 25.74897, 25.71015, 25.53998, 25.31605, 25.11014, 25.37394, 25.25226, 24.99678, 24.99357, 24.81706, 25.62258, 25.15908,
   24.72615, 24.68173, 24.8023, 25.01787, 24.71147, 24.58538, 24.63479, 24.78654, 24.84271, 24.69622, 24.20701, 24.29915, 24.65908, 24.46365, 24.84718, 24.18456,
   24.30217, 24.08476, 24.02642, 23.45817, 23.86699, 24.1218, 23.94791, 23.46412, 24.06161, 23.8577, 24.07144, 23.72088, 23.50136, 23.40852, 23.42693, 23.64106,
   23.60058, 23.16337, 23.26576, 23.34866, 23.12864, 23.05568, 23.19636, 22.82342, 23.19374, 22.8245, 23.1346, 22.99691, 23.13911, 22.86355, 22.78761, 22.93555,
   22.81803, 22.45463, 22.73619, 22.53705, 22.7185, 22.38524, 22.41462, 22.31953, 22.38424, 22.59367, 22.42511, 21.99333, 22.04628, 21.82043, 21.97368, 22.10344,
   22.35751, 21.95838, 22.13906, 22.24791, 22.03082, 21.56427, 21.59178, 21.98016, 21.66127, 21.6053, 21.33706, 21.34207, 21.53303, 21.57765, 21.49191, 21.20157,
   21.34618, 21.00248, 21.43945, 20.87887, 21.17485, 21.25368, 20.89926, 20.75332, 20.85698, 20.95982, 20.65294, 20.90363, 20.74872, 20.5251, 20.6323, 20.54046,
   20.45688, 20.64986, 20.32064, 20.07892, 20.40262, 20.5159, 20.34354, 20.22719, 19.90175, 20.07253, 20.02299, 20.04483, 19.9614, 20.08192, 20.11997, 19.87225,
   19.91437, 19.8028, 20.00163, 19.80094, 20.07529, 19.6187, 19.40965, 19.41746, 19.51593, 19.14833, 19.32978, 19.32732, 19.15699, 19.57129, 19.21583, 19.05496,
   19.32902, 19.21169, 19.12715, 18.89314, 18.96182, 19.05958, 18.99489, 19.5685, 18.77991, 18.93887, 19.11578, 18.82666, 18.98179, 18.21488, 18.26983, 19.11557,
   18.52415, 18.43992, 18.10952, 18.90706, 18.47176, 18.29013, 18.24637, 18.19986, 18.32383, 18.26137, 18.20471, 18.06324, 18.29274, 17.94553, 17.64012, 17.8363,
   17.64501, 17.89712, 17.97441, 17.49281, 17.71036, 17.77875, 17.67279, 17.90359, 17.62319, 17.8275, 17.66958, 17.51486, 17.55441, 17.66821, 17.26202, 17.20198,
   17.28546, 17.14907, 17.09473, 17.24399, 17.6242, 17.32771, 17.42885, 16.98589, 17.01684, 16.66746, 17.03881, 17.0973, 16.79842, 16.83954, 17.01858, 16.48629,
   16.94018, 16.78953, 16.86371, 16.49424, 16.98448, 16.60573, 16.59793, 16.89667, 16.8615, 16.7798, 16.38052, 16.42621, 16.44113, 16.57436, 16.32208, 15.86857,
   16.28182, 16.08191, 16.05228, 16.18222, 16.36277, 16.13364, 16.04632, 15.98972, 15.75995, 15.61779, 16.02124, 15.57721, 15.76656, 15.73557, 15.4827, 15.76791,
   15.47124, 16.42434, 15.63242, 15.62926, 15.60763, 15.65954, 15.64576, 15.33147, 15.1692, 15.45125, 15.20905, 15.35586, 15.3559, 15.17996, 15.12932, 15.21866,
   15.14525, 15.28199, 15.0896, 14.82139, 15.26041, 15.05586, 14.89628, 14.85779, 15.22419, 15.35017, 15.15667, 15.1128, 14.99183, 14.90261, 14.66503, 14.98763,
   14.30598, 14.7764, 14.60211, 14.40446, 14.33635, 14.41129, 14.60991, 14.88657, 14.57502, 14.72185, 14.3746, 14.56196, 14.63374, 14.52792, 14.46687, 14.29822,
   14.09575, 13.78811, 13.87117, 14.28291, 14.11548, 14.0742, 13.83155, 13.89588, 14.23385, 14.07453, 13.86159, 14.01163, 14.05188, 14.27379, 14.22956, 13.87121,
   14.10022, 13.63558, 13.5766, 13.60907, 13.62758, 13.80964, 13.21333, 13.88363, 13.57632, 13.23675, 13.35033, 13.30588, 13.444, 13.23236, 13.26013, 12.85572,
   12.65881, 12.82176, 13.47134, 13.00494, 13.27657, 13.37765, 13.22521, 12.98149, 12.89665, 13.26201, 13.19176, 13.17232, 12.90138, 12.89699, 12.75328, 13.01684,
   12.59465, 12.91659, 12.72108, 12.96408, 12.91914, 12.62672, 12.85717, 12.93256, 12.60235, 12.89234, 12.34432, 12.7339, 12.87533, 12.56709, 12.3592, 12.49304,
   12.33971, 12.21823, 12.33037, 12.22259, 12.58304, 12.15442, 12.06845, 12.35324, 12.30511, 12.31592, 12.07307, 12.27433, 12.18379, 11.92513, 12.00113, 12.32617,
   11.94676, 11.89854, 11.93093, 11.72793, 11.78704, 11.88401, 12.12984, 11.90422, 11.67453, 11.95318, 11.782, 11.86058, 11.71448, 11.62745, 11.51299, 11.73019,
   11.63491, 11.52092, 11.62725, 11.57132, 11.61141, 11.2411, 11.49907, 11.14617, 11.60742, 11.35572, 11.26487, 11.69144, 11.18943, 11.26913, 11.5153, 11.16447,
   11.33586, 11.26673, 11.25978, 11.49156, 11.14603, 10.97665, 10.97556, 11.10199, 10.71502, 11.18398, 11.13234, 10.97109, 11.23029, 11.13669, 10.73888, 10.97423,
   10.94259, 10.52452, 10.81092, 11.12207, 10.90284, 10.91834, 10.85797, 10.67858, 10.66581, 10.74075, 10.67061, 10.84548, 10.81314, 10.56597, 10.53872, 10.29015,
   10.60905, 10.12838, 10.30763, 10.56818, 10.67113, 10.17427, 10.04065, 10.73292, 10.37091, 10.37972, 9.998352, 10.12184, 10.13641, 10.56103, 9.984171, 10.21414,
   9.99378, 10.02073, 10.41666, 10.0783, 10.47809, 10.27005, 9.9339, 10.106, 10.34011, 9.83628, 10.0325, 10.10017, 10.13813, 9.649524, 9.66638, 9.842853,
   10.09234, 9.65007, 9.87389, 9.572213, 9.562327, 9.791176, 9.657208, 9.609649, 9.288467, 9.263295, 9.340706, 9.563871, 9.516469, 9.477834, 9.724783, 9.406228,
   9.882936, 9.738594, 9.46621, 9.485305, 9.720671, 9.366044, 9.271891, 9.440389, 9.250803, 9.697002, 9.521203, 8.752412, 9.222987, 9.519385, 8.884332, 9.222899,
   9.514095, 8.750748, 9.363055, 9.243328, 9.582469, 9.524511, 9.131847 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1245,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1245,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1245,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1245);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->SetMinimum(-2748.111);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->SetMaximum(28940.34);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1245);
   
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
   
   TH1D *data_mc_ratio__246 = new TH1D("data_mc_ratio__246","",1000,0,2000);
   data_mc_ratio__246->SetBinContent(26,1.149067);
   data_mc_ratio__246->SetBinContent(27,1.127884);
   data_mc_ratio__246->SetBinContent(28,1.132519);
   data_mc_ratio__246->SetBinContent(29,1.095302);
   data_mc_ratio__246->SetBinContent(30,1.091008);
   data_mc_ratio__246->SetBinContent(61,1.056434);
   data_mc_ratio__246->SetBinContent(62,1.037721);
   data_mc_ratio__246->SetBinContent(63,1.049514);
   data_mc_ratio__246->SetBinContent(64,1.044904);
   data_mc_ratio__246->SetBinContent(65,1.022306);
   data_mc_ratio__246->SetBinContent(1000,0.7020562);
   data_mc_ratio__246->SetBinContent(1001,0.8751941);
   data_mc_ratio__246->SetBinError(26,0.007209181);
   data_mc_ratio__246->SetBinError(27,0.006905383);
   data_mc_ratio__246->SetBinError(28,0.006770154);
   data_mc_ratio__246->SetBinError(29,0.006515273);
   data_mc_ratio__246->SetBinError(30,0.006453749);
   data_mc_ratio__246->SetBinError(61,0.007724379);
   data_mc_ratio__246->SetBinError(62,0.007679031);
   data_mc_ratio__246->SetBinError(63,0.007765659);
   data_mc_ratio__246->SetBinError(64,0.00777789);
   data_mc_ratio__246->SetBinError(65,0.007698492);
   data_mc_ratio__246->SetBinError(1000,0.08331875);
   data_mc_ratio__246->SetBinError(1001,0.004889014);
   data_mc_ratio__246->SetMinimum(0.4);
   data_mc_ratio__246->SetMaximum(1.6);
   data_mc_ratio__246->SetEntries(11280.68);
   data_mc_ratio__246->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__246->SetLineColor(ci);
   data_mc_ratio__246->SetLineWidth(2);
   data_mc_ratio__246->SetMarkerStyle(20);
   data_mc_ratio__246->SetMarkerSize(1.2);
   data_mc_ratio__246->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__246->GetXaxis()->SetRange(1,150);
   data_mc_ratio__246->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__246->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__246->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__246->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__246->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__246->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__246->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__246->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__246->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__246->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__246->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__246->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__246->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__246->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__246->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__246->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1246[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1246[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1246[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1246[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.004372508, 0.004226594, 0.004140366, 0.004056117, 0.00402807, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005106281, 0.005118874, 0.005136041, 0.005159418, 0.005166054,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09029676 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1246,Graph_from_mc_statistical_error_fy1246,Graph_from_mc_statistical_error_fex1246,Graph_from_mc_statistical_error_fey1246);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1246 = new TH1F("Graph_Graph_from_mc_statistical_error1246","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1246->SetMinimum(0.8916439);
   Graph_Graph_from_mc_statistical_error1246->SetMaximum(1.108356);
   Graph_Graph_from_mc_statistical_error1246->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1246->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1246->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1246->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1246->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1246->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1246->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1246->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1246);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->SetSelected(Z_mass_tagFirst_VR_16);
}
