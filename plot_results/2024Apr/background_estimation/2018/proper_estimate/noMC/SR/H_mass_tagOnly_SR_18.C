#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_SR_18()
{
//=========Macro generated from canvas: H_mass_tagOnly_SR_18/H_mass_tagOnly_SR_18
//=========  (Mon Apr  8 13:43:37 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-22.74725,315.7258,22734.5);
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
   st->SetMaximum(20458.77);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",1000,0,2000);
   st_stack_20->SetMinimum(0.01);
   st_stack_20->SetMaximum(20458.77);
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
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,4259.911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(49,8810.565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(50,8838.606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(51,9060.598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(52,8952.444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(53,8829.61);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(54,9058.425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(55,9110.498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(56,8993.874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(57,9206.448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(58,9058.659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(59,9090.486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(60,9079.069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(61,9070.409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(62,9064.242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(63,9037.613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(64,9034.839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(65,9015.258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(66,9091.266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(67,9084.447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(68,9079.143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(69,9074.667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(70,8975.513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(71,8951.558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(72,8866.69);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(73,8867.357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(74,8961.663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(75,8958.754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(76,8954.433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(77,8833.587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,4388.598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,50.97138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,29924.79);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(5,0.02457404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(6,0.3539694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(7,0.02376764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(8,0.04023231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(9,0.1022117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.06580651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.6141136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,1.731652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,4.908713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,8.325431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,12.64222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,16.83715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,20.93075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,25.24145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,29.84908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,34.14597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,37.86636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,41.68041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,45.75258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,48.55199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,51.34904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,54.53409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,56.4119);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,58.50791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,60.59593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,62.23744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,63.41175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,64.51409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,67.34591);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,66.41076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,67.6389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,67.60286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,69.05587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,69.54268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,71.27162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,71.69354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,71.59726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,71.41);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,70.79897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,70.56734);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,72.77387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,69.78172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,68.67241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,67.58259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,67.20449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,67.06581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,66.76487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,65.66528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,65.64392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,65.6164);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,65.23968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,64.71575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,66.13433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,65.40607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,64.43731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,64.69276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,64.72507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,64.90931);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,63.98854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,64.12114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,63.71669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,64.38544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,63.88924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,63.8347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,63.99161);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,63.59099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,63.31036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,64.05269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,63.18476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,63.01709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,63.12007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,63.6739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,62.49268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,62.80956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,62.19915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,62.17901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,62.1112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,62.27026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,61.81086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,61.63813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,61.10437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,61.69355);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,61.1609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,61.68187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,60.73022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,62.25049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,60.39468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,60.33419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,60.38715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,60.2335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,59.74953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,59.64688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,59.29303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,59.16602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,58.83008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,58.91132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,58.83084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,58.43257);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,57.87995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,58.03956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,58.26544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,57.78201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,57.43518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,57.25128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,57.10308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,56.5399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,56.58922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,57.26955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,56.20162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,57.16472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,57.15943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,55.52729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,55.26393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,55.21247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,55.43814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,54.87283);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,54.63462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,55.64934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,54.57162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,55.14302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,55.00923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,54.15604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,53.60699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,53.26949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,55.63103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,53.07478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,53.20165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,52.79144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,52.68781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,52.53523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,53.36211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,52.10407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,51.92942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,52.24999);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,52.06674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,51.56643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,51.99903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,51.6781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,51.55193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,51.27128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,51.17189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,51.18068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,50.99951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,50.98354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,50.64825);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,50.39551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,51.45732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,49.97867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,49.5306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,49.90538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,50.64637);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,49.4424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,49.63694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,49.29567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,49.23514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,49.62626);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,48.76719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,48.94679);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,48.6561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,48.55128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,48.9733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,48.16216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,48.13721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,48.61287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,48.03109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,47.79485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,48.02804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,47.66064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,47.88527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,47.13074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,47.24949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,47.15123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,47.36491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,46.7592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,46.73434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,46.89433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,46.34187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,46.68501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,46.21644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,46.45361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,46.1595);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,46.13052);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,45.93247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,45.49779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,45.69992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,45.91996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,45.45613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,45.4376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,45.63187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,45.49987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,45.35678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,44.9225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,45.33362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,44.88748);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,45.02068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,44.68344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,44.42121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,45.118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,44.4074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,44.27272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,44.12935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,44.30927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,43.98595);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,45.19682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,43.36714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,43.55239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,43.8278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,43.40813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,43.31949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,43.40269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,43.16962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,43.31036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,44.12505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,42.71547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,43.07586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,42.90128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,43.32965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,42.9683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,43.11327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,49.97066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,42.18659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,42.08596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,42.09904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,42.03982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,41.62917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,41.7896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,43.01382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,41.81656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,41.77086);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,41.68711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,41.90104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,41.31307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,41.16627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,41.19442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,40.80829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,41.00703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,41.11059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,40.67846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,41.14058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,40.35471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,40.36027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,40.50535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,40.21446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,41.09397);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,40.25025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,40.07099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,40.36528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,40.26579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,39.70802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,39.68257);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,40.32865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,39.67822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,39.52753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,39.64731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,39.31004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,39.07042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,39.4372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,38.829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,39.68551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,38.95644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,39.03837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,38.72526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,39.46907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,38.52798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,38.35566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,38.19836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,37.92821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,38.3587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,38.29615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,44.72419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,37.89082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,37.8028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,37.89163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,37.59126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,37.45761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,38.42601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,37.68132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,37.09957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,37.9123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,37.36353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,37.39863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,37.07489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,37.0739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,36.74918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,36.94746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,36.82608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,36.30957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,36.83125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,36.46752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,36.41649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,36.48532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,35.96207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,36.12621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,36.11545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,35.62958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,35.78625);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,35.68226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,35.85563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,35.5987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,35.91414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,35.25311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,35.62289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,35.52588);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,35.13743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,35.28528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,35.08667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,34.79849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,34.4781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,34.76867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,35.28321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,34.89076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,34.39985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,34.33093);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,34.81015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,34.01639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,34.70409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,33.86262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,33.87674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,33.73992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,34.17528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,33.97104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,33.45843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,33.6323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,33.35111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,33.52314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,33.31015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,33.31773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,33.26897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,33.30135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,32.79724);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,32.86937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,32.54466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,33.27221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,32.11729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,32.63628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,32.21003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,32.42381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,32.41092);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,32.22608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,32.37658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,32.23234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,32.86787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,32.34069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,32.03814);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,32.13995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,31.36386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,32.19456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,31.64451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,31.66649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,31.30496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,31.20872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,31.66262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,32.09698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,31.10717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,31.23809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,30.79537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,30.99412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,31.80504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,30.95094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,30.84888);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,30.89942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,30.39561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,30.35003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,30.63658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,30.54747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,30.24133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,30.07926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,29.88219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,30.10329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,30.31342);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,30.03723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,29.96015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,29.81826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,29.79421);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,29.85641);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,29.55478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,29.6507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,29.7112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,29.19603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,29.2717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,29.3934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,29.14842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,29.15226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,28.94271);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,29.08172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,28.66452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,28.73812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,28.76821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,28.98212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,28.78776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,28.26556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,28.43379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,34.996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,28.16168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,28.06986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,27.83674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,27.8691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,27.99983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,27.98821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,27.87024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,27.61104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,27.99463);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,28.06054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,27.51267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,27.35172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,27.25083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,27.38681);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,27.56276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,27.66926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,27.3175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,27.30438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,27.05752);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,27.0038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,26.9473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,26.7759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,26.94839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,26.84937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,26.94364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,26.35083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,26.33453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,26.35187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,26.31987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,26.14857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,26.31437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,26.14146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,25.52397);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,26.30328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,26.05819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,25.6);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,25.85966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,25.97295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,26.03948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,25.65174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,26.1223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,25.48133);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,25.33376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,25.01049);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,25.32731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,25.17315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,25.19604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,25.28307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,24.8573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,25.19856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,25.1112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,24.96126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,24.91134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,24.87759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,24.79114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,24.56929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,24.38064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,24.60445);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,24.59634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,24.5759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,24.34303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,24.01706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,25.07388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,23.93983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,24.09057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,24.24902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,24.11858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,23.86792);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,23.80295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,24.0296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,23.63581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,23.75211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,23.75955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,23.60281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,23.48554);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,23.48763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,42.45956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,23.21922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,24.46186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,23.51612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,23.32592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,23.2267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,23.49193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,23.18366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,22.92548);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,23.10616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,23.11023);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,22.75042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,22.84678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,22.54219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,23.02244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,22.3948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,22.84065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,22.38953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,22.63132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,22.78182);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,22.58332);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,22.28087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,21.89964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,23.2123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,21.99476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,22.10366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,22.43185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,21.94369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,22.24702);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,21.82611);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,21.9451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,21.56715);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,21.84116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,21.44526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,21.62428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,21.33322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,21.91483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,21.74526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,21.17818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,21.22736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,20.91826);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,21.247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,21.10659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,21.04863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,20.73349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,20.70307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,20.6891);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,21.00335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,20.93934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,20.87252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,20.63061);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,20.35116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,20.41634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,20.85019);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,20.25526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,20.51651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,20.40037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,20.27864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,20.48111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,20.83189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,20.18821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,19.99245);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,20.2219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,20.21385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,20.26915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,20.51661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,19.79292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,19.7992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,19.68499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,20.04989);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,19.65205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,20.13794);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,19.63754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,19.85333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,20.44821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,19.59739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,19.37635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,19.27732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,19.67991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,19.20688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,19.24527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,18.81201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,18.8774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,19.32393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,18.80842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,19.29079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,19.24367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,19.03653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,19.10779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,18.91822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,18.78708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,18.82756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,18.82516);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,18.58116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,18.56352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,19.0444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,18.79968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,18.44163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,18.65951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,18.57243);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,19.88485);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,18.33767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,18.1993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,18.26686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,18.2057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,18.2719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,18.19462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,18.17777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,17.95995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,18.16207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,17.7286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,18.20156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,18.1383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,17.81866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,17.98608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,17.87958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,17.60568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,17.44854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,18.21496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,17.85108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,17.72224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,17.51574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,17.59263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,17.68044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,17.24993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,17.06951);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,17.68034);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,16.8924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,17.27973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,16.98253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,17.29468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,16.86416);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,17.1319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,17.29216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,16.8893);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,16.85797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,16.93046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,16.7233);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,16.94292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,16.83619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,16.87127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,17.58054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,16.83235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,16.93707);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,16.60454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,16.48882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,16.51926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,16.2237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,16.3717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,16.5733);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,16.07142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,16.39895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,16.47185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,16.38409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,16.57945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,15.8199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,16.18466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,15.95561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,15.98886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,16.24508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,15.50982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,15.78575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,15.9836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,15.93749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,15.75577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,15.98664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,15.5916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,15.61358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,15.65912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,15.73481);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,15.45443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,15.51558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,15.45311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,15.81323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,15.30196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,15.21251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,15.49784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,15.50825);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,15.29894);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,15.34007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,15.14564);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,14.61363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,15.00204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,15.09367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,14.96815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,15.11018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,15.48433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,15.03875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,15.14571);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,15.26771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,14.77264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,14.66731);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,14.84002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,14.67812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,14.63242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,15.23758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,14.61507);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,14.57573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,14.62939);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,14.64851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,14.79686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,14.59089);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,14.31343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,14.70019);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,14.21144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,14.3467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,14.14576);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,14.13268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,14.08592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,14.13368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,14.26758);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,13.92443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,14.20993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,14.02518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,13.84366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,14.15411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,14.08917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,14.0907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,13.72452);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,14.03543);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,13.75602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,13.7735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,13.83521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,14.03107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,13.84993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,13.72313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,13.52782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,13.33539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,13.73556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,13.44028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,13.50672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,13.44185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,13.36255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,13.56204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,13.29729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,13.09102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,13.4849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,13.66253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,13.04177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,13.41177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,13.4328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,13.35849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,13.23532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,13.06597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,13.70513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,13.26979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,13.07743);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,13.09655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,12.86973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,13.04643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,12.88423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,13.0142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,13.03984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,12.91539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,12.83948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,12.6816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,12.92517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,12.66247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,12.86376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,12.33079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,12.69338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,12.72478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,12.85138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,12.30517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,12.82713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,12.67226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,12.63073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,12.45807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,12.47649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,12.2152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,12.45115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,12.36676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,12.19298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,12.26163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,11.90922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,12.32596);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,12.49766);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,11.90965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,12.54044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,11.85856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,12.18796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,11.99865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,12.07937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,12.04927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,12.2192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,11.98159);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,12.04124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,11.94195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,11.88122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,11.67729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,11.86018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,11.59574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,11.74936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,11.70313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,12.01947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,11.72626);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,11.66934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,11.66853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,11.66683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,11.94993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,11.66721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,11.71994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,11.26978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,11.49377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,11.15867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,11.77455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,11.90704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,11.47135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,11.35924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,11.83368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,11.52983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,11.49003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,11.04072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,10.69255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,11.32382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,11.24779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,11.00333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,10.97708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,10.84655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,10.8915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,11.07612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,10.65232);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,12.56921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,10.71447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,10.94172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,12.02003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,10.80084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,10.9201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,10.94223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,10.94285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,10.81872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,10.90693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,10.82877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,10.64817);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,10.90828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,11.08802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,10.51499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,10.57298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,10.81973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,10.48254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,10.50658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,10.25558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,10.389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,10.6661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,10.53874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,10.00778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,10.53487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,10.63492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,10.22168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,10.22275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,10.3457);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,10.50663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,10.2278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,10.11939);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,10.37979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,10.27408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,10.62688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,10.2607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,10.44624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,10.1714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,10.07154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,9.900043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,10.01261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,9.985311);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,10.21746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,10.11488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,9.983425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,10.15779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,9.920373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,10.08176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,9.999351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,10.3198);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,9.769996);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,9.828739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,9.555751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,9.923339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,9.608468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,9.771605);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,9.369556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,9.475358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,9.990234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,9.837125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,9.807881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,9.512255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,9.542768);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,9.409048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,9.465952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,9.861943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,9.339352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,9.537557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,9.245209);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,9.375168);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,9.518261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,9.461624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,9.108574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,9.137952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,9.256638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,9.303586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,9.252395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,9.060262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,9.274309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,9.079189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,9.159352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,9.015958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,8.90285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,9.126667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,8.969304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,9.155505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,9.448121);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,9.23184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,8.857757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,9.021521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,8.847015);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,8.840966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,9.231334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,8.597872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,8.650823);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,8.896983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,8.657376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,9.188264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,8.729407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,8.983751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,8.811594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,8.956329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,8.944625);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,8.331007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,8.483649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,8.580686);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,8.579802);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,8.690796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,8.75514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,8.639551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,8.489958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,8.733027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,8.573982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,8.531986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,8.374904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,8.347884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,8.327806);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,8.68878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,8.627688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,8.604161);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,8.459319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,8.415163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,8.573968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,8.318693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,8.505526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,8.309229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,8.193067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,8.423939);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,8.225609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,8.004643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,8.088114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,8.479975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,8.210777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,8.492934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,8.193067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,8.206515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,8.085428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,8.303709);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,8.296193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,8.113908);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,8.286335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,8.218834);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,8.035393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,7.893431);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,7.931038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,8.397559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,7.782765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,7.923562);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,7.957286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,7.929131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,8.186477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,7.906705);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,7.962289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,7.90843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,8.044536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,7.809644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,7.604078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,7.78194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,7.883406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,7.533997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,7.778443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,7.720889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,7.619701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,8.416961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,7.675099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,7.591846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,7.651064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,7.387291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,7.598795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,7.626358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,7.606831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,7.714354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,7.433517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,7.418566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,7.436628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,7.555969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,7.473503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,7.526329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,7.159109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,7.465625);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,7.208038);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,7.228714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,7.353338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,6.749899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,7.350581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,7.740612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,7.170267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,7.239491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,7.175882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,7.381312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,7.342462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,7.16148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,6.994612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,6.974203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,7.612253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,7.181804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,7.270291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,7.422085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,7.109877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,6.958404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,7.238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,6.628489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,7.169129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,7.152947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,7.055239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,111.6181);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(4889380);

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
   VH_tagOnly_H_mass__39->SetBinContent(1001,38885);
   VH_tagOnly_H_mass__39->SetEntries(2827263);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4259.911, 8810.565,
   8838.606, 9060.598, 8952.444, 8829.61, 9058.425, 9110.498, 8993.874, 9206.448, 9058.659, 9090.486, 9079.069, 9070.409, 9064.242, 9037.613, 9034.839, 9015.258,
   9091.266, 9084.447, 9079.143, 9074.667, 8975.513, 8951.558, 8866.69, 8867.357, 8961.663, 8958.754, 8954.433, 8833.587, 4388.598, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 50.97138 };
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1039[1000] = { 0, 0, 0, 0, 0.02457404, 0.3539694, 0.02376764, 0.04023231, 0.1022117, 0.06580651, 0.6141136, 1.731652, 4.908713, 8.325431, 12.64222, 16.83715, 20.93075,
   25.24145, 29.84908, 34.14597, 37.86636, 41.68041, 45.75258, 48.55199, 51.34904, 54.53409, 56.4119, 58.50791, 60.59593, 62.23744, 63.41175, 64.51409, 67.34591,
   66.41076, 67.6389, 67.60286, 69.05587, 69.54268, 71.27162, 71.69354, 71.59726, 71.41, 70.79897, 70.56734, 72.77387, 69.78172, 68.67241, 67.58259, 67.20449,
   67.06581, 66.76487, 65.66528, 65.64392, 65.6164, 65.23968, 64.71575, 66.13433, 65.40607, 64.43731, 64.69276, 64.72507, 64.90931, 63.98854, 64.12114, 63.71669,
   64.38544, 63.88924, 63.8347, 63.99161, 63.59099, 63.31036, 64.05269, 63.18476, 63.01709, 63.12007, 63.6739, 62.49268, 62.80956, 62.19915, 62.17901, 62.1112,
   62.27026, 61.81086, 61.63813, 61.10437, 61.69355, 61.1609, 61.68187, 60.73022, 62.25049, 60.39468, 60.33419, 60.38715, 60.2335, 59.74953, 59.64688, 59.29303,
   59.16602, 58.83008, 58.91132, 58.83084, 58.43257, 57.87995, 58.03956, 58.26544, 57.78201, 57.43518, 57.25128, 57.10308, 56.5399, 56.58922, 57.26955, 56.20162,
   57.16472, 57.15943, 55.52729, 55.26393, 55.21247, 55.43814, 54.87283, 54.63462, 55.64934, 54.57162, 55.14302, 55.00923, 54.15604, 53.60699, 53.26949, 55.63103,
   53.07478, 53.20165, 52.79144, 52.68781, 52.53523, 53.36211, 52.10407, 51.92942, 52.24999, 52.06674, 51.56643, 51.99903, 51.6781, 51.55193, 51.27128, 51.17189,
   51.18068, 50.99951, 50.98354, 50.64825, 50.39551, 51.45732, 49.97867, 49.5306, 49.90538, 50.64637, 49.4424, 49.63694, 49.29567, 49.23514, 49.62626, 48.76719,
   48.94679, 48.6561, 48.55128, 48.9733, 48.16216, 48.13721, 48.61287, 48.03109, 47.79485, 48.02804, 47.66064, 47.88527, 47.13074, 47.24949, 47.15123, 47.36491,
   46.7592, 46.73434, 46.89433, 46.34187, 46.68501, 46.21644, 46.45361, 46.1595, 46.13052, 45.93247, 45.49779, 45.69992, 45.91996, 45.45613, 45.4376, 45.63187,
   45.49987, 45.35678, 44.9225, 45.33362, 44.88748, 45.02068, 44.68344, 44.42121, 45.118, 44.4074, 44.27272, 44.12935, 44.30927, 43.98595, 45.19682, 43.36714,
   43.55239, 43.8278, 43.40813, 43.31949, 43.40269, 43.16962, 43.31036, 44.12505, 42.71547, 43.07586, 42.90128, 43.32965, 42.9683, 43.11327, 49.97066, 42.18659,
   42.08596, 42.09904, 42.03982, 41.62917, 41.7896, 43.01382, 41.81656, 41.77086, 41.68711, 41.90104, 41.31307, 41.16627, 41.19442, 40.80829, 41.00703, 41.11059,
   40.67846, 41.14058, 40.35471, 40.36027, 40.50535, 40.21446, 41.09397, 40.25025, 40.07099, 40.36528, 40.26579, 39.70802, 39.68257, 40.32865, 39.67822, 39.52753,
   39.64731, 39.31004, 39.07042, 39.4372, 38.829, 39.68551, 38.95644, 39.03837, 38.72526, 39.46907, 38.52798, 38.35566, 38.19836, 37.92821, 38.3587, 38.29615,
   44.72419, 37.89082, 37.8028, 37.89163, 37.59126, 37.45761, 38.42601, 37.68132, 37.09957, 37.9123, 37.36353, 37.39863, 37.07489, 37.0739, 36.74918, 36.94746,
   36.82608, 36.30957, 36.83125, 36.46752, 36.41649, 36.48532, 35.96207, 36.12621, 36.11545, 35.62958, 35.78625, 35.68226, 35.85563, 35.5987, 35.91414, 35.25311,
   35.62289, 35.52588, 35.13743, 35.28528, 35.08667, 34.79849, 34.4781, 34.76867, 35.28321, 34.89076, 34.39985, 34.33093, 34.81015, 34.01639, 34.70409, 33.86262,
   33.87674, 33.73992, 34.17528, 33.97104, 33.45843, 33.6323, 33.35111, 33.52314, 33.31015, 33.31773, 33.26897, 33.30135, 32.79724, 32.86937, 32.54466, 33.27221,
   32.11729, 32.63628, 32.21003, 32.42381, 32.41092, 32.22608, 32.37658, 32.23234, 32.86787, 32.34069, 32.03814, 32.13995, 31.36386, 32.19456, 31.64451, 31.66649,
   31.30496, 31.20872, 31.66262, 32.09698, 31.10717, 31.23809, 30.79537, 30.99412, 31.80504, 30.95094, 30.84888, 30.89942, 30.39561, 30.35003, 30.63658, 30.54747,
   30.24133, 30.07926, 29.88219, 30.10329, 30.31342, 30.03723, 29.96015, 29.81826, 29.79421, 29.85641, 29.55478, 29.6507, 29.7112, 29.19603, 29.2717, 29.3934,
   29.14842, 29.15226, 28.94271, 29.08172, 28.66452, 28.73812, 28.76821, 28.98212, 28.78776, 28.26556, 28.43379, 34.996, 28.16168, 28.06986, 27.83674, 27.8691,
   27.99983, 27.98821, 27.87024, 27.61104, 27.99463, 28.06054, 27.51267, 27.35172, 27.25083, 27.38681, 27.56276, 27.66926, 27.3175, 27.30438, 27.05752, 27.0038,
   26.9473, 26.7759, 26.94839, 26.84937, 26.94364, 26.35083, 26.33453, 26.35187, 26.31987, 26.14857, 26.31437, 26.14146, 25.52397, 26.30328, 26.05819, 25.6,
   25.85966, 25.97295, 26.03948, 25.65174, 26.1223, 25.48133, 25.33376, 25.01049, 25.32731, 25.17315, 25.19604, 25.28307, 24.8573, 25.19856, 25.1112, 24.96126,
   24.91134, 24.87759, 24.79114, 24.56929, 24.38064, 24.60445, 24.59634, 24.5759, 24.34303, 24.01706, 25.07388, 23.93983, 24.09057, 24.24902, 24.11858, 23.86792,
   23.80295, 24.0296, 23.63581, 23.75211, 23.75955, 23.60281, 23.48554, 23.48763, 42.45956, 23.21922, 24.46186, 23.51612, 23.32592, 23.2267, 23.49193, 23.18366,
   22.92548, 23.10616, 23.11023, 22.75042, 22.84678, 22.54219, 23.02244, 22.3948, 22.84065, 22.38953, 22.63132, 22.78182, 22.58332, 22.28087, 21.89964, 23.2123,
   21.99476, 22.10366, 22.43185, 21.94369, 22.24702, 21.82611, 21.9451, 21.56715, 21.84116, 21.44526, 21.62428, 21.33322, 21.91483, 21.74526, 21.17818, 21.22736,
   20.91826, 21.247, 21.10659, 21.04863, 20.73349, 20.70307, 20.6891, 21.00335, 20.93934, 20.87252, 20.63061, 20.35116, 20.41634, 20.85019, 20.25526, 20.51651,
   20.40037, 20.27864, 20.48111, 20.83189, 20.18821, 19.99245, 20.2219, 20.21385, 20.26915, 20.51661, 19.79292, 19.7992, 19.68499, 20.04989, 19.65205, 20.13794,
   19.63754, 19.85333, 20.44821, 19.59739, 19.37635, 19.27732, 19.67991, 19.20688, 19.24527, 18.81201, 18.8774, 19.32393, 18.80842, 19.29079, 19.24367, 19.03653,
   19.10779, 18.91822, 18.78708, 18.82756, 18.82516, 18.58116, 18.56352, 19.0444, 18.79968, 18.44163, 18.65951, 18.57243, 19.88485, 18.33767, 18.1993, 18.26686,
   18.2057, 18.2719, 18.19462, 18.17777, 17.95995, 18.16207, 17.7286, 18.20156, 18.1383, 17.81866, 17.98608, 17.87958, 17.60568, 17.44854, 18.21496, 17.85108,
   17.72224, 17.51574, 17.59263, 17.68044, 17.24993, 17.06951, 17.68034, 16.8924, 17.27973, 16.98253, 17.29468, 16.86416, 17.1319, 17.29216, 16.8893, 16.85797,
   16.93046, 16.7233, 16.94292, 16.83619, 16.87127, 17.58054, 16.83235, 16.93707, 16.60454, 16.48882, 16.51926, 16.2237, 16.3717, 16.5733, 16.07142, 16.39895,
   16.47185, 16.38409, 16.57945, 15.8199, 16.18466, 15.95561, 15.98886, 16.24508, 15.50982, 15.78575, 15.9836, 15.93749, 15.75577, 15.98664, 15.5916, 15.61358,
   15.65912, 15.73481, 15.45443, 15.51558, 15.45311, 15.81323, 15.30196, 15.21251, 15.49784, 15.50825, 15.29894, 15.34007, 15.14564, 14.61363, 15.00204, 15.09367,
   14.96815, 15.11018, 15.48433, 15.03875, 15.14571, 15.26771, 14.77264, 14.66731, 14.84002, 14.67812, 14.63242, 15.23758, 14.61507, 14.57573, 14.62939, 14.64851,
   14.79686, 14.59089, 14.31343, 14.70019, 14.21144, 14.3467, 14.14576, 14.13268, 14.08592, 14.13368, 14.26758, 13.92443, 14.20993, 14.02518, 13.84366, 14.15411,
   14.08917, 14.0907, 13.72452, 14.03543, 13.75602, 13.7735, 13.83521, 14.03107, 13.84993, 13.72313, 13.52782, 13.33539, 13.73556, 13.44028, 13.50672, 13.44185,
   13.36255, 13.56204, 13.29729, 13.09102, 13.4849, 13.66253, 13.04177, 13.41177, 13.4328, 13.35849, 13.23532, 13.06597, 13.70513, 13.26979, 13.07743, 13.09655,
   12.86973, 13.04643, 12.88423, 13.0142, 13.03984, 12.91539, 12.83948, 12.6816, 12.92517, 12.66247, 12.86376, 12.33079, 12.69338, 12.72478, 12.85138, 12.30517,
   12.82713, 12.67226, 12.63073, 12.45807, 12.47649, 12.2152, 12.45115, 12.36676, 12.19298, 12.26163, 11.90922, 12.32596, 12.49766, 11.90965, 12.54044, 11.85856,
   12.18796, 11.99865, 12.07937, 12.04927, 12.2192, 11.98159, 12.04124, 11.94195, 11.88122, 11.67729, 11.86018, 11.59574, 11.74936, 11.70313, 12.01947, 11.72626,
   11.66934, 11.66853, 11.66683, 11.94993, 11.66721, 11.71994, 11.26978, 11.49377, 11.15867, 11.77455, 11.90704, 11.47135, 11.35924, 11.83368, 11.52983, 11.49003,
   11.04072, 10.69255, 11.32382, 11.24779, 11.00333, 10.97708, 10.84655, 10.8915, 11.07612, 10.65232, 12.56921, 10.71447, 10.94172, 12.02003, 10.80084, 10.9201,
   10.94223, 10.94285, 10.81872, 10.90693, 10.82877, 10.64817, 10.90828, 11.08802, 10.51499, 10.57298, 10.81973, 10.48254, 10.50658, 10.25558, 10.389, 10.6661,
   10.53874, 10.00778, 10.53487, 10.63492, 10.22168, 10.22275, 10.3457, 10.50663, 10.2278, 10.11939, 10.37979, 10.27408, 10.62688, 10.2607, 10.44624, 10.1714,
   10.07154, 9.900043, 10.01261, 9.985311, 10.21746, 10.11488, 9.983425, 10.15779, 9.920373, 10.08176, 9.999351, 10.3198, 9.769996, 9.828739, 9.555751, 9.923339,
   9.608468, 9.771605, 9.369556, 9.475358, 9.990234, 9.837125, 9.807881, 9.512255, 9.542768, 9.409048, 9.465952, 9.861943, 9.339352, 9.537557, 9.245209, 9.375168,
   9.518261, 9.461624, 9.108574, 9.137952, 9.256638, 9.303586, 9.252395, 9.060262, 9.274309, 9.079189, 9.159352, 9.015958, 8.90285, 9.126667, 8.969304, 9.155505,
   9.448121, 9.23184, 8.857757, 9.021521, 8.847015, 8.840966, 9.231334, 8.597872, 8.650823, 8.896983, 8.657376, 9.188264, 8.729407, 8.983751, 8.811594, 8.956329,
   8.944625, 8.331007, 8.483649, 8.580686, 8.579802, 8.690796, 8.75514, 8.639551, 8.489958, 8.733027, 8.573982, 8.531986, 8.374904, 8.347884, 8.327806, 8.68878,
   8.627688, 8.604161, 8.459319, 8.415163, 8.573968, 8.318693, 8.505526, 8.309229, 8.193067, 8.423939, 8.225609, 8.004643, 8.088114, 8.479975, 8.210777, 8.492934,
   8.193067, 8.206515, 8.085428, 8.303709, 8.296193, 8.113908, 8.286335, 8.218834, 8.035393, 7.893431, 7.931038, 8.397559, 7.782765, 7.923562, 7.957286, 7.929131,
   8.186477, 7.906705, 7.962289, 7.90843, 8.044536, 7.809644, 7.604078, 7.78194, 7.883406, 7.533997, 7.778443, 7.720889, 7.619701, 8.416961, 7.675099, 7.591846,
   7.651064, 7.387291, 7.598795, 7.626358, 7.606831, 7.714354, 7.433517, 7.418566, 7.436628, 7.555969, 7.473503, 7.526329, 7.159109, 7.465625, 7.208038, 7.228714,
   7.353338, 6.749899, 7.350581, 7.740612, 7.170267, 7.239491, 7.175882, 7.381312, 7.342462, 7.16148, 6.994612, 6.974203, 7.612253, 7.181804, 7.270291, 7.422085,
   7.109877, 6.958404, 7.238, 6.628489, 7.169129, 7.152947, 7.055239 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1039,Graph_from_VH_tagOnly_2b1c_H_mass_fy1039,Graph_from_VH_tagOnly_2b1c_H_mass_fex1039,Graph_from_VH_tagOnly_2b1c_H_mass_fey1039);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetMinimum(-1007.31);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1039->SetMaximum(10207.12);
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
   data_mc_ratio__40->SetBinContent(1000,1.471414);
   data_mc_ratio__40->SetBinContent(1001,1.299424);
   data_mc_ratio__40->SetBinError(1000,0.1699042);
   data_mc_ratio__40->SetBinError(1001,0.008180125);
   data_mc_ratio__40->SetMinimum(0.4);
   data_mc_ratio__40->SetMaximum(1.6);
   data_mc_ratio__40->SetEntries(30.77658);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01586479, 0.007627716,
   0.007587827, 0.007368705, 0.007334899, 0.007434521, 0.007243688, 0.007160934, 0.007195537, 0.007183479, 0.007220282, 0.007088434, 0.007125483, 0.007135849, 0.00716103, 0.007080248, 0.007097098, 0.00706765,
   0.007082121, 0.007032816, 0.007030917, 0.007051675, 0.007084942, 0.007072553, 0.007223969, 0.007125546, 0.007031852, 0.007045631, 0.00711088, 0.00707444, 0.01431199, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1384157 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1040,Graph_from_mc_statistical_error_fy1040,Graph_from_mc_statistical_error_fex1040,Graph_from_mc_statistical_error_fey1040);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1040 = new TH1F("Graph_Graph_from_mc_statistical_error1040","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1040->SetMinimum(0.8339012);
   Graph_Graph_from_mc_statistical_error1040->SetMaximum(1.166099);
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
