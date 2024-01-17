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
   topPad->Range(-45.96762,-43.34611,315.7258,43312.76);
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
   st->SetMaximum(38977.15);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",1000,0,2000);
   st_stack_59->SetMinimum(0.01);
   st_stack_59->SetMaximum(38977.15);
   st_stack_59->SetDirectory(nullptr);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->SetLineWidth(0);
   st_stack_59->GetXaxis()->SetRange(1,150);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetLabelSize(0.05);
   st_stack_59->GetYaxis()->SetTitleSize(0.057);
   st_stack_59->GetYaxis()->SetTitleOffset(1.2);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(26,12300.28);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(27,13656.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(28,14966.07);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(29,16232.42);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(30,17539.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(61,15453.02);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(62,15313.26);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(63,15174.83);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(64,15009.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(65,14864.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,130.4184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,59859.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.476276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.697395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.085898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.4274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.83206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.99782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,31.5529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,38.44508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,45.16756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,51.31762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,57.81173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,63.72908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,68.65442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,73.99343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,77.96614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,81.61867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,85.00163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,88.35822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,90.23638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,92.20524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,93.80085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,94.95963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,95.79884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,96.53845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,96.72913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.19705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,97.32335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,97.50131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,97.34269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,97.2103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,96.81307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,96.59282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,95.59699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,94.84586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.99076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,93.54811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,92.4188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,91.29179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,90.36911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,89.14513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,88.14944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.43857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,86.508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,86.01419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,85.63444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.45211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.13244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.5191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.93587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.55996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,82.18594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.73632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.34025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.72533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.57056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.60327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.10767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,78.8229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.12227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.31604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.68484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.61265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.23155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.31856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.5436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.21901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.96836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.68902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,74.62135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.75743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,73.47483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,73.0855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,72.68455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,72.37861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.88006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,71.33361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.96045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,70.84169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,70.09946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,70.05988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,69.85171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,69.24063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,68.69337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,68.12572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,67.72319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,67.84887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,67.30354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.85311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,66.32199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,66.17695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,65.80466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,65.64338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,65.12978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,64.74535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,64.15358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,63.81917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,63.30486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,63.22187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,63.07597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,62.07546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.90767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,61.61253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,61.2691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,61.28689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,60.61074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,60.43888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,60.14972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.71997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,59.66853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.86791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,58.78708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,58.21472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,57.90932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.90761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,57.61777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,57.058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,56.8423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,56.41722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,56.71494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,55.71576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,55.71221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,55.05217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,55.24796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,55.10972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,54.64761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,54.77254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,53.92314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,54.00391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,53.1273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,53.36359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,53.384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,52.91431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,52.70797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,52.25495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,52.09166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.79032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,51.53721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,51.40634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,51.25387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,50.81128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,50.48661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,50.92424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,50.34317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,50.20721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,50.00753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,49.66164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,49.34346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,49.58379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,49.02118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,49.45776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,48.68661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,48.76183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,48.39681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,48.60719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,48.00633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,47.79746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,47.92372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,47.76428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,47.19259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,47.43755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,46.616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,47.11906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,46.69456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,46.78358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,46.4798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,46.18045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,46.68183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,45.96759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,46.16972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,45.93956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,45.86187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,45.32083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,45.33831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,45.13904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,45.24864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,45.11929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,45.07755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,44.48469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,44.9477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,44.79095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,44.48024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,44.3732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,44.4156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,44.18079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,44.16285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,43.70966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,43.97402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,43.69152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,43.75949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,43.83639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,43.81831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,43.48926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,43.10947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,43.18524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,43.36151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.89292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,43.20129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,42.76571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,42.67992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,42.44484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,42.50082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,42.07917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,42.33032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,42.3233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,41.91405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,41.97782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,42.08859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,41.97074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,41.54371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,41.43388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,42.10035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,41.36448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,41.75777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,41.46973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,41.90933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,41.29977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,41.09297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.83421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,41.398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,40.94081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,40.81965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,41.27098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,40.73706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,40.56403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,40.52738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.7176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,40.5738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,40.92387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,40.3731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,40.27729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,40.20836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,40.22807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,39.89176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,39.84454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.96123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.66263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,39.52001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,39.70757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.59764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.57262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.7923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,39.65764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,39.55509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,39.15992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,39.16751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,39.21301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.75049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,39.38693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,39.17004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.6122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,39.02815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,38.85772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,38.50687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.54287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,38.54287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.70701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,38.58397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,38.23579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,38.35995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,38.13721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,37.7718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,37.91055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,38.10603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.85563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,37.93406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,38.37286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,38.17356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.92361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,38.1476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,37.8504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,38.1995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,37.28611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,37.50333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,37.58249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,37.56404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,37.14236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,37.62201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,37.39753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,37.26485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,37.23559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,37.32859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,37.24091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,36.81284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,37.16103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,37.33921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,37.06761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,36.85587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,37.17435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,36.52648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,36.66994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.80746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,36.54817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,36.42872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,36.65643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,36.65373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,36.42872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,36.33069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.50478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,36.24606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,36.01575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.93865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,36.19136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,36.0817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,36.11738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,35.74241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,35.69804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.73132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,36.17767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,35.41385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,35.20061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.91659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.76734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,35.40266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,35.23999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.18372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,35.3102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,35.01438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,35.64527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,35.35786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,35.28213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.90103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.86979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.92657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.95492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.87263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.5874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.61602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.78731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.50711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,34.46114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.49562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,34.39784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,34.50423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.86411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.55874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.89888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,34.35462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,34.34596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.5272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,34.15217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,34.01557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.9456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.95727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.92809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.63189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.72896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.75244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.78765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.68781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,33.38949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,33.13933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,33.42507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.67899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,33.39245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,33.40432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,33.42804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,33.21994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,33.09147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,33.05552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.91136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.98052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.94746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.90835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.70604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.8933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.72724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.99854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.77563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.80886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,33.03454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,32.40173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.66057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.65754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,32.30375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,32.10997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,32.04203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.53598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,32.59378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.90571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.90571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,32.0513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.92743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,32.008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.93053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.82488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.72199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.58742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.5529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,31.48376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.72511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,31.34817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,31.23102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,31.3608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,31.1389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.52149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,31.20564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.9122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.79662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,31.31339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.77087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.05608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.77409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,31.2849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,31.11026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.73866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.81591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,30.77409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.64183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.40491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,30.35926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.72254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,30.29066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.94199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,30.28084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,30.32008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,30.33967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.78608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,30.11025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.97505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.72282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.72615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,30.05426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.89894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.63938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,29.50203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.5423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.58921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.57916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,29.16092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,29.32352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,29.30325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,29.052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,29.16431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,29.69281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,29.43143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.75037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,29.21861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,29.32352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.93584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,29.29649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.99056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.68828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.92214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.87415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,28.5741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,28.4072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,28.4525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.67447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,28.25685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,28.35135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,28.01745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,28.17259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,28.05631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,28.19017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.85433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,28.4873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,28.17259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.62936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.72957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.81518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,28.04925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.76884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.66877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,27.6186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,27.48917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,27.22847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,27.43867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.66519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.61501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,27.17748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,27.33377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.9248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.05693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,27.23211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,26.96524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,27.00562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.88798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,27.22847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,27.03862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.88061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,27.03862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.76242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,27.09717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.69942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,26.45341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,26.56179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.80681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,26.56924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,26.30319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,26.50578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,26.68087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.88176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,26.16347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.86262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,26.38592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.95439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.93147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.86262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,26.32201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,26.20887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,26.29189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,26.01538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.5272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.8051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,25.6163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,25.44558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,25.65881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,25.39492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,25.12037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.96213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.93036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.92241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,25.35978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,25.3754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,25.06115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,25.00178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.92241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,25.17158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.91844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.89059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.66671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.48936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.89457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.63456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.7469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.7549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.72287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,24.60639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,24.29034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,24.17998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,24.12666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,24.44888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,24.17588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,24.69882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,24.24135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,24.32295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,24.47723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,24.13897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,24.12255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.97839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.85828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.71251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.61623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.71251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,23.72504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,23.51955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.84997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,23.45629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.84582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.84997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,23.62042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.53218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,23.06876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,23.12452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,23.59944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,23.52376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,23.07735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,23.28249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.86604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.97409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,23.36319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,23.10738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.80096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,22.7139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.79662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,22.49038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.7357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.89635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.64402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.95684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.67899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,22.55635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.57391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.57391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,22.64402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,22.12624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,22.59584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,22.05898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.44629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,22.22898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,22.07694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.90124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.91932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.77877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.66476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,22.17544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.60065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.99602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.92384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.87861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.79241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,21.28185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,21.07134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.76351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.78787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.77422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.91932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,21.15112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,21.1558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,21.08074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.62815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.59147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,21.28651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,21.30046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,21.12299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,21.13706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,21.15112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.77782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,21.27254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.77782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,21.21658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.94402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.61027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.68224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.78258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.92509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.66787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,20.27591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,20.51392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,20.52357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.83631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.73964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.98061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,20.48492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,20.27591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,20.31496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,20.30032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.96573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,20.3588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,20.04991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,20.06472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,20.63909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.48359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,19.48359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,20.23679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.78631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,20.10911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.82632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.94091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.80132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.59513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.88121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.63049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,19.52423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,19.36118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,19.55971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,19.33046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.36118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,19.43268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.30995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,19.13473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,19.39696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.97878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,19.09327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.92127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,19.11401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.92651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.67358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.57251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,19.15025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.85834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.77411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,19.0257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,19.0309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.73713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.64704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.73713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,18.32551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.72656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,18.3741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,18.42794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,18.01475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.9108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.58851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.39027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.70009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.74242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.48162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,18.23338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,18.30929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,18.30388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,18.05869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,18.22795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.57251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,18.03673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,18.20076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,18.2551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.85457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,18.23338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.50153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.70413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.89336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.90443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.64247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.8268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.73767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.79343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,17.42779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.26216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.54675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,17.29656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,17.34232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.72091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.41642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,17.44484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.37656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,17.48454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,17.49587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,17.15278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.80858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,17.16433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.90848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,17.04851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,17.07754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,17.09493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,17.00196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.93774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,17.2851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,17.00196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.96112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,17.26216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,17.10652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,17.07173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.91433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.70809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.57116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.89675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.75545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,16.3727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,16.22683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.51727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.61892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.64274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,16.08581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.44514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,16.42103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.4632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.88752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,16.1718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.99317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,16.20851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.98697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.43309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.76232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.78116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,16.04264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.89998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,16.01174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.96837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.97457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,16.06732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.77488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.91244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.99936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.66776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.94354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,16.14114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.49611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.8688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,16.03647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.65511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.90621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.52166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.79998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.30959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,15.14042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.52166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,15.23825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,15.4577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.5599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,15.1731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,15.27072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,15.11423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,15.42563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,15.21874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,14.9561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,15.1731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,14.99579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,15.26423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,15.20571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,14.96934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.74934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.90301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,15.33545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.36829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.90301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.55326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.50553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.80966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.69551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.66852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,14.24365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.89637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.83639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.4987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.43021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.68202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,14.28532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.45079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.29918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,14.09684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,14.2645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.62794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.4096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.37519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,14.25755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,14.06166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,14.03345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,14.1879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,14.15295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.76979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,14.07574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.94138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,14.27838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.95559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,13.8487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.83439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.94849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,14.31995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.85585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.60331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,13.63241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.94138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.87014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.49364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.50098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,13.27157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.92005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,13.06089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.44952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.75539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.50098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.64694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,14.04051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,13.15913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.58874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.71934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,13.36825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.5303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.4716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,13.37566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.27157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.90831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.96956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,13.13652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,13.2267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.47895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.50098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.80815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.90831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,13.33858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,13.13652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.82361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,13.29394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.76166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,13.2267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.81588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.63685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.44729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.90831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.6838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.51871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.48702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.6838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,13.01531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.84677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.40743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.93897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.52662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.77718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.69161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.5661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,12.3032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.53453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.66035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.69161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,12.27095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.62901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.43136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,12.33536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.44729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.61569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.61331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,12.27902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.79342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,12.38345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,12.08384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.55032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,12.28708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,12.05922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,12.05101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.83535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.75135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.53453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.8186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,12.00158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,12.07564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,12.23861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.91044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.42652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.71758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,12.08384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,12.16555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.96852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,12.02632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.88546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.46979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.8186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,12.07564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.41785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.63273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.4525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.96852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.61569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.46115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,11.12785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.58152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.90212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.40917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.48705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,11.11895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,11.33949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.5644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,11.25179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.51289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.94836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,11.20769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,11.24299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.46979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.41785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,11.11003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,11.26939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,11.14564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.88484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.94836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,11.15453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,11.32201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,11.18999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.65488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,11.36567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.99351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,11.08325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.9121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.54272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.93025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,11.0564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.89393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.29552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.38175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.67346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.82094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.78426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.54272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.8575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.77507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.55211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.82094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.71977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.5896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.76587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.53332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.63627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.48619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,11.02949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.75667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.25696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.5615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,10.29552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.84837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.30514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.55211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.35309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.43885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,10.09143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.982867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.853019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.46728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,10.00269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.41985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,10.24729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.33393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.853019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,10.22794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.65488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,163.2307);
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
   
   TH1D *VH_tagFirst_Z_mass__117 = new TH1D("VH_tagFirst_Z_mass__117","",1000,0,2000);
   VH_tagFirst_Z_mass__117->SetBinContent(26,12234);
   VH_tagFirst_Z_mass__117->SetBinContent(27,13606);
   VH_tagFirst_Z_mass__117->SetBinContent(28,14815);
   VH_tagFirst_Z_mass__117->SetBinContent(29,16162);
   VH_tagFirst_Z_mass__117->SetBinContent(30,17309);
   VH_tagFirst_Z_mass__117->SetBinContent(61,15493);
   VH_tagFirst_Z_mass__117->SetBinContent(62,15325);
   VH_tagFirst_Z_mass__117->SetBinContent(63,15317);
   VH_tagFirst_Z_mass__117->SetBinContent(64,15178);
   VH_tagFirst_Z_mass__117->SetBinContent(65,15113);
   VH_tagFirst_Z_mass__117->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__117->SetBinContent(1001,65888);
   VH_tagFirst_Z_mass__117->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__117->SetLineColor(ci);
   VH_tagFirst_Z_mass__117->SetLineWidth(2);
   VH_tagFirst_Z_mass__117->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__117->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__117->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__117->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__117->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__117->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__117->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__117->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__117->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__117->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__117->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__117->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1117[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 12300.28, 13656.54, 14966.07, 16232.42, 17539.72, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15453.02, 15313.26, 15174.83, 15009.25, 14864.14,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 130.4184 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1117[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1117[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.476276, 3.697395, 8.085898, 13.4274, 18.83206,
   24.99782, 31.5529, 38.44508, 45.16756, 51.31762, 57.81173, 63.72908, 68.65442, 73.99343, 77.96614, 81.61867, 85.00163, 88.35822, 90.23638, 92.20524, 93.80085,
   94.95963, 95.79884, 96.53845, 96.72913, 97.19705, 97.32335, 97.50131, 97.34269, 97.2103, 96.81307, 96.59282, 95.59699, 94.84586, 93.99076, 93.54811, 92.4188,
   91.29179, 90.36911, 89.14513, 88.14944, 87.43857, 86.508, 86.01419, 85.63444, 84.45211, 84.13244, 83.5191, 82.93587, 82.55996, 82.18594, 81.73632, 81.34025,
   80.72533, 80.57056, 79.60327, 79.10767, 78.8229, 78.12227, 78.31604, 77.68484, 77.114, 76.61265, 76.23155, 76.31856, 75.5436, 75.21901, 74.96836, 74.68902,
   74.62135, 73.75743, 73.47483, 73.0855, 72.68455, 72.37861, 71.88006, 71.33361, 70.96045, 70.84169, 70.09946, 70.05988, 69.85171, 69.24063, 68.69337, 68.12572,
   67.72319, 67.84887, 67.30354, 66.85311, 66.32199, 66.17695, 65.80466, 65.64338, 65.12978, 64.74535, 64.15358, 63.81917, 63.30486, 63.22187, 63.07597, 62.07546,
   61.90767, 61.61253, 61.2691, 61.28689, 60.61074, 60.43888, 60.14972, 59.71997, 59.66853, 58.86791, 58.78708, 58.21472, 57.90932, 57.90761, 57.61777, 57.058,
   56.8423, 56.41722, 56.71494, 55.71576, 55.71221, 55.05217, 55.24796, 55.10972, 54.64761, 54.77254, 53.92314, 54.00391, 53.1273, 53.36359, 53.384, 52.91431,
   52.70797, 52.25495, 52.09166, 51.79032, 51.53721, 51.40634, 51.25387, 50.81128, 50.48661, 50.92424, 50.34317, 50.20721, 50.00753, 49.66164, 49.34346, 49.58379,
   49.02118, 49.45776, 48.68661, 48.76183, 48.39681, 48.60719, 48.00633, 47.79746, 47.92372, 47.76428, 47.19259, 47.43755, 46.616, 47.11906, 46.69456, 46.78358,
   46.4798, 46.18045, 46.68183, 45.96759, 46.16972, 45.93956, 45.86187, 45.32083, 45.33831, 45.13904, 45.24864, 45.11929, 45.07755, 44.48469, 44.9477, 44.79095,
   44.48024, 44.3732, 44.4156, 44.18079, 44.16285, 43.70966, 43.97402, 43.69152, 43.75949, 43.83639, 43.81831, 43.48926, 43.10947, 43.18524, 43.36151, 42.89292,
   43.20129, 42.76571, 42.67992, 42.44484, 42.50082, 42.07917, 42.33032, 42.3233, 41.91405, 41.97782, 42.08859, 41.97074, 41.54371, 41.43388, 42.10035, 41.36448,
   41.75777, 41.46973, 41.90933, 41.29977, 41.09297, 40.83421, 41.398, 40.94081, 40.81965, 41.27098, 40.73706, 40.56403, 40.52738, 40.7176, 40.5738, 40.92387,
   40.3731, 40.27729, 40.20836, 40.22807, 39.89176, 39.84454, 39.96123, 39.66263, 39.52001, 39.70757, 39.59764, 39.57262, 39.7923, 39.65764, 39.55509, 39.15992,
   39.16751, 39.21301, 38.75049, 39.38693, 39.17004, 38.6122, 39.02815, 38.85772, 38.50687, 38.54287, 38.54287, 38.70701, 38.58397, 38.23579, 38.35995, 38.13721,
   37.7718, 37.91055, 38.10603, 37.85563, 37.93406, 38.37286, 38.17356, 37.92361, 38.1476, 37.8504, 38.1995, 37.28611, 37.50333, 37.58249, 37.56404, 37.14236,
   37.62201, 37.39753, 37.26485, 37.23559, 37.32859, 37.24091, 36.81284, 37.16103, 37.33921, 37.06761, 36.85587, 37.17435, 36.52648, 36.66994, 36.80746, 36.54817,
   36.42872, 36.65643, 36.65373, 36.42872, 36.33069, 36.50478, 36.24606, 36.01575, 35.93865, 36.19136, 36.0817, 36.11738, 35.74241, 35.69804, 35.73132, 36.17767,
   35.41385, 35.20061, 35.91659, 35.76734, 35.40266, 35.23999, 35.18372, 35.3102, 35.01438, 35.64527, 35.35786, 35.28213, 34.90103, 34.86979, 34.92657, 34.95492,
   34.87263, 34.5874, 34.61602, 34.78731, 34.50711, 34.46114, 34.49562, 34.39784, 34.50423, 34.86411, 34.55874, 33.89888, 34.35462, 34.34596, 34.5272, 34.15217,
   34.01557, 33.9456, 33.95727, 33.92809, 33.63189, 33.72896, 33.75244, 33.78765, 33.68781, 33.38949, 33.13933, 33.42507, 33.67899, 33.39245, 33.40432, 33.42804,
   33.21994, 33.09147, 33.05552, 32.91136, 32.98052, 32.94746, 32.90835, 32.70604, 32.8933, 32.72724, 32.99854, 32.77563, 32.80886, 33.03454, 32.40173, 32.66057,
   32.65754, 32.30375, 32.10997, 32.04203, 32.53598, 32.59378, 31.90571, 31.90571, 32.0513, 31.92743, 32.008, 31.93053, 31.82488, 31.72199, 31.58742, 31.5529,
   31.48376, 31.72511, 31.34817, 31.23102, 31.3608, 31.1389, 31.52149, 31.20564, 30.9122, 30.79662, 31.31339, 30.77087, 31.05608, 30.77409, 31.2849, 31.11026,
   30.73866, 30.81591, 30.77409, 30.64183, 30.40491, 30.35926, 30.72254, 30.29066, 29.94199, 30.28084, 30.32008, 30.33967, 29.78608, 30.11025, 29.97505, 29.72282,
   29.72615, 30.05426, 29.89894, 29.63938, 29.50203, 29.5423, 29.58921, 29.57916, 29.16092, 29.32352, 29.30325, 29.052, 29.16431, 29.69281, 29.43143, 28.75037,
   29.21861, 29.32352, 28.93584, 29.29649, 28.99056, 28.68828, 28.92214, 28.87415, 28.5741, 28.4072, 28.4525, 28.67447, 28.25685, 28.35135, 28.01745, 28.17259,
   28.05631, 28.19017, 27.85433, 28.4873, 28.17259, 27.62936, 27.72957, 27.81518, 28.04925, 27.76884, 27.66877, 27.6186, 27.48917, 27.22847, 27.43867, 27.66519,
   27.61501, 27.17748, 27.33377, 26.9248, 27.05693, 27.23211, 26.96524, 27.00562, 26.88798, 27.22847, 27.03862, 26.88061, 27.03862, 26.76242, 27.09717, 26.69942,
   26.45341, 26.56179, 26.80681, 26.56924, 26.30319, 26.50578, 26.68087, 25.88176, 26.16347, 25.86262, 26.38592, 25.95439, 25.93147, 25.86262, 26.32201, 26.20887,
   26.29189, 26.01538, 25.5272, 25.8051, 25.6163, 25.44558, 25.65881, 25.39492, 25.12037, 24.96213, 24.93036, 24.92241, 25.35978, 25.3754, 25.06115, 25.00178,
   24.92241, 25.17158, 24.91844, 24.89059, 24.66671, 24.48936, 24.89457, 24.63456, 24.7469, 24.7549, 24.72287, 24.60639, 24.29034, 24.17998, 24.12666, 24.44888,
   24.17588, 24.69882, 24.24135, 24.32295, 24.47723, 24.13897, 24.12255, 23.97839, 23.85828, 23.71251, 23.61623, 23.71251, 23.72504, 23.51955, 23.84997, 23.45629,
   23.84582, 23.84997, 23.62042, 23.53218, 23.06876, 23.12452, 23.59944, 23.52376, 23.07735, 23.28249, 22.86604, 22.97409, 23.36319, 23.10738, 22.80096, 22.7139,
   22.79662, 22.49038, 22.7357, 22.89635, 22.64402, 22.95684, 22.67899, 22.55635, 22.57391, 22.57391, 22.64402, 22.12624, 22.59584, 22.05898, 22.44629, 22.22898,
   22.07694, 21.90124, 21.715, 21.91932, 21.77877, 21.66476, 22.17544, 21.60065, 21.99602, 21.92384, 21.87861, 21.79241, 21.28185, 21.07134, 20.76351, 21.78787,
   21.77422, 21.91932, 21.15112, 21.1558, 21.08074, 21.62815, 21.59147, 21.28651, 21.30046, 21.12299, 21.13706, 21.15112, 20.77782, 21.27254, 20.77782, 21.21658,
   20.94402, 20.61027, 20.68224, 20.78258, 20.92509, 20.66787, 20.27591, 20.51392, 20.52357, 19.83631, 20.73964, 19.98061, 20.48492, 20.27591, 20.31496, 20.30032,
   19.96573, 20.3588, 20.04991, 20.06472, 20.63909, 19.48359, 19.48359, 20.23679, 19.78631, 20.10911, 19.82632, 19.94091, 19.80132, 19.59513, 19.88121, 19.63049,
   19.52423, 19.36118, 19.55971, 19.33046, 19.36118, 19.43268, 19.30995, 19.13473, 19.39696, 18.97878, 19.09327, 18.92127, 19.11401, 18.92651, 18.67358, 18.57251,
   19.15025, 18.85834, 18.77411, 19.0257, 19.0309, 18.73713, 18.64704, 18.73713, 18.32551, 18.72656, 18.3741, 18.42794, 18.01475, 18.9108, 18.58851, 18.39027,
   18.70009, 18.74242, 18.48162, 18.23338, 18.30929, 18.30388, 18.05869, 18.22795, 18.57251, 18.03673, 18.20076, 18.2551, 17.85457, 18.23338, 17.50153, 17.70413,
   17.89336, 17.90443, 17.64247, 17.8268, 17.73767, 17.79343, 17.42779, 17.26216, 17.54675, 17.29656, 17.34232, 17.72091, 17.41642, 17.44484, 17.37656, 17.48454,
   17.49587, 17.15278, 16.80858, 17.16433, 16.90848, 17.04851, 17.07754, 17.09493, 17.00196, 16.93774, 17.2851, 17.00196, 16.96112, 17.26216, 17.10652, 17.07173,
   16.91433, 16.70809, 16.57116, 16.89675, 16.75545, 16.3727, 16.22683, 16.51727, 16.61892, 16.64274, 16.08581, 16.44514, 16.42103, 16.4632, 15.88752, 16.1718,
   15.99317, 16.20851, 15.98697, 16.43309, 15.76232, 15.78116, 16.04264, 15.89998, 16.01174, 15.96837, 15.97457, 16.06732, 15.77488, 15.91244, 15.99936, 15.66776,
   15.94354, 16.14114, 15.49611, 15.8688, 16.03647, 15.65511, 15.90621, 15.52166, 15.79998, 15.30959, 15.14042, 15.52166, 15.23825, 15.4577, 15.5599, 15.1731,
   15.27072, 15.11423, 15.42563, 15.21874, 14.9561, 15.1731, 14.99579, 15.26423, 15.20571, 14.96934, 14.74934, 14.90301, 15.33545, 14.36829, 14.90301, 14.55326,
   14.655, 14.50553, 14.80966, 14.69551, 14.66852, 14.24365, 14.89637, 14.83639, 14.4987, 14.43021, 14.68202, 14.28532, 14.45079, 14.29918, 14.09684, 14.2645,
   14.62794, 14.4096, 14.37519, 14.25755, 14.06166, 14.03345, 14.1879, 14.15295, 13.76979, 14.07574, 13.94138, 14.27838, 13.95559, 13.8487, 13.83439, 13.94849,
   14.31995, 13.85585, 13.60331, 13.63241, 13.94138, 13.87014, 13.49364, 13.50098, 13.27157, 13.92005, 13.06089, 13.44952, 13.75539, 13.50098, 13.64694, 14.04051,
   13.15913, 13.58874, 13.71934, 13.36825, 13.5303, 13.4716, 13.37566, 13.27157, 12.90831, 12.96956, 13.13652, 13.2267, 13.47895, 13.50098, 12.80815, 12.90831,
   13.33858, 13.13652, 12.82361, 13.29394, 12.76166, 13.2267, 12.81588, 12.63685, 12.44729, 12.90831, 12.6838, 12.51871, 12.48702, 12.6838, 13.01531, 12.84677,
   12.40743, 12.93897, 12.52662, 12.77718, 12.69161, 12.5661, 12.3032, 12.53453, 12.66035, 12.69161, 12.27095, 12.62901, 12.43136, 12.33536, 12.44729, 11.61569,
   12.61331, 12.27902, 11.79342, 12.38345, 12.08384, 12.55032, 12.28708, 12.05922, 12.05101, 11.83535, 11.75135, 12.53453, 11.8186, 12.00158, 12.07564, 12.23861,
   11.91044, 11.42652, 11.71758, 12.08384, 12.16555, 11.96852, 12.02632, 11.88546, 11.46979, 11.8186, 12.07564, 11.41785, 11.63273, 11.4525, 11.96852, 11.61569,
   11.46115, 11.12785, 11.58152, 11.90212, 11.40917, 11.48705, 11.11895, 11.33949, 11.5644, 11.25179, 11.51289, 10.94836, 11.20769, 11.24299, 11.46979, 11.41785,
   11.11003, 11.26939, 11.14564, 10.88484, 10.94836, 11.15453, 11.32201, 11.18999, 10.65488, 10.729, 11.36567, 10.99351, 11.08325, 10.9121, 10.54272, 10.93025,
   11.0564, 10.89393, 10.29552, 10.38175, 10.67346, 10.82094, 10.78426, 10.54272, 10.8575, 10.77507, 10.55211, 10.82094, 10.71977, 10.5896, 10.76587, 10.53332,
   10.63627, 10.48619, 11.02949, 10.75667, 10.25696, 10.5615, 10.29552, 10.84837, 10.30514, 10.55211, 10.35309, 10.43885, 10.09143, 9.982867, 9.853019, 10.46728,
   10.00269, 10.41985, 10.24729, 10.33393, 9.853019, 10.22794, 10.65488 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1117,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1117,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1117,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1117);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->SetMinimum(-1870.059);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->SetMaximum(19400.64);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1117);
   
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
   
   TH1D *data_mc_ratio__118 = new TH1D("data_mc_ratio__118","",1000,0,2000);
   data_mc_ratio__118->SetBinContent(26,0.9946114);
   data_mc_ratio__118->SetBinContent(27,0.9962989);
   data_mc_ratio__118->SetBinContent(28,0.9899059);
   data_mc_ratio__118->SetBinContent(29,0.9956618);
   data_mc_ratio__118->SetBinContent(30,0.9868459);
   data_mc_ratio__118->SetBinContent(61,1.002587);
   data_mc_ratio__118->SetBinContent(62,1.000767);
   data_mc_ratio__118->SetBinContent(63,1.009369);
   data_mc_ratio__118->SetBinContent(64,1.011243);
   data_mc_ratio__118->SetBinContent(65,1.016742);
   data_mc_ratio__118->SetBinContent(1000,1.088803);
   data_mc_ratio__118->SetBinContent(1001,1.100713);
   data_mc_ratio__118->SetBinError(26,0.008992267);
   data_mc_ratio__118->SetBinError(27,0.008541309);
   data_mc_ratio__118->SetBinError(28,0.008132856);
   data_mc_ratio__118->SetBinError(29,0.007831849);
   data_mc_ratio__118->SetBinError(30,0.0075009);
   data_mc_ratio__118->SetBinError(61,0.008054791);
   data_mc_ratio__118->SetBinError(62,0.008084118);
   data_mc_ratio__118->SetBinError(63,0.008155734);
   data_mc_ratio__118->SetBinError(64,0.008208209);
   data_mc_ratio__118->SetBinError(65,0.008270573);
   data_mc_ratio__118->SetBinError(1000,0.09137034);
   data_mc_ratio__118->SetBinError(1001,0.005234265);
   data_mc_ratio__118->SetMinimum(0.4);
   data_mc_ratio__118->SetMaximum(1.6);
   data_mc_ratio__118->SetEntries(7141.824);
   data_mc_ratio__118->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__118->SetLineColor(ci);
   data_mc_ratio__118->SetLineWidth(2);
   data_mc_ratio__118->SetMarkerStyle(20);
   data_mc_ratio__118->SetMarkerSize(1.2);
   data_mc_ratio__118->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__118->GetXaxis()->SetRange(1,150);
   data_mc_ratio__118->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__118->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__118->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__118->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__118->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__118->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__118->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__118->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__118->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__118->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1118[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1118[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1118[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1118,Graph_from_mc_statistical_error_fy1118,Graph_from_mc_statistical_error_fex1118,Graph_from_mc_statistical_error_fey1118);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1118 = new TH1F("Graph_Graph_from_mc_statistical_error1118","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1118->SetMinimum(0.9019628);
   Graph_Graph_from_mc_statistical_error1118->SetMaximum(1.098037);
   Graph_Graph_from_mc_statistical_error1118->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1118->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1118->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1118);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->Modified();
   Z_mass_tagFirst_VR_18->cd();
   Z_mass_tagFirst_VR_18->SetSelected(Z_mass_tagFirst_VR_18);
}
