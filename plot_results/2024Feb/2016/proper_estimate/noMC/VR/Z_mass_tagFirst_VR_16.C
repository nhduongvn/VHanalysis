#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_VR_16/Z_mass_tagFirst_VR_16
//=========  (Wed Feb 14 12:27:15 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-62.85985,315.7258,62806.98);
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
   st->SetMaximum(56520);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",1000,0,2000);
   st_stack_27->SetMinimum(0.01);
   st_stack_27->SetMaximum(56520);
   st_stack_27->SetDirectory(nullptr);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->SetLineWidth(0);
   st_stack_27->GetXaxis()->SetRange(1,150);
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetLabelSize(0.05);
   st_stack_27->GetYaxis()->SetTitleSize(0.057);
   st_stack_27->GetYaxis()->SetTitleOffset(1.2);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,20283.02);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,21616.33);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,22600.28);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,23600.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,23964.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,16106.43);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,16010.53);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,15838.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,15649.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,15661.13);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,89.82263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,45658.88);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01247788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01068987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.04744432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01641574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.02302942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,1.097556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,3.367792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.926287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,12.94281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,19.86976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,27.89377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.50139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,44.64309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,52.82704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.09981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,67.99198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,74.38472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,79.33121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,84.13095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,88.34994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,91.19859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,93.32266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,95.52137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,96.29619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,97.7504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,97.83264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,97.9855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,97.93383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,97.55935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,97.25297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,96.93996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,96.91643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,96.29467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.00788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,95.49878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,94.85551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,94.41359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,93.91963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,93.47025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,92.55732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,91.94267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,90.60968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,89.77619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.24468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,88.41778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.4499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,86.60493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,85.86785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.20833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,84.65155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.3345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,83.75487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,83.38948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,82.61902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.22604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,81.91506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.32468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,80.94252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,80.98467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.10334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,79.50783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,78.84721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,78.71749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,78.68469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.02903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,77.72633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.21845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.09081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.2324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,75.76841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,75.44936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,74.9385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,74.54317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.06231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,73.5435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,72.96484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,72.87048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.32222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,71.48858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.38186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,70.77124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,70.43824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,69.92384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.36847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.14648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,68.55819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,67.79223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,67.4909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,67.35972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,66.95232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.41566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,65.6539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,65.56032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,64.94771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.26091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.15296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,63.57706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.21389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,62.60776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,62.33176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,61.88887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,61.43475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,60.87148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,60.91376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.1393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,60.2204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.06851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.12848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,58.70087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,58.49562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.11016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,57.71267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,57.58719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,57.22955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,56.53561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,56.68019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.03293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,55.8283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,55.51068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,54.83124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,54.6475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,54.39578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,54.28374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,53.84672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,53.45187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,53.63063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,52.87813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,52.71803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,52.36266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,51.8685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,51.97489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,51.96274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,51.42295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.37591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.03474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,50.74488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,50.61926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,49.96371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,49.72001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,49.81495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.24058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.33096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,48.96743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,48.65779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,48.6113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.06196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.18489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.14257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,47.50298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,47.65305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.33503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.03729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,46.80349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,46.8156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,46.58394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,46.41832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.25288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.05458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.46266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,45.78);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,45.60364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.34162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,44.99625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.24043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,44.71215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,44.96351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,44.80581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.29655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,44.65113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,44.44411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,43.96433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,43.91159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.38694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,43.92794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,43.54221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,43.49649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.18919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.2716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.08679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.16283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.26706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.04512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.20153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,42.68989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,42.9833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,42.54891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,42.41079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.31652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,42.5804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.20573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,41.80933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,41.96759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.01241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.39503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,41.70655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,41.47523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,41.56506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.22937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.37072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.32762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.16794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.12402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,40.97543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.0963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,40.62843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,40.53282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,40.54577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,40.83304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,40.62762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.39792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.27763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,39.91564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,39.98156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,39.70255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,39.82826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,39.71413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,39.79082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,39.62565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,39.82584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,39.71404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.43762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.45365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.38482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.09969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.26521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.13271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,38.56739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.00067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,38.54692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,38.68171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,38.54992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,38.64219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,38.62736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,38.73461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.28756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.1864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.07858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.08604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.17153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,37.91574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.1534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,37.81414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,37.61187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,37.72794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.21505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.45468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,37.53315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.22845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,37.6045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,37.55023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.12942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.32156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,36.85288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.22667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,36.98014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.0294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,36.82235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,36.71976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,36.64409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.37838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.00652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.46949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.4758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.36639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.2739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.18052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.1754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.0095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.08803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,35.84729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,35.9925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,35.75378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,35.69047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,35.71599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,35.64378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,35.57387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,35.65517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.45226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.1861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.11083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.27085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.4045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.05127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,34.92574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.15677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,34.55735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,34.77895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,34.52923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,34.82795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,34.64766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.49959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,34.56912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,34.5981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.35399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.03568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.38732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.08005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,33.82429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.05235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,33.67184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.12096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,33.98364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,33.80771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,33.70721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.48023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.45273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.3822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,33.776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.22158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.41339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.15347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,32.86484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.05146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.07739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,32.90756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,32.702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,32.87806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.04791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,32.94828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,32.79987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.42739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.44199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.58608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.37423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.06799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.44871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.29277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.17237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.28204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,31.79457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.1495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,31.8318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,31.88262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,31.78426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,31.97104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,31.75912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,31.72644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.59016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,31.83759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.54265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.30105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.33507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.48878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.16285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.13436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,30.99746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.24412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.03737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,30.86036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,30.78384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,30.92699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,30.67193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.51268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,30.54773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,30.80137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.37437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.17698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.38448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.03014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.44526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.0683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.0316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,29.85751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,29.76823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,29.78601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,29.64517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,29.81048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,29.70964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.60894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.34715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.58614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.41133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,29.73022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.31462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.4308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,29.71448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,29.656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,28.9878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,28.85041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.17807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,28.72513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.21275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,28.96629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.17674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,28.82862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.00543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,28.77374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.39952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,28.59547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.50519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.51566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.30065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.37884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.12939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.19451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.06306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.21139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,27.90435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.02753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,27.91511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,27.97364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,27.74667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,27.82675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,27.96629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,27.70074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,27.65079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.07449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,27.59199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.37093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.57324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.23142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.19226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.38659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.16171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,26.95395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.18182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,27.89773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.1096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.04399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.01872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.24455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,26.84392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,26.79891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,26.65101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,26.74889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.58169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.59939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.36164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.49902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.39691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.3986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.08147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.39496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.4545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.4058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.35663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.74879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,25.86216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.08693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.02589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.03339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.00574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,25.80291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,25.61779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.66261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.3764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.63661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.38243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.69696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,25.79551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.25718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.29703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.20048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.05439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.04562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.23576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,24.92973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,24.9791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,24.73535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.73168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,24.86405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.70233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,24.91612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,24.86007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.75116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.4906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.40068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.24406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.38689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.59057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.56712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.32273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.39143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.2711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.12456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.06331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.07012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,23.7458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,23.74781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.63231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,23.89074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.67751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.62891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,23.84904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.66783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.58442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.70956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,23.89858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.75479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.55706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,22.97548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.51664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.25092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.42182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.40435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.1983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,22.95332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.71646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,22.97062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,22.98583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.63761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.67647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.56831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.24152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.71651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.38064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.39668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.53861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.73756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.43237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.36577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.37813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.5604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.49812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.48561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,21.96678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.05165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.36636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.21289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.5777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,21.91405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.08192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,21.91269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,21.77079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.30067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.68849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,21.79894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.69314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.30037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,21.88831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.68591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,21.88261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.53573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.28049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.20089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.17739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.41733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.39122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.00863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.07711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.07893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,20.92017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,20.90202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.02714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.64595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.07828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.69098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.04083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.76023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.14441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,20.82233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.59958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.6682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.74822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.34218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.64476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.46067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.60833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.19022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.30556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.18682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.28536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.47049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.39885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,19.8438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.12014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.75925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,19.95983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.07193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.12173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,19.87728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.00161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.14867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,19.95204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.47164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.60034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,19.94343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.66546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.64524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.41848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.38025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.46561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.57474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.52336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.22083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.2808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.07824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.45301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,18.85169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.18363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.36426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.01295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.77728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,18.85636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,18.89823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.78866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.00497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.73547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.60539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.7079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.64824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.47877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.68685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.33528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.19584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.46517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.66632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.38286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.38777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.01955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.23414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.15448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.11655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.09906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.27277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.2149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.00815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,17.98926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,17.95399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.13561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,17.93861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.17156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,17.81217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.52171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.65055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.70928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.32461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.62717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.51215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.38348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,17.75367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.38599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.46762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.51681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.49715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.20042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.11551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.20853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.17876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.23765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.6607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.08125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.16861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.2493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.10473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.07268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.52634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.64095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.37727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.77233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.64416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.48801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.15835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.71855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.52984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.48959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.56016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.59551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.4561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.53738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.42811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.58717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.33303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.10144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.18535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.14416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.19521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.3687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.9067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,15.98221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.1586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.11475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.24616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.01865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.13408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.04851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,15.96258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,15.84674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.01506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.76278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.43847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.69071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.48293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.39926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.66499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,15.83289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.64235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.7121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.41484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.40524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.19666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.38033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.4979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.28299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.44654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,14.95316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.32679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.29004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.2098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,14.88709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.36281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.03832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.07648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.30937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.22612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.16349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.83235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.83498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,14.86023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.0055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.69742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.37821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.81981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.54238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.48654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.65568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.7612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.73385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.46322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.38066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.19216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.46666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.10337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.18104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.20945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.01108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.32373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.14252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,14.89525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.08077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.13649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.14486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.16921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.1531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.8879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.77927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.04964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.76524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,13.90981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,13.91928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.72427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.64952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.75643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.71306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,13.93312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.64161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.46477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.73868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.69137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.4844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.45848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.63423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.80431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.62654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.67747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.5612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.52489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.31074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.60729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,12.87153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.38882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.26588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,12.9757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.0382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.05453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.17263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.46567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.21629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.33459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.06808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.24433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.23314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.14676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.15657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.89598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.75158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.51216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.47491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,12.93749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,12.91492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.77643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.68373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.63212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,12.85165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.75793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.48374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.84074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.69013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,12.88837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.83791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.52436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.73911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.34176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.41649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.33863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.37602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.51521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.03627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.58245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.3137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.03662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.12344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.11095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.15627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.0234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.00289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.65518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.55531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.54897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.22422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.78629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.10095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.03317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,11.94779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.7741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.63454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.02176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,11.9224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.84996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.76001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.71547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.66495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.76412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.35102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.72502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.7938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.62823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.42859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.57543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.67408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.34673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.79141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.16356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.52066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.62825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.27958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.23115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.33646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.20784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.06026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.1701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.01587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.36488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.00739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,10.80645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.12521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.16978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.13753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.87129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.15917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.07125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.74253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.88075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.06899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.85543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.61959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.76111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.64903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.71652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.86027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,10.99193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.65323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.56263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,10.921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.66051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.72602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.57404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.51953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.42837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.57604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.59565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.44053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.45622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.52553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.52987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.24999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.33137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.05103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.47553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.29035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.1223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.60973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.11864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.27631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.43628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.09535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.24001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.2492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.16978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.38138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.06278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,9.963958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.90177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.1437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.7727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.08771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.11871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,9.918956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.24796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,9.996413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.63718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.792487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.864485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.494946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.66242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.09714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.815441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.822635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.88303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.732695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.57663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.706959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.669787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.76246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.85526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.580827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.465268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.294356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.559268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.226049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.31813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.604694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.595156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.130728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.109981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.576162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.381826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.348345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.078986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.131677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.146742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.668192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.218039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.195077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,8.999659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.134216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.487767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.166597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.431416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.254282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,8.945904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.18932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.390462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,8.952153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.058691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.091141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.176445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.69927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.835415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,8.935906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.149399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.761178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.852515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.674345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.711493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.896845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.698919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.65387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.398157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.359202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.431504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.565751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.599927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.517247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.843336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.591874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,8.979766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.765484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.507792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.586372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.786573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.326568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.42283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.546473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.435529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.710266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.542212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,7.84762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.346644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.617947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.119092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.329795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.505724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.880572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.380077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.376649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.660196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.490277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.263113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,135.463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(7139567);

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
   
   TH1D *VH_tagFirst_Z_mass__53 = new TH1D("VH_tagFirst_Z_mass__53","",1000,0,2000);
   VH_tagFirst_Z_mass__53->SetBinContent(26,21494);
   VH_tagFirst_Z_mass__53->SetBinContent(27,22801);
   VH_tagFirst_Z_mass__53->SetBinContent(28,24061);
   VH_tagFirst_Z_mass__53->SetBinContent(29,24999);
   VH_tagFirst_Z_mass__53->SetBinContent(30,25434);
   VH_tagFirst_Z_mass__53->SetBinContent(61,18948);
   VH_tagFirst_Z_mass__53->SetBinContent(62,18829);
   VH_tagFirst_Z_mass__53->SetBinContent(63,18491);
   VH_tagFirst_Z_mass__53->SetBinContent(64,18743);
   VH_tagFirst_Z_mass__53->SetBinContent(65,18428);
   VH_tagFirst_Z_mass__53->SetBinContent(1000,109);
   VH_tagFirst_Z_mass__53->SetBinContent(1001,60871);
   VH_tagFirst_Z_mass__53->SetEntries(3576354);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__53->SetLineColor(ci);
   VH_tagFirst_Z_mass__53->SetLineWidth(2);
   VH_tagFirst_Z_mass__53->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__53->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__53->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__53->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__53->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__53->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__53->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__53->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__53->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__53->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__53->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__53->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1053[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1053[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 20283.02, 21616.33, 22600.28, 23600.11, 23964.21, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16106.43, 16010.53, 15838.54, 15649.16, 15661.13,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 89.82263 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1053[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1053[1000] = { 0, 0, 0, 0, 0, 0, 0.01247788, 0.01068987, 0.04744432, 0.01641574, 0.02302942, 1.097556, 3.367792, 6.926287, 12.94281, 19.86976, 27.89377,
   36.50139, 44.64309, 52.82704, 60.09981, 67.99198, 74.38472, 79.33121, 84.13095, 88.34994, 91.19859, 93.32266, 95.52137, 96.29619, 97.7504, 97.83264, 97.9855,
   97.93383, 97.55935, 97.25297, 96.93996, 96.91643, 96.29467, 96.00788, 95.49878, 94.85551, 94.41359, 93.91963, 93.47025, 92.55732, 91.94267, 90.60968, 89.77619,
   89.24468, 88.41778, 87.4499, 86.60493, 85.86785, 85.20833, 84.65155, 84.3345, 83.75487, 83.38948, 82.61902, 82.22604, 81.91506, 81.32468, 80.94252, 80.98467,
   80.10334, 79.50783, 78.84721, 78.71749, 78.68469, 78.02903, 77.72633, 77.21845, 77.09081, 76.2324, 75.76841, 75.44936, 74.9385, 74.54317, 74.06231, 73.5435,
   72.96484, 72.87048, 72.32222, 71.48858, 71.38186, 70.77124, 70.43824, 69.92384, 69.36847, 69.14648, 68.55819, 67.79223, 67.4909, 67.35972, 66.95232, 66.41566,
   65.6539, 65.56032, 64.94771, 64.26091, 64.15296, 63.57706, 63.21389, 62.60776, 62.33176, 61.88887, 61.43475, 60.87148, 60.91376, 60.1393, 60.2204, 60.06851,
   59.12848, 58.70087, 58.49562, 58.11016, 57.71267, 57.58719, 57.22955, 56.53561, 56.68019, 56.03293, 55.8283, 55.51068, 54.83124, 54.6475, 54.39578, 54.28374,
   53.84672, 53.45187, 53.63063, 52.87813, 52.71803, 52.36266, 51.8685, 51.97489, 51.96274, 51.42295, 51.37591, 51.03474, 50.74488, 50.61926, 49.96371, 49.72001,
   49.81495, 49.24058, 49.33096, 48.96743, 48.65779, 48.6113, 48.06196, 48.18489, 48.14257, 47.50298, 47.65305, 47.33503, 47.03729, 46.80349, 46.8156, 46.58394,
   46.41832, 46.25288, 46.05458, 46.46266, 45.78, 45.60364, 45.34162, 44.99625, 45.24043, 44.71215, 44.96351, 44.80581, 44.29655, 44.65113, 44.44411, 43.96433,
   43.91159, 44.38694, 43.92794, 43.54221, 43.49649, 43.18919, 43.2716, 43.08679, 43.16283, 43.26706, 43.04512, 43.20153, 42.68989, 42.9833, 42.54891, 42.41079,
   42.31652, 42.5804, 42.20573, 41.80933, 41.96759, 42.01241, 41.39503, 41.70655, 41.47523, 41.56506, 41.22937, 41.37072, 41.32762, 41.16794, 41.12402, 40.97543,
   41.0963, 40.62843, 40.53282, 40.54577, 40.83304, 40.62762, 40.39792, 40.27763, 39.91564, 39.98156, 39.70255, 39.82826, 39.71413, 39.79082, 39.62565, 39.82584,
   39.71404, 39.43762, 39.45365, 39.38482, 39.09969, 39.26521, 39.13271, 38.56739, 39.00067, 38.54692, 38.68171, 38.54992, 38.64219, 38.62736, 38.73461, 38.28756,
   38.1864, 38.07858, 38.08604, 38.17153, 37.91574, 38.1534, 37.81414, 37.61187, 37.72794, 38.21505, 37.45468, 37.53315, 37.22845, 37.6045, 37.55023, 37.12942,
   37.32156, 36.85288, 37.22667, 36.98014, 37.0294, 36.82235, 36.71976, 36.64409, 36.37838, 37.00652, 36.46949, 36.4758, 36.36639, 36.2739, 36.18052, 36.1754,
   36.0095, 36.08803, 35.84729, 35.9925, 35.75378, 35.69047, 35.71599, 35.64378, 35.57387, 35.65517, 35.45226, 35.1861, 35.11083, 35.27085, 35.4045, 35.05127,
   34.92574, 35.15677, 34.55735, 34.77895, 34.52923, 34.82795, 34.64766, 34.49959, 34.56912, 34.5981, 34.35399, 34.03568, 34.38732, 34.08005, 33.82429, 34.05235,
   33.67184, 34.12096, 33.98364, 33.80771, 33.70721, 33.48023, 33.45273, 33.3822, 33.776, 33.22158, 33.41339, 33.15347, 32.86484, 33.05146, 33.07739, 32.90756,
   32.702, 32.87806, 33.04791, 32.94828, 32.79987, 32.42739, 32.44199, 32.58608, 32.37423, 32.06799, 32.44871, 32.29277, 32.17237, 32.28204, 31.79457, 32.1495,
   31.8318, 31.88262, 31.78426, 31.97104, 31.75912, 31.72644, 31.59016, 31.83759, 31.54265, 31.30105, 31.33507, 31.48878, 31.16285, 31.13436, 30.99746, 31.24412,
   31.03737, 30.86036, 30.78384, 30.92699, 30.67193, 30.51268, 30.54773, 30.80137, 30.37437, 30.17698, 30.38448, 30.03014, 30.44526, 30.0683, 30.0316, 29.85751,
   29.76823, 29.78601, 29.64517, 29.81048, 29.70964, 29.60894, 29.34715, 29.58614, 29.41133, 29.73022, 29.31462, 29.4308, 29.71448, 29.656, 28.9878, 28.85041,
   29.17807, 28.72513, 29.21275, 28.96629, 29.17674, 28.82862, 29.00543, 28.77374, 28.39952, 28.59547, 28.50519, 28.51566, 28.30065, 28.37884, 28.12939, 28.19451,
   28.06306, 28.21139, 27.90435, 28.02753, 27.91511, 27.97364, 27.74667, 27.82675, 27.96629, 27.70074, 27.65079, 28.07449, 27.59199, 27.37093, 27.57324, 27.23142,
   27.19226, 27.38659, 27.16171, 26.95395, 27.18182, 27.89773, 27.1096, 27.04399, 27.01872, 27.24455, 26.84392, 26.79891, 26.65101, 26.609, 26.74889, 26.58169,
   26.59939, 26.36164, 26.49902, 26.39691, 26.3986, 26.08147, 26.39496, 26.4545, 26.4058, 26.35663, 25.74879, 25.86216, 26.08693, 26.02589, 26.03339, 26.00574,
   25.80291, 25.61779, 25.66261, 25.3764, 25.63661, 25.38243, 25.69696, 25.79551, 25.25718, 25.29703, 25.20048, 25.05439, 25.04562, 25.356, 25.23576, 24.92973,
   24.9791, 24.73535, 24.73168, 24.86405, 24.70233, 24.91612, 24.86007, 24.75116, 24.4906, 24.40068, 24.24406, 24.38689, 24.59057, 24.56712, 24.32273, 24.39143,
   24.2711, 24.12456, 24.06331, 24.07012, 23.7458, 23.74781, 23.63231, 23.89074, 23.67751, 23.62891, 23.84904, 23.66783, 23.58442, 23.70956, 23.89858, 23.75479,
   23.55706, 22.97548, 23.51664, 23.25092, 23.42182, 23.40435, 23.1983, 22.95332, 22.71646, 22.97062, 22.98583, 22.63761, 22.67647, 22.56831, 23.24152, 22.71651,
   22.38064, 22.39668, 22.53861, 22.73756, 22.43237, 22.36577, 22.37813, 22.5604, 22.49812, 22.48561, 21.96678, 22.05165, 22.36636, 22.21289, 22.5777, 21.91405,
   22.08192, 21.91269, 21.77079, 21.30067, 21.68849, 21.79894, 21.69314, 21.30037, 21.88831, 21.68591, 21.88261, 21.53573, 21.28049, 21.20089, 21.17739, 21.41733,
   21.39122, 21.00863, 21.07711, 21.07893, 20.92017, 20.90202, 21.02714, 20.64595, 21.07828, 20.69098, 21.04083, 20.76023, 21.14441, 20.82233, 20.59958, 20.6682,
   20.74822, 20.34218, 20.64476, 20.46067, 20.60833, 20.19022, 20.30556, 20.18682, 20.28536, 20.47049, 20.39885, 19.8438, 20.12014, 19.75925, 19.95983, 20.07193,
   20.12173, 19.87728, 20.00161, 20.14867, 19.95204, 19.47164, 19.60034, 19.94343, 19.66546, 19.64524, 19.41848, 19.38025, 19.46561, 19.57474, 19.52336, 19.22083,
   19.2808, 19.07824, 19.45301, 18.85169, 19.18363, 19.36426, 19.01295, 18.77728, 18.85636, 18.89823, 18.78866, 19.00497, 18.73547, 18.60539, 18.7079, 18.64824,
   18.47877, 18.68685, 18.33528, 18.19584, 18.46517, 18.66632, 18.38286, 18.38777, 18.01955, 18.23414, 18.15448, 18.11655, 18.09906, 18.27277, 18.2149, 18.00815,
   17.98926, 17.95399, 18.13561, 17.93861, 18.17156, 17.81217, 17.52171, 17.65055, 17.70928, 17.32461, 17.62717, 17.51215, 17.38348, 17.75367, 17.38599, 17.46762,
   17.51681, 17.49715, 17.20042, 17.11551, 17.20853, 17.17876, 17.23765, 17.6607, 17.08125, 17.16861, 17.2493, 17.10473, 17.07268, 16.52634, 16.64095, 17.37727,
   16.77233, 16.64416, 16.48801, 17.15835, 16.71855, 16.52984, 16.48959, 16.56016, 16.59551, 16.4561, 16.53738, 16.42811, 16.58717, 16.33303, 16.10144, 16.18535,
   16.14416, 16.19521, 16.3687, 15.9067, 15.98221, 16.1586, 16.11475, 16.24616, 16.01865, 16.13408, 16.04851, 15.96258, 15.84674, 16.01506, 15.76278, 15.43847,
   15.69071, 15.48293, 15.39926, 15.66499, 15.83289, 15.64235, 15.7121, 15.41484, 15.40524, 15.19666, 15.38033, 15.4979, 15.289, 15.28299, 15.44654, 14.95316,
   15.32679, 15.29004, 15.2098, 14.88709, 15.36281, 15.03832, 15.07648, 15.30937, 15.22612, 15.16349, 14.83235, 14.83498, 14.86023, 15.0055, 14.69742, 14.37821,
   14.81981, 14.54238, 14.48654, 14.65568, 14.7612, 14.73385, 14.518, 14.46322, 14.38066, 14.19216, 14.46666, 14.10337, 14.18104, 14.20945, 14.01108, 14.32373,
   14.14252, 14.89525, 14.08077, 14.13649, 14.14486, 14.16921, 14.1531, 13.8879, 13.77927, 14.04964, 13.76524, 13.90981, 13.91928, 13.72427, 13.64952, 13.75643,
   13.71306, 13.93312, 13.64161, 13.46477, 13.73868, 13.69137, 13.4844, 13.45848, 13.63423, 13.80431, 13.62654, 13.67747, 13.5612, 13.52489, 13.31074, 13.60729,
   12.87153, 13.38882, 13.26588, 12.9757, 13.0382, 13.05453, 13.17263, 13.46567, 13.21629, 13.33459, 13.06808, 13.24433, 13.23314, 13.14676, 13.15657, 12.89598,
   12.75158, 12.51216, 12.47491, 12.93749, 12.91492, 12.77643, 12.68373, 12.63212, 12.85165, 12.75793, 12.48374, 12.84074, 12.69013, 12.88837, 12.83791, 12.52436,
   12.73911, 12.34176, 12.41649, 12.33863, 12.37602, 12.51521, 12.03627, 12.58245, 12.3137, 12.03662, 12.12344, 12.11095, 12.15627, 12.0234, 12.00289, 11.65518,
   11.55531, 11.54897, 12.22422, 11.78629, 12.10095, 12.03317, 11.94779, 11.7741, 11.63454, 12.02176, 11.9224, 11.84996, 11.76001, 11.71547, 11.66495, 11.76412,
   11.35102, 11.72502, 11.509, 11.7938, 11.62823, 11.42859, 11.57543, 11.67408, 11.34673, 11.79141, 11.16356, 11.52066, 11.62825, 11.27958, 11.23115, 11.33646,
   11.20784, 11.06026, 11.1701, 11.01587, 11.36488, 11.00739, 10.80645, 11.12521, 11.16978, 11.13753, 10.87129, 11.15917, 11.07125, 10.74253, 10.88075, 11.06899,
   10.85543, 10.61959, 10.76111, 10.64903, 10.71652, 10.86027, 10.99193, 10.65323, 10.56263, 10.921, 10.66051, 10.72602, 10.57404, 10.51953, 10.42837, 10.57604,
   10.59565, 10.44053, 10.45622, 10.52553, 10.52987, 10.24999, 10.33137, 10.05103, 10.47553, 10.29035, 10.1223, 10.60973, 10.11864, 10.27631, 10.43628, 10.09535,
   10.24001, 10.2492, 10.16978, 10.38138, 10.06278, 9.963958, 9.90177, 10.1437, 9.7727, 10.08771, 10.11871, 9.918956, 10.24796, 9.996413, 9.63718, 9.792487,
   9.864485, 9.494946, 9.66242, 10.09714, 9.815441, 9.822635, 9.88303, 9.732695, 9.57663, 9.706959, 9.669787, 9.76246, 9.85526, 9.580827, 9.465268, 9.294356,
   9.559268, 9.226049, 9.31813, 9.604694, 9.595156, 9.130728, 9.109981, 9.576162, 9.381826, 9.348345, 9.078986, 9.131677, 9.146742, 9.668192, 9.218039, 9.195077,
   8.999659, 9.134216, 9.487767, 9.166597, 9.431416, 9.254282, 8.945904, 9.18932, 9.390462, 8.952153, 9.058691, 9.091141, 9.176445, 8.69927, 8.835415, 8.935906,
   9.149399, 8.761178, 8.852515, 8.674345, 8.711493, 8.896845, 8.698919, 8.65387, 8.398157, 8.359202, 8.431504, 8.565751, 8.599927, 8.517247, 8.843336, 8.591874,
   8.979766, 8.765484, 8.507792, 8.586372, 8.786573, 8.326568, 8.42283, 8.546473, 8.435529, 8.710266, 8.542212, 7.84762, 8.346644, 8.617947, 8.119092, 8.329795,
   8.505724, 7.880572, 8.380077, 8.376649, 8.660196, 8.490277, 8.263113 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1053,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1053,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1053,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1053);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->SetMinimum(-2513.835);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->SetMaximum(26476.36);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1053);
   
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
   
   TH1D *data_mc_ratio__54 = new TH1D("data_mc_ratio__54","",1000,0,2000);
   data_mc_ratio__54->SetBinContent(26,1.059704);
   data_mc_ratio__54->SetBinContent(27,1.054804);
   data_mc_ratio__54->SetBinContent(28,1.064633);
   data_mc_ratio__54->SetBinContent(29,1.059275);
   data_mc_ratio__54->SetBinContent(30,1.061333);
   data_mc_ratio__54->SetBinContent(61,1.176425);
   data_mc_ratio__54->SetBinContent(62,1.176038);
   data_mc_ratio__54->SetBinContent(63,1.167468);
   data_mc_ratio__54->SetBinContent(64,1.1977);
   data_mc_ratio__54->SetBinContent(65,1.176671);
   data_mc_ratio__54->SetBinContent(1000,1.213503);
   data_mc_ratio__54->SetBinContent(1001,1.333169);
   data_mc_ratio__54->SetBinError(26,0.007228132);
   data_mc_ratio__54->SetBinError(27,0.006985458);
   data_mc_ratio__54->SetBinError(28,0.00686346);
   data_mc_ratio__54->SetBinError(29,0.006699575);
   data_mc_ratio__54->SetBinError(30,0.00665494);
   data_mc_ratio__54->SetBinError(61,0.008546385);
   data_mc_ratio__54->SetBinError(62,0.008570534);
   data_mc_ratio__54->SetBinError(63,0.008585488);
   data_mc_ratio__54->SetBinError(64,0.008748397);
   data_mc_ratio__54->SetBinError(65,0.00866794);
   data_mc_ratio__54->SetBinError(1000,0.1162325);
   data_mc_ratio__54->SetBinError(1001,0.006696488);
   data_mc_ratio__54->SetMinimum(0.4);
   data_mc_ratio__54->SetMaximum(1.6);
   data_mc_ratio__54->SetEntries(5731.032);
   data_mc_ratio__54->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__54->SetLineColor(ci);
   data_mc_ratio__54->SetLineWidth(2);
   data_mc_ratio__54->SetMarkerStyle(20);
   data_mc_ratio__54->SetMarkerSize(1.2);
   data_mc_ratio__54->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__54->GetXaxis()->SetRange(1,150);
   data_mc_ratio__54->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__54->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__54->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__54->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__54->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__54->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__54->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__54->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__54->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__54->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__54->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__54->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__54->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1054[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1054[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1054[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1054[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.004355858, 0.004218967, 0.004129271, 0.004047496, 0.004018333, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005105169, 0.005116323, 0.005134606, 0.005172323, 0.00517106,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09199366 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1054,Graph_from_mc_statistical_error_fy1054,Graph_from_mc_statistical_error_fex1054,Graph_from_mc_statistical_error_fey1054);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1054 = new TH1F("Graph_Graph_from_mc_statistical_error1054","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1054->SetMinimum(0.8896076);
   Graph_Graph_from_mc_statistical_error1054->SetMaximum(1.110392);
   Graph_Graph_from_mc_statistical_error1054->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1054->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1054);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->Modified();
   Z_mass_tagFirst_VR_16->cd();
   Z_mass_tagFirst_VR_16->SetSelected(Z_mass_tagFirst_VR_16);
}
