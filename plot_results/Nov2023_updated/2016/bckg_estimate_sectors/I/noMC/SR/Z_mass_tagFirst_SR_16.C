#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Mon Jan  8 11:15:25 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_16 = new TCanvas("Z_mass_tagFirst_SR_16", "Z_mass_tagFirst_SR_16",0,0,600,600);
   Z_mass_tagFirst_SR_16->SetHighLightColor(2);
   Z_mass_tagFirst_SR_16->Range(0,0,1,1);
   Z_mass_tagFirst_SR_16->SetFillColor(0);
   Z_mass_tagFirst_SR_16->SetFillStyle(4000);
   Z_mass_tagFirst_SR_16->SetBorderMode(0);
   Z_mass_tagFirst_SR_16->SetBorderSize(2);
   Z_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-65.39342,315.7258,65338.03);
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
   st->SetMaximum(58797.68);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",1000,0,2000);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(58797.68);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetRange(1,150);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,26306.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,26360.1);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,26458.96);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,26371.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,26132.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,25986.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,25851.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,25708.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,25391.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,25231.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,24931.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,24482.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,24296.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,24070.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,23725.46);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,23333.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,22994.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,22330.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,21978.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,21699.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,21323.33);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,20852.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,20495.1);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,20182.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,19879.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,19566.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,19413.26);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,19224.43);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,19026.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,18718.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,97.74383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50511.34);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9795676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.86788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.966057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,13.07431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,20.04441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,28.09937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.63149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,44.96723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,53.37392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.68691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,68.67461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,75.0724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,80.21098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,84.85647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,89.21367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,92.07936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,94.2758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,96.36178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.18758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.69079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,98.79074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,98.97581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,98.81294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,98.36384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,98.08752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,97.83354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.56134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,96.95882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.65225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.07685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,95.20758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,94.84406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,94.40221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,93.72383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,92.94543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.26897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,90.92734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,90.20688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.63292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,88.85262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,87.86673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.10995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.44253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.7923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.11374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.77971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.36639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,83.93145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.24925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.6958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.4393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.94814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.48768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.49609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.58778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.10324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.34757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.24385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.27584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.51221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.26301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.80364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.68198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.84189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.32729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.04211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.45033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.20375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.62829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.21016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.54217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.37422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.85018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.12686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.95275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.30783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.04109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.41897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.92278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.75103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.25113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,67.98853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,67.90278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.51102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.99228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.07752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.06819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.43231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.81558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.64404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.65682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.10314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,62.87573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.39096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,61.90128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,61.37979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,61.3675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.68352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,60.6078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.3812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,59.18891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,58.90569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.53568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,58.15153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,57.91414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,57.71023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,56.96672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,56.97514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.4822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,56.27188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,55.89792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,55.27649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,55.0516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,54.83454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,54.63544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,54.28052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,53.89148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,54.07558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,53.24792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,53.24406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,52.85777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,52.29198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,52.36533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,52.39804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,51.87746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.80475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.34227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.26879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,50.98459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,50.26978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,50.18108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,50.2616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.59858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.6897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,49.33254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,49.05389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,48.97138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.36015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.4635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.50874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,47.93594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,48.0559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.74971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.44443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,47.14444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,47.14735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,47.00321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,46.83229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.64459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.49299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.78983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,46.17644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,45.99649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.65698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,45.41917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.57584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,45.12091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,45.40861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,44.98247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.65367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,44.99313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,44.74721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,44.28995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,44.22956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.63986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,44.22801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,43.86232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,43.80134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.54553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.61159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.42574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.46676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.61002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.37205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.46203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,43.02139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.3167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,42.88256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,42.76252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.65821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,42.99908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.50369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,42.04975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,42.15394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.44721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.63204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,41.98613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,41.71756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,41.96164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.57602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.70441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.72249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.48856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.42243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,41.34956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.46212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,40.92805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,40.88783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,40.82409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.09684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,40.93474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.74678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.67608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.13325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.29346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,39.96725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.22366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,39.94838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,39.99982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,39.86422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.19298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,39.97582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.81778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.71436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.56913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.40597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.49805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.40075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,38.94232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.1407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,38.8701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,39.10041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,38.75354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,38.99509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,38.7836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.0969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.48734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.52116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.39105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.39462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.54251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.23721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.38213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,38.00528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,37.96197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,37.98724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.51938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.7574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,37.83538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.56814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,37.8933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,37.72289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.33388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.52981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,37.10554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.41457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,37.24934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.22909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,37.07967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,36.92408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,36.97601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.62026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.17935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.60154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.84603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.67637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.52844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.41945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.41945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.31202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.2818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,36.0981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,36.21184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.04489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,35.99542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,36.081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,35.95351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,35.86571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,35.94397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.71442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.47565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.38667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.4969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.7029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.31493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,35.19634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.39054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,34.87552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,35.05585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,34.79288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,34.97756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,34.88338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.78894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,34.84012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,34.86765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.69819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.39265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.60919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.36474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,34.12858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.3408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,33.97157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.40859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,34.31284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,34.10447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,33.99376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.66758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.67572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.70827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,34.11251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.46338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.72047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.37314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,33.12164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.40188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.35876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,33.18159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,32.99309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,33.09473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.32999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,33.23938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,33.04498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.64852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.74495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.87238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.61492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.37023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.68839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.48647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.46748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.47592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,32.10447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.44636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,32.09806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,32.1002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,32.04463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,32.14927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,31.92463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,31.87091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.75673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,32.10233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.8494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.55537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.64214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.65946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.39205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.34179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,31.26735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.45312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.28269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,31.12674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,31.01866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,31.20372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,30.94787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.75459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,30.79468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,31.03633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.58251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.39592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.61834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.1605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.55112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.31916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.29428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,30.03754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,29.97129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,29.91865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,29.91407);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,30.08314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,29.95986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.70945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.5568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.6471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.57071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,29.94613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.39869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.70253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,29.9301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,29.87739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,29.2022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,29.17402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.43364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,28.9476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.3637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,29.23504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.46622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,28.94523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.24441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,28.93813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.73849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,28.87648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.76471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.66207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.46772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.68597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.38574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.44363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.28414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.50862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,28.12376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.28899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.1335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,28.20892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,27.91093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,27.95264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.15542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,27.87652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,27.81253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.2696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,27.82484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.64444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.74838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.48531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.39789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.56002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.4229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.18694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.43539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.00898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.29764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.24989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.27252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.44788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.05046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,26.98958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,26.77798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.83678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,26.97942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.81123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.80356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.5182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.67797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.62139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.63683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.36267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.66769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.66255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.63168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.54662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.91692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.08037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.2663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.12501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.23497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.08563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.02249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,25.81623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.77372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.53595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.74179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.61902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.85603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,26.03303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.49566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.51984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.37439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.26883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.27154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.56546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.3852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.12739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.20093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,24.93847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.85037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,24.91647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.8917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.12193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.07551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.93847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.73703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.58974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.45278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.50877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.81449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.66766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.5758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.65654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.48079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.30941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.2077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.21619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,23.93148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,23.95725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.88275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,24.16235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.87988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.84253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.00869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.85403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.83103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.91716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,23.99726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.87126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.70993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.02951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.59983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.45709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.61725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.49796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.35753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,23.05926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.90417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.19853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,23.15121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.76008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.87423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.69072);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.37513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.85325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.62114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.52701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.65444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.92212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.68165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.52093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.46303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.76309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.66049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.61204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,22.15271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.20833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.56957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.31302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.77814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,22.12175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.1929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,22.08454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,21.95693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.47721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.91631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,22.05659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.89441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.50592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,22.10936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.85995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,22.14652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.69313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.51229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.47083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.36523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.57274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.53458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.29775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.25265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.2462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,21.10053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,21.02243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.23329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.87192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.18482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.86863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.19129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.90473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.24297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,20.98);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.76987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.83905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.90145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.47742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.88177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.59756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.76987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.32287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.42044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.38012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.48076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.62084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.65737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,20.07858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.32624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.92437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,20.09223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.24854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.34983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,20.03757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.02731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.24176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,20.20448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.6298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.77244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,20.06492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.86581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.54933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.58785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.52828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.62281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.70646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.73774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.25969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.48612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.2988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.52828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,19.03057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.37677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.51423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.15979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.91859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,19.04857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,19.09888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.95117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.15263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.94394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.75851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.90047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.86417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.71461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.81688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.42674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.34846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.54538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.77677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.56385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.46018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.18336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.39696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.29983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.31855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.26609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.43046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.35966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.10403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,18.21725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,18.1116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.32603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.04335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.38578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,18.00913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.63222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.83705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.94432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.4878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.83705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.65553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.4878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,17.8716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.60499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.53477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.75617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.6943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.36193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.25899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.41318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.36982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.33427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.24707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.27883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.4053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.23116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.26296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.68144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.80017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.46427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.88968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.79609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.66088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.33823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.8775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.68965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.69786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.71017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.65265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.59906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.6691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.55358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.76341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.47056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.19358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.30746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.25694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.39548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.55772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.99342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,16.20627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.28643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.32006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.42055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.18935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.32426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.18511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,16.10871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.03621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.18088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.86433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.63367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.86001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.62052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.6249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.81674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,16.08316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.78203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.79939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.53251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.55456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.26097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.5281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.66871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.3773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.41291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.58977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,15.09388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.42625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.41736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.30134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,15.03017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.45288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.20698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.27892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.40846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.35499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.34606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.9341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.94328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,15.03473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.12563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.78188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.49628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.92492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.74474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.59992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.76796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.82355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.82817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.71682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.4584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.32984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.61869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.22904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.42518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.42993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.16144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.34896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.30111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,14.80504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.18562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.27713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.26272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.3059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.32027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.98612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.92227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.17596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.9075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.01061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.02527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.85812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.72394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.91735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.87789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.05944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.76383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.62369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.83833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.81354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.65384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.6438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.81354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.93703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.77876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.83833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.72394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.62872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.23064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.69394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,13.05332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.55813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.34412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,13.18393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.17873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.16833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.2875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.62369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.13706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.52776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.19433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.39539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.19952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.2875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.29781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.9796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.88952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.6317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.60454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.10572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,13.0323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.84157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.80951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.75052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.01651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.85757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.61541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.93729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.85757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.02178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.93729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.62628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.90015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.42932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.48983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.43483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.51724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.60454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.13354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.70204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.44034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.09393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.29626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.20675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.26277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.13354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.14483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.81878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.6435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.76064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.34633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.93994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.2404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.13354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,12.0996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.83616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.71393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.07692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.08259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.96288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.87663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.80717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.79556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.90545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.50136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.63172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.63172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.87663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.75481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.50136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.74314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.78974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.47749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.93994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.31511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.67877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.68463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.40561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.33932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.36347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.28478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.08873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.29693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.06397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.48943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.15036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.02052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.23609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.28478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.33327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.87024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.24828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.15036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.83234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.97066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.19331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.9519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.69864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.87024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.7816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.79431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.96441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.11342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.76888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.63439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.00185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.81968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.87654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.74977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.6537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.55676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.69223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.68582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.52425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.59564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.64083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.62149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.34029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.47856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.13273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.6537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.4261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.28046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.71145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.23369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.36677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.54377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.16649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.4261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.37338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.28713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.46547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.15975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.08527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.962187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.20686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.91391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.19342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.22028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.04441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.34692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.09885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.70429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.927728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.982806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.604902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.788677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.13949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.920821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.858447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.941526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.837568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.70429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.872342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.781672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.920821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.948418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.597763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.561991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.410261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.690154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.315094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.482816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.746575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.683079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.263446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.189159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.767649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.475586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.475586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.211508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.256044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.189159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.58347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.270842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.270842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.106743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.196615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.58347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.329799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.511683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.395683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.084137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.34448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.461108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.015976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.129294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.144297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.218946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.808331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.916602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.076588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.233803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.885802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.970248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.792755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.769339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.924286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.800546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.722318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.475221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.46713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.531643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.698712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.579709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.571717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.954954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.619559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.084137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.878086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.595671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.675042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.870362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.426559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.499448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.611604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.515561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.792755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.55571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.009554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.515561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.667137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.170524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.442811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.587694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.983841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.507508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.426559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.753693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.579709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.320149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,136.7531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(9235223);

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
   
   TH1D *VH_tagFirst_Z_mass__7 = new TH1D("VH_tagFirst_Z_mass__7","",1000,0,2000);
   VH_tagFirst_Z_mass__7->SetBinContent(1000,110);
   VH_tagFirst_Z_mass__7->SetBinContent(1001,60794);
   VH_tagFirst_Z_mass__7->SetEntries(3572384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__7->SetLineColor(ci);
   VH_tagFirst_Z_mass__7->SetLineWidth(2);
   VH_tagFirst_Z_mass__7->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__7->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__7->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__7->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__7->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__7->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__7->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__7->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__7->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__7->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__7->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__7->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1007[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26306.79, 26360.1, 26458.96,
   26371.95, 26132.77, 25986.16, 25851.76, 25708.11, 25391.55, 25231.24, 24931.71, 24482.61, 24296.01, 24070.16, 23725.46, 23333.01, 22994.61, 22330.76, 21978.29,
   21699.5, 21323.33, 20852.76, 20495.1, 20182.25, 19879.76, 19566.54, 19413.26, 19224.43, 19026.72, 18718.68, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 97.74383 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1007[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9795676, 2.86788, 6.966057, 13.07431, 20.04441, 28.09937,
   36.63149, 44.96723, 53.37392, 60.68691, 68.67461, 75.0724, 80.21098, 84.85647, 89.21367, 92.07936, 94.2758, 96.36178, 97.18758, 98.69079, 98.79074, 98.97581,
   98.81294, 98.36384, 98.08752, 97.83354, 97.56134, 96.95882, 96.65225, 96.07685, 95.20758, 94.84406, 94.40221, 93.72383, 92.94543, 92.26897, 90.92734, 90.20688,
   89.63292, 88.85262, 87.86673, 87.10995, 86.44253, 85.7923, 85.11374, 84.77971, 84.36639, 83.93145, 83.24925, 82.6958, 82.4393, 81.94814, 81.48768, 81.49609,
   80.58778, 80.10324, 79.34757, 79.24385, 79.27584, 78.51221, 78.26301, 77.80364, 77.68198, 76.84189, 76.32729, 76.04211, 75.45033, 75.20375, 74.62829, 74.21016,
   73.54217, 73.37422, 72.85018, 72.12686, 71.95275, 71.30783, 71.04109, 70.41897, 69.92278, 69.75103, 69.028, 68.25113, 67.98853, 67.90278, 67.51102, 66.99228,
   66.07752, 66.06819, 65.43231, 64.81558, 64.64404, 64.024, 63.65682, 63.10314, 62.87573, 62.39096, 61.90128, 61.37979, 61.3675, 60.68352, 60.6078, 60.3812,
   59.48, 59.18891, 58.90569, 58.53568, 58.15153, 57.91414, 57.71023, 56.96672, 56.97514, 56.4822, 56.27188, 55.89792, 55.27649, 55.0516, 54.83454, 54.63544,
   54.28052, 53.89148, 54.07558, 53.24792, 53.24406, 52.85777, 52.29198, 52.36533, 52.39804, 51.87746, 51.80475, 51.34227, 51.26879, 50.98459, 50.26978, 50.18108,
   50.2616, 49.59858, 49.6897, 49.33254, 49.05389, 48.97138, 48.36015, 48.4635, 48.50874, 47.93594, 48.0559, 47.74971, 47.44443, 47.14444, 47.14735, 47.00321,
   46.83229, 46.64459, 46.49299, 46.78983, 46.17644, 45.99649, 45.65698, 45.41917, 45.57584, 45.12091, 45.40861, 44.98247, 44.65367, 44.99313, 44.74721, 44.28995,
   44.22956, 44.63986, 44.22801, 43.86232, 43.80134, 43.54553, 43.61159, 43.42574, 43.46676, 43.61002, 43.37205, 43.46203, 43.02139, 43.3167, 42.88256, 42.76252,
   42.65821, 42.99908, 42.50369, 42.04975, 42.15394, 42.44721, 41.63204, 41.98613, 41.71756, 41.96164, 41.57602, 41.70441, 41.72249, 41.48856, 41.42243, 41.34956,
   41.46212, 40.92805, 40.88783, 40.82409, 41.09684, 40.93474, 40.74678, 40.67608, 40.13325, 40.29346, 39.96725, 40.22366, 39.94838, 39.99982, 39.86422, 40.19298,
   39.97582, 39.81778, 39.71436, 39.56913, 39.40597, 39.49805, 39.40075, 38.94232, 39.1407, 38.8701, 39.10041, 38.75354, 38.99509, 38.7836, 39.0969, 38.48734,
   38.52116, 38.39105, 38.39462, 38.54251, 38.23721, 38.38213, 38.00528, 37.96197, 37.98724, 38.51938, 37.7574, 37.83538, 37.56814, 37.8933, 37.72289, 37.33388,
   37.52981, 37.10554, 37.41457, 37.24934, 37.22909, 37.07967, 36.92408, 36.97601, 36.62026, 37.17935, 36.60154, 36.84603, 36.67637, 36.52844, 36.41945, 36.41945,
   36.31202, 36.2818, 36.0981, 36.21184, 36.04489, 35.99542, 36.081, 35.95351, 35.86571, 35.94397, 35.71442, 35.47565, 35.38667, 35.4969, 35.7029, 35.31493,
   35.19634, 35.39054, 34.87552, 35.05585, 34.79288, 34.97756, 34.88338, 34.78894, 34.84012, 34.86765, 34.69819, 34.39265, 34.60919, 34.36474, 34.12858, 34.3408,
   33.97157, 34.40859, 34.31284, 34.10447, 33.99376, 33.66758, 33.67572, 33.70827, 34.11251, 33.46338, 33.72047, 33.37314, 33.12164, 33.40188, 33.35876, 33.18159,
   32.99309, 33.09473, 33.32999, 33.23938, 33.04498, 32.64852, 32.74495, 32.87238, 32.61492, 32.37023, 32.68839, 32.48647, 32.46748, 32.47592, 32.10447, 32.44636,
   32.09806, 32.1002, 32.04463, 32.14927, 31.92463, 31.87091, 31.75673, 32.10233, 31.8494, 31.55537, 31.64214, 31.65946, 31.39205, 31.34179, 31.26735, 31.45312,
   31.28269, 31.12674, 31.01866, 31.20372, 30.94787, 30.75459, 30.79468, 31.03633, 30.58251, 30.39592, 30.61834, 30.1605, 30.55112, 30.31916, 30.29428, 30.03754,
   29.97129, 29.91865, 29.91407, 30.08314, 29.95986, 29.70945, 29.5568, 29.6471, 29.57071, 29.94613, 29.39869, 29.70253, 29.9301, 29.87739, 29.2022, 29.17402,
   29.43364, 28.9476, 29.3637, 29.23504, 29.46622, 28.94523, 29.24441, 28.93813, 28.73849, 28.87648, 28.76471, 28.66207, 28.46772, 28.68597, 28.38574, 28.44363,
   28.28414, 28.50862, 28.12376, 28.28899, 28.1335, 28.20892, 27.91093, 27.95264, 28.15542, 27.87652, 27.81253, 28.2696, 27.82484, 27.64444, 27.74838, 27.48531,
   27.39789, 27.56002, 27.4229, 27.18694, 27.43539, 28.00898, 27.29764, 27.24989, 27.27252, 27.44788, 27.05046, 26.98958, 26.77798, 26.83678, 26.97942, 26.81123,
   26.80356, 26.5182, 26.67797, 26.62139, 26.63683, 26.36267, 26.66769, 26.66255, 26.63168, 26.54662, 25.91692, 26.08037, 26.2663, 26.12501, 26.23497, 26.08563,
   26.02249, 25.81623, 25.77372, 25.53595, 25.74179, 25.61902, 25.85603, 26.03303, 25.49566, 25.51984, 25.37439, 25.26883, 25.27154, 25.56546, 25.3852, 25.12739,
   25.20093, 24.93847, 24.85037, 24.91647, 24.8917, 25.12193, 25.07551, 24.93847, 24.73703, 24.58974, 24.45278, 24.50877, 24.81449, 24.66766, 24.5758, 24.65654,
   24.48079, 24.30941, 24.2077, 24.21619, 23.93148, 23.95725, 23.88275, 24.16235, 23.87988, 23.84253, 24.00869, 23.85403, 23.83103, 23.91716, 23.99726, 23.87126,
   23.70993, 23.02951, 23.59983, 23.45709, 23.61725, 23.49796, 23.35753, 23.05926, 22.90417, 23.19853, 23.15121, 22.76008, 22.87423, 22.69072, 23.37513, 22.85325,
   22.62114, 22.52701, 22.65444, 22.92212, 22.68165, 22.52093, 22.46303, 22.76309, 22.66049, 22.61204, 22.15271, 22.20833, 22.56957, 22.31302, 22.77814, 22.12175,
   22.1929, 22.08454, 21.95693, 21.47721, 21.91631, 22.05659, 21.89441, 21.50592, 22.10936, 21.85995, 22.14652, 21.69313, 21.51229, 21.47083, 21.36523, 21.57274,
   21.53458, 21.29775, 21.25265, 21.2462, 21.10053, 21.02243, 21.23329, 20.87192, 21.18482, 20.86863, 21.19129, 20.90473, 21.24297, 20.98, 20.76987, 20.83905,
   20.90145, 20.47742, 20.88177, 20.59756, 20.76987, 20.32287, 20.42044, 20.38012, 20.48076, 20.62084, 20.65737, 20.07858, 20.32624, 19.92437, 20.09223, 20.24854,
   20.34983, 20.03757, 20.02731, 20.24176, 20.20448, 19.6298, 19.77244, 20.06492, 19.86581, 19.54933, 19.58785, 19.52828, 19.62281, 19.70646, 19.73774, 19.25969,
   19.48612, 19.2988, 19.52828, 19.03057, 19.37677, 19.51423, 19.15979, 18.91859, 19.04857, 19.09888, 18.95117, 19.15263, 18.94394, 18.75851, 18.90047, 18.86417,
   18.71461, 18.81688, 18.42674, 18.34846, 18.54538, 18.77677, 18.56385, 18.46018, 18.18336, 18.39696, 18.29983, 18.31855, 18.26609, 18.43046, 18.35966, 18.10403,
   18.21725, 18.1116, 18.32603, 18.04335, 18.38578, 18.00913, 17.63222, 17.83705, 17.94432, 17.4878, 17.83705, 17.65553, 17.4878, 17.8716, 17.60499, 17.53477,
   17.75617, 17.6943, 17.36193, 17.25899, 17.41318, 17.36982, 17.33427, 17.733, 17.24707, 17.27883, 17.4053, 17.23116, 17.26296, 16.68144, 16.80017, 17.46427,
   16.88968, 16.79609, 16.66088, 17.33823, 16.8775, 16.68965, 16.69786, 16.71017, 16.65265, 16.59906, 16.6691, 16.55358, 16.76341, 16.47056, 16.19358, 16.30746,
   16.25694, 16.39548, 16.55772, 15.99342, 16.20627, 16.28643, 16.32006, 16.42055, 16.18935, 16.32426, 16.18511, 16.10871, 16.03621, 16.18088, 15.86433, 15.63367,
   15.86001, 15.62052, 15.6249, 15.81674, 16.08316, 15.78203, 15.79939, 15.53251, 15.55456, 15.26097, 15.5281, 15.66871, 15.3773, 15.41291, 15.58977, 15.09388,
   15.42625, 15.41736, 15.30134, 15.03017, 15.45288, 15.20698, 15.27892, 15.40846, 15.35499, 15.34606, 14.9341, 14.94328, 15.03473, 15.12563, 14.78188, 14.49628,
   14.92492, 14.74474, 14.59992, 14.76796, 14.82355, 14.82817, 14.71682, 14.614, 14.4584, 14.32984, 14.61869, 14.22904, 14.42518, 14.42993, 14.16144, 14.34896,
   14.30111, 14.80504, 14.18562, 14.27713, 14.26272, 14.3059, 14.32027, 13.98612, 13.92227, 14.17596, 13.9075, 14.01061, 14.02527, 13.85812, 13.72394, 13.91735,
   13.87789, 14.05944, 13.76383, 13.62369, 13.83833, 13.81354, 13.65384, 13.6438, 13.81354, 13.93703, 13.77876, 13.83833, 13.72394, 13.62872, 13.23064, 13.69394,
   13.05332, 13.55813, 13.34412, 13.18393, 13.17873, 13.16833, 13.2875, 13.62369, 13.13706, 13.52776, 13.19433, 13.39539, 13.19952, 13.2875, 13.29781, 12.9796,
   12.88952, 12.6317, 12.60454, 13.10572, 13.0323, 12.84157, 12.80951, 12.75052, 13.01651, 12.85757, 12.61541, 12.93729, 12.85757, 13.02178, 12.93729, 12.62628,
   12.90015, 12.42932, 12.48983, 12.43483, 12.51724, 12.60454, 12.13354, 12.70204, 12.44034, 12.09393, 12.29626, 12.20675, 12.26277, 12.13354, 12.14483, 11.81878,
   11.6435, 11.76064, 12.34633, 11.93994, 12.2404, 12.13354, 12.0996, 11.83616, 11.71393, 12.07692, 12.08259, 11.96288, 11.87663, 11.80717, 11.79556, 11.90545,
   11.50136, 11.63172, 11.63172, 11.87663, 11.75481, 11.50136, 11.74314, 11.78974, 11.47749, 11.93994, 11.31511, 11.67877, 11.68463, 11.40561, 11.33932, 11.36347,
   11.28478, 11.08873, 11.29693, 11.06397, 11.48943, 11.15036, 11.02052, 11.23609, 11.28478, 11.33327, 10.87024, 11.24828, 11.15036, 10.83234, 10.97066, 11.19331,
   10.9519, 10.69864, 10.87024, 10.7816, 10.79431, 10.96441, 11.11342, 10.76888, 10.63439, 11.00185, 10.81968, 10.87654, 10.74977, 10.6537, 10.55676, 10.69223,
   10.68582, 10.52425, 10.59564, 10.64083, 10.62149, 10.34029, 10.47856, 10.13273, 10.6537, 10.4261, 10.28046, 10.71145, 10.23369, 10.36677, 10.54377, 10.16649,
   10.4261, 10.37338, 10.28713, 10.46547, 10.15975, 10.08527, 9.962187, 10.20686, 9.91391, 10.19342, 10.22028, 10.04441, 10.34692, 10.09885, 9.70429, 9.927728,
   9.982806, 9.604902, 9.788677, 10.13949, 9.920821, 9.858447, 9.941526, 9.837568, 9.70429, 9.872342, 9.781672, 9.920821, 9.948418, 9.597763, 9.561991, 9.410261,
   9.690154, 9.315094, 9.482816, 9.746575, 9.683079, 9.263446, 9.189159, 9.767649, 9.475586, 9.475586, 9.211508, 9.256044, 9.189159, 9.58347, 9.270842, 9.270842,
   9.106743, 9.196615, 9.58347, 9.329799, 9.511683, 9.395683, 9.084137, 9.34448, 9.461108, 9.015976, 9.129294, 9.144297, 9.218946, 8.808331, 8.916602, 9.076588,
   9.233803, 8.885802, 8.970248, 8.792755, 8.769339, 8.924286, 8.800546, 8.722318, 8.475221, 8.46713, 8.531643, 8.698712, 8.579709, 8.571717, 8.954954, 8.619559,
   9.084137, 8.878086, 8.595671, 8.675042, 8.870362, 8.426559, 8.499448, 8.611604, 8.515561, 8.792755, 8.55571, 8.009554, 8.515561, 8.667137, 8.170524, 8.442811,
   8.587694, 7.983841, 8.507508, 8.426559, 8.753693, 8.579709, 8.320149 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1007,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1007,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1007,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1007);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->SetMinimum(-2762.7);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->SetMaximum(29223.45);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1007);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",1000,0,2000);
   data_mc_ratio__8->SetBinContent(1000,1.125391);
   data_mc_ratio__8->SetBinContent(1001,1.203571);
   data_mc_ratio__8->SetBinError(1000,0.1073018);
   data_mc_ratio__8->SetBinError(1001,0.005869044);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(61.21201);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,150);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1008[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003751533, 0.003747737, 0.00374073,
   0.003746895, 0.003764003, 0.003774606, 0.003784405, 0.003794964, 0.003818547, 0.003830659, 0.0038536, 0.003888784, 0.00390369, 0.003921961, 0.003950348, 0.003983432, 0.004012636, 0.004071842, 0.004104363,
   0.004130645, 0.00416692, 0.004213674, 0.004250281, 0.004283097, 0.00431556, 0.004349965, 0.004367104, 0.004388498, 0.00441124, 0.004447388, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08512199 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.8978536);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.102146);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
