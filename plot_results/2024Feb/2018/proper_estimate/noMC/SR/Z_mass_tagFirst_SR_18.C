#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_18/Z_mass_tagFirst_SR_18
//=========  (Wed Feb 14 12:27:16 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-43.76481,315.7258,43731.04);
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
   st->SetMaximum(39353.56);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",1000,0,2000);
   st_stack_44->SetMinimum(0.01);
   st_stack_44->SetMaximum(39353.56);
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
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,16024.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,16662.47);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,17180.13);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,17479.17);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,17609.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,17709.1);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,17482.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,17320.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,16983.37);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,16616.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,16095.8);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,15605.75);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,15217.9);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,14937.85);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,14500.41);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,14313.32);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,14143.06);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,14226.26);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,14053.28);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,13897.22);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,13764.22);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,13531.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,13330.75);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,13250.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,13015.66);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,12958.94);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,12825.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,12489.65);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,12452.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,12264.8);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,110.3587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50597.46);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(5,0.0355741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.0568535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.05566998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.07455751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.0481574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.08577198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.473333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.68927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.063444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,13.13532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,18.43517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,24.74078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,30.99496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,37.74738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,44.19598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,51.13933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,56.47752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,62.2048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,68.01789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,72.67852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,76.21824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,79.83963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,83.19079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,86.30015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,88.41071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,89.94694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,91.62887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,92.69183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,93.79137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,94.74758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,95.15242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,95.28673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,95.75607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.06797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,97.22777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,97.98642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,96.45841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,96.31646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,95.65856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,97.80915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,93.72595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,93.59636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,91.96059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,90.54225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.67096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,88.6038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,86.94723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.05141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.39026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,84.77895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.75136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,83.61558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,82.66424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,82.63108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,81.78974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,81.30662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.16841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,80.42068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,80.50334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,79.82496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.38831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.07263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,78.30883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,77.81591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,76.89808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,77.31068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,79.9983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,76.43921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,75.36064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,75.04445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,75.28017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,74.91201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,74.70735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.03157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,73.83586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,78.21387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.99574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.35915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,71.97178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,71.28339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.72276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,70.68282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.27861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,69.84807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,82.04165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,68.99245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,69.17922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.57721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.69931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.61166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.77459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,67.82307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.74189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.96619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,66.47938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,65.21302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.93857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,64.74361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,64.68658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,63.83966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,63.74348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.85689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,62.78793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,62.81985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,61.90534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,62.45399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.99363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.03283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,60.6661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,60.26873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,60.36395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,59.81346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,59.40626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,58.97739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.24356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,58.65861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,57.78599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,57.61336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,57.72742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,56.79274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.22583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,56.52081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,56.16206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,55.86266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,55.33257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,55.76853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,54.94773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,54.61981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,54.09462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,54.07653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,54.33864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,53.50889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,53.78009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,53.0937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,52.90465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,52.06202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,52.67676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,52.52603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,52.03441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,51.83661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,51.3557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,51.14059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,51.87756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,50.93925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,50.4406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,50.35115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,49.98669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,50.7906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,49.9808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,49.46207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,49.59222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,49.2628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,48.90564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,48.77755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,48.94411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,48.08609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,48.55768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,47.71977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,48.05625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,47.59233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,47.63592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,47.10511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,46.90476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,46.95114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,46.95149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,46.34688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,46.64053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,45.7631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,46.17888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,45.72704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,45.93277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,45.62833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,45.57644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,46.02995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,45.19557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,45.57881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,46.5149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,45.06413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,44.49528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,44.66113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,44.72707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,44.42089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,44.36835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,44.37568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.89731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,44.16372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,44.02693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,43.84105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,43.49232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,43.63009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,43.51341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,43.44073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.96454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,43.19638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,43.09461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,43.06505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,42.93812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,42.92284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,42.93935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,43.45988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,43.04549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,42.49358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,42.83078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,42.45065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,41.90613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,41.89741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,41.63729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.79534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,41.94448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,41.46315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,41.71998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,41.10941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,41.2013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,42.81468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,41.17284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,41.04391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,41.01691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,41.28642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.67254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,40.98761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,42.98191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,41.15595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,40.583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,40.50253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,40.73419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,41.16516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,40.20863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,40.02451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,40.81537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,41.61267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,40.18439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,39.75238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,40.93351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.83304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,40.21669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,39.67078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,40.01563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,39.38347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,39.42114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,39.17455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,39.10269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,39.3289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,39.42064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,38.99089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,39.09471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,39.3461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,39.38436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,39.52554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,38.78967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,39.31319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,38.53582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,38.76172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,38.69429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,38.47215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,38.64824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,38.73815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,38.32995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,38.42989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,38.25462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,37.73684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,38.33431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,38.10016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,38.49573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,37.81289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,37.48545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,37.81585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,37.57801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,37.0933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,37.16465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,37.41697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,37.41624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,37.22566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,37.91357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,37.36889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,37.3317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,37.40129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,38.32509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,37.58684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,36.87815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,37.20663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,36.92171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,36.88053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,36.40021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,37.21845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,36.85145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,37.35731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,36.8886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,36.6083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,36.49788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,36.18718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,36.43122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,36.69005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,36.32011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,36.14249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,36.55601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,36.15659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,36.3051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,36.70017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,35.92281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,35.90959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,36.11933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,36.31799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,35.69789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,35.91586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,35.91831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,35.64089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,35.21241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,35.56476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,35.8321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,35.73154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,35.98299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,36.39435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,36.27585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.04091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,35.96237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,34.76849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,34.58705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.16513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.02618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,34.74756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,34.77148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.08083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,47.65825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,34.32054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,34.95271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,34.71226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,34.62393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.33137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,34.26205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.37429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,35.03084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.37977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.09274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.13039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.35405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,33.73818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,33.7495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.05355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,33.68968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,33.74337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,34.24335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,34.11365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.36864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,33.68499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,33.74663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,34.71152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,33.4759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,33.42076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,33.39095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,33.21216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.15128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,33.22093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,33.48313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,33.00859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,33.02607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,33.03254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,32.79369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,32.49688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,33.06807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,33.09829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,34.81933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,32.95529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,32.8166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,32.75386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,32.42795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,32.4505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,32.4962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,32.69926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,32.36689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,32.35069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,32.15065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,32.59594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,32.30173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,32.51285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,32.11037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,32.05941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,32.308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,31.96592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,32.75975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,32.48683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,31.5861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,31.68308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,31.6436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,31.99218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,31.97621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,31.37058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,31.39138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,31.43222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,31.33556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,31.45618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,31.47474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,31.30431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,31.3597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,31.00278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,30.8437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,30.87946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,31.12212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,30.8641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,30.78492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,30.81053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,30.66278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,31.26964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,32.6684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,30.35652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,30.39179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,30.77814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,30.23998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,31.44306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,30.27239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,30.69172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,30.5384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,30.21127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,30.27509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,31.24923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,30.08013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,30.22996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,29.76126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,30.1231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,29.84638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,29.34389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,29.67132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,29.91945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,29.88401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,29.14937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,29.51803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,29.38788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,29.19277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,29.25754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,29.54235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,29.69803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,29.13243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,28.98071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,29.16167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,29.08421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,29.29649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,29.03725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,28.76008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,29.05666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,28.4962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,28.7649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,28.98632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,28.98589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,28.28499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,28.67478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,29.11799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,28.36302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,28.73692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,28.39079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,28.25442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,28.93947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,28.30652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,27.94972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,27.79648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,27.87398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,28.25196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,27.73544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,28.08666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,27.77512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,27.52989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,27.57317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,27.63125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,27.42324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,28.05825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,28.19722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,27.22107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,27.16845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,27.42489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,27.76098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,27.31233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,27.18813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,27.11925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,26.93979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,26.74213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,26.90202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,27.31656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,27.29784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,26.68529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,26.83595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,26.42889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,27.75041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,26.68131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,27.96899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,26.5088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,26.373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,26.66316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,26.61321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,26.49434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,26.7468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,26.19849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,26.74892);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,26.2719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,26.07604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,25.9804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,26.29368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,26.14075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,25.88089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,26.07952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,26.1304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,25.34882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,25.68999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,25.29812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,25.83426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,25.54015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,25.31134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,25.38657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,26.04375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,25.67544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,25.67759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,25.88091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,25.21468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,25.50506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,25.15091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,24.91885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,25.0878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,24.84412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,24.55843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,24.4725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,24.50221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,24.62987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,24.84194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,25.0125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,24.55946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,24.65681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,24.44556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,24.70424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,24.32391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,24.39961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,24.12844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,24.70711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,24.36578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,24.18184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,24.41617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,24.40468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,24.22315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,24.05343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,24.09675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,23.6749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,23.85462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,23.91266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,23.57572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,24.13066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,24.08879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,23.9859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,24.13841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,23.7501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,23.63136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,23.51249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,23.35995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,23.2431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,23.05738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,23.86379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,24.79741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,23.03974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,23.35947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,23.02195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,23.36036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,23.33874);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,23.06839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,23.65847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,22.69837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,22.87172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,23.08869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,23.06633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,22.88329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,22.79031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,22.57651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,22.51127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,22.84045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,22.5297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,22.34793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,25.67465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,22.27466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,22.01137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,22.29307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,22.48653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,22.11178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,22.39039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,22.16601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,22.16437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,22.18361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,22.91679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,22.08555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,21.60063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,22.04986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,21.82085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,22.50681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,21.75176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,21.62724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,21.41162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,21.28722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,21.89466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,21.35301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,21.20577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,22.33999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,21.7149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,21.48718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,21.61789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,21.5259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,21.44593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,20.80716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,20.69345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,20.45027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,21.36493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,21.29434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,21.41963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,20.63142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,20.67087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,20.75311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,21.11774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,21.10767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,21.20614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,20.97879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,20.82711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,20.89939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,20.64564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,20.40027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,20.8299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,20.38245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,20.72761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,20.43601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,20.16683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,20.21062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,20.39541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,20.42718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,20.32148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,19.82802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,20.01379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,20.09742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,19.51121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,20.34233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,19.57792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,19.98027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,20.44548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,19.8943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,19.8145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,19.43201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,19.93638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,19.68908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,19.83608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,20.11816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,19.1177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,19.06661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,19.70559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,19.75771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,19.69169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,19.5368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,19.67129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,19.33362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,19.43084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,19.44703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,19.20687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,19.05136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,18.85992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,19.1114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,18.92753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,19.37117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,18.96485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,19.57445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,18.86495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,19.0523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,18.57266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,18.71406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,18.43234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,18.65282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,18.52262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,18.27106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,18.14938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,18.7421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,18.43764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,18.40156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,18.55432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,18.55582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,18.32088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,18.26949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,18.50915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,17.9657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,18.39644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,17.91204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,18.09875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,17.57869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,18.50578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,18.6011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,18.21913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,18.28104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,18.51619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,18.14348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,17.77696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,20.35138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,17.90473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,17.69773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,17.86513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,18.18691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,17.61039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,17.74446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,17.94796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,17.82604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,17.84666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,17.1365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,17.65811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,17.46631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,17.44122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,17.33266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,17.49603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,17.32736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,17.32898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,17.02847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,17.24033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,17.12095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,16.84362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,17.00563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,17.25388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,17.29417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,17.03682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,17.25163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,17.05016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,17.04976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,16.77705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,16.42262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,16.8022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,16.48208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,16.95923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,16.66267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,16.69163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,16.78327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,16.55521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,16.87493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,16.7451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,16.70136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,16.79505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,16.70234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,16.64548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,16.70257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,16.25971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,16.22174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,16.41177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,16.27184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,16.05578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,15.88212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,16.15349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,16.51755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,16.3051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,15.65227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,16.16551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,15.94082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,16.88444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,15.86662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,15.88965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,15.75715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,15.92444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,15.54041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,16.14298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,15.44403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,15.51721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,15.66613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,15.82096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,15.62354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,15.57679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,15.58205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,15.66055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,15.94198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,15.74685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,15.6424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,15.39111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,15.61516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,15.76624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,15.09383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,15.42783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,15.59098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,15.25645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,15.6323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,15.30073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,15.56273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,15.35051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,14.79555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,15.15849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,14.77958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,15.06048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,15.1597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,14.78586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,14.97022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,14.72446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,15.08362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,14.8246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,18.24966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,14.85824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,15.05153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,14.88242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,14.79499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,15.27639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,14.47997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,14.55281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,14.92626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,14.01884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,14.57138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,14.18018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,14.25398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,14.14762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,14.52831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,14.45442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,14.40976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,13.85575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,14.63054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,14.64167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,14.99633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,14.06929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,14.30865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,13.92436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,14.30983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,14.26822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,13.81921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,14.01475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,14.20593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,14.28695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,14.14647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,13.82428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,13.69817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,13.70368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,14.13567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,13.81222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,13.39537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,13.81769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,13.66797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,13.95612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,13.64839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,22.90444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,13.50123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,13.72251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,13.94198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,13.59764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,13.30699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,14.75766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,13.54232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,13.53692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,13.13191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,13.21234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,13.06841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,13.59086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,12.75579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,13.33335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,13.40784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,13.20795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,13.33472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,13.63997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,12.80047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,13.22855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,13.36771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,12.97398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,13.39867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,13.25045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,13.05202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,13.64817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,12.63312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,12.6121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,12.88078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,13.10115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,13.09021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,13.19561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,12.50351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,12.52328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,12.98458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,12.84229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,12.51073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,12.98669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,12.46277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,12.9286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,12.56399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,12.35773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,12.16301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,12.73583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,12.45751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,12.23413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,12.53578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,12.34148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,12.66064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,12.5718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,12.17512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,12.58176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,12.29533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,12.46385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,12.34276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,12.24639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,11.9408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,12.24084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,12.45823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,12.41435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,12.08641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,12.26231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,12.19257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,11.92314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,12.14621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,11.43927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,12.20713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,11.96613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,11.53567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,11.95343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,11.82978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,12.2206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,11.99375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,11.72817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,11.75569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,11.63603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,11.47694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,12.12362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,11.68652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,11.64576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,11.71348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,11.93785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,11.56056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,11.13304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,11.95075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,11.74679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,11.91421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,11.64832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,11.69404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,11.55266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,11.28691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,11.4911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,11.7663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,11.18429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,11.36732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,11.1862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,11.70826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,11.32104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,11.13803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,10.90897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,11.1758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,11.57391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,11.10339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,11.4301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,10.87296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,11.00662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,11.2904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,10.94794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,11.20698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,10.71282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,11.06645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,10.98436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,11.20084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,11.07296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,10.95346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,11.02492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,10.8225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,10.59906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,10.6872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,10.88995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,11.00053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,10.86667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,10.375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,10.43169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,11.04428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,10.70134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,10.76887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,10.63365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,10.23771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,10.6644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,10.76764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,10.72675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,10.05564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,10.14705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,10.42294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,10.52855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,10.44809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,10.27656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,10.67401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,10.53613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,10.24016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,10.52101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,10.4421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,10.40629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,10.51243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,10.31115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,10.37734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,10.54665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,10.73934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,10.57317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,10.07258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,10.31244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,10.04351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,10.53237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,10.10626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,10.2184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,10.02292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,10.21594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,9.983283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,9.661703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,9.68914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,10.1481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,9.804889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,10.13068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,9.970064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,10.1055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,9.626661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,9.936478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,10.45309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,159.363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(4304511);

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
   VH_tagFirst_Z_mass__87->SetBinContent(1000,142);
   VH_tagFirst_Z_mass__87->SetBinContent(1001,66835);
   VH_tagFirst_Z_mass__87->SetEntries(3154538);

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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16024.48, 16662.47, 17180.13,
   17479.17, 17609.65, 17709.1, 17482.95, 17320.61, 16983.37, 16616.01, 16095.8, 15605.75, 15217.9, 14937.85, 14500.41, 14313.32, 14143.06, 14226.26, 14053.28,
   13897.22, 13764.22, 13531.44, 13330.75, 13250.24, 13015.66, 12958.94, 12825.77, 12489.65, 12452.24, 12264.8, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 110.3587 };
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087[1000] = { 0, 0, 0, 0, 0.0355741, 0, 0, 0.0568535, 0.05566998, 0.07455751, 0.0481574, 0.08577198, 1.473333, 3.68927, 8.063444, 13.13532, 18.43517,
   24.74078, 30.99496, 37.74738, 44.19598, 51.13933, 56.47752, 62.2048, 68.01789, 72.67852, 76.21824, 79.83963, 83.19079, 86.30015, 88.41071, 89.94694, 91.62887,
   92.69183, 93.79137, 94.74758, 95.15242, 95.28673, 95.75607, 96.06797, 97.22777, 97.98642, 96.45841, 96.31646, 95.65856, 97.80915, 93.72595, 93.59636, 91.96059,
   90.54225, 89.67096, 88.6038, 86.94723, 87.05141, 85.39026, 84.77895, 84.75136, 83.61558, 82.66424, 82.63108, 81.78974, 81.30662, 81.16841, 80.42068, 80.50334,
   79.82496, 80.38831, 79.07263, 78.30883, 77.81591, 76.89808, 77.31068, 79.9983, 76.43921, 75.36064, 75.04445, 75.28017, 74.91201, 74.70735, 74.03157, 73.83586,
   78.21387, 73.99574, 72.35915, 71.97178, 71.28339, 71.72276, 70.68282, 70.27861, 69.84807, 82.04165, 68.99245, 69.17922, 68.57721, 68.69931, 67.61166, 66.77459,
   67.82307, 66.74189, 65.96619, 66.47938, 65.21302, 64.93857, 64.74361, 64.68658, 63.83966, 63.74348, 62.85689, 62.78793, 62.81985, 61.90534, 62.45399, 60.99363,
   61.03283, 60.6661, 60.26873, 60.36395, 59.81346, 59.40626, 58.97739, 59.24356, 58.65861, 57.78599, 57.61336, 57.72742, 56.79274, 57.22583, 56.52081, 56.16206,
   55.86266, 55.33257, 55.76853, 54.94773, 54.61981, 54.09462, 54.07653, 54.33864, 53.50889, 53.78009, 53.0937, 52.90465, 52.06202, 52.67676, 52.52603, 52.03441,
   51.83661, 51.3557, 51.14059, 51.87756, 50.93925, 50.4406, 50.35115, 49.98669, 50.7906, 49.9808, 49.46207, 49.59222, 49.2628, 48.90564, 48.77755, 48.94411,
   48.08609, 48.55768, 47.71977, 48.05625, 47.59233, 47.63592, 47.10511, 46.90476, 46.95114, 46.95149, 46.34688, 46.64053, 45.7631, 46.17888, 45.72704, 45.93277,
   45.62833, 45.57644, 46.02995, 45.19557, 45.57881, 46.5149, 45.06413, 44.49528, 44.66113, 44.72707, 44.42089, 44.36835, 44.37568, 43.89731, 44.16372, 44.02693,
   43.84105, 43.49232, 43.63009, 43.51341, 43.44073, 42.96454, 43.19638, 43.09461, 43.06505, 42.93812, 42.92284, 42.93935, 43.45988, 43.04549, 42.49358, 42.83078,
   42.45065, 41.90613, 41.89741, 41.63729, 41.79534, 41.94448, 41.46315, 41.71998, 41.10941, 41.2013, 42.81468, 41.17284, 41.04391, 41.01691, 41.28642, 40.67254,
   40.98761, 42.98191, 41.15595, 40.583, 40.50253, 40.73419, 41.16516, 40.20863, 40.02451, 40.81537, 41.61267, 40.18439, 39.75238, 40.93351, 39.83304, 40.21669,
   39.67078, 40.01563, 39.38347, 39.42114, 39.17455, 39.10269, 39.3289, 39.42064, 38.99089, 39.09471, 39.3461, 39.38436, 39.52554, 38.78967, 39.31319, 38.53582,
   38.76172, 38.69429, 38.47215, 38.64824, 38.73815, 38.32995, 38.42989, 38.25462, 37.73684, 38.33431, 38.10016, 38.49573, 37.81289, 37.48545, 37.81585, 37.57801,
   37.0933, 37.16465, 37.41697, 37.41624, 37.22566, 37.91357, 37.36889, 37.3317, 37.40129, 38.32509, 37.58684, 36.87815, 37.20663, 36.92171, 36.88053, 36.40021,
   37.21845, 36.85145, 37.35731, 36.8886, 36.6083, 36.49788, 36.18718, 36.43122, 36.69005, 36.32011, 36.14249, 36.55601, 36.15659, 36.3051, 36.70017, 35.92281,
   35.90959, 36.11933, 36.31799, 35.69789, 35.91586, 35.91831, 35.64089, 35.21241, 35.56476, 35.8321, 35.73154, 35.98299, 36.39435, 36.27585, 35.04091, 35.96237,
   34.76849, 34.58705, 35.16513, 35.02618, 34.74756, 34.77148, 35.08083, 47.65825, 34.32054, 34.95271, 34.71226, 34.62393, 34.33137, 34.26205, 34.37429, 35.03084,
   34.37977, 34.09274, 34.13039, 34.35405, 33.73818, 33.7495, 34.05355, 33.68968, 33.74337, 34.24335, 34.11365, 33.36864, 33.68499, 33.74663, 34.71152, 33.4759,
   33.42076, 33.39095, 33.21216, 33.15128, 33.22093, 33.48313, 33.00859, 33.02607, 33.03254, 32.79369, 32.49688, 33.06807, 33.09829, 34.81933, 32.95529, 32.8166,
   32.75386, 32.42795, 32.4505, 32.4962, 32.69926, 32.36689, 32.35069, 32.15065, 32.59594, 32.30173, 32.51285, 32.11037, 32.05941, 32.308, 31.96592, 32.75975,
   32.48683, 31.5861, 31.68308, 31.6436, 31.99218, 31.97621, 31.37058, 31.39138, 31.43222, 31.33556, 31.45618, 31.47474, 31.30431, 31.3597, 31.00278, 30.8437,
   30.87946, 31.12212, 30.8641, 30.78492, 30.81053, 30.66278, 31.26964, 32.6684, 30.35652, 30.39179, 30.77814, 30.23998, 31.44306, 30.27239, 30.69172, 30.5384,
   30.21127, 30.27509, 31.24923, 30.08013, 30.22996, 29.76126, 30.1231, 29.84638, 29.34389, 29.67132, 29.91945, 29.88401, 29.14937, 29.51803, 29.38788, 29.19277,
   29.25754, 29.54235, 29.69803, 29.13243, 28.98071, 29.16167, 29.08421, 29.29649, 29.03725, 28.76008, 29.05666, 28.4962, 28.7649, 28.98632, 28.98589, 28.28499,
   28.67478, 29.11799, 28.36302, 28.73692, 28.39079, 28.25442, 28.93947, 28.30652, 27.94972, 27.79648, 27.87398, 28.25196, 27.73544, 28.08666, 27.77512, 27.52989,
   27.57317, 27.63125, 27.42324, 28.05825, 28.19722, 27.22107, 27.16845, 27.42489, 27.76098, 27.31233, 27.18813, 27.11925, 26.93979, 26.74213, 26.90202, 27.31656,
   27.29784, 26.68529, 26.83595, 26.42889, 27.75041, 26.68131, 27.96899, 26.5088, 26.373, 26.66316, 26.61321, 26.49434, 26.7468, 26.19849, 26.74892, 26.2719,
   26.07604, 25.9804, 26.29368, 26.14075, 25.88089, 26.07952, 26.1304, 25.34882, 25.68999, 25.29812, 25.83426, 25.54015, 25.31134, 25.38657, 26.04375, 25.67544,
   25.67759, 25.88091, 25.21468, 25.50506, 25.15091, 24.91885, 25.0878, 24.84412, 24.55843, 24.4725, 24.50221, 24.62987, 24.84194, 25.0125, 24.55946, 24.65681,
   24.44556, 24.70424, 24.32391, 24.39961, 24.12844, 24.70711, 24.36578, 24.18184, 24.41617, 24.40468, 24.22315, 24.05343, 24.09675, 23.6749, 23.85462, 23.91266,
   23.57572, 24.13066, 24.08879, 23.9859, 24.13841, 23.7501, 23.63136, 23.51249, 23.35995, 23.2431, 23.05738, 23.86379, 24.79741, 23.03974, 23.35947, 23.02195,
   23.36036, 23.33874, 23.06839, 23.65847, 22.69837, 22.87172, 23.08869, 23.06633, 22.88329, 22.79031, 22.57651, 22.51127, 22.84045, 22.5297, 22.34793, 25.67465,
   22.27466, 22.01137, 22.29307, 22.48653, 22.11178, 22.39039, 22.16601, 22.16437, 22.18361, 22.91679, 22.08555, 21.60063, 22.04986, 21.82085, 22.50681, 21.75176,
   21.62724, 21.41162, 21.28722, 21.89466, 21.35301, 21.20577, 22.33999, 21.7149, 21.48718, 21.61789, 21.5259, 21.44593, 20.80716, 20.69345, 20.45027, 21.36493,
   21.29434, 21.41963, 20.63142, 20.67087, 20.75311, 21.11774, 21.10767, 21.20614, 20.97879, 20.82711, 20.89939, 20.64564, 20.40027, 20.8299, 20.38245, 20.72761,
   20.43601, 20.16683, 20.21062, 20.39541, 20.42718, 20.32148, 19.82802, 20.01379, 20.09742, 19.51121, 20.34233, 19.57792, 19.98027, 20.44548, 19.8943, 19.8145,
   19.43201, 19.93638, 19.68908, 19.83608, 20.11816, 19.1177, 19.06661, 19.70559, 19.75771, 19.69169, 19.5368, 19.67129, 19.33362, 19.43084, 19.44703, 19.20687,
   19.05136, 18.85992, 19.1114, 18.92753, 19.37117, 18.96485, 19.57445, 18.86495, 19.0523, 18.57266, 18.71406, 18.43234, 18.65282, 18.52262, 18.27106, 18.14938,
   18.7421, 18.43764, 18.40156, 18.55432, 18.55582, 18.32088, 18.26949, 18.50915, 17.9657, 18.39644, 17.91204, 18.09875, 17.57869, 18.50578, 18.6011, 18.21913,
   18.28104, 18.51619, 18.14348, 17.77696, 20.35138, 17.90473, 17.69773, 17.86513, 18.18691, 17.61039, 17.74446, 17.94796, 17.82604, 17.84666, 17.1365, 17.65811,
   17.46631, 17.44122, 17.33266, 17.49603, 17.32736, 17.32898, 17.02847, 17.24033, 17.12095, 16.84362, 17.00563, 17.25388, 17.29417, 17.03682, 17.25163, 17.05016,
   17.04976, 16.77705, 16.42262, 16.8022, 16.48208, 16.95923, 16.66267, 16.69163, 16.78327, 16.55521, 16.87493, 16.7451, 16.70136, 16.79505, 16.70234, 16.64548,
   16.70257, 16.25971, 16.22174, 16.41177, 16.27184, 16.05578, 15.88212, 16.15349, 16.51755, 16.3051, 15.65227, 16.16551, 15.94082, 16.88444, 15.86662, 15.88965,
   15.75715, 15.92444, 15.54041, 16.14298, 15.44403, 15.51721, 15.66613, 15.82096, 15.62354, 15.57679, 15.58205, 15.66055, 15.94198, 15.74685, 15.6424, 15.39111,
   15.61516, 15.76624, 15.09383, 15.42783, 15.59098, 15.25645, 15.6323, 15.30073, 15.56273, 15.35051, 14.79555, 15.15849, 14.77958, 15.06048, 15.1597, 14.78586,
   14.97022, 14.72446, 15.08362, 14.8246, 18.24966, 14.85824, 15.05153, 14.88242, 14.79499, 15.27639, 14.47997, 14.55281, 14.92626, 14.01884, 14.57138, 14.18018,
   14.25398, 14.14762, 14.52831, 14.45442, 14.40976, 13.85575, 14.63054, 14.64167, 14.99633, 14.06929, 14.30865, 13.92436, 14.30983, 14.26822, 13.81921, 14.01475,
   14.20593, 14.28695, 14.14647, 13.82428, 13.69817, 13.70368, 14.13567, 13.81222, 13.39537, 13.81769, 13.66797, 13.95612, 13.64839, 22.90444, 13.50123, 13.72251,
   13.94198, 13.59764, 13.30699, 14.75766, 13.54232, 13.53692, 13.13191, 13.21234, 13.06841, 13.59086, 12.75579, 13.33335, 13.40784, 13.20795, 13.33472, 13.63997,
   12.80047, 13.22855, 13.36771, 12.97398, 13.39867, 13.25045, 13.05202, 13.64817, 12.63312, 12.6121, 12.88078, 13.10115, 13.09021, 13.19561, 12.50351, 12.52328,
   12.98458, 12.84229, 12.51073, 12.98669, 12.46277, 12.9286, 12.56399, 12.35773, 12.16301, 12.73583, 12.45751, 12.23413, 12.53578, 12.34148, 12.66064, 12.5718,
   12.17512, 12.58176, 12.29533, 12.46385, 12.34276, 12.24639, 11.9408, 12.24084, 12.45823, 12.41435, 12.08641, 12.26231, 12.19257, 11.92314, 12.14621, 11.43927,
   12.20713, 11.96613, 11.53567, 11.95343, 11.82978, 12.2206, 11.99375, 11.72817, 11.75569, 11.63603, 11.47694, 12.12362, 11.68652, 11.64576, 11.71348, 11.93785,
   11.56056, 11.13304, 11.95075, 11.74679, 11.91421, 11.64832, 11.69404, 11.55266, 11.28691, 11.4911, 11.7663, 11.18429, 11.36732, 11.1862, 11.70826, 11.32104,
   11.13803, 10.90897, 11.1758, 11.57391, 11.10339, 11.4301, 10.87296, 11.00662, 11.2904, 10.94794, 11.20698, 10.71282, 11.06645, 10.98436, 11.20084, 11.07296,
   10.95346, 11.02492, 10.8225, 10.59906, 10.6872, 10.88995, 11.00053, 10.86667, 10.375, 10.43169, 11.04428, 10.70134, 10.76887, 10.63365, 10.23771, 10.6644,
   10.76764, 10.72675, 10.05564, 10.14705, 10.42294, 10.52855, 10.44809, 10.27656, 10.67401, 10.53613, 10.24016, 10.52101, 10.4421, 10.40629, 10.51243, 10.31115,
   10.37734, 10.54665, 10.73934, 10.57317, 10.07258, 10.31244, 10.04351, 10.53237, 10.10626, 10.2184, 10.02292, 10.21594, 9.983283, 9.661703, 9.68914, 10.1481,
   9.804889, 10.13068, 9.970064, 10.1055, 9.626661, 9.936478, 10.45309 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1087,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1087);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMinimum(-1875.315);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1087->SetMaximum(19592.86);
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
   data_mc_ratio__88->SetBinContent(1000,1.286713);
   data_mc_ratio__88->SetBinContent(1001,1.320916);
   data_mc_ratio__88->SetBinError(1000,0.1079786);
   data_mc_ratio__88->SetBinError(1001,0.006589023);
   data_mc_ratio__88->SetMinimum(0.4);
   data_mc_ratio__88->SetMaximum(1.6);
   data_mc_ratio__88->SetEntries(62.44544);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005517227, 0.005398176, 0.005333422,
   0.005302989, 0.005326134, 0.005350219, 0.005442584, 0.005501348, 0.005638224, 0.005781649, 0.006040568, 0.006278866, 0.006338486, 0.006447815, 0.006596954, 0.006833437, 0.006626991, 0.006579128, 0.006543708,
   0.006515136, 0.006514788, 0.006547993, 0.006522307, 0.006569798, 0.006560579, 0.006542121, 0.006607896, 0.006694788, 0.006638505, 0.006737254, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.0947192 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.886337);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.113663);
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
