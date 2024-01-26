#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_16/Z_mass_tagOnly_VR_16
//=========  (Thu Jan 25 12:40:51 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_VR_16 = new TCanvas("Z_mass_tagOnly_VR_16", "Z_mass_tagOnly_VR_16",0,0,600,600);
   Z_mass_tagOnly_VR_16->SetHighLightColor(2);
   Z_mass_tagOnly_VR_16->Range(0,0,1,1);
   Z_mass_tagOnly_VR_16->SetFillColor(0);
   Z_mass_tagOnly_VR_16->SetFillStyle(4000);
   Z_mass_tagOnly_VR_16->SetBorderMode(0);
   Z_mass_tagOnly_VR_16->SetBorderSize(2);
   Z_mass_tagOnly_VR_16->SetFrameFillStyle(1000);
   Z_mass_tagOnly_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-69.3547,315.7258,69295.34);
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
   st->SetMaximum(62358.87);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",1000,0,2000);
   st_stack_23->SetMinimum(0.01);
   st_stack_23->SetMaximum(62358.87);
   st_stack_23->SetDirectory(nullptr);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->SetLineWidth(0);
   st_stack_23->GetXaxis()->SetRange(1,150);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetLabelSize(0.05);
   st_stack_23->GetYaxis()->SetTitleSize(0.057);
   st_stack_23->GetYaxis()->SetTitleOffset(1.2);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,25139.74);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,26302.78);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,27303.75);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,27746.13);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,28061.49);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,16939.8);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,16738.9);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,16676.12);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,16324.26);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,16190.23);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,55.772);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,35335.8);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.7725594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,2.494849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,6.574865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,12.49132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,19.58143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,28.01831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,36.65385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,45.30613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,53.63747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,60.93712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,67.8069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,73.73564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,78.45079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,82.55187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,85.67849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,87.63795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,89.28995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,90.01039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,90.52047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,91.10587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,90.56473);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,90.33094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,89.61689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,88.74062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,88.34581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,87.41438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,86.4098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,85.65361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,84.92784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,84.08687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,82.98813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,82.47023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,81.72975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,80.78115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,80.02878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,79.3284);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,78.38609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,78.02085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,77.39928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,76.40474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,75.44344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,74.92973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,74.33164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,73.99997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,73.40534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,72.49778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,72.05008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,71.57753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,70.90551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,70.33079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,69.91251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,69.78128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,69.04118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,68.75717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,68.10677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,67.63252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,67.02656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,66.64384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,66.38169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,65.91896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,65.5083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,64.96852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,64.66399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,64.08585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,63.47962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,63.51117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,62.45729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,62.50096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,62.03334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,61.51644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,61.03359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,60.82998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,60.1768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,60.00369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,59.46127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,59.25442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,58.81608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,58.5043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,58.20623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,57.95667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,57.42238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,56.77504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,56.71344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,56.30529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,56.15518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,55.8606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,55.35923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,55.31531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,54.79339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,54.59307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,54.40533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,53.69943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,53.64939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,53.25939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,53.15603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,52.84635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,52.73572);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,52.53079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,52.16104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,51.69802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,51.59319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,51.30482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,51.20501);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,51.02569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,51.014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,50.66095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,50.3122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,50.1552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,50.09821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,49.78322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,49.45673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,49.28835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,49.27451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,49.16711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,48.83302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,48.54495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,48.59059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,48.24543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,48.2198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,47.90135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,48.16496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,47.78373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,47.68996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,47.26613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,46.9984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,47.17675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,47.05823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,46.69353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,46.84576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,46.3692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,46.3324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,46.19602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,45.91091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,45.62961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,45.66324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,45.25906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,45.25717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,45.17609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,45.15532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,45.18081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,44.94429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,44.58525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,44.74465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,44.53455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,44.38592);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,44.3196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,44.14804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,44.04944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,43.7591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,43.75326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,43.51486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,43.90111);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,43.20515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,43.47761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,43.02816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,43.05094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,43.00041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,42.9389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,42.91407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,42.55994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,42.624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,42.27349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,42.23011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,42.22708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,42.03887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,41.89666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,41.6333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,41.96783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,41.70696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,41.27232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,41.42388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,41.18546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,41.12123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,40.90711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,40.95918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,40.98935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,40.94461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,40.95085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,40.66565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,40.68557);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,40.2706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,40.30552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,40.12743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,40.1699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,39.93894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,39.6271);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,39.89301);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,39.67333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,39.52369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,39.51829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,39.17047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,39.39836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,38.99047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,38.99813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,39.02872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,38.74588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,38.62576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,38.78437);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,38.78877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,38.48755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,38.07662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,38.06878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,38.09341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,37.99929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,38.01387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,38.13144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,37.53876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,37.8858);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,37.3372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,37.28235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,37.20566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,37.27549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,37.19764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,37.34633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,37.1598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,37.03108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,36.76882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,36.71196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,36.32672);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,36.44974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,36.41464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,36.04278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,36.09361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,36.1538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,36.32555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,35.89106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,35.74943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,35.83757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,35.82329);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,35.32355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,35.32597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,35.38746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,35.29699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,35.14084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,35.14812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,34.94741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,34.90102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,34.90957);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,34.69029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,35.01444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,34.44858);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,34.53386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,34.2811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,34.58444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,34.3159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,34.04274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,33.93236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,33.74464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,34.07404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,33.838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,33.77242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,33.4171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,33.65229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,33.38136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,32.94169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,33.24699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,32.71573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,33.33152);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,33.07085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,32.66748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,33.15968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,32.77302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,32.46326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,32.62177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,32.68705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,32.78472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,32.3343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,32.01098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,32.16642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,32.13725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,31.92029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,32.00965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,31.59947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,31.975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,31.74619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,31.69243);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,31.47375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,31.50219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,31.29036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,31.26173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,31.07846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,30.88582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,31.09766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,30.81949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,30.87477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,30.62939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,30.73638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,30.55275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,30.66695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,30.39747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,30.40167);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,30.45631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,30.1482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,30.01073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,30.02635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,29.87404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,30.11849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,30.0093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,30.0093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,29.75106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,29.62037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,29.71378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,29.48911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,29.11227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,29.40659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,29.07417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,28.95957);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,29.21751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,29.0228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,28.908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,28.75125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,28.69782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,29.01105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,28.92717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,28.58768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,28.41417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,28.49507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,28.324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,28.18519);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,28.04416);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,27.92076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,27.97415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,27.96195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,28.15795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,27.67538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,27.69847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,27.87797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,28.01527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,27.54258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,27.76458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,27.53794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,27.38736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,27.47749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,27.49766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,27.2813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,27.26098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,27.17797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,27.02065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,26.94798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,26.66809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,26.85606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,26.88779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,26.74153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,26.41753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,26.53507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,26.53347);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,26.33995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,26.327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,26.27351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,26.21503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,26.13522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,25.95517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,26.07153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,25.85973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,26.08297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,25.81188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,25.76393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,25.41407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,25.4191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,25.37546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,25.49446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,25.43084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,25.46769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,25.4191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,25.11709);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,25.12388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,25.07122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,25.09502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,24.998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,25.07122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,25.02868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,25.0457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,24.39729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,24.78046);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,24.69775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,24.44268);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,24.8011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,24.39205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,24.49495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,24.16024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,24.70983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,24.236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,24.16024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,23.97958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,24.12669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,24.08071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,23.74195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,23.73836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,23.6556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,23.77246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,23.70062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,23.71141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,23.47288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,23.46743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,23.26124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,23.2759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,23.29055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,23.13444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,23.20068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,23.10678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,23.32895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,23.27224);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,23.04581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,22.89362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,22.68786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,22.776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,22.82835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,22.98098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,22.47831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,22.41183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,22.21696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,22.95127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,22.66341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,22.38138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,22.17855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,22.50864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,22.29358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,22.18239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,21.98355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,22.01455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,22.19008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,21.7868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,21.88832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,21.98743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,21.74763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,21.90779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,21.87078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,21.68481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,21.50913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,21.78289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,21.60405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,21.50913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,21.09485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,21.26193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,21.13523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,21.33);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,21.21375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,21.11909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,21.16547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,20.92848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,21.04022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,20.77719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,20.99559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,20.69495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,20.72994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,20.84275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,20.85706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,20.77514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,20.40869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,20.68053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,20.61859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,20.65165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,20.38779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,20.50871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,20.55647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,20.38361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,20.15435);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,20.25773);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,20.0483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,19.99934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,20.34174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,19.95879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,19.90104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,19.9716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,19.80656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,19.65531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,19.79579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,19.73972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,19.73756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,19.52255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,19.50945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,19.57707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,19.24544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,19.27421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,19.38669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,19.20774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,18.95303);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,19.30736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,19.17887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,19.16997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,19.26536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,19.2144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,18.91475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,19.05622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,18.98);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,19.05174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,18.81758);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,18.80625);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,18.85606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,18.88768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,18.64461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,18.53683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,18.57588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,18.43304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,18.4099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,18.62402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,18.43304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,18.41685);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,18.20498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,18.09693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,18.53223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,18.18623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,18.21902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,18.03794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,18.05448);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,18.31471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,17.96453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,18.13459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,17.82635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,17.73765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,17.73765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,17.72082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,17.65333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,17.47371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,17.79045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,17.70878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,17.69915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,17.43952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,17.57345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,17.50052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,17.38075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,17.339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,17.27248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,17.34637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,17.43463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,17.25026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,17.1362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,17.0614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,17.53459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,17.03139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,17.01135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,16.86031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,16.88053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,16.90577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,16.99129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,16.83248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,16.78429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,16.51027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,16.53091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,16.34678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,16.72576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,16.21323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,16.49218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,16.73341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,16.56183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,16.62093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,16.55153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,16.31285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,16.43003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,16.61323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,16.15);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,16.29454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,16.26312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,16.5206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,16.19218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,16.05203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,15.89457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,15.88383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,15.9775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,16.08122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,16.05203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,15.92137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,16.05735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,15.85159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,15.54472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,15.63768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,15.8489);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,15.80311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,15.63496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,15.78421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,15.76259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,15.56664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,15.61859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,15.42081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,15.49527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,15.34598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,15.44567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,15.16714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,15.37374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,15.43739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,15.22046);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,15.13619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,15.04863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,15.15027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,15.24564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,15.09389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,15.12774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,15.00607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,14.94344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,14.79723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,14.89772);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,14.75684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,14.96055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,14.892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,14.82601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,14.58247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,14.53855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,14.635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,14.7655);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,14.69894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,14.26921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,14.50626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,14.47979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,14.65828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,14.5092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,14.61168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,14.11602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,14.30204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,14.25427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,14.18832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,14.20933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,14.20333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,14.37933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,14.05852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,13.92445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,13.8107);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,14.13413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,14.14317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,14.03424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,13.83538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,13.68979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,13.68979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,13.89994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,13.68667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,14.06155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,13.93363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,13.58663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,13.62736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,13.87845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,13.32685);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,13.73952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,13.51427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,13.56465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,13.50796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,13.50796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,13.18534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,13.49217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,13.25629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,13.40022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,13.45103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,13.14973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,13.33325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,13.23698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,13.01613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,13.14649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,13.40658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,13.11077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,13.14973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,12.86127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,13.25629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,13.0423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,12.86127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,13.08799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,13.22731);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,13.03903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,12.79813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,13.08799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,12.56618);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,12.96362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,12.91089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,12.5254);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,12.85795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,12.49132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,12.84468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,12.60683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,12.42974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,12.65071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,12.75475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,12.47083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,12.47425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,12.53221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,12.51178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,12.40571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,12.53561);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,12.54581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,12.53901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,12.24313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,12.19428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,12.04301);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,12.27442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,12.21873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,12.23964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,12.18379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,12.33678);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,12.34715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,11.84311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,12.02175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,11.98979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,11.99335);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,12.05716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,11.88264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,11.61778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,11.83231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,11.72372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,12.03593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,11.65076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,11.7128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,11.68365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,11.85391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,11.84671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,11.43656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,11.58103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,11.87905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,11.52568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,11.59942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,11.68);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,11.72372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,11.49605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,11.46635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,11.45146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,11.57735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,11.19164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,11.18783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,11.13818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,11.35426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,11.06522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,11.33923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,11.10368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,11.16112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,10.98401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,11.12286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,10.95292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,11.14201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,10.9022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,11.08447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,11.07292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,11.01115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,10.97236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,10.94903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,10.98401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,11.10752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,10.68896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,10.8591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,10.88655);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,10.7803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,10.804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,10.7049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,10.68497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,10.80005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,10.87871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,10.649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,10.64099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,10.67698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,10.56459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,10.59682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,10.46729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,10.512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,10.57266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,10.4917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,10.55248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,10.57266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,10.85518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,10.62495);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,10.37319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,10.32376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,10.55248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,10.33201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,10.47951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,10.0814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,10.4224);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,10.11939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,10.18657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,10.16563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,10.34439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,10.04752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,10.1782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,10.28238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,10.19494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,9.82006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,10.0814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,9.940874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,10.10252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,10.14464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,10.07717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,9.884966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,9.702137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,9.902202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,10.03478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,9.936585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,9.897896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,9.83741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,9.83741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,9.596099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,9.99647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,9.582762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,9.793978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,9.560492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,9.772189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,9.82006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,9.811374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,9.828739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,9.520275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,9.78091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,9.502346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,9.511315);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,9.506831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,9.412189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,9.609418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,9.533699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,9.334871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,9.339436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,9.266113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,9.266113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,9.542639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,9.03786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,9.261511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,8.95255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,9.075518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,9.009513);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,8.985823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,9.394053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,9.348561);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,9.270713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,9.24308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,8.943021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,8.943021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,8.933482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,8.923933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,9.084908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,8.856799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,8.890429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,9.042576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,8.895223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,8.847166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,8.808532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,8.900014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,8.7843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,8.803691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,8.919154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,8.686693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,8.72098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,9.023698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,8.583012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,8.76);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,8.696503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,8.890429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,8.5979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,8.72098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,8.518196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,8.523199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,8.735633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,8.387061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,8.543183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,8.538192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,8.617711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,8.33096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,8.587978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,8.376889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,8.238334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,8.336076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,8.295062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,8.392143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,8.289921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,8.622657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,8.361608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,8.139418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,7.996749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,8.191628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,7.867761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,8.233157);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,8.012727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,8.336076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,8.186422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,8.289921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,8.279629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,8.274478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,8.149887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,8.170784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,8.097408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,8.102671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,8.049884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,7.975396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,8.289921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,8.097408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,8.107931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,7.769615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,7.747636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,7.856916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,8.165565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,7.900206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,7.927141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,7.932517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,7.597613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,8.055179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,8.065757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,7.620025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,7.824292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,7.873178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,7.55259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,7.703489);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,7.764126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,7.433106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,7.55259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,7.769615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,7.352372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,7.421627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,7.512973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,7.636791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,7.421627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,7.450293);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,7.288311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,7.675769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,7.597613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,7.427369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,7.340766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,7.478849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,7.529977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,7.659088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,7.495931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,7.529977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,7.329142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,7.200036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,7.541292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,7.311671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,7.270741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,7.194112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,7.241365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,7.134606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,7.014081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,7.128628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,7.092655);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,7.235475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,7.235475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,6.977517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,6.959163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,7.200036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,7.014081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,7.050455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,7.020156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,7.044405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,7.0746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,7.205954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,6.971404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,6.916148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,6.716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,7.104667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,7.038351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,6.953034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,7.044405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,7.038351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,6.860447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,7.020156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,6.779181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,6.804289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,6.916148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,6.816809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,6.804289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,6.728684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,6.568378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,6.995823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,6.897631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,6.437259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,7.068572);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,6.959163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,6.363992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,6.703292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,6.607206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,6.370688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,6.377376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,6.457097);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,6.658624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,6.568378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,6.709649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,6.529318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,6.639389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,6.548877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,6.772889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,6.503149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,6.716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,6.555384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,6.542364);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,6.503149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,6.561884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,6.709649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,6.214869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,6.483452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,6.187369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,6.323671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,6.450491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,6.310173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,6.201134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,6.390732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,6.289872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,5.948492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,6.138948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,6.430633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,6.665024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,6.303414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,6.019734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,101.5778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(1.122667e+07);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Z_mass__45 = new TH1D("VH_tagOnly_Z_mass__45","",1000,0,2000);
   VH_tagOnly_Z_mass__45->SetBinContent(26,24645);
   VH_tagOnly_Z_mass__45->SetBinContent(27,25820);
   VH_tagOnly_Z_mass__45->SetBinContent(28,27103);
   VH_tagOnly_Z_mass__45->SetBinContent(29,27446);
   VH_tagOnly_Z_mass__45->SetBinContent(30,27569);
   VH_tagOnly_Z_mass__45->SetBinContent(61,17899);
   VH_tagOnly_Z_mass__45->SetBinContent(62,17553);
   VH_tagOnly_Z_mass__45->SetBinContent(63,17553);
   VH_tagOnly_Z_mass__45->SetBinContent(64,17262);
   VH_tagOnly_Z_mass__45->SetBinContent(65,16877);
   VH_tagOnly_Z_mass__45->SetBinContent(1000,68);
   VH_tagOnly_Z_mass__45->SetBinContent(1001,42089);
   VH_tagOnly_Z_mass__45->SetEntries(3437913);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__45->SetLineColor(ci);
   VH_tagOnly_Z_mass__45->SetLineWidth(2);
   VH_tagOnly_Z_mass__45->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__45->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__45->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__45->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__45->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__45->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__45->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__45->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__45->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__45->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__45->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__45->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1045[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1045[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 25139.74, 26302.78, 27303.75, 27746.13, 28061.49, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16939.8, 16738.9, 16676.12, 16324.26, 16190.23,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 55.772 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1045[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1045[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.7725594, 2.494849, 6.574865, 12.49132, 19.58143, 28.01831,
   36.65385, 45.30613, 53.63747, 60.93712, 67.8069, 73.73564, 78.45079, 82.55187, 85.67849, 87.63795, 89.28995, 90.01039, 90.52047, 91.10587, 90.56473, 90.33094,
   89.61689, 88.74062, 88.34581, 87.41438, 86.4098, 85.65361, 84.92784, 84.08687, 82.98813, 82.47023, 81.72975, 80.78115, 80.02878, 79.3284, 78.38609, 78.02085,
   77.39928, 76.40474, 75.44344, 74.92973, 74.33164, 73.99997, 73.40534, 72.49778, 72.05008, 71.57753, 70.90551, 70.33079, 69.91251, 69.78128, 69.04118, 68.75717,
   68.10677, 67.63252, 67.02656, 66.64384, 66.38169, 65.91896, 65.5083, 64.96852, 64.66399, 64.08585, 63.47962, 63.51117, 62.45729, 62.50096, 62.03334, 61.51644,
   61.03359, 60.82998, 60.1768, 60.00369, 59.46127, 59.25442, 58.81608, 58.5043, 58.20623, 57.95667, 57.42238, 56.77504, 56.71344, 56.30529, 56.15518, 55.8606,
   55.35923, 55.31531, 54.79339, 54.59307, 54.40533, 53.69943, 53.64939, 53.25939, 53.15603, 52.84635, 52.73572, 52.53079, 52.16104, 51.69802, 51.59319, 51.30482,
   51.20501, 51.02569, 51.014, 50.66095, 50.3122, 50.1552, 50.09821, 49.78322, 49.45673, 49.28835, 49.27451, 49.16711, 48.83302, 48.54495, 48.59059, 48.24543,
   48.2198, 47.90135, 48.16496, 47.78373, 47.68996, 47.26613, 46.9984, 47.17675, 47.05823, 46.69353, 46.84576, 46.3692, 46.3324, 46.19602, 45.91091, 45.62961,
   45.66324, 45.25906, 45.25717, 45.17609, 45.15532, 45.18081, 44.94429, 44.58525, 44.74465, 44.53455, 44.38592, 44.3196, 44.14804, 44.04944, 43.7591, 43.75326,
   43.51486, 43.90111, 43.20515, 43.47761, 43.02816, 43.05094, 43.00041, 42.9389, 42.91407, 42.55994, 42.624, 42.27349, 42.23011, 42.22708, 42.03887, 41.89666,
   41.6333, 41.96783, 41.70696, 41.27232, 41.42388, 41.18546, 41.12123, 40.90711, 40.95918, 40.98935, 40.94461, 40.95085, 40.66565, 40.68557, 40.2706, 40.30552,
   40.12743, 40.1699, 39.93894, 39.6271, 39.89301, 39.67333, 39.52369, 39.51829, 39.17047, 39.39836, 38.99047, 38.99813, 39.02872, 38.74588, 38.62576, 38.78437,
   38.78877, 38.48755, 38.07662, 38.06878, 38.09341, 37.99929, 38.01387, 38.13144, 37.53876, 37.8858, 37.3372, 37.28235, 37.20566, 37.27549, 37.19764, 37.34633,
   37.1598, 37.03108, 36.76882, 36.71196, 36.32672, 36.44974, 36.41464, 36.04278, 36.09361, 36.1538, 36.32555, 35.89106, 35.74943, 35.83757, 35.82329, 35.32355,
   35.32597, 35.38746, 35.29699, 35.14084, 35.14812, 34.94741, 34.90102, 34.90957, 34.69029, 35.01444, 34.44858, 34.53386, 34.2811, 34.58444, 34.3159, 34.04274,
   33.93236, 33.74464, 34.07404, 33.838, 33.77242, 33.4171, 33.65229, 33.38136, 32.94169, 33.24699, 32.71573, 33.33152, 33.07085, 32.66748, 33.15968, 32.77302,
   32.46326, 32.62177, 32.68705, 32.78472, 32.3343, 32.01098, 32.16642, 32.13725, 31.92029, 32.00965, 31.59947, 31.975, 31.74619, 31.69243, 31.47375, 31.50219,
   31.29036, 31.26173, 31.07846, 30.88582, 31.09766, 30.81949, 30.87477, 30.62939, 30.73638, 30.55275, 30.66695, 30.39747, 30.40167, 30.45631, 30.1482, 30.01073,
   30.02635, 29.87404, 30.11849, 30.0093, 30.0093, 29.75106, 29.62037, 29.71378, 29.48911, 29.11227, 29.40659, 29.07417, 28.95957, 29.21751, 29.0228, 28.908,
   28.75125, 28.69782, 29.01105, 28.92717, 28.58768, 28.41417, 28.49507, 28.324, 28.18519, 28.04416, 27.92076, 27.97415, 27.96195, 28.15795, 27.67538, 27.69847,
   27.87797, 28.01527, 27.54258, 27.76458, 27.53794, 27.38736, 27.47749, 27.49766, 27.2813, 27.26098, 27.17797, 27.02065, 26.94798, 26.66809, 26.85606, 26.88779,
   26.74153, 26.41753, 26.53507, 26.53347, 26.33995, 26.327, 26.27351, 26.21503, 26.13522, 25.95517, 26.07153, 25.85973, 26.08297, 25.81188, 25.76393, 25.41407,
   25.4191, 25.37546, 25.49446, 25.43084, 25.46769, 25.4191, 25.11709, 25.12388, 25.07122, 25.09502, 24.998, 25.07122, 25.02868, 25.0457, 24.39729, 24.78046,
   24.69775, 24.44268, 24.8011, 24.39205, 24.49495, 24.16024, 24.70983, 24.236, 24.16024, 23.97958, 24.12669, 24.08071, 23.74195, 23.73836, 23.6556, 23.77246,
   23.70062, 23.71141, 23.47288, 23.46743, 23.26124, 23.2759, 23.29055, 23.13444, 23.20068, 23.10678, 23.32895, 23.27224, 23.04581, 22.89362, 22.68786, 22.776,
   22.82835, 22.98098, 22.47831, 22.41183, 22.21696, 22.95127, 22.66341, 22.38138, 22.17855, 22.50864, 22.29358, 22.18239, 21.98355, 22.01455, 22.19008, 21.7868,
   21.88832, 21.98743, 21.74763, 21.90779, 21.87078, 21.68481, 21.50913, 21.78289, 21.60405, 21.50913, 21.09485, 21.26193, 21.13523, 21.33, 21.21375, 21.11909,
   21.16547, 20.92848, 21.04022, 20.77719, 20.99559, 20.69495, 20.72994, 20.84275, 20.85706, 20.77514, 20.40869, 20.68053, 20.61859, 20.65165, 20.38779, 20.50871,
   20.55647, 20.38361, 20.15435, 20.25773, 20.0483, 19.99934, 20.34174, 19.95879, 19.90104, 19.9716, 19.80656, 19.65531, 19.79579, 19.73972, 19.73756, 19.52255,
   19.50945, 19.57707, 19.24544, 19.27421, 19.38669, 19.20774, 18.95303, 19.30736, 19.17887, 19.16997, 19.26536, 19.2144, 18.91475, 19.05622, 18.98, 19.05174,
   18.81758, 18.80625, 18.85606, 18.88768, 18.64461, 18.53683, 18.57588, 18.43304, 18.4099, 18.62402, 18.43304, 18.41685, 18.20498, 18.09693, 18.53223, 18.18623,
   18.21902, 18.03794, 18.05448, 18.31471, 17.96453, 18.13459, 17.82635, 17.73765, 17.73765, 17.72082, 17.65333, 17.47371, 17.79045, 17.70878, 17.69915, 17.43952,
   17.57345, 17.50052, 17.38075, 17.339, 17.27248, 17.34637, 17.43463, 17.25026, 17.1362, 17.0614, 17.53459, 17.03139, 17.01135, 16.86031, 16.88053, 16.90577,
   16.99129, 16.83248, 16.78429, 16.51027, 16.53091, 16.34678, 16.72576, 16.21323, 16.49218, 16.73341, 16.56183, 16.62093, 16.55153, 16.31285, 16.43003, 16.61323,
   16.15, 16.29454, 16.26312, 16.5206, 16.19218, 16.05203, 15.89457, 15.88383, 15.9775, 16.08122, 16.05203, 15.92137, 16.05735, 15.85159, 15.54472, 15.63768,
   15.8489, 15.80311, 15.63496, 15.78421, 15.76259, 15.56664, 15.61859, 15.42081, 15.49527, 15.34598, 15.44567, 15.16714, 15.37374, 15.43739, 15.22046, 15.13619,
   15.04863, 15.15027, 15.24564, 15.09389, 15.12774, 15.00607, 14.94344, 14.79723, 14.89772, 14.75684, 14.96055, 14.892, 14.82601, 14.58247, 14.53855, 14.635,
   14.7655, 14.69894, 14.26921, 14.50626, 14.47979, 14.65828, 14.5092, 14.61168, 14.11602, 14.30204, 14.25427, 14.18832, 14.20933, 14.20333, 14.37933, 14.05852,
   13.92445, 13.8107, 14.13413, 14.14317, 14.03424, 13.83538, 13.68979, 13.68979, 13.89994, 13.68667, 14.06155, 13.93363, 13.58663, 13.62736, 13.87845, 13.32685,
   13.73952, 13.51427, 13.56465, 13.50796, 13.50796, 13.18534, 13.49217, 13.25629, 13.40022, 13.45103, 13.14973, 13.33325, 13.23698, 13.01613, 13.14649, 13.40658,
   13.11077, 13.14973, 12.86127, 13.25629, 13.0423, 12.86127, 13.08799, 13.22731, 13.03903, 12.79813, 13.08799, 12.56618, 12.96362, 12.91089, 12.5254, 12.85795,
   12.49132, 12.84468, 12.60683, 12.42974, 12.65071, 12.75475, 12.47083, 12.47425, 12.53221, 12.51178, 12.40571, 12.53561, 12.54581, 12.53901, 12.24313, 12.19428,
   12.04301, 12.27442, 12.21873, 12.23964, 12.18379, 12.33678, 12.34715, 11.84311, 12.02175, 11.98979, 11.99335, 12.05716, 11.88264, 11.61778, 11.83231, 11.72372,
   12.03593, 11.65076, 11.7128, 11.68365, 11.85391, 11.84671, 11.43656, 11.58103, 11.87905, 11.52568, 11.59942, 11.68, 11.72372, 11.49605, 11.46635, 11.45146,
   11.57735, 11.19164, 11.18783, 11.13818, 11.35426, 11.06522, 11.33923, 11.10368, 11.16112, 10.98401, 11.12286, 10.95292, 11.14201, 10.9022, 11.08447, 11.07292,
   11.01115, 10.97236, 10.94903, 10.98401, 11.10752, 10.68896, 10.8591, 10.88655, 10.7803, 10.804, 10.7049, 10.68497, 10.80005, 10.87871, 10.649, 10.64099,
   10.67698, 10.56459, 10.59682, 10.46729, 10.512, 10.57266, 10.4917, 10.55248, 10.57266, 10.85518, 10.62495, 10.37319, 10.32376, 10.55248, 10.33201, 10.47951,
   10.0814, 10.4224, 10.11939, 10.18657, 10.16563, 10.34439, 10.04752, 10.1782, 10.28238, 10.19494, 9.82006, 10.0814, 9.940874, 10.10252, 10.14464, 10.07717,
   9.884966, 9.702137, 9.902202, 10.03478, 9.936585, 9.897896, 9.83741, 9.83741, 9.596099, 9.99647, 9.582762, 9.793978, 9.560492, 9.772189, 9.82006, 9.811374,
   9.828739, 9.520275, 9.78091, 9.502346, 9.511315, 9.506831, 9.412189, 9.609418, 9.533699, 9.334871, 9.339436, 9.266113, 9.266113, 9.542639, 9.03786, 9.261511,
   8.95255, 9.075518, 9.009513, 8.985823, 9.394053, 9.348561, 9.270713, 9.24308, 8.943021, 8.943021, 8.933482, 8.923933, 9.084908, 8.856799, 8.890429, 9.042576,
   8.895223, 8.847166, 8.808532, 8.900014, 8.7843, 8.803691, 8.919154, 8.686693, 8.72098, 9.023698, 8.583012, 8.76, 8.696503, 8.890429, 8.5979, 8.72098,
   8.518196, 8.523199, 8.735633, 8.387061, 8.543183, 8.538192, 8.617711, 8.33096, 8.587978, 8.376889, 8.238334, 8.336076, 8.295062, 8.392143, 8.289921, 8.622657,
   8.361608, 8.139418, 7.996749, 8.191628, 7.867761, 8.233157, 8.012727, 8.336076, 8.186422, 8.289921, 8.279629, 8.274478, 8.149887, 8.170784, 8.097408, 8.102671,
   8.049884, 7.975396, 8.289921, 8.097408, 8.107931, 7.769615, 7.747636, 7.856916, 8.165565, 7.900206, 7.927141, 7.932517, 7.597613, 8.055179, 8.065757, 7.620025,
   7.824292, 7.873178, 7.55259, 7.703489, 7.764126, 7.433106, 7.55259, 7.769615, 7.352372, 7.421627, 7.512973, 7.636791, 7.421627, 7.450293, 7.288311, 7.675769,
   7.597613, 7.427369, 7.340766, 7.478849, 7.529977, 7.659088, 7.495931, 7.529977, 7.329142, 7.200036, 7.541292, 7.311671, 7.270741, 7.194112, 7.241365, 7.134606,
   7.014081, 7.128628, 7.092655, 7.235475, 7.235475, 6.977517, 6.959163, 7.200036, 7.014081, 7.050455, 7.020156, 7.044405, 7.0746, 7.205954, 6.971404, 6.916148,
   6.716, 7.104667, 7.038351, 6.953034, 7.044405, 7.038351, 6.860447, 7.020156, 6.779181, 6.804289, 6.916148, 6.816809, 6.804289, 6.728684, 6.568378, 6.995823,
   6.897631, 6.437259, 7.068572, 6.959163, 6.363992, 6.703292, 6.607206, 6.370688, 6.377376, 6.457097, 6.658624, 6.568378, 6.709649, 6.529318, 6.639389, 6.548877,
   6.772889, 6.503149, 6.716, 6.555384, 6.542364, 6.503149, 6.561884, 6.709649, 6.214869, 6.483452, 6.187369, 6.323671, 6.450491, 6.310173, 6.201134, 6.390732,
   6.289872, 5.948492, 6.138948, 6.430633, 6.665024, 6.303414, 6.019734 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1045,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1045,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1045,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1045);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->SetMinimum(-2915.418);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->SetMaximum(30976.32);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1045);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tagOnly_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__46 = new TH1D("data_mc_ratio__46","",1000,0,2000);
   data_mc_ratio__46->SetBinContent(26,0.9803204);
   data_mc_ratio__46->SetBinContent(27,0.9816454);
   data_mc_ratio__46->SetBinContent(28,0.9926475);
   data_mc_ratio__46->SetBinContent(29,0.9891829);
   data_mc_ratio__46->SetBinContent(30,0.9824495);
   data_mc_ratio__46->SetBinContent(61,1.056624);
   data_mc_ratio__46->SetBinContent(62,1.048635);
   data_mc_ratio__46->SetBinContent(63,1.052583);
   data_mc_ratio__46->SetBinContent(64,1.057445);
   data_mc_ratio__46->SetBinContent(65,1.042419);
   data_mc_ratio__46->SetBinContent(1000,1.21925);
   data_mc_ratio__46->SetBinContent(1001,1.191115);
   data_mc_ratio__46->SetBinError(26,0.006244586);
   data_mc_ratio__46->SetBinError(27,0.00610909);
   data_mc_ratio__46->SetBinError(28,0.00602957);
   data_mc_ratio__46->SetBinError(29,0.005970863);
   data_mc_ratio__46->SetBinError(30,0.005916975);
   data_mc_ratio__46->SetBinError(61,0.007897801);
   data_mc_ratio__46->SetBinError(62,0.007914961);
   data_mc_ratio__46->SetBinError(63,0.007944758);
   data_mc_ratio__46->SetBinError(64,0.008048446);
   data_mc_ratio__46->SetBinError(65,0.008024067);
   data_mc_ratio__46->SetBinError(1000,0.1478558);
   data_mc_ratio__46->SetBinError(1001,0.006740359);
   data_mc_ratio__46->SetMinimum(0.4);
   data_mc_ratio__46->SetMaximum(1.6);
   data_mc_ratio__46->SetEntries(3264.657);
   data_mc_ratio__46->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__46->SetLineColor(ci);
   data_mc_ratio__46->SetLineWidth(2);
   data_mc_ratio__46->SetMarkerStyle(20);
   data_mc_ratio__46->SetMarkerSize(1.2);
   data_mc_ratio__46->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__46->GetXaxis()->SetRange(1,150);
   data_mc_ratio__46->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__46->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__46->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__46->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__46->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__46->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__46->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__46->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__46->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__46->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1046[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1046[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1046[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1046[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.00340809, 0.00333189, 0.003270245, 0.00324407, 0.00322579, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004151809, 0.004176649, 0.004184503, 0.00422936, 0.00424683,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1079347 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1046,Graph_from_mc_statistical_error_fy1046,Graph_from_mc_statistical_error_fex1046,Graph_from_mc_statistical_error_fey1046);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1046 = new TH1F("Graph_Graph_from_mc_statistical_error1046","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1046->SetMinimum(0.8704784);
   Graph_Graph_from_mc_statistical_error1046->SetMaximum(1.129522);
   Graph_Graph_from_mc_statistical_error1046->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1046->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1046->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1046->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1046->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1046);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_16->cd();
   Z_mass_tagOnly_VR_16->Modified();
   Z_mass_tagOnly_VR_16->cd();
   Z_mass_tagOnly_VR_16->SetSelected(Z_mass_tagOnly_VR_16);
}
