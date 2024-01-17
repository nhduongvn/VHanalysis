#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_17/H_mass_tagFirst_VR_17
//=========  (Mon Jan  8 11:15:50 2024) by ROOT version 6.28/10
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
   
   TH1F *st_stack_39 = new TH1F("st_stack_39","",1000,0,2000);
   st_stack_39->SetMinimum(0.01);
   st_stack_39->SetMaximum(14833.33);
   st_stack_39->SetDirectory(nullptr);
   st_stack_39->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_39->SetLineColor(ci);
   st_stack_39->SetLineWidth(0);
   st_stack_39->GetXaxis()->SetRange(1,150);
   st_stack_39->GetXaxis()->SetLabelFont(42);
   st_stack_39->GetXaxis()->SetTitleOffset(1);
   st_stack_39->GetXaxis()->SetTitleFont(42);
   st_stack_39->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_39->GetYaxis()->SetLabelFont(42);
   st_stack_39->GetYaxis()->SetLabelSize(0.05);
   st_stack_39->GetYaxis()->SetTitleSize(0.057);
   st_stack_39->GetYaxis()->SetTitleOffset(1.2);
   st_stack_39->GetYaxis()->SetTitleFont(42);
   st_stack_39->GetZaxis()->SetLabelFont(42);
   st_stack_39->GetZaxis()->SetTitleOffset(1);
   st_stack_39->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_39);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,3271.669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,6530.762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,6492.598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,6419.74);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,6265.351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,3193.607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2503.625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,5228.426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,5198.936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,5082.276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,5114.368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,2534.85);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,22.98495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,8321.419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.839941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.422668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,9.311468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,13.50683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,18.56731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,23.66628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,28.45802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,33.55336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,38.04523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,41.82917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,45.17754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,48.31184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,50.27303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,52.30635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,53.41818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,54.83759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,55.93273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,56.03184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,56.1559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,56.29639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,56.20946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,56.00498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,55.69855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,55.67153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,55.39721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,55.0447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,54.9284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,54.55046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,54.51252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,54.25314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,53.14108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,53.21535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,53.21889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,53.06316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,52.76459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,52.12626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,52.1461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,51.9057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,51.47453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,51.45991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,51.50558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,51.25483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,51.4014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,50.96043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,50.9272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,50.54167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,50.42058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,50.64761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,50.48582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,49.87112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,49.91636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,49.95778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,49.92577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,49.85603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,49.45454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,49.367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,49.25066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,49.19717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,48.67254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,48.77098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,48.67061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,48.13829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,47.96019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,48.27679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,48.02877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,48.03269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,47.16339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,47.6178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,47.48332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,46.94756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,47.09555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,46.73877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,46.37723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,46.65419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,46.52906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,45.63112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,45.99649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,45.60432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,45.95763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,45.55068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,45.14214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,45.09837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,44.93334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,44.53182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,44.87471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,44.36468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,44.4959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,44.33923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,44.22243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,43.77359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,43.83156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,43.57334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,43.52368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,43.6208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,43.65097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,43.43283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,43.13519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,43.1657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,42.75197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,42.69034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,42.6661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,42.70575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,42.64405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,42.30531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,42.80473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,42.76517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,42.3342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,42.01311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,41.65344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,41.6918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,42.26528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,41.72112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,41.79768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,41.23138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,41.44068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,41.2291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,41.70984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,41.61504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,40.93611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,40.76115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,40.56689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,40.65488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,40.57153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,40.68725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,41.16747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,40.49497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,40.78882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,40.65488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,40.78652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,40.13106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,39.86303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,40.07948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,40.09355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,40.18024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,39.83944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,39.66912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,39.57419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,39.72361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,39.74727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,39.7591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,39.37407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,39.43135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,39.31193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,39.14412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,38.98524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,39.09123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,39.29039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,39.32628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,38.55349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.93697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.95387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.7457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,38.63877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,38.27441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,38.13904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,38.28424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,38.18832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,38.45824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.96853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,38.23508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.73749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.67015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,37.53009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,37.45987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,37.4448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,37.31902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,37.11688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,37.11688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.80138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,36.97219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,37.26354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.83458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,37.12955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,37.41465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,37.05857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,36.28931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.72464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,36.42382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,36.64004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,36.44446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,36.41349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.63823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.98485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,36.17252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.7594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,35.28553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,35.5484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,35.51134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,35.25087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,35.4822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,35.50075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,35.17075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,35.45569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.91582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.95619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,35.03144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,34.43307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,34.40302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,34.59927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,34.58839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,34.43581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,34.16714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.84636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,34.07895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,34.21664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.69041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.78797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,33.47761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.80188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,33.53093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,33.19552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,33.20685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,33.37915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,33.43263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,33.31993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,33.2493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,33.22667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,32.42162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.65284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.66148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.83664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,32.41002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,32.31995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,32.14197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,32.22087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,32.02179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.96889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,32.03941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.80965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,31.53351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,32.0834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,31.5365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,31.4499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,31.09507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,31.52755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,31.06784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,31.00118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,31.22183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,31.20978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,31.11623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,30.49964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.82474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.71165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.65035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,29.996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,30.0148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,30.09615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,30.10865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,30.06802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,30.23332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.86403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.73465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.96777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.69034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,29.2532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,29.47099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.85774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,29.28533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,29.10172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,29.2146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,28.9527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,29.09203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,29.10172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,29.03378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.51414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.75716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.54051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,28.3554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,28.26239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,28.45472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,27.95796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,28.21577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,28.16239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,28.22576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.7249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,27.93104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.77912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,27.22864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,27.35613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.50013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,27.28729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,27.1387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,26.93697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,27.201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,26.62799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,27.03455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,26.37249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.58204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,26.91602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.51474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,26.3261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,25.98091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,26.32252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,26.00262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,26.1936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,26.00624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,26.42948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,25.90116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,25.85392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.93019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,25.35813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.92294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,25.39149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,25.43219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,25.38037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,25.5171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,25.23546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,25.02215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,25.20936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,25.10095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,24.41728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.97324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,24.85624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,24.68159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,24.41728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,24.20842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,24.60527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,24.48267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,24.24723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.98206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,23.4908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,23.73374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.74166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,23.86019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,23.84048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.91137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.9271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,23.55875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,23.24127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,23.5108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,23.1399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,23.4106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,23.44672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,23.30592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,23.16021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.96858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.91119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.9194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,22.49282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,22.66358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,23.0544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,22.33759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,22.3081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,22.35442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,22.23209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,22.43002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,22.1728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,22.15583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,21.8653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,22.53459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,21.55342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.97256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,21.84379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,21.57958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,21.53596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.83087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,22.36704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,21.56214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.96959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,21.06356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,21.46598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,21.09478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,21.00544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.99648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,21.05909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.88871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.83913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.94267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.92919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,20.5483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.92919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,20.44277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,20.26257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,20.41054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,20.23935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.94449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,20.05733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,20.10884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,20.27649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,20.07139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,20.23006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.79778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,19.831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.79303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,19.74546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,19.52034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,19.61166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,19.30721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.75023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.88369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,19.46728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,19.17525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,19.19976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,19.05225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.93839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.9632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,19.09662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,18.56224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,18.47592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,18.29691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.93839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,18.47083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,18.47083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,18.54197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,18.57237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,18.63808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,18.30718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,18.24029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,18.03288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.98066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.35336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,18.34311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.73845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,18.10574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,18.25575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,18.15761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,17.65875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.74905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,17.57334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,17.70661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.79667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.56799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,17.20561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,17.17279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.43905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,17.33086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,17.27107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.34713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,17.01324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,17.21654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,17.10145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.8912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,16.65573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.33086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,17.07393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,17.01877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,16.40543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,16.49689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,16.60484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,16.17452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.94123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.61616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.80748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,16.36525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,16.08122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,16.22096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.43406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,16.371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,16.13959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.88708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.83965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,15.53997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.7085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,16.08122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,15.32057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,15.41847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.79804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.7384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,15.36348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,15.43066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.36348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.97918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,15.30829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.33284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,15.15394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.28985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,15.15394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,15.12288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,15.10421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.35123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.92257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,15.00427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,15.06057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.75781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,15.21587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,14.35731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,15.17254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.50069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,14.59764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.76418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,14.35731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,14.38348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.80235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.50069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.69395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.41614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.58475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.42918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.97898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,14.21909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.2719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.35731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.96552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.88448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.73467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,14.22571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.71411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.74151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.59012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.93181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.68666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.66603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.63158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.68666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.70039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,13.3739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.61087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.67978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.38795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,13.47198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,13.31046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,13.20406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.61778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.59012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,13.08243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,13.18268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,13.12549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,13.16126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,13.06085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.74749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.95965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,13.19694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,13.21118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.55422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.7696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.53923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.53923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.71794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.71055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.59908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,12.00279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.6735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.63635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.3427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.37314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.39592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.41108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.97141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.45646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.3427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.39592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,12.02627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.6852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.38833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.41866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.99495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.66909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.33508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,11.49861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.62873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,12.20479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.89259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,12.14299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.94782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.66103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,11.26729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,11.47405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.51496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.9084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,12.01845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.70128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.91629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.62873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,11.49043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,11.18352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.51496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,11.13295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.3918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.85063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.9025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.73338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.85929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.95413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,11.16669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,11.09064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.95413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,11.07367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,10.97129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.8766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.78107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.88524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.81591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.58744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.72861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.64943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.97986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.56076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.70228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,10.39019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.72861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.6406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.47133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,10.06844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,11.0226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.65826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.44436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.984025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.40828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.48031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,10.30842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,10.01224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.9025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.29929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,10.09642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,10.01224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,10.14288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,10.23518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,10.13361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,10.14288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.30842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.803432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.832167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.832167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.965169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,10.07777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,10.00284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,10.02163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.648733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,10.13361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.68764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.638982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.648733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.401922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.832167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.481601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.668206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.580267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.381896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.755352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.822598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.599879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.43188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,9.117564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,9.199706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.845337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,9.148454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.60967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.230321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,9.024261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,9.148454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.461744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,9.107245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.471677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.17924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.260835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,9.003396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.929983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.866574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,9.024261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.908897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,9.209923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.608269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.898335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,9.209923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.321562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.531457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.866574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.802708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,9.013834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.542472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.520427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.695223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.866574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.706031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.319393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.640979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.792019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.940507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.619186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.813385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.56446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.531457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.531457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.476165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.476165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.205579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.386939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.364484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.274055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.251293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.531457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.651855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.854248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.171126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.262682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.239888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.640979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,8.124961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,8.101779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,8.055217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,8.020118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,8.090164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.171126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.757874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,8.078532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.769986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.92576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.878158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.961276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.996633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.973079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.684799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.794154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.573866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.709234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.842266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.901995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.548993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.672553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.586272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.586272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.436034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.901995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.769986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.635695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.461284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.573866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.830266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.598658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.511529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.397998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.282697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.359765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.423377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.165542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.498999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.623369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.230863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.623369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.321333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,7.03308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.611024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.282697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,7.086362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.870757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.938853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.295598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.56144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,7.139246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.295598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.269773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.423377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.321333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,7.126062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.536526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,7.019697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,7.046439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.898076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.829573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,7.126062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.760376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.760376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.486448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,7.126062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.760376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.911695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.898076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.534023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.760376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.760376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.417853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.490703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.81579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,7.03308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.314452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.117785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.81579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.329327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.857056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,7.152406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.562744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.490703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.690463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.577057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.870757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.38848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.704504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.476198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.519615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.461661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.59134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.209328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.577057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.866691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.194165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.519615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.476198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.163727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.209328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.163727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,6.055988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.38848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.254598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.72061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.432489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.72061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.704148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.284596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.67108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,6.055988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.78599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.866691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.577057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.930462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,6.071496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,5.930462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.148451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.209328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.962091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.962091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,6.04044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.993554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.946297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,6.055988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.447092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.72061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.148451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.962091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.818405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.962091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.866691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.977843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.687638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.67108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.704148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.604359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.148451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.687638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.687638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.914584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.78599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.78599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.364304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.329128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.485645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.72061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.637818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.753393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.78599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.570699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.654473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.094567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.654473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.364304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.485645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,6.009223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.293718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.72061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.131351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.433974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.364304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.866691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.186038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,5.001422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.944694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.167874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.311453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,5.001422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.131351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,5.057515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.587554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.275924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.222178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.076075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.240155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.770461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.240155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,5.076075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.222178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.730872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.131351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.094567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.131351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.381806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.222178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.149645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.149645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,5.020189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,5.001422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.20414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.829237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.809725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.502761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.790134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.730872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.569085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,5.057515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.887306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,5.076075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.868027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.630417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.610064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.925639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.186038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.944694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.770461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,5.001422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.730872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,5.001422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,5.057515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.610064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.750708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.90651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.401354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.091313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.770461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.690948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.630417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.336783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.527735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.925639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.226973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.790134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,5.020189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.293196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.670858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.569085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.974727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.548457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.569085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.204667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.887306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.630417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.630417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.58962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.486003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.527735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.690948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,4.045082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.249162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.422668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.045082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.336783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.379936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.271236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.569085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.182242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.548457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.358413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,4.045082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.401354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.422668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.204667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.422668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.114234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.226973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.091313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.293196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.670858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.182242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.974727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.78072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.379936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.927124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.78072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.137027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.293196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.293196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.137027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.182242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.44388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,4.021767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.974727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.114234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.159696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,4.021767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.830143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.271236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.854617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.974727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.628413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.705349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.998316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.903105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.182242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.654238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.78072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.654238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.204667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.830143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.654238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.654238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.137027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.903105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.78072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.755764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.249162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,60.07345);
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
   
   TH1D *VH_tagFirst_H_mass__77 = new TH1D("VH_tagFirst_H_mass__77","",1000,0,2000);
   VH_tagFirst_H_mass__77->SetBinContent(43,3356);
   VH_tagFirst_H_mass__77->SetBinContent(44,6675);
   VH_tagFirst_H_mass__77->SetBinContent(45,6502);
   VH_tagFirst_H_mass__77->SetBinContent(46,6537);
   VH_tagFirst_H_mass__77->SetBinContent(47,6234);
   VH_tagFirst_H_mass__77->SetBinContent(48,3242);
   VH_tagFirst_H_mass__77->SetBinContent(78,2542);
   VH_tagFirst_H_mass__77->SetBinContent(79,5315);
   VH_tagFirst_H_mass__77->SetBinContent(80,5131);
   VH_tagFirst_H_mass__77->SetBinContent(81,5115);
   VH_tagFirst_H_mass__77->SetBinContent(82,5163);
   VH_tagFirst_H_mass__77->SetBinContent(83,2526);
   VH_tagFirst_H_mass__77->SetBinContent(1000,26);
   VH_tagFirst_H_mass__77->SetBinContent(1001,9229);
   VH_tagFirst_H_mass__77->SetEntries(1360367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__77->SetLineColor(ci);
   VH_tagFirst_H_mass__77->SetLineWidth(2);
   VH_tagFirst_H_mass__77->SetMarkerStyle(20);
   VH_tagFirst_H_mass__77->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__77->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__77->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__77->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__77->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__77->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__77->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__77->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__77->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__77->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__77->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1077[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1077[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 3271.669, 6530.762, 6492.598, 6419.74, 6265.351, 3193.607, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2503.625, 5228.426, 5198.936, 5082.276,
   5114.368, 2534.85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 22.98495 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1077[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1077[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.839941, 4.422668, 9.311468, 13.50683, 18.56731, 23.66628,
   28.45802, 33.55336, 38.04523, 41.82917, 45.17754, 48.31184, 50.27303, 52.30635, 53.41818, 54.83759, 55.93273, 56.03184, 56.1559, 56.29639, 56.20946, 56.00498,
   55.69855, 55.67153, 55.39721, 55.0447, 54.9284, 54.55046, 54.51252, 54.25314, 53.14108, 53.21535, 53.21889, 53.06316, 52.76459, 52.12626, 52.1461, 51.9057,
   51.47453, 51.45991, 51.50558, 51.25483, 51.4014, 50.96043, 50.9272, 50.54167, 50.42058, 50.64761, 50.48582, 49.87112, 49.91636, 49.95778, 49.92577, 49.85603,
   49.45454, 49.367, 49.25066, 49.19717, 48.67254, 48.77098, 48.67061, 48.13829, 47.96019, 48.27679, 48.02877, 48.03269, 47.16339, 47.6178, 47.48332, 46.94756,
   47.09555, 46.73877, 46.37723, 46.65419, 46.52906, 45.63112, 45.99649, 45.60432, 45.95763, 45.55068, 45.14214, 45.09837, 44.93334, 44.53182, 44.87471, 44.36468,
   44.4959, 44.33923, 44.22243, 43.77359, 43.83156, 43.57334, 43.52368, 43.6208, 43.65097, 43.43283, 43.13519, 43.1657, 42.75197, 42.69034, 42.6661, 42.70575,
   42.64405, 42.30531, 42.80473, 42.76517, 42.3342, 42.01311, 41.65344, 41.6918, 42.26528, 41.72112, 41.79768, 41.23138, 41.44068, 41.2291, 41.70984, 41.61504,
   40.93611, 40.76115, 40.56689, 40.65488, 40.57153, 40.68725, 41.16747, 40.49497, 40.78882, 40.65488, 40.78652, 40.13106, 39.86303, 40.07948, 40.09355, 40.18024,
   39.83944, 39.66912, 39.57419, 39.72361, 39.74727, 39.7591, 39.37407, 39.43135, 39.31193, 39.14412, 38.98524, 39.09123, 39.29039, 39.32628, 38.55349, 38.93697,
   38.95387, 38.7457, 38.63877, 38.27441, 38.13904, 38.28424, 38.18832, 38.45824, 37.96853, 38.23508, 37.73749, 37.67015, 37.53009, 37.45987, 37.4448, 37.31902,
   37.11688, 37.11688, 36.80138, 36.97219, 37.26354, 36.83458, 37.12955, 37.41465, 37.05857, 36.28931, 36.72464, 36.42382, 36.64004, 36.44446, 36.41349, 35.63823,
   35.98485, 36.17252, 35.7594, 35.28553, 35.5484, 35.51134, 35.25087, 35.4822, 35.50075, 35.17075, 35.45569, 34.91582, 34.95619, 35.03144, 34.43307, 34.40302,
   34.59927, 34.58839, 34.43581, 34.16714, 33.84636, 34.07895, 34.21664, 33.69041, 33.78797, 33.47761, 33.80188, 33.53093, 33.19552, 33.20685, 33.37915, 33.43263,
   33.31993, 33.2493, 33.22667, 32.42162, 32.65284, 32.66148, 32.83664, 32.41002, 32.31995, 32.14197, 32.22087, 32.02179, 31.96889, 32.03941, 31.80965, 31.53351,
   32.0834, 31.5365, 31.4499, 31.09507, 31.52755, 31.06784, 31.00118, 31.22183, 31.20978, 31.11623, 30.49964, 30.82474, 30.71165, 30.65035, 29.996, 30.0148,
   30.09615, 30.10865, 30.06802, 30.23332, 29.86403, 29.73465, 29.96777, 29.69034, 29.2532, 29.47099, 29.85774, 29.28533, 29.10172, 29.2146, 28.9527, 29.09203,
   29.10172, 29.03378, 28.51414, 28.75716, 28.54051, 28.3554, 28.26239, 28.45472, 27.95796, 28.21577, 28.16239, 28.22576, 27.7249, 27.93104, 27.77912, 27.22864,
   27.35613, 27.50013, 27.28729, 27.1387, 26.93697, 27.201, 26.62799, 27.03455, 26.37249, 26.58204, 26.91602, 26.51474, 26.3261, 25.98091, 26.32252, 26.00262,
   26.1936, 26.00624, 26.42948, 25.90116, 25.85392, 25.93019, 25.35813, 25.92294, 25.39149, 25.43219, 25.38037, 25.5171, 25.23546, 25.02215, 25.20936, 25.10095,
   24.41728, 24.97324, 24.85624, 24.68159, 24.41728, 24.20842, 24.60527, 24.48267, 24.24723, 23.98206, 23.4908, 23.73374, 23.74166, 23.86019, 23.84048, 23.91137,
   23.9271, 23.55875, 23.24127, 23.5108, 23.1399, 23.4106, 23.44672, 23.30592, 23.16021, 22.96858, 22.91119, 22.9194, 22.49282, 22.66358, 23.0544, 22.33759,
   22.3081, 22.35442, 22.23209, 22.43002, 22.1728, 22.15583, 21.8653, 22.53459, 21.55342, 21.97256, 21.84379, 21.57958, 21.53596, 21.83087, 22.36704, 21.56214,
   20.96959, 21.06356, 21.46598, 21.09478, 21.00544, 20.99648, 21.05909, 20.88871, 20.83913, 20.94267, 20.92919, 20.5483, 20.92919, 20.44277, 20.26257, 20.41054,
   20.23935, 19.94449, 20.05733, 20.10884, 20.27649, 20.07139, 20.23006, 19.79778, 19.831, 19.79303, 19.74546, 19.52034, 19.61166, 19.30721, 19.75023, 18.88369,
   19.46728, 19.17525, 19.351, 19.19976, 19.05225, 18.93839, 18.9632, 19.09662, 18.56224, 18.47592, 18.29691, 18.93839, 18.47083, 18.47083, 18.54197, 18.57237,
   18.63808, 18.30718, 18.24029, 18.03288, 17.98066, 18.35336, 18.34311, 17.73845, 18.10574, 18.25575, 18.15761, 17.65875, 17.74905, 17.57334, 17.70661, 17.79667,
   17.56799, 17.20561, 17.17279, 17.43905, 17.33086, 17.27107, 17.34713, 17.01324, 17.21654, 17.10145, 16.8912, 16.65573, 17.33086, 17.07393, 17.01877, 16.40543,
   16.49689, 16.60484, 16.17452, 16.94123, 16.61616, 16.80748, 16.36525, 16.08122, 16.22096, 16.43406, 16.371, 16.13959, 15.88708, 15.83965, 15.53997, 15.7085,
   16.08122, 15.32057, 15.41847, 15.79804, 15.7384, 15.36348, 15.43066, 15.36348, 14.97918, 15.30829, 15.33284, 15.15394, 15.28985, 15.15394, 15.12288, 15.10421,
   15.35123, 14.92257, 15.00427, 15.06057, 14.75781, 15.21587, 14.35731, 15.17254, 14.50069, 14.59764, 14.76418, 14.35731, 14.38348, 14.80235, 14.50069, 14.69395,
   14.41614, 14.58475, 14.42918, 13.97898, 14.21909, 14.2719, 14.35731, 13.96552, 13.88448, 13.73467, 14.22571, 13.71411, 13.74151, 13.59012, 13.93181, 13.68666,
   13.66603, 13.63158, 13.68666, 13.70039, 13.3739, 13.61087, 13.67978, 13.38795, 13.47198, 13.31046, 13.20406, 13.61778, 13.59012, 13.08243, 13.18268, 13.12549,
   13.16126, 13.06085, 12.74749, 12.95965, 13.19694, 13.21118, 12.55422, 12.7696, 12.53923, 12.53923, 12.71794, 12.71055, 12.59908, 12.00279, 12.6735, 12.63635,
   12.3427, 12.37314, 12.39592, 12.614, 12.41108, 11.97141, 12.45646, 12.3427, 12.39592, 12.02627, 11.6852, 12.38833, 12.41866, 11.99495, 11.66909, 12.33508,
   11.49861, 11.62873, 12.20479, 11.89259, 12.14299, 11.94782, 11.66103, 11.26729, 11.47405, 11.51496, 11.9084, 12.01845, 11.70128, 11.91629, 11.62873, 11.49043,
   11.18352, 11.51496, 11.13295, 11.3918, 10.85063, 10.9025, 11.73338, 10.85929, 10.95413, 11.16669, 11.09064, 10.95413, 11.07367, 10.97129, 10.8766, 10.78107,
   10.88524, 10.81591, 10.58744, 10.72861, 10.64943, 10.97986, 10.56076, 10.70228, 10.39019, 10.72861, 10.6406, 10.47133, 10.06844, 11.0226, 10.65826, 10.44436,
   9.984025, 10.40828, 10.48031, 10.30842, 10.01224, 10.9025, 10.29929, 10.09642, 10.01224, 10.14288, 10.23518, 10.13361, 10.14288, 10.30842, 9.803432, 9.832167,
   9.832167, 9.965169, 10.07777, 10.00284, 10.02163, 9.648733, 10.13361, 9.68764, 9.638982, 9.648733, 9.401922, 9.832167, 9.481601, 9.668206, 9.580267, 9.381896,
   9.755352, 9.822598, 9.599879, 9.43188, 9.117564, 9.199706, 8.845337, 9.148454, 9.60967, 9.230321, 9.024261, 9.148454, 9.461744, 9.107245, 9.471677, 9.17924,
   9.260835, 9.003396, 8.929983, 8.866574, 9.024261, 8.908897, 9.209923, 8.608269, 8.898335, 9.209923, 9.321562, 8.531457, 8.866574, 8.802708, 9.013834, 8.542472,
   8.520427, 8.695223, 8.866574, 8.706031, 8.319393, 8.640979, 8.792019, 8.940507, 8.619186, 8.813385, 8.56446, 8.531457, 8.531457, 8.476165, 8.476165, 8.205579,
   8.386939, 8.364484, 8.274055, 8.251293, 8.531457, 8.651855, 7.854248, 8.171126, 8.262682, 8.239888, 8.640979, 8.124961, 8.101779, 8.055217, 8.020118, 8.090164,
   8.171126, 7.757874, 8.078532, 7.769986, 7.92576, 7.878158, 7.961276, 7.996633, 7.973079, 7.684799, 7.794154, 7.573866, 7.709234, 7.842266, 7.901995, 7.548993,
   7.672553, 7.586272, 7.586272, 7.436034, 7.901995, 7.769986, 7.635695, 7.461284, 7.573866, 7.830266, 7.598658, 7.511529, 7.397998, 7.282697, 7.359765, 7.423377,
   7.165542, 7.498999, 7.623369, 7.230863, 7.623369, 7.321333, 7.03308, 7.611024, 7.282697, 7.086362, 6.870757, 6.938853, 7.295598, 7.56144, 7.139246, 7.295598,
   7.269773, 7.423377, 7.321333, 7.126062, 7.536526, 7.019697, 7.046439, 6.898076, 6.829573, 7.126062, 6.760376, 6.760376, 7.486448, 7.126062, 6.760376, 6.911695,
   6.898076, 6.534023, 6.760376, 6.760376, 6.417853, 6.490703, 6.81579, 7.03308, 6.314452, 6.117785, 6.81579, 6.329327, 6.857056, 7.152406, 6.562744, 6.490703,
   6.690463, 6.577057, 6.870757, 6.38848, 6.704504, 6.476198, 6.519615, 6.461661, 6.59134, 6.209328, 6.577057, 5.866691, 6.194165, 6.519615, 6.476198, 6.163727,
   6.209328, 6.163727, 6.055988, 6.38848, 6.254598, 5.72061, 6.432489, 5.72061, 5.704148, 6.284596, 5.67108, 6.055988, 5.78599, 5.866691, 6.577057, 5.930462,
   6.071496, 5.930462, 6.148451, 6.209328, 5.962091, 5.962091, 6.04044, 5.993554, 5.946297, 6.055988, 6.447092, 5.72061, 6.148451, 5.962091, 5.818405, 5.962091,
   5.866691, 5.977843, 5.687638, 5.67108, 5.704148, 5.604359, 6.148451, 5.687638, 5.687638, 5.914584, 5.78599, 5.78599, 5.364304, 5.329128, 5.485645, 5.72061,
   5.637818, 5.753393, 5.78599, 5.570699, 5.654473, 5.094567, 5.654473, 5.364304, 5.485645, 6.009223, 5.293718, 5.72061, 5.131351, 5.433974, 5.364304, 5.866691,
   5.186038, 5.001422, 4.944694, 5.167874, 5.311453, 5.001422, 5.131351, 5.057515, 5.587554, 5.275924, 5.222178, 5.076075, 5.240155, 4.770461, 5.240155, 5.076075,
   5.222178, 4.730872, 5.131351, 5.094567, 5.131351, 5.381806, 5.222178, 5.149645, 5.149645, 5.020189, 5.001422, 5.20414, 4.829237, 4.809725, 5.502761, 4.790134,
   4.730872, 4.569085, 5.057515, 4.887306, 5.076075, 4.868027, 4.630417, 4.610064, 4.925639, 5.186038, 4.944694, 4.770461, 5.001422, 4.730872, 5.001422, 5.057515,
   4.610064, 4.750708, 4.90651, 4.401354, 4.091313, 4.770461, 4.690948, 4.630417, 4.336783, 4.527735, 4.925639, 4.226973, 4.790134, 5.020189, 4.293196, 4.670858,
   4.569085, 3.974727, 4.548457, 4.569085, 4.204667, 4.887306, 4.630417, 4.630417, 4.58962, 4.486003, 4.527735, 4.690948, 4.045082, 4.249162, 4.422668, 4.045082,
   4.336783, 4.379936, 4.271236, 4.569085, 4.182242, 4.548457, 4.358413, 4.045082, 4.401354, 4.422668, 4.204667, 4.422668, 4.114234, 4.226973, 4.091313, 4.293196,
   4.670858, 4.182242, 3.974727, 3.78072, 4.379936, 3.927124, 3.78072, 4.137027, 4.293196, 4.293196, 4.137027, 4.182242, 4.44388, 4.021767, 3.974727, 4.114234,
   4.159696, 4.021767, 3.830143, 4.271236, 3.854617, 3.974727, 3.628413, 3.705349, 3.998316, 3.903105, 4.182242, 3.654238, 3.78072, 3.654238, 4.204667, 3.830143,
   3.654238, 3.654238, 4.137027, 3.903105, 3.78072, 3.755764, 4.249162 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1077,Graph_from_VH_tagFirst_2b1c_H_mass_fy1077,Graph_from_VH_tagFirst_2b1c_H_mass_fex1077,Graph_from_VH_tagFirst_2b1c_H_mass_fey1077);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->SetMinimum(-720.3241);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->SetMaximum(7248.008);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1077);
   
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
   
   TH1D *data_mc_ratio__78 = new TH1D("data_mc_ratio__78","",1000,0,2000);
   data_mc_ratio__78->SetBinContent(43,1.025776);
   data_mc_ratio__78->SetBinContent(44,1.022086);
   data_mc_ratio__78->SetBinContent(45,1.001448);
   data_mc_ratio__78->SetBinContent(46,1.018266);
   data_mc_ratio__78->SetBinContent(47,0.9949962);
   data_mc_ratio__78->SetBinContent(48,1.015153);
   data_mc_ratio__78->SetBinContent(78,1.015328);
   data_mc_ratio__78->SetBinContent(79,1.016558);
   data_mc_ratio__78->SetBinContent(80,0.9869328);
   data_mc_ratio__78->SetBinContent(81,1.006439);
   data_mc_ratio__78->SetBinContent(82,1.009509);
   data_mc_ratio__78->SetBinContent(83,0.9965088);
   data_mc_ratio__78->SetBinContent(1000,1.131175);
   data_mc_ratio__78->SetBinContent(1001,1.109066);
   data_mc_ratio__78->SetBinError(43,0.01770686);
   data_mc_ratio__78->SetBinError(44,0.01251013);
   data_mc_ratio__78->SetBinError(45,0.01241952);
   data_mc_ratio__78->SetBinError(46,0.01259424);
   data_mc_ratio__78->SetBinError(47,0.01260196);
   data_mc_ratio__78->SetBinError(48,0.01782892);
   data_mc_ratio__78->SetBinError(78,0.0201381);
   data_mc_ratio__78->SetBinError(79,0.01394379);
   data_mc_ratio__78->SetBinError(80,0.01377801);
   data_mc_ratio__78->SetBinError(81,0.01407228);
   data_mc_ratio__78->SetBinError(82,0.01404944);
   data_mc_ratio__78->SetBinError(83,0.01982734);
   data_mc_ratio__78->SetBinError(1000,0.2218417);
   data_mc_ratio__78->SetBinError(1001,0.01404928);
   data_mc_ratio__78->SetMinimum(0.4);
   data_mc_ratio__78->SetMaximum(1.6);
   data_mc_ratio__78->SetEntries(1795.156);
   data_mc_ratio__78->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__78->SetLineColor(ci);
   data_mc_ratio__78->SetLineWidth(2);
   data_mc_ratio__78->SetMarkerStyle(20);
   data_mc_ratio__78->SetMarkerSize(1.2);
   data_mc_ratio__78->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__78->GetXaxis()->SetRange(1,150);
   data_mc_ratio__78->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__78->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__78->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__78->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__78->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__78->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__78->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__78->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__78->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__78->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__78->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__78->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__78->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__78->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1078[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1078[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1078[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1078[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1078,Graph_from_mc_statistical_error_fy1078,Graph_from_mc_statistical_error_fex1078,Graph_from_mc_statistical_error_fey1078);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1078 = new TH1F("Graph_Graph_from_mc_statistical_error1078","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1078->SetMinimum(0.7781594);
   Graph_Graph_from_mc_statistical_error1078->SetMaximum(1.221841);
   Graph_Graph_from_mc_statistical_error1078->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1078->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1078->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1078->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1078);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->SetSelected(H_mass_tagFirst_VR_17);
}
