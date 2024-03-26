#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Wed Feb 14 12:27:15 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_VR_18 = new TCanvas("H_mass_tagFirst_VR_18", "H_mass_tagFirst_VR_18",0,0,600,600);
   H_mass_tagFirst_VR_18->SetHighLightColor(2);
   H_mass_tagFirst_VR_18->Range(0,0,1,1);
   H_mass_tagFirst_VR_18->SetFillColor(0);
   H_mass_tagFirst_VR_18->SetFillStyle(4000);
   H_mass_tagFirst_VR_18->SetBorderMode(0);
   H_mass_tagFirst_VR_18->SetBorderSize(2);
   H_mass_tagFirst_VR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-38.69472,315.7258,38666.03);
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
   st->SetMaximum(34795.56);
   
   TH1F *st_stack_19 = new TH1F("st_stack_19","",1000,0,2000);
   st_stack_19->SetMinimum(0.01);
   st_stack_19->SetMaximum(34795.56);
   st_stack_19->SetDirectory(nullptr);
   st_stack_19->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_19->SetLineColor(ci);
   st_stack_19->SetLineWidth(0);
   st_stack_19->GetXaxis()->SetRange(1,150);
   st_stack_19->GetXaxis()->SetLabelFont(42);
   st_stack_19->GetXaxis()->SetTitleOffset(1);
   st_stack_19->GetXaxis()->SetTitleFont(42);
   st_stack_19->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_19->GetYaxis()->SetLabelFont(42);
   st_stack_19->GetYaxis()->SetLabelSize(0.05);
   st_stack_19->GetYaxis()->SetTitleSize(0.057);
   st_stack_19->GetYaxis()->SetTitleOffset(1.2);
   st_stack_19->GetYaxis()->SetTitleFont(42);
   st_stack_19->GetZaxis()->SetLabelFont(42);
   st_stack_19->GetZaxis()->SetTitleOffset(1);
   st_stack_19->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_19);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,6182.093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,12491.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,12285.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,12126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,12041.09);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,5950.484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,4921.634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,9533.25);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,9620.739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,9479.773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,9457.35);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,4712.433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,42.39736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19206.87);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(5,0.06249279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(7,0.07089745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(8,0.07470759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(9,0.09699004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.1016305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6413506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,2.977763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,8.100481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.20476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.64151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,28.42314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,36.02219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,42.63567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,49.61709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,55.9833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,61.84187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,66.32262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,70.7396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,73.85989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,76.94342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,78.65451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,80.31316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,81.74653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,82.80816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,83.42979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.2696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,83.92037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,84.12705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,84.43016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,83.77259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,83.86798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,84.3734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,83.56135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,83.13012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,83.64414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,83.37693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,81.88245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,81.42742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,81.41534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,80.87671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,80.73172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,79.96548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,79.45131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,79.50576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,79.13107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,79.06546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,78.28301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,77.76906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.1014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.66883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.34746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.71097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.19182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,76.24595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,76.80707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,75.8362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,75.83051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,75.40648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,75.07491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.42625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.01931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.04373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.54698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.31047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,73.9124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,73.63632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.48255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.68163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.08616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.03961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.73098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.02797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.72373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,71.00435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.41894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,70.96526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,71.07688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,70.71566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.16588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,69.90526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.19275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.39404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,69.50134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.73502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.63688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.92246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.21574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,68.30917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,67.51497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,67.23407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,67.17811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.03328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.58629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,66.72591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,66.54404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,66.35292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,65.74034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,65.53653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,65.74834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,65.54731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,65.37581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,64.93222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,64.78015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,64.47595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,64.15897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,64.51604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,64.5642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,63.63798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.94142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,64.35657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.02377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,63.04097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,63.01637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,68.33305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,62.92913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,63.25885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,62.62024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,63.35985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.45333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.58971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,62.01201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,61.52156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,61.11363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,64.48185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,61.01255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.6937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,61.35773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,60.5433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,60.69292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,61.85379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,60.42522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,60.13916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,60.23999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,60.46712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,60.11653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,59.9847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,59.59605);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,59.76804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,59.7182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,59.1772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,59.44305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,59.17561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,59.70803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.01346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,58.97709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.89989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.9166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,57.71277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.0705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.07134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.13566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.13822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,57.94904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.4184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,57.49911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.05722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,56.98234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,57.43758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.24465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.00447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,56.99328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,56.74391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,56.75015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,56.25043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.34071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.56965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,55.95886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.72886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,55.34935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,55.78931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.17323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.59776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.26814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.15657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,54.85648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,54.60943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,54.86114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.03563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.48183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.6088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.51715);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.18431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.31379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,53.6209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,54.09714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.64039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.78511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,54.00958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.08069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.18164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,53.13758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,52.93194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.86943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.67512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,52.67839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.52725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.32411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,52.29175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,51.91494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.6517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.43015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.77235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.95463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.90331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,51.9024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.97043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,51.05376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.97743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,50.87737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,50.95413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,50.8509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,51.03267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.81309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,50.62857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,50.20804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,50.05506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.46885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,51.22825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,59.1);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,49.62379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,49.88763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,49.08421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.45544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,49.08177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,48.82127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,50.61817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,48.77162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,48.96589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,48.47671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,48.47551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,47.70304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,47.95598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,48.31388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,47.47841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,47.87622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,47.72525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,47.25869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,47.94188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,47.29089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,47.31824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,46.72656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,46.52251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,47.05132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,46.59226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.36032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,47.10019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,46.70478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,46.00135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,46.04077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,47.38843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,46.11699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,45.76183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,46.11469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.73432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,45.54109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.21343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,44.60135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,44.88444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,44.83245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,44.8475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,44.8722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.37419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.56741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,45.09058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,44.22201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,43.6611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,43.95726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,44.12604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,51.10099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,43.94127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.6681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.18186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,43.49743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.07017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,44.18164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.26513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,42.96328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.73268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,42.46328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,42.34386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.41424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.40267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,41.94774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,41.89745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.06668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,41.51877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,41.8654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.32247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.19677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,41.66146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,40.41684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,40.70464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,43.39568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,40.44381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,40.69489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,40.51782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.41389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,39.94875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.0874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,39.90307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.04073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,39.88833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,39.55677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,39.45226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,39.83373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.18525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.59769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.30053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.33668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.26257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,39.0029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,38.5793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,38.63);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.37323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.80457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.20143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.2299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,37.94416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.53465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,37.63725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.64368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.4867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.75145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,37.39449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.27404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.88399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.23032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.16551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,36.52671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,36.76434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.35652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.74271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,35.45419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,36.55089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,35.94488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,35.84893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,35.86419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,35.86826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.51602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,35.49611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,35.71149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,35.71358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.37816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,35.3644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.29454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,36.58467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.0527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,34.61483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.41007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,34.60636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,34.65102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,35.51684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,34.47549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.03692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,34.05549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,34.01732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.8405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,33.90507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,33.97076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.44108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.35482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.28837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,33.13615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.35848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,32.86874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,33.05978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,33.05938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,32.56808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,32.85447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.37172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,32.76678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.6081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.39104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.35092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,32.04022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,31.81376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,32.13619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,31.74646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,53.75081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.37352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,31.41741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.38852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,31.04902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.37588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,31.13515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,30.81067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,30.9773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,31.44015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,30.68157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,30.68984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,30.5532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,38.20091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,33.73417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,30.07291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,30.11999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,29.74339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.26207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,29.94992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,29.70189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,29.94015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,29.94122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,29.93065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.22883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,29.09127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,29.14056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.37993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.33523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.4897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,28.81137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,28.94593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,28.79925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,28.58172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,28.72673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,28.41295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.49936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,28.82376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.38502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,28.1209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,27.61168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,28.0523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,29.61863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,27.71259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,27.89617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,27.63334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.06331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,27.08387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,27.58675);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,26.97829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.52369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.26676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,26.78859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.41904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.31859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.46801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,26.53808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,26.54118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,26.53337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,26.5888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.38774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.34021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,25.86777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.14528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,26.10577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,26.10259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,26.06421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,26.04579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,25.8465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.49154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.58967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.67753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,24.99759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.28369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,25.62979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,24.60193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,26.09407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,25.06188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.15173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,24.80903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,24.89771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,24.95119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,24.86941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.37925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,25.04433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,24.0493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.25034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.34862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.17521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.3503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,24.09007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.69214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,23.83188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,23.98945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,23.62364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,23.95181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,23.81345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,23.49981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.32627);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,23.55214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,23.78025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.15048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.19674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.43049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.27499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.11395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,23.10269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,22.80843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,22.92575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,23.08002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,22.83265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,23.00865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,22.94331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,22.91196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.49026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.20981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,22.45036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.20235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.33418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.07147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.45269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,21.73325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.61862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,21.69452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,21.62584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,21.64405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,21.84685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,21.58439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.3544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,21.68347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.23813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,22.01013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.14209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,20.94699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,20.87521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.23367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,20.68709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.25167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,20.96588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,21.00203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.33385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,20.80206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,20.77055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,20.58884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.37628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,20.48145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.56775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.51282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.17294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.2141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,20.43824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.15934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.42508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.58274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,20.0461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.89701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,19.98896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,19.92599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.58935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,19.65984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,19.84883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,19.81086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.51063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.37525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,19.61392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.27761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.3383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.41144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.27899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,18.87188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,19.66287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.03789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.48209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,18.7381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,18.88454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,18.93524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.1695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.45792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,18.94991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,18.84158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,18.64786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.18393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,18.70545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.03805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.1652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.40415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.27273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.4184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,18.54207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,19.56864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,17.98321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,17.8293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,17.6375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,17.59455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.43427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.4669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.31267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,17.64264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.38379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.54907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,17.86338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.33919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.60886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.3089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.4526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.2632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.18292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.06824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.40402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.32474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.27989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.3633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,16.89853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,16.93707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,16.97996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.09458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,17.46721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.53057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.70086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,16.74457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,16.68831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.85927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.30217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.56799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.21538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.55494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.06881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.26044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.15448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.22291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.16482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.20531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,15.76538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,15.71876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.15152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,15.70289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,15.62838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,15.80278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,16.0048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,15.79519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,15.81916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.49779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,15.79889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,15.60297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.42302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.64326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.40108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.25731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.2934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.23685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,14.955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,15.87005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.17732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.08188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,14.99922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.04865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.00073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,14.80452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.36109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.59382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,14.8424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.08641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,14.76328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,14.92383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.50933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,14.71787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.3893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,14.69858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.38397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.34315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.13049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.36943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.43758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.40075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.26913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.76043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.27659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.26278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.01275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.0859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,13.97393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.7211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,13.88712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,13.89924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,13.87666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,13.70375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.12747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.70178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,13.83153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,13.97804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.10679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,13.69297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,13.9383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.4424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.59142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.43525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.44174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.58783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.38323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.30057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.39298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,13.6195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.09137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.11293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.30149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.19206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.13171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.00185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,12.88932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,12.86575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.11072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,12.66094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.04884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,12.90705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,12.81688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.07418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,12.69543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,12.96361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.66554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,12.92774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.59124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.51595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,12.85004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.36111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.51151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.49537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,12.86549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.67781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.44702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.39167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,12.74041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.4626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.30607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,12.82793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.56754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.31923);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,11.71256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.1776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.19203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,11.80677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.27052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,11.75592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.20392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,11.76976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,11.79522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.50632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,11.73021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.13967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,11.73589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,11.73554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.65031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.2986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.06196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,11.97512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,11.74957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.6652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.41921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.22532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.4384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.34336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.29667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.59506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,10.97188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.44664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.24941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.45026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.45249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,10.99996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.29108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.3911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.17864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.12548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.42701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.29368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,10.83126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,10.86798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.06129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.2613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,10.82569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.6248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,10.89546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.69471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.38928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.40538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.58182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.61544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.5116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,10.85654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.58883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,10.81896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,10.91641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.27318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.09498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.66021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.82042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.38618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.33611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,11.20395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.05237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.45864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.38523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.27033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.4003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.41012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.48398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.19642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.31427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.11483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.700332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.00013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.33781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,9.994325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.06879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,9.736764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.668729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.06775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,9.870876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.19434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.08244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.418841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.53874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,9.961307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,9.93949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,9.977637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,9.806844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.680771);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,9.686777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.545703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.720104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.404601);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.49805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.345595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,9.675087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.395133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.527246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.34212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.19742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.457222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.634321);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.589276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.513918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.338261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.425024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.369787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.770782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.234195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.313453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.016584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.070289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,8.951193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.316404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.234259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.711262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.019305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.145805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.182203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.234394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.283003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.096842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.284567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.686843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.00915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.433607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,10.01098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,8.867574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,8.906227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.582408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.659095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.067374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.159499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,8.970629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.540988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.707497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.593058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,8.880539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.612397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.11285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.37543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.314249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.184942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.530292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.253477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,8.78607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.498118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.268227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,8.813874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.313874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.290329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.327312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.215443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.141748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.617184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,7.990524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.192893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.326533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.262353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.167689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.208595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.147443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.252376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.102271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.62858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.197513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,7.782665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.042664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.536938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.83137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,7.807261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.704882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.694663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.009815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.822272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.018588);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.477131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.822521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,7.801968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.471196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,7.969901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,7.800811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,7.954859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,7.759254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,7.940288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.625718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.756126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.311928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.662073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.291964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.41298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.60991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.336336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.339738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.727772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.381576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.402796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.546616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.379035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.522394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.53234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.407638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.345835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.417137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.58009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.484446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.634641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.296428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.259314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.137211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.039947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.894818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.182336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.018378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.105671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.265507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.960997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.094805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.254463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.083579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.041438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.112307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.228708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.187222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.944821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.969693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.179965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.159764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,6.973682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.625669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,6.866695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.805376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.09259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,6.745556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,6.775743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.73577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.638325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.565465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,6.980562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.474909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.704052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,6.920345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.517831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,6.899558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,6.948382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,6.952625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.294408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,7.041169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,6.855361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.352391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.064904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.702553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.419795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.510653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.243053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.626198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.062188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.038511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.947504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.87521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.489704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.301802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.684936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.467708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,6.84454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.521493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.151121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.66842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.519215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.242287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.569559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.342101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.300881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.611433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,5.936071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.307628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.182882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.078607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,96.29692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(4367348);

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
   
   TH1D *VH_tagFirst_H_mass__37 = new TH1D("VH_tagFirst_H_mass__37","",1000,0,2000);
   VH_tagFirst_H_mass__37->SetBinContent(43,7802);
   VH_tagFirst_H_mass__37->SetBinContent(44,15658);
   VH_tagFirst_H_mass__37->SetBinContent(45,15442);
   VH_tagFirst_H_mass__37->SetBinContent(46,15282);
   VH_tagFirst_H_mass__37->SetBinContent(47,15169);
   VH_tagFirst_H_mass__37->SetBinContent(48,7466);
   VH_tagFirst_H_mass__37->SetBinContent(78,6116);
   VH_tagFirst_H_mass__37->SetBinContent(79,12047);
   VH_tagFirst_H_mass__37->SetBinContent(80,12004);
   VH_tagFirst_H_mass__37->SetBinContent(81,11793);
   VH_tagFirst_H_mass__37->SetBinContent(82,11756);
   VH_tagFirst_H_mass__37->SetBinContent(83,5921);
   VH_tagFirst_H_mass__37->SetBinContent(1000,56);
   VH_tagFirst_H_mass__37->SetBinContent(1001,24268);
   VH_tagFirst_H_mass__37->SetEntries(3155538);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__37->SetLineColor(ci);
   VH_tagFirst_H_mass__37->SetLineWidth(2);
   VH_tagFirst_H_mass__37->SetMarkerStyle(20);
   VH_tagFirst_H_mass__37->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__37->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__37->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__37->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__37->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__37->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__37->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1037[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1037[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 6182.093, 12491.17, 12285.53, 12126, 12041.09, 5950.484, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4921.634, 9533.25, 9620.739, 9479.773,
   9457.35, 4712.433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 42.39736 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1037[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1037[1000] = { 0, 0, 0, 0, 0.06249279, 0, 0.07089745, 0.07470759, 0.09699004, 0.1016305, 0.6413506, 2.977763, 8.100481, 14.20476, 21.64151, 28.42314, 36.02219,
   42.63567, 49.61709, 55.9833, 61.84187, 66.32262, 70.7396, 73.85989, 76.94342, 78.65451, 80.31316, 81.74653, 82.80816, 83.42979, 84.2696, 83.92037, 84.12705,
   84.43016, 83.77259, 83.86798, 84.3734, 83.56135, 83.13012, 83.64414, 83.37693, 81.88245, 81.42742, 81.41534, 80.87671, 80.73172, 79.96548, 79.45131, 79.50576,
   79.13107, 79.06546, 78.28301, 77.76906, 78.1014, 77.66883, 77.34746, 77.71097, 77.19182, 76.24595, 76.80707, 75.8362, 75.83051, 75.40648, 75.07491, 75.42625,
   75.01931, 75.04373, 74.54698, 74.31047, 73.9124, 73.63632, 74.48255, 73.68163, 73.08616, 73.03961, 72.73098, 72.02797, 72.72373, 71.00435, 71.41894, 70.96526,
   71.07688, 70.71566, 70.16588, 69.90526, 69.19275, 69.39404, 69.50134, 69.73502, 69.63688, 68.92246, 68.21574, 68.30917, 67.51497, 67.23407, 67.17811, 67.03328,
   67.58629, 66.72591, 66.54404, 66.35292, 65.74034, 65.53653, 65.74834, 65.54731, 65.37581, 64.93222, 64.78015, 64.47595, 64.15897, 64.51604, 64.5642, 63.63798,
   64.94142, 64.35657, 64.02377, 63.04097, 63.01637, 68.33305, 62.92913, 63.25885, 62.62024, 63.35985, 62.45333, 63.58971, 62.01201, 61.52156, 61.11363, 64.48185,
   61.01255, 61.6937, 61.35773, 60.5433, 60.69292, 61.85379, 60.42522, 60.13916, 60.23999, 60.46712, 60.11653, 59.9847, 59.59605, 59.76804, 59.7182, 59.1772,
   59.44305, 59.17561, 59.70803, 59.01346, 58.97709, 59.89989, 58.9166, 57.71277, 59.0705, 59.07134, 58.13566, 58.13822, 57.94904, 57.4184, 57.49911, 58.05722,
   56.98234, 57.43758, 57.24465, 57.00447, 56.99328, 56.74391, 56.75015, 56.25043, 56.34071, 56.56965, 55.95886, 56.72886, 55.34935, 55.78931, 56.17323, 55.59776,
   55.26814, 55.15657, 54.85648, 54.60943, 54.86114, 55.03563, 54.48183, 54.6088, 54.51715, 54.18431, 54.31379, 53.6209, 54.09714, 53.64039, 53.78511, 54.00958,
   53.08069, 53.18164, 53.13758, 52.93194, 52.86943, 52.67512, 52.67839, 52.52725, 52.32411, 52.29175, 51.91494, 51.6517, 51.43015, 51.77235, 51.95463, 51.90331,
   51.9024, 50.97043, 51.05376, 50.97743, 50.87737, 50.95413, 50.8509, 51.03267, 49.81309, 50.62857, 50.20804, 50.05506, 50.46885, 51.22825, 59.1, 49.62379,
   49.88763, 49.08421, 49.45544, 49.08177, 48.82127, 50.61817, 48.77162, 48.96589, 48.47671, 48.47551, 47.70304, 47.95598, 48.31388, 47.47841, 47.87622, 47.72525,
   47.25869, 47.94188, 47.29089, 47.31824, 46.72656, 46.52251, 47.05132, 46.59226, 46.36032, 47.10019, 46.70478, 46.00135, 46.04077, 47.38843, 46.11699, 45.76183,
   46.11469, 45.73432, 45.54109, 45.21343, 44.60135, 44.88444, 44.83245, 44.8475, 44.8722, 45.37419, 44.56741, 45.09058, 44.22201, 43.6611, 43.95726, 44.12604,
   51.10099, 43.94127, 43.6681, 43.18186, 43.49743, 43.07017, 44.18164, 43.26513, 42.96328, 43.73268, 42.46328, 42.34386, 42.41424, 42.40267, 41.94774, 41.89745,
   42.06668, 41.51877, 41.8654, 41.32247, 41.19677, 41.66146, 40.41684, 40.70464, 43.39568, 40.44381, 40.69489, 40.51782, 41.41389, 39.94875, 40.0874, 39.90307,
   40.04073, 39.88833, 39.55677, 39.45226, 39.83373, 39.18525, 39.59769, 39.30053, 39.33668, 39.26257, 39.0029, 38.5793, 38.63, 38.37323, 38.80457, 38.20143,
   38.2299, 37.94416, 38.53465, 37.63725, 37.64368, 37.4867, 37.75145, 37.39449, 37.27404, 37.88399, 37.23032, 37.16551, 36.52671, 36.76434, 36.35652, 36.74271,
   35.45419, 36.55089, 35.94488, 35.84893, 35.86419, 35.86826, 35.51602, 35.49611, 35.71149, 35.71358, 35.37816, 35.3644, 35.29454, 36.58467, 35.0527, 34.61483,
   34.41007, 34.60636, 34.65102, 35.51684, 34.47549, 34.03692, 34.05549, 34.01732, 34.8405, 33.90507, 33.97076, 33.44108, 33.35482, 33.28837, 33.13615, 33.35848,
   32.86874, 33.05978, 33.05938, 32.56808, 32.85447, 32.37172, 32.76678, 32.6081, 32.39104, 32.35092, 32.04022, 31.81376, 32.13619, 31.74646, 53.75081, 31.37352,
   31.41741, 31.38852, 31.04902, 31.37588, 31.13515, 30.81067, 30.9773, 31.44015, 30.68157, 30.68984, 30.5532, 38.20091, 33.73417, 30.07291, 30.11999, 29.74339,
   30.26207, 29.94992, 29.70189, 29.94015, 29.94122, 29.93065, 29.22883, 29.09127, 29.14056, 29.37993, 29.33523, 29.4897, 28.81137, 28.94593, 28.79925, 28.58172,
   28.72673, 28.41295, 28.49936, 28.82376, 28.38502, 28.1209, 27.61168, 28.0523, 29.61863, 27.71259, 27.89617, 27.63334, 27.06331, 27.08387, 27.58675, 26.97829,
   27.52369, 27.26676, 26.78859, 27.41904, 27.31859, 26.46801, 26.53808, 26.54118, 26.53337, 26.5888, 26.38774, 26.34021, 25.86777, 26.14528, 26.10577, 26.10259,
   26.06421, 26.04579, 25.8465, 25.49154, 25.58967, 25.67753, 24.99759, 25.28369, 25.62979, 24.60193, 26.09407, 25.06188, 25.15173, 24.80903, 24.89771, 24.95119,
   24.86941, 24.37925, 25.04433, 24.0493, 24.25034, 24.34862, 24.17521, 24.3503, 24.09007, 23.69214, 23.83188, 23.98945, 23.62364, 23.95181, 23.81345, 23.49981,
   23.32627, 23.55214, 23.78025, 23.15048, 23.19674, 23.43049, 23.27499, 23.11395, 23.10269, 22.80843, 22.92575, 23.08002, 22.83265, 23.00865, 22.94331, 22.91196,
   22.49026, 22.20981, 22.45036, 22.20235, 22.33418, 22.07147, 22.45269, 21.73325, 22.61862, 21.69452, 21.62584, 21.64405, 21.84685, 21.58439, 21.3544, 21.68347,
   21.23813, 22.01013, 21.14209, 20.94699, 20.87521, 21.23367, 20.68709, 21.25167, 20.96588, 21.00203, 20.33385, 20.80206, 20.77055, 20.58884, 20.37628, 20.48145,
   20.56775, 20.51282, 20.17294, 20.2141, 20.43824, 20.15934, 20.42508, 20.58274, 20.0461, 20.89701, 19.98896, 19.92599, 19.58935, 19.65984, 19.84883, 19.81086,
   19.51063, 19.37525, 19.61392, 19.27761, 19.3383, 19.41144, 19.27899, 18.87188, 19.66287, 19.03789, 18.48209, 18.7381, 18.88454, 18.93524, 19.1695, 18.45792,
   18.94991, 18.84158, 18.323, 18.64786, 18.18393, 18.70545, 18.03805, 18.1652, 18.40415, 18.27273, 18.4184, 18.54207, 19.56864, 17.98321, 17.8293, 17.6375,
   17.59455, 17.43427, 17.4669, 17.31267, 17.64264, 17.38379, 17.54907, 17.86338, 17.33919, 17.60886, 17.3089, 17.4526, 17.2632, 17.18292, 17.06824, 17.40402,
   17.32474, 17.27989, 17.3633, 16.89853, 16.93707, 16.97996, 17.09458, 17.46721, 16.53057, 16.70086, 16.74457, 16.68831, 16.85927, 16.30217, 16.56799, 16.21538,
   16.55494, 16.06881, 16.26044, 16.15448, 16.22291, 16.16482, 16.20531, 15.76538, 15.71876, 16.15152, 15.70289, 15.62838, 15.80278, 16.0048, 15.79519, 15.81916,
   15.49779, 15.79889, 15.60297, 15.42302, 15.64326, 15.40108, 15.25731, 15.2934, 15.23685, 14.955, 15.87005, 15.17732, 15.08188, 14.99922, 15.04865, 15.00073,
   14.80452, 15.36109, 14.59382, 14.8424, 15.08641, 14.76328, 14.92383, 14.50933, 14.71787, 14.3893, 14.69858, 14.38397, 14.34315, 14.13049, 14.36943, 14.43758,
   14.40075, 14.26913, 14.76043, 14.27659, 14.26278, 14.01275, 14.0859, 13.97393, 13.7211, 13.88712, 13.89924, 13.87666, 13.70375, 14.12747, 13.70178, 13.83153,
   13.97804, 14.10679, 13.69297, 13.9383, 13.4424, 13.59142, 13.43525, 13.44174, 13.58783, 13.38323, 13.30057, 13.39298, 13.6195, 13.09137, 13.11293, 13.30149,
   13.19206, 13.13171, 13.00185, 12.88932, 12.86575, 13.11072, 12.66094, 13.04884, 12.90705, 12.81688, 13.07418, 12.69543, 12.96361, 12.66554, 12.92774, 12.59124,
   12.51595, 12.85004, 12.36111, 12.51151, 12.49537, 12.86549, 12.67781, 12.44702, 12.39167, 12.74041, 12.4626, 12.30607, 12.82793, 12.56754, 12.31923, 12.194,
   11.71256, 12.1776, 12.19203, 11.80677, 12.27052, 11.75592, 12.20392, 11.76976, 11.79522, 12.50632, 11.73021, 11.13967, 11.73589, 11.73554, 11.65031, 11.2986,
   12.06196, 11.97512, 11.74957, 11.6652, 11.41921, 11.22532, 11.4384, 11.34336, 11.29667, 11.59506, 10.97188, 11.44664, 11.24941, 11.45026, 11.45249, 10.99996,
   11.29108, 11.3911, 11.17864, 11.12548, 11.42701, 11.29368, 10.83126, 10.86798, 11.06129, 11.2613, 10.82569, 10.6248, 10.89546, 10.69471, 10.38928, 10.40538,
   10.58182, 10.61544, 10.5116, 10.85654, 10.58883, 10.81896, 10.91641, 10.27318, 10.09498, 10.66021, 10.82042, 10.38618, 10.33611, 11.20395, 10.05237, 10.45864,
   10.38523, 10.27033, 10.4003, 10.41012, 10.48398, 10.19642, 10.31427, 10.11483, 9.700332, 10.00013, 10.33781, 9.994325, 10.06879, 9.736764, 9.668729, 10.06775,
   9.870876, 10.19434, 10.08244, 9.418841, 10.53874, 9.961307, 9.93949, 9.977637, 9.806844, 9.680771, 9.686777, 9.545703, 9.720104, 9.404601, 9.49805, 9.345595,
   9.675087, 9.395133, 9.527246, 9.34212, 9.19742, 9.457222, 9.634321, 9.589276, 9.513918, 9.338261, 9.425024, 9.369787, 9.770782, 9.234195, 9.313453, 9.016584,
   9.070289, 8.951193, 9.316404, 9.234259, 9.711262, 9.019305, 9.145805, 9.182203, 9.234394, 9.283003, 9.096842, 9.284567, 8.686843, 9.00915, 8.433607, 10.01098,
   8.867574, 8.906227, 8.582408, 8.659095, 9.067374, 9.159499, 8.970629, 8.540988, 8.707497, 8.593058, 8.880539, 8.612397, 8.11285, 8.37543, 8.314249, 8.184942,
   8.530292, 8.253477, 8.78607, 8.498118, 8.268227, 8.813874, 8.313874, 8.290329, 8.327312, 8.215443, 8.141748, 8.617184, 7.990524, 8.192893, 8.326533, 8.262353,
   8.167689, 8.208595, 8.147443, 8.252376, 8.102271, 8.62858, 8.197513, 7.782665, 8.042664, 7.536938, 7.83137, 7.807261, 7.704882, 7.694663, 8.009815, 7.822272,
   8.018588, 7.477131, 7.822521, 7.801968, 7.471196, 7.969901, 7.800811, 7.954859, 7.759254, 7.940288, 7.625718, 7.756126, 7.311928, 7.662073, 7.291964, 7.41298,
   7.60991, 7.336336, 7.339738, 7.727772, 7.381576, 7.402796, 7.546616, 7.379035, 7.522394, 7.53234, 7.407638, 7.345835, 7.417137, 7.58009, 7.484446, 7.634641,
   7.296428, 7.259314, 7.137211, 7.039947, 6.894818, 7.182336, 7.018378, 7.105671, 7.265507, 6.960997, 7.094805, 7.254463, 7.083579, 7.041438, 7.112307, 7.228708,
   7.187222, 6.944821, 6.969693, 7.179965, 7.159764, 6.973682, 6.625669, 6.866695, 6.805376, 7.09259, 6.745556, 6.775743, 6.73577, 6.638325, 6.565465, 6.980562,
   6.474909, 6.704052, 6.920345, 6.517831, 6.899558, 6.948382, 6.952625, 6.294408, 7.041169, 6.855361, 6.352391, 6.064904, 6.702553, 6.419795, 6.510653, 6.243053,
   6.626198, 6.062188, 6.038511, 6.947504, 5.87521, 6.489704, 6.301802, 6.684936, 6.467708, 6.84454, 6.521493, 6.151121, 6.66842, 6.519215, 6.242287, 6.569559,
   6.342101, 6.300881, 6.611433, 5.936071, 6.307628, 6.182882, 6.078607 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1037,Graph_from_VH_tagFirst_2b1c_H_mass_fy1037,Graph_from_VH_tagFirst_2b1c_H_mass_fex1037,Graph_from_VH_tagFirst_2b1c_H_mass_fey1037);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetMinimum(-1350.131);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetMaximum(13838.28);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1037);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__38 = new TH1D("data_mc_ratio__38","",1000,0,2000);
   data_mc_ratio__38->SetBinContent(43,1.262032);
   data_mc_ratio__38->SetBinContent(44,1.253526);
   data_mc_ratio__38->SetBinContent(45,1.256926);
   data_mc_ratio__38->SetBinContent(46,1.260267);
   data_mc_ratio__38->SetBinContent(47,1.25977);
   data_mc_ratio__38->SetBinContent(48,1.254688);
   data_mc_ratio__38->SetBinContent(78,1.242677);
   data_mc_ratio__38->SetBinContent(79,1.263682);
   data_mc_ratio__38->SetBinContent(80,1.247721);
   data_mc_ratio__38->SetBinContent(81,1.244017);
   data_mc_ratio__38->SetBinContent(82,1.243054);
   data_mc_ratio__38->SetBinContent(83,1.256464);
   data_mc_ratio__38->SetBinContent(1000,1.320837);
   data_mc_ratio__38->SetBinContent(1001,1.263506);
   data_mc_ratio__38->SetBinError(43,0.01428787);
   data_mc_ratio__38->SetBinError(44,0.01001763);
   data_mc_ratio__38->SetBinError(45,0.01011481);
   data_mc_ratio__38->SetBinError(46,0.01019465);
   data_mc_ratio__38->SetBinError(47,0.01022852);
   data_mc_ratio__38->SetBinError(48,0.01452084);
   data_mc_ratio__38->SetBinError(78,0.01589002);
   data_mc_ratio__38->SetBinError(79,0.01151326);
   data_mc_ratio__38->SetBinError(80,0.01138819);
   data_mc_ratio__38->SetBinError(81,0.0114555);
   data_mc_ratio__38->SetBinError(82,0.01146464);
   data_mc_ratio__38->SetBinError(83,0.01632873);
   data_mc_ratio__38->SetBinError(1000,0.1765042);
   data_mc_ratio__38->SetBinError(1001,0.01029144);
   data_mc_ratio__38->SetMinimum(0.4);
   data_mc_ratio__38->SetMaximum(1.6);
   data_mc_ratio__38->SetEntries(3785.161);
   data_mc_ratio__38->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__38->SetLineColor(ci);
   data_mc_ratio__38->SetLineWidth(2);
   data_mc_ratio__38->SetMarkerStyle(20);
   data_mc_ratio__38->SetMarkerSize(1.2);
   data_mc_ratio__38->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__38->GetXaxis()->SetRange(1,150);
   data_mc_ratio__38->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__38->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__38->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__38->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__38->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__38->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__38->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__38->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__38->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__38->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1038[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1038[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1038[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0131715, 0.006517833, 0.006583087, 0.006657737, 0.006641052, 0.01335208, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01477634, 0.007448075, 0.007423436, 0.007485966,
   0.007515518, 0.01500619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1433723 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1038,Graph_from_mc_statistical_error_fy1038,Graph_from_mc_statistical_error_fex1038,Graph_from_mc_statistical_error_fey1038);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1038 = new TH1F("Graph_Graph_from_mc_statistical_error1038","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1038->SetMinimum(0.8279532);
   Graph_Graph_from_mc_statistical_error1038->SetMaximum(1.172047);
   Graph_Graph_from_mc_statistical_error1038->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1038->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1038);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
