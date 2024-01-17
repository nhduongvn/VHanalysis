#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_VR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_VR_18/H_mass_tagFirst_VR_18
//=========  (Mon Jan  8 11:16:16 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-38.19293,315.7258,38164.74);
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
   st->SetMaximum(34344.44);
   
   TH1F *st_stack_71 = new TH1F("st_stack_71","",1000,0,2000);
   st_stack_71->SetMinimum(0.01);
   st_stack_71->SetMaximum(34344.44);
   st_stack_71->SetDirectory(nullptr);
   st_stack_71->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_71->SetLineColor(ci);
   st_stack_71->SetLineWidth(0);
   st_stack_71->GetXaxis()->SetRange(1,150);
   st_stack_71->GetXaxis()->SetLabelFont(42);
   st_stack_71->GetXaxis()->SetTitleOffset(1);
   st_stack_71->GetXaxis()->SetTitleFont(42);
   st_stack_71->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_71->GetYaxis()->SetLabelFont(42);
   st_stack_71->GetYaxis()->SetLabelSize(0.05);
   st_stack_71->GetYaxis()->SetTitleSize(0.057);
   st_stack_71->GetYaxis()->SetTitleOffset(1.2);
   st_stack_71->GetYaxis()->SetTitleFont(42);
   st_stack_71->GetZaxis()->SetLabelFont(42);
   st_stack_71->GetZaxis()->SetTitleOffset(1);
   st_stack_71->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_71);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(43,7592.167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(44,15373.04);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(45,15178.55);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(46,14971.6);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(47,14814.5);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7297.097);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6057.178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(79,11830.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(80,11866.02);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(81,11745.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(82,11721.82);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(83,5833.761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,47.62072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,22019.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6294007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.051133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.923952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.41451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.42737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,29.21463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,36.62441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,43.89365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,50.66773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,57.52908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,63.29311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,67.97673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,72.11514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,75.74936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,78.76818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,80.74256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,82.56312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,83.92769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,84.87463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,85.64938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,86.39542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,86.03932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,86.24856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,86.22559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,85.74184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,85.63204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,85.74068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,85.27624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,84.39603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,84.45469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,83.97724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,82.90069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,82.70334);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,82.71532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,82.19042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,81.62819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,81.19878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,80.54115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,80.54238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,80.26031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,80.04284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,79.47289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,78.95781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.95404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,79.13947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,78.39513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,78.50496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,78.20034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,77.86783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,77.77238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,77.05982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,77.04697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.92219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.40416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,76.34062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,76.55696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,76.48319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,75.95434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,75.87868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,75.30089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.97797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.62049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,74.63641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,74.47834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,74.18122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,73.59548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,73.41224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,73.5551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,72.56146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,72.67057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,72.3003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,72.22767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,71.74477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,71.37803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.99963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,70.68649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,70.62762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,70.60658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,70.84603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,70.43244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,69.70595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,69.51815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,69.0163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.88416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.52378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,68.27039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,68.25878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,68.52234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.87905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.98838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.65984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.06736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.91657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.51726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.18291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.30251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.10355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,65.81978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.67819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.10115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.23488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.08289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,64.70594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.84507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,64.53582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.36834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.05679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,63.88184);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,63.77478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,63.84462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,63.26494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,63.55077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,63.07995);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.9322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,62.78252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,62.53437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,62.51378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,62.06542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,62.42024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,62.02551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.89124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.09732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,61.27855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,61.6636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,61.4077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,61.36576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,61.13616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,60.86991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,60.54854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.04538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,60.98857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,60.42574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,60.20736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,59.73506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.0954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,59.74335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.07563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.46254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,59.5973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.26401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.98092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,58.79424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.96413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,58.59852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.92716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.74706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.26972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.89631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.29861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.96298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.95957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.10292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.55662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.74044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.5549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.64431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.21837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.10055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.77006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.87463);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.8607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.9738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.27419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.38496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.1491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,56.21961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.96713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,56.0944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.5426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.28166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.12558);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.63168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,55.18484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,55.31032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,55.01768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.45862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.82112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.3585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,54.48407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,54.32023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,54.34393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,54.22169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.93967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.95987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,54.0094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,53.256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,53.58599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,53.25972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,53.60447);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,53.15735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.89775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,53.07158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.52951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,52.24405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,52.15487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,52.39926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,52.09978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.97417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,52.12068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,51.7182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,51.85207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,51.48213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,51.58014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,51.70671);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,51.28553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,51.25656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,50.63058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,51.26815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,50.89785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,50.82386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.87645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,50.20827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,50.03834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,50.04032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,50.02845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,49.67682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.93928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,49.59901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,49.42699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,49.26845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,49.52307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,49.48106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,49.18193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,49.16784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,48.36157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,48.51491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,48.91541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,48.20157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,48.31239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,48.32674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,48.05341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,48.41069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,47.89239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,47.61032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,47.44988);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,47.12316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,47.32239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,47.01585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.96105);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,47.24909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,47.14417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,46.7878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,46.68821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,46.61178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,46.828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,46.3262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.95056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.98072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,46.14413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.87722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,45.4456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,45.43253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,45.31029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,45.3649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,45.35835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.03405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.76716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,45.02305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,44.79149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,44.33814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,44.36047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,44.35824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,44.24646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,44.43408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.96579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.75127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,44.02432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.71051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,43.8485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.86656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,43.2527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.1656);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,43.13576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,43.14954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.47405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,43.00009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,42.516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,42.52299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.58815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,42.16045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,42.23086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.6975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.8989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,42.05461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,41.12352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,41.46408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.65235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,41.0705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,41.27496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,41.02225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.27016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,40.5072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.59512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,40.53409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.21767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,40.4803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,40.25213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,40.06223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,40.27672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.75202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.64475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.82669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.69717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.90619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,39.30102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,39.26068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,39.12929);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.97713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.8881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.84733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.56845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,38.51706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.44757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,38.07744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.73256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.94978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.9289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,38.10344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.88448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.7063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.61689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.75879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,37.10262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,37.37919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.90994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.9957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,36.08777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,37.01978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,36.35844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,36.57841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,36.32574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.77355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,36.1344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,36.23566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,36.09875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.73754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,36.13165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.86203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,35.53188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.69595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,35.27172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.94733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,35.01245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,35.11977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,34.96999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,35.01245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.47082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,34.56837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,34.62562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.74839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,34.52537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,34.25756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.73024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.99638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.83285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,33.70674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.7273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,33.56246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,33.77132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,33.46494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,33.06002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,33.275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,33.10791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.74094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.6015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.75001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,32.69856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,32.2564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,32.56198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,32.21339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,32.34532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.89205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,32.06548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.88273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,31.65829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.73328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,31.59566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,31.3028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,31.52977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,31.31861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,31.40388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,31.26164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,31.08691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,31.18234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,30.47235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,30.68611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,30.58589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,30.32901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.85989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,30.59561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,30.29961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,30.4886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,30.09628);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,30.23417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.78535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,29.62532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,29.70544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.77537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.81858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.70544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,29.39375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,29.42743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,29.40386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,29.08212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,29.29926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,29.02759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.91478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,29.27221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.9319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,28.71544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,28.1793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,28.46603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,28.79465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,28.3475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,28.36845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,28.21091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.55381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,27.56818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,28.01717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,27.47101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.94638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.48183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,27.23204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.80783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.67574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.97993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,27.10445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,27.1008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,27.14461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,27.07886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.99094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.80685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,26.50965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.67723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,26.54698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,26.67352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,26.39358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,26.65124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,26.35604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.9394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.95085);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.95849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,25.57412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.68618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,26.05749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,25.08539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,26.20908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,25.47324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.67847);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,25.31725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,25.4499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,25.40706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,25.2781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.88721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,24.90709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,24.56679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.78752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.85535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.6754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.90709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,24.64728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.87163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,24.36033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,24.49412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,24.20125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,24.39283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,24.25848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,24.06172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.89237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,24.02464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,24.19307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.7051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.68421);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.81764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.74685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.68839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,23.60462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,23.26655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,23.44887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,23.55422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,23.22821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,23.44887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,23.24526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,23.25804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.91917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.74132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,23.00543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.67153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.89756);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.59277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.94077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,22.25712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.69336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,22.1456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,22.1992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,22.13666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,22.32377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,22.19474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.83032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,22.15008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.73484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.95246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.60688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,21.46893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,21.31616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.72116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,21.20436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.85299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,21.4135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,21.57477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.83212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,21.03555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,21.29291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,21.06848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.88909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,21.04025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.81785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.90804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.70336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.69379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,21.00256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.63148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.90804);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.67464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,20.51112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.99785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,20.39977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,20.47246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.98781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,20.05212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,20.37062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,20.18993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.91335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.88846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,20.15065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.65303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.7736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.9382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.77861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,19.31758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,20.16539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.50634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.98141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,19.25596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,19.18382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,19.45042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.58741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.88202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,19.41984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,19.14765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.8295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,19.08029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.55932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,19.0751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.5433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.22003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.88726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.6126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.9344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,19.04912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,18.29597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,18.50053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,18.12193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,18.12193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,18.0672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.81882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.94068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.66812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,18.02329);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.87431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.92964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,18.15469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.82993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.95172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.83549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.83549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.58947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.58384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.4765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.40267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.7743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.7185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.54437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,17.27702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,17.26555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,17.44246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.53307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,17.14467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.89446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.97633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,17.21385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,17.02293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.91789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.72951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.81219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.61069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.94129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.54498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.71767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.58683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.67615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.49102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.56293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,16.2063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,16.20019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.45495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,16.16347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,16.02193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,16.1696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,16.40069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,16.09593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,16.26121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.85415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,16.23683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,16.0713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.8479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.91027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.81663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.68458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.75389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.70982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,15.46841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,16.14508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.43636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.50039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,15.26215);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.4556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.4556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,15.15144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.74131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.94744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,15.28161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.50039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,15.1449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,15.11872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.93418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,15.16451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.78087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,15.11872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.80765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.74061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.59205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.63272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.73389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.84772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.64625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.70698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.72717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.65977);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.35944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.48305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,14.40076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.98913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,14.2695);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,14.19993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,14.27644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,14.15102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.31108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.98913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,14.19993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,14.387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.43511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,14.10897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,14.36634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.75352);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.92527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.69579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.88253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.85397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.82534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.60146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.78948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,14.02448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.44032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.47711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.60874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.53577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.4918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.32933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,13.25483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,13.18741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.47711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,13.01353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.33676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,13.11965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,13.01353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.40343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,13.05153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,13.32933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.92955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,13.30702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.92189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.87582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,13.21741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.62729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.86043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.82187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,13.08185);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.87582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.77544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.68207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,13.12719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.80641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.65862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,13.10454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.93721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.58801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.18829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,12.074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.54072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.54072);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,12.15575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.61944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,12.13128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.54861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,12.0082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,12.09858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.40574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,12.09039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.50272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,12.074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,12.17203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.95033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.61411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.44559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,12.33368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,12.09858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.97516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.71599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.48548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.74132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.6906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.63115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.83374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,11.24146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.63115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.54569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.72444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.72444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,11.34668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.63966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.75817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.50272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.27664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.74132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.5371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,11.12634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,11.17962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.39024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.63966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,11.12634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.91969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,11.25026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.95591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.71831);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.76441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.89245);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.95591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.90154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,11.17075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.80115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,11.13523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,11.17075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.55068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.30373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.90154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.87425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.67201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.68128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,10.91969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.34211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.69981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.65343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.58816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.65343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.69055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.81947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.51306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.56943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.39941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.961645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.33253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.60685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,10.20716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.29412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,10.01123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.891808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.36124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,10.14878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.46586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.39941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.658788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.11946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,10.26521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,10.20716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,10.02112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,10.08024);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.971582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,10.00133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.750633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.951698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.648529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.760785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.566062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,10.00133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.669036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.586745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.514157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.472428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.6895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.911812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.811385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.871764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.63826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.576409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.669036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.346123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.420007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.576409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.377859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.175012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,9.164212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.566062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.514157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.921798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.324906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.250263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.398956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.493315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.534953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.388413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.627979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.978616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.207338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.766537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.740471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,9.153399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,9.175012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.834059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.845263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.346123);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.493315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,9.066429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.789102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.945464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.822841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,9.142573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.878789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.444296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.59541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.560775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.397252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.721231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.502735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,9.09914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.709868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.549198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,9.022629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.46772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.549198);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.59541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.502735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.349943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.98964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.230482);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.409038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.560775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.525998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.373631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.502735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.409038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.43256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.361796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.800363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.349943);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,8.023316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.302365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.695694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,8.084798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,8.097038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.835975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.898916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.302365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.973789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.21844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.708552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.835975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,8.084798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.695694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.21844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,8.03565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,8.302365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,8.010963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.206381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.772525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.948909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.565909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.911444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.513367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.682814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.772525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.618088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.539684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.948909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.526537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.682814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.552808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.592044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.734205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.785256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.605077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.565909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.592044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.759773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.644045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.898916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.513367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.513367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.326505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.258603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,7.148617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.34001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.176272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.34001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.539684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.176272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.217555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.393784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.312975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.231263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.285839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.380377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.420524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.190059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.120856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.393784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.380377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,7.13475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.865951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,7.036913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.923407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.312975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,7.008709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,7.050973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.822541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.851511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.631147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.13475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.646066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.937697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,7.20382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.734881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.13475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.176272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.13475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.525765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.894739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,7.036913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.616196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.309722);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.793446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.631147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.72016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.403204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.88036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.214834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.230749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.909088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.987582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.734881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.495342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.865951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.616196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,7.079009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.778853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.341036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.837041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.72016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.434063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.793446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.495342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.495342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.822541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.118474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.464775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.387719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.246623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,98.99514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(6886266);

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
   
   TH1D *VH_tagFirst_H_mass__141 = new TH1D("VH_tagFirst_H_mass__141","",1000,0,2000);
   VH_tagFirst_H_mass__141->SetBinContent(43,7673);
   VH_tagFirst_H_mass__141->SetBinContent(44,15455);
   VH_tagFirst_H_mass__141->SetBinContent(45,15250);
   VH_tagFirst_H_mass__141->SetBinContent(46,15076);
   VH_tagFirst_H_mass__141->SetBinContent(47,14925);
   VH_tagFirst_H_mass__141->SetBinContent(48,7340);
   VH_tagFirst_H_mass__141->SetBinContent(78,6037);
   VH_tagFirst_H_mass__141->SetBinContent(79,11873);
   VH_tagFirst_H_mass__141->SetBinContent(80,11814);
   VH_tagFirst_H_mass__141->SetBinContent(81,11633);
   VH_tagFirst_H_mass__141->SetBinContent(82,11599);
   VH_tagFirst_H_mass__141->SetBinContent(83,5802);
   VH_tagFirst_H_mass__141->SetBinContent(1000,55);
   VH_tagFirst_H_mass__141->SetBinContent(1001,23972);
   VH_tagFirst_H_mass__141->SetEntries(3107559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__141->SetLineColor(ci);
   VH_tagFirst_H_mass__141->SetLineWidth(2);
   VH_tagFirst_H_mass__141->SetMarkerStyle(20);
   VH_tagFirst_H_mass__141->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__141->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__141->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__141->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__141->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__141->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__141->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__141->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__141->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__141->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__141->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1141[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1141[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 7592.167, 15373.04, 15178.55, 14971.6, 14814.5, 7297.097, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6057.178, 11830.41, 11866.02, 11745.41,
   11721.82, 5833.761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 47.62072 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1141[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1141[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6294007, 3.051133, 7.923952, 14.41451, 21.42737, 29.21463, 36.62441,
   43.89365, 50.66773, 57.52908, 63.29311, 67.97673, 72.11514, 75.74936, 78.76818, 80.74256, 82.56312, 83.92769, 84.87463, 85.64938, 86.39542, 86.03932, 86.24856,
   86.22559, 85.74184, 85.63204, 85.74068, 85.27624, 84.39603, 84.45469, 83.97724, 82.90069, 82.70334, 82.71532, 82.19042, 81.62819, 81.19878, 80.54115, 80.54238,
   80.26031, 80.04284, 79.47289, 78.95781, 78.95404, 79.13947, 78.39513, 78.50496, 78.20034, 77.86783, 77.77238, 77.05982, 77.04697, 76.92219, 76.40416, 76.34062,
   76.55696, 76.48319, 75.95434, 75.87868, 75.30089, 74.97797, 74.62049, 74.63641, 74.47834, 74.18122, 73.59548, 73.41224, 73.5551, 72.56146, 72.67057, 72.3003,
   72.22767, 71.74477, 71.37803, 70.99963, 70.68649, 70.62762, 70.60658, 70.84603, 70.43244, 69.70595, 69.51815, 69.0163, 68.88416, 68.52378, 68.27039, 68.25878,
   68.52234, 67.87905, 67.98838, 67.65984, 67.06736, 66.91657, 66.51726, 66.18291, 66.30251, 66.10355, 65.81978, 65.67819, 65.10115, 65.23488, 65.08289, 64.70594,
   64.84507, 64.53582, 64.36834, 64.05679, 63.88184, 63.77478, 63.84462, 63.26494, 63.55077, 63.07995, 62.9322, 62.78252, 62.53437, 62.51378, 62.06542, 62.42024,
   62.02551, 61.89124, 62.09732, 61.27855, 61.6636, 61.4077, 61.36576, 61.13616, 60.86991, 60.54854, 61.04538, 60.98857, 60.42574, 60.20736, 60.524, 59.73506,
   60.0954, 59.74335, 60.07563, 59.46254, 59.5973, 59.26401, 58.98092, 58.79424, 58.96413, 58.59852, 58.92716, 58.74706, 58.26972, 57.89631, 58.29861, 57.96298,
   57.95957, 58.10292, 57.55662, 57.74044, 57.5549, 57.64431, 57.21837, 57.10055, 56.77006, 56.87463, 56.8607, 56.9738, 56.27419, 56.38496, 56.1491, 56.21961,
   55.96713, 56.0944, 55.5426, 55.28166, 55.12558, 55.63168, 55.18484, 55.31032, 55.01768, 54.45862, 54.82112, 54.3585, 54.48407, 54.32023, 54.34393, 54.22169,
   53.93967, 53.95987, 54.0094, 53.256, 53.58599, 53.25972, 53.60447, 53.15735, 52.89775, 53.07158, 52.52951, 52.24405, 52.15487, 52.39926, 52.09978, 51.97417,
   52.12068, 51.7182, 51.85207, 51.48213, 51.58014, 51.70671, 51.28553, 51.25656, 50.63058, 51.26815, 50.89785, 50.82386, 50.87645, 50.20827, 50.03834, 50.04032,
   50.02845, 49.67682, 49.93928, 49.59901, 49.42699, 49.26845, 49.52307, 49.48106, 49.18193, 49.16784, 48.36157, 48.51491, 48.91541, 48.20157, 48.31239, 48.32674,
   48.05341, 48.41069, 47.89239, 47.61032, 47.44988, 47.12316, 47.32239, 47.01585, 46.96105, 47.24909, 47.14417, 46.7878, 46.68821, 46.61178, 46.828, 46.3262,
   45.95056, 45.98072, 46.14413, 45.87722, 45.4456, 45.43253, 45.31029, 45.3649, 45.35835, 45.03405, 44.76716, 45.02305, 44.79149, 44.33814, 44.36047, 44.35824,
   44.24646, 44.43408, 43.96579, 43.75127, 44.02432, 43.71051, 43.8485, 43.86656, 43.2527, 43.1656, 43.13576, 43.14954, 42.47405, 43.00009, 42.516, 42.52299,
   42.58815, 42.16045, 42.23086, 41.6975, 41.8989, 42.05461, 41.12352, 41.46408, 41.65235, 41.0705, 41.27496, 41.02225, 41.27016, 40.5072, 40.59512, 40.53409,
   40.21767, 40.4803, 40.25213, 40.06223, 40.27672, 39.75202, 39.64475, 39.82669, 39.69717, 39.90619, 39.30102, 39.26068, 39.12929, 38.97713, 38.8881, 38.84733,
   38.56845, 38.51706, 38.44757, 38.07744, 37.73256, 37.94978, 37.9289, 38.10344, 37.88448, 37.7063, 37.61689, 37.75879, 37.10262, 37.37919, 36.90994, 36.9957,
   36.08777, 37.01978, 36.619, 36.35844, 36.57841, 36.32574, 35.77355, 36.1344, 36.23566, 36.09875, 35.73754, 36.13165, 35.86203, 35.53188, 35.69595, 35.27172,
   34.94733, 35.01245, 35.11977, 34.96999, 35.01245, 34.47082, 34.56837, 34.62562, 34.74839, 34.52537, 34.25756, 33.73024, 33.99638, 33.83285, 33.70674, 33.7273,
   33.56246, 33.77132, 33.46494, 33.06002, 33.275, 32.952, 33.10791, 32.74094, 32.6015, 32.75001, 32.69856, 32.2564, 32.56198, 32.21339, 32.34532, 31.89205,
   32.06548, 31.88273, 31.65829, 31.73328, 31.59566, 31.3028, 31.52977, 31.31861, 31.40388, 31.26164, 31.08691, 31.18234, 30.47235, 30.68611, 30.58589, 30.32901,
   30.85989, 30.59561, 30.29961, 30.4886, 30.09628, 30.23417, 29.78535, 29.62532, 29.70544, 29.77537, 29.81858, 29.70544, 29.39375, 29.42743, 29.40386, 29.08212,
   29.29926, 29.02759, 28.91478, 29.27221, 28.9319, 28.71544, 28.1793, 28.46603, 28.79465, 28.3475, 28.36845, 28.21091, 27.55381, 27.56818, 28.01717, 27.47101,
   27.94638, 27.48183, 27.23204, 27.80783, 27.67574, 26.97993, 27.10445, 27.1008, 27.14461, 27.07886, 26.99094, 26.80685, 26.50965, 26.67723, 26.54698, 26.67352,
   26.39358, 26.65124, 26.35604, 25.9394, 25.95085, 25.95849, 25.57412, 25.68618, 26.05749, 25.08539, 26.20908, 25.47324, 25.67847, 25.31725, 25.4499, 25.40706,
   25.2781, 24.88721, 24.90709, 24.56679, 24.78752, 24.85535, 24.6754, 24.90709, 24.64728, 23.87163, 24.36033, 24.49412, 24.20125, 24.39283, 24.25848, 24.06172,
   23.89237, 24.02464, 24.19307, 23.7051, 23.68421, 23.81764, 23.74685, 23.68839, 23.60462, 23.26655, 23.44887, 23.55422, 23.22821, 23.44887, 23.24526, 23.25804,
   22.91917, 22.74132, 23.00543, 22.67153, 22.89756, 22.59277, 22.94077, 22.25712, 22.69336, 22.1456, 22.1992, 22.13666, 22.32377, 22.19474, 21.83032, 22.15008,
   21.73484, 21.95246, 21.60688, 21.46893, 21.31616, 21.72116, 21.20436, 21.85299, 21.4135, 21.57477, 20.83212, 21.03555, 21.29291, 21.06848, 20.88909, 21.04025,
   20.81785, 20.90804, 20.70336, 20.69379, 21.00256, 20.63148, 20.90804, 20.67464, 20.51112, 20.99785, 20.39977, 20.47246, 19.98781, 20.05212, 20.37062, 20.18993,
   19.91335, 19.88846, 20.15065, 19.65303, 19.7736, 19.9382, 19.77861, 19.31758, 20.16539, 19.50634, 18.98141, 19.25596, 19.18382, 19.45042, 19.58741, 18.88202,
   19.41984, 19.14765, 18.8295, 19.08029, 18.55932, 19.0751, 18.5433, 18.22003, 18.88726, 18.6126, 18.9344, 19.04912, 18.29597, 18.50053, 18.12193, 18.12193,
   18.0672, 17.81882, 17.94068, 17.66812, 18.02329, 17.87431, 17.92964, 18.15469, 17.82993, 17.95172, 17.83549, 17.83549, 17.58947, 17.58384, 17.4765, 17.40267,
   17.7743, 17.7185, 17.54437, 17.27702, 17.26555, 17.44246, 17.53307, 17.14467, 16.89446, 16.97633, 17.21385, 17.02293, 16.91789, 16.72951, 16.81219, 16.61069,
   16.94129, 16.54498, 16.71767, 16.58683, 16.67615, 16.49102, 16.56293, 16.2063, 16.20019, 16.45495, 16.16347, 16.02193, 16.1696, 16.40069, 16.09593, 16.26121,
   15.85415, 16.23683, 16.0713, 15.8479, 15.91027, 15.81663, 15.68458, 15.75389, 15.70982, 15.46841, 16.14508, 15.43636, 15.50039, 15.26215, 15.4556, 15.4556,
   15.15144, 15.74131, 14.94744, 15.28161, 15.50039, 15.1449, 15.11872, 14.93418, 15.16451, 14.78087, 15.11872, 14.80765, 14.74061, 14.59205, 14.63272, 14.73389,
   14.84772, 14.64625, 14.70698, 14.72717, 14.65977, 14.35944, 14.48305, 14.40076, 13.98913, 14.2695, 14.19993, 14.27644, 14.15102, 14.31108, 13.98913, 14.19993,
   14.387, 14.43511, 14.10897, 14.36634, 13.75352, 13.92527, 13.69579, 13.88253, 13.85397, 13.82534, 13.60146, 13.78948, 14.02448, 13.44032, 13.47711, 13.60874,
   13.53577, 13.4918, 13.32933, 13.25483, 13.18741, 13.47711, 13.01353, 13.33676, 13.11965, 13.01353, 13.40343, 13.05153, 13.32933, 12.92955, 13.30702, 12.92189,
   12.87582, 13.21741, 12.62729, 12.86043, 12.82187, 13.08185, 12.87582, 12.77544, 12.68207, 13.12719, 12.80641, 12.65862, 13.10454, 12.93721, 12.58801, 12.18829,
   12.074, 12.54072, 12.54072, 12.15575, 12.61944, 12.13128, 12.54861, 12.0082, 12.09858, 12.40574, 12.09039, 11.50272, 12.074, 12.17203, 11.95033, 11.61411,
   12.44559, 12.33368, 12.09858, 11.97516, 11.71599, 11.48548, 11.74132, 11.6906, 11.63115, 11.83374, 11.24146, 11.63115, 11.54569, 11.72444, 11.72444, 11.34668,
   11.63966, 11.75817, 11.50272, 11.27664, 11.74132, 11.5371, 11.12634, 11.17962, 11.39024, 11.63966, 11.12634, 10.91969, 11.25026, 10.95591, 10.71831, 10.76441,
   10.89245, 10.95591, 10.90154, 11.17075, 10.80115, 11.13523, 11.17075, 10.55068, 10.30373, 10.90154, 10.87425, 10.67201, 10.68128, 10.91969, 10.34211, 10.69981,
   10.65343, 10.58816, 10.65343, 10.69055, 10.81947, 10.51306, 10.56943, 10.39941, 9.961645, 10.33253, 10.60685, 10.20716, 10.29412, 10.01123, 9.891808, 10.36124,
   10.14878, 10.46586, 10.39941, 9.658788, 10.11946, 10.26521, 10.20716, 10.02112, 10.08024, 9.971582, 10.00133, 9.750633, 9.951698, 9.648529, 9.760785, 9.566062,
   10.00133, 9.669036, 9.586745, 9.514157, 9.472428, 9.6895, 9.911812, 9.811385, 9.871764, 9.63826, 9.576409, 9.669036, 9.346123, 9.420007, 9.576409, 9.377859,
   9.175012, 9.164212, 9.566062, 9.514157, 9.921798, 9.324906, 9.250263, 9.398956, 9.493315, 9.534953, 9.388413, 9.627979, 8.978616, 9.207338, 8.766537, 9.740471,
   9.153399, 9.175012, 8.834059, 8.845263, 9.346123, 9.493315, 9.066429, 8.789102, 8.945464, 8.822841, 9.142573, 8.878789, 8.444296, 8.59541, 8.560775, 8.397252,
   8.721231, 8.502735, 9.09914, 8.709868, 8.549198, 9.022629, 8.46772, 8.549198, 8.59541, 8.502735, 8.349943, 8.98964, 8.230482, 8.409038, 8.560775, 8.525998,
   8.373631, 8.502735, 8.409038, 8.43256, 8.361796, 8.800363, 8.349943, 8.023316, 8.302365, 7.695694, 8.084798, 8.097038, 7.835975, 7.898916, 8.302365, 7.973789,
   8.21844, 7.708552, 7.835975, 8.084798, 7.695694, 8.21844, 8.03565, 8.302365, 8.010963, 8.206381, 7.772525, 7.948909, 7.565909, 7.911444, 7.513367, 7.682814,
   7.772525, 7.618088, 7.539684, 7.948909, 7.526537, 7.682814, 7.552808, 7.592044, 7.734205, 7.785256, 7.605077, 7.565909, 7.592044, 7.759773, 7.644045, 7.898916,
   7.513367, 7.513367, 7.326505, 7.258603, 7.148617, 7.34001, 7.176272, 7.34001, 7.539684, 7.176272, 7.217555, 7.393784, 7.312975, 7.231263, 7.285839, 7.380377,
   7.420524, 7.190059, 7.120856, 7.393784, 7.380377, 7.13475, 6.865951, 7.036913, 6.923407, 7.312975, 7.008709, 7.050973, 6.822541, 6.851511, 6.631147, 7.13475,
   6.646066, 6.937697, 7.20382, 6.734881, 7.13475, 7.176272, 7.13475, 6.525765, 6.894739, 7.036913, 6.616196, 6.309722, 6.793446, 6.631147, 6.72016, 6.403204,
   6.88036, 6.214834, 6.230749, 6.909088, 5.987582, 6.734881, 6.495342, 6.865951, 6.616196, 7.079009, 6.778853, 6.341036, 6.837041, 6.72016, 6.434063, 6.793446,
   6.495342, 6.495342, 6.822541, 6.118474, 6.464775, 6.387719, 6.246623 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1141,Graph_from_VH_tagFirst_2b1c_H_mass_fy1141,Graph_from_VH_tagFirst_2b1c_H_mass_fex1141,Graph_from_VH_tagFirst_2b1c_H_mass_fey1141);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->SetMinimum(-1640.61);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->SetMaximum(17009.97);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1141);
   
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
   
   TH1D *data_mc_ratio__142 = new TH1D("data_mc_ratio__142","",1000,0,2000);
   data_mc_ratio__142->SetBinContent(43,1.010647);
   data_mc_ratio__142->SetBinContent(44,1.005332);
   data_mc_ratio__142->SetBinContent(45,1.004707);
   data_mc_ratio__142->SetBinContent(46,1.006973);
   data_mc_ratio__142->SetBinContent(47,1.007459);
   data_mc_ratio__142->SetBinContent(48,1.005879);
   data_mc_ratio__142->SetBinContent(78,0.9966688);
   data_mc_ratio__142->SetBinContent(79,1.0036);
   data_mc_ratio__142->SetBinContent(80,0.9956164);
   data_mc_ratio__142->SetBinContent(81,0.9904298);
   data_mc_ratio__142->SetBinContent(82,0.9895222);
   data_mc_ratio__142->SetBinContent(83,0.9945557);
   data_mc_ratio__142->SetBinContent(1000,1.154959);
   data_mc_ratio__142->SetBinContent(1001,1.088651);
   data_mc_ratio__142->SetBinError(43,0.01153764);
   data_mc_ratio__142->SetBinError(44,0.008086765);
   data_mc_ratio__142->SetBinError(45,0.008135883);
   data_mc_ratio__142->SetBinError(46,0.008201152);
   data_mc_ratio__142->SetBinError(47,0.008246512);
   data_mc_ratio__142->SetBinError(48,0.01174081);
   data_mc_ratio__142->SetBinError(78,0.01282745);
   data_mc_ratio__142->SetBinError(79,0.00921044);
   data_mc_ratio__142->SetBinError(80,0.00915996);
   data_mc_ratio__142->SetBinError(81,0.009182857);
   data_mc_ratio__142->SetBinError(82,0.009187879);
   data_mc_ratio__142->SetBinError(83,0.0130569);
   data_mc_ratio__142->SetBinError(1000,0.1557347);
   data_mc_ratio__142->SetBinError(1001,0.008566982);
   data_mc_ratio__142->SetMinimum(0.4);
   data_mc_ratio__142->SetMaximum(1.6);
   data_mc_ratio__142->SetEntries(3521.592);
   data_mc_ratio__142->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__142->SetLineColor(ci);
   data_mc_ratio__142->SetLineWidth(2);
   data_mc_ratio__142->SetMarkerStyle(20);
   data_mc_ratio__142->SetMarkerSize(1.2);
   data_mc_ratio__142->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__142->GetXaxis()->SetRange(1,150);
   data_mc_ratio__142->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__142->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__142->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__142->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__142->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__142->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__142->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__142->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__142->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__142->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__142->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__142->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__142->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__142->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__142->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__142->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1142[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1142[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1142[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1142[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01089325, 0.005380545, 0.005414907, 0.005452203, 0.005481036, 0.01103742, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01214346, 0.006133469, 0.00612426, 0.006155624,
   0.006161814, 0.0122982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1311745 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1142,Graph_from_mc_statistical_error_fy1142,Graph_from_mc_statistical_error_fex1142,Graph_from_mc_statistical_error_fey1142);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1142 = new TH1F("Graph_Graph_from_mc_statistical_error1142","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1142->SetMinimum(0.8425906);
   Graph_Graph_from_mc_statistical_error1142->SetMaximum(1.157409);
   Graph_Graph_from_mc_statistical_error1142->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1142->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1142->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1142->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1142->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1142->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1142->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1142->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1142->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1142->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1142);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->Modified();
   H_mass_tagFirst_VR_18->cd();
   H_mass_tagFirst_VR_18->SetSelected(H_mass_tagFirst_VR_18);
}
