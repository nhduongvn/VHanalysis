#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_18/Z_mass_tagFirst_VR_18
//=========  (Mon Jan  8 11:16:16 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_VR_18 = new TCanvas("Z_mass_tagFirst_VR_18", "Z_mass_tagFirst_VR_18",0,0,600,600);
   Z_mass_tagFirst_VR_18->SetHighLightColor(2);
   Z_mass_tagFirst_VR_18->Range(0,0,1,1);
   Z_mass_tagFirst_VR_18->SetFillColor(0);
   Z_mass_tagFirst_VR_18->SetFillStyle(4000);
   Z_mass_tagFirst_VR_18->SetBorderMode(0);
   Z_mass_tagFirst_VR_18->SetBorderSize(2);
   Z_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-43.34021,315.7258,43306.87);
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
   st->SetMaximum(38971.85);
   
   TH1F *st_stack_67 = new TH1F("st_stack_67","",1000,0,2000);
   st_stack_67->SetMinimum(0.01);
   st_stack_67->SetMaximum(38971.85);
   st_stack_67->SetDirectory(nullptr);
   st_stack_67->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_67->SetLineColor(ci);
   st_stack_67->SetLineWidth(0);
   st_stack_67->GetXaxis()->SetRange(1,150);
   st_stack_67->GetXaxis()->SetLabelFont(42);
   st_stack_67->GetXaxis()->SetTitleOffset(1);
   st_stack_67->GetXaxis()->SetTitleFont(42);
   st_stack_67->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_67->GetYaxis()->SetLabelFont(42);
   st_stack_67->GetYaxis()->SetLabelSize(0.05);
   st_stack_67->GetYaxis()->SetTitleSize(0.057);
   st_stack_67->GetYaxis()->SetTitleOffset(1.2);
   st_stack_67->GetYaxis()->SetTitleFont(42);
   st_stack_67->GetZaxis()->SetLabelFont(42);
   st_stack_67->GetZaxis()->SetTitleOffset(1);
   st_stack_67->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_67);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,12298.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,13654.69);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,14964.03);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,16230.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,17537.33);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,15450.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,15311.17);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,15172.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,15007.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,14862.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,130.4007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,59851.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.476075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.696892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.084798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.42557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.8295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.99442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,31.54861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,38.43984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,45.16142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,51.31063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,57.80386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,63.72041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,68.64508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,73.98336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,77.95553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,81.60757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,84.99007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,88.3462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,90.2241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,92.1927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,93.78809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,94.94671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,95.78581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,96.52532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,96.71597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.18382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,97.31011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,97.48805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,97.32944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,97.19707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,96.7999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,96.57968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,95.58398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,94.83295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.97797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,93.53538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,92.40622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,91.27937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,90.35682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,89.133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,88.13744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.42667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,86.49623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,86.00248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,85.62278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.44061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.12099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.50774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.92458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.54872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,82.17476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.7252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.32918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.71435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.5596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.59244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.09691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,78.81217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.11164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.30539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.67426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.10351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.60222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.22117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.30818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.53332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.20877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.95816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.67886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,74.61119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.74739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,73.46484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,73.07556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,72.67466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,72.36876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.87028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,71.3239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.95079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,70.83205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,70.08992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,70.05034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,69.84221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,69.23121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,68.68402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,68.11645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,67.71398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,67.83964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,67.29438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.84401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,66.31297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,66.16794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,65.7957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,65.63445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,65.12092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,64.73654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,64.14485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,63.81049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,63.29624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,63.21326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,63.06739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,62.06701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.89924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,61.60415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,61.26077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,61.27855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,60.60249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,60.43066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,60.14153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.71185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,59.66041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.8599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,58.77908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,58.2068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,57.90144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.89973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,57.60993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,57.05023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,56.83457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,56.40954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,56.70722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,55.70818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,55.70463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,55.04468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,55.24044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,55.10222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,54.64017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,54.76509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,53.9158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,53.99656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,53.12007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,53.35633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,53.37674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,52.90711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,52.7008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,52.24784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,52.08457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.78327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,51.5302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,51.39934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,51.2469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,50.80437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,50.47974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,50.91731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,50.33632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,50.20038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,50.00072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,49.65489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,49.33674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,49.57704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,49.01451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,49.45103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,48.67998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,48.7552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,48.39023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,48.60057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,47.9998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,47.79095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,47.91719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,47.75778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,47.18616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,47.43109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,46.60966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,47.11265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,46.68821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,46.77722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,46.47347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,46.17416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,46.67548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,45.96133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,46.16344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,45.93331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,45.85563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,45.31466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,45.33214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,45.1329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,45.24248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,45.11315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,45.07142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,44.47864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,44.94159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,44.78485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,44.47418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,44.36717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,44.40956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,44.17478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,44.15684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,43.70371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,43.96804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,43.68558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,43.75353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,43.83042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,43.81234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,43.48334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,43.10361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,43.17936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,43.35561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.88709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,43.19541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,42.75989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,42.67411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,42.43906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,42.49503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,42.07345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,42.32456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,42.31754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,41.90835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,41.97211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,42.08286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,41.96503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,41.53806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,41.42824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,42.09463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,41.35886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,41.75209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,41.46408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,41.90362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,41.29415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,41.08738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.82865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,41.39237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,40.93524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,40.8141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,41.26536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,40.73151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,40.55851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,40.52187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.71206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,40.56828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,40.9183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,40.3676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,40.27181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,40.20289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,40.22259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,39.88633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,39.83912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.95579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.65724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,39.51463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,39.70216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.59225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.56723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.78688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,39.65224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,39.54971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,39.15459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,39.16218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,39.20767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.74522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,39.38157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,39.16471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.60695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,39.02284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,38.85243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,38.50163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.53762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,38.53762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.70174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,38.57872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,38.23059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,38.35473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,38.13202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,37.76666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,37.90539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,38.10084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.85048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,37.9289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,38.36764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,38.16836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.91845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,38.14241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,37.84525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,38.1943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,37.28103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,37.49823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,37.57738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,37.55893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,37.13731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,37.61689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,37.39244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,37.25978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,37.23053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,37.32351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,37.23585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,36.80783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,37.15597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,37.33412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,37.06256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,36.85086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,37.16929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,36.52151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,36.66495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.80245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,36.5432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,36.42376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,36.65144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,36.64874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,36.42376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,36.32574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.49981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,36.24113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,36.01085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.93376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,36.18643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,36.07679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,36.11246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,35.73754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,35.69318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.72646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,36.17275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,35.40903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,35.19582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.91171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.76248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,35.39784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,35.2352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.17894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,35.30539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,35.00962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,35.64042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,35.35305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,35.27733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.89628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.86505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.92181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.95016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.86789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.58269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.61131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.78257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.50241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,34.45645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.49093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,34.39316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,34.49954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.85937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.55404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.89426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,34.34994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,34.34129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.5225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,34.14752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,34.01094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.94098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.95265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.92347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.62732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.72437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.74785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.78305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.68323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,33.38494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,33.13482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,33.42052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.67441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,33.38791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,33.39977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,33.42349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,33.21542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,33.08696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,33.05103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.90688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.97603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.94298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.90387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.70159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.88882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.72278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.99404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.77117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.8044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,33.03004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,32.39733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.65613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.6531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,32.29936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,32.1056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,32.03767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.53155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,32.58934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.90136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.90136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,32.04694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.92309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,32.00365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.92619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.82055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.71767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.58312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.54861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,31.47947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.72079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,31.3439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,31.22677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,31.35654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,31.13466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.5172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,31.20139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.90799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.79243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,31.30912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.76669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.05185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.7699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,31.28064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,31.10602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.73448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.81172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,30.7699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.63766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.40077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,30.35513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.71836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,30.28653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.93791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,30.27672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,30.31595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,30.33554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.78203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,30.10615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.97097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.71878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.72211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,30.05017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.89488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.63535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,29.49802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.53828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.58518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.57513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,29.15695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,29.31953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,29.29926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,29.04805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,29.16034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,29.68877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,29.42743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.74646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,29.21463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,29.31953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.9319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,29.2925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.98662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.68438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.9182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.87022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,28.57021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,28.40334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,28.44863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.67056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,28.25301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,28.3475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,28.01363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,28.16876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,28.05249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,28.18633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.85053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,28.48342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,28.16876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.6256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.7258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.81139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,28.04543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.76506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.66501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,27.61484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,27.48543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,27.22476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,27.43494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.66143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.61126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,27.17379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,27.33005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.92114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.05325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,27.2284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,26.96157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,27.00195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.88432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,27.22476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,27.03494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.87696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,27.03494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.75878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,27.09349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.69579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,26.44981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,26.55817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.80316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,26.56563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,26.29961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,26.50218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,26.67723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.87824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,26.15991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.8591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,26.38233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.95085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.92795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.8591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,26.31843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,26.2053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,26.28831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,26.01184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.52373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.80159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,25.61282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,25.44212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,25.65532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,25.39146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,25.11695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.95873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.92697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.91902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,25.35633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,25.37195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,25.05774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.99838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.91902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,25.16816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.91505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.88721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.66335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.48603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.89118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.63121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.74353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.75154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.71951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,24.60305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,24.28704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,24.17669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,24.12338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,24.44555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,24.17259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,24.69546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,24.23806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,24.31964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,24.47389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,24.13569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,24.11927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.97513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.85503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.70928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.61301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.70928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,23.72181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,23.51635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.84673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,23.45309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.84257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.84673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,23.61721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.52898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,23.06562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,23.12137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,23.59623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,23.52056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,23.07421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,23.27932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.86293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.97097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,23.36001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,23.10423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.79786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,22.71081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.79352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,22.48732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.73261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.89323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.64093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.95372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.6759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,22.55328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.57084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.57084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,22.64093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,22.12323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,22.59277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,22.05598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.44323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,22.22595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,22.07393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.89826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.71204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.91634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.77581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.66181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,22.17242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.59771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.99303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.92086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.87563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.78945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,21.27896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,21.06848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.76068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.7849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.77126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.91634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,21.14824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,21.15292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,21.07788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.6252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.58853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,21.28361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,21.29756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,21.12012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,21.13418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,21.14824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.77499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,21.26965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.77499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,21.2137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.94117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.60747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.67943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.77976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.92225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.66506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,20.27315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,20.51112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,20.52078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.83361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.73682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.97789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,20.48213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,20.27315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,20.31219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,20.29756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.96302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,20.35603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,20.04718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,20.06199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,20.63628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.48094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,19.48094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,20.23403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.78362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,20.10637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.82362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.9382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.79863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.59247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.8785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.62782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,19.52157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,19.35855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,19.55705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,19.32783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.35855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,19.43004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.30732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,19.13212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,19.39433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.9762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,19.09067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.9187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,19.11141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.92393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.67104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.56999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,19.14765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.85578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.77155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,19.02311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,19.02831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.73458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.6445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.73458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,18.32302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.72401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,18.3716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,18.42543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,18.0123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.90823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.58598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.38777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.69754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.73987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.4791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,18.2309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,18.3068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,18.30139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,18.05623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,18.22547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.56999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,18.03428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,18.19828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,18.25262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.85214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,18.2309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.49915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.70172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.89093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.64007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.82438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.73526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.79101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,17.42542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.25981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.54437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,17.29421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,17.33996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.7185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.41405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,17.44246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.37419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,17.48216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,17.49349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,17.15045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.80629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,17.16199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.90618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,17.04619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,17.07521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,17.0926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,16.99964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.93544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,17.28275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,16.99964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.95882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,17.25981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,17.10419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,17.06941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.91203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.70582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.56891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.89446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.75317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,16.37047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,16.22463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.51502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.61665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.64048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,16.08362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.4429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,16.41879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.46096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.88535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,16.1696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.99099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,16.2063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.98479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.43085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.76017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.77901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,16.04046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.89782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,16.00956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.9662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.9724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,16.06514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.77274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.91027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.99718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.66563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.94137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,16.13894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.86664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,16.03428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.65298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.90405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.51955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.79783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.30751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,15.13836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.51955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,15.23618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,15.4556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.55779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,15.17104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,15.26864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,15.11217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,15.42353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,15.21666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,14.95406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,15.17104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,14.99375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,15.26215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,15.20364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,14.9673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.74733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.90099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,15.33337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.36634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.90099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.55128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.65301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.50355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.80765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.69351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.66652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,14.24171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.89434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.83437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.49672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.42825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.68002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,14.28337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.44882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.29723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,14.09492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,14.26256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.62595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.40764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.37323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,14.25561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,14.05975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,14.03154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,14.18597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,14.15102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.76791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,14.07383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.93948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,14.27644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.95369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,13.84681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.8325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.94659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,14.318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.85397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.60146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,13.63056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.93948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.86825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.4918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.49914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,13.26976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.91815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,13.05912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.44769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.75352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.49914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.64508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,14.0386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,13.15733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.58689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.71747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,13.36643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.52845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.46976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,13.37384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.26976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.90655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.96779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,13.13473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,13.2249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.47711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.49914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.80641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.90655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,13.33676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,13.13473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.82187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,13.29213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.75992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,13.2249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.81414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.63513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.44559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.90655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.68207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.51701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.48532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.68207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,13.01353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.84502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.40574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.93721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.52492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.77544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.68988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.56439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,12.30152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.53282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.65862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.68988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,12.26928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.62729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.42967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,12.33368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.44559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.61411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.61159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,12.27735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.79182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,12.38177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,12.0822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.54861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,12.28541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,12.05758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,12.04937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.83374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.74975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.53282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.81699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.99995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,12.074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,12.23695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.90882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.42497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.71599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,12.0822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,12.16389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.96689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,12.02468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.88384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.46823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.81699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,12.074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.41629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.63115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.45094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.96689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.61411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.45959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,11.12634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.57995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.9005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.40762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.48548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,11.11743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,11.33795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.56283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,11.25026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.51132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.94687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,11.20616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,11.24146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.46823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.41629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,11.10852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,11.26785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,11.14412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.88335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.94687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,11.15301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,11.32047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,11.18847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.65343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.72754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,11.36412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.99201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,11.08174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.91062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.54129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.92876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,11.0549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.89245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.29412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.38034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.67201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.81947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.78279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.54129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.85602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.7736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.55068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.81947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.71831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.58816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.76441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.53189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.63482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.48476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,11.02799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.7552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.25556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.56006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,10.29412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.84689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.30373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.55068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.35168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.43743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,10.09006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.981509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.851679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.46586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,10.00133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.41843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,10.2459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.33253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.851679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,10.22655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.65343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,163.2085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(6886266);

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
   
   TH1D *VH_tagFirst_Z_mass__133 = new TH1D("VH_tagFirst_Z_mass__133","",1000,0,2000);
   VH_tagFirst_Z_mass__133->SetBinContent(26,12234);
   VH_tagFirst_Z_mass__133->SetBinContent(27,13606);
   VH_tagFirst_Z_mass__133->SetBinContent(28,14815);
   VH_tagFirst_Z_mass__133->SetBinContent(29,16162);
   VH_tagFirst_Z_mass__133->SetBinContent(30,17309);
   VH_tagFirst_Z_mass__133->SetBinContent(61,15493);
   VH_tagFirst_Z_mass__133->SetBinContent(62,15325);
   VH_tagFirst_Z_mass__133->SetBinContent(63,15317);
   VH_tagFirst_Z_mass__133->SetBinContent(64,15178);
   VH_tagFirst_Z_mass__133->SetBinContent(65,15113);
   VH_tagFirst_Z_mass__133->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__133->SetBinContent(1001,65888);
   VH_tagFirst_Z_mass__133->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__133->SetLineColor(ci);
   VH_tagFirst_Z_mass__133->SetLineWidth(2);
   VH_tagFirst_Z_mass__133->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__133->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__133->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__133->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__133->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__133->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__133->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__133->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__133->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__133->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__133->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__133->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1133[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1133[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 12298.61, 13654.69, 14964.03, 16230.21, 17537.33, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15450.92, 15311.17, 15172.76, 15007.2, 14862.12,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 130.4007 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1133[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1133[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.476075, 3.696892, 8.084798, 13.42557, 18.8295,
   24.99442, 31.54861, 38.43984, 45.16142, 51.31063, 57.80386, 63.72041, 68.64508, 73.98336, 77.95553, 81.60757, 84.99007, 88.3462, 90.2241, 92.1927, 93.78809,
   94.94671, 95.78581, 96.52532, 96.71597, 97.18382, 97.31011, 97.48805, 97.32944, 97.19707, 96.7999, 96.57968, 95.58398, 94.83295, 93.97797, 93.53538, 92.40622,
   91.27937, 90.35682, 89.133, 88.13744, 87.42667, 86.49623, 86.00248, 85.62278, 84.44061, 84.12099, 83.50774, 82.92458, 82.54872, 82.17476, 81.7252, 81.32918,
   80.71435, 80.5596, 79.59244, 79.09691, 78.81217, 78.11164, 78.30539, 77.67426, 77.10351, 76.60222, 76.22117, 76.30818, 75.53332, 75.20877, 74.95816, 74.67886,
   74.61119, 73.74739, 73.46484, 73.07556, 72.67466, 72.36876, 71.87028, 71.3239, 70.95079, 70.83205, 70.08992, 70.05034, 69.84221, 69.23121, 68.68402, 68.11645,
   67.71398, 67.83964, 67.29438, 66.84401, 66.31297, 66.16794, 65.7957, 65.63445, 65.12092, 64.73654, 64.14485, 63.81049, 63.29624, 63.21326, 63.06739, 62.06701,
   61.89924, 61.60415, 61.26077, 61.27855, 60.60249, 60.43066, 60.14153, 59.71185, 59.66041, 58.8599, 58.77908, 58.2068, 57.90144, 57.89973, 57.60993, 57.05023,
   56.83457, 56.40954, 56.70722, 55.70818, 55.70463, 55.04468, 55.24044, 55.10222, 54.64017, 54.76509, 53.9158, 53.99656, 53.12007, 53.35633, 53.37674, 52.90711,
   52.7008, 52.24784, 52.08457, 51.78327, 51.5302, 51.39934, 51.2469, 50.80437, 50.47974, 50.91731, 50.33632, 50.20038, 50.00072, 49.65489, 49.33674, 49.57704,
   49.01451, 49.45103, 48.67998, 48.7552, 48.39023, 48.60057, 47.9998, 47.79095, 47.91719, 47.75778, 47.18616, 47.43109, 46.60966, 47.11265, 46.68821, 46.77722,
   46.47347, 46.17416, 46.67548, 45.96133, 46.16344, 45.93331, 45.85563, 45.31466, 45.33214, 45.1329, 45.24248, 45.11315, 45.07142, 44.47864, 44.94159, 44.78485,
   44.47418, 44.36717, 44.40956, 44.17478, 44.15684, 43.70371, 43.96804, 43.68558, 43.75353, 43.83042, 43.81234, 43.48334, 43.10361, 43.17936, 43.35561, 42.88709,
   43.19541, 42.75989, 42.67411, 42.43906, 42.49503, 42.07345, 42.32456, 42.31754, 41.90835, 41.97211, 42.08286, 41.96503, 41.53806, 41.42824, 42.09463, 41.35886,
   41.75209, 41.46408, 41.90362, 41.29415, 41.08738, 40.82865, 41.39237, 40.93524, 40.8141, 41.26536, 40.73151, 40.55851, 40.52187, 40.71206, 40.56828, 40.9183,
   40.3676, 40.27181, 40.20289, 40.22259, 39.88633, 39.83912, 39.95579, 39.65724, 39.51463, 39.70216, 39.59225, 39.56723, 39.78688, 39.65224, 39.54971, 39.15459,
   39.16218, 39.20767, 38.74522, 39.38157, 39.16471, 38.60695, 39.02284, 38.85243, 38.50163, 38.53762, 38.53762, 38.70174, 38.57872, 38.23059, 38.35473, 38.13202,
   37.76666, 37.90539, 38.10084, 37.85048, 37.9289, 38.36764, 38.16836, 37.91845, 38.14241, 37.84525, 38.1943, 37.28103, 37.49823, 37.57738, 37.55893, 37.13731,
   37.61689, 37.39244, 37.25978, 37.23053, 37.32351, 37.23585, 36.80783, 37.15597, 37.33412, 37.06256, 36.85086, 37.16929, 36.52151, 36.66495, 36.80245, 36.5432,
   36.42376, 36.65144, 36.64874, 36.42376, 36.32574, 36.49981, 36.24113, 36.01085, 35.93376, 36.18643, 36.07679, 36.11246, 35.73754, 35.69318, 35.72646, 36.17275,
   35.40903, 35.19582, 35.91171, 35.76248, 35.39784, 35.2352, 35.17894, 35.30539, 35.00962, 35.64042, 35.35305, 35.27733, 34.89628, 34.86505, 34.92181, 34.95016,
   34.86789, 34.58269, 34.61131, 34.78257, 34.50241, 34.45645, 34.49093, 34.39316, 34.49954, 34.85937, 34.55404, 33.89426, 34.34994, 34.34129, 34.5225, 34.14752,
   34.01094, 33.94098, 33.95265, 33.92347, 33.62732, 33.72437, 33.74785, 33.78305, 33.68323, 33.38494, 33.13482, 33.42052, 33.67441, 33.38791, 33.39977, 33.42349,
   33.21542, 33.08696, 33.05103, 32.90688, 32.97603, 32.94298, 32.90387, 32.70159, 32.88882, 32.72278, 32.99404, 32.77117, 32.8044, 33.03004, 32.39733, 32.65613,
   32.6531, 32.29936, 32.1056, 32.03767, 32.53155, 32.58934, 31.90136, 31.90136, 32.04694, 31.92309, 32.00365, 31.92619, 31.82055, 31.71767, 31.58312, 31.54861,
   31.47947, 31.72079, 31.3439, 31.22677, 31.35654, 31.13466, 31.5172, 31.20139, 30.90799, 30.79243, 31.30912, 30.76669, 31.05185, 30.7699, 31.28064, 31.10602,
   30.73448, 30.81172, 30.7699, 30.63766, 30.40077, 30.35513, 30.71836, 30.28653, 29.93791, 30.27672, 30.31595, 30.33554, 29.78203, 30.10615, 29.97097, 29.71878,
   29.72211, 30.05017, 29.89488, 29.63535, 29.49802, 29.53828, 29.58518, 29.57513, 29.15695, 29.31953, 29.29926, 29.04805, 29.16034, 29.68877, 29.42743, 28.74646,
   29.21463, 29.31953, 28.9319, 29.2925, 28.98662, 28.68438, 28.9182, 28.87022, 28.57021, 28.40334, 28.44863, 28.67056, 28.25301, 28.3475, 28.01363, 28.16876,
   28.05249, 28.18633, 27.85053, 28.48342, 28.16876, 27.6256, 27.7258, 27.81139, 28.04543, 27.76506, 27.66501, 27.61484, 27.48543, 27.22476, 27.43494, 27.66143,
   27.61126, 27.17379, 27.33005, 26.92114, 27.05325, 27.2284, 26.96157, 27.00195, 26.88432, 27.22476, 27.03494, 26.87696, 27.03494, 26.75878, 27.09349, 26.69579,
   26.44981, 26.55817, 26.80316, 26.56563, 26.29961, 26.50218, 26.67723, 25.87824, 26.15991, 25.8591, 26.38233, 25.95085, 25.92795, 25.8591, 26.31843, 26.2053,
   26.28831, 26.01184, 25.52373, 25.80159, 25.61282, 25.44212, 25.65532, 25.39146, 25.11695, 24.95873, 24.92697, 24.91902, 25.35633, 25.37195, 25.05774, 24.99838,
   24.91902, 25.16816, 24.91505, 24.88721, 24.66335, 24.48603, 24.89118, 24.63121, 24.74353, 24.75154, 24.71951, 24.60305, 24.28704, 24.17669, 24.12338, 24.44555,
   24.17259, 24.69546, 24.23806, 24.31964, 24.47389, 24.13569, 24.11927, 23.97513, 23.85503, 23.70928, 23.61301, 23.70928, 23.72181, 23.51635, 23.84673, 23.45309,
   23.84257, 23.84673, 23.61721, 23.52898, 23.06562, 23.12137, 23.59623, 23.52056, 23.07421, 23.27932, 22.86293, 22.97097, 23.36001, 23.10423, 22.79786, 22.71081,
   22.79352, 22.48732, 22.73261, 22.89323, 22.64093, 22.95372, 22.6759, 22.55328, 22.57084, 22.57084, 22.64093, 22.12323, 22.59277, 22.05598, 22.44323, 22.22595,
   22.07393, 21.89826, 21.71204, 21.91634, 21.77581, 21.66181, 22.17242, 21.59771, 21.99303, 21.92086, 21.87563, 21.78945, 21.27896, 21.06848, 20.76068, 21.7849,
   21.77126, 21.91634, 21.14824, 21.15292, 21.07788, 21.6252, 21.58853, 21.28361, 21.29756, 21.12012, 21.13418, 21.14824, 20.77499, 21.26965, 20.77499, 21.2137,
   20.94117, 20.60747, 20.67943, 20.77976, 20.92225, 20.66506, 20.27315, 20.51112, 20.52078, 19.83361, 20.73682, 19.97789, 20.48213, 20.27315, 20.31219, 20.29756,
   19.96302, 20.35603, 20.04718, 20.06199, 20.63628, 19.48094, 19.48094, 20.23403, 19.78362, 20.10637, 19.82362, 19.9382, 19.79863, 19.59247, 19.8785, 19.62782,
   19.52157, 19.35855, 19.55705, 19.32783, 19.35855, 19.43004, 19.30732, 19.13212, 19.39433, 18.9762, 19.09067, 18.9187, 19.11141, 18.92393, 18.67104, 18.56999,
   19.14765, 18.85578, 18.77155, 19.02311, 19.02831, 18.73458, 18.6445, 18.73458, 18.32302, 18.72401, 18.3716, 18.42543, 18.0123, 18.90823, 18.58598, 18.38777,
   18.69754, 18.73987, 18.4791, 18.2309, 18.3068, 18.30139, 18.05623, 18.22547, 18.56999, 18.03428, 18.19828, 18.25262, 17.85214, 18.2309, 17.49915, 17.70172,
   17.89093, 17.902, 17.64007, 17.82438, 17.73526, 17.79101, 17.42542, 17.25981, 17.54437, 17.29421, 17.33996, 17.7185, 17.41405, 17.44246, 17.37419, 17.48216,
   17.49349, 17.15045, 16.80629, 17.16199, 16.90618, 17.04619, 17.07521, 17.0926, 16.99964, 16.93544, 17.28275, 16.99964, 16.95882, 17.25981, 17.10419, 17.06941,
   16.91203, 16.70582, 16.56891, 16.89446, 16.75317, 16.37047, 16.22463, 16.51502, 16.61665, 16.64048, 16.08362, 16.4429, 16.41879, 16.46096, 15.88535, 16.1696,
   15.99099, 16.2063, 15.98479, 16.43085, 15.76017, 15.77901, 16.04046, 15.89782, 16.00956, 15.9662, 15.9724, 16.06514, 15.77274, 15.91027, 15.99718, 15.66563,
   15.94137, 16.13894, 15.494, 15.86664, 16.03428, 15.65298, 15.90405, 15.51955, 15.79783, 15.30751, 15.13836, 15.51955, 15.23618, 15.4556, 15.55779, 15.17104,
   15.26864, 15.11217, 15.42353, 15.21666, 14.95406, 15.17104, 14.99375, 15.26215, 15.20364, 14.9673, 14.74733, 14.90099, 15.33337, 14.36634, 14.90099, 14.55128,
   14.65301, 14.50355, 14.80765, 14.69351, 14.66652, 14.24171, 14.89434, 14.83437, 14.49672, 14.42825, 14.68002, 14.28337, 14.44882, 14.29723, 14.09492, 14.26256,
   14.62595, 14.40764, 14.37323, 14.25561, 14.05975, 14.03154, 14.18597, 14.15102, 13.76791, 14.07383, 13.93948, 14.27644, 13.95369, 13.84681, 13.8325, 13.94659,
   14.318, 13.85397, 13.60146, 13.63056, 13.93948, 13.86825, 13.4918, 13.49914, 13.26976, 13.91815, 13.05912, 13.44769, 13.75352, 13.49914, 13.64508, 14.0386,
   13.15733, 13.58689, 13.71747, 13.36643, 13.52845, 13.46976, 13.37384, 13.26976, 12.90655, 12.96779, 13.13473, 13.2249, 13.47711, 13.49914, 12.80641, 12.90655,
   13.33676, 13.13473, 12.82187, 13.29213, 12.75992, 13.2249, 12.81414, 12.63513, 12.44559, 12.90655, 12.68207, 12.51701, 12.48532, 12.68207, 13.01353, 12.84502,
   12.40574, 12.93721, 12.52492, 12.77544, 12.68988, 12.56439, 12.30152, 12.53282, 12.65862, 12.68988, 12.26928, 12.62729, 12.42967, 12.33368, 12.44559, 11.61411,
   12.61159, 12.27735, 11.79182, 12.38177, 12.0822, 12.54861, 12.28541, 12.05758, 12.04937, 11.83374, 11.74975, 12.53282, 11.81699, 11.99995, 12.074, 12.23695,
   11.90882, 11.42497, 11.71599, 12.0822, 12.16389, 11.96689, 12.02468, 11.88384, 11.46823, 11.81699, 12.074, 11.41629, 11.63115, 11.45094, 11.96689, 11.61411,
   11.45959, 11.12634, 11.57995, 11.9005, 11.40762, 11.48548, 11.11743, 11.33795, 11.56283, 11.25026, 11.51132, 10.94687, 11.20616, 11.24146, 11.46823, 11.41629,
   11.10852, 11.26785, 11.14412, 10.88335, 10.94687, 11.15301, 11.32047, 11.18847, 10.65343, 10.72754, 11.36412, 10.99201, 11.08174, 10.91062, 10.54129, 10.92876,
   11.0549, 10.89245, 10.29412, 10.38034, 10.67201, 10.81947, 10.78279, 10.54129, 10.85602, 10.7736, 10.55068, 10.81947, 10.71831, 10.58816, 10.76441, 10.53189,
   10.63482, 10.48476, 11.02799, 10.7552, 10.25556, 10.56006, 10.29412, 10.84689, 10.30373, 10.55068, 10.35168, 10.43743, 10.09006, 9.981509, 9.851679, 10.46586,
   10.00133, 10.41843, 10.2459, 10.33253, 9.851679, 10.22655, 10.65343 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1133,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1133,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1133,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1133);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->SetMinimum(-1869.805);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->SetMaximum(19398);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1133);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__134 = new TH1D("data_mc_ratio__134","",1000,0,2000);
   data_mc_ratio__134->SetBinContent(26,0.9947467);
   data_mc_ratio__134->SetBinContent(27,0.9964345);
   data_mc_ratio__134->SetBinContent(28,0.9900406);
   data_mc_ratio__134->SetBinContent(29,0.9957973);
   data_mc_ratio__134->SetBinContent(30,0.9869802);
   data_mc_ratio__134->SetBinContent(61,1.002723);
   data_mc_ratio__134->SetBinContent(62,1.000903);
   data_mc_ratio__134->SetBinContent(63,1.009506);
   data_mc_ratio__134->SetBinContent(64,1.011381);
   data_mc_ratio__134->SetBinContent(65,1.016881);
   data_mc_ratio__134->SetBinContent(1000,1.088951);
   data_mc_ratio__134->SetBinContent(1001,1.100863);
   data_mc_ratio__134->SetBinError(26,0.008993491);
   data_mc_ratio__134->SetBinError(27,0.008542471);
   data_mc_ratio__134->SetBinError(28,0.008133963);
   data_mc_ratio__134->SetBinError(29,0.007832915);
   data_mc_ratio__134->SetBinError(30,0.007501921);
   data_mc_ratio__134->SetBinError(61,0.008055887);
   data_mc_ratio__134->SetBinError(62,0.008085218);
   data_mc_ratio__134->SetBinError(63,0.008156844);
   data_mc_ratio__134->SetBinError(64,0.008209326);
   data_mc_ratio__134->SetBinError(65,0.008271699);
   data_mc_ratio__134->SetBinError(1000,0.09138278);
   data_mc_ratio__134->SetBinError(1001,0.005234978);
   data_mc_ratio__134->SetMinimum(0.4);
   data_mc_ratio__134->SetMaximum(1.6);
   data_mc_ratio__134->SetEntries(7141.824);
   data_mc_ratio__134->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__134->SetLineColor(ci);
   data_mc_ratio__134->SetLineWidth(2);
   data_mc_ratio__134->SetMarkerStyle(20);
   data_mc_ratio__134->SetMarkerSize(1.2);
   data_mc_ratio__134->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__134->GetXaxis()->SetRange(1,150);
   data_mc_ratio__134->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__134->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__134->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__134->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__134->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__134->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__134->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1134[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1134[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1134[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1134[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.006015589, 0.005709068, 0.005453581, 0.005236535, 0.005037608, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005366967, 0.005391404, 0.005415939, 0.005445731, 0.005472248,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08169767 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1134,Graph_from_mc_statistical_error_fy1134,Graph_from_mc_statistical_error_fex1134,Graph_from_mc_statistical_error_fey1134);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1134 = new TH1F("Graph_Graph_from_mc_statistical_error1134","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1134->SetMinimum(0.9019628);
   Graph_Graph_from_mc_statistical_error1134->SetMaximum(1.098037);
   Graph_Graph_from_mc_statistical_error1134->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1134->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1134);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->SetSelected(Z_mass_tagFirst_VR_18);
}
