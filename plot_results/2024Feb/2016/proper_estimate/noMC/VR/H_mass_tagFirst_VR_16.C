#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_16/H_mass_tagFirst_VR_16
//=========  (Wed Feb 14 12:27:14 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_16 = new TCanvas("H_mass_tagFirst_VR_16", "H_mass_tagFirst_VR_16",0,0,600,600);
   H_mass_tagFirst_VR_16->SetHighLightColor(2);
   H_mass_tagFirst_VR_16->Range(0,0,1,1);
   H_mass_tagFirst_VR_16->SetFillColor(0);
   H_mass_tagFirst_VR_16->SetFillStyle(4000);
   H_mass_tagFirst_VR_16->SetBorderMode(0);
   H_mass_tagFirst_VR_16->SetBorderSize(2);
   H_mass_tagFirst_VR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-44.40477,315.7258,44370.37);
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
   st->SetMaximum(39928.89);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",1000,0,2000);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(39928.89);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetRange(1,150);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7540.628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15365.66);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,15129.14);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,14913.39);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,14838.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7382.528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6263.877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,12436.58);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,12302.84);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,12322.09);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,12041.05);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,6106.446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,27.85715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,18040.85);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.516188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,1.034586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.217781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.731666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.41204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,24.95968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.05907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.22587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,49.33764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,56.5522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,62.81111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,68.71777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,73.15865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,76.66101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,79.75472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,81.77892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,82.90443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,83.38678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,84.05617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,84.27358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,83.96394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,83.7823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,83.39944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,83.24794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.01909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,82.2106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.15129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,81.59291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,81.1669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,80.86222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,80.31269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,80.3085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,79.77244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,79.47156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,79.53427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,78.99297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,78.32886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,78.14397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,77.88922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,77.77109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,77.93153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,77.73918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,77.37558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.44718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,77.54704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.14417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,76.94967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,76.5947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,76.56769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.13366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.36961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.03522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,75.82814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,75.89706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,75.391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,74.99736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,74.94877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,74.38868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.08804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.17143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,73.78276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,73.64312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,73.423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,72.99056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,72.78291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,72.61871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.23834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,71.99912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,71.83407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.5272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.10437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.02727);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,70.28562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.4446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,69.97722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,69.87794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.15735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.31093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.37677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,68.90809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,68.82051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.03538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.35268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.4522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,67.93053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,67.46924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.33098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,66.91675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.01908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.18254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,66.67735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,66.67333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,66.59496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,65.78864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,65.94399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,65.54895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,65.92017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,65.48353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,65.60117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,64.97176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,64.83083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,64.82117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.04824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,64.7781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.60025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,64.65161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.26783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.49877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.06508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,64.11229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,63.72989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,63.74399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,63.73811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,63.52083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,63.5567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.10109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,62.89594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.2353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,62.95554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.00603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,62.93502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.00968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.34506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.41868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.01371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.13376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,61.94573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,61.79171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,61.51127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,61.63438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.35272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.1464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,60.75382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,60.94487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.73062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,60.69568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.58474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.29689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,59.9325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.9924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.10272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.01407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.60387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.3792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.39144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.4508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.89583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.2323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.51596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,58.80726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.0753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.98247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.93305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,57.82584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.93026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.64111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.23298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.38829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.03566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,56.96444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.53245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.79184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.19095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.10594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.43595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.0299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,55.77314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.4799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.78463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.29156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.23462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,54.94395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,54.87227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,54.95522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.25751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.18686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.40359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,53.96688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,53.61579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,53.80189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.05164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,52.96787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.35331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.05648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,52.74706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,52.69728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,52.42955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.70759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.47569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,51.79744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,51.58262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,51.67238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.25844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.10879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,51.7542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,50.71961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,50.78547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,50.72693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,50.79685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.3312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.23416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.02737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,49.75254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,49.96639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,49.42272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.21666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.35605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.33167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.19824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.15466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,48.49713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,48.60262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.19394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,47.60518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,47.8927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.0795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,47.50346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,47.51922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,47.37647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,46.6736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,46.82159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,46.76545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,46.5945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,46.68524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.10421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,46.48245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.03052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,45.83106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.46855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,45.79799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.17846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.23211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,44.82364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,44.72516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,44.99118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,44.89371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,44.40509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,44.48315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.26013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.28111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.18674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,43.89697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,43.78079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.63106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.32826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.15551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.3204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,42.84481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,42.74565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,42.80693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.41757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.17465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.55877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,42.45671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.57637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,41.70228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.52839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.79484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.24349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.06265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,40.98131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.06482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.66218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,40.61843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.67817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.2653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.2458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,39.92704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,39.72325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,39.68792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.08686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,39.83978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,39.69892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.15828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.20451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.28605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,38.83206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,38.99333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.59738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,38.81611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.17278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,37.93671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.33492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,37.99969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,37.89711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,37.6216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,37.73762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.48429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.36987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.43891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.08058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,36.82558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,36.84027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,36.93144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,36.58267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,36.77551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,36.7334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.27607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,35.95885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.11717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.17263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,35.78074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,35.7847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,35.55317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.34721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.21709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.32304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.36458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,34.98485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.2293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,34.63462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.11995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,34.79029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,34.50837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.14544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.36468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.02066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.10262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,33.59571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.21238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.19786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.52225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,33.60327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.56257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.35073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.50217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.02949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,32.96624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,32.78422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,32.85228);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,32.90145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,32.64746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.5426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.55276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.4841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.27303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.16655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.01756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,31.78951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,31.62609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.56891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.54034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.28032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.2673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.24365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,30.83682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,30.89574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,30.95119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.71591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.22305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,30.53499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,30.66822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.32207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.33734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,29.9713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.02976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.25615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,29.95722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,29.63207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,29.85659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,29.94551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.57249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.21077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.43439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.06117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.02523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.20775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,28.90023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.15758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,28.58272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,28.70782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.50284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.42465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.31888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.42436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.27134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,27.85796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.59506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,27.68548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,27.78466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,27.65207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.5946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.25944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,27.75453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.20702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.11913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.34414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,26.85951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,26.95454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.04259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,26.75554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.02628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.53597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.50881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.30037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.18839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,26.68856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.3106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.15656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,25.95358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.08002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,25.99354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.00009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,25.82692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,25.59687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.51474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.49771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.36678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.0546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.04143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,24.95774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,24.93184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,24.75688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.0281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.5138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.14822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.27625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.58115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.67698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.56184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.42587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.09717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.38681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,23.79994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.08428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,23.9523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.65272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.17904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.07381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.44757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.53018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.58271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.68633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.3129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.27511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.29043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.16654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.35307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,22.76402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.60002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.41412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,22.69026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,22.97197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.45189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,22.90315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.58509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.43242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.30667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.18669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.36152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.14635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.52404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.19286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,21.77529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,21.76395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,21.8328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.60226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.64486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,21.73571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.67829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.15287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.36472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.24425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.26973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.32817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,20.99411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,20.75266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,20.86497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,20.95539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.06899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,20.82966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.58583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.46937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.49959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.3047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,20.8286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.6278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.31113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.16925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.25855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.15657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.2944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,19.941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,19.92306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,19.99097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,19.84805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.53598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.34342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.60809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.70243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.46263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.67557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.49493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.1483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.50143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.45474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.33677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,18.9887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.61569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.12677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.44907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,18.97956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,18.89761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.66123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.31649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.1071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.55723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.58227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.48863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.66043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.41589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.33022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.31981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.37601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.17164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,17.90731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,17.92805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.32927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.7912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,17.9776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.54994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.12963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.31496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.64009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.59575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.0611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.28975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.42723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.70128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.15347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.52918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.00517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.21186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.33252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.17525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.11431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.8094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.05521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.23654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.09471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.73095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.70474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.64733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.51619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.25162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.58631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.32007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.49622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.63809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.01941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.31088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.15584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.08169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.08679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,15.9755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.24138);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.80997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.06554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.34706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.00902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,15.91668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.72118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,15.92729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,15.99818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.6885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,15.83831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.47916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.53419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.65436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.43629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.1737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.2002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.29105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.15676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.40275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,14.88196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.52781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,14.8987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.12971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.1192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,14.99732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.71107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,14.99119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.04982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.65199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.53583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.66868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.65171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.50876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.71239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.32111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.58325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.60454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.40736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.43586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.11424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.18751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.34337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.20732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.31922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.27028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.06555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,13.87418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,13.85202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.77447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,13.80574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.72045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,13.94208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,13.90396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.84723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.65736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.80775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.61603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.74301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.62258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,13.93059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.52805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.07115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.38636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.38636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.29134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.85862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.15373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.42539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.24247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.33802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.6607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,12.85202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,12.81825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.07573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,12.93467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.11535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,12.89047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.04782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.55326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.55458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.55491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,12.9766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.69938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.71334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.83253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.37409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.39887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.31003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.57152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.29359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.01653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.30282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.34402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.12011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.58659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.33451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.23316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.73724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,11.99647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.85427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.84391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.00453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.74778);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.7756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,11.90123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.79242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.57066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.63833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.82343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.68429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.12392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.71061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.40562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.56483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.48554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.58162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.37445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.16831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.4964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.36711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.59032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.60901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.50895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.56846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.08062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.08905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.01395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.37786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.2582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,10.98081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.18475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.32888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.01121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,10.91433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,10.98916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,10.96217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.74497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.76824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.78668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.6874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.88418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.75844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,10.83514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.36121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.69182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.89796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.56996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.50594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.73224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.39451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.2687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.55956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.55244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.22277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.42539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.51484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.31612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.02854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.27875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.04154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.0453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.15529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.17932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.860047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.37303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.796677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.806945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,9.958189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,9.924524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.12868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,9.909094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.0464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.12717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.15742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.878147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.838147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.734962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.682492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.641617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,9.998402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.712609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.784756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.297992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.689952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.509294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.564753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.164114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.146532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.364746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.422322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.135762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.403011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.777249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.477841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.126013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.180714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.242294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.143837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.041998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.348189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.163659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,8.974241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.012623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,8.871414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,8.902325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.138726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.132699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.841712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.01428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.585566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.864929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,8.961544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,8.905268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.820252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.061614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.880612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.198114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.614775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.743814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.799918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.606318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.734594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.58387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.685006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.482205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.743026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.598282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.664998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.63558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.443343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.658741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.432234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.182662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.580036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.330445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.626365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.35471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.301861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.517021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.426411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.136036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.391195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.357847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.930668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.108513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.184313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.185215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.085775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.016543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.09011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.178523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.100147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.10612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.025419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,7.909711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.890925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.003867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.530173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.710937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,7.917562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.500691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.77328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.041124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.570595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.402206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.483264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.8129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.56352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.606386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.592428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.32029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.549087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.89605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.638936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.407534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.32647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.632892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.607834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.653468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.165255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.517568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.357361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.701155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.499385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.148859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.337937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.418766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.542426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.011556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.039772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.883945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.914922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.018698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.355266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,6.982101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.598914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.27973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.134071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.237239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.059058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.251253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.254609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.151175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.171823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.002104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,6.932804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.038356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.868341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.053896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.228648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,6.934005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.102189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,6.973743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.855222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,6.949785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,6.890641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.866492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.874788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.656704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.159058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.77533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.054358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.662269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.716695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.547695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.795802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.306633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.699069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.875827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.898134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.842906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.520411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.597325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.370983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.573227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.122765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.331268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.411277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.365997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.536295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.523111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.494794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.293415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.473857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.412452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.286548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.556903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.291705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.360802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.231214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.608556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.078402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.251977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.135537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.27566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.934547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.059079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.823393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,5.901182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,5.984883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.37997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.13361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.174687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.262663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.791016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,5.993359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.198786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.257938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,5.994502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,5.991059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.112289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.796791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.123633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,5.943944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,5.967302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,5.933681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.231411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.209392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.96837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.821704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.815178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.831287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.764365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.722527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.867076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.529392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.784488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.706239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.716114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.574046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.623694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.490219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.668457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.57593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.88905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.58755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.656828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.642433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.645675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.840431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.63261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.587309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.669045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.786165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.738225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.28036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.342788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.78556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.279666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.641104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.619355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.427105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.524212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.598223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.53928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.59674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.357465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.4122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.020681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.184833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.488448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.549246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.587824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.005099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.609711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.50962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.756523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.619491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.00356);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.190144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,84.56533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(7207642);

   ci = TColor::GetColor("#ff6600");
   VH_tagFirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagFirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagFirst_H_mass__5 = new TH1D("VH_tagFirst_H_mass__5","",1000,0,2000);
   VH_tagFirst_H_mass__5->SetBinContent(43,8819);
   VH_tagFirst_H_mass__5->SetBinContent(44,17968);
   VH_tagFirst_H_mass__5->SetBinContent(45,17510);
   VH_tagFirst_H_mass__5->SetBinContent(46,17246);
   VH_tagFirst_H_mass__5->SetBinContent(47,17492);
   VH_tagFirst_H_mass__5->SetBinContent(48,8504);
   VH_tagFirst_H_mass__5->SetBinContent(78,7168);
   VH_tagFirst_H_mass__5->SetBinContent(79,14447);
   VH_tagFirst_H_mass__5->SetBinContent(80,14153);
   VH_tagFirst_H_mass__5->SetBinContent(81,14168);
   VH_tagFirst_H_mass__5->SetBinContent(82,14099);
   VH_tagFirst_H_mass__5->SetBinContent(83,7014);
   VH_tagFirst_H_mass__5->SetBinContent(1000,25);
   VH_tagFirst_H_mass__5->SetBinContent(1001,23131);
   VH_tagFirst_H_mass__5->SetEntries(3576354);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__5->SetLineColor(ci);
   VH_tagFirst_H_mass__5->SetLineWidth(2);
   VH_tagFirst_H_mass__5->SetMarkerStyle(20);
   VH_tagFirst_H_mass__5->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__5->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__5->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1005[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7540.628, 15365.66, 15129.14, 14913.39, 14838.2, 7382.528, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6263.877, 12436.58, 12302.84, 12322.09,
   12041.05, 6106.446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 27.85715 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1005[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.516188, 1.034586, 4.217781, 9.731666, 17.41204, 24.95968, 33.05907, 41.22587,
   49.33764, 56.5522, 62.81111, 68.71777, 73.15865, 76.66101, 79.75472, 81.77892, 82.90443, 83.38678, 84.05617, 84.27358, 83.96394, 83.7823, 83.39944, 83.24794,
   83.01909, 82.2106, 82.15129, 81.59291, 81.1669, 80.86222, 80.31269, 80.3085, 79.77244, 79.47156, 79.53427, 78.99297, 78.32886, 78.14397, 77.88922, 77.77109,
   77.93153, 77.73918, 77.37558, 77.44718, 77.54704, 77.14417, 76.94967, 76.5947, 76.56769, 76.13366, 76.36961, 76.03522, 75.82814, 75.89706, 75.391, 74.99736,
   74.94877, 74.38868, 74.08804, 74.17143, 73.78276, 73.64312, 73.423, 72.99056, 72.78291, 72.61871, 72.23834, 71.99912, 71.83407, 71.5272, 71.10437, 71.02727,
   70.28562, 70.4446, 69.97722, 69.87794, 69.15735, 69.31093, 69.37677, 68.90809, 68.82051, 68.03538, 68.35268, 68.4522, 67.93053, 67.46924, 67.33098, 66.91675,
   67.01908, 67.18254, 66.67735, 66.67333, 66.59496, 65.78864, 65.94399, 65.54895, 65.92017, 65.48353, 65.60117, 64.97176, 64.83083, 64.82117, 65.04824, 64.7781,
   64.60025, 64.65161, 64.26783, 64.49877, 64.06508, 64.11229, 63.72989, 63.74399, 63.73811, 63.52083, 63.5567, 63.10109, 62.89594, 63.2353, 62.95554, 63.00603,
   62.93502, 62.00968, 62.34506, 62.41868, 62.01371, 62.13376, 61.94573, 61.79171, 61.51127, 61.63438, 61.35272, 61.1464, 60.75382, 60.94487, 60.73062, 60.69568,
   60.58474, 60.29689, 59.9325, 59.9924, 60.10272, 60.01407, 59.60387, 59.3792, 59.39144, 59.4508, 58.89583, 59.2323, 58.51596, 58.80726, 58.0753, 57.98247,
   57.93305, 57.82584, 57.93026, 57.64111, 57.23298, 57.38829, 57.03566, 56.96444, 56.53245, 56.79184, 56.19095, 56.10594, 56.43595, 56.0299, 55.77314, 55.4799,
   55.78463, 55.29156, 55.23462, 54.94395, 54.87227, 54.95522, 54.25751, 54.18686, 54.40359, 53.96688, 53.61579, 53.80189, 53.05164, 52.96787, 53.35331, 53.05648,
   52.74706, 52.69728, 52.42955, 52.70759, 52.47569, 51.79744, 51.58262, 51.67238, 51.25844, 51.10879, 51.7542, 50.71961, 50.78547, 50.72693, 50.79685, 50.3312,
   50.23416, 50.02737, 49.75254, 49.96639, 49.42272, 49.21666, 49.35605, 49.33167, 49.19824, 48.15466, 48.49713, 48.60262, 48.19394, 47.60518, 47.8927, 47.0795,
   47.50346, 47.51922, 47.37647, 46.6736, 46.82159, 46.76545, 46.5945, 46.68524, 46.10421, 46.48245, 46.03052, 45.83106, 45.46855, 45.79799, 45.17846, 45.23211,
   44.82364, 44.72516, 44.99118, 44.89371, 44.40509, 44.48315, 44.26013, 44.28111, 44.18674, 43.89697, 43.78079, 43.63106, 43.32826, 43.15551, 43.3204, 42.84481,
   42.74565, 42.80693, 42.41757, 42.17465, 42.55877, 42.45671, 41.57637, 41.70228, 41.52839, 41.79484, 41.24349, 41.06265, 40.98131, 41.06482, 40.66218, 40.61843,
   40.67817, 40.2653, 40.2458, 39.92704, 39.72325, 39.68792, 40.08686, 39.83978, 39.69892, 39.15828, 39.20451, 39.28605, 38.83206, 38.99333, 38.59738, 38.81611,
   38.17278, 37.93671, 38.33492, 37.99969, 37.89711, 37.6216, 37.73762, 37.48429, 37.36987, 37.43891, 37.08058, 36.82558, 36.84027, 36.93144, 36.58267, 36.77551,
   36.7334, 36.27607, 35.95885, 36.11717, 36.17263, 35.78074, 35.7847, 35.55317, 35.34721, 35.21709, 35.32304, 35.36458, 34.98485, 35.2293, 34.63462, 35.11995,
   34.79029, 34.50837, 34.14544, 34.36468, 34.02066, 34.10262, 33.59571, 34.21238, 34.19786, 33.52225, 33.60327, 33.56257, 33.35073, 33.50217, 33.02949, 32.96624,
   32.78422, 32.85228, 32.90145, 32.64746, 32.5426, 32.55276, 32.4841, 32.27303, 32.16655, 32.01756, 31.78951, 31.62609, 31.56891, 31.54034, 31.28032, 31.2673,
   31.24365, 30.83682, 30.89574, 30.95119, 30.71591, 31.22305, 30.53499, 30.66822, 30.32207, 30.33734, 29.9713, 30.02976, 30.25615, 29.95722, 29.63207, 29.85659,
   29.94551, 29.57249, 29.21077, 29.43439, 29.06117, 29.02523, 29.20775, 28.90023, 29.15758, 28.58272, 28.70782, 28.50284, 28.42465, 28.31888, 28.42436, 28.27134,
   27.85796, 27.59506, 27.68548, 27.78466, 27.65207, 27.5946, 28.25944, 27.75453, 27.20702, 27.11913, 27.34414, 26.85951, 26.95454, 27.04259, 26.75554, 27.02628,
   26.53597, 26.50881, 26.30037, 26.18839, 26.68856, 26.38, 26.3106, 26.15656, 25.95358, 26.08002, 25.99354, 26.00009, 25.82692, 25.59687, 25.51474, 25.49771,
   25.36678, 25.0546, 25.04143, 24.95774, 24.93184, 24.75688, 25.0281, 24.5138, 25.14822, 24.27625, 24.58115, 24.67698, 24.56184, 24.42587, 24.09717, 24.38681,
   23.79994, 24.08428, 23.9523, 23.65272, 24.17904, 24.07381, 23.44757, 23.53018, 23.58271, 23.68633, 23.3129, 23.27511, 23.29043, 23.16654, 23.35307, 22.76402,
   22.60002, 22.41412, 22.69026, 22.97197, 22.45189, 22.90315, 22.58509, 22.43242, 22.30667, 22.18669, 22.36152, 22.14635, 22.52404, 22.19286, 21.77529, 21.76395,
   21.8328, 21.60226, 21.64486, 21.73571, 21.67829, 21.15287, 21.36472, 21.24425, 21.26973, 21.32817, 20.99411, 20.75266, 20.86497, 20.95539, 21.06899, 20.82966,
   20.58583, 20.46937, 20.49959, 20.3047, 20.8286, 20.6278, 20.31113, 20.16925, 20.25855, 20.15657, 20.2944, 19.941, 19.92306, 19.99097, 19.84805, 19.53598,
   19.34342, 19.60809, 19.70243, 19.46263, 19.67557, 19.49493, 19.1483, 19.50143, 19.45474, 19.33677, 18.9887, 18.61569, 19.12677, 18.44907, 18.97956, 18.89761,
   18.66123, 18.31649, 19.1071, 18.55723, 18.58227, 18.48863, 18.66043, 18.41589, 18.33022, 18.31981, 18.37601, 18.17164, 17.90731, 17.92805, 18.32927, 17.7912,
   17.9776, 17.54994, 18.12963, 17.31496, 17.64009, 17.59575, 18.0611, 17.28975, 17.42723, 17.70128, 17.15347, 17.52918, 17.00517, 17.21186, 17.33252, 17.17525,
   17.11431, 16.8094, 17.05521, 17.23654, 17.09471, 16.73095, 16.70474, 16.64733, 16.51619, 16.25162, 16.58631, 16.32007, 16.49622, 16.63809, 16.01941, 16.31088,
   16.15584, 16.08169, 16.08679, 15.9755, 16.24138, 15.80997, 16.06554, 16.34706, 16.00902, 15.91668, 15.72118, 15.92729, 15.99818, 15.6885, 15.83831, 15.47916,
   15.53419, 15.65436, 15.43629, 15.1737, 15.2002, 15.29105, 15.15676, 15.40275, 14.88196, 15.52781, 14.8987, 15.12971, 15.1192, 14.99732, 14.71107, 14.99119,
   15.04982, 14.65199, 14.53583, 14.66868, 14.65171, 14.50876, 14.71239, 14.32111, 14.58325, 14.60454, 14.40736, 14.43586, 14.11424, 14.18751, 14.34337, 14.20732,
   14.31922, 14.27028, 14.06555, 13.87418, 13.85202, 13.77447, 13.80574, 13.72045, 13.94208, 13.90396, 13.84723, 13.65736, 13.80775, 13.61603, 13.74301, 13.62258,
   13.93059, 13.52805, 13.07115, 13.38636, 13.38636, 13.29134, 12.85862, 13.15373, 13.42539, 13.24247, 13.33802, 12.6607, 12.85202, 12.81825, 13.07573, 12.93467,
   13.11535, 12.729, 12.89047, 13.04782, 12.55326, 12.55458, 12.55491, 12.9766, 12.69938, 12.71334, 12.83253, 12.37409, 12.39887, 12.31003, 12.57152, 12.29359,
   12.01653, 12.30282, 12.34402, 13.12011, 12.58659, 12.33451, 12.23316, 11.73724, 11.99647, 11.85427, 12.382, 11.84391, 12.00453, 11.74778, 11.7756, 11.90123,
   11.79242, 11.57066, 11.63833, 11.82343, 11.68429, 11.12392, 11.71061, 11.40562, 11.56483, 11.48554, 11.58162, 11.37445, 11.16831, 11.4964, 11.36711, 11.59032,
   11.60901, 11.50895, 11.56846, 11.08062, 11.08905, 11.01395, 11.37786, 11.2582, 10.98081, 11.18475, 11.32888, 11.01121, 10.91433, 10.98916, 11.17, 10.96217,
   10.74497, 10.76824, 10.78668, 10.6874, 10.88418, 10.75844, 10.83514, 10.36121, 10.69182, 10.89796, 10.56996, 10.50594, 10.73224, 10.39451, 10.317, 10.2687,
   10.55956, 10.55244, 10.22277, 10.42539, 10.51484, 10.31612, 10.02854, 10.27875, 10.04154, 10.0453, 10.15529, 10.17932, 9.860047, 10.37303, 9.796677, 9.806945,
   9.958189, 9.924524, 10.12868, 9.909094, 10.0464, 10.12717, 10.15742, 9.878147, 9.838147, 9.734962, 9.682492, 9.641617, 9.998402, 9.712609, 9.784756, 9.297992,
   9.689952, 9.509294, 9.564753, 9.164114, 9.146532, 9.364746, 9.422322, 9.135762, 9.403011, 8.777249, 9.477841, 9.126013, 9.180714, 9.242294, 9.143837, 9.041998,
   9.348189, 9.163659, 8.974241, 9.012623, 8.871414, 8.902325, 9.138726, 9.132699, 8.841712, 9.01428, 8.585566, 8.864929, 8.961544, 8.905268, 8.820252, 9.061614,
   8.880612, 9.198114, 8.614775, 8.743814, 8.799918, 8.606318, 8.734594, 8.58387, 8.685006, 8.482205, 8.743026, 8.598282, 8.664998, 8.63558, 8.443343, 8.658741,
   8.432234, 8.182662, 8.580036, 8.330445, 8.626365, 8.35471, 8.301861, 8.517021, 8.426411, 8.136036, 8.391195, 8.357847, 7.930668, 8.108513, 8.184313, 8.185215,
   8.085775, 8.016543, 8.09011, 8.178523, 8.100147, 8.10612, 8.025419, 7.909711, 7.890925, 8.003867, 7.530173, 7.710937, 7.917562, 7.500691, 7.77328, 8.041124,
   7.570595, 7.402206, 7.483264, 7.8129, 7.56352, 7.606386, 7.592428, 7.32029, 7.549087, 7.89605, 7.638936, 7.407534, 7.32647, 7.632892, 7.607834, 7.653468,
   7.165255, 7.517568, 7.357361, 7.701155, 7.499385, 7.148859, 7.337937, 7.418766, 7.542426, 7.011556, 7.039772, 6.883945, 6.914922, 7.018698, 7.355266, 6.982101,
   7.598914, 7.27973, 7.134071, 7.237239, 7.059058, 7.251253, 7.254609, 7.151175, 7.171823, 7.002104, 6.932804, 7.038356, 6.868341, 7.053896, 7.228648, 6.934005,
   7.102189, 6.973743, 6.855222, 6.949785, 6.890641, 6.866492, 6.874788, 6.656704, 7.159058, 6.77533, 7.054358, 6.662269, 6.716695, 6.547695, 6.795802, 6.306633,
   6.699069, 6.875827, 6.898134, 6.842906, 6.520411, 6.597325, 6.370983, 6.573227, 6.122765, 6.331268, 6.411277, 6.365997, 6.536295, 6.523111, 6.494794, 6.293415,
   6.473857, 6.412452, 6.286548, 6.556903, 6.291705, 6.360802, 6.231214, 6.608556, 6.078402, 6.251977, 6.135537, 6.27566, 5.934547, 6.059079, 5.823393, 5.901182,
   5.984883, 6.37997, 6.13361, 6.174687, 6.262663, 5.791016, 5.993359, 6.198786, 6.257938, 5.994502, 5.991059, 6.112289, 5.796791, 6.123633, 5.943944, 5.967302,
   5.933681, 6.231411, 6.209392, 5.96837, 5.821704, 5.815178, 5.831287, 5.764365, 5.722527, 5.867076, 5.529392, 5.784488, 5.706239, 5.716114, 5.574046, 5.623694,
   5.490219, 5.668457, 5.57593, 5.88905, 5.58755, 5.656828, 5.642433, 5.645675, 5.840431, 5.63261, 5.587309, 5.669045, 5.786165, 5.738225, 5.28036, 5.342788,
   5.78556, 5.279666, 5.641104, 5.619355, 5.427105, 5.524212, 5.598223, 5.53928, 5.59674, 5.357465, 5.4122, 5.020681, 5.184833, 5.488448, 5.549246, 5.587824,
   5.005099, 5.609711, 5.50962, 4.756523, 5.619491, 5.00356, 5.190144 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1005,Graph_from_VH_tagFirst_2b1c_H_mass_fy1005,Graph_from_VH_tagFirst_2b1c_H_mass_fex1005,Graph_from_VH_tagFirst_2b1c_H_mass_fey1005);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetMinimum(-1637.221);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetMaximum(16998.14);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagFirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagFirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tagFirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",1000,0,2000);
   data_mc_ratio__6->SetBinContent(43,1.169531);
   data_mc_ratio__6->SetBinContent(44,1.169361);
   data_mc_ratio__6->SetBinContent(45,1.157369);
   data_mc_ratio__6->SetBinContent(46,1.156411);
   data_mc_ratio__6->SetBinContent(47,1.178849);
   data_mc_ratio__6->SetBinContent(48,1.151909);
   data_mc_ratio__6->SetBinContent(78,1.144339);
   data_mc_ratio__6->SetBinContent(79,1.161654);
   data_mc_ratio__6->SetBinContent(80,1.150385);
   data_mc_ratio__6->SetBinContent(81,1.149805);
   data_mc_ratio__6->SetBinContent(82,1.170911);
   data_mc_ratio__6->SetBinContent(83,1.148622);
   data_mc_ratio__6->SetBinContent(1000,0.8974356);
   data_mc_ratio__6->SetBinContent(1001,1.282146);
   data_mc_ratio__6->SetBinError(43,0.01245381);
   data_mc_ratio__6->SetBinError(44,0.008723656);
   data_mc_ratio__6->SetBinError(45,0.008746387);
   data_mc_ratio__6->SetBinError(46,0.008805782);
   data_mc_ratio__6->SetBinError(47,0.008913301);
   data_mc_ratio__6->SetBinError(48,0.01249127);
   data_mc_ratio__6->SetBinError(78,0.01351624);
   data_mc_ratio__6->SetBinError(79,0.009664692);
   data_mc_ratio__6->SetBinError(80,0.009669829);
   data_mc_ratio__6->SetBinError(81,0.009659839);
   data_mc_ratio__6->SetBinError(82,0.009861199);
   data_mc_ratio__6->SetBinError(83,0.01371495);
   data_mc_ratio__6->SetBinError(1000,0.1794871);
   data_mc_ratio__6->SetBinError(1001,0.0103532);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(3506.793);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__6->GetXaxis()->SetRange(1,150);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1006[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1006[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01053912, 0.005176104, 0.005221245, 0.005252252, 0.005266406, 0.01055048, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01146799, 0.005751359, 0.005779508, 0.005764222,
   0.005837166, 0.0115361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1863128 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.7764247);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.223575);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->Modified();
   H_mass_tagFirst_VR_16->cd();
   H_mass_tagFirst_VR_16->SetSelected(H_mass_tagFirst_VR_16);
}
