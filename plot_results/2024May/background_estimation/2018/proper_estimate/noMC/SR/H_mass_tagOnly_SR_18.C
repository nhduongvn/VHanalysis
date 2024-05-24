#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_SR_18()
{
//=========Macro generated from canvas: H_mass_tagOnly_SR_18/H_mass_tagOnly_SR_18
//=========  (Fri May 24 11:23:52 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagOnly_SR_18 = new TCanvas("H_mass_tagOnly_SR_18", "H_mass_tagOnly_SR_18",0,0,600,600);
   H_mass_tagOnly_SR_18->SetHighLightColor(2);
   H_mass_tagOnly_SR_18->Range(0,0,1,1);
   H_mass_tagOnly_SR_18->SetFillColor(0);
   H_mass_tagOnly_SR_18->SetFillStyle(4000);
   H_mass_tagOnly_SR_18->SetBorderMode(0);
   H_mass_tagOnly_SR_18->SetBorderSize(2);
   H_mass_tagOnly_SR_18->SetFrameFillStyle(1000);
   H_mass_tagOnly_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-23.91806,315.7258,23904.14);
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
   st->SetMaximum(21511.34);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",1000,0,2000);
   st_stack_20->SetMinimum(0.01);
   st_stack_20->SetMaximum(21511.34);
   st_stack_20->SetDirectory(nullptr);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->SetLineWidth(0);
   st_stack_20->GetXaxis()->SetRange(1,150);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetLabelSize(0.05);
   st_stack_20->GetYaxis()->SetTitleSize(0.057);
   st_stack_20->GetYaxis()->SetTitleOffset(1.2);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,4461.999);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(49,9286.217);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(50,9326.31);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(51,9498.429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(52,9363.246);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(53,9265.863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(54,9534.545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(55,9586.276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(56,9468.731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(57,9680.101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(58,9562.611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(59,9577.592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(60,9541.166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(61,9552.235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(62,9509.077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(63,9501.508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(64,9465.538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(65,9485.898);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(66,9551.204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(67,9579.638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(68,9581.491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(69,9553.601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(70,9450.296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(71,9382.255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(72,9325.874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(73,9351.783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(74,9432.261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(75,9414.408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(76,9448.092);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(77,9280.25);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,4614.504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,53.66595);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,31518.28);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(5,0.0274627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(6,0.3675106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(7,0.0257415);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(8,0.04357354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(9,0.1117668);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.063721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.6444435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,1.905358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,5.183432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,8.736937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,13.26785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,17.65997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,22.17009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,26.56489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,31.40352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,36.01496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,39.8815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,43.87438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,48.17702);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,51.08659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,54.07005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,57.32754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,59.27468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,61.59955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,63.87354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,65.44132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,66.72698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,68.01687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,70.52638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,69.96873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,71.11378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,71.25073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,72.65021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,73.29238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,75.06657);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,75.7106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,75.35834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,75.212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,74.55862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,74.23873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,76.65875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,73.50476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,72.27552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,71.11174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,70.8259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,70.66815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,70.14468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,69.01138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,68.82484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,69.10429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,68.69251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,68.15938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,69.43322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,68.8956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,67.92221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,68.16683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,68.12213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,68.10648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,67.33268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,67.41684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,67.05176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,67.76396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,67.32204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,67.28875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,67.34039);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,66.91921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,66.53415);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,67.3192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,66.76187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,66.33965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,66.42734);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,67.05109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,65.77378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,66.54649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,65.44667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,65.47938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,65.36795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,65.50475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,65.01105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,64.88615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,64.36659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,64.79905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,64.40237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,64.85776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,63.88212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,65.32611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,63.60652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,63.53321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,63.62733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,63.33801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,62.84782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,62.79268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,62.38818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,62.32365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,62.6265);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,62.01805);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,61.96377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,61.37872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,60.95924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,61.15905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,61.28567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,60.77926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,60.4254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,60.23512);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,60.0618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,59.62095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,59.58074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,60.14874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,59.14011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,59.95313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,60.08195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,58.46051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,58.18567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,58.03345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,58.23504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,57.75314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,57.54398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,58.42739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,57.36423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,57.92973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,57.87921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,56.89758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,56.59914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,56.11182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,58.61129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,55.94788);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,56.02068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,55.60834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,55.40028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,55.30831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,56.23568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,54.89594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,54.66004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,54.95048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,54.70628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,54.31588);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,54.70619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,54.33654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,54.27866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,53.90629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,53.81117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,53.82291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,53.70884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,53.57611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,53.25698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,53.01224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,53.94465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,52.62123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,52.14337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,52.52028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,53.16076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,52.13319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,52.23832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,51.8891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,51.84501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,51.9635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,51.32106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,51.51227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,51.30585);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,51.14829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,51.44925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,50.80807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,50.7377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,51.18534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,50.57473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,50.35108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,50.61987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,50.13559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,50.60578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,49.6075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,49.75321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,49.70698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,49.92746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,49.29175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,49.16006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,49.37071);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,48.79407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,49.16041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,48.70855);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,48.96318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,48.52599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,48.54188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,48.19552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,47.94503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,48.07121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,48.41264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,48.00552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,47.81136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,48.18323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,47.82846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,47.75633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,47.31988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,47.62711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,47.27647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,47.77846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,47.01166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,46.671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,47.4301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,46.7235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,46.54807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,46.58204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,46.75278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,46.19596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,47.45844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,45.72801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,45.80816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,46.10772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,45.72633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,45.58751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,45.68229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,45.51822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,45.57171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,46.54475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,44.88149);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,45.35908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,45.123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,45.41601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,45.22259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,45.33196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,52.51492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,44.40259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,44.34231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,44.35589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,44.27624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,43.87676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,43.97115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,44.6489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,43.95519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,44.02129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,43.81493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,43.97782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,43.53352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,43.38881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,43.412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,43.0187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,43.23533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,43.2207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,42.8278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,43.24323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,42.54206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,42.52381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,42.67795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,42.33237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,43.17758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,42.32638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,42.17868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,42.37601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,42.38544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,41.85726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,41.84543);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,42.39662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,41.78962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,41.58564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,41.74411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,41.25263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,41.11522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,41.5609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,40.92807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,41.57459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,40.93961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,41.02137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,40.7707);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,41.22601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,40.47439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,40.44351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,40.22498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,40.04238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,40.26763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,40.28465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,46.05536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,39.92469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,39.79361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,39.95134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,39.64091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,39.54514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,40.46024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,39.64648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,39.05684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,39.85282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,39.33059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,39.36772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,38.92264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,39.02695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,38.62991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,38.93959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,38.84408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,38.24063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,38.71711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,38.4044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,38.29519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,38.4039);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,37.73365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,37.99419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,38.09674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,37.4716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,37.73309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,37.60123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,37.60276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,37.60199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,37.72899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,37.14607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,37.50037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,37.41079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,36.99278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,37.11026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,36.96677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,36.59695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,36.20094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,36.54295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,37.10347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,36.66775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,36.31202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,36.20475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,36.49561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,35.82655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,36.44059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,35.58368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,35.54859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,35.46669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,35.91231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,35.65976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,35.2269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,35.50364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,35.23547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,35.23106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,35.15691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,35.10221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,35.02436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,35.07775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,34.4554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,34.70156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,34.13761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,34.96875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,33.8544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,34.45109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,34.00538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,34.17436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,34.09106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,33.95152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,33.96816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,33.96263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,34.61635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,34.01776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,33.79762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,33.79143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,33.0252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,33.83425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,33.35785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,33.34015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,32.83383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,32.81724);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,33.24439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,33.88962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,32.88579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,32.85914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,32.45398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,32.65841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,33.33028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,32.55935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,32.55185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,32.50263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,32.01615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,31.95324);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,32.16817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,32.22954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,31.89382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,31.66372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,31.42569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,31.70148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,31.90189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,31.57911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,31.58736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,31.51145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,31.3981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,31.58539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,31.14042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,31.19085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,31.35131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,30.71709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,30.8647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,30.93785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,30.6396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,30.64033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,30.44803);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,30.57014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,30.20746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,30.2107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,30.2675);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,30.62114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,30.28776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,29.83769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,29.90367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,35.79476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,29.6067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,29.53242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,29.24623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,29.36512);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,29.46091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,29.48815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,29.3202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,28.99199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,29.39696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,29.55181);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,29.03074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,28.72862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,28.57924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,28.7105);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,28.93425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,29.11739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,28.8029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,28.76118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,28.43193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,28.38046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,28.39602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,28.27079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,28.32375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,28.15712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,28.40131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,27.79216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,27.70989);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,27.81288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,27.6385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,27.56145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,27.71435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,27.56962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,26.89981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,27.67557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,27.42262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,26.92731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,27.18328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,27.3598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,27.45335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,26.97247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,27.83119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,26.82998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,26.70496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,26.39809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,26.72963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,26.48501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,26.54486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,26.66111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,26.23624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,26.47159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,26.41758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,26.23208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,26.13745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,26.22452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,26.17449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,25.82164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,25.58992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,25.79368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,25.86037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,25.80391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,25.7112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,25.24104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,26.4832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,25.12957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,25.32723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,25.44875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,25.35002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,25.15174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,25.10237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,25.18706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,24.86023);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,24.9713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,24.99341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,24.80119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,24.72176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,24.74167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,44.68761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,24.48791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,25.63027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,24.72374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,24.55429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,24.43973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,24.70046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,24.47922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,24.18386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,24.37349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,24.39189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,24.02255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,24.1607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,23.6957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,24.19708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,23.57567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,24.10948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,23.576);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,23.78116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,23.94695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,23.74312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,23.51389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,23.16478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,24.33878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,23.16258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,23.32432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,23.60338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,23.16033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,23.3495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,23.04011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,23.13262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,22.70726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,22.96361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,22.69824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,22.71514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,22.43875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,23.04007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,22.84855);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,22.24024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,22.37664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,22.09387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,22.45683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,22.11839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,22.22928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,21.80564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,21.85225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,21.73583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,23.0405);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,22.07966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,22.02927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,21.65349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,21.42248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,21.54846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,21.87517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,21.3122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,21.62699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,21.52129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,21.34812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,21.54011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,21.555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,21.21824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,21.09279);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,21.24826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,21.40729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,21.15848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,21.53185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,20.91741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,20.89009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,20.79229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,21.16493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,20.63627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,21.16407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,20.74802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,20.87229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,21.45662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,20.66745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,20.34455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,20.34391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,20.70973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,20.31859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,20.37833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,19.84811);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,19.92919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,20.22336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,19.76795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,20.27059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,20.2115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,20.17785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,20.06986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,19.85348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,19.84594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,19.79435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,19.71801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,19.62489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,19.49779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,20.09145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,19.79559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,19.40551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,19.62841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,19.53719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,21.02566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,19.32468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,19.10964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,19.27428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,19.15066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,19.2095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,19.04981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,19.08509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,18.8663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,19.09172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,18.73672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,19.20907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,19.15387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,18.75944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,18.98573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,18.89123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,18.65568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,18.36228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,19.20521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,18.73994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,18.6905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,18.44333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,18.46856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,18.57191);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,18.12548);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,18.00902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,18.57385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,17.78521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,18.11466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,17.86226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,18.07233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,17.80486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,17.98917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,18.21307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,17.83715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,17.79561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,17.75085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,17.59959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,17.87527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,17.74525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,17.7544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,18.4384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,17.68251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,17.82532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,17.59237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,17.33352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,17.34033);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,17.16099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,17.21976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,17.44924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,16.94994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,17.2084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,17.38666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,17.23356);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,17.49512);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,16.66954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,17.047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,16.95183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,16.74785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,17.09499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,16.32469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,16.562);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,16.82352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,16.77336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,16.55426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,16.79621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,16.55239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,16.43281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,16.5085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,16.50758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,16.29513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,16.37642);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,16.35254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,16.48125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,16.14377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,15.98173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,16.30915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,16.27531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,16.1511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,16.15144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,16.0534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,15.50063);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,15.81654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,15.8058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,15.7981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,15.82834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,16.36654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,15.80274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,15.9334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,16.00564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,15.59868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,15.30297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,15.6196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,15.45755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,15.4472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,16.02519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,15.4941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,15.31706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,15.25272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,15.4459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,15.52094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,15.42713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,15.01875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,15.60283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,14.84646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,15.18038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,14.80292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,14.86171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,14.77824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,14.90555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,15.00716);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,14.75783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,14.95916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,14.73236);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,14.68674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,14.90119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,14.95579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,14.81597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,14.50369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,14.75168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,14.50946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,14.52957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,14.631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,14.80836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,14.54426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,14.45297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,14.28238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,14.06413);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,14.49337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,14.18557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,14.24764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,14.10861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,14.0355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,14.30704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,13.9653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,13.74801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,14.10644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,14.4011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,13.73348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,14.19704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,14.24704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,14.00625);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,13.91124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,13.76549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,14.41825);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,13.96008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,13.86319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,13.81691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,13.52899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,13.72234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,13.53744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,13.7852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,13.78987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,13.52137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,13.58877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,13.28534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,13.60905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,13.31771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,13.54983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,12.99863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,13.42618);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,13.43089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,13.43434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,12.94555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,13.53719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,13.28171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,13.28263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,13.17682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,13.21305);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,12.70886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,13.02373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,12.95608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,12.83284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,12.88827);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,12.55598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,13.02178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,13.1696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,12.57867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,13.19787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,12.41695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,12.87762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,12.58036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,12.70471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,12.74263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,12.85289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,12.58725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,12.7507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,12.55933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,12.53283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,12.34132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,12.48215);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,12.21152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,12.31109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,12.24692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,12.25264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,12.2808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,12.24728);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,12.12337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,12.32357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,12.60728);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,12.32237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,12.30426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,11.8808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,12.15567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,11.68255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,12.38371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,12.46955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,12.06872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,11.9797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,12.45557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,12.04797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,11.96972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,11.66715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,11.29125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,11.81324);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,11.85121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,11.58208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,11.62937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,11.44763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,11.44792);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,11.62988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,11.26425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,12.9944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,11.22527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,11.57142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,12.7212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,11.42826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,11.42277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,11.55306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,11.61251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,11.38975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,11.48835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,11.3554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,11.14546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,11.44459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,11.75686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,11.0195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,11.06084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,11.41663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,10.97977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,11.1708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,10.80613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,10.88656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,11.15692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,11.06372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,10.59147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,11.04599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,11.19114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,10.86545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,10.74661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,10.76692);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,11.00022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,10.69858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,10.66341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,10.884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,10.74386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,11.19181);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,10.78536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,10.95073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,10.82547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,10.56696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,10.41619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,10.5051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,10.45874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,10.67067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,10.57017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,10.5494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,10.57992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,10.38659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,10.49709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,10.47928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,10.8705);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,10.33506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,10.40769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,10.07257);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,10.34739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,10.17936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,10.26757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,9.977965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,9.939881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,10.39696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,10.3714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,10.25349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,9.994325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,10.0766);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,9.902546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,9.973679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,10.38905);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,9.890458);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,10.00874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,9.619884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,9.860042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,9.979207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,9.988046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,9.556761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,9.571022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,9.844953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,9.822633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,9.713978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,9.514944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,9.802661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,9.566799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,9.723601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,9.479072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,9.368311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,9.630838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,9.549946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,9.631405);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,9.928367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,9.634353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,9.403002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,9.565307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,9.364771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,9.318504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,9.696286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,9.084035);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,9.156527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,9.444364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,9.122375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,9.595273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,9.159666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,9.386563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,9.339832);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,9.4142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,9.422879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,8.70895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,8.986708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,9.053535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,9.015355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,9.200363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,9.294875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,9.171085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,8.967535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,9.217999);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,9.051614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,8.943884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,8.726596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,8.805204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,8.811431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,9.071966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,9.108207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,9.048155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,8.883048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,8.83111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,9.101246);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,8.636216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,9.000259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,8.686639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,8.617117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,8.881962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,8.56689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,8.292666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,8.470448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,8.930835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,8.698294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,8.95372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,8.654182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,8.646623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,8.399256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,8.753087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,8.738308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,8.567646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,8.839689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,8.666303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,8.482997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,8.348869);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,8.290827);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,8.796157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,8.135374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,8.274324);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,8.33856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,8.398508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,8.503983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,8.257163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,8.384884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,8.409475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,8.485948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,8.269176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,8.017848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,8.168968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,8.305817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,7.937025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,8.132218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,8.142212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,8.063643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,8.86982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,8.077695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,8.039593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,8.077674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,7.855585);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,7.928668);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,8.041206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,8.012459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,8.010487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,7.799636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,7.835806);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,7.773711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,7.939924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,7.833136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,7.88799);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,7.585515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,7.825779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,7.619078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,7.651193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,7.829488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,7.240874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,7.741079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,8.159084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,7.516228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,7.590226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,7.642561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,7.731744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,7.777889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,7.547937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,7.343614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,7.401499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,7.953468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,7.549246);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,7.58532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,7.729711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,7.551072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,7.348493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,7.661042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,7.078267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,7.47421);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,7.569572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,7.399032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,117.5446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(4885736);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_H_mass__39 = new TH1D("VH_tagOnly_H_mass__39","",1000,0,2000);
   VH_tagOnly_H_mass__39->SetBinContent(1000,75);
   VH_tagOnly_H_mass__39->SetBinContent(1001,38939);
   VH_tagOnly_H_mass__39->SetEntries(2827694);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__39->SetLineColor(ci);
   VH_tagOnly_H_mass__39->SetLineWidth(2);
   VH_tagOnly_H_mass__39->SetMarkerStyle(20);
   VH_tagOnly_H_mass__39->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__39->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__39->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__39->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__39->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__39->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__39->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__39->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__39->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__39->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__39->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1039[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1039[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4461.999, 9286.217,
   9326.31, 9498.429, 9363.246, 9265.863, 9534.545, 9586.276, 9468.731, 9680.101, 9562.611, 9577.592, 9541.166, 9552.235, 9509.077, 9501.508, 9465.538, 9485.898,
   9551.204, 9579.638, 9581.491, 9553.601, 9450.296, 9382.255, 9325.874, 9351.783, 9432.261, 9414.408, 9448.092, 9280.25, 4614.504, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 53.66595 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1039[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1039[1000] = { 0, 0, 0, 0, 0.0274627, 0.3675106, 0.0257415, 0.04357354, 0.1117668, 0.063721, 0.6444435, 1.905358, 5.183432, 8.736937, 13.26785, 17.65997, 22.17009,
   26.56489, 31.40352, 36.01496, 39.8815, 43.87438, 48.17702, 51.08659, 54.07005, 57.32754, 59.27468, 61.59955, 63.87354, 65.44132, 66.72698, 68.01687, 70.52638,
   69.96873, 71.11378, 71.25073, 72.65021, 73.29238, 75.06657, 75.7106, 75.35834, 75.212, 74.55862, 74.23873, 76.65875, 73.50476, 72.27552, 71.11174, 70.8259,
   70.66815, 70.14468, 69.01138, 68.82484, 69.10429, 68.69251, 68.15938, 69.43322, 68.8956, 67.92221, 68.16683, 68.12213, 68.10648, 67.33268, 67.41684, 67.05176,
   67.76396, 67.32204, 67.28875, 67.34039, 66.91921, 66.53415, 67.3192, 66.76187, 66.33965, 66.42734, 67.05109, 65.77378, 66.54649, 65.44667, 65.47938, 65.36795,
   65.50475, 65.01105, 64.88615, 64.36659, 64.79905, 64.40237, 64.85776, 63.88212, 65.32611, 63.60652, 63.53321, 63.62733, 63.33801, 62.84782, 62.79268, 62.38818,
   62.32365, 62.6265, 62.01805, 61.96377, 61.37872, 60.95924, 61.15905, 61.28567, 60.77926, 60.4254, 60.23512, 60.0618, 59.62095, 59.58074, 60.14874, 59.14011,
   59.95313, 60.08195, 58.46051, 58.18567, 58.03345, 58.23504, 57.75314, 57.54398, 58.42739, 57.36423, 57.92973, 57.87921, 56.89758, 56.59914, 56.11182, 58.61129,
   55.94788, 56.02068, 55.60834, 55.40028, 55.30831, 56.23568, 54.89594, 54.66004, 54.95048, 54.70628, 54.31588, 54.70619, 54.33654, 54.27866, 53.90629, 53.81117,
   53.82291, 53.70884, 53.57611, 53.25698, 53.01224, 53.94465, 52.62123, 52.14337, 52.52028, 53.16076, 52.13319, 52.23832, 51.8891, 51.84501, 51.9635, 51.32106,
   51.51227, 51.30585, 51.14829, 51.44925, 50.80807, 50.7377, 51.18534, 50.57473, 50.35108, 50.61987, 50.13559, 50.60578, 49.6075, 49.75321, 49.70698, 49.92746,
   49.29175, 49.16006, 49.37071, 48.79407, 49.16041, 48.70855, 48.96318, 48.52599, 48.54188, 48.19552, 47.94503, 48.07121, 48.41264, 48.00552, 47.81136, 48.18323,
   47.82846, 47.75633, 47.31988, 47.62711, 47.27647, 47.77846, 47.01166, 46.671, 47.4301, 46.7235, 46.54807, 46.58204, 46.75278, 46.19596, 47.45844, 45.72801,
   45.80816, 46.10772, 45.72633, 45.58751, 45.68229, 45.51822, 45.57171, 46.54475, 44.88149, 45.35908, 45.123, 45.41601, 45.22259, 45.33196, 52.51492, 44.40259,
   44.34231, 44.35589, 44.27624, 43.87676, 43.97115, 44.6489, 43.95519, 44.02129, 43.81493, 43.97782, 43.53352, 43.38881, 43.412, 43.0187, 43.23533, 43.2207,
   42.8278, 43.24323, 42.54206, 42.52381, 42.67795, 42.33237, 43.17758, 42.32638, 42.17868, 42.37601, 42.38544, 41.85726, 41.84543, 42.39662, 41.78962, 41.58564,
   41.74411, 41.25263, 41.11522, 41.5609, 40.92807, 41.57459, 40.93961, 41.02137, 40.7707, 41.22601, 40.47439, 40.44351, 40.22498, 40.04238, 40.26763, 40.28465,
   46.05536, 39.92469, 39.79361, 39.95134, 39.64091, 39.54514, 40.46024, 39.64648, 39.05684, 39.85282, 39.33059, 39.36772, 38.92264, 39.02695, 38.62991, 38.93959,
   38.84408, 38.24063, 38.71711, 38.4044, 38.29519, 38.4039, 37.73365, 37.99419, 38.09674, 37.4716, 37.73309, 37.60123, 37.60276, 37.60199, 37.72899, 37.14607,
   37.50037, 37.41079, 36.99278, 37.11026, 36.96677, 36.59695, 36.20094, 36.54295, 37.10347, 36.66775, 36.31202, 36.20475, 36.49561, 35.82655, 36.44059, 35.58368,
   35.54859, 35.46669, 35.91231, 35.65976, 35.2269, 35.50364, 35.23547, 35.23106, 35.15691, 35.10221, 35.02436, 35.07775, 34.4554, 34.70156, 34.13761, 34.96875,
   33.8544, 34.45109, 34.00538, 34.17436, 34.09106, 33.95152, 33.96816, 33.96263, 34.61635, 34.01776, 33.79762, 33.79143, 33.0252, 33.83425, 33.35785, 33.34015,
   32.83383, 32.81724, 33.24439, 33.88962, 32.88579, 32.85914, 32.45398, 32.65841, 33.33028, 32.55935, 32.55185, 32.50263, 32.01615, 31.95324, 32.16817, 32.22954,
   31.89382, 31.66372, 31.42569, 31.70148, 31.90189, 31.57911, 31.58736, 31.51145, 31.3981, 31.58539, 31.14042, 31.19085, 31.35131, 30.71709, 30.8647, 30.93785,
   30.6396, 30.64033, 30.44803, 30.57014, 30.20746, 30.2107, 30.2675, 30.62114, 30.28776, 29.83769, 29.90367, 35.79476, 29.6067, 29.53242, 29.24623, 29.36512,
   29.46091, 29.48815, 29.3202, 28.99199, 29.39696, 29.55181, 29.03074, 28.72862, 28.57924, 28.7105, 28.93425, 29.11739, 28.8029, 28.76118, 28.43193, 28.38046,
   28.39602, 28.27079, 28.32375, 28.15712, 28.40131, 27.79216, 27.70989, 27.81288, 27.6385, 27.56145, 27.71435, 27.56962, 26.89981, 27.67557, 27.42262, 26.92731,
   27.18328, 27.3598, 27.45335, 26.97247, 27.83119, 26.82998, 26.70496, 26.39809, 26.72963, 26.48501, 26.54486, 26.66111, 26.23624, 26.47159, 26.41758, 26.23208,
   26.13745, 26.22452, 26.17449, 25.82164, 25.58992, 25.79368, 25.86037, 25.80391, 25.7112, 25.24104, 26.4832, 25.12957, 25.32723, 25.44875, 25.35002, 25.15174,
   25.10237, 25.18706, 24.86023, 24.9713, 24.99341, 24.80119, 24.72176, 24.74167, 44.68761, 24.48791, 25.63027, 24.72374, 24.55429, 24.43973, 24.70046, 24.47922,
   24.18386, 24.37349, 24.39189, 24.02255, 24.1607, 23.6957, 24.19708, 23.57567, 24.10948, 23.576, 23.78116, 23.94695, 23.74312, 23.51389, 23.16478, 24.33878,
   23.16258, 23.32432, 23.60338, 23.16033, 23.3495, 23.04011, 23.13262, 22.70726, 22.96361, 22.69824, 22.71514, 22.43875, 23.04007, 22.84855, 22.24024, 22.37664,
   22.09387, 22.45683, 22.11839, 22.22928, 21.80564, 21.85225, 21.73583, 23.0405, 22.07966, 22.02927, 21.65349, 21.42248, 21.54846, 21.87517, 21.3122, 21.62699,
   21.52129, 21.34812, 21.54011, 21.555, 21.21824, 21.09279, 21.24826, 21.40729, 21.15848, 21.53185, 20.91741, 20.89009, 20.79229, 21.16493, 20.63627, 21.16407,
   20.74802, 20.87229, 21.45662, 20.66745, 20.34455, 20.34391, 20.70973, 20.31859, 20.37833, 19.84811, 19.92919, 20.22336, 19.76795, 20.27059, 20.2115, 20.17785,
   20.06986, 19.85348, 19.84594, 19.79435, 19.71801, 19.62489, 19.49779, 20.09145, 19.79559, 19.40551, 19.62841, 19.53719, 21.02566, 19.32468, 19.10964, 19.27428,
   19.15066, 19.2095, 19.04981, 19.08509, 18.8663, 19.09172, 18.73672, 19.20907, 19.15387, 18.75944, 18.98573, 18.89123, 18.65568, 18.36228, 19.20521, 18.73994,
   18.6905, 18.44333, 18.46856, 18.57191, 18.12548, 18.00902, 18.57385, 17.78521, 18.11466, 17.86226, 18.07233, 17.80486, 17.98917, 18.21307, 17.83715, 17.79561,
   17.75085, 17.59959, 17.87527, 17.74525, 17.7544, 18.4384, 17.68251, 17.82532, 17.59237, 17.33352, 17.34033, 17.16099, 17.21976, 17.44924, 16.94994, 17.2084,
   17.38666, 17.23356, 17.49512, 16.66954, 17.047, 16.95183, 16.74785, 17.09499, 16.32469, 16.562, 16.82352, 16.77336, 16.55426, 16.79621, 16.55239, 16.43281,
   16.5085, 16.50758, 16.29513, 16.37642, 16.35254, 16.48125, 16.14377, 15.98173, 16.30915, 16.27531, 16.1511, 16.15144, 16.0534, 15.50063, 15.81654, 15.8058,
   15.7981, 15.82834, 16.36654, 15.80274, 15.9334, 16.00564, 15.59868, 15.30297, 15.6196, 15.45755, 15.4472, 16.02519, 15.4941, 15.31706, 15.25272, 15.4459,
   15.52094, 15.42713, 15.01875, 15.60283, 14.84646, 15.18038, 14.80292, 14.86171, 14.77824, 14.90555, 15.00716, 14.75783, 14.95916, 14.73236, 14.68674, 14.90119,
   14.95579, 14.81597, 14.50369, 14.75168, 14.50946, 14.52957, 14.631, 14.80836, 14.54426, 14.45297, 14.28238, 14.06413, 14.49337, 14.18557, 14.24764, 14.10861,
   14.0355, 14.30704, 13.9653, 13.74801, 14.10644, 14.4011, 13.73348, 14.19704, 14.24704, 14.00625, 13.91124, 13.76549, 14.41825, 13.96008, 13.86319, 13.81691,
   13.52899, 13.72234, 13.53744, 13.7852, 13.78987, 13.52137, 13.58877, 13.28534, 13.60905, 13.31771, 13.54983, 12.99863, 13.42618, 13.43089, 13.43434, 12.94555,
   13.53719, 13.28171, 13.28263, 13.17682, 13.21305, 12.70886, 13.02373, 12.95608, 12.83284, 12.88827, 12.55598, 13.02178, 13.1696, 12.57867, 13.19787, 12.41695,
   12.87762, 12.58036, 12.70471, 12.74263, 12.85289, 12.58725, 12.7507, 12.55933, 12.53283, 12.34132, 12.48215, 12.21152, 12.31109, 12.24692, 12.25264, 12.2808,
   12.24728, 12.12337, 12.32357, 12.60728, 12.32237, 12.30426, 11.8808, 12.15567, 11.68255, 12.38371, 12.46955, 12.06872, 11.9797, 12.45557, 12.04797, 11.96972,
   11.66715, 11.29125, 11.81324, 11.85121, 11.58208, 11.62937, 11.44763, 11.44792, 11.62988, 11.26425, 12.9944, 11.22527, 11.57142, 12.7212, 11.42826, 11.42277,
   11.55306, 11.61251, 11.38975, 11.48835, 11.3554, 11.14546, 11.44459, 11.75686, 11.0195, 11.06084, 11.41663, 10.97977, 11.1708, 10.80613, 10.88656, 11.15692,
   11.06372, 10.59147, 11.04599, 11.19114, 10.86545, 10.74661, 10.76692, 11.00022, 10.69858, 10.66341, 10.884, 10.74386, 11.19181, 10.78536, 10.95073, 10.82547,
   10.56696, 10.41619, 10.5051, 10.45874, 10.67067, 10.57017, 10.5494, 10.57992, 10.38659, 10.49709, 10.47928, 10.8705, 10.33506, 10.40769, 10.07257, 10.34739,
   10.17936, 10.26757, 9.977965, 9.939881, 10.39696, 10.3714, 10.25349, 9.994325, 10.0766, 9.902546, 9.973679, 10.38905, 9.890458, 10.00874, 9.619884, 9.860042,
   9.979207, 9.988046, 9.556761, 9.571022, 9.844953, 9.822633, 9.713978, 9.514944, 9.802661, 9.566799, 9.723601, 9.479072, 9.368311, 9.630838, 9.549946, 9.631405,
   9.928367, 9.634353, 9.403002, 9.565307, 9.364771, 9.318504, 9.696286, 9.084035, 9.156527, 9.444364, 9.122375, 9.595273, 9.159666, 9.386563, 9.339832, 9.4142,
   9.422879, 8.70895, 8.986708, 9.053535, 9.015355, 9.200363, 9.294875, 9.171085, 8.967535, 9.217999, 9.051614, 8.943884, 8.726596, 8.805204, 8.811431, 9.071966,
   9.108207, 9.048155, 8.883048, 8.83111, 9.101246, 8.636216, 9.000259, 8.686639, 8.617117, 8.881962, 8.56689, 8.292666, 8.470448, 8.930835, 8.698294, 8.95372,
   8.654182, 8.646623, 8.399256, 8.753087, 8.738308, 8.567646, 8.839689, 8.666303, 8.482997, 8.348869, 8.290827, 8.796157, 8.135374, 8.274324, 8.33856, 8.398508,
   8.503983, 8.257163, 8.384884, 8.409475, 8.485948, 8.269176, 8.017848, 8.168968, 8.305817, 7.937025, 8.132218, 8.142212, 8.063643, 8.86982, 8.077695, 8.039593,
   8.077674, 7.855585, 7.928668, 8.041206, 8.012459, 8.010487, 7.799636, 7.835806, 7.773711, 7.939924, 7.833136, 7.88799, 7.585515, 7.825779, 7.619078, 7.651193,
   7.829488, 7.240874, 7.741079, 8.159084, 7.516228, 7.590226, 7.642561, 7.731744, 7.777889, 7.547937, 7.343614, 7.401499, 7.953468, 7.549246, 7.58532, 7.729711,
   7.551072, 7.348493, 7.661042, 7.078267, 7.47421, 7.569572, 7.399032 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1039,Graph_from_VH_tagOnly_2b1c_H_mass_fy1039,Graph_from_VH_tagOnly_2b1c_H_mass_fex1039,Graph_from_VH_tagOnly_2b1c_H_mass_fey1039);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetMinimum(-1059.278);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetMaximum(10732.15);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tagOnly_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__40 = new TH1D("data_mc_ratio__40","",1000,0,2000);
   data_mc_ratio__40->SetBinContent(1000,1.397534);
   data_mc_ratio__40->SetBinContent(1001,1.235442);
   data_mc_ratio__40->SetBinError(1000,0.1613734);
   data_mc_ratio__40->SetBinError(1001,0.007773442);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(30.91952);
   data_mc_ratio__40->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__40->SetLineColor(ci);
   data_mc_ratio__40->SetLineWidth(2);
   data_mc_ratio__40->SetMarkerStyle(20);
   data_mc_ratio__40->SetMarkerSize(1.2);
   data_mc_ratio__40->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__40->GetXaxis()->SetRange(1,150);
   data_mc_ratio__40->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__40->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__40->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__40->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__40->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__40->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__40->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__40->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__40->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__40->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1040[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1040[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1040[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1040[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0159372, 0.007626992,
   0.00757729, 0.007384872, 0.007370454, 0.007427785, 0.007247781, 0.007165714, 0.007198365, 0.007172779, 0.007204686, 0.007091784, 0.007144497, 0.007131539, 0.00716226, 0.007086526, 0.007122346, 0.007068573,
   0.007094808, 0.007027618, 0.007022785, 0.007048692, 0.007081176, 0.007091488, 0.007218541, 0.007138945, 0.007033271, 0.007055923, 0.007096786, 0.007087501, 0.01442116, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.137872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.8345536);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.165446);
   Graph_Graph_from_mc_statistical_error1040->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1040->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1040->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1040->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1040->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1040);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagOnly_SR_18->cd();
   H_mass_tagOnly_SR_18->Modified();
   H_mass_tagOnly_SR_18->cd();
   H_mass_tagOnly_SR_18->SetSelected(H_mass_tagOnly_SR_18);
}
