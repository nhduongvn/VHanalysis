#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_17/H_mass_tagFirst_VR_17
//=========  (Fri Jan 26 12:50:32 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-17.10283,315.7258,17095.73);
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
   st->SetMaximum(15384.44);
   
   TH1F *st_stack_11 = new TH1F("st_stack_11","",1000,0,2000);
   st_stack_11->SetMinimum(0.01);
   st_stack_11->SetMaximum(15384.44);
   st_stack_11->SetDirectory(nullptr);
   st_stack_11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_11->SetLineColor(ci);
   st_stack_11->SetLineWidth(0);
   st_stack_11->GetXaxis()->SetRange(1,150);
   st_stack_11->GetXaxis()->SetLabelFont(42);
   st_stack_11->GetXaxis()->SetTitleOffset(1);
   st_stack_11->GetXaxis()->SetTitleFont(42);
   st_stack_11->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_11->GetYaxis()->SetLabelFont(42);
   st_stack_11->GetYaxis()->SetLabelSize(0.05);
   st_stack_11->GetYaxis()->SetTitleSize(0.057);
   st_stack_11->GetYaxis()->SetTitleOffset(1.2);
   st_stack_11->GetYaxis()->SetTitleFont(42);
   st_stack_11->GetZaxis()->SetLabelFont(42);
   st_stack_11->GetZaxis()->SetTitleOffset(1);
   st_stack_11->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_11);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,2698.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,5395.372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,5383.397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,5307.528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,5144.866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,2653.693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2058.212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,4350.717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,4266.927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,4152.168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,4212.038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,2093.387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,21.18751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,7206.841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.01071637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.1128331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.77614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.311473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,9.110994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,13.38285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,18.4474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,23.3063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,28.00143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,32.98451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,37.34222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,41.0592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,44.53738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,47.40225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,49.28811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,51.46045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,52.43265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,53.86854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,54.88528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,54.9368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,55.06684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,55.20948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,55.19137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,55.13833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,54.6415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,54.5534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,54.56242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,54.13062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,54.00899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,53.85428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,53.86118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,53.71796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,52.94702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,52.76157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,52.52233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,52.40622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,52.24005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,51.41186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,51.57727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,51.24837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,50.62571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,50.87298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,50.86628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,50.37975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,50.65721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,50.15722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,50.12919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,49.84752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,49.71287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,50.25337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,49.96378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,49.22734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,49.17226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,49.32636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,49.21234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,49.33258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,48.7879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,48.70263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,48.55749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,48.50332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,47.96026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,48.32889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,47.7839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,47.50635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,47.38185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,47.48562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,47.53503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,47.34723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,46.5736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,47.14394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,46.67489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,46.38286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,46.54931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,46.15458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,45.70828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,46.18474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,45.87652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,45.0384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,45.31621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,45.0507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,45.2819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,44.84016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,44.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,44.76873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,44.49182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,43.89591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,44.08447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,43.89363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,43.90434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,43.91754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,43.64912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,43.54237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,43.26807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,43.15065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,42.96779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,42.9161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,43.53269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,42.89527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,43.31431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,42.67647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,42.10273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,42.41248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,42.13663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,42.29173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,42.16641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,41.79096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,42.37653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,42.62176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,41.81347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,41.72556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,41.06614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,41.23989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,41.77156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,41.11947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,42.13245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,40.75568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,41.14651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,40.88401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,41.14019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,41.0326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,40.49359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,40.19102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,40.28666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,40.47054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,39.95515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,40.4535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,40.66202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,39.9463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,40.22825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,40.19255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,40.28543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,40.0163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,39.37834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,39.5486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,39.60225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,39.68566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,39.59669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,39.22575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,39.02043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,39.61828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,39.23807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,39.16719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,39.06454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,38.9891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,38.99676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,38.79089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,38.6963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,38.71666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,38.84286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,38.80083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,38.13799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.27106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.31003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.7554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,38.14169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,38.18217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,37.65273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,37.91736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,37.79621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,38.03496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.46394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,37.80752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.27304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.21278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,37.51407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,37.16479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,37.09924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,37.13443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,36.62617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,36.67152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.45411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,36.50805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,36.78841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.38193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,36.61881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,36.89977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,36.68083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,35.98839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.29703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,36.05264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,36.09995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,35.90526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,36.05874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.34919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.54815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,35.63966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.61583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,34.85973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,35.28705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,35.21449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,34.85457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,35.04433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,35.00076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,34.71769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,35.23205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.51892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.5958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,34.55021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,34.22728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,33.94959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,34.17857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,33.99453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,33.97331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,33.81142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.47744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,33.77068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,33.81193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.41053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.40192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,33.01685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.80701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,33.11034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,32.74619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,32.9858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,32.9706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,33.0244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,32.94684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,32.84864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,32.7384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,32.62112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.49113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.26168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.40238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,32.69867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,32.00993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,31.72443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,31.85782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.87657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.70536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,31.90969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.38509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,31.10904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,31.68047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,31.06195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,31.25403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,30.79256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,31.23091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,30.6996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,30.63323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,30.78145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,30.81582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,30.72823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,30.08409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.46747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.3967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.19259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,29.64686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,29.853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,29.74738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,29.68803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,29.84729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,29.87651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.51354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.53198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.65972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.31084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,28.97008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,29.18954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.35359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,28.87391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,28.70928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,28.75199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,28.75951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,28.71661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,28.77255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,28.54332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.19057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.58797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.27113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,28.07006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,28.02445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,28.15953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,27.605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,27.84882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,27.71845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,27.78976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.29942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,27.57278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.50984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,27.16327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,27.06086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.14221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,26.95006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,26.83619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,26.60194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,26.74315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,26.33791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,26.71046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,25.99646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.33747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,26.45511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.23457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,25.94754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,25.59691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,26.04192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,25.66811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,25.81228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,25.69307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,26.10004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,25.47972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,25.55232);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.56263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,25.19695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.88421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,25.00338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,25.1343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,25.11646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,25.20142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,24.96919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,24.66909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,24.8677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,24.78233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,24.05054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.6357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,24.52018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,24.32199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,24.1468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,24.01534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,24.32464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,24.11205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,23.89068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.66746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,23.17422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,23.52301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.58685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,23.59462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,23.53849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.73199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.65052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,23.13187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,23.069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,23.16347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,22.85387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,23.09295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,23.15848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,23.04803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,22.89479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.76169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.64419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.61906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,22.28726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,22.34678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,22.65465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,22.16866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,22.09711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,21.98855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,21.85199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,22.0901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,21.86416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,21.92455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,21.479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,22.23191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,21.28709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.65967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,21.49604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,21.40318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,21.27553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.48544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,22.15424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,21.20768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.61948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,20.80465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,21.10889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,20.72332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,20.71771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.62237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,20.69655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.60443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.51701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.97312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.56283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,20.25989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.58113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,20.11646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,19.94064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,20.19713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,19.93296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.78191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,19.7459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,19.98479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,19.99519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,20.18305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,19.86938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.40413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,19.57631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.4645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,19.46432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,19.2506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,19.33224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,19.11766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.48111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.90072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,19.12981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,18.85705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.00249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,18.8996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,18.78067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.62725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.68066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,18.78614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,18.33358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,18.48285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,18.13842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.68847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,18.15894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,18.11608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,18.22215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,18.47797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,18.32655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,17.99517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,18.00175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,17.72938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.73129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.09512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,17.99784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.4594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,17.91752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,17.97358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,17.86007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,17.31848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.5738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,17.30088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,17.37569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.58346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.29516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,16.97271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,16.88756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.22404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,17.02665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,17.01284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.1476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,16.84293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,17.15257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,16.84759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.67525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,16.41934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.26324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,16.75971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,16.74515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,16.18471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,16.30371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,16.30496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,15.89045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.66747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.43654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.50336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,16.1009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,15.74119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,16.00612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.25798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,16.13922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,15.99369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.74673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.5829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,15.30026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.58097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,15.82043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,15.18434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,15.26713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.45485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.56859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,15.18262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,15.25042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.09996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.75437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,15.11615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.13465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,14.8278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.02912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,14.76327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,14.85723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,14.91645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.02277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.57456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,14.76617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,14.73941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.52326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,15.03121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,14.20976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,14.82356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.62636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,14.39432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.46155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,14.11085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,14.24656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.48085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.25083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.44187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.09525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.38918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.11397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.65204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,13.84893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.06757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.02757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.65829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.64138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.47513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,13.95047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.59802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.4744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.40399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.72433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.42619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.52523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.31839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.51238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.4381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,13.15655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.5505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.4178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.3822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,13.23842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,13.09494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,13.01883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.39396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.37187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,12.7874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,13.07998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,12.85618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,12.90488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,12.87432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.58471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.73148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,13.07073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,13.02255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.52111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.52161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.44884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.53327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.38239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.46759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,11.77597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.39375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.37916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.17482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.10125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.23529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.42349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.24685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.81936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.31406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.09205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.14685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,11.92768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.46136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.17028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.18527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.78879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.50937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.09413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,11.27685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.37966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,11.95255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.6911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,11.89932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.74827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.5606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,11.12663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,11.23378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.33194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.60808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,11.78505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.40499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.73623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.41782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,11.28923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,11.03444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.25959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,10.86126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.12897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.72638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.75264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.37696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.69555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.73288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,10.93116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,10.99085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.73322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,10.92796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,11.01881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.80541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.56621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.69483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.55188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.35325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.51743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.50459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.6795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.35495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.51136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,10.29071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.49678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.35697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.32159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,9.885879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.84757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.52455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.29668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.853932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.21117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.29963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,9.994622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,9.79774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.68728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.14847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,9.935595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,9.791998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,10.0301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,9.987771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,10.00429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,10.01114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.12107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.762565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.649822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.681574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.748938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,9.893218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,9.745242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.889557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.497691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,9.891321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.439327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.399787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.410172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.177547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.533033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.356136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.535825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.309599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.292382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.582565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.696741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.471812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.180357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,8.831238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,8.992849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.755348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,8.977012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.265762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.093707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,8.929525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,9.000367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.277778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,8.864501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.321823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.111475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.096204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,8.831256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.719347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.757442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,8.849451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.883047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,8.936922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.427372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.89326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,9.025471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.120676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.374663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.778471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.643413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,8.881035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.396438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.408111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.577894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.680787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.516233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.207885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.449845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.593875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.82355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.582508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.609165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.36439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.354737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.427605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.280634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.216997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.092412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.221177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.194493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.21298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.155027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.281772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.479326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.733881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.035423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.100357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.049719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.471239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,7.987738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,7.904416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,7.91117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,7.849212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,7.923677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.023713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.641535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,7.859231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.752664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.748035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.607743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.707468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.827468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.772381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.536412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.632229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.4848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.573793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.704723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.804935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.529832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.584373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.427433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.530758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.154875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.698626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.613559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.553279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.316616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.383084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.736457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.580736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.382951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.252972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.116463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.165655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.2974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.216177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.317924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.512645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.134597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.372288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.22404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,6.874259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.472424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.042036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,6.973297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.745453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.810287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.123828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.292568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,6.972227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.142317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.113144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.261755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.182691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,8.63308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.362499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,6.894924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,6.95556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.725746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.760564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,6.913535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.681433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.60905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.326051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,6.84618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.545874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.79208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.879228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.263621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.588173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.559781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.334285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.349065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.665193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,6.860056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.161484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.016364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.541775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.236368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.731222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,6.94906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.503764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.320192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.520661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.501264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.686297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.167287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.462261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.317851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.280565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.383982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.441618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.11958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.412883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.726657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.035955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.38585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.385675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.061452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.004586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.025634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,6.046367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.172178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.036361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.597072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.298345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.597515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.499974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.122807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.536178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,5.92568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.69425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.706027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.409019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.821835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,5.987995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,6.402203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,5.990043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.07261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.854688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.882745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,5.878107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.842275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.870166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,5.808852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.228142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.541395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.013564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.825001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.749203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.819429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.790131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.858348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.585637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.674345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.542127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.473431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,5.932014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.522841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.621463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.893516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.622998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.655542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.17687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.240948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.324692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.634906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.519449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.682688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.71736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.57071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.6064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.139146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.436865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.325446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.31332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.851014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.190771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.638873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.064812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.329865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.32543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.76035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.020666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.887573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.819573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.019272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.147835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.913071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.071944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,4.991742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.436894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.21599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.14081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.051374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.133633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.778457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.105024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,4.967635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.107458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.644162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,4.937275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,4.960823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,4.997799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.201415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.105976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.004164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,4.971853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,4.965693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.803398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.12334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.717276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.634071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.284959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.681558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.682128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.534067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,4.89152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.725434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,4.959133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.744315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.508015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.58467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.800254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.118219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.705997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.71501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.819747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.632301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.979821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,4.946003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.522492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.681066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.711961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.277921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.014381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.634899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.598593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.488248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.200611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.487298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.785332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.080545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.659714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.902374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.217559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.61247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.407733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.882821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.483617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.485364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.117143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.710514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.545189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.529423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.562331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.440713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.425584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.525377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,3.994363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.247486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.280871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.098762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.244952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.24619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.135628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.5014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.144513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.383013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.286235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,3.970516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.307149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.270229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.163324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.299104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,3.987101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.129012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,3.907543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.159156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.537681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.146925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.879918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.700576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.264102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.838604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.599747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.036342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.158914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.228378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.095594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.102624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.278813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,3.884765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.833358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.034701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.058648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,3.881473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.765843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.139567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.784676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.79451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.598447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.651125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.805316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.837535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.046696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.700056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.645594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.676425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.116317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.81293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.52578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.744657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.05391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.843696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.789237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.672008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.155045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,58.7755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(2031125);

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
   
   TH1D *VH_tagFirst_H_mass__21 = new TH1D("VH_tagFirst_H_mass__21","",1000,0,2000);
   VH_tagFirst_H_mass__21->SetBinContent(43,3472);
   VH_tagFirst_H_mass__21->SetBinContent(44,6923);
   VH_tagFirst_H_mass__21->SetBinContent(45,6736);
   VH_tagFirst_H_mass__21->SetBinContent(46,6764);
   VH_tagFirst_H_mass__21->SetBinContent(47,6423);
   VH_tagFirst_H_mass__21->SetBinContent(48,3337);
   VH_tagFirst_H_mass__21->SetBinContent(78,2623);
   VH_tagFirst_H_mass__21->SetBinContent(79,5530);
   VH_tagFirst_H_mass__21->SetBinContent(80,5292);
   VH_tagFirst_H_mass__21->SetBinContent(81,5278);
   VH_tagFirst_H_mass__21->SetBinContent(82,5323);
   VH_tagFirst_H_mass__21->SetBinContent(83,2605);
   VH_tagFirst_H_mass__21->SetBinContent(1000,28);
   VH_tagFirst_H_mass__21->SetBinContent(1001,9445);
   VH_tagFirst_H_mass__21->SetEntries(1403468);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__21->SetLineColor(ci);
   VH_tagFirst_H_mass__21->SetLineWidth(2);
   VH_tagFirst_H_mass__21->SetMarkerStyle(20);
   VH_tagFirst_H_mass__21->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__21->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__21->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__21->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__21->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__21->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__21->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__21->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__21->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__21->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__21->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1021[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1021[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 2698.48, 5395.372, 5383.397, 5307.528, 5144.866, 2653.693, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2058.212, 4350.717, 4266.927, 4152.168,
   4212.038, 2093.387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 21.18751 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1021[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1021[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0.01071637, 0.416, 0.1128331, 1.77614, 4.311473, 9.110994, 13.38285, 18.4474, 23.3063,
   28.00143, 32.98451, 37.34222, 41.0592, 44.53738, 47.40225, 49.28811, 51.46045, 52.43265, 53.86854, 54.88528, 54.9368, 55.06684, 55.20948, 55.19137, 55.13833,
   54.6415, 54.5534, 54.56242, 54.13062, 54.00899, 53.85428, 53.86118, 53.71796, 52.94702, 52.76157, 52.52233, 52.40622, 52.24005, 51.41186, 51.57727, 51.24837,
   50.62571, 50.87298, 50.86628, 50.37975, 50.65721, 50.15722, 50.12919, 49.84752, 49.71287, 50.25337, 49.96378, 49.22734, 49.17226, 49.32636, 49.21234, 49.33258,
   48.7879, 48.70263, 48.55749, 48.50332, 47.96026, 48.32889, 47.7839, 47.50635, 47.38185, 47.48562, 47.53503, 47.34723, 46.5736, 47.14394, 46.67489, 46.38286,
   46.54931, 46.15458, 45.70828, 46.18474, 45.87652, 45.0384, 45.31621, 45.0507, 45.2819, 44.84016, 44.58, 44.76873, 44.49182, 43.89591, 44.08447, 43.89363,
   43.90434, 43.91754, 43.64912, 43.54237, 43.26807, 43.15065, 42.96779, 42.9161, 43.53269, 42.89527, 43.31431, 42.67647, 42.10273, 42.41248, 42.13663, 42.29173,
   42.16641, 41.79096, 42.37653, 42.62176, 41.81347, 41.72556, 41.06614, 41.23989, 41.77156, 41.11947, 42.13245, 40.75568, 41.14651, 40.88401, 41.14019, 41.0326,
   40.49359, 40.19102, 40.28666, 40.47054, 39.95515, 40.4535, 40.66202, 39.9463, 40.22825, 40.19255, 40.28543, 40.0163, 39.37834, 39.5486, 39.60225, 39.68566,
   39.59669, 39.22575, 39.02043, 39.61828, 39.23807, 39.16719, 39.06454, 38.9891, 38.99676, 38.79089, 38.6963, 38.71666, 38.84286, 38.80083, 38.13799, 38.27106,
   38.31003, 38.7554, 38.14169, 38.18217, 37.65273, 37.91736, 37.79621, 38.03496, 37.46394, 37.80752, 37.27304, 37.21278, 37.51407, 37.16479, 37.09924, 37.13443,
   36.62617, 36.67152, 36.45411, 36.50805, 36.78841, 36.38193, 36.61881, 36.89977, 36.68083, 35.98839, 36.29703, 36.05264, 36.09995, 35.90526, 36.05874, 35.34919,
   35.54815, 35.63966, 35.61583, 34.85973, 35.28705, 35.21449, 34.85457, 35.04433, 35.00076, 34.71769, 35.23205, 34.51892, 34.5958, 34.55021, 34.22728, 33.94959,
   34.17857, 33.99453, 33.97331, 33.81142, 33.47744, 33.77068, 33.81193, 33.41053, 33.40192, 33.01685, 33.80701, 33.11034, 32.74619, 32.9858, 32.9706, 33.0244,
   32.94684, 32.84864, 32.7384, 32.62112, 32.49113, 32.26168, 32.40238, 32.69867, 32.00993, 31.72443, 31.85782, 31.87657, 31.70536, 31.90969, 31.38509, 31.10904,
   31.68047, 31.06195, 31.25403, 30.79256, 31.23091, 30.6996, 30.63323, 30.78145, 30.81582, 30.72823, 30.08409, 30.46747, 30.3967, 30.19259, 29.64686, 29.853,
   29.74738, 29.68803, 29.84729, 29.87651, 29.51354, 29.53198, 29.65972, 29.31084, 28.97008, 29.18954, 29.35359, 28.87391, 28.70928, 28.75199, 28.75951, 28.71661,
   28.77255, 28.54332, 28.19057, 28.58797, 28.27113, 28.07006, 28.02445, 28.15953, 27.605, 27.84882, 27.71845, 27.78976, 27.29942, 27.57278, 27.50984, 27.16327,
   27.06086, 27.14221, 26.95006, 26.83619, 26.60194, 26.74315, 26.33791, 26.71046, 25.99646, 26.33747, 26.45511, 26.23457, 25.94754, 25.59691, 26.04192, 25.66811,
   25.81228, 25.69307, 26.10004, 25.47972, 25.55232, 25.56263, 25.19695, 25.88421, 25.00338, 25.1343, 25.11646, 25.20142, 24.96919, 24.66909, 24.8677, 24.78233,
   24.05054, 24.6357, 24.52018, 24.32199, 24.1468, 24.01534, 24.32464, 24.11205, 23.89068, 23.66746, 23.17422, 23.52301, 23.58685, 23.59462, 23.53849, 23.73199,
   23.65052, 23.13187, 23.069, 23.16347, 22.85387, 23.09295, 23.15848, 23.04803, 22.89479, 22.76169, 22.64419, 22.61906, 22.28726, 22.34678, 22.65465, 22.16866,
   22.09711, 21.98855, 21.85199, 22.0901, 21.86416, 21.92455, 21.479, 22.23191, 21.28709, 21.65967, 21.49604, 21.40318, 21.27553, 21.48544, 22.15424, 21.20768,
   20.61948, 20.80465, 21.10889, 20.72332, 20.71771, 20.62237, 20.69655, 20.60443, 20.51701, 20.97312, 20.56283, 20.25989, 20.58113, 20.11646, 19.94064, 20.19713,
   19.93296, 19.78191, 19.7459, 19.98479, 19.99519, 20.18305, 19.86938, 19.40413, 19.57631, 19.4645, 19.46432, 19.2506, 19.33224, 19.11766, 19.48111, 18.90072,
   19.12981, 18.85705, 19.00249, 18.8996, 18.78067, 18.62725, 18.68066, 18.78614, 18.33358, 18.48285, 18.13842, 18.68847, 18.15894, 18.11608, 18.22215, 18.47797,
   18.32655, 17.99517, 18.00175, 17.72938, 17.73129, 18.09512, 17.99784, 17.4594, 17.91752, 17.97358, 17.86007, 17.31848, 17.5738, 17.30088, 17.37569, 17.58346,
   17.29516, 16.97271, 16.88756, 17.22404, 17.02665, 17.01284, 17.1476, 16.84293, 17.15257, 16.84759, 16.67525, 16.41934, 17.26324, 16.75971, 16.74515, 16.18471,
   16.30371, 16.30496, 15.89045, 16.66747, 16.43654, 16.50336, 16.1009, 15.74119, 16.00612, 16.25798, 16.13922, 15.99369, 15.74673, 15.5829, 15.30026, 15.58097,
   15.82043, 15.18434, 15.26713, 15.45485, 15.56859, 15.18262, 15.25042, 15.09996, 14.75437, 15.11615, 15.13465, 14.8278, 15.02912, 14.76327, 14.85723, 14.91645,
   15.02277, 14.57456, 14.76617, 14.73941, 14.52326, 15.03121, 14.20976, 14.82356, 14.62636, 14.39432, 14.46155, 14.11085, 14.24656, 14.48085, 14.25083, 14.44187,
   14.09525, 14.38918, 14.11397, 13.65204, 13.84893, 14.06757, 14.02757, 13.65829, 13.64138, 13.47513, 13.95047, 13.59802, 13.4744, 13.40399, 13.72433, 13.42619,
   13.52523, 13.31839, 13.51238, 13.4381, 13.15655, 13.5505, 13.4178, 13.3822, 13.23842, 13.09494, 13.01883, 13.39396, 13.37187, 12.7874, 13.07998, 12.85618,
   12.90488, 12.87432, 12.58471, 12.73148, 13.07073, 13.02255, 12.349, 12.52111, 12.52161, 12.44884, 12.53327, 12.38239, 12.46759, 11.77597, 12.39375, 12.37916,
   12.17482, 12.10125, 12.23529, 12.42349, 12.24685, 11.81936, 12.31406, 12.09205, 12.14685, 11.92768, 11.46136, 12.17028, 12.18527, 11.78879, 11.50937, 12.09413,
   11.27685, 11.37966, 11.95255, 11.6911, 11.89932, 11.74827, 11.5606, 11.12663, 11.23378, 11.33194, 11.60808, 11.78505, 11.40499, 11.73623, 11.41782, 11.28923,
   11.03444, 11.25959, 10.86126, 11.12897, 10.72638, 10.75264, 11.37696, 10.69555, 10.73288, 10.93116, 10.99085, 10.73322, 10.92796, 11.01881, 10.80541, 10.56621,
   10.69483, 10.55188, 10.35325, 10.51743, 10.50459, 10.6795, 10.35495, 10.51136, 10.29071, 10.49678, 10.35697, 10.32159, 9.885879, 10.84757, 10.52455, 10.29668,
   9.853932, 10.21117, 10.29963, 9.994622, 9.79774, 10.68728, 10.14847, 9.935595, 9.791998, 10.0301, 9.987771, 10.00429, 10.01114, 10.12107, 9.762565, 9.649822,
   9.681574, 9.748938, 9.893218, 9.745242, 9.889557, 9.497691, 9.891321, 9.439327, 9.399787, 9.410172, 9.177547, 9.533033, 9.356136, 9.535825, 9.309599, 9.292382,
   9.582565, 9.696741, 9.471812, 9.180357, 8.831238, 8.992849, 8.755348, 8.977012, 9.265762, 9.093707, 8.929525, 9.000367, 9.277778, 8.864501, 9.321823, 9.111475,
   9.096204, 8.831256, 8.719347, 8.757442, 8.849451, 8.883047, 8.936922, 8.427372, 8.89326, 9.025471, 9.120676, 8.374663, 8.778471, 8.643413, 8.881035, 8.396438,
   8.408111, 8.577894, 8.680787, 8.516233, 8.207885, 8.449845, 8.593875, 8.82355, 8.582508, 8.609165, 8.36439, 8.354737, 8.427605, 8.280634, 8.216997, 8.092412,
   8.221177, 8.194493, 8.21298, 8.155027, 8.281772, 8.479326, 7.733881, 8.035423, 8.100357, 8.049719, 8.471239, 7.987738, 7.904416, 7.91117, 7.849212, 7.923677,
   8.023713, 7.641535, 7.859231, 7.752664, 7.748035, 7.607743, 7.707468, 7.827468, 7.772381, 7.536412, 7.632229, 7.4848, 7.573793, 7.704723, 7.804935, 7.529832,
   7.584373, 7.427433, 7.530758, 7.154875, 7.698626, 7.613559, 7.553279, 7.316616, 7.383084, 7.736457, 7.580736, 7.382951, 7.252972, 7.116463, 7.165655, 7.2974,
   7.216177, 7.317924, 7.512645, 7.134597, 7.372288, 7.22404, 6.874259, 7.472424, 7.042036, 6.973297, 6.745453, 6.810287, 7.123828, 7.292568, 6.972227, 7.142317,
   7.113144, 7.261755, 7.182691, 8.63308, 7.362499, 6.894924, 6.95556, 6.725746, 6.760564, 6.913535, 6.681433, 6.60905, 7.326051, 6.84618, 6.545874, 6.79208,
   6.879228, 6.263621, 6.588173, 6.559781, 6.334285, 6.349065, 6.665193, 6.860056, 6.161484, 6.016364, 6.541775, 6.236368, 6.731222, 6.94906, 6.503764, 6.320192,
   6.520661, 6.501264, 6.686297, 6.167287, 6.462261, 6.317851, 6.280565, 6.383982, 6.441618, 6.11958, 6.412883, 5.726657, 6.035955, 6.38585, 6.385675, 6.061452,
   6.004586, 6.025634, 6.046367, 6.172178, 6.036361, 5.597072, 6.298345, 5.597515, 5.499974, 6.122807, 5.536178, 5.92568, 5.69425, 5.706027, 6.409019, 5.821835,
   5.987995, 6.402203, 5.990043, 6.07261, 5.854688, 5.882745, 5.878107, 5.842275, 5.870166, 5.808852, 6.228142, 5.541395, 6.013564, 5.825001, 5.749203, 5.819429,
   5.790131, 5.858348, 5.585637, 5.674345, 5.542127, 5.473431, 5.932014, 5.522841, 5.621463, 5.893516, 5.622998, 5.655542, 5.17687, 5.240948, 5.324692, 5.634906,
   5.519449, 5.682688, 5.71736, 5.57071, 5.6064, 5.139146, 5.436865, 5.325446, 5.31332, 5.851014, 5.190771, 5.638873, 5.064812, 5.329865, 5.32543, 5.76035,
   5.020666, 4.887573, 4.819573, 5.019272, 5.147835, 4.913071, 5.071944, 4.991742, 5.436894, 5.21599, 5.14081, 5.051374, 5.133633, 4.778457, 5.105024, 4.967635,
   5.107458, 4.644162, 4.937275, 4.960823, 4.997799, 5.201415, 5.105976, 5.004164, 4.971853, 4.965693, 4.803398, 5.12334, 4.717276, 4.634071, 5.284959, 4.681558,
   4.682128, 4.534067, 4.89152, 4.725434, 4.959133, 4.744315, 4.508015, 4.58467, 4.800254, 5.118219, 4.705997, 4.71501, 4.819747, 4.632301, 4.979821, 4.946003,
   4.522492, 4.681066, 4.711961, 4.277921, 4.014381, 4.634899, 4.598593, 4.488248, 4.200611, 4.487298, 4.785332, 4.080545, 4.659714, 4.902374, 4.217559, 4.61247,
   4.407733, 3.882821, 4.483617, 4.485364, 4.117143, 4.710514, 4.545189, 4.529423, 4.562331, 4.440713, 4.425584, 4.525377, 3.994363, 4.247486, 4.280871, 4.098762,
   4.244952, 4.24619, 4.135628, 4.5014, 4.144513, 4.383013, 4.286235, 3.970516, 4.307149, 4.270229, 4.163324, 4.299104, 3.987101, 4.129012, 3.907543, 4.159156,
   4.537681, 4.146925, 3.879918, 3.700576, 4.264102, 3.838604, 3.599747, 4.036342, 4.158914, 4.228378, 4.095594, 4.102624, 4.278813, 3.884765, 3.833358, 4.034701,
   4.058648, 3.881473, 3.765843, 4.139567, 3.784676, 3.79451, 3.598447, 3.651125, 3.805316, 3.837535, 4.046696, 3.700056, 3.645594, 3.676425, 4.116317, 3.81293,
   3.52578, 3.744657, 4.05391, 3.843696, 3.789237, 3.672008, 4.155045 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1021,Graph_from_VH_tagFirst_2b1c_H_mass_fy1021,Graph_from_VH_tagFirst_2b1c_H_mass_fex1021,Graph_from_VH_tagFirst_2b1c_H_mass_fey1021);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->SetMinimum(-605.5198);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->SetMaximum(5998.205);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1021);
   
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
   
   TH1D *data_mc_ratio__22 = new TH1D("data_mc_ratio__22","",1000,0,2000);
   data_mc_ratio__22->SetBinContent(43,1.28665);
   data_mc_ratio__22->SetBinContent(44,1.283137);
   data_mc_ratio__22->SetBinContent(45,1.251255);
   data_mc_ratio__22->SetBinContent(46,1.274416);
   data_mc_ratio__22->SetBinContent(47,1.248429);
   data_mc_ratio__22->SetBinContent(48,1.257493);
   data_mc_ratio__22->SetBinContent(78,1.274407);
   data_mc_ratio__22->SetBinContent(79,1.271055);
   data_mc_ratio__22->SetBinContent(80,1.240237);
   data_mc_ratio__22->SetBinContent(81,1.271143);
   data_mc_ratio__22->SetBinContent(82,1.263759);
   data_mc_ratio__22->SetBinContent(83,1.244395);
   data_mc_ratio__22->SetBinContent(1000,1.321533);
   data_mc_ratio__22->SetBinContent(1001,1.31056);
   data_mc_ratio__22->SetBinError(43,0.02183588);
   data_mc_ratio__22->SetBinError(44,0.01542147);
   data_mc_ratio__22->SetBinError(45,0.0152456);
   data_mc_ratio__22->SetBinError(46,0.01549564);
   data_mc_ratio__22->SetBinError(47,0.0155774);
   data_mc_ratio__22->SetBinError(48,0.02176845);
   data_mc_ratio__22->SetBinError(78,0.02488337);
   data_mc_ratio__22->SetBinError(79,0.01709235);
   data_mc_ratio__22->SetBinError(80,0.01704883);
   data_mc_ratio__22->SetBinError(81,0.01749685);
   data_mc_ratio__22->SetBinError(82,0.01732152);
   data_mc_ratio__22->SetBinError(83,0.02438116);
   data_mc_ratio__22->SetBinError(1000,0.2497463);
   data_mc_ratio__22->SetBinError(1001,0.01720724);
   data_mc_ratio__22->SetMinimum(0.4);
   data_mc_ratio__22->SetMaximum(1.6);
   data_mc_ratio__22->SetEntries(1969.256);
   data_mc_ratio__22->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__22->SetLineColor(ci);
   data_mc_ratio__22->SetLineWidth(2);
   data_mc_ratio__22->SetMarkerStyle(20);
   data_mc_ratio__22->SetMarkerSize(1.2);
   data_mc_ratio__22->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__22->GetXaxis()->SetRange(1,150);
   data_mc_ratio__22->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__22->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__22->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__22->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__22->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__22->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__22->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__22->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__22->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__22->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1022[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1022[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1022[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1022[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01955233, 0.009734701, 0.009734787, 0.009842631, 0.009992847, 0.01943604, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02262819, 0.0108359, 0.01093876, 0.01117076,
   0.01105149, 0.0220478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1961082 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1022,Graph_from_mc_statistical_error_fy1022,Graph_from_mc_statistical_error_fex1022,Graph_from_mc_statistical_error_fey1022);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1022 = new TH1F("Graph_Graph_from_mc_statistical_error1022","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1022->SetMinimum(0.7646701);
   Graph_Graph_from_mc_statistical_error1022->SetMaximum(1.23533);
   Graph_Graph_from_mc_statistical_error1022->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1022->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1022->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1022);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->Modified();
   H_mass_tagFirst_VR_17->cd();
   H_mass_tagFirst_VR_17->SetSelected(H_mass_tagFirst_VR_17);
}
