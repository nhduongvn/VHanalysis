#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_18/Z_mass_tagFirst_SR_18
//=========  (Sat Dec  9 13:50:18 2023) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_18 = new TCanvas("Z_mass_tagFirst_SR_18", "Z_mass_tagFirst_SR_18",0,0,600,600);
   Z_mass_tagFirst_SR_18->SetHighLightColor(2);
   Z_mass_tagFirst_SR_18->Range(0,0,1,1);
   Z_mass_tagFirst_SR_18->SetFillColor(0);
   Z_mass_tagFirst_SR_18->SetFillStyle(4000);
   Z_mass_tagFirst_SR_18->SetBorderMode(0);
   Z_mass_tagFirst_SR_18->SetBorderSize(2);
   Z_mass_tagFirst_SR_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-52.05796,315.7258,52015.9);
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
   st->SetMaximum(46809.11);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",1000,0,2000);
   st_stack_122->SetMinimum(0.01);
   st_stack_122->SetMaximum(46809.11);
   st_stack_122->SetDirectory(nullptr);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->SetLineWidth(0);
   st_stack_122->GetXaxis()->SetRange(1,150);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetTitleOffset(1);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetLabelSize(0.05);
   st_stack_122->GetYaxis()->SetTitleSize(0.057);
   st_stack_122->GetYaxis()->SetTitleOffset(1.2);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetTitleOffset(1);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,18042.02);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,18837.93);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,19495.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,19980.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,20334.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,20650.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,20731.78);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,20932.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,20987.27);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,21064.1);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,20995.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,20938.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,20767.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,20673.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,20249.31);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,19932.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,19574.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,19390.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,18925.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,18466.53);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,18095.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,17608.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,17217.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,16940.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,16581.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,16393.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,16248.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,15803.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,15683.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,15455.87);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,128.627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,59037.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.455998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.646608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,7.974831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.24296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.57338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.65445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,31.1195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,37.917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,44.54715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,50.61272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,57.01763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,62.8537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,67.71139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,72.97707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,76.89521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,80.49757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,83.83406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,87.14454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,88.9969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,90.93872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,92.51241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,93.65528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,94.48296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,95.21241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,95.40047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,95.86196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,95.98652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.16205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.0056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,95.87503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,95.48326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,95.26603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,94.28387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,93.54306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.69971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,92.26314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,91.14934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,90.03782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.12781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.92064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,86.93863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.23752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.31974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,84.8327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.45817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,83.29208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,82.97681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,82.37189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,81.79667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,81.42592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.05704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,80.6136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,80.22297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,79.6165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,79.46385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,78.50984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,78.02106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,77.74019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,77.04919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,77.2403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,76.61776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,76.05477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,75.5603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,75.18444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,75.27026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,74.50594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,74.1858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,73.9386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,73.6631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.59636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,72.7443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.46559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.08161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.68616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.38442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,70.89272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.35377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.98574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.86861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.13658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,69.09754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.89224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.28955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.7498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,67.18995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.79295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.91691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,66.37906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,65.93482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,65.411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,65.26795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,64.90077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,64.74171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,64.23517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,63.85602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,63.27237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,62.94256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,62.43531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,62.35346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,62.20957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,61.2228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.05731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,60.76623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,60.42752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,60.44506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,59.7782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,59.6087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,59.3235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,58.89967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,58.84893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.05931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,57.97959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,57.41509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,57.11388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.1122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,56.82634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,56.27425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,56.06152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,55.64228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,55.9359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,54.95046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,54.94695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,54.29598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,54.48908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,54.35274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,53.89697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,54.02019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,53.18245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,53.26212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,52.39755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,52.63059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,52.65073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,52.18748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,51.98398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,51.53718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,51.37613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.07893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,50.8293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,50.70022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,50.54985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,50.11335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,49.79313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,50.22475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,49.65166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,49.51757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,49.32063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,48.9795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,48.66568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,48.90271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,48.34783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,48.77841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,48.01785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,48.09204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,47.73204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,47.93952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,47.34692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,47.14091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,47.26544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,47.1082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,46.54435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,46.78595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,45.97569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,46.47184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,46.05317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,46.14097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,45.84135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,45.54612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,46.04062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,45.33618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,45.53554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,45.30854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,45.23192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,44.69831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,44.71555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,44.51902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,44.62711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,44.49953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,44.45837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.87365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,44.33031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,44.1757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,43.86926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,43.7637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,43.80551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,43.57393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,43.55623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,43.10926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,43.37);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,43.09138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,43.15841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,43.23426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,43.21642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,42.8919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,42.51733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,42.59205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,42.7659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.30375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,42.60788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,42.17828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,42.09367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,41.86182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.91703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,41.50118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,41.74888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,41.74195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,41.33832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,41.40121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,41.51046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,41.39423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,40.97307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,40.86475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,41.52207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.79631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,41.18419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,40.9001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,41.33366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,40.73248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,40.52852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.27332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,40.82936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,40.37846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,40.25896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,40.70408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,40.17749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,40.00685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,39.9707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.1583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,40.01648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,40.36175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,39.81853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,39.72404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,39.65606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,39.6755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,39.34381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,39.29724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.41232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.11783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,38.97717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,39.16215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.05373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.02905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.24572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,39.1129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,39.01176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,38.62202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,38.62951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,38.67438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.21822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,38.84592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,38.632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.08183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,38.49206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,38.32397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,37.97794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.01345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,38.01345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.17533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,38.05398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,37.71059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,37.83304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,37.61336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,37.25297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,37.38981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,37.58261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.33565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,37.413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,37.84577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,37.64921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.4027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,37.62361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,37.33049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,37.67479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,36.77395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,36.98819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,37.06627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,37.04806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,36.63218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,37.10524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,36.88384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,36.75298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,36.72413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,36.81585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,36.72938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,36.30718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,36.65058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,36.82632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,36.55845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,36.34962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,36.66373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,36.02476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,36.16625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.30188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,36.04615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,35.92834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,36.15292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,36.15026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,35.92834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,35.83165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.00335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,35.74819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,35.52104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,35.69424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,35.58609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,35.62127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,35.25145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,35.20769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.24052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,35.68074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,34.92741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,34.7171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.42325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.27605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,34.91637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,34.75594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,34.70044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,34.82518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,34.53343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,35.15565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,34.87219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,34.7975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.42163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.39082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.44682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.47478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.39363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.11231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.14054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.30947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.03312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,33.98779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.02179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,33.92536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,34.03029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.38522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.08405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.43324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,33.88272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,33.87419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.05293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,33.68306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,33.54833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.47933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.49084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.46205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.16993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.26566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.28882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.32354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.22508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,32.93085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,32.68413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,32.96595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.21638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,32.93378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,32.94548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,32.96887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,32.76364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,32.63693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,32.60148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.45929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.5275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.4949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.45632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.25679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.44148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.2777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.54527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.32543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.3582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,32.58078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,31.95667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.21195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.20896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,31.86003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,31.66891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,31.6019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.08907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,32.14607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.46745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.46745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,31.61105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.48888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.56834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.49194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.38773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.28626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.15354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.1195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,31.0513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.28934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,30.91757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,30.80204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,30.93003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,30.71118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.08852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,30.777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.48759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.3736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,30.88327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.34821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,30.62949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.35138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,30.85517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,30.68293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.31644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.39263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,30.35138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.22093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,29.98727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,29.94225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.30054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,29.87459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.5307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,29.86491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,29.9036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,29.92293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.37694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,29.69665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.56332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.31455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.31784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,29.64144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.48825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.23226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,29.09679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.13651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.18277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.17286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,28.76036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,28.92074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,28.90074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,28.65295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,28.76371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,29.28495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,29.02716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.35546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,28.81727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,28.92074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.53838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,28.89407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.59235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.29422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.52487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.47753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,28.18161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,28.01701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,28.06168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.2806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,27.86872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,27.96192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,27.6326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,27.78561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,27.67093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,27.80295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.47172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,28.096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,27.78561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.24984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.34868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.43311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,27.66397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.38741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.28871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,27.23923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,27.11158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,26.85446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,27.06178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.28518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.2357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,26.80418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,26.95832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.55496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,26.68528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,26.85805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,26.59485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,26.63468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.51865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,26.85446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,26.66722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.51138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,26.66722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.39482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,26.72497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.33268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,26.09005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,26.19694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.43859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,26.20429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,25.94189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,26.1417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,26.31438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.52626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,25.80409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.50737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,26.02348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.59788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.57528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.50737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,25.96046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,25.84886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,25.93075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,25.65804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.17656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.45064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,25.26444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,25.09606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,25.30636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,25.04609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,24.77532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.61925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.58792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.58008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,25.01144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,25.02685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,24.71691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.65836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.58008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,24.82583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.57616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.5487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.32789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.15298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.55262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.29618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.40698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.41487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.38328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,24.2684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,23.95669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,23.84784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,23.79526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,24.11305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,23.8438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,24.35956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,23.90838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,23.98885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,24.14101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,23.8074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,23.79121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.64902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.53056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.3868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.29184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.3868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,23.39915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,23.19649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.52237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,23.13409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.51828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.52237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,23.29597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.20895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,22.75189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,22.80688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,23.27528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,23.20064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,22.76036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,22.96268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.55196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.65852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,23.04227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,22.78998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.48777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,22.40191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.48349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,22.18145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.4234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.58185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.33298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.64151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.36747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,22.24652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.26384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.26384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,22.33298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,21.82232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,22.28547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,21.75598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.13797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,21.92364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,21.77369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.60041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.41672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.61824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.47962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.36717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,21.87084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.30394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.69389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.6227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.57809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.49307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,20.98953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,20.78191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.4783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.48859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.47513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.61824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,20.86059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,20.8652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,20.79118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.33106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.29489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,20.99412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,21.00788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,20.83285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,20.84672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,20.86059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.49241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,20.98034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.49241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,20.92516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.65634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.32717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.39815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.49712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.63767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.38398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,19.9974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,20.23214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,20.24166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.56384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.45476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.70616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,20.20354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,19.9974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,20.03591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,20.02148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.69149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,20.07915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,19.7745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,19.78911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,20.35559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.21597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,19.21597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,19.95882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.51453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,19.83289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.55399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.52933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.32597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.60812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.36085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,19.25604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,19.09524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,19.29104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,19.06494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.09524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,19.16576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.04471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,18.87189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,19.13053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.71809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,18.831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.66137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,18.85146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.66654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.41708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.3174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,18.88721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.59931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.51623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,18.76436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,18.7695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.47976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.3909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.47976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,18.0738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.46933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,18.12172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,18.17481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,17.7673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.65104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.33318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.13766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.44323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.48498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.22775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,17.98293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,18.05779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,18.05246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,17.81064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,17.97757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.3174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,17.78898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,17.95075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,18.00435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.60932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,17.98293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.26113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.46095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.64758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.6585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.40013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.58194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.49403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.54902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,17.18841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.02505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.30573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,17.05898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,17.10411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.47749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.17719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,17.20522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.13788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,17.24438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,17.25555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,16.91717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.5777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,16.92856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.67622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,16.81433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,16.84296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,16.86011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,16.76842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.70509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,17.04768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,16.76842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.72815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,17.02505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,16.87154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,16.83724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.47859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.34354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.66466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.5253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,16.1478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,16.00394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.29039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.39064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.41414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,15.86486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.21925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,16.19547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.23707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.66929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,15.94966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.77348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,15.98587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.76737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.20737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.54581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.56439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,15.82228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.68158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,15.7918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.74903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.75515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,15.84662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.5582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.69387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.77959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.45255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.72454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,15.91943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.28325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.65083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,15.81619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.44007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.68773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.30845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.58295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.0993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,14.93245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.30845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,15.02894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,15.24538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.34617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,14.96469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,15.06096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,14.90662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,15.21374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,15.00969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,14.75066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,14.96469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,14.78981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,15.05456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,14.99685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,14.76372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.54674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.69831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,15.12481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.17093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.69831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.35335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.4537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.30628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.60624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.49365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.46703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,14.048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.69175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.6326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.29954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.48035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,14.0891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.2523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.10277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,13.90321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,14.06856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.42701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.21167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.17773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,14.06171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,13.86851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,13.84069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,13.99302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,13.95854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.58065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,13.8824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.74988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,14.08226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.76389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,13.65847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.64436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.75689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,14.12325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.66553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.41646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,13.44516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.74988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.67962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.30829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.31553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,13.08927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.72884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,12.88149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.26478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.56645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.31553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.45949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,13.84765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,12.97837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.40209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.53089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,13.18463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.34444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.28655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,13.19193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.08927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.79141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,12.95608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,13.04502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.2938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.31553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.63222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,13.15536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,12.95608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.64747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,13.11134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.58637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,13.04502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.63985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.46327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.27631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.50957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.34675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.3155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.50957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,12.83653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.6703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.76124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.35456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.60167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.51727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.39349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,12.1342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.36235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.48644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.51727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,12.10239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.45554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.2606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,12.16592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.27631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.45613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.44005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,12.11035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.63143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,12.21336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,11.91786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.37793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,12.11831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,11.89358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,11.88547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.67278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.58993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.36235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.65626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.83673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,11.90977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,12.0705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.74684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.26957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.55663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,11.91786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,11.99844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.80412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,11.86113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.7222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.31224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.65626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,11.90977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.26101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.47294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.29519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.80412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.45613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.30372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,10.975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.42244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.73863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.25245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.32926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,10.96622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,11.18374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.40555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,11.09724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.35475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.79797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,11.05374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,11.08855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.31224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.26101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,10.95743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,11.11459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,10.99255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.73532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.79797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,11.00131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,11.16649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,11.03629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.50853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.58163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,11.20955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.8425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,10.93101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.76222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.39791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.78011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,10.90453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.7443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.1541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.23915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.52685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.67231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.63613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.39791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.70836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.62706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.40717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.67231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.57252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.44414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.61799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.38864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.49017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.34215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,10.87799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.60891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.11607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.41643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,10.1541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.69936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.16358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.40717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.21088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.29546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,9.952818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.845743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.717679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.3235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,9.865298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.27673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,10.10654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.19199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.717679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,10.08745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.50853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,160.9885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(6884267);

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
   
   TH1D *VH_tagFirst_Z_mass__243 = new TH1D("VH_tagFirst_Z_mass__243","",1000,0,2000);
   VH_tagFirst_Z_mass__243->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__243->SetBinContent(1001,65888);
   VH_tagFirst_Z_mass__243->SetEntries(3106559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__243->SetLineColor(ci);
   VH_tagFirst_Z_mass__243->SetLineWidth(2);
   VH_tagFirst_Z_mass__243->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__243->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__243->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__243->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__243->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__243->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__243->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__243->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__243->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__243->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__243->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__243->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1243[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1243[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18042.02, 18837.93, 19495.55,
   19980.21, 20334.92, 20650.12, 20731.78, 20932.84, 20987.27, 21064.1, 20995.61, 20938.54, 20767.77, 20673.39, 20249.31, 19932.36, 19574.57, 19390.63, 18925.29,
   18466.53, 18095.14, 17608.29, 17217.14, 16940.57, 16581.91, 16393.14, 16248.71, 15803.12, 15683.71, 15455.87, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 128.627 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1243[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1243[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.455998, 3.646608, 7.974831, 13.24296, 18.57338,
   24.65445, 31.1195, 37.917, 44.54715, 50.61272, 57.01763, 62.8537, 67.71139, 72.97707, 76.89521, 80.49757, 83.83406, 87.14454, 88.9969, 90.93872, 92.51241,
   93.65528, 94.48296, 95.21241, 95.40047, 95.86196, 95.98652, 96.16205, 96.0056, 95.87503, 95.48326, 95.26603, 94.28387, 93.54306, 92.69971, 92.26314, 91.14934,
   90.03782, 89.12781, 87.92064, 86.93863, 86.23752, 85.31974, 84.8327, 84.45817, 83.29208, 82.97681, 82.37189, 81.79667, 81.42592, 81.05704, 80.6136, 80.22297,
   79.6165, 79.46385, 78.50984, 78.02106, 77.74019, 77.04919, 77.2403, 76.61776, 76.05477, 75.5603, 75.18444, 75.27026, 74.50594, 74.1858, 73.9386, 73.6631,
   73.59636, 72.7443, 72.46559, 72.08161, 71.68616, 71.38442, 70.89272, 70.35377, 69.98574, 69.86861, 69.13658, 69.09754, 68.89224, 68.28955, 67.7498, 67.18995,
   66.79295, 66.91691, 66.37906, 65.93482, 65.411, 65.26795, 64.90077, 64.74171, 64.23517, 63.85602, 63.27237, 62.94256, 62.43531, 62.35346, 62.20957, 61.2228,
   61.05731, 60.76623, 60.42752, 60.44506, 59.7782, 59.6087, 59.3235, 58.89967, 58.84893, 58.05931, 57.97959, 57.41509, 57.11388, 57.1122, 56.82634, 56.27425,
   56.06152, 55.64228, 55.9359, 54.95046, 54.94695, 54.29598, 54.48908, 54.35274, 53.89697, 54.02019, 53.18245, 53.26212, 52.39755, 52.63059, 52.65073, 52.18748,
   51.98398, 51.53718, 51.37613, 51.07893, 50.8293, 50.70022, 50.54985, 50.11335, 49.79313, 50.22475, 49.65166, 49.51757, 49.32063, 48.9795, 48.66568, 48.90271,
   48.34783, 48.77841, 48.01785, 48.09204, 47.73204, 47.93952, 47.34692, 47.14091, 47.26544, 47.1082, 46.54435, 46.78595, 45.97569, 46.47184, 46.05317, 46.14097,
   45.84135, 45.54612, 46.04062, 45.33618, 45.53554, 45.30854, 45.23192, 44.69831, 44.71555, 44.51902, 44.62711, 44.49953, 44.45837, 43.87365, 44.33031, 44.1757,
   43.86926, 43.7637, 43.80551, 43.57393, 43.55623, 43.10926, 43.37, 43.09138, 43.15841, 43.23426, 43.21642, 42.8919, 42.51733, 42.59205, 42.7659, 42.30375,
   42.60788, 42.17828, 42.09367, 41.86182, 41.91703, 41.50118, 41.74888, 41.74195, 41.33832, 41.40121, 41.51046, 41.39423, 40.97307, 40.86475, 41.52207, 40.79631,
   41.18419, 40.9001, 41.33366, 40.73248, 40.52852, 40.27332, 40.82936, 40.37846, 40.25896, 40.70408, 40.17749, 40.00685, 39.9707, 40.1583, 40.01648, 40.36175,
   39.81853, 39.72404, 39.65606, 39.6755, 39.34381, 39.29724, 39.41232, 39.11783, 38.97717, 39.16215, 39.05373, 39.02905, 39.24572, 39.1129, 39.01176, 38.62202,
   38.62951, 38.67438, 38.21822, 38.84592, 38.632, 38.08183, 38.49206, 38.32397, 37.97794, 38.01345, 38.01345, 38.17533, 38.05398, 37.71059, 37.83304, 37.61336,
   37.25297, 37.38981, 37.58261, 37.33565, 37.413, 37.84577, 37.64921, 37.4027, 37.62361, 37.33049, 37.67479, 36.77395, 36.98819, 37.06627, 37.04806, 36.63218,
   37.10524, 36.88384, 36.75298, 36.72413, 36.81585, 36.72938, 36.30718, 36.65058, 36.82632, 36.55845, 36.34962, 36.66373, 36.02476, 36.16625, 36.30188, 36.04615,
   35.92834, 36.15292, 36.15026, 35.92834, 35.83165, 36.00335, 35.74819, 35.52104, 35.445, 35.69424, 35.58609, 35.62127, 35.25145, 35.20769, 35.24052, 35.68074,
   34.92741, 34.7171, 35.42325, 35.27605, 34.91637, 34.75594, 34.70044, 34.82518, 34.53343, 35.15565, 34.87219, 34.7975, 34.42163, 34.39082, 34.44682, 34.47478,
   34.39363, 34.11231, 34.14054, 34.30947, 34.03312, 33.98779, 34.02179, 33.92536, 34.03029, 34.38522, 34.08405, 33.43324, 33.88272, 33.87419, 34.05293, 33.68306,
   33.54833, 33.47933, 33.49084, 33.46205, 33.16993, 33.26566, 33.28882, 33.32354, 33.22508, 32.93085, 32.68413, 32.96595, 33.21638, 32.93378, 32.94548, 32.96887,
   32.76364, 32.63693, 32.60148, 32.45929, 32.5275, 32.4949, 32.45632, 32.25679, 32.44148, 32.2777, 32.54527, 32.32543, 32.3582, 32.58078, 31.95667, 32.21195,
   32.20896, 31.86003, 31.66891, 31.6019, 32.08907, 32.14607, 31.46745, 31.46745, 31.61105, 31.48888, 31.56834, 31.49194, 31.38773, 31.28626, 31.15354, 31.1195,
   31.0513, 31.28934, 30.91757, 30.80204, 30.93003, 30.71118, 31.08852, 30.777, 30.48759, 30.3736, 30.88327, 30.34821, 30.62949, 30.35138, 30.85517, 30.68293,
   30.31644, 30.39263, 30.35138, 30.22093, 29.98727, 29.94225, 30.30054, 29.87459, 29.5307, 29.86491, 29.9036, 29.92293, 29.37694, 29.69665, 29.56332, 29.31455,
   29.31784, 29.64144, 29.48825, 29.23226, 29.09679, 29.13651, 29.18277, 29.17286, 28.76036, 28.92074, 28.90074, 28.65295, 28.76371, 29.28495, 29.02716, 28.35546,
   28.81727, 28.92074, 28.53838, 28.89407, 28.59235, 28.29422, 28.52487, 28.47753, 28.18161, 28.01701, 28.06168, 28.2806, 27.86872, 27.96192, 27.6326, 27.78561,
   27.67093, 27.80295, 27.47172, 28.096, 27.78561, 27.24984, 27.34868, 27.43311, 27.66397, 27.38741, 27.28871, 27.23923, 27.11158, 26.85446, 27.06178, 27.28518,
   27.2357, 26.80418, 26.95832, 26.55496, 26.68528, 26.85805, 26.59485, 26.63468, 26.51865, 26.85446, 26.66722, 26.51138, 26.66722, 26.39482, 26.72497, 26.33268,
   26.09005, 26.19694, 26.43859, 26.20429, 25.94189, 26.1417, 26.31438, 25.52626, 25.80409, 25.50737, 26.02348, 25.59788, 25.57528, 25.50737, 25.96046, 25.84886,
   25.93075, 25.65804, 25.17656, 25.45064, 25.26444, 25.09606, 25.30636, 25.04609, 24.77532, 24.61925, 24.58792, 24.58008, 25.01144, 25.02685, 24.71691, 24.65836,
   24.58008, 24.82583, 24.57616, 24.5487, 24.32789, 24.15298, 24.55262, 24.29618, 24.40698, 24.41487, 24.38328, 24.2684, 23.95669, 23.84784, 23.79526, 24.11305,
   23.8438, 24.35956, 23.90838, 23.98885, 24.14101, 23.8074, 23.79121, 23.64902, 23.53056, 23.3868, 23.29184, 23.3868, 23.39915, 23.19649, 23.52237, 23.13409,
   23.51828, 23.52237, 23.29597, 23.20895, 22.75189, 22.80688, 23.27528, 23.20064, 22.76036, 22.96268, 22.55196, 22.65852, 23.04227, 22.78998, 22.48777, 22.40191,
   22.48349, 22.18145, 22.4234, 22.58185, 22.33298, 22.64151, 22.36747, 22.24652, 22.26384, 22.26384, 22.33298, 21.82232, 22.28547, 21.75598, 22.13797, 21.92364,
   21.77369, 21.60041, 21.41672, 21.61824, 21.47962, 21.36717, 21.87084, 21.30394, 21.69389, 21.6227, 21.57809, 21.49307, 20.98953, 20.78191, 20.4783, 21.48859,
   21.47513, 21.61824, 20.86059, 20.8652, 20.79118, 21.33106, 21.29489, 20.99412, 21.00788, 20.83285, 20.84672, 20.86059, 20.49241, 20.98034, 20.49241, 20.92516,
   20.65634, 20.32717, 20.39815, 20.49712, 20.63767, 20.38398, 19.9974, 20.23214, 20.24166, 19.56384, 20.45476, 19.70616, 20.20354, 19.9974, 20.03591, 20.02148,
   19.69149, 20.07915, 19.7745, 19.78911, 20.35559, 19.21597, 19.21597, 19.95882, 19.51453, 19.83289, 19.55399, 19.667, 19.52933, 19.32597, 19.60812, 19.36085,
   19.25604, 19.09524, 19.29104, 19.06494, 19.09524, 19.16576, 19.04471, 18.87189, 19.13053, 18.71809, 18.831, 18.66137, 18.85146, 18.66654, 18.41708, 18.3174,
   18.88721, 18.59931, 18.51623, 18.76436, 18.7695, 18.47976, 18.3909, 18.47976, 18.0738, 18.46933, 18.12172, 18.17481, 17.7673, 18.65104, 18.33318, 18.13766,
   18.44323, 18.48498, 18.22775, 17.98293, 18.05779, 18.05246, 17.81064, 17.97757, 18.3174, 17.78898, 17.95075, 18.00435, 17.60932, 17.98293, 17.26113, 17.46095,
   17.64758, 17.6585, 17.40013, 17.58194, 17.49403, 17.54902, 17.18841, 17.02505, 17.30573, 17.05898, 17.10411, 17.47749, 17.17719, 17.20522, 17.13788, 17.24438,
   17.25555, 16.91717, 16.5777, 16.92856, 16.67622, 16.81433, 16.84296, 16.86011, 16.76842, 16.70509, 17.04768, 16.76842, 16.72815, 17.02505, 16.87154, 16.83724,
   16.682, 16.47859, 16.34354, 16.66466, 16.5253, 16.1478, 16.00394, 16.29039, 16.39064, 16.41414, 15.86486, 16.21925, 16.19547, 16.23707, 15.66929, 15.94966,
   15.77348, 15.98587, 15.76737, 16.20737, 15.54581, 15.56439, 15.82228, 15.68158, 15.7918, 15.74903, 15.75515, 15.84662, 15.5582, 15.69387, 15.77959, 15.45255,
   15.72454, 15.91943, 15.28325, 15.65083, 15.81619, 15.44007, 15.68773, 15.30845, 15.58295, 15.0993, 14.93245, 15.30845, 15.02894, 15.24538, 15.34617, 14.96469,
   15.06096, 14.90662, 15.21374, 15.00969, 14.75066, 14.96469, 14.78981, 15.05456, 14.99685, 14.76372, 14.54674, 14.69831, 15.12481, 14.17093, 14.69831, 14.35335,
   14.4537, 14.30628, 14.60624, 14.49365, 14.46703, 14.048, 14.69175, 14.6326, 14.29954, 14.232, 14.48035, 14.0891, 14.2523, 14.10277, 13.90321, 14.06856,
   14.42701, 14.21167, 14.17773, 14.06171, 13.86851, 13.84069, 13.99302, 13.95854, 13.58065, 13.8824, 13.74988, 14.08226, 13.76389, 13.65847, 13.64436, 13.75689,
   14.12325, 13.66553, 13.41646, 13.44516, 13.74988, 13.67962, 13.30829, 13.31553, 13.08927, 13.72884, 12.88149, 13.26478, 13.56645, 13.31553, 13.45949, 13.84765,
   12.97837, 13.40209, 13.53089, 13.18463, 13.34444, 13.28655, 13.19193, 13.08927, 12.731, 12.79141, 12.95608, 13.04502, 13.2938, 13.31553, 12.63222, 12.731,
   13.15536, 12.95608, 12.64747, 13.11134, 12.58637, 13.04502, 12.63985, 12.46327, 12.27631, 12.731, 12.50957, 12.34675, 12.3155, 12.50957, 12.83653, 12.6703,
   12.237, 12.76124, 12.35456, 12.60167, 12.51727, 12.39349, 12.1342, 12.36235, 12.48644, 12.51727, 12.10239, 12.45554, 12.2606, 12.16592, 12.27631, 11.45613,
   12.44005, 12.11035, 11.63143, 12.21336, 11.91786, 12.37793, 12.11831, 11.89358, 11.88547, 11.67278, 11.58993, 12.36235, 11.65626, 11.83673, 11.90977, 12.0705,
   11.74684, 11.26957, 11.55663, 11.91786, 11.99844, 11.80412, 11.86113, 11.7222, 11.31224, 11.65626, 11.90977, 11.26101, 11.47294, 11.29519, 11.80412, 11.45613,
   11.30372, 10.975, 11.42244, 11.73863, 11.25245, 11.32926, 10.96622, 11.18374, 11.40555, 11.09724, 11.35475, 10.79797, 11.05374, 11.08855, 11.31224, 11.26101,
   10.95743, 11.11459, 10.99255, 10.73532, 10.79797, 11.00131, 11.16649, 11.03629, 10.50853, 10.58163, 11.20955, 10.8425, 10.93101, 10.76222, 10.39791, 10.78011,
   10.90453, 10.7443, 10.1541, 10.23915, 10.52685, 10.67231, 10.63613, 10.39791, 10.70836, 10.62706, 10.40717, 10.67231, 10.57252, 10.44414, 10.61799, 10.38864,
   10.49017, 10.34215, 10.87799, 10.60891, 10.11607, 10.41643, 10.1541, 10.69936, 10.16358, 10.40717, 10.21088, 10.29546, 9.952818, 9.845743, 9.717679, 10.3235,
   9.865298, 10.27673, 10.10654, 10.19199, 9.717679, 10.08745, 10.50853 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1243,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1243,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1243,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1243);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->SetMinimum(-2211.885);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->SetMaximum(23285);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1243);
   
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   Z_mass_tagFirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__244 = new TH1D("data_mc_ratio__244","",1000,0,2000);
   data_mc_ratio__244->SetBinContent(1000,1.103967);
   data_mc_ratio__244->SetBinContent(1001,1.116043);
   data_mc_ratio__244->SetBinError(1000,0.09264288);
   data_mc_ratio__244->SetBinError(1001,0.005307164);
   data_mc_ratio__244->SetMinimum(0.4);
   data_mc_ratio__244->SetMaximum(1.6);
   data_mc_ratio__244->SetEntries(72.9035);
   data_mc_ratio__244->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__244->SetLineColor(ci);
   data_mc_ratio__244->SetLineWidth(2);
   data_mc_ratio__244->SetMarkerStyle(20);
   data_mc_ratio__244->SetMarkerSize(1.2);
   data_mc_ratio__244->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__244->GetXaxis()->SetRange(1,150);
   data_mc_ratio__244->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__244->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__244->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__244->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__244->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__244->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__244->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__244->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__244->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__244->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__244->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__244->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__244->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__244->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__244->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__244->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1244[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1244[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1244[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1244[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004932756, 0.004827427, 0.004745309,
   0.004687403, 0.004646341, 0.004610743, 0.004601655, 0.004579502, 0.004573559, 0.004565211, 0.00457265, 0.004578877, 0.004597665, 0.004608148, 0.004656151, 0.004693026, 0.004735721, 0.00475813, 0.004816272,
   0.004875729, 0.004925511, 0.004993139, 0.005049539, 0.005090591, 0.005145351, 0.005174891, 0.005197839, 0.005270609, 0.005290635, 0.005329488, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1244,Graph_from_mc_statistical_error_fy1244,Graph_from_mc_statistical_error_fex1244,Graph_from_mc_statistical_error_fey1244);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1244 = new TH1F("Graph_Graph_from_mc_statistical_error1244","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1244->SetMinimum(0.9019628);
   Graph_Graph_from_mc_statistical_error1244->SetMaximum(1.098037);
   Graph_Graph_from_mc_statistical_error1244->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1244->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1244->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1244->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1244->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1244->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1244->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1244->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1244->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1244->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1244->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1244);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->SetSelected(Z_mass_tagFirst_SR_18);
}
