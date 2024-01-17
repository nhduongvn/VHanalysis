#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_VR_18()
{
//=========Macro generated from canvas: Z_mass_tagOnly_VR_18/Z_mass_tagOnly_VR_18
//=========  (Sat Dec  9 13:50:13 2023) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_VR_18 = new TCanvas("Z_mass_tagOnly_VR_18", "Z_mass_tagOnly_VR_18",0,0,600,600);
   Z_mass_tagOnly_VR_18->SetHighLightColor(2);
   Z_mass_tagOnly_VR_18->Range(0,0,1,1);
   Z_mass_tagOnly_VR_18->SetFillColor(0);
   Z_mass_tagOnly_VR_18->SetFillStyle(4000);
   Z_mass_tagOnly_VR_18->SetBorderMode(0);
   Z_mass_tagOnly_VR_18->SetBorderSize(2);
   Z_mass_tagOnly_VR_18->SetFrameFillStyle(1000);
   Z_mass_tagOnly_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-53.9736,315.7258,53929.62);
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
   st->SetMaximum(48531.26);
   
   TH1F *st_stack_37 = new TH1F("st_stack_37","",1000,0,2000);
   st_stack_37->SetMinimum(0.01);
   st_stack_37->SetMaximum(48531.26);
   st_stack_37->SetDirectory(nullptr);
   st_stack_37->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_37->SetLineColor(ci);
   st_stack_37->SetLineWidth(0);
   st_stack_37->GetXaxis()->SetRange(1,150);
   st_stack_37->GetXaxis()->SetLabelFont(42);
   st_stack_37->GetXaxis()->SetTitleOffset(1);
   st_stack_37->GetXaxis()->SetTitleFont(42);
   st_stack_37->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_37->GetYaxis()->SetLabelFont(42);
   st_stack_37->GetYaxis()->SetLabelSize(0.05);
   st_stack_37->GetYaxis()->SetTitleSize(0.057);
   st_stack_37->GetYaxis()->SetTitleOffset(1.2);
   st_stack_37->GetYaxis()->SetTitleFont(42);
   st_stack_37->GetZaxis()->SetLabelFont(42);
   st_stack_37->GetZaxis()->SetTitleOffset(1);
   st_stack_37->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_37);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(26,16755.02);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(27,18317.34);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(28,19701.66);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(29,20738.44);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(30,21839.07);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(61,15470.52);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(62,15259.49);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(63,15089.2);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(64,14860.56);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(65,14680.37);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,87.713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,42445.02);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.5190164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,1.599716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,3.98664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,9.226237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,15.14959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,21.94034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,28.60717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,36.58237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,43.9175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,51.11718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,57.56287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,63.8696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,69.28626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,73.99579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,78.41614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,81.99063);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,85.0324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,87.24108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,89.52619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,90.60441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,91.77862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,92.6615);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,93.08932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,92.93147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,92.74214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,92.46798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,92.01313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,91.8571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,90.98936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,90.49806);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,89.28666);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,88.76242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,88.06394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,87.2349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,86.52954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,85.32178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,84.87862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,84.28944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,83.07911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,82.48197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,81.3913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,80.65571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,79.89987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,78.73155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,78.72385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,77.79361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,77.15384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,76.36775);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,76.1682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,75.35038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,74.83471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,74.41598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,73.85003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,73.40092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,72.73733);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,72.08911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,71.73794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,71.31425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,70.81959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,70.03164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,69.93445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,69.39115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,69.04771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,68.5367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,68.29751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,67.93367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,66.94104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,66.8736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,66.44626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,66.33975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,65.82613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,64.76276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,65.07811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,64.23339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,63.7197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,63.65943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,63.05996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,62.88457);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,62.62379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,62.12823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,61.89039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,61.2901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,61.07215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,60.67721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,60.16786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,59.46419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,59.1747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,58.9889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,58.97748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,58.67755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,58.0011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,57.89069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,57.16253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,57.21788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,56.89802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,56.7012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,55.81538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,55.79366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,55.49836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,55.33552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,55.25514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,54.50413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,54.4151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,53.71882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,53.30604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,53.94151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,53.49772);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,52.67952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,52.64244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,52.40652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,52.28816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,51.86659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,52.09849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,51.69101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,51.5475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,51.12772);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,51.15143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,50.78012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,50.92447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,50.19052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,50.03194);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,49.81341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,49.77824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,49.19169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,49.29973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,48.86753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,49.1643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,49.13142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,48.46207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,48.62992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,48.18334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,48.0742);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,47.97042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,47.93391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,47.62099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,47.32166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,47.32166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,46.9057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,47.33731);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,47.12057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,46.61911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,46.33802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,46.41498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,46.15745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,46.19392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,45.64394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,45.89408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,45.90728);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,45.47839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,45.63214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,45.32116);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,45.39836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,44.62937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,45.09025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,45.00504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,44.86866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,44.25965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,44.49941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,44.53421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,44.04);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,43.9742);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,43.86686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,43.78388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,43.9175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,43.61128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,43.52781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,43.37747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,43.24998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,43.0893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,43.20168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,42.97349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,42.92959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,42.86836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,42.88564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,42.95468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,42.63365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,42.2066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,42.39922);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,42.58782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,42.09156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,42.48332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,42.02591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,42.37857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,41.7526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,41.90716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,41.70257);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,41.63631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,41.36206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,41.3474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,41.5586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,41.37671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,41.58938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,41.39461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,40.93983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,40.75022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,40.70061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,40.97108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,40.238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,40.63935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,40.2982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,40.5049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,40.39335);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,40.10556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,40.19949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,40.06692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,40.26978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,39.62241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,39.69542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,40.02488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,40.03834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,39.75306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,39.38715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,39.44012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,39.46743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,39.5901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,39.39741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,39.23469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,39.10402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,39.06956);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,38.77542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,39.07473);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,38.79973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,38.91412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,38.39494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,38.40897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,38.27548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,38.45628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,38.44577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,37.98051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,38.50353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,38.28779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,38.05668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,37.98583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,37.78674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,37.93616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,37.68681);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,37.92018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,37.70289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,37.28799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,37.3908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,37.24643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,36.9633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,37.2193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,37.44299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,36.76966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,37.06518);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,36.93231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,36.95601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,36.70183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,37.08153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,36.90677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,36.4699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,36.53816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,36.51973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,36.21976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,36.26993);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,36.0651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,36.14717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,36.08937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,35.95851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,36.02774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,35.89665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,35.64059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,35.37697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,35.76132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,35.07683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,35.47582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,35.50049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,35.44924);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,35.38459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,35.40171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,35.14588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,35.19375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,34.77797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,35.03841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,34.72953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,34.82055);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,34.83988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,34.45698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,34.41004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,34.59936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,34.52337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,34.52142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,34.16256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,34.29438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,34.30812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,34.10337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,34.02824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,34.10929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,34.07373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,33.74006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,33.68212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,33.61407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,33.59203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,33.61207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,33.49365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,33.41514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,33.397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,33.40708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,33.52782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,33.36068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,33.04427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,32.88492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,33.01368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,32.88697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,33.26972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,32.91358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,32.51007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,32.47276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,32.85214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,32.40425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,32.43749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,32.40217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,32.67537);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,32.14761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,31.988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,31.88468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,32.19785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,31.95219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,32.03639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,31.80643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,31.85932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,31.42515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,31.63872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,31.42943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,31.62382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,31.35864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,31.42943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,31.07604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,31.2403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,31.26616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,31.06737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,31.17556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,31.09987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,31.06737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,30.77553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,30.80177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,30.48973);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,30.712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,30.64175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,30.73611);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,30.37909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,30.39239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,30.20568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,30.25692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,30.39682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,30.25024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,29.90318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,30.05369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,30.18561);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,29.7768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,29.80393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,29.62261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,30.00211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,29.49274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,29.75191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,29.33705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,29.50643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,29.46075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,29.16207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,29.52469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,29.36688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,29.45847);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,29.0765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,28.89994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,28.67301);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,29.02318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,28.72933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,28.60953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,28.64717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,28.68475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,28.68945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,28.47504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,28.41111);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,28.49159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,28.13959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,28.03169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,28.09169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,28.00765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,28.65657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,27.71275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,28.11565);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,28.03649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,27.73219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,27.50787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,27.91131);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,27.63001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,27.71761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,27.09842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,27.51276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,27.01379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,27.28911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,27.30638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,27.25948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,27.1183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,27.00382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,27.09345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,26.89637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,26.8638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,26.99135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,26.7054);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,26.68522);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,26.79603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,26.49272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,26.81613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,26.65491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,26.32697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,26.72052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,26.2732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,26.50035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,26.44947);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,26.17304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,26.53336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,25.90147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,25.9949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,26.02597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,25.90926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,25.95341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,25.56386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,26.12153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,25.67427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,25.09325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,25.63752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,25.36817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,25.65065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,25.32566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,25.07714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,25.27242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,25.14954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,25.06102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,24.76366);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,24.88845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,24.83427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,25.02606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,24.86408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,24.8695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,24.9479);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,24.80442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,25.06102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,24.78813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,24.3025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,24.79084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,24.47095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,24.17747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,24.25812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,24.26644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,24.13287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,24.19696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,24.09936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,24.00977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,23.88603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,24.10494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,24.1217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,23.71343);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,23.8013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,23.45644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,23.28643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,23.91139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,23.46505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,23.60811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,23.21402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,23.66225);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,23.43059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,23.19661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,23.21982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,23.1879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,23.28354);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,22.97197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,22.76879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,22.83082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,23.14138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,22.91033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,22.65909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,22.90445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,22.63233);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,22.49204);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,22.59063);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,22.6234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,22.30261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,22.70066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,22.53392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,22.36894);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,22.37195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,22.2724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,22.51598);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,21.9342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,21.80487);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,21.98327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,22.16024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,22.09633);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,21.8203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,21.98327);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,21.8881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,21.94341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,21.80178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,21.58135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,21.67787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,21.56886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,21.39015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,21.06976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,21.7461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,21.27967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,21.653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,21.3618);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,21.19405);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,21.1718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,21.29865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,21.02497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,21.25117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,21.22898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,20.87065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,20.75417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,20.552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,20.49622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,20.89323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,20.79631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,20.69893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,20.72169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,20.81249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,20.39081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,20.64028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,20.59455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,20.72819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,20.26824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,20.54217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,20.30144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,20.21167);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,20.5782);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,20.29148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,20.51592);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,19.90616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,19.97033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,20.08801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,20.09136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,19.75674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,20.44358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,19.73969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,19.86552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,19.86213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,19.8214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,19.59588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,19.64393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,19.73286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,19.34337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,19.44061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,19.69871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,19.33989);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,19.15093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,19.25963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,19.45792);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,19.05575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,19.03453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,19.25264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,19.13334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,19.02745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,18.92454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,19.21412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,18.95654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,19.03453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,18.8568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,18.90673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,18.7098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,18.7206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,18.41594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,18.6918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,18.5035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,18.46342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,18.54349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,18.51441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,18.33899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,18.16928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,18.7673);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,18.48893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,18.59426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,18.08011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,18.1804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,18.10616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,17.91922);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,18.20261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,17.76068);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,18.10616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,17.76447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,18.10244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,17.63129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,17.75688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,18.02041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,17.74171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,17.658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,17.79477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,17.50094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,17.59688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,17.71132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,17.46241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,17.26461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,17.14719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,17.40834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,17.28021);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,17.49324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,17.29189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,17.67706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,17.05662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,17.20991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,16.87801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,17.46627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,17.36185);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,16.9735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,17.2529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,16.96556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,16.57605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,16.86604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,16.70556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,16.60447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,16.55573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,17.08423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,16.78599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,16.68135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,16.76993);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,16.43324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,16.92582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,16.4946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,16.63688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,16.57605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,16.61663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,16.1146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,16.43324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,16.173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,16.54759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,16.37988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,16.53945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,16.11878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,16.09369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,16.18549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,16.29331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,16.34696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,16.26849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,15.9761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,15.98874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,15.95923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,15.82362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,16.0266);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,15.84913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,15.96766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,15.74255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,15.72971);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,15.91274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,15.88733);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,15.82362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,15.33076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,15.43147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,15.56617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,15.47505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,15.64815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,15.55318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,15.50548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,15.39651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,15.29998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,15.34832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,15.28677);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,15.37901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,15.16736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,15.25149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,14.9932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,15.40526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,15.09169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,14.86237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,14.9887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,14.94821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,14.83061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,14.93469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,14.93018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,14.72123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,14.9887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,15.10953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,14.75322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,14.48604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,15.11844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,14.78969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,14.84423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,14.79879);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,14.70292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,14.82607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,14.62485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,14.83061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,14.78514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,14.62024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,14.64785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,14.74865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,14.35997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,14.68917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,14.70292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,14.55098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,14.39276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,14.3459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,14.03265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,14.05663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,14.3459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,14.20911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,14.18064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,14.114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,13.97494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,13.60872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,13.96048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,13.85881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,13.87338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,13.45444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,14.20911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,13.98939);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,13.82475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,14.07099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,13.56908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,13.94117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,13.59387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,13.77595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,13.59882);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,13.75149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,13.4043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,13.77106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,13.84422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,13.03238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,13.41936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,13.52434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,13.63838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,13.54424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,13.28317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,13.55418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,13.67783);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,13.24763);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,13.36404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,13.2018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,13.60377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,13.56411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,12.96502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,12.91819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,13.28317);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,13.23237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,12.9234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,13.00651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,12.95983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,13.16605);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,12.95463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,12.83451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,13.01686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,12.86595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,12.79246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,12.8921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,13.33377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,12.52648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,12.72384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,13.00651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,12.75556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,12.77139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,12.6442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,12.54797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,12.79246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,12.58013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,12.50496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,12.53723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,12.30955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,12.72913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,12.53185);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,12.33142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,12.45099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,12.37503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,12.49418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,12.58013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,12.21619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,12.27668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,12.32596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,12.14986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,12.58548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,12.04968);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,12.22722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,12.36414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,12.16648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,11.93173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,11.92609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,12.00488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,12.1554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,12.07201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,12.08874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,11.83539);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,12.0273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,11.94302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,11.71529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,11.69228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,12.0217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,11.86381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,11.49478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,11.47719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,11.81831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,11.81261);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,11.58232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,11.55322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,11.44193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,11.76692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,11.44781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,11.70954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,11.57069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,11.62295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,11.50063);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,11.17995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,11.60556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,11.37108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,11.26397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,11.30574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,11.61716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,11.28189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,11.44193);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,11.35923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,11.64032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,10.8746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,11.071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,11.28189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,11.30574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,11.05883);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,10.96096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,11.02223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,11.41836);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,11.13166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,11.13166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,11.13771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,11.08923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,11.43015);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,10.6998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,10.75629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,10.82494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,10.86841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,10.86841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,10.55404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,10.67459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,10.85601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,10.90552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,10.32177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,10.59226);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,10.75629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,10.49646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,10.56042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,10.74376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,10.41272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,10.49646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,10.74376);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,10.18384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,10.91169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,10.82494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,10.61131);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,10.24318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,10.34133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,10.36734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,10.5668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,10.52209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,10.71866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,10.93019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,10.34784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,10.42564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,10.34784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,10.2891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,10.54127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,10.54127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,9.936148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,10.05071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,10.50287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,10.24975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,9.95646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,10.13744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,9.758336);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,10.03059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,9.936148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,9.922583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,10.05741);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,9.868138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,10.0641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,10.21025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,9.881777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,9.751432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,9.73761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,9.792781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,9.702969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,10.19705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,9.929368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,10.01715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,9.633313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,9.990223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,9.661236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,9.847643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,9.88859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,9.291698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,9.949694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,9.335083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,9.269929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,9.682125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,9.53494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,9.682125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,9.56315);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,9.723769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,9.421255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,9.306182);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,9.327867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,9.619321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,9.277191);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,9.619321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,9.612318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,9.53494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,9.342295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,9.027006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,9.123475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,9.605309);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,9.584253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,9.598295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,9.371085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,9.492468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,9.233533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,8.982133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,9.189668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,8.906841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,9.320644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,9.204313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,9.130854);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,9.027006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,8.677047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,8.7003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,9.071658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,9.492468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,8.967125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,8.669283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,8.661511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,9.086493);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,8.914399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,8.754316);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,8.952092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,8.677047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,8.692556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,8.937034);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,8.853756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,8.708037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,8.846147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,8.638154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,8.738917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,8.59125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,8.7003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,9.027006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,8.884129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,8.606913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,8.328555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,8.336637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,8.899277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,8.731207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,8.708037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,8.417031);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,8.023798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,8.456941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,8.567701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,8.622548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,8.198159);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,8.040567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,8.559837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,8.336637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,8.328555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,8.312368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,8.677047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,8.288027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,8.360837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,8.653732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,8.360837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,8.279897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,8.336637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,8.173478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,8.140454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,8.23913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,8.148722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,8.006995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,8.392994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,8.214572);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,8.107295);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,8.148722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,8.023798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,8.320465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,8.156983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,8.165235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,7.724456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,8.032187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,7.854143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,7.922441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,7.862713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,8.090665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,7.871273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,8.247299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,7.767926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,7.939424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,7.896899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,124.8091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(8220365);

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
   
   TH1D *VH_tagOnly_Z_mass__73 = new TH1D("VH_tagOnly_Z_mass__73","",1000,0,2000);
   VH_tagOnly_Z_mass__73->SetBinContent(26,16560);
   VH_tagOnly_Z_mass__73->SetBinContent(27,17741);
   VH_tagOnly_Z_mass__73->SetBinContent(28,18880);
   VH_tagOnly_Z_mass__73->SetBinContent(29,19870);
   VH_tagOnly_Z_mass__73->SetBinContent(30,20786);
   VH_tagOnly_Z_mass__73->SetBinContent(61,15160);
   VH_tagOnly_Z_mass__73->SetBinContent(62,14903);
   VH_tagOnly_Z_mass__73->SetBinContent(63,14708);
   VH_tagOnly_Z_mass__73->SetBinContent(64,14606);
   VH_tagOnly_Z_mass__73->SetBinContent(65,14488);
   VH_tagOnly_Z_mass__73->SetBinContent(1000,84);
   VH_tagOnly_Z_mass__73->SetBinContent(1001,42563);
   VH_tagOnly_Z_mass__73->SetEntries(2925871);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__73->SetLineColor(ci);
   VH_tagOnly_Z_mass__73->SetLineWidth(2);
   VH_tagOnly_Z_mass__73->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__73->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__73->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__73->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__73->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__73->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__73->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__73->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__73->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__73->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__73->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__73->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1073[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1073[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 16755.02, 18317.34, 19701.66, 20738.44, 21839.07, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15470.52, 15259.49, 15089.2, 14860.56, 14680.37,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 87.713 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1073[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1073[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5190164, 1.599716, 3.98664, 9.226237, 15.14959, 21.94034,
   28.60717, 36.58237, 43.9175, 51.11718, 57.56287, 63.8696, 69.28626, 73.99579, 78.41614, 81.99063, 85.0324, 87.24108, 89.52619, 90.60441, 91.77862, 92.6615,
   93.08932, 92.93147, 92.74214, 92.46798, 92.01313, 91.8571, 90.98936, 90.49806, 89.28666, 88.76242, 88.06394, 87.2349, 86.52954, 85.32178, 84.87862, 84.28944,
   83.07911, 82.48197, 81.3913, 80.65571, 79.89987, 78.73155, 78.72385, 77.79361, 77.15384, 76.36775, 76.1682, 75.35038, 74.83471, 74.41598, 73.85003, 73.40092,
   72.73733, 72.08911, 71.73794, 71.31425, 70.81959, 70.03164, 69.93445, 69.39115, 69.04771, 68.5367, 68.29751, 67.93367, 66.94104, 66.8736, 66.44626, 66.33975,
   65.82613, 64.76276, 65.07811, 64.23339, 63.7197, 63.65943, 63.05996, 62.88457, 62.62379, 62.12823, 61.89039, 61.2901, 61.07215, 60.67721, 60.16786, 59.46419,
   59.1747, 58.9889, 58.97748, 58.67755, 58.0011, 57.89069, 57.16253, 57.21788, 56.89802, 56.7012, 55.81538, 55.79366, 55.49836, 55.33552, 55.25514, 54.50413,
   54.4151, 53.71882, 53.30604, 53.94151, 53.49772, 52.67952, 52.64244, 52.40652, 52.28816, 51.86659, 52.09849, 51.69101, 51.5475, 51.12772, 51.15143, 50.78012,
   50.92447, 50.19052, 50.03194, 49.81341, 49.77824, 49.19169, 49.29973, 48.86753, 49.1643, 49.13142, 48.46207, 48.62992, 48.18334, 48.0742, 47.97042, 47.93391,
   47.62099, 47.32166, 47.32166, 46.9057, 47.33731, 47.12057, 46.61911, 46.33802, 46.41498, 46.15745, 46.19392, 45.64394, 45.89408, 45.90728, 45.47839, 45.63214,
   45.32116, 45.39836, 44.62937, 45.09025, 45.00504, 44.86866, 44.25965, 44.49941, 44.53421, 44.04, 43.9742, 43.86686, 43.78388, 43.9175, 43.61128, 43.52781,
   43.37747, 43.24998, 43.0893, 43.20168, 42.97349, 42.92959, 42.86836, 42.88564, 42.95468, 42.63365, 42.2066, 42.39922, 42.58782, 42.09156, 42.48332, 42.02591,
   42.37857, 41.7526, 41.90716, 41.70257, 41.63631, 41.36206, 41.3474, 41.5586, 41.37671, 41.58938, 41.39461, 40.93983, 40.75022, 40.70061, 40.97108, 40.238,
   40.63935, 40.2982, 40.5049, 40.39335, 40.10556, 40.19949, 40.06692, 40.26978, 39.62241, 39.69542, 40.02488, 40.03834, 39.75306, 39.38715, 39.44012, 39.46743,
   39.5901, 39.39741, 39.23469, 39.10402, 39.06956, 38.77542, 39.07473, 38.79973, 38.91412, 38.39494, 38.40897, 38.27548, 38.45628, 38.44577, 37.98051, 38.50353,
   38.28779, 38.05668, 37.98583, 37.78674, 37.93616, 37.68681, 37.92018, 37.70289, 37.28799, 37.3908, 37.24643, 36.9633, 37.2193, 37.44299, 36.76966, 37.06518,
   36.93231, 36.95601, 36.70183, 37.08153, 36.90677, 36.4699, 36.53816, 36.51973, 36.21976, 36.26993, 36.0651, 36.14717, 36.08937, 35.95851, 36.02774, 35.89665,
   35.64059, 35.37697, 35.76132, 35.07683, 35.47582, 35.50049, 35.44924, 35.38459, 35.40171, 35.14588, 35.19375, 34.77797, 35.03841, 34.72953, 34.82055, 34.83988,
   34.45698, 34.41004, 34.59936, 34.52337, 34.52142, 34.16256, 34.29438, 34.30812, 34.10337, 34.02824, 34.10929, 34.07373, 33.74006, 33.68212, 33.61407, 33.59203,
   33.61207, 33.49365, 33.41514, 33.397, 33.40708, 33.52782, 33.36068, 33.04427, 32.88492, 33.01368, 32.88697, 33.26972, 32.91358, 32.51007, 32.47276, 32.85214,
   32.40425, 32.43749, 32.40217, 32.67537, 32.14761, 31.988, 31.88468, 32.19785, 31.95219, 32.03639, 31.80643, 31.85932, 31.42515, 31.63872, 31.42943, 31.62382,
   31.35864, 31.42943, 31.07604, 31.2403, 31.26616, 31.06737, 31.17556, 31.09987, 31.06737, 30.77553, 30.80177, 30.48973, 30.712, 30.64175, 30.73611, 30.37909,
   30.39239, 30.20568, 30.25692, 30.39682, 30.25024, 29.90318, 30.05369, 30.18561, 29.7768, 29.80393, 29.62261, 30.00211, 29.49274, 29.75191, 29.33705, 29.50643,
   29.46075, 29.16207, 29.52469, 29.36688, 29.45847, 29.0765, 28.89994, 28.67301, 29.02318, 28.72933, 28.60953, 28.64717, 28.68475, 28.68945, 28.47504, 28.41111,
   28.49159, 28.13959, 28.03169, 28.09169, 28.00765, 28.65657, 27.71275, 28.11565, 28.03649, 27.73219, 27.50787, 27.91131, 27.63001, 27.71761, 27.09842, 27.51276,
   27.01379, 27.28911, 27.30638, 27.25948, 27.1183, 27.00382, 27.09345, 26.89637, 26.8638, 26.99135, 26.7054, 26.68522, 26.79603, 26.49272, 26.81613, 26.65491,
   26.32697, 26.72052, 26.2732, 26.50035, 26.44947, 26.17304, 26.53336, 25.90147, 25.9949, 26.02597, 25.90926, 25.95341, 25.56386, 26.12153, 25.67427, 25.09325,
   25.63752, 25.36817, 25.65065, 25.32566, 25.07714, 25.27242, 25.14954, 25.06102, 24.76366, 24.88845, 24.83427, 25.02606, 24.86408, 24.8695, 24.9479, 24.80442,
   25.06102, 24.78813, 24.3025, 24.79084, 24.47095, 24.17747, 24.25812, 24.26644, 24.13287, 24.19696, 24.09936, 24.00977, 23.88603, 24.10494, 24.1217, 23.71343,
   23.8013, 23.45644, 23.28643, 23.91139, 23.46505, 23.60811, 23.21402, 23.66225, 23.43059, 23.19661, 23.21982, 23.1879, 23.28354, 22.97197, 22.76879, 22.83082,
   23.14138, 22.91033, 22.65909, 22.90445, 22.63233, 22.49204, 22.59063, 22.6234, 22.30261, 22.70066, 22.53392, 22.36894, 22.37195, 22.2724, 22.51598, 21.9342,
   21.80487, 21.98327, 22.16024, 22.09633, 21.8203, 21.98327, 21.8881, 21.94341, 21.80178, 21.58135, 21.67787, 21.56886, 21.39015, 21.06976, 21.7461, 21.27967,
   21.653, 21.3618, 21.19405, 21.1718, 21.29865, 21.02497, 21.25117, 21.22898, 20.87065, 20.75417, 20.552, 20.49622, 20.89323, 20.79631, 20.69893, 20.72169,
   20.81249, 20.39081, 20.64028, 20.59455, 20.72819, 20.26824, 20.54217, 20.30144, 20.21167, 20.5782, 20.29148, 20.51592, 19.90616, 19.97033, 20.08801, 20.09136,
   19.75674, 20.44358, 19.73969, 19.86552, 19.86213, 19.8214, 19.59588, 19.64393, 19.73286, 19.34337, 19.44061, 19.69871, 19.33989, 19.15093, 19.25963, 19.45792,
   19.05575, 19.03453, 19.25264, 19.13334, 19.02745, 18.92454, 19.21412, 18.95654, 19.03453, 18.8568, 18.90673, 18.7098, 18.7206, 18.41594, 18.6918, 18.5035,
   18.46342, 18.54349, 18.51441, 18.33899, 18.16928, 18.7673, 18.48893, 18.59426, 18.08011, 18.1804, 18.10616, 17.91922, 18.20261, 17.76068, 18.10616, 17.76447,
   18.10244, 17.63129, 17.75688, 18.02041, 17.74171, 17.658, 17.79477, 17.50094, 17.59688, 17.71132, 17.46241, 17.26461, 17.14719, 17.40834, 17.28021, 17.49324,
   17.29189, 17.67706, 17.05662, 17.20991, 16.87801, 17.46627, 17.36185, 16.9735, 17.2529, 16.96556, 16.57605, 16.86604, 16.70556, 16.60447, 16.55573, 17.08423,
   16.78599, 16.68135, 16.76993, 16.43324, 16.92582, 16.4946, 16.63688, 16.57605, 16.61663, 16.1146, 16.43324, 16.173, 16.54759, 16.37988, 16.53945, 16.11878,
   16.09369, 16.18549, 16.29331, 16.34696, 16.26849, 15.9761, 15.98874, 15.95923, 15.82362, 16.0266, 15.84913, 15.96766, 15.74255, 15.72971, 15.91274, 15.88733,
   15.82362, 15.33076, 15.43147, 15.56617, 15.47505, 15.64815, 15.55318, 15.50548, 15.39651, 15.29998, 15.34832, 15.28677, 15.37901, 15.16736, 15.25149, 14.9932,
   15.40526, 15.09169, 14.86237, 14.9887, 14.94821, 14.83061, 14.93469, 14.93018, 14.72123, 14.9887, 15.10953, 14.75322, 14.48604, 15.11844, 14.78969, 14.84423,
   14.79879, 14.70292, 14.82607, 14.62485, 14.83061, 14.78514, 14.62024, 14.64785, 14.74865, 14.35997, 14.68917, 14.70292, 14.55098, 14.39276, 14.3459, 14.03265,
   14.05663, 14.3459, 14.20911, 14.18064, 14.114, 13.97494, 13.60872, 13.96048, 13.85881, 13.87338, 13.45444, 14.20911, 13.98939, 13.82475, 14.07099, 13.56908,
   13.94117, 13.59387, 13.77595, 13.59882, 13.75149, 13.4043, 13.77106, 13.84422, 13.03238, 13.41936, 13.52434, 13.63838, 13.54424, 13.28317, 13.55418, 13.67783,
   13.24763, 13.36404, 13.2018, 13.60377, 13.56411, 12.96502, 12.91819, 13.28317, 13.23237, 12.9234, 13.00651, 12.95983, 13.16605, 12.95463, 12.83451, 13.01686,
   12.86595, 12.79246, 12.8921, 13.33377, 12.52648, 12.72384, 13.00651, 12.75556, 12.77139, 12.6442, 12.54797, 12.79246, 12.58013, 12.50496, 12.53723, 12.30955,
   12.72913, 12.53185, 12.33142, 12.45099, 12.37503, 12.49418, 12.58013, 12.21619, 12.27668, 12.32596, 12.14986, 12.58548, 12.04968, 12.22722, 12.36414, 12.16648,
   11.93173, 11.92609, 12.00488, 12.1554, 12.07201, 12.08874, 11.83539, 12.0273, 11.94302, 11.71529, 11.69228, 12.0217, 11.86381, 11.49478, 11.47719, 11.81831,
   11.81261, 11.58232, 11.55322, 11.44193, 11.76692, 11.44781, 11.70954, 11.57069, 11.62295, 11.50063, 11.17995, 11.60556, 11.37108, 11.26397, 11.30574, 11.61716,
   11.28189, 11.44193, 11.35923, 11.64032, 10.8746, 11.071, 11.28189, 11.30574, 11.05883, 10.96096, 11.02223, 11.41836, 11.13166, 11.13166, 11.13771, 11.08923,
   11.43015, 10.6998, 10.75629, 10.82494, 10.86841, 10.86841, 10.55404, 10.67459, 10.85601, 10.90552, 10.32177, 10.59226, 10.75629, 10.49646, 10.56042, 10.74376,
   10.41272, 10.49646, 10.74376, 10.18384, 10.91169, 10.82494, 10.61131, 10.24318, 10.34133, 10.36734, 10.5668, 10.52209, 10.71866, 10.93019, 10.34784, 10.42564,
   10.34784, 10.2891, 10.54127, 10.54127, 9.936148, 10.05071, 10.50287, 10.24975, 9.95646, 10.13744, 9.758336, 10.03059, 9.936148, 9.922583, 10.05741, 9.868138,
   10.0641, 10.21025, 9.881777, 9.751432, 9.73761, 9.792781, 9.702969, 10.19705, 9.929368, 10.01715, 9.633313, 9.990223, 9.661236, 9.847643, 9.88859, 9.291698,
   9.949694, 9.335083, 9.269929, 9.682125, 9.53494, 9.682125, 9.56315, 9.723769, 9.421255, 9.306182, 9.327867, 9.619321, 9.277191, 9.619321, 9.612318, 9.53494,
   9.342295, 9.027006, 9.123475, 9.605309, 9.584253, 9.598295, 9.371085, 9.492468, 9.233533, 8.982133, 9.189668, 8.906841, 9.320644, 9.204313, 9.130854, 9.027006,
   8.677047, 8.7003, 9.071658, 9.492468, 8.967125, 8.669283, 8.661511, 9.086493, 8.914399, 8.754316, 8.952092, 8.677047, 8.692556, 8.937034, 8.853756, 8.708037,
   8.846147, 8.638154, 8.738917, 8.59125, 8.7003, 9.027006, 8.884129, 8.606913, 8.328555, 8.336637, 8.899277, 8.731207, 8.708037, 8.417031, 8.023798, 8.456941,
   8.567701, 8.622548, 8.198159, 8.040567, 8.559837, 8.336637, 8.328555, 8.312368, 8.677047, 8.288027, 8.360837, 8.653732, 8.360837, 8.279897, 8.336637, 8.173478,
   8.140454, 8.23913, 8.148722, 8.006995, 8.392994, 8.214572, 8.107295, 8.148722, 8.023798, 8.320465, 8.156983, 8.165235, 7.724456, 8.032187, 7.854143, 7.922441,
   7.862713, 8.090665, 7.871273, 8.247299, 7.767926, 7.939424, 7.896899 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1073,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1073,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1073,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1073);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->SetMinimum(-2295.258);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->SetMaximum(24130.76);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1073);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagOnly_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__74 = new TH1D("data_mc_ratio__74","",1000,0,2000);
   data_mc_ratio__74->SetBinContent(26,0.9883606);
   data_mc_ratio__74->SetBinContent(27,0.968536);
   data_mc_ratio__74->SetBinContent(28,0.9582948);
   data_mc_ratio__74->SetBinContent(29,0.9581243);
   data_mc_ratio__74->SetBinContent(30,0.9517805);
   data_mc_ratio__74->SetBinContent(61,0.9799284);
   data_mc_ratio__74->SetBinContent(62,0.976638);
   data_mc_ratio__74->SetBinContent(63,0.9747366);
   data_mc_ratio__74->SetBinContent(64,0.9828698);
   data_mc_ratio__74->SetBinContent(65,0.9868963);
   data_mc_ratio__74->SetBinContent(1000,0.9576688);
   data_mc_ratio__74->SetBinContent(1001,1.00278);
   data_mc_ratio__74->SetBinError(26,0.007680425);
   data_mc_ratio__74->SetBinError(27,0.007271545);
   data_mc_ratio__74->SetBinError(28,0.00697426);
   data_mc_ratio__74->SetBinError(29,0.006797089);
   data_mc_ratio__74->SetBinError(30,0.006601632);
   data_mc_ratio__74->SetBinError(61,0.007958748);
   data_mc_ratio__74->SetBinError(62,0.008000125);
   data_mc_ratio__74->SetBinError(63,0.008037305);
   data_mc_ratio__74->SetBinError(64,0.008132618);
   data_mc_ratio__74->SetBinError(65,0.008199121);
   data_mc_ratio__74->SetBinError(1000,0.1044902);
   data_mc_ratio__74->SetBinError(1001,0.005685068);
   data_mc_ratio__74->SetMinimum(0.4);
   data_mc_ratio__74->SetMaximum(1.6);
   data_mc_ratio__74->SetEntries(5965.682);
   data_mc_ratio__74->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__74->SetLineColor(ci);
   data_mc_ratio__74->SetLineWidth(2);
   data_mc_ratio__74->SetMarkerStyle(20);
   data_mc_ratio__74->SetMarkerSize(1.2);
   data_mc_ratio__74->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__74->GetXaxis()->SetRange(1,150);
   data_mc_ratio__74->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__74->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__74->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__74->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__74->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__74->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__74->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__74->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__74->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__74->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__74->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__74->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__74->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__74->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__74->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__74->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1074[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1074[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1074[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1074[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.004680159, 0.004476121, 0.004316002, 0.004206734, 0.004099359, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004870579, 0.004904141, 0.004931736, 0.004969531, 0.004999938,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09003111 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1074,Graph_from_mc_statistical_error_fy1074,Graph_from_mc_statistical_error_fex1074,Graph_from_mc_statistical_error_fey1074);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1074 = new TH1F("Graph_Graph_from_mc_statistical_error1074","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1074->SetMinimum(0.8919627);
   Graph_Graph_from_mc_statistical_error1074->SetMaximum(1.108037);
   Graph_Graph_from_mc_statistical_error1074->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1074->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1074->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1074->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1074->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1074->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1074->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1074->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1074->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1074);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_VR_18->cd();
   Z_mass_tagOnly_VR_18->Modified();
   Z_mass_tagOnly_VR_18->cd();
   Z_mass_tagOnly_VR_18->SetSelected(Z_mass_tagOnly_VR_18);
}
