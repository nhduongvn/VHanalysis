#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Mon Jan  8 11:15:51 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_17 = new TCanvas("Z_mass_tagFirst_SR_17", "Z_mass_tagFirst_SR_17",0,0,600,600);
   Z_mass_tagFirst_SR_17->SetHighLightColor(2);
   Z_mass_tagFirst_SR_17->Range(0,0,1,1);
   Z_mass_tagFirst_SR_17->SetFillColor(0);
   Z_mass_tagFirst_SR_17->SetFillStyle(4000);
   Z_mass_tagFirst_SR_17->SetBorderMode(0);
   Z_mass_tagFirst_SR_17->SetBorderSize(2);
   Z_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-24.29601,315.7258,24281.71);
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
   st->SetMaximum(21851.11);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",1000,0,2000);
   st_stack_44->SetMinimum(0.01);
   st_stack_44->SetMaximum(21851.11);
   st_stack_44->SetDirectory(nullptr);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->SetLineWidth(0);
   st_stack_44->GetXaxis()->SetRange(1,150);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetTitleOffset(1);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetLabelSize(0.05);
   st_stack_44->GetYaxis()->SetTitleSize(0.057);
   st_stack_44->GetYaxis()->SetTitleOffset(1.2);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetTitleOffset(1);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,9082.271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,9358.605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,9634.939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,9576.126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,9639.264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,9748.241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,9833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,9766.836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,9646.183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,9618.074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,9625.858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,9578.721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,9387.579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,9438.608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,9325.739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,9256.98);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,8955.564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,8836.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,8565.063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,8465.6);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,8262.35);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,8021.044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,8004.611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,7677.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,7624.056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,7554.865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,7374.534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,7251.719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,7174.743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,7036.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,43.24479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,23295.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9669829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7490217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.484224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.571701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.946552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,13.20206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,17.73036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,22.686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,27.04788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,32.1818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,36.80129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,41.10758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,45.34521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,48.87618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,52.53308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,55.05182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,57.64224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,59.59942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,61.24904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,62.67064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,63.61689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,64.54928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,64.35197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,64.56376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,64.9277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,65.20936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,64.9896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,64.58693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,64.49276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,64.51885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,64.36068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,63.7153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,63.88823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,63.50509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,63.27054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,62.23194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,61.81736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,60.86003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,60.50563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,59.77488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,58.89553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,58.83517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,57.62115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,57.41957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,57.15842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,56.47213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,55.99992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,55.70191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,55.16212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,54.8391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,54.5176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,54.25972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,54.19419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,53.92089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,53.63923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,53.32628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,52.75687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,52.51349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,52.23856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,51.93878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,51.59558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,51.59196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,51.59558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,50.92246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,50.61119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,50.43907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,50.18073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,49.71646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,49.50537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,49.38244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,49.01755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,49.0309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,48.23297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,48.03677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,47.90617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,47.8163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,47.66941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,47.13484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,47.05542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,46.30627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,46.18495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,45.93525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,45.97188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,45.36789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,45.43585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,45.00368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,44.93506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,44.34647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,44.12876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,43.79269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,43.47553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,43.44972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,42.5824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,42.73583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,42.37989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,42.29376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,42.3512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,41.62522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,41.34573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,41.70601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,40.99825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,40.6593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,40.42174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,40.36618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,40.15017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,39.67695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,39.03546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,39.10965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,38.82409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,38.82168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,38.393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,38.56068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,38.23925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,37.52591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,37.93976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,37.49101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,37.39612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,37.12761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,36.78858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,36.45667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,36.49256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,36.61279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,35.82277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,35.82538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,35.91141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,35.40003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,35.19074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,35.27301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,35.37889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,35.04162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,34.95078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,34.50652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,34.64175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,34.02901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,34.00702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,33.76419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,33.81123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,33.65601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,33.44419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,33.5419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,33.56698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,32.94277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,32.73205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,32.87173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,32.89164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,32.25725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,32.1847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,31.72529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,32.28333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,31.66038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,32.00991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,31.46486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,31.66924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,31.86058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,31.28306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,31.28604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,31.41132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,30.91019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,30.86479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,30.79806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,30.21261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,30.4377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,30.23426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,30.4377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,30.05124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,30.22808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,30.01388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,30.37312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,29.83891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,29.73531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.6629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,29.61874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,29.69441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,29.46364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,29.18943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,29.44777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,29.11245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,28.93849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,29.0256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,28.88351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,29.07066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,28.74071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,28.79596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,29.19584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,28.63641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,28.47925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,28.34761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,28.27164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,27.90881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,28.10246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,28.37069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,28.12242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,28.16893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,28.19879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,28.10579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,27.761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,27.57512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,27.73067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,27.42893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,27.22362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,27.95567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,27.75089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,27.29908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,27.02713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,27.1445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,27.32989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.91966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,27.30593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,27.18237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,26.84662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,27.15484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,26.68242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,26.81526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,26.38287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,26.64735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,26.72444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,26.5454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,26.52778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,26.47839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,26.71744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,26.67892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,26.3474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,26.20863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,25.88193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,26.59467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,26.06911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,26.30122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,26.09779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,26.09779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,26.15506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,25.573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,25.21212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,25.84215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,25.7152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,25.67153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,25.76969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,25.52908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,25.71156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,25.87108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,25.46307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,25.59492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,25.36741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,25.45939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,25.20099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,25.53274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,24.91741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,24.79703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,25.1304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,25.00731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.73662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,25.15271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,25.13412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,25.01105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,24.59256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,24.75929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,25.10434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,25.42264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,24.71015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,24.45148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,24.67986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,24.60017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,24.79326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.90239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,24.25952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,24.50496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,24.05825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,24.29033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,24.67607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,24.2441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,23.91793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,24.13586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,24.54689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,24.03881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,24.28648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.80428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,24.10485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,23.7925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,24.26723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,23.81606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,24.0427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.87097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,23.72953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,23.58328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,23.66245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,23.71376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,23.70193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,23.55948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,23.3081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,23.3762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,23.472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,23.55948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,23.32414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,23.29205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,23.3842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,22.97678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.79292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,23.29205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,23.3882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,23.11473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,22.5703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.86255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.9279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,23.19147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,22.99712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,22.98085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,22.98085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,23.02151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,22.79702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,22.67776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.80112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,22.61583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,22.65301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,22.55372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,22.71484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,22.686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,22.43734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,22.56201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,22.51223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,22.32034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,22.72307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,22.60756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,22.17745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.86255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,22.37056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,22.22799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,22.05908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,22.17324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.85039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.85039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.8846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,22.25322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.78611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,22.19852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,21.98265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,22.2322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,21.7904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,21.39197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,21.50097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,21.36135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,21.45744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,21.94007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,21.1325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,21.59643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,21.40508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,21.49662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,21.68717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,21.11923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,21.54875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,21.15462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,21.14577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,21.16345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,20.98152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,21.1502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,20.94584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,21.08378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,20.82496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,20.58561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,20.62192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,20.63551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,20.68078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,21.17229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,20.36641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,20.60377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,20.73496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,20.57652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,20.38477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.85637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.83843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,20.38936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,20.63551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,20.29743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,20.57652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,20.49456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,20.53558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,20.26054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,20.26516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,19.94893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,19.98171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,19.99575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,20.10766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.83612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.78892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,20.00042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.82669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,19.55124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.72266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,19.61808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,20.34345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.81253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,20.04246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,19.37347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,19.54167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,19.7274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.79837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,19.96767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,19.61331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,19.57514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,19.70369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,19.08659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.72266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.5321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,19.04735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.5321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,19.39759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,19.48896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,19.1404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.29125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.44574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.40723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,19.22813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,19.27185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,19.18919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.57513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,19.03262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,19.20867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,18.98835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,19.25243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,18.96865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.83011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,18.45899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,18.42857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,18.62541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.79035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,18.69556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.81024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,18.09576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.36759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.49947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.83028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.80527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.36759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,18.09576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.50453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.44886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.27572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,18.23474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.36249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,18.245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,18.18339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,17.64578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.47924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,18.15766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,18.01809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.32171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,18.02327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.78828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.87219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.53948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.68812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,17.70398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,17.9557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.92965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.83553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.36266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.73564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.71981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.30332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.71981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.55014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.31413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.49678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,17.0145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.51814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.40032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.33571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.31413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,17.17858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,17.21664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,16.99801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,17.22207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.84883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.40569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.80993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,17.22207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.34111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,17.2492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.56902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,16.987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.53512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.54643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.34172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.74864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.87655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.91529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.65907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.56902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.67029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.42733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.30736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.39884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.56902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.57466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.47848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,16.41594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.63098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,16.39314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,16.22688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.59721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.24992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.98303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.26142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,16.08799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.91267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.41024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.63405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.96547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,15.97718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,16.0589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.6699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.88915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.88326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.88915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.86559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,16.04143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,15.09237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,15.63405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,15.28934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.93616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.34429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,15.1727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.95961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.50795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.72946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,15.25873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.36256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.32599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,15.3808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,15.11713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,15.27711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,15.14185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,15.52);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,15.2526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.84248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,15.18502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,15.07997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.79199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.56265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.87394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.89279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.95545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.77935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.91162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,14.51119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.98043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,15.11094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.94294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.91789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.60752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,14.55622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.74134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,14.41421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.86766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,15.02406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,14.51763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.58831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,14.20511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,14.49184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,14.22484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,14.54337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,14.19194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,14.19852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,14.05955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.58831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.75701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,14.40772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,14.17875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.83157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,14.24455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,14.01958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,14.17216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.93261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.89228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.81805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.79095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.6957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.70253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.76381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.79095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,13.57914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.6957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.72298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.66152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.87208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.75021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.53085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.53085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.66152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.90574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.57914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.64097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.76381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.53085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.68887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.59978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.68204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,13.45462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,13.43376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.62726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,13.03097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,13.2727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,13.11679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.46851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,13.37096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.26565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.23036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.46157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,13.13816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.88666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.58565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,13.0811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.99504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.98784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.93735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,13.07395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.76271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,13.1808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,13.00942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.92289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,13.11679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.60791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.90116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,13.01661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.74071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.46621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.63014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.82119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.60791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.77003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.57821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.49617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.4737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,12.38342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,12.06212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.50365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,12.17784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,12.29248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,12.52607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,12.39097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.57078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,12.0466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,12.5186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,12.08535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.90116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.40606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.81936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.57821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.30008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.27726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.79561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.99215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.23912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.58767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.4512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.18552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.82727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.60379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.67609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.66007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.74795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,12.00773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.83518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.20086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.92177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.78768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.64402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.70009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.64402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.47414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.53915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,11.4415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.7559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.52293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.82727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,11.41695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,11.26857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.76385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.3265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.26027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,11.38414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.65204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,11.0253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.41695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,11.01682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,11.42514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.31824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.79561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.68068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,11.0253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.20199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.94871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.45783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,11.16855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.86297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.21033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.88017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.85436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.18528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.83711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,11.06763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,11.08451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.84574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.72436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,11.05072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.65438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.95724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.56625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.65438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.81984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,10.77655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.69817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.87157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.52191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.68068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.39675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.73307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.68943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.45952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.91449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.76787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.49522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.28826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.23359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,10.32455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.4863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,10.26096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.5574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,10.41472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,10.15102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.5751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.34265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.56625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.16023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.41472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.40574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,10.05848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.746881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.67192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.25184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.17861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,10.1141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.31549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.936896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.804272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.889735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.785179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,10.03987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,9.946302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,10.0956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.927482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.899185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.669829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.746881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.993196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.698795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.965086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.513854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,10.03987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.385215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.434899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.737283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.756469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.601902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,9.23456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.79473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.474459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,9.23456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,9.23456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.543293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.908626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,9.444805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.474459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.832842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.335267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.335267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.305169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.434899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.424983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.660154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.553086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,9.153197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,9.040127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,9.081406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.925624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.204133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.163407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,9.019416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,9.112243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.193968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.956997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.254789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.862545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.4547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.173605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,9.122498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.254789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.484323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.452116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.988261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.988261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.904647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,9.081406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.841418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,9.040127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.659762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.873089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.956997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.183793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.851988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.767075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.363144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.998658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.594732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,8.318301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.702846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,9.050464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.735019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.692095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,8.340753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.670553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.745718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.659762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.25058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.702846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.883621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.418862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.374318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,8.090359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.261906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.452116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.340753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.239239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.374318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.485241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.205122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.307053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.627309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.551104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.396619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.261906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.147943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.997364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.784062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,8.067211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,8.147943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.96221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,8.159411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.273215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,8.032363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,8.078793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.973945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.193718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.318301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.985663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,8.101909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.577099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.723766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.96221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.662996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.340753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,8.032363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,8.136459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.926901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.915096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.831965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.796065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.723766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.477723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.638553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,7.262035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.662996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.440115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.650784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.440115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.77204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.427537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,7.2749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.77204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.626302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.132113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.2749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.490217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.402316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.477723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.973013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.287742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.539987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.477723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.675189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.465208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.552378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.351614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.236237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,7.039742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.184364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.946142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,7.053012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.364322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.440115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.338884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.389673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.197367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.158286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.427537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.78268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.747941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,7.092673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.364322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.60174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,7.105844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.892085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,7.145212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,7.132113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.643391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.145212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.905639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.796452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.98641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,7.092673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.919166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,7.053012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.78268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.973013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.2749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.223304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.35566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.544124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.892085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.629301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,7.039742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,7.013126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.932667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.796452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.685482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.76888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,7.092673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.851263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.671481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.501117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.98641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.601031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.810196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.629301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.699454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.699454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.946142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.755052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.837602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.399645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.558397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.615181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.176591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.864898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.340931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.399645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.4288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.515485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.837602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.52982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.837602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.115737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.629301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.385017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.399645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.311369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.296536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.340931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.326167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.572639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.399645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.100428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.976549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.486718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.236852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.266765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.801897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.370355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.35566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,6.069696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.100428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.58685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.73707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.191712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.085081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,100.3698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3073644);

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
   
   TH1D *VH_tagFirst_Z_mass__87 = new TH1D("VH_tagFirst_Z_mass__87","",1000,0,2000);
   VH_tagFirst_Z_mass__87->SetBinContent(1000,50);
   VH_tagFirst_Z_mass__87->SetBinContent(1001,26893);
   VH_tagFirst_Z_mass__87->SetEntries(1359367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__87->SetLineColor(ci);
   VH_tagFirst_Z_mass__87->SetLineWidth(2);
   VH_tagFirst_Z_mass__87->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__87->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__87->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__87->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__87->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__87->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__87->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__87->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__87->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__87->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__87->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__87->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1087[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1087[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9082.271, 9358.605, 9634.939,
   9576.126, 9639.264, 9748.241, 9833, 9766.836, 9646.183, 9618.074, 9625.858, 9578.721, 9387.579, 9438.608, 9325.739, 9256.98, 8955.564, 8836.64, 8565.063,
   8465.6, 8262.35, 8021.044, 8004.611, 7677.68, 7624.056, 7554.865, 7374.534, 7251.719, 7174.743, 7036.36, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 43.24479 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1087[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9669829, 0.7490217, 2.484224, 5.571701, 8.946552, 13.20206,
   17.73036, 22.686, 27.04788, 32.1818, 36.80129, 41.10758, 45.34521, 48.87618, 52.53308, 55.05182, 57.64224, 59.59942, 61.24904, 62.67064, 63.61689, 64.54928,
   64.35197, 64.56376, 64.9277, 65.20936, 64.9896, 64.58693, 64.49276, 64.51885, 64.36068, 63.7153, 63.88823, 63.50509, 63.27054, 62.23194, 61.81736, 60.86003,
   60.50563, 59.77488, 58.89553, 58.83517, 57.62115, 57.41957, 57.15842, 56.47213, 55.99992, 55.70191, 55.16212, 54.8391, 54.5176, 54.25972, 54.19419, 53.92089,
   53.63923, 53.32628, 52.75687, 52.51349, 52.23856, 51.93878, 51.59558, 51.59196, 51.59558, 50.92246, 50.61119, 50.43907, 50.18073, 49.71646, 49.50537, 49.38244,
   49.01755, 49.0309, 48.23297, 48.03677, 47.90617, 47.8163, 47.66941, 47.13484, 47.05542, 46.30627, 46.18495, 45.93525, 45.97188, 45.36789, 45.43585, 45.00368,
   44.93506, 44.34647, 44.12876, 43.79269, 43.47553, 43.44972, 42.5824, 42.73583, 42.37989, 42.29376, 42.3512, 41.62522, 41.34573, 41.70601, 40.99825, 40.6593,
   40.42174, 40.36618, 40.15017, 39.67695, 39.03546, 39.10965, 38.82409, 38.82168, 38.393, 38.56068, 38.23925, 37.52591, 37.93976, 37.49101, 37.39612, 37.12761,
   36.78858, 36.45667, 36.49256, 36.61279, 35.82277, 35.82538, 35.91141, 35.40003, 35.19074, 35.27301, 35.37889, 35.04162, 34.95078, 34.50652, 34.64175, 34.02901,
   34.00702, 33.76419, 33.81123, 33.65601, 33.44419, 33.5419, 33.56698, 32.94277, 32.73205, 32.87173, 32.89164, 32.25725, 32.1847, 31.72529, 32.28333, 31.66038,
   32.00991, 31.46486, 31.66924, 31.86058, 31.28306, 31.28604, 31.41132, 30.91019, 30.86479, 30.79806, 30.21261, 30.4377, 30.23426, 30.4377, 30.05124, 30.22808,
   30.01388, 30.37312, 29.83891, 29.73531, 29.6629, 29.61874, 29.69441, 29.46364, 29.18943, 29.44777, 29.11245, 28.93849, 29.0256, 28.88351, 29.07066, 28.74071,
   28.79596, 29.19584, 28.63641, 28.47925, 28.34761, 28.27164, 27.90881, 28.10246, 28.37069, 28.12242, 28.16893, 28.19879, 28.10579, 27.761, 27.57512, 27.73067,
   27.42893, 27.22362, 27.95567, 27.75089, 27.29908, 27.02713, 27.1445, 27.32989, 26.91966, 27.30593, 27.18237, 26.84662, 27.15484, 26.68242, 26.81526, 26.38287,
   26.64735, 26.72444, 26.5454, 26.52778, 26.47839, 26.71744, 26.67892, 26.3474, 26.20863, 25.88193, 26.59467, 26.06911, 26.30122, 26.09779, 26.09779, 26.15506,
   25.573, 25.21212, 25.84215, 25.7152, 25.67153, 25.76969, 25.52908, 25.71156, 25.87108, 25.46307, 25.59492, 25.36741, 25.45939, 25.20099, 25.53274, 24.91741,
   24.79703, 25.1304, 25.00731, 24.73662, 25.15271, 25.13412, 25.01105, 24.59256, 24.75929, 25.10434, 25.42264, 24.71015, 24.45148, 24.67986, 24.60017, 24.79326,
   24.90239, 24.25952, 24.50496, 24.05825, 24.29033, 24.67607, 24.2441, 23.91793, 24.13586, 24.54689, 24.03881, 24.28648, 23.80428, 24.10485, 23.7925, 24.26723,
   23.81606, 24.0427, 23.87097, 23.72953, 23.58328, 23.66245, 23.71376, 23.70193, 23.55948, 23.3081, 23.3762, 23.472, 23.55948, 23.32414, 23.29205, 23.3842,
   22.97678, 22.79292, 23.29205, 23.3882, 23.11473, 22.5703, 22.86255, 22.9279, 23.19147, 22.99712, 22.98085, 22.98085, 23.02151, 22.79702, 22.67776, 22.80112,
   22.61583, 22.65301, 22.55372, 22.71484, 22.686, 22.43734, 22.56201, 22.51223, 22.32034, 22.72307, 22.60756, 22.17745, 22.86255, 22.37056, 22.22799, 22.05908,
   22.17324, 21.85039, 21.85039, 21.8846, 22.25322, 21.78611, 22.19852, 21.98265, 22.2322, 21.7904, 21.39197, 21.50097, 21.36135, 21.45744, 21.94007, 21.1325,
   21.59643, 21.40508, 21.49662, 21.68717, 21.11923, 21.54875, 21.15462, 21.14577, 21.16345, 20.98152, 21.1502, 20.94584, 21.08378, 20.82496, 20.58561, 20.62192,
   20.63551, 20.68078, 21.17229, 20.36641, 20.60377, 20.73496, 20.57652, 20.38477, 20.85637, 20.83843, 20.38936, 20.63551, 20.29743, 20.57652, 20.49456, 20.53558,
   20.26054, 20.26516, 19.94893, 19.98171, 19.99575, 20.10766, 19.83612, 19.78892, 20.00042, 19.82669, 19.55124, 19.72266, 19.61808, 20.34345, 19.81253, 20.04246,
   19.37347, 19.54167, 19.7274, 19.79837, 19.96767, 19.61331, 19.57514, 19.70369, 19.08659, 19.72266, 19.5321, 19.04735, 19.5321, 19.39759, 19.48896, 19.1404,
   19.29125, 19.44574, 19.40723, 19.22813, 19.27185, 19.18919, 18.57513, 19.03262, 19.20867, 18.98835, 19.25243, 18.96865, 18.83011, 18.45899, 18.42857, 18.62541,
   18.79035, 18.69556, 18.81024, 18.09576, 18.36759, 18.49947, 17.83028, 18.80527, 18.36759, 18.09576, 18.50453, 18.44886, 18.27572, 18.23474, 18.36249, 18.245,
   18.18339, 17.64578, 18.47924, 18.15766, 18.01809, 18.32171, 18.02327, 17.78828, 17.87219, 17.53948, 17.68812, 17.70398, 17.9557, 17.92965, 17.83553, 17.36266,
   17.73564, 17.71981, 17.30332, 17.71981, 17.55014, 17.31413, 17.49678, 17.0145, 17.51814, 17.40032, 17.33571, 17.31413, 17.17858, 17.21664, 16.99801, 17.22207,
   16.84883, 17.40569, 16.80993, 17.22207, 17.34111, 17.2492, 16.56902, 16.987, 16.53512, 16.54643, 16.34172, 16.74864, 16.87655, 16.91529, 16.65907, 16.56902,
   16.67029, 16.42733, 16.30736, 16.39884, 16.56902, 16.57466, 16.47848, 16.41594, 16.63098, 16.39314, 16.22688, 16.59721, 16.24992, 15.98303, 16.26142, 16.08799,
   15.91267, 16.41024, 15.63405, 15.96547, 15.97718, 16.0589, 15.6699, 15.88915, 15.88326, 15.88915, 15.86559, 16.04143, 15.09237, 15.63405, 15.28934, 15.93616,
   15.34429, 15.1727, 15.95961, 15.50795, 15.72946, 15.25873, 15.36256, 15.32599, 15.3808, 15.11713, 15.27711, 15.14185, 15.52, 15.2526, 14.84248, 15.18502,
   15.07997, 14.79199, 14.56265, 14.87394, 14.89279, 14.95545, 14.77935, 14.91162, 14.51119, 14.98043, 15.11094, 14.94294, 14.91789, 14.60752, 14.55622, 14.74134,
   14.41421, 14.86766, 15.02406, 14.51763, 14.58831, 14.20511, 14.49184, 14.22484, 14.54337, 14.19194, 14.19852, 14.05955, 14.58831, 13.75701, 14.40772, 14.17875,
   13.83157, 14.24455, 14.01958, 14.17216, 13.93261, 13.89228, 13.81805, 13.79095, 13.6957, 13.70253, 13.76381, 13.79095, 13.57914, 13.6957, 13.72298, 13.66152,
   13.87208, 13.75021, 13.53085, 13.53085, 13.66152, 13.90574, 13.57914, 13.64097, 13.76381, 13.53085, 13.68887, 13.59978, 13.68204, 13.45462, 13.43376, 13.62726,
   13.03097, 13.2727, 13.11679, 13.46851, 13.37096, 13.26565, 13.23036, 13.46157, 13.13816, 12.88666, 12.58565, 13.0811, 12.99504, 12.98784, 12.93735, 13.07395,
   12.76271, 13.1808, 13.00942, 12.92289, 13.11679, 12.60791, 12.90116, 13.01661, 12.74071, 12.46621, 12.63014, 12.82119, 12.60791, 12.77003, 12.57821, 12.49617,
   12.4737, 12.38342, 12.06212, 12.50365, 12.17784, 12.29248, 12.52607, 12.39097, 12.57078, 12.0466, 12.5186, 12.08535, 12.90116, 12.40606, 11.81936, 12.57821,
   12.30008, 12.27726, 11.79561, 11.99215, 12.23912, 11.58767, 12.4512, 12.18552, 11.82727, 11.60379, 11.67609, 11.66007, 11.74795, 12.00773, 11.83518, 12.20086,
   11.92177, 11.78768, 11.64402, 11.70009, 11.64402, 11.47414, 11.53915, 11.4415, 11.7559, 11.52293, 11.82727, 11.41695, 11.26857, 11.76385, 11.3265, 11.26027,
   11.38414, 11.65204, 11.0253, 11.41695, 11.01682, 11.42514, 11.31824, 11.79561, 10.68068, 11.227, 11.0253, 11.20199, 10.94871, 11.45783, 11.16855, 10.86297,
   11.21033, 10.88017, 10.85436, 11.18528, 10.83711, 11.06763, 11.08451, 10.84574, 10.72436, 11.05072, 10.65438, 10.95724, 10.56625, 10.65438, 10.81984, 10.77655,
   10.69817, 10.87157, 10.52191, 10.68068, 10.39675, 10.73307, 10.68943, 10.45952, 10.91449, 10.76787, 10.49522, 10.28826, 10.23359, 10.32455, 10.4863, 10.26096,
   10.5574, 10.41472, 10.15102, 10.5751, 10.34265, 10.56625, 10.16023, 10.41472, 10.40574, 10.05848, 9.746881, 10.67192, 10.25184, 10.17861, 10.1141, 10.31549,
   9.936896, 9.804272, 9.889735, 9.785179, 10.03987, 9.946302, 10.0956, 9.927482, 9.899185, 9.669829, 9.746881, 9.993196, 9.698795, 9.965086, 9.513854, 10.03987,
   9.385215, 9.434899, 9.737283, 9.756469, 9.601902, 9.23456, 9.79473, 9.474459, 9.23456, 9.23456, 9.543293, 9.908626, 9.444805, 9.474459, 9.832842, 9.335267,
   9.335267, 9.305169, 9.434899, 9.424983, 9.660154, 9.553086, 9.153197, 9.040127, 9.081406, 8.925624, 9.204133, 9.163407, 9.019416, 9.112243, 9.193968, 8.956997,
   9.254789, 8.862545, 9.4547, 9.173605, 9.122498, 9.254789, 9.484323, 8.452116, 8.988261, 8.988261, 8.904647, 9.081406, 8.841418, 9.040127, 8.659762, 8.873089,
   8.956997, 9.183793, 8.851988, 8.767075, 8.363144, 8.998658, 8.594732, 8.318301, 8.702846, 9.050464, 8.735019, 8.692095, 8.340753, 8.670553, 8.745718, 8.659762,
   8.25058, 8.702846, 8.883621, 8.078793, 8.418862, 8.374318, 8.090359, 8.261906, 8.452116, 8.340753, 8.239239, 8.374318, 8.485241, 8.205122, 8.307053, 8.627309,
   8.551104, 8.078793, 8.396619, 8.261906, 8.147943, 7.997364, 8.078793, 7.784062, 8.078793, 8.067211, 8.147943, 7.96221, 8.159411, 8.078793, 8.273215, 8.032363,
   8.078793, 7.973945, 8.193718, 8.318301, 7.985663, 8.101909, 7.577099, 7.723766, 7.96221, 7.662996, 8.340753, 8.032363, 8.136459, 7.926901, 7.915096, 7.831965,
   7.796065, 7.723766, 7.477723, 7.638553, 7.262035, 7.662996, 7.440115, 7.650784, 7.440115, 7.77204, 7.427537, 7.2749, 7.77204, 7.626302, 7.132113, 7.2749,
   7.490217, 7.402316, 7.477723, 6.973013, 7.287742, 7.539987, 7.477723, 7.675189, 7.465208, 7.552378, 7.351614, 7.236237, 7.039742, 7.184364, 6.946142, 7.053012,
   7.364322, 7.440115, 7.338884, 7.389673, 7.197367, 7.158286, 7.427537, 6.78268, 7.747941, 7.092673, 7.364322, 7.60174, 7.105844, 6.892085, 7.145212, 7.132113,
   6.643391, 7.145212, 6.905639, 6.796452, 6.98641, 7.092673, 6.919166, 7.053012, 6.78268, 6.973013, 7.2749, 7.223304, 6.35566, 6.544124, 6.892085, 6.629301,
   7.039742, 7.013126, 6.932667, 6.796452, 6.685482, 6.76888, 7.092673, 6.851263, 6.671481, 6.501117, 6.98641, 6.601031, 6.810196, 6.629301, 6.699454, 6.699454,
   6.946142, 6.755052, 6.837602, 6.399645, 6.558397, 6.615181, 6.176591, 6.864898, 6.340931, 6.399645, 6.4288, 6.515485, 6.837602, 6.52982, 6.837602, 6.115737,
   6.629301, 6.385017, 6.399645, 6.311369, 6.296536, 6.340931, 6.326167, 6.572639, 6.399645, 6.100428, 5.976549, 6.486718, 6.236852, 6.266765, 5.801897, 6.370355,
   6.35566, 6.069696, 6.100428, 6.58685, 5.73707, 6.191712, 6.085081 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMinimum(-1057.195);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMaximum(10894.16);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__88 = new TH1D("data_mc_ratio__88","",1000,0,2000);
   data_mc_ratio__88->SetBinContent(1000,1.156209);
   data_mc_ratio__88->SetBinContent(1001,1.154427);
   data_mc_ratio__88->SetBinError(1000,0.1635126);
   data_mc_ratio__88->SetBinError(1001,0.008619479);
   data_mc_ratio__88->SetMinimum(0.4);
   data_mc_ratio__88->SetMaximum(1.6);
   data_mc_ratio__88->SetEntries(25.12563);
   data_mc_ratio__88->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__88->SetLineColor(ci);
   data_mc_ratio__88->SetLineWidth(2);
   data_mc_ratio__88->SetMarkerStyle(20);
   data_mc_ratio__88->SetMarkerSize(1.2);
   data_mc_ratio__88->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__88->GetXaxis()->SetRange(1,150);
   data_mc_ratio__88->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__88->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__88->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__88->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__88->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__88->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__88->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1088[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1088[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1088[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1088[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006900327, 0.00679769, 0.0066995,
   0.006720042, 0.006697997, 0.006660453, 0.006631685, 0.00665411, 0.006695595, 0.006705372, 0.00670266, 0.006719131, 0.006787191, 0.006768819, 0.006809657, 0.006834901, 0.00694897, 0.006995573, 0.007105614,
   0.007147234, 0.00723461, 0.007342627, 0.00735016, 0.007505021, 0.007531368, 0.007565777, 0.007657722, 0.007722296, 0.00776361, 0.007839581, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1407125 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.831145);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.168855);
   Graph_Graph_from_mc_statistical_error1088->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1088->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1088);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->SetSelected(Z_mass_tagFirst_SR_17);
}
