#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_18/Z_mass_tagFirst_SR_18
//=========  (Fri Jan 26 12:50:34 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-43.51797,315.7258,43484.45);
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
   st->SetMaximum(39131.65);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",1000,0,2000);
   st_stack_44->SetMinimum(0.01);
   st_stack_44->SetMaximum(39131.65);
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
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,15932.27);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,16523.58);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,17053.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,17351.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,17528.53);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,17609.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,17371.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,17243.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,16917.59);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,16575.81);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,16040.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,15610.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,15219.17);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,14937.34);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,14538.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,14312.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,14167.32);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,14211.49);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,14046.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,13867.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,13759.4);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,13507.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,13303.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,13188.08);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,12970.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,12920.22);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,12806.07);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,12433.99);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,12413.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,12230.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,108.9095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50385.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(5,0.03293454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.05284755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.05196854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.06966265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.04458417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.08351235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.469166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.685244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,7.972992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.02048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.36111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.59192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,30.76567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,37.46099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,43.93692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,50.69165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,56.0445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,61.78642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,67.48773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,72.15126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,75.75566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,79.32892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,82.65095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,85.75608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,87.88624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,89.34902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,91.02481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,92.07347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,93.25905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,94.14276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,94.48135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,94.6886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,95.0888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,95.41512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.40537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,97.19127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,95.70051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,95.53905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,94.93596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,96.81677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.03159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,92.79295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,91.2602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.84083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.05047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.9273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,86.35215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.28717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,84.7537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,84.17645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.1717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,82.94494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,82.09665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,82.01819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,81.16694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,80.77636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,80.50693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,79.85279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,79.91232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,79.22998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,79.73865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,78.47793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,77.74143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,77.23328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,76.37898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,76.80874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,79.15282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,75.81586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,74.85231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,74.50166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,74.79291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,74.39993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,74.10647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,73.45286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,73.30572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,77.32844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.37945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,71.87092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,71.50511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,70.82805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.17955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,70.18402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,69.75197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.35786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,80.90545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,68.53646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.66338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.09728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.16781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.1867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.38779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,67.22119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.30481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.50526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.0527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.71824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.54246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,64.30745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,64.18149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,63.39787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,63.29777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.4801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,62.38292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,62.32818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,61.47242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,61.96105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.61071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,60.56122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,60.28047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,59.85845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,59.97424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,59.35949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,58.8239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,58.51238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,58.82974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,58.25404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,57.41074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,57.14989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,57.31335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,56.37583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,56.87846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,56.10215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,55.74624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,55.49736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,54.94517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,55.38952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,54.60192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,54.27579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,53.69542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,53.6959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,53.94189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,53.10661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,53.44358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,52.71477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,52.58709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.72632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,52.31942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,52.1687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,51.67753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,51.46433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,51.00811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,50.83374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.47462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,50.49087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,50.11487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,50.01267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,49.60528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,50.41005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,49.67424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,49.09596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,49.26087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,48.89444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,48.6039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,48.46909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,48.59496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,47.76977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,48.29263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,47.41448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,47.72817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,47.30457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,47.35499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,46.78809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,46.64692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,46.67542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,46.64729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,46.01449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,46.34893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,45.44805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,45.85021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,45.43171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,45.63266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,45.39172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,45.26922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,45.71252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,44.91741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,45.26117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,46.19134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,44.78682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,44.15497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,44.33873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,44.38879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,44.0868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,44.07994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,44.0231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.57345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,43.86786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,43.69469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,43.56953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,43.18993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,43.36665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,43.16507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,43.17644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.66022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,42.89314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,42.75919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,42.72505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,42.68253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,42.62308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,42.62518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,43.06362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,42.66301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,42.29054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.48085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,42.15038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,41.58576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,41.63384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,41.40297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.4969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,41.68196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,41.16761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,41.3924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.8124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.9231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,42.43024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.84913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,40.79521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,40.70607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,41.0153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.38858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,40.75741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,42.4835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,40.90433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,40.32117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,40.16622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.44137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,40.86166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,39.9463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.77544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,40.49409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,41.19915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,39.86677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,39.50065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.57203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.51645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,39.88851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,39.40264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,39.74796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,39.06459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,39.16152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.92639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.92545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.08999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.08005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,38.72812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.7606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.06282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.10535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.23632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,38.5319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,38.99489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,38.22139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,38.48373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,38.39206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,38.36844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,38.46328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.00472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,38.20049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,37.96938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,37.49637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,37.82204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.18491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,37.55773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,37.29714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,37.57233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,37.36122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.79583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.86608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,37.19766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.15482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.97254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,37.66904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,37.15978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.13274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,37.13076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,37.97143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,37.34922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,36.63226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,36.89804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,36.62357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,36.64137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,36.14317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,36.97272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,36.57033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,37.03302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,36.61998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,36.4206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,36.28897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,35.9025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,36.1987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,36.39205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,36.06132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,35.92081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,36.3207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,35.91263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,35.97497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.41832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,35.66003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,35.72978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,35.86497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,35.99694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,35.50339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,35.67769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,35.71523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,35.39545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,35.00063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.29779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,35.54703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,35.4716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,35.68003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,36.08469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,36.03243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,34.80607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,35.65862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,34.56312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,34.30719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,34.95639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,34.71062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,34.53033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,34.49759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,34.84501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,46.23004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,34.13322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,34.72906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,34.51579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,34.39007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.13982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.01784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.12611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.80125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.15723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,33.75045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,33.86745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.13306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,33.48444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,33.59733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,33.82399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,33.49665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,33.51195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.0169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,33.84959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.1561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,33.4797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,33.50243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.40042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,33.20113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,33.19222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.1808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,32.94304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,32.91558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,32.99131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.18073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,32.82228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,32.82845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,32.80525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,32.55173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,32.35825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,32.86849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,32.87421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,34.30054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,32.73426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,32.56534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,32.48473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,32.20105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,32.26304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.27961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.48754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.08951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.11294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,31.89784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.3329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.09347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.20682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,31.89167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,31.89597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,32.05111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,31.71725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.52373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.1852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,31.36973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,31.51319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,31.42373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,31.76406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,31.8053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.13868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.14707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,31.22334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.11123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.26647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.32244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.13334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.16599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,30.79185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,30.68637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,30.66774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,30.91216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,30.71644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,30.59029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,30.65257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,30.44449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.01886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,32.28298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.14832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.15302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,30.55886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.07312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.12308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.07659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,30.47853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,30.31963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.03318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.0486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,30.89463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,29.91958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.00106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,29.57935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,29.9512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,29.67097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.16722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,29.44451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,29.73098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,29.63462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,28.97189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,29.32221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.15948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,28.98193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.01992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,29.32227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.46727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,28.95046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,28.82556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,28.95251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,28.90606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.09466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,28.80335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,28.57235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,28.85983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,28.3455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,28.60274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,28.78758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,28.79655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.11033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,28.48589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,28.88831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.16853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,28.50826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.19789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.07297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.72432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.08642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,27.79147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,27.63113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,27.67768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.03982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,27.52374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,27.90836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,27.558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,27.35717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,27.38557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,27.42607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.25689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,27.85896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,27.98804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.03656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,26.99046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.26203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,27.53855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.07685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.02643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,26.94261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,26.72192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,26.55654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,26.67317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.12934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.12627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,26.51804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,26.6881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.2638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.4831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,26.61566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,27.63557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,26.40506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.23515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,26.45948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,26.37466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.32577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,26.55838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,25.99026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,26.57599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.17665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,25.92227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,25.79853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.15827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,25.94452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,25.67978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,25.93733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,25.96376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.21653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,25.48117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.12282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,25.63029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.32145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.21314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.21125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,25.84772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,25.48264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,25.54971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,25.70623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.0415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.37271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,24.98641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,24.80414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,24.91147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,24.68668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,24.41352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.29293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.32211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.37389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,24.74137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,24.85917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,24.37309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.49848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.26682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,24.53664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.19363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.25894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.00171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,23.88362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.23278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.0247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.18855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.20253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.07619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,23.89891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,23.85151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,23.53326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,23.66741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,23.72233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,23.4322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,23.97032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,23.88168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,23.82651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,23.92093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,23.6043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,23.44873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.33289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.13619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.10573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,22.87891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.64209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,24.53178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,22.88044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.16849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,22.90292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.20818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.21449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,22.90753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.44309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,22.5364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,22.68866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,22.92362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,22.96064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,22.7167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,22.62705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.43286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.35186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,22.68314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,22.35705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.20575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,25.24177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.15451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,21.87331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.12237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.38358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,21.99145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.26329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.11002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,21.95354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.02939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.73565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,21.94034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,21.49619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,21.85543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,21.62447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.30557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,21.61536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,21.50988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.33178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.14081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.6754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.19088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.05646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,22.17931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.52918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.39307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.52851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.4032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.32318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,20.67972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,20.53583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.27503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.20134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.15467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.32251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,20.53593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,20.52097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,20.5924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.04602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.02521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,21.02697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,20.77997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,20.70723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,20.74651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,20.53755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.31986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,20.6919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.26418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,20.62996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.31076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.04685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.12757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.21988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.1606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,19.74551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,19.84146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,19.91147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.39351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.22749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.3922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,19.84196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,20.26903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,19.71989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,19.68786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.34331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,19.85237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,19.5776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,19.6964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,19.95854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,18.9481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,18.96999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,19.64899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,19.5582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.44147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.5403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.17477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.29525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.34662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.10331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,18.93659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,18.78691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,18.98926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,18.76135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.21522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,18.77415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.3963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,18.72669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,18.92921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.45527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,18.54726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.32524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,18.59879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.41115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.19331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.01402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,18.58814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.33228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.29762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,18.36715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,18.38144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.20333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.18532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.3671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,17.84504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.30825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,17.83432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,17.98052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,17.46882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.36388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.48409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.05211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.18319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.40087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.01169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,17.65927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,20.01185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,17.79796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,17.56351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,17.7497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.07577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,17.45259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,17.6735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,17.84496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.67259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,17.6776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.07471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.4955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.44596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.34358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.19606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.38663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.20147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.17225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,16.90993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.07721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.0503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,16.75287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,16.8917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.06869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.17617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,16.94821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.1279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,16.86876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,16.97365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,16.64819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.32024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,16.69057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.35159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,16.87475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,16.58121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,16.59719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,16.66944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.49371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,16.78375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,16.57904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.54399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,16.70016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,16.61605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,16.53633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.57448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.14052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.07913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.33875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.17373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,15.96374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,15.76727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.06851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.36917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.19315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,15.57169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.00378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,15.8719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.68925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.73498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,15.75052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.59679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,15.7489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.46827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.03257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.33767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.41524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,15.54743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.73251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,15.51111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.51213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.42956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,15.60227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.81514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.42833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.53027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.29657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.49646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,15.62606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.00776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.3214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,15.51273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.24719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.48457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.25224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.45259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.22145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,14.72514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.03621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,14.76153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,14.96029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.0197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,14.67874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,14.85099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,14.69871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,14.95243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,14.74371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,17.86721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,14.7328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,14.92714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,14.79204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,14.68516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,15.11391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.30886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.46871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,14.79812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.96525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.50371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.08553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.20346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.0572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.4211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.31284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.26689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,13.74397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.5281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.52491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.81759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.02096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.19214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,13.8682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.18513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,13.70446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,13.88762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.09885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.16036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.11138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,13.72614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,13.66457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,13.65476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,14.07265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,13.71519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.30555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,13.7441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.56746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,13.90634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.54728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,22.30926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.36669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.60153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,13.80614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.55606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.28696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,14.58745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.45425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.44661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.0282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.0747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,12.94465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.46649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,12.73191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.25012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.2972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.09883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.19747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,13.58589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,12.71369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.11928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.30564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,12.86789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.32365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.16932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,12.99307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.5502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.55523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.50978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,12.81903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,12.98591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.02149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.09801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.42761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.4423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,12.90126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,12.75008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.45371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,12.88533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.37884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,12.84088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.48952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.28477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.05394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.63278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.36324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.11962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.43853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.26931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,12.61442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.42411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.10053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.50244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.20392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.46397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.27987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.20064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,11.86171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.18695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.33235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.35193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,11.9957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.21711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.10932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,11.85773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.04279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.40878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.14129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,11.87611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.43429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,11.92322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,11.71454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.15623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,11.91152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,11.65316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,11.67381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.4982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.40519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.07345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.60387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.52725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,11.66473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,11.86177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.48819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.07993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.82264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,11.67782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,11.84302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.59273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,11.68229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.46581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.1944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.39081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,11.70421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.16413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.32643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.13122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.62435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.35825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.04355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,10.81333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.13268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.48412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.02384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.33693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,10.77403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,10.95245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.20338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,10.86019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.1805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.62261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,10.98151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,10.94806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.16421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.02942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,10.88706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,10.98566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,10.65783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.53834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.66467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,10.79211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,10.92046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,10.80844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.3296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.40887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,10.95092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.58047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,10.67288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.57677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.17894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.60256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,10.6532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.70368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.01552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.10478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.35972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.49584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.3912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.26702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.59165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.40912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.21277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.40737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.42285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.29205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.42604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.18527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.34453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.48642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,10.6737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.48392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.00634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.27428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,9.961191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.41766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.02756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.17488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.02255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.13005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,9.861685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.572368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.596125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.0584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,9.721259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.07784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,9.916718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.05732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.550997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,9.85138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.35597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,158.3427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(4338173);

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
   VH_tagFirst_Z_mass__87->SetBinContent(1000,140);
   VH_tagFirst_Z_mass__87->SetBinContent(1001,66170);
   VH_tagFirst_Z_mass__87->SetEntries(3122535);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15932.27, 16523.58, 17053.64,
   17351.73, 17528.53, 17609.24, 17371.65, 17243.84, 16917.59, 16575.81, 16040.16, 15610.11, 15219.17, 14937.34, 14538.57, 14312.25, 14167.32, 14211.49, 14046.56,
   13867.14, 13759.4, 13507.11, 13303.71, 13188.08, 12970.65, 12920.22, 12806.07, 12433.99, 12413.63, 12230.74, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 108.9095 };
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087[1000] = { 0, 0, 0, 0, 0.03293454, 0, 0, 0.05284755, 0.05196854, 0.06966265, 0.04458417, 0.08351235, 1.469166, 3.685244, 7.972992, 13.02048, 18.36111,
   24.59192, 30.76567, 37.46099, 43.93692, 50.69165, 56.0445, 61.78642, 67.48773, 72.15126, 75.75566, 79.32892, 82.65095, 85.75608, 87.88624, 89.34902, 91.02481,
   92.07347, 93.25905, 94.14276, 94.48135, 94.6886, 95.0888, 95.41512, 96.40537, 97.19127, 95.70051, 95.53905, 94.93596, 96.81677, 93.03159, 92.79295, 91.2602,
   89.84083, 89.05047, 87.9273, 86.35215, 86.28717, 84.7537, 84.17645, 84.1717, 82.94494, 82.09665, 82.01819, 81.16694, 80.77636, 80.50693, 79.85279, 79.91232,
   79.22998, 79.73865, 78.47793, 77.74143, 77.23328, 76.37898, 76.80874, 79.15282, 75.81586, 74.85231, 74.50166, 74.79291, 74.39993, 74.10647, 73.45286, 73.30572,
   77.32844, 73.37945, 71.87092, 71.50511, 70.82805, 71.17955, 70.18402, 69.75197, 69.35786, 80.90545, 68.53646, 68.66338, 68.09728, 68.16781, 67.1867, 66.38779,
   67.22119, 66.30481, 65.50526, 66.0527, 64.71824, 64.54246, 64.30745, 64.18149, 63.39787, 63.29777, 62.4801, 62.38292, 62.32818, 61.47242, 61.96105, 60.61071,
   60.56122, 60.28047, 59.85845, 59.97424, 59.35949, 58.8239, 58.51238, 58.82974, 58.25404, 57.41074, 57.14989, 57.31335, 56.37583, 56.87846, 56.10215, 55.74624,
   55.49736, 54.94517, 55.38952, 54.60192, 54.27579, 53.69542, 53.6959, 53.94189, 53.10661, 53.44358, 52.71477, 52.58709, 51.72632, 52.31942, 52.1687, 51.67753,
   51.46433, 51.00811, 50.83374, 51.47462, 50.49087, 50.11487, 50.01267, 49.60528, 50.41005, 49.67424, 49.09596, 49.26087, 48.89444, 48.6039, 48.46909, 48.59496,
   47.76977, 48.29263, 47.41448, 47.72817, 47.30457, 47.35499, 46.78809, 46.64692, 46.67542, 46.64729, 46.01449, 46.34893, 45.44805, 45.85021, 45.43171, 45.63266,
   45.39172, 45.26922, 45.71252, 44.91741, 45.26117, 46.19134, 44.78682, 44.15497, 44.33873, 44.38879, 44.0868, 44.07994, 44.0231, 43.57345, 43.86786, 43.69469,
   43.56953, 43.18993, 43.36665, 43.16507, 43.17644, 42.66022, 42.89314, 42.75919, 42.72505, 42.68253, 42.62308, 42.62518, 43.06362, 42.66301, 42.29054, 42.48085,
   42.15038, 41.58576, 41.63384, 41.40297, 41.4969, 41.68196, 41.16761, 41.3924, 40.8124, 40.9231, 42.43024, 40.84913, 40.79521, 40.70607, 41.0153, 40.38858,
   40.75741, 42.4835, 40.90433, 40.32117, 40.16622, 40.44137, 40.86166, 39.9463, 39.77544, 40.49409, 41.19915, 39.86677, 39.50065, 40.57203, 39.51645, 39.88851,
   39.40264, 39.74796, 39.06459, 39.16152, 38.92639, 38.92545, 39.08999, 39.08005, 38.72812, 38.7606, 39.06282, 39.10535, 39.23632, 38.5319, 38.99489, 38.22139,
   38.48373, 38.39206, 38.231, 38.36844, 38.46328, 38.00472, 38.20049, 37.96938, 37.49637, 38.003, 37.82204, 38.18491, 37.55773, 37.29714, 37.57233, 37.36122,
   36.79583, 36.86608, 37.19766, 37.15482, 36.97254, 37.66904, 37.15978, 37.13274, 37.13076, 37.97143, 37.34922, 36.63226, 36.89804, 36.62357, 36.64137, 36.14317,
   36.97272, 36.57033, 37.03302, 36.61998, 36.4206, 36.28897, 35.9025, 36.1987, 36.39205, 36.06132, 35.92081, 36.3207, 35.91263, 35.97497, 36.41832, 35.66003,
   35.72978, 35.86497, 35.99694, 35.50339, 35.67769, 35.71523, 35.39545, 35.00063, 35.29779, 35.54703, 35.4716, 35.68003, 36.08469, 36.03243, 34.80607, 35.65862,
   34.56312, 34.30719, 34.95639, 34.71062, 34.53033, 34.49759, 34.84501, 46.23004, 34.13322, 34.72906, 34.51579, 34.39007, 34.13982, 34.01784, 34.12611, 34.80125,
   34.15723, 33.75045, 33.86745, 34.13306, 33.48444, 33.59733, 33.82399, 33.49665, 33.51195, 34.0169, 33.84959, 33.1561, 33.4797, 33.50243, 34.40042, 33.20113,
   33.19222, 33.1808, 32.94304, 32.91558, 32.99131, 33.18073, 32.82228, 32.82845, 32.80525, 32.55173, 32.35825, 32.86849, 32.87421, 34.30054, 32.73426, 32.56534,
   32.48473, 32.20105, 32.26304, 32.27961, 32.48754, 32.08951, 32.11294, 31.89784, 32.3329, 32.09347, 32.20682, 31.89167, 31.89597, 32.05111, 31.71725, 32.52373,
   32.1852, 31.36973, 31.51319, 31.42373, 31.76406, 31.8053, 31.13868, 31.14707, 31.22334, 31.11123, 31.26647, 31.32244, 31.13334, 31.16599, 30.79185, 30.68637,
   30.66774, 30.91216, 30.71644, 30.59029, 30.65257, 30.44449, 31.01886, 32.28298, 30.14832, 30.15302, 30.55886, 30.07312, 31.12308, 30.07659, 30.47853, 30.31963,
   30.03318, 30.0486, 30.89463, 29.91958, 30.00106, 29.57935, 29.9512, 29.67097, 29.16722, 29.44451, 29.73098, 29.63462, 28.97189, 29.32221, 29.15948, 28.98193,
   29.01992, 29.32227, 29.46727, 28.95046, 28.82556, 28.95251, 28.90606, 29.09466, 28.80335, 28.57235, 28.85983, 28.3455, 28.60274, 28.78758, 28.79655, 28.11033,
   28.48589, 28.88831, 28.16853, 28.50826, 28.19789, 28.07297, 28.72432, 28.08642, 27.79147, 27.63113, 27.67768, 28.03982, 27.52374, 27.90836, 27.558, 27.35717,
   27.38557, 27.42607, 27.25689, 27.85896, 27.98804, 27.03656, 26.99046, 27.26203, 27.53855, 27.07685, 27.02643, 26.94261, 26.72192, 26.55654, 26.67317, 27.12934,
   27.12627, 26.51804, 26.6881, 26.2638, 27.4831, 26.61566, 27.63557, 26.40506, 26.23515, 26.45948, 26.37466, 26.32577, 26.55838, 25.99026, 26.57599, 26.17665,
   25.92227, 25.79853, 26.15827, 25.94452, 25.67978, 25.93733, 25.96376, 25.21653, 25.48117, 25.12282, 25.63029, 25.32145, 25.21314, 25.21125, 25.84772, 25.48264,
   25.54971, 25.70623, 25.0415, 25.37271, 24.98641, 24.80414, 24.91147, 24.68668, 24.41352, 24.29293, 24.32211, 24.37389, 24.74137, 24.85917, 24.37309, 24.49848,
   24.26682, 24.53664, 24.19363, 24.25894, 24.00171, 23.88362, 24.23278, 24.0247, 24.18855, 24.20253, 24.07619, 23.89891, 23.85151, 23.53326, 23.66741, 23.72233,
   23.4322, 23.97032, 23.88168, 23.82651, 23.92093, 23.6043, 23.44873, 23.33289, 23.13619, 23.10573, 22.87891, 23.64209, 24.53178, 22.88044, 23.16849, 22.90292,
   23.20818, 23.21449, 22.90753, 23.44309, 22.5364, 22.68866, 22.92362, 22.96064, 22.7167, 22.62705, 22.43286, 22.35186, 22.68314, 22.35705, 22.20575, 25.24177,
   22.15451, 21.87331, 22.12237, 22.38358, 21.99145, 22.26329, 22.11002, 21.95354, 22.02939, 22.73565, 21.94034, 21.49619, 21.85543, 21.62447, 22.30557, 21.61536,
   21.50988, 21.33178, 21.14081, 21.6754, 21.19088, 21.05646, 22.17931, 21.52918, 21.39307, 21.52851, 21.4032, 21.32318, 20.67972, 20.53583, 20.27503, 21.20134,
   21.15467, 21.32251, 20.53593, 20.52097, 20.5924, 21.04602, 21.02521, 21.02697, 20.77997, 20.70723, 20.74651, 20.53755, 20.31986, 20.6919, 20.26418, 20.62996,
   20.31076, 20.04685, 20.12757, 20.21988, 20.311, 20.1606, 19.74551, 19.84146, 19.91147, 19.39351, 20.22749, 19.3922, 19.84196, 20.26903, 19.71989, 19.68786,
   19.34331, 19.85237, 19.5776, 19.6964, 19.95854, 18.9481, 18.96999, 19.64899, 19.62, 19.5582, 19.44147, 19.5403, 19.17477, 19.29525, 19.34662, 19.10331,
   18.93659, 18.78691, 18.98926, 18.76135, 19.21522, 18.77415, 19.3963, 18.72669, 18.92921, 18.45527, 18.54726, 18.32524, 18.59879, 18.41115, 18.19331, 18.01402,
   18.58814, 18.33228, 18.29762, 18.36715, 18.38144, 18.20333, 18.18532, 18.3671, 17.84504, 18.30825, 17.83432, 17.98052, 17.46882, 18.36388, 18.48409, 18.05211,
   18.18319, 18.40087, 18.01169, 17.65927, 20.01185, 17.79796, 17.56351, 17.7497, 18.07577, 17.45259, 17.6735, 17.84496, 17.67259, 17.6776, 17.07471, 17.4955,
   17.44596, 17.34358, 17.19606, 17.38663, 17.20147, 17.17225, 16.90993, 17.07721, 17.0503, 16.75287, 16.8917, 17.06869, 17.17617, 16.94821, 17.1279, 16.86876,
   16.97365, 16.64819, 16.32024, 16.69057, 16.35159, 16.87475, 16.58121, 16.59719, 16.66944, 16.49371, 16.78375, 16.57904, 16.54399, 16.70016, 16.61605, 16.53633,
   16.57448, 16.14052, 16.07913, 16.33875, 16.17373, 15.96374, 15.76727, 16.06851, 16.36917, 16.19315, 15.57169, 16.00378, 15.8719, 16.68925, 15.73498, 15.75052,
   15.59679, 15.7489, 15.46827, 16.03257, 15.33767, 15.41524, 15.54743, 15.73251, 15.51111, 15.51213, 15.42956, 15.60227, 15.81514, 15.42833, 15.53027, 15.29657,
   15.49646, 15.62606, 15.00776, 15.3214, 15.51273, 15.24719, 15.48457, 15.25224, 15.45259, 15.22145, 14.72514, 15.03621, 14.76153, 14.96029, 15.0197, 14.67874,
   14.85099, 14.69871, 14.95243, 14.74371, 17.86721, 14.7328, 14.92714, 14.79204, 14.68516, 15.11391, 14.30886, 14.46871, 14.79812, 13.96525, 14.50371, 14.08553,
   14.20346, 14.0572, 14.4211, 14.31284, 14.26689, 13.74397, 14.5281, 14.52491, 14.81759, 14.02096, 14.19214, 13.8682, 14.18513, 14.156, 13.70446, 13.88762,
   14.09885, 14.16036, 14.11138, 13.72614, 13.66457, 13.65476, 14.07265, 13.71519, 13.30555, 13.7441, 13.56746, 13.90634, 13.54728, 22.30926, 13.36669, 13.60153,
   13.80614, 13.55606, 13.28696, 14.58745, 13.45425, 13.44661, 13.0282, 13.0747, 12.94465, 13.46649, 12.73191, 13.25012, 13.2972, 13.09883, 13.19747, 13.58589,
   12.71369, 13.11928, 13.30564, 12.86789, 13.32365, 13.16932, 12.99307, 13.5502, 12.55523, 12.50978, 12.81903, 12.98591, 13.02149, 13.09801, 12.42761, 12.4423,
   12.90126, 12.75008, 12.45371, 12.88533, 12.37884, 12.84088, 12.48952, 12.28477, 12.05394, 12.63278, 12.36324, 12.11962, 12.43853, 12.26931, 12.61442, 12.42411,
   12.10053, 12.50244, 12.20392, 12.46397, 12.27987, 12.20064, 11.86171, 12.18695, 12.33235, 12.35193, 11.9957, 12.21711, 12.10932, 11.85773, 12.04279, 11.40878,
   12.14129, 11.87611, 11.43429, 11.92322, 11.71454, 12.15623, 11.91152, 11.65316, 11.67381, 11.4982, 11.40519, 12.07345, 11.60387, 11.52725, 11.66473, 11.86177,
   11.48819, 11.07993, 11.82264, 11.67782, 11.84302, 11.59273, 11.68229, 11.46581, 11.1944, 11.39081, 11.70421, 11.16413, 11.32643, 11.13122, 11.62435, 11.35825,
   11.04355, 10.81333, 11.13268, 11.48412, 11.02384, 11.33693, 10.77403, 10.95245, 11.20338, 10.86019, 11.1805, 10.62261, 10.98151, 10.94806, 11.16421, 11.02942,
   10.88706, 10.98566, 10.65783, 10.53834, 10.66467, 10.79211, 10.92046, 10.80844, 10.3296, 10.40887, 10.95092, 10.58047, 10.67288, 10.57677, 10.17894, 10.60256,
   10.6532, 10.70368, 10.01552, 10.10478, 10.35972, 10.49584, 10.3912, 10.26702, 10.59165, 10.40912, 10.21277, 10.40737, 10.42285, 10.29205, 10.42604, 10.18527,
   10.34453, 10.48642, 10.6737, 10.48392, 10.00634, 10.27428, 9.961191, 10.41766, 10.02756, 10.17488, 10.02255, 10.13005, 9.861685, 9.572368, 9.596125, 10.0584,
   9.721259, 10.07784, 9.916718, 10.05732, 9.550997, 9.85138, 10.35597 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMinimum(-1864.67);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMaximum(19482.3);
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
   
   TH1D *data_mc_ratio__88 = new TH1D("data_mc_ratio__88","",1000,0,2000);
   data_mc_ratio__88->SetBinContent(1000,1.28547);
   data_mc_ratio__88->SetBinContent(1001,1.313284);
   data_mc_ratio__88->SetBinError(1000,0.1086421);
   data_mc_ratio__88->SetBinError(1001,0.006564951);
   data_mc_ratio__88->SetMinimum(0.4);
   data_mc_ratio__88->SetMaximum(1.6);
   data_mc_ratio__88->SetEntries(61.7873);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005516241, 0.005407364, 0.005337559,
   0.005306298, 0.005320414, 0.005346213, 0.005438824, 0.005491154, 0.005620706, 0.005756287, 0.006010252, 0.006226173, 0.006288156, 0.006395987, 0.006529938, 0.006764606, 0.006566635, 0.006529433, 0.006496981,
   0.006478685, 0.006471972, 0.006509703, 0.006490832, 0.006542817, 0.006534266, 0.006515092, 0.006572798, 0.006670824, 0.006613429, 0.006705907, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09508784 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.8858946);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.114105);
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
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->SetSelected(Z_mass_tagFirst_SR_18);
}
