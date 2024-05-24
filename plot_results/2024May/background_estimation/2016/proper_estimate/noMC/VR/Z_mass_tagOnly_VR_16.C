#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_16()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_16/Z_mass_tagOnly_VR_16
//=========  (Fri May 24 11:23:53 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-71.51638,315.7258,71454.86);
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
   st->SetMaximum(64302.22);
   
   TH1F *st_stack_27 = new TH1F("st_stack_27","",1000,0,2000);
   st_stack_27->SetMinimum(0.01);
   st_stack_27->SetMaximum(64302.22);
   st_stack_27->SetDirectory(nullptr);
   st_stack_27->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_27->SetLineColor(ci);
   st_stack_27->SetLineWidth(0);
   st_stack_27->GetXaxis()->SetRange(1,150);
   st_stack_27->GetXaxis()->SetLabelFont(42);
   st_stack_27->GetXaxis()->SetTitleOffset(1);
   st_stack_27->GetXaxis()->SetTitleFont(42);
   st_stack_27->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_27->GetYaxis()->SetLabelFont(42);
   st_stack_27->GetYaxis()->SetLabelSize(0.05);
   st_stack_27->GetYaxis()->SetTitleSize(0.057);
   st_stack_27->GetYaxis()->SetTitleOffset(1.2);
   st_stack_27->GetYaxis()->SetTitleFont(42);
   st_stack_27->GetZaxis()->SetLabelFont(42);
   st_stack_27->GetZaxis()->SetTitleOffset(1);
   st_stack_27->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_27);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,25676.61);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,26864.74);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,27852.06);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,28264.07);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,28579.7);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,16130.29);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,15908.18);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,15879.52);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,15531.69);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,15405.2);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,55.13872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,34687.35);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(7,0.01044192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(8,0.01904636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(9,0.01284155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(10,0.02017582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(11,0.01330925);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.8767585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,2.944275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,6.709721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,12.80845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,20.05486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,28.76621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,37.76916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,46.50231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,55.06694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,62.55065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,69.53783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,75.68408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,80.53556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,84.7045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,87.84634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,89.99751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,91.54927);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,92.38038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,92.88746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,93.5118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,92.95516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,92.67096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,92.05926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,91.09163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,90.71312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,89.81446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,88.83069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,88.04718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,87.31287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,86.48396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,85.41425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,84.9429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,84.21177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,83.25577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,82.48725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,81.79871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,80.83207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,80.47905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,79.78818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,78.79005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,77.91574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,77.19725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,76.68696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,76.22676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,75.61085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,74.73569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,74.22769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,73.69767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,73.03628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,72.39803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,72.01007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,71.83839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,71.11168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,70.80069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,70.19162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,69.62372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,68.99368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,68.53638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,68.32161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,67.79397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,67.34278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,66.80295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,66.52375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,65.87845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,65.25821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,65.32928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,64.34946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,64.33413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,63.78651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,63.24969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,62.86359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,62.61531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,61.92946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,61.72597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,61.24253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,60.98008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,60.53191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,60.1829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,59.90241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,59.59789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,59.04762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,58.45629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,58.35472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,57.97338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,57.76686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,57.47061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,57.01366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,56.84578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,56.48237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,56.12868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,56.03339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,55.24865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,55.22496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,54.80395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,54.71093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,54.50831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,54.28962);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,54.03391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,53.66633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,53.21023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,53.17679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,52.85371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,52.77702);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,52.51549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,52.50551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,52.11394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,51.84476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,51.56716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,51.58345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,51.22551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,50.99587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,50.74783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,50.75953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,50.56114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,50.1814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,49.98899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,50.02614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,49.76002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,49.63031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,49.39377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,49.56406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,49.12274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,49.06661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,48.61633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,48.36324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,48.54637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,48.43384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,48.1777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,48.14407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,47.75721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,47.64765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,47.56994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,47.31595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,47.00222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,47.08437);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,46.64727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,46.72504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,46.50708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,46.58785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,46.51679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,46.34672);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,46.05928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,46.11098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,45.85565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,45.75007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,45.6355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,45.51313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,45.32919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,45.10514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,45.02444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,44.88835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,45.19629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,44.50277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,44.802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,44.3822);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,44.3728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,44.3604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,44.28676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,44.20873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,43.86782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,43.82463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,43.60789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,43.53171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,43.44604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,43.25707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,43.15656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,42.94457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,43.2904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,42.95496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,42.53396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,42.71686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,42.47927);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,42.35585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,42.09105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,42.15945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,42.20371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,42.197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,42.10369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,41.87304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,41.89059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,41.40986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,41.51261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,41.31466);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,41.32283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,41.09053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,40.86642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,41.19289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,40.81518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,40.73998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,40.73765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,40.37066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,40.59761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,40.1905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,40.13809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,40.23977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,39.90918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,39.7562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,40.02029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,39.86047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,39.69823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,39.22379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,39.29123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,39.25275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,39.14221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,39.12103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,39.27886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,38.70835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,38.97431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,38.51809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,38.47104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,38.41808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,38.48164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,38.31795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,38.41219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,38.28445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,38.11784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,37.85013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,37.84586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,37.48249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,37.48815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,37.48446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,37.09857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,37.17676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,37.27947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,37.51342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,36.9834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,36.78181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,36.93756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,36.88616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,36.40508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,36.40639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,36.40594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,36.29062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,36.2319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,36.23666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,36.00449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,35.94552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,35.92459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,35.70463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,35.99771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,35.51349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,35.54972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,35.23312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,35.59216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,35.42767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,35.0436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,34.97311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,34.81587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,35.12522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,34.84787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,34.78438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,34.44039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,34.6649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,34.48858);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,34.05869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,34.25283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,33.76187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,34.2504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,34.04219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,33.70428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,34.15876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,33.74733);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,33.36016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,33.62859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,33.62032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,33.75432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,33.30951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,32.93241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,33.14177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,33.03508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,32.9209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,32.93222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,32.56689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,32.94214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,32.64646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,32.56368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,32.41077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,32.46686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,32.27737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,32.33465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,32.04481);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,31.84739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,32.05433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,31.87748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,31.91128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,31.51472);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,31.69623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,31.4485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,31.55835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,31.28876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,31.31312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,31.31032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,31.11896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,30.96464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,30.91913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,30.78919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,30.99614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,30.86377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,30.93735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,30.65431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,30.59081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,30.63129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,30.29886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,30.06252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,30.27208);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,30.00687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,29.84283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,30.08058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,29.86311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,29.78744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,29.60087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,29.5371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,29.87968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,29.82502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,29.39758);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,29.25035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,29.3283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,29.14748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,29.02532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,28.9173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,28.73414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,28.82037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,28.76747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,29.049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,28.53389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,28.5155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,28.67295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,28.86142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,28.45506);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,28.55569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,28.33514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,28.2611);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,28.28578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,28.29503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,28.04793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,28.10196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,27.99452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,27.83959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,27.80024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,27.55528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,27.68502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,27.73149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,27.50415);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,27.16433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,27.35221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,27.24961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,27.08932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,27.05963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,27.10752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,26.953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,27.02382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,26.73363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,26.81049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,26.63439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,26.90897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,26.55768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,26.52383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,26.22926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,26.18799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,26.23549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,26.24854);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,26.1641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,26.19348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,26.28486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,25.79887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,25.90754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,25.80569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,25.88422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,25.76106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,25.8583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,25.77121);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,25.82643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,25.15233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,25.45777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,25.3932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,25.14249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,25.47161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,25.11235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,25.25138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,24.82522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,25.3844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,24.98525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,24.85841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,24.74137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,24.8801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,24.79354);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,24.54171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,24.48668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,24.30813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,24.50947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,24.43785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,24.40809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,24.22687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,24.11174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,23.92213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,23.97077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,24.04564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,23.85376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,23.88235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,23.8336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,24.11946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,23.98227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,23.7524);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,23.42428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,23.33828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,23.42912);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,23.52266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,23.63058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,23.17587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,23.09702);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,22.79869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,23.56389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,23.35051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,23.04697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,22.87282);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,23.15885);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,22.94306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,22.87226);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,22.72349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,22.67175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,22.85136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,22.42812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,22.58941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,22.67052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,22.43214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,22.52342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,22.47342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,22.26657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,22.16933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,22.44948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,22.26018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,22.15579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,21.72075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,21.89868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,21.7683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,22.05666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,21.93242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,21.86217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,21.78144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,21.63363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,21.67124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,21.39673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,21.64321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,21.29156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,21.35156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,21.43237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,21.47608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,21.37187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,21.00478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,21.35497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,21.21805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,21.22561);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,21.04615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,21.15919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,21.08747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,20.95014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,20.73064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,20.81151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,20.66965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,20.61395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,20.93238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,20.5961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,20.47671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,20.53072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,20.41061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,20.30745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,20.3394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,20.35381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,20.31807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,20.07674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,20.09169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,20.0961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,19.83016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,19.87363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,19.97047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,19.77973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,19.54025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,19.85214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,19.76886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,19.68426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,19.7608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,19.75747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,19.51177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,19.55261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,19.61761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,19.66574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,19.40958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,19.30327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,19.45931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,19.42835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,19.16209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,19.03277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,19.12894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,18.93861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,18.98062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,19.19363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,18.97476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,19.02972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,18.75289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,18.66307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,19.06811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,18.76916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,18.72102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,18.63946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,18.55608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,18.82917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,18.52758);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,18.69311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,18.41062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,18.28988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,18.33244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,18.20952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,18.13979);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,18.10741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,18.29577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,18.23935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,18.29695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,17.99423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,18.02752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,17.95528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,17.90729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,17.84277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,17.74444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,17.84254);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,17.88653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,17.80559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,17.63385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,17.53488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,17.98286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,17.62208);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,17.46921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,17.36538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,17.31465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,17.44436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,17.46121);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,17.27883);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,17.23021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,16.95291);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,17.01793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,16.8846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,17.25081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,16.69371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,17.00515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,17.21244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,17.04766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,17.05085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,16.9701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,16.76143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,16.88526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,17.14177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,16.62217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,16.8158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,16.73015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,16.99848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,16.6871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,16.56806);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,16.41085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,16.32965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,16.44977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,16.55549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,16.44728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,16.36075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,16.42094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,16.25956);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,15.93586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,16.12266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,16.25155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,16.20433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,16.08725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,16.30719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,16.24765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,15.99718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,16.01716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,15.88848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,15.91191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,15.81662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,15.8716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,15.59212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,15.77973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,15.8779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,15.67697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,15.69282);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,15.48545);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,15.54187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,15.71199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,15.51673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,15.45794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,15.43232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,15.3623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,15.19626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,15.28843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,15.22603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,15.3602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,15.33814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,15.17482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,14.99859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,14.93263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,14.99684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,15.15657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,15.03619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,14.779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,14.86768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,14.86209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,15.09975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,14.98433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,15.05875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,14.49633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,14.73166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,14.57276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,14.56001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,14.57622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,14.56632);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,14.73043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,14.42845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,14.34511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,14.20697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,14.50654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,14.48897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,14.45338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,14.23845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,14.09591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,14.11043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,14.28097);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,14.09021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,14.37905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,14.31982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,13.98849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,14.03367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,14.27045);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,13.72978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,14.05501);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,13.86975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,13.94391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,13.85937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,13.88755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,13.54634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,13.91486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,13.63347);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,13.84255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,13.82454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,13.49296);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,13.69226);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,13.65006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,13.38997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,13.4824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,13.83112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,13.46233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,13.58483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,13.25096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,13.59047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,13.39706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,13.22207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,13.39059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,13.61344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,13.47796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,13.1706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,13.41129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,12.90536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,13.30724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,13.27883);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,12.90037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,13.19963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,12.77058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,13.11519);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,12.93862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,12.72126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,13.07964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,13.0477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,12.91136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,12.85582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,12.86053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,12.81968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,12.70599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,12.85568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,12.91748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,12.87924);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,12.62341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,12.43358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,12.37255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,12.65789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,12.56205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,12.53019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,12.51723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,12.67774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,12.67197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,12.23023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,12.33408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,12.33075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,12.33389);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,12.3641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,12.22043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,11.90541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,12.16162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,12.0475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,12.33791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,11.98026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,12.03197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,11.96029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,12.22289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,12.13655);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,11.72211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,11.88734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,12.20975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,11.84201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,11.90044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,11.99449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,12.06175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,11.76274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,11.78789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,11.7713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,11.88459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,11.49729);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,11.49888);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,11.45227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,11.67952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,11.32117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,11.6493);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,11.41717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,11.47504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,11.2701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,11.41872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,11.25807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,11.42931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,11.1798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,11.38239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,11.3592);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,11.26084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,11.19436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,11.39219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,11.21285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,11.43539);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,11.02735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,11.16346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,11.2154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,11.06266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,11.09668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,10.98423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,10.98279);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,11.06746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,11.15629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,10.90461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,10.92409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,10.93079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,10.87948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,10.88543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,10.75062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,10.85662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,10.95238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,10.77485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,10.81639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,10.85051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,11.09988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,10.96219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,10.60206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,10.58368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,10.82877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,10.56841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,10.78299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,10.38154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,10.7088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,10.44877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,10.44222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,10.36687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,10.6173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,10.29275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,10.46252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,10.62809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,10.44683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,10.07639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,10.32892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,10.31778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,10.32314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,10.40761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,10.34797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,10.21494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,9.930756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,10.1457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,10.32946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,10.21189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,10.13615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,10.08033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,10.09276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,9.892174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,10.24435);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,9.855881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,9.99972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,9.825029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,10.0288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,10.05425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,10.07247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,10.10786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,9.756456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,10.03347);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,9.766898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,9.741504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,9.749932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,9.663878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,9.823141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,9.733698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,9.614464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,9.567521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,9.553783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,9.541627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,9.726482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,9.240928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,9.518237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,9.297657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,9.324978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,9.279649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,9.188123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,9.601299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,9.604845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,9.546148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,9.471259);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,9.213137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,9.226089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,9.212003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,9.191093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,9.34046);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,9.113478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,9.089241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,9.25133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,9.071597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,9.184904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,9.045096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,9.147119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,9.047818);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,9.069194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,9.172936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,8.871367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,8.935352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,9.337679);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,8.831164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,8.978692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,8.94677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,9.098917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,8.861711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,9.03536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,8.789799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,8.798656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,8.894483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,8.662975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,8.753226);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,8.724614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,8.859399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,8.547764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,8.856006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,8.552008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,8.554177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,8.568974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,8.538571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,8.605403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,8.528726);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,8.821587);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,8.563346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,8.319184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,8.177007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,8.402754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,8.140077);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,8.440055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,8.307595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,8.532667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,8.414002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,8.465485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,8.448058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,8.458804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,8.391332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,8.38297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,8.309598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,8.294987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,8.305866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,8.265117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,8.5261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,8.29868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,8.313955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,7.947094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,7.924444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,8.113117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,8.395413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,8.119829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,8.097844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,8.213726);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,7.809074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,8.215916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,8.211842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,7.832482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,8.016172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,8.0418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,7.781812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,7.924103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,7.973897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,7.652933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,7.761136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,7.951022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,7.54153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,7.644023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,7.711124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,7.852475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,7.610279);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,7.620995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,7.533563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,7.862419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,7.788352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,7.613994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,7.522583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,7.656816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,7.766624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,7.836325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,7.698004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,7.711175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,7.486936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,7.397348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,7.73799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,7.480164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,7.428991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,7.325103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,7.463536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,7.313244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,7.195314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,7.335454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,7.290194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,7.372112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,7.382348);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,7.169739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,7.175801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,7.362381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,7.15799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,7.242868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,7.185086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,7.235663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,7.289671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,7.376619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,7.1341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,7.138434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,6.921252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,7.275669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,7.211921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,7.092423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,7.249046);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,7.212985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,7.03654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,7.159452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,6.949423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,7.025217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,7.069744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,7.004311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,7.00541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,6.918351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,6.745569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,7.139146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,7.09948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,6.589548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,7.23793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,7.137352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,6.594767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,6.87711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,6.79192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,6.585146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,6.595082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,6.654621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,6.796437);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,6.69446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,6.867703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,6.732828);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,6.764915);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,6.739482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,6.930387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,6.669724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,6.880586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,6.694485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,6.71451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,6.592532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,6.754225);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,6.851827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,6.380202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,6.619706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,6.396523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,6.505969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,6.59018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,6.48933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,6.350743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,6.505427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,6.505533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,6.151032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,6.312541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,6.579605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,6.783477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,6.512446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,6.171106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,104.2637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(9271300);

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
   
   TH1D *VH_tagOnly_Z_mass__53 = new TH1D("VH_tagOnly_Z_mass__53","",1000,0,2000);
   VH_tagOnly_Z_mass__53->SetBinContent(26,25802);
   VH_tagOnly_Z_mass__53->SetBinContent(27,27071);
   VH_tagOnly_Z_mass__53->SetBinContent(28,28352);
   VH_tagOnly_Z_mass__53->SetBinContent(29,28730);
   VH_tagOnly_Z_mass__53->SetBinContent(30,28936);
   VH_tagOnly_Z_mass__53->SetBinContent(61,18752);
   VH_tagOnly_Z_mass__53->SetBinContent(62,18348);
   VH_tagOnly_Z_mass__53->SetBinContent(63,18335);
   VH_tagOnly_Z_mass__53->SetBinContent(64,18128);
   VH_tagOnly_Z_mass__53->SetBinContent(65,17722);
   VH_tagOnly_Z_mass__53->SetBinContent(1000,70);
   VH_tagOnly_Z_mass__53->SetBinContent(1001,44080);
   VH_tagOnly_Z_mass__53->SetEntries(3599397);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__53->SetLineColor(ci);
   VH_tagOnly_Z_mass__53->SetLineWidth(2);
   VH_tagOnly_Z_mass__53->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__53->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__53->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__53->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__53->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__53->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__53->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__53->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__53->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__53->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__53->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__53->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1053[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1053[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 25676.61, 26864.74, 27852.06, 28264.07, 28579.7, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16130.29, 15908.18, 15879.52, 15531.69, 15405.2,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 55.13872 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1053[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1053[1000] = { 0, 0, 0, 0, 0, 0, 0.01044192, 0.01904636, 0.01284155, 0.02017582, 0.01330925, 0.8767585, 2.944275, 6.709721, 12.80845, 20.05486, 28.76621,
   37.76916, 46.50231, 55.06694, 62.55065, 69.53783, 75.68408, 80.53556, 84.7045, 87.84634, 89.99751, 91.54927, 92.38038, 92.88746, 93.5118, 92.95516, 92.67096,
   92.05926, 91.09163, 90.71312, 89.81446, 88.83069, 88.04718, 87.31287, 86.48396, 85.41425, 84.9429, 84.21177, 83.25577, 82.48725, 81.79871, 80.83207, 80.47905,
   79.78818, 78.79005, 77.91574, 77.19725, 76.68696, 76.22676, 75.61085, 74.73569, 74.22769, 73.69767, 73.03628, 72.39803, 72.01007, 71.83839, 71.11168, 70.80069,
   70.19162, 69.62372, 68.99368, 68.53638, 68.32161, 67.79397, 67.34278, 66.80295, 66.52375, 65.87845, 65.25821, 65.32928, 64.34946, 64.33413, 63.78651, 63.24969,
   62.86359, 62.61531, 61.92946, 61.72597, 61.24253, 60.98008, 60.53191, 60.1829, 59.90241, 59.59789, 59.04762, 58.45629, 58.35472, 57.97338, 57.76686, 57.47061,
   57.01366, 56.84578, 56.48237, 56.12868, 56.03339, 55.24865, 55.22496, 54.80395, 54.71093, 54.50831, 54.28962, 54.03391, 53.66633, 53.21023, 53.17679, 52.85371,
   52.77702, 52.51549, 52.50551, 52.11394, 51.84476, 51.56716, 51.58345, 51.22551, 50.99587, 50.74783, 50.75953, 50.56114, 50.1814, 49.98899, 50.02614, 49.76002,
   49.63031, 49.39377, 49.56406, 49.12274, 49.06661, 48.61633, 48.36324, 48.54637, 48.43384, 48.1777, 48.14407, 47.75721, 47.64765, 47.56994, 47.31595, 47.00222,
   47.08437, 46.64727, 46.72504, 46.50708, 46.58785, 46.51679, 46.34672, 46.05928, 46.11098, 45.85565, 45.75007, 45.6355, 45.51313, 45.32919, 45.10514, 45.02444,
   44.88835, 45.19629, 44.50277, 44.802, 44.3822, 44.3728, 44.3604, 44.28676, 44.20873, 43.86782, 43.82463, 43.60789, 43.53171, 43.44604, 43.25707, 43.15656,
   42.94457, 43.2904, 42.95496, 42.53396, 42.71686, 42.47927, 42.35585, 42.09105, 42.15945, 42.20371, 42.197, 42.10369, 41.87304, 41.89059, 41.40986, 41.51261,
   41.31466, 41.32283, 41.09053, 40.86642, 41.19289, 40.81518, 40.73998, 40.73765, 40.37066, 40.59761, 40.1905, 40.13809, 40.23977, 39.90918, 39.7562, 40.02029,
   39.86047, 39.69823, 39.22379, 39.29123, 39.25275, 39.14221, 39.12103, 39.27886, 38.70835, 38.97431, 38.51809, 38.47104, 38.41808, 38.48164, 38.31795, 38.41219,
   38.28445, 38.11784, 37.85013, 37.84586, 37.48249, 37.48815, 37.48446, 37.09857, 37.17676, 37.27947, 37.51342, 36.9834, 36.78181, 36.93756, 36.88616, 36.40508,
   36.40639, 36.40594, 36.29062, 36.2319, 36.23666, 36.00449, 35.94552, 35.92459, 35.70463, 35.99771, 35.51349, 35.54972, 35.23312, 35.59216, 35.42767, 35.0436,
   34.97311, 34.81587, 35.12522, 34.84787, 34.78438, 34.44039, 34.6649, 34.48858, 34.05869, 34.25283, 33.76187, 34.2504, 34.04219, 33.70428, 34.15876, 33.74733,
   33.36016, 33.62859, 33.62032, 33.75432, 33.30951, 32.93241, 33.14177, 33.03508, 32.9209, 32.93222, 32.56689, 32.94214, 32.64646, 32.56368, 32.41077, 32.46686,
   32.27737, 32.33465, 32.04481, 31.84739, 32.05433, 31.87748, 31.91128, 31.51472, 31.69623, 31.4485, 31.55835, 31.28876, 31.31312, 31.31032, 31.11896, 30.96464,
   30.91913, 30.78919, 30.99614, 30.86377, 30.93735, 30.65431, 30.59081, 30.63129, 30.29886, 30.06252, 30.27208, 30.00687, 29.84283, 30.08058, 29.86311, 29.78744,
   29.60087, 29.5371, 29.87968, 29.82502, 29.39758, 29.25035, 29.3283, 29.14748, 29.02532, 28.9173, 28.73414, 28.82037, 28.76747, 29.049, 28.53389, 28.5155,
   28.67295, 28.86142, 28.45506, 28.55569, 28.33514, 28.2611, 28.28578, 28.29503, 28.04793, 28.10196, 27.99452, 27.83959, 27.80024, 27.55528, 27.68502, 27.73149,
   27.50415, 27.16433, 27.35221, 27.24961, 27.08932, 27.05963, 27.10752, 26.953, 27.02382, 26.73363, 26.81049, 26.63439, 26.90897, 26.55768, 26.52383, 26.22926,
   26.18799, 26.23549, 26.24854, 26.1641, 26.19348, 26.28486, 25.79887, 25.90754, 25.80569, 25.88422, 25.76106, 25.8583, 25.77121, 25.82643, 25.15233, 25.45777,
   25.3932, 25.14249, 25.47161, 25.11235, 25.25138, 24.82522, 25.3844, 24.98525, 24.85841, 24.74137, 24.8801, 24.79354, 24.54171, 24.48668, 24.30813, 24.50947,
   24.43785, 24.40809, 24.22687, 24.11174, 23.92213, 23.97077, 24.04564, 23.85376, 23.88235, 23.8336, 24.11946, 23.98227, 23.7524, 23.42428, 23.33828, 23.42912,
   23.52266, 23.63058, 23.17587, 23.09702, 22.79869, 23.56389, 23.35051, 23.04697, 22.87282, 23.15885, 22.94306, 22.87226, 22.72349, 22.67175, 22.85136, 22.42812,
   22.58941, 22.67052, 22.43214, 22.52342, 22.47342, 22.26657, 22.16933, 22.44948, 22.26018, 22.15579, 21.72075, 21.89868, 21.7683, 22.05666, 21.93242, 21.86217,
   21.78144, 21.63363, 21.67124, 21.39673, 21.64321, 21.29156, 21.35156, 21.43237, 21.47608, 21.37187, 21.00478, 21.35497, 21.21805, 21.22561, 21.04615, 21.15919,
   21.08747, 20.95014, 20.73064, 20.81151, 20.66965, 20.61395, 20.93238, 20.5961, 20.47671, 20.53072, 20.41061, 20.30745, 20.3394, 20.35381, 20.31807, 20.07674,
   20.09169, 20.0961, 19.83016, 19.87363, 19.97047, 19.77973, 19.54025, 19.85214, 19.76886, 19.68426, 19.7608, 19.75747, 19.51177, 19.55261, 19.61761, 19.66574,
   19.40958, 19.30327, 19.45931, 19.42835, 19.16209, 19.03277, 19.12894, 18.93861, 18.98062, 19.19363, 18.97476, 19.02972, 18.75289, 18.66307, 19.06811, 18.76916,
   18.72102, 18.63946, 18.55608, 18.82917, 18.52758, 18.69311, 18.41062, 18.28988, 18.33244, 18.20952, 18.13979, 18.10741, 18.29577, 18.23935, 18.29695, 17.99423,
   18.02752, 17.95528, 17.90729, 17.84277, 17.74444, 17.84254, 17.88653, 17.80559, 17.63385, 17.53488, 17.98286, 17.62208, 17.46921, 17.36538, 17.31465, 17.44436,
   17.46121, 17.27883, 17.23021, 16.95291, 17.01793, 16.8846, 17.25081, 16.69371, 17.00515, 17.21244, 17.04766, 17.05085, 16.9701, 16.76143, 16.88526, 17.14177,
   16.62217, 16.8158, 16.73015, 16.99848, 16.6871, 16.56806, 16.41085, 16.32965, 16.44977, 16.55549, 16.44728, 16.36075, 16.42094, 16.25956, 15.93586, 16.12266,
   16.25155, 16.20433, 16.08725, 16.30719, 16.24765, 15.99718, 16.01716, 15.88848, 15.91191, 15.81662, 15.8716, 15.59212, 15.77973, 15.8779, 15.67697, 15.69282,
   15.48545, 15.54187, 15.71199, 15.51673, 15.45794, 15.43232, 15.3623, 15.19626, 15.28843, 15.22603, 15.3602, 15.33814, 15.17482, 14.99859, 14.93263, 14.99684,
   15.15657, 15.03619, 14.779, 14.86768, 14.86209, 15.09975, 14.98433, 15.05875, 14.49633, 14.73166, 14.57276, 14.56001, 14.57622, 14.56632, 14.73043, 14.42845,
   14.34511, 14.20697, 14.50654, 14.48897, 14.45338, 14.23845, 14.09591, 14.11043, 14.28097, 14.09021, 14.37905, 14.31982, 13.98849, 14.03367, 14.27045, 13.72978,
   14.05501, 13.86975, 13.94391, 13.85937, 13.88755, 13.54634, 13.91486, 13.63347, 13.84255, 13.82454, 13.49296, 13.69226, 13.65006, 13.38997, 13.4824, 13.83112,
   13.46233, 13.58483, 13.25096, 13.59047, 13.39706, 13.22207, 13.39059, 13.61344, 13.47796, 13.1706, 13.41129, 12.90536, 13.30724, 13.27883, 12.90037, 13.19963,
   12.77058, 13.11519, 12.93862, 12.72126, 13.07964, 13.0477, 12.91136, 12.85582, 12.86053, 12.81968, 12.70599, 12.85568, 12.91748, 12.87924, 12.62341, 12.43358,
   12.37255, 12.65789, 12.56205, 12.53019, 12.51723, 12.67774, 12.67197, 12.23023, 12.33408, 12.33075, 12.33389, 12.3641, 12.22043, 11.90541, 12.16162, 12.0475,
   12.33791, 11.98026, 12.03197, 11.96029, 12.22289, 12.13655, 11.72211, 11.88734, 12.20975, 11.84201, 11.90044, 11.99449, 12.06175, 11.76274, 11.78789, 11.7713,
   11.88459, 11.49729, 11.49888, 11.45227, 11.67952, 11.32117, 11.6493, 11.41717, 11.47504, 11.2701, 11.41872, 11.25807, 11.42931, 11.1798, 11.38239, 11.3592,
   11.26084, 11.19436, 11.39219, 11.21285, 11.43539, 11.02735, 11.16346, 11.2154, 11.06266, 11.09668, 10.98423, 10.98279, 11.06746, 11.15629, 10.90461, 10.92409,
   10.93079, 10.87948, 10.88543, 10.75062, 10.85662, 10.95238, 10.77485, 10.81639, 10.85051, 11.09988, 10.96219, 10.60206, 10.58368, 10.82877, 10.56841, 10.78299,
   10.38154, 10.7088, 10.44877, 10.44222, 10.36687, 10.6173, 10.29275, 10.46252, 10.62809, 10.44683, 10.07639, 10.32892, 10.31778, 10.32314, 10.40761, 10.34797,
   10.21494, 9.930756, 10.1457, 10.32946, 10.21189, 10.13615, 10.08033, 10.09276, 9.892174, 10.24435, 9.855881, 9.99972, 9.825029, 10.0288, 10.05425, 10.07247,
   10.10786, 9.756456, 10.03347, 9.766898, 9.741504, 9.749932, 9.663878, 9.823141, 9.733698, 9.614464, 9.567521, 9.553783, 9.541627, 9.726482, 9.240928, 9.518237,
   9.297657, 9.324978, 9.279649, 9.188123, 9.601299, 9.604845, 9.546148, 9.471259, 9.213137, 9.226089, 9.212003, 9.191093, 9.34046, 9.113478, 9.089241, 9.25133,
   9.071597, 9.184904, 9.045096, 9.147119, 9.047818, 9.069194, 9.172936, 8.871367, 8.935352, 9.337679, 8.831164, 8.978692, 8.94677, 9.098917, 8.861711, 9.03536,
   8.789799, 8.798656, 8.894483, 8.662975, 8.753226, 8.724614, 8.859399, 8.547764, 8.856006, 8.552008, 8.554177, 8.568974, 8.538571, 8.605403, 8.528726, 8.821587,
   8.563346, 8.319184, 8.177007, 8.402754, 8.140077, 8.440055, 8.307595, 8.532667, 8.414002, 8.465485, 8.448058, 8.458804, 8.391332, 8.38297, 8.309598, 8.294987,
   8.305866, 8.265117, 8.5261, 8.29868, 8.313955, 7.947094, 7.924444, 8.113117, 8.395413, 8.119829, 8.097844, 8.213726, 7.809074, 8.215916, 8.211842, 7.832482,
   8.016172, 8.0418, 7.781812, 7.924103, 7.973897, 7.652933, 7.761136, 7.951022, 7.54153, 7.644023, 7.711124, 7.852475, 7.610279, 7.620995, 7.533563, 7.862419,
   7.788352, 7.613994, 7.522583, 7.656816, 7.766624, 7.836325, 7.698004, 7.711175, 7.486936, 7.397348, 7.73799, 7.480164, 7.428991, 7.325103, 7.463536, 7.313244,
   7.195314, 7.335454, 7.290194, 7.372112, 7.382348, 7.169739, 7.175801, 7.362381, 7.15799, 7.242868, 7.185086, 7.235663, 7.289671, 7.376619, 7.1341, 7.138434,
   6.921252, 7.275669, 7.211921, 7.092423, 7.249046, 7.212985, 7.03654, 7.159452, 6.949423, 7.025217, 7.069744, 7.004311, 7.00541, 6.918351, 6.745569, 7.139146,
   7.09948, 6.589548, 7.23793, 7.137352, 6.594767, 6.87711, 6.79192, 6.585146, 6.595082, 6.654621, 6.796437, 6.69446, 6.867703, 6.732828, 6.764915, 6.739482,
   6.930387, 6.669724, 6.880586, 6.694485, 6.71451, 6.592532, 6.754225, 6.851827, 6.380202, 6.619706, 6.396523, 6.505969, 6.59018, 6.48933, 6.350743, 6.505427,
   6.505533, 6.151032, 6.312541, 6.579605, 6.783477, 6.512446, 6.171106 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1053,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1053,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1053,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1053);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->SetMinimum(-2970.122);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->SetMaximum(31549.2);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1053);
   
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
   
   TH1D *data_mc_ratio__54 = new TH1D("data_mc_ratio__54","",1000,0,2000);
   data_mc_ratio__54->SetBinContent(26,1.004883);
   data_mc_ratio__54->SetBinContent(27,1.007678);
   data_mc_ratio__54->SetBinContent(28,1.01795);
   data_mc_ratio__54->SetBinContent(29,1.016485);
   data_mc_ratio__54->SetBinContent(30,1.012467);
   data_mc_ratio__54->SetBinContent(61,1.162534);
   data_mc_ratio__54->SetBinContent(62,1.153369);
   data_mc_ratio__54->SetBinContent(63,1.154632);
   data_mc_ratio__54->SetBinContent(64,1.167162);
   data_mc_ratio__54->SetBinContent(65,1.150391);
   data_mc_ratio__54->SetBinContent(1000,1.269525);
   data_mc_ratio__54->SetBinContent(1001,1.27078);
   data_mc_ratio__54->SetBinError(26,0.006255889);
   data_mc_ratio__54->SetBinError(27,0.006124484);
   data_mc_ratio__54->SetBinError(28,0.006045533);
   data_mc_ratio__54->SetBinError(29,0.005996986);
   data_mc_ratio__54->SetBinError(30,0.005951982);
   data_mc_ratio__54->SetBinError(61,0.008489492);
   data_mc_ratio__54->SetBinError(62,0.008514787);
   data_mc_ratio__54->SetBinError(63,0.008527133);
   data_mc_ratio__54->SetBinError(64,0.008668743);
   data_mc_ratio__54->SetBinError(65,0.008641499);
   data_mc_ratio__54->SetBinError(1000,0.1517373);
   data_mc_ratio__54->SetBinError(1001,0.007157207);
   data_mc_ratio__54->SetMinimum(0.4);
   data_mc_ratio__54->SetMaximum(1.6);
   data_mc_ratio__54->SetEntries(3340.044);
   data_mc_ratio__54->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__54->SetLineColor(ci);
   data_mc_ratio__54->SetLineWidth(2);
   data_mc_ratio__54->SetMarkerStyle(20);
   data_mc_ratio__54->SetMarkerSize(1.2);
   data_mc_ratio__54->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__54->GetXaxis()->SetRange(1,150);
   data_mc_ratio__54->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__54->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__54->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__54->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__54->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__54->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__54->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__54->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__54->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__54->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__54->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__54->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__54->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__54->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1054[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1054[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1054[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1054[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.003421259, 0.003350024, 0.003286984, 0.003268474, 0.00325012, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004488329, 0.004526605, 0.004523964, 0.004578489, 0.004595896,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1119197 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1054,Graph_from_mc_statistical_error_fy1054,Graph_from_mc_statistical_error_fex1054,Graph_from_mc_statistical_error_fey1054);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1054 = new TH1F("Graph_Graph_from_mc_statistical_error1054","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1054->SetMinimum(0.8656964);
   Graph_Graph_from_mc_statistical_error1054->SetMaximum(1.134304);
   Graph_Graph_from_mc_statistical_error1054->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1054->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1054->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1054->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1054->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1054);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_16->cd();
   Z_mass_tagOnly_VR_16->Modified();
   Z_mass_tagOnly_VR_16->cd();
   Z_mass_tagOnly_VR_16->SetSelected(Z_mass_tagOnly_VR_16);
}
