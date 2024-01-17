#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_18/Z_mass_tagFirst_SR_18
//=========  (Mon Jan  8 11:16:15 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-52.76989,315.7258,52727.11);
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
   st->SetMaximum(47449.12);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",1000,0,2000);
   st_stack_52->SetMinimum(0.01);
   st_stack_52->SetMaximum(47449.12);
   st_stack_52->SetDirectory(nullptr);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->SetLineWidth(0);
   st_stack_52->GetXaxis()->SetRange(1,150);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,18288.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,19095.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,19762.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,20253.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,20612.96);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,20932.47);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,21015.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,21219.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,21274.23);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,21352.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,21282.69);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,21224.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,21051.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,20956.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,20526.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,20204.89);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,19842.21);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,19655.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,19184.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,18719.03);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,18342.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,17849.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,17452.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,17172.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,16808.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,16617.28);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,16470.87);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,16019.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,15898.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,15667.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,130.3857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,59844.37);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.475906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.696468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.08387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.42403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.82734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.99155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,31.54499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,38.43543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,45.15623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,51.30474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,57.79723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,63.7131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,68.6372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,73.97488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,77.94659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,81.5982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,84.98032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,88.33606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,90.21374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,92.18212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,93.77733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,94.93582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,95.77482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,96.51424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,96.70487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.17267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,97.29894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,97.47686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,97.31827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,97.18592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,96.78879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,96.5686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,95.57301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,94.82207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.96719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,93.52464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,92.39562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,91.2689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,90.34645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,89.12277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,88.12733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.41664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,86.48631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.99261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,85.61296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.43093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.11134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.49815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.91507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.53925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,82.16533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.71582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.31985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.70509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.55035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.5833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.08783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,78.80313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.10268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.2964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.66535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.09466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.59343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.21243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.29942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.52466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.20014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.94956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.67029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,74.60263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.73893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,73.45641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,73.06717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,72.66632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,72.36046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.86203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,71.31572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.94265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,70.82392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,70.08188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,70.04231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,69.83419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,69.22327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,68.67614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,68.10863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,67.70621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,67.83186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,67.28666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.83634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,66.30536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,66.16035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,65.78815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,65.62692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,65.11345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,64.72912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,64.13749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,63.80317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,63.28898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,63.20601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,63.06015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,62.05989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.89214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,61.59708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,61.25374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,61.27152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,60.59554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,60.42372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,60.13463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,59.65357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.85315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,58.77234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,58.20012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,57.8948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.89309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,57.60332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,57.04369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,56.82805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,56.40307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,56.70071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,55.70179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,55.69823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,55.03836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,55.2341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,55.0959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,54.6339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,54.75881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,53.90961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,53.99037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,53.11398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,53.3502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,53.37061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,52.90104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,52.69475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,52.24184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,52.07859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.77733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,51.52428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,51.39344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,51.24102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,50.79854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,50.47395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,50.91147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,50.33054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,50.19462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,49.99499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,49.64919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,49.33108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,49.57135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,49.00889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,49.44536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,48.6744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,48.7496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,48.38468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,48.595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,47.99429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,47.78547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,47.9117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,47.7523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,47.18075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,47.42565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,46.60431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,47.10724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,46.68285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,46.77185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,46.46814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,46.16887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,46.67013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,45.95606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,46.15814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,45.92804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,45.85037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,45.30946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,45.32694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,45.12772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,45.23729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,45.10797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,45.06624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,44.47353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,44.93643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,44.77972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,44.46908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,44.36208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,44.40446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,44.16971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,44.15177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,43.69869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,43.963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,43.68056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,43.74851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,43.8254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,43.80732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,43.47835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,43.09866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,43.17441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,43.35064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.88217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,43.19046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,42.75498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,42.66921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,42.43419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,42.49016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,42.06862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,42.31971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,42.31269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,41.90354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,41.96729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,42.07803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,41.96021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,41.53329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,41.42349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,42.0898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,41.35411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,41.7473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,41.45933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,41.89881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,41.28941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,41.08267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.82397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,41.38762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,40.93055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,40.80941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,41.26063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,40.72684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,40.55386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,40.51722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.70738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,40.56362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,40.91361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,40.36297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,40.26719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,40.19828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,40.21798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,39.88175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,39.83455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.95121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.65269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,39.5101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,39.69761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.58771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.56269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.78232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,39.64769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,39.54517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,39.1501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,39.15768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,39.20317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.74078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,39.37706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,39.16021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.60252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,39.01836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,38.84797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,38.49721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.5332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,38.5332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.6973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,38.57429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,38.2262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,38.35033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,38.12764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,37.76233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,37.90104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,38.09647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.84614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,37.92455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,38.36323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,38.16398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.9141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,38.13803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,37.84091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,38.18992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,37.27676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,37.49393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,37.57307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,37.55462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,37.13304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,37.61258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,37.38815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,37.2555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,37.22625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,37.31923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,37.23157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,36.80361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,37.15171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,37.32984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,37.05831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,36.84663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,37.16503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,36.51732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,36.66075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.79823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,36.53901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,36.41958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,36.64724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,36.64454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,36.41958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,36.32158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.49562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,36.23697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,36.00672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.92964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,36.18228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,36.07265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,36.10832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,35.73344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,35.68908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.72236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,36.1686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,35.40497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,35.19179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.90759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.75837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,35.39378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,35.23115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.1749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,35.30134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,35.0056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,35.63633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,35.34899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,35.27328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.89228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.86105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.91781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.94615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.86389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.57872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.60734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.77858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.49845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,34.4525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.48697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,34.38922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,34.49558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.85537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.55007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.89037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,34.346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,34.33735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.51854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,34.14361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,34.00704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.93709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.94876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.91958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.62346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.7205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.74398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.77917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.67936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,33.38111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,33.13102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,33.41669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.67054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,33.38408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,33.39594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,33.41965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,33.21161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,33.08317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,33.04723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.90311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.97225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.9392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.9001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.69784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.88505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.71903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.99026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.76741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.80063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,33.02626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,32.39361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.65238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.64935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,32.29565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,32.10192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,32.03399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,32.52782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,32.5856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.8977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.8977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,32.04326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.91942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.99997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.92253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.81689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.71403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.5795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,31.54499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,31.47586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.71715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,31.3403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,31.22319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,31.35294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,31.13109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.51359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,31.19781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.90445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.78889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,31.30553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.76316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.04829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.76637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,31.27705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,31.10245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.73095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.80818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,30.76637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.63414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.39728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,30.35164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.71484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,30.28306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.93448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,30.27325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,30.31247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,30.33206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.77861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,30.10269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.96753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.71537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.7187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,30.04673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.89145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.63195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,29.49463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.53489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.58178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.57174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,29.1536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,29.31617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,29.2959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,29.04472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,29.157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,29.68536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,29.42405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.74316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,29.21128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,29.31617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.92858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,29.28914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.98329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.68109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.91489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.86691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,28.56694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,28.40008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,28.44537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.66728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,28.24977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,28.34424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,28.01042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,28.16552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,28.04928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,28.1831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.84734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,28.48015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,28.16552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.62243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.72261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.8082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,28.04221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.76187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.66183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,27.61167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,27.48228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,27.22164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,27.43179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.65825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.60809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,27.17067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,27.32692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.91805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.05014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,27.22528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,26.95848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,26.99885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.88124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,27.22164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,27.03184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.87387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,27.03184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.75571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,27.09038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.69273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,26.44677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,26.55513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.80008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,26.56258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,26.29659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,26.49914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,26.67417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.87527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,26.15691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.85613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,26.3793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.94788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.92497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.85613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,26.31541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,26.20229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,26.28529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,26.00886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.5208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.79863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,25.60988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,25.4392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,25.65237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,25.38855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,25.11407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.95587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.92411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.91616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,25.35342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,25.36904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,25.05486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.99551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.91616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,25.16527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.91219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.88435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.66052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.48322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.88833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.62838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.74069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.7487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.71667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,24.60022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,24.28425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,24.17391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,24.12061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,24.44275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,24.16982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,24.69262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,24.23527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,24.31685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,24.47109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,24.13292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,24.1165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.97238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.8523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.70656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.6103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.70656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,23.71909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,23.51365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.84399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,23.4504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.83984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.84399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,23.6145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.52628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,23.06298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,23.11872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,23.59352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,23.51786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,23.07156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,23.27665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.86031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.96833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,23.35733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,23.10158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.79525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,22.70821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.7909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,22.48473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.89061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.63834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.95108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.6733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,22.55069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.56825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.56825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,22.63834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,22.12069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,22.59017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,22.05345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.44066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,22.2234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,22.0714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.89575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.70955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.91383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.77331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.65932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,22.16988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.59523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.9905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.91835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.87312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.78695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,21.27651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,21.06606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.7583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.7824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.76876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.91383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,21.14581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,21.15049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,21.07546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.62272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.58606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,21.28117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,21.29512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,21.1177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,21.13176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,21.14581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.77261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,21.2672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.77261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,21.21126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.93877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.6051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.67706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.77737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.91985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.66268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,20.27082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,20.50877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,20.51842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.83134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.73444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.9756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,20.47978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,20.27082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,20.30986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,20.29523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.96073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,20.35369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,20.04488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,20.05969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,20.63391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.47871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,19.47871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,20.23171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.78135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,20.10406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.82135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.93591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.79636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.59022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.87622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.62556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,19.51933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,19.35633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,19.55481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,19.32561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.35633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,19.42781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.30511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,19.12993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,19.3921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.97402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,19.08848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.91653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,19.10921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.92176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.6689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.56786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,19.14545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.85361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.7694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,19.02093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,19.02613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.73243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.64236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.73243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,18.32092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.72186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,18.36949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,18.42331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,18.01023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.90606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.58385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.38566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.6954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.73772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.47698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,18.22881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,18.3047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,18.29929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,18.05416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,18.22338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.56786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,18.03221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,18.19619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,18.25052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.85009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,18.22881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.49714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.69969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.88888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.89994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.63805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.82233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.73322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.78897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,17.42342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.25783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.54235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,17.29222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,17.33797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.71646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.41205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,17.44046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.3722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,17.48016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,17.49148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,17.14848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.80437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,17.16002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.90424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,17.04423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,17.07325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,17.09064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,16.99769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.9335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,17.28077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,16.99769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.95687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,17.25783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,17.10222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,17.06745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.91009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.7039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.89252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.75125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,16.36859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,16.22276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.51313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.61475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.63857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,16.08177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.44102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,16.41691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.45907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.88353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,16.16774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.98915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,16.20444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.98296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.42897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.75836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.7772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,16.03862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.89599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,16.00772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.96436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.97057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,16.06329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.77093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.90845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.99535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.66383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.93954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,16.13709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.49222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.86482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,16.03244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.65118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.90222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.51776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.79602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.30575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,15.13662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.51776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,15.23443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,15.45383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,15.1693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,15.26689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,15.11044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,15.42176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,15.21492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,14.95235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,15.1693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,14.99202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,15.2604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,15.2019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,14.96558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.74564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.89928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,15.33161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.36469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.89928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.54961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.65133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.50189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.80595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.69182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.66484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,14.24008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.89263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.83267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.49506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.42659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.67834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,14.28174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.44717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.29559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,14.0933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,14.26092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.62427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.40599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.37158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,14.25398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,14.05813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,14.02993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,14.18434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,14.1494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.76634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,14.07221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.93788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,14.2748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.95209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,13.84523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.83092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.94499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,14.31636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.85238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.5999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,13.62899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.93788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.86666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.49025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.49759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,13.26824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.91656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,13.05762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.44614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.75194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.49759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.64352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,14.03699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,13.15582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.58533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.7159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,13.3649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.5269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.46822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,13.3723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.26824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.90507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.9663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,13.13323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,13.22339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.47557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.49759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.80494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.90507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,13.33523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,13.13323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.8204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,13.29061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.75846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,13.22339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.81267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.63368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.44416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.90507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.68062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.51557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.48388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.68062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,13.01204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.84354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.40432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.93572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.52348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.77397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.68842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.56295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,12.30011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.53138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.65717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.68842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,12.26787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.62584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.42824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,12.33227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.44416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.61277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.61015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,12.27594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.79046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,12.38035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,12.08081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.54717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,12.284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,12.0562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,12.04798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.83238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.7484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.53138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.81563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.99857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,12.07261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,12.23554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.90745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.42365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.71464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,12.08081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,12.16249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.96552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,12.0233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.88248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.46691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.81563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,12.07261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.41498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.62981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.44963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.96552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.61277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.45827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,11.12506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.57862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.89913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.40631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.48417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,11.11616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,11.33665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.5615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,11.24897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.51);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.94561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,11.20487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,11.24017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.46691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.41498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,11.10725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,11.26656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,11.14285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.88211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.94561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,11.15173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,11.31917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,11.18719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.65221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.72631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,11.36282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.99075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,11.08047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.90937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.54008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.92751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,11.05363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.8912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.29294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.37915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.67078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.81823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.78156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.54008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.85478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.77237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.54947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.81823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.71708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.58694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.76317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.53068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.6336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.48356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,11.02673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.75397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.25439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.55885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,10.29294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.84565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.30255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.54947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.35049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.43623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,10.0889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.980363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.850548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.46466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,10.00019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.41724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,10.24472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.33134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.850548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,10.22538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.65221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,163.1897);
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
   
   TH1D *VH_tagFirst_Z_mass__103 = new TH1D("VH_tagFirst_Z_mass__103","",1000,0,2000);
   VH_tagFirst_Z_mass__103->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__103->SetBinContent(1001,65888);
   VH_tagFirst_Z_mass__103->SetEntries(3106559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__103->SetLineColor(ci);
   VH_tagFirst_Z_mass__103->SetLineWidth(2);
   VH_tagFirst_Z_mass__103->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__103->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__103->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__103->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__103->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__103->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__103->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__103->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__103->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__103->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__103->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__103->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1103[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18288.71, 19095.5, 19762.11,
   20253.39, 20612.96, 20932.47, 21015.24, 21219.05, 21274.23, 21352.11, 21282.69, 21224.84, 21051.73, 20956.05, 20526.18, 20204.89, 19842.21, 19655.76, 19184.05,
   18719.03, 18342.55, 17849.05, 17452.55, 17172.2, 16808.63, 16617.28, 16470.87, 16019.2, 15898.16, 15667.2, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 130.3857 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1103[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.475906, 3.696468, 8.08387, 13.42403, 18.82734,
   24.99155, 31.54499, 38.43543, 45.15623, 51.30474, 57.79723, 63.7131, 68.6372, 73.97488, 77.94659, 81.5982, 84.98032, 88.33606, 90.21374, 92.18212, 93.77733,
   94.93582, 95.77482, 96.51424, 96.70487, 97.17267, 97.29894, 97.47686, 97.31827, 97.18592, 96.78879, 96.5686, 95.57301, 94.82207, 93.96719, 93.52464, 92.39562,
   91.2689, 90.34645, 89.12277, 88.12733, 87.41664, 86.48631, 85.99261, 85.61296, 84.43093, 84.11134, 83.49815, 82.91507, 82.53925, 82.16533, 81.71582, 81.31985,
   80.70509, 80.55035, 79.5833, 79.08783, 78.80313, 78.10268, 78.2964, 77.66535, 77.09466, 76.59343, 76.21243, 76.29942, 75.52466, 75.20014, 74.94956, 74.67029,
   74.60263, 73.73893, 73.45641, 73.06717, 72.66632, 72.36046, 71.86203, 71.31572, 70.94265, 70.82392, 70.08188, 70.04231, 69.83419, 69.22327, 68.67614, 68.10863,
   67.70621, 67.83186, 67.28666, 66.83634, 66.30536, 66.16035, 65.78815, 65.62692, 65.11345, 64.72912, 64.13749, 63.80317, 63.28898, 63.20601, 63.06015, 62.05989,
   61.89214, 61.59708, 61.25374, 61.27152, 60.59554, 60.42372, 60.13463, 59.705, 59.65357, 58.85315, 58.77234, 58.20012, 57.8948, 57.89309, 57.60332, 57.04369,
   56.82805, 56.40307, 56.70071, 55.70179, 55.69823, 55.03836, 55.2341, 55.0959, 54.6339, 54.75881, 53.90961, 53.99037, 53.11398, 53.3502, 53.37061, 52.90104,
   52.69475, 52.24184, 52.07859, 51.77733, 51.52428, 51.39344, 51.24102, 50.79854, 50.47395, 50.91147, 50.33054, 50.19462, 49.99499, 49.64919, 49.33108, 49.57135,
   49.00889, 49.44536, 48.6744, 48.7496, 48.38468, 48.595, 47.99429, 47.78547, 47.9117, 47.7523, 47.18075, 47.42565, 46.60431, 47.10724, 46.68285, 46.77185,
   46.46814, 46.16887, 46.67013, 45.95606, 46.15814, 45.92804, 45.85037, 45.30946, 45.32694, 45.12772, 45.23729, 45.10797, 45.06624, 44.47353, 44.93643, 44.77972,
   44.46908, 44.36208, 44.40446, 44.16971, 44.15177, 43.69869, 43.963, 43.68056, 43.74851, 43.8254, 43.80732, 43.47835, 43.09866, 43.17441, 43.35064, 42.88217,
   43.19046, 42.75498, 42.66921, 42.43419, 42.49016, 42.06862, 42.31971, 42.31269, 41.90354, 41.96729, 42.07803, 41.96021, 41.53329, 41.42349, 42.0898, 41.35411,
   41.7473, 41.45933, 41.89881, 41.28941, 41.08267, 40.82397, 41.38762, 40.93055, 40.80941, 41.26063, 40.72684, 40.55386, 40.51722, 40.70738, 40.56362, 40.91361,
   40.36297, 40.26719, 40.19828, 40.21798, 39.88175, 39.83455, 39.95121, 39.65269, 39.5101, 39.69761, 39.58771, 39.56269, 39.78232, 39.64769, 39.54517, 39.1501,
   39.15768, 39.20317, 38.74078, 39.37706, 39.16021, 38.60252, 39.01836, 38.84797, 38.49721, 38.5332, 38.5332, 38.6973, 38.57429, 38.2262, 38.35033, 38.12764,
   37.76233, 37.90104, 38.09647, 37.84614, 37.92455, 38.36323, 38.16398, 37.9141, 38.13803, 37.84091, 38.18992, 37.27676, 37.49393, 37.57307, 37.55462, 37.13304,
   37.61258, 37.38815, 37.2555, 37.22625, 37.31923, 37.23157, 36.80361, 37.15171, 37.32984, 37.05831, 36.84663, 37.16503, 36.51732, 36.66075, 36.79823, 36.53901,
   36.41958, 36.64724, 36.64454, 36.41958, 36.32158, 36.49562, 36.23697, 36.00672, 35.92964, 36.18228, 36.07265, 36.10832, 35.73344, 35.68908, 35.72236, 36.1686,
   35.40497, 35.19179, 35.90759, 35.75837, 35.39378, 35.23115, 35.1749, 35.30134, 35.0056, 35.63633, 35.34899, 35.27328, 34.89228, 34.86105, 34.91781, 34.94615,
   34.86389, 34.57872, 34.60734, 34.77858, 34.49845, 34.4525, 34.48697, 34.38922, 34.49558, 34.85537, 34.55007, 33.89037, 34.346, 34.33735, 34.51854, 34.14361,
   34.00704, 33.93709, 33.94876, 33.91958, 33.62346, 33.7205, 33.74398, 33.77917, 33.67936, 33.38111, 33.13102, 33.41669, 33.67054, 33.38408, 33.39594, 33.41965,
   33.21161, 33.08317, 33.04723, 32.90311, 32.97225, 32.9392, 32.9001, 32.69784, 32.88505, 32.71903, 32.99026, 32.76741, 32.80063, 33.02626, 32.39361, 32.65238,
   32.64935, 32.29565, 32.10192, 32.03399, 32.52782, 32.5856, 31.8977, 31.8977, 32.04326, 31.91942, 31.99997, 31.92253, 31.81689, 31.71403, 31.5795, 31.54499,
   31.47586, 31.71715, 31.3403, 31.22319, 31.35294, 31.13109, 31.51359, 31.19781, 30.90445, 30.78889, 31.30553, 30.76316, 31.04829, 30.76637, 31.27705, 31.10245,
   30.73095, 30.80818, 30.76637, 30.63414, 30.39728, 30.35164, 30.71484, 30.28306, 29.93448, 30.27325, 30.31247, 30.33206, 29.77861, 30.10269, 29.96753, 29.71537,
   29.7187, 30.04673, 29.89145, 29.63195, 29.49463, 29.53489, 29.58178, 29.57174, 29.1536, 29.31617, 29.2959, 29.04472, 29.157, 29.68536, 29.42405, 28.74316,
   29.21128, 29.31617, 28.92858, 29.28914, 28.98329, 28.68109, 28.91489, 28.86691, 28.56694, 28.40008, 28.44537, 28.66728, 28.24977, 28.34424, 28.01042, 28.16552,
   28.04928, 28.1831, 27.84734, 28.48015, 28.16552, 27.62243, 27.72261, 27.8082, 28.04221, 27.76187, 27.66183, 27.61167, 27.48228, 27.22164, 27.43179, 27.65825,
   27.60809, 27.17067, 27.32692, 26.91805, 27.05014, 27.22528, 26.95848, 26.99885, 26.88124, 27.22164, 27.03184, 26.87387, 27.03184, 26.75571, 27.09038, 26.69273,
   26.44677, 26.55513, 26.80008, 26.56258, 26.29659, 26.49914, 26.67417, 25.87527, 26.15691, 25.85613, 26.3793, 25.94788, 25.92497, 25.85613, 26.31541, 26.20229,
   26.28529, 26.00886, 25.5208, 25.79863, 25.60988, 25.4392, 25.65237, 25.38855, 25.11407, 24.95587, 24.92411, 24.91616, 25.35342, 25.36904, 25.05486, 24.99551,
   24.91616, 25.16527, 24.91219, 24.88435, 24.66052, 24.48322, 24.88833, 24.62838, 24.74069, 24.7487, 24.71667, 24.60022, 24.28425, 24.17391, 24.12061, 24.44275,
   24.16982, 24.69262, 24.23527, 24.31685, 24.47109, 24.13292, 24.1165, 23.97238, 23.8523, 23.70656, 23.6103, 23.70656, 23.71909, 23.51365, 23.84399, 23.4504,
   23.83984, 23.84399, 23.6145, 23.52628, 23.06298, 23.11872, 23.59352, 23.51786, 23.07156, 23.27665, 22.86031, 22.96833, 23.35733, 23.10158, 22.79525, 22.70821,
   22.7909, 22.48473, 22.73, 22.89061, 22.63834, 22.95108, 22.6733, 22.55069, 22.56825, 22.56825, 22.63834, 22.12069, 22.59017, 22.05345, 22.44066, 22.2234,
   22.0714, 21.89575, 21.70955, 21.91383, 21.77331, 21.65932, 22.16988, 21.59523, 21.9905, 21.91835, 21.87312, 21.78695, 21.27651, 21.06606, 20.7583, 21.7824,
   21.76876, 21.91383, 21.14581, 21.15049, 21.07546, 21.62272, 21.58606, 21.28117, 21.29512, 21.1177, 21.13176, 21.14581, 20.77261, 21.2672, 20.77261, 21.21126,
   20.93877, 20.6051, 20.67706, 20.77737, 20.91985, 20.66268, 20.27082, 20.50877, 20.51842, 19.83134, 20.73444, 19.9756, 20.47978, 20.27082, 20.30986, 20.29523,
   19.96073, 20.35369, 20.04488, 20.05969, 20.63391, 19.47871, 19.47871, 20.23171, 19.78135, 20.10406, 19.82135, 19.93591, 19.79636, 19.59022, 19.87622, 19.62556,
   19.51933, 19.35633, 19.55481, 19.32561, 19.35633, 19.42781, 19.30511, 19.12993, 19.3921, 18.97402, 19.08848, 18.91653, 19.10921, 18.92176, 18.6689, 18.56786,
   19.14545, 18.85361, 18.7694, 19.02093, 19.02613, 18.73243, 18.64236, 18.73243, 18.32092, 18.72186, 18.36949, 18.42331, 18.01023, 18.90606, 18.58385, 18.38566,
   18.6954, 18.73772, 18.47698, 18.22881, 18.3047, 18.29929, 18.05416, 18.22338, 18.56786, 18.03221, 18.19619, 18.25052, 17.85009, 18.22881, 17.49714, 17.69969,
   17.88888, 17.89994, 17.63805, 17.82233, 17.73322, 17.78897, 17.42342, 17.25783, 17.54235, 17.29222, 17.33797, 17.71646, 17.41205, 17.44046, 17.3722, 17.48016,
   17.49148, 17.14848, 16.80437, 17.16002, 16.90424, 17.04423, 17.07325, 17.09064, 16.99769, 16.9335, 17.28077, 16.99769, 16.95687, 17.25783, 17.10222, 17.06745,
   16.91009, 16.7039, 16.567, 16.89252, 16.75125, 16.36859, 16.22276, 16.51313, 16.61475, 16.63857, 16.08177, 16.44102, 16.41691, 16.45907, 15.88353, 16.16774,
   15.98915, 16.20444, 15.98296, 16.42897, 15.75836, 15.7772, 16.03862, 15.89599, 16.00772, 15.96436, 15.97057, 16.06329, 15.77093, 15.90845, 15.99535, 15.66383,
   15.93954, 16.13709, 15.49222, 15.86482, 16.03244, 15.65118, 15.90222, 15.51776, 15.79602, 15.30575, 15.13662, 15.51776, 15.23443, 15.45383, 15.556, 15.1693,
   15.26689, 15.11044, 15.42176, 15.21492, 14.95235, 15.1693, 14.99202, 15.2604, 15.2019, 14.96558, 14.74564, 14.89928, 15.33161, 14.36469, 14.89928, 14.54961,
   14.65133, 14.50189, 14.80595, 14.69182, 14.66484, 14.24008, 14.89263, 14.83267, 14.49506, 14.42659, 14.67834, 14.28174, 14.44717, 14.29559, 14.0933, 14.26092,
   14.62427, 14.40599, 14.37158, 14.25398, 14.05813, 14.02993, 14.18434, 14.1494, 13.76634, 14.07221, 13.93788, 14.2748, 13.95209, 13.84523, 13.83092, 13.94499,
   14.31636, 13.85238, 13.5999, 13.62899, 13.93788, 13.86666, 13.49025, 13.49759, 13.26824, 13.91656, 13.05762, 13.44614, 13.75194, 13.49759, 13.64352, 14.03699,
   13.15582, 13.58533, 13.7159, 13.3649, 13.5269, 13.46822, 13.3723, 13.26824, 12.90507, 12.9663, 13.13323, 13.22339, 13.47557, 13.49759, 12.80494, 12.90507,
   13.33523, 13.13323, 12.8204, 13.29061, 12.75846, 13.22339, 12.81267, 12.63368, 12.44416, 12.90507, 12.68062, 12.51557, 12.48388, 12.68062, 13.01204, 12.84354,
   12.40432, 12.93572, 12.52348, 12.77397, 12.68842, 12.56295, 12.30011, 12.53138, 12.65717, 12.68842, 12.26787, 12.62584, 12.42824, 12.33227, 12.44416, 11.61277,
   12.61015, 12.27594, 11.79046, 12.38035, 12.08081, 12.54717, 12.284, 12.0562, 12.04798, 11.83238, 11.7484, 12.53138, 11.81563, 11.99857, 12.07261, 12.23554,
   11.90745, 11.42365, 11.71464, 12.08081, 12.16249, 11.96552, 12.0233, 11.88248, 11.46691, 11.81563, 12.07261, 11.41498, 11.62981, 11.44963, 11.96552, 11.61277,
   11.45827, 11.12506, 11.57862, 11.89913, 11.40631, 11.48417, 11.11616, 11.33665, 11.5615, 11.24897, 11.51, 10.94561, 11.20487, 11.24017, 11.46691, 11.41498,
   11.10725, 11.26656, 11.14285, 10.88211, 10.94561, 11.15173, 11.31917, 11.18719, 10.65221, 10.72631, 11.36282, 10.99075, 11.08047, 10.90937, 10.54008, 10.92751,
   11.05363, 10.8912, 10.29294, 10.37915, 10.67078, 10.81823, 10.78156, 10.54008, 10.85478, 10.77237, 10.54947, 10.81823, 10.71708, 10.58694, 10.76317, 10.53068,
   10.6336, 10.48356, 11.02673, 10.75397, 10.25439, 10.55885, 10.29294, 10.84565, 10.30255, 10.54947, 10.35049, 10.43623, 10.0889, 9.980363, 9.850548, 10.46466,
   10.00019, 10.41724, 10.24472, 10.33134, 9.850548, 10.22538, 10.65221 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1103,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1103,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1103,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1103);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->SetMinimum(-2242.128);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->SetMaximum(23603.37);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1103);
   
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
   
   TH1D *data_mc_ratio__104 = new TH1D("data_mc_ratio__104","",1000,0,2000);
   data_mc_ratio__104->SetBinContent(1000,1.089076);
   data_mc_ratio__104->SetBinContent(1001,1.100989);
   data_mc_ratio__104->SetBinError(1000,0.09139326);
   data_mc_ratio__104->SetBinError(1001,0.005235578);
   data_mc_ratio__104->SetMinimum(0.4);
   data_mc_ratio__104->SetMaximum(1.6);
   data_mc_ratio__104->SetEntries(72.9035);
   data_mc_ratio__104->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__104->SetLineColor(ci);
   data_mc_ratio__104->SetLineWidth(2);
   data_mc_ratio__104->SetMarkerStyle(20);
   data_mc_ratio__104->SetMarkerSize(1.2);
   data_mc_ratio__104->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__104->GetXaxis()->SetRange(1,150);
   data_mc_ratio__104->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__104->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__104->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__104->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__104->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__104->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__104->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1104[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.9019628);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.098037);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->SetSelected(Z_mass_tagFirst_SR_18);
}
