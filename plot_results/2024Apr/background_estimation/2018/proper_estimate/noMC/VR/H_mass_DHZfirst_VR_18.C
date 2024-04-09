#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_VR_18()
{
//=========Macro generated from canvas: H_mass_DHZfirst_VR_18/H_mass_DHZfirst_VR_18
//=========  (Mon Apr  8 13:43:39 2024) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_VR_18 = new TCanvas("H_mass_DHZfirst_VR_18", "H_mass_DHZfirst_VR_18",0,0,600,600);
   H_mass_DHZfirst_VR_18->SetHighLightColor(2);
   H_mass_DHZfirst_VR_18->Range(0,0,1,1);
   H_mass_DHZfirst_VR_18->SetFillColor(0);
   H_mass_DHZfirst_VR_18->SetFillStyle(4000);
   H_mass_DHZfirst_VR_18->SetBorderMode(0);
   H_mass_DHZfirst_VR_18->SetBorderSize(2);
   H_mass_DHZfirst_VR_18->SetFrameFillStyle(1000);
   H_mass_DHZfirst_VR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-4.333086,315.7258,4338.753);
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
   st->SetMaximum(3904.444);
   
   TH1F *st_stack_67 = new TH1F("st_stack_67","",1000,0,2000);
   st_stack_67->SetMinimum(0.01);
   st_stack_67->SetMaximum(3904.444);
   st_stack_67->SetDirectory(nullptr);
   st_stack_67->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_67->SetLineColor(ci);
   st_stack_67->SetLineWidth(0);
   st_stack_67->GetXaxis()->SetRange(1,150);
   st_stack_67->GetXaxis()->SetLabelFont(42);
   st_stack_67->GetXaxis()->SetTitleOffset(1);
   st_stack_67->GetXaxis()->SetTitleFont(42);
   st_stack_67->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_67->GetYaxis()->SetLabelFont(42);
   st_stack_67->GetYaxis()->SetLabelSize(0.05);
   st_stack_67->GetYaxis()->SetTitleSize(0.057);
   st_stack_67->GetYaxis()->SetTitleOffset(1.2);
   st_stack_67->GetYaxis()->SetTitleFont(42);
   st_stack_67->GetZaxis()->SetLabelFont(42);
   st_stack_67->GetZaxis()->SetTitleOffset(1);
   st_stack_67->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_67);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(43,681.4896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(44,1389.284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(45,1407.156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(46,1349.346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(47,1369.501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,674.7378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,598.8142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(79,1170.68);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(80,1144.249);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(81,1121.846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(82,1118.633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(83,576.6367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,3.584317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,2238.699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(8,0.02449115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(9,0.03031541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(10,0.02643383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(11,0.3077739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(12,0.01621327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.3878066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.6649757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,1.395128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,2.117173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,2.829123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,3.857145);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,5.058606);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,6.202965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,7.403813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,8.689904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,10.53236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,11.35201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,12.57888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,13.85431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,14.97205);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,15.61318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,16.70357);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,17.18591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,17.67306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,18.50679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,21.2926);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,18.78683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,19.01098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,19.44186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,19.95432);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,19.85773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,19.89144);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,20.61448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,20.65789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,20.12317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,19.85991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,19.91738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,19.86744);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,19.49728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,19.46164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,19.35485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,19.24856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,19.40344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,19.40363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,19.11335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,18.87335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,19.8256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,19.15536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,18.71031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,19.06911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,18.81743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,18.59886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,18.6565);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,18.81389);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,18.48199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,18.62378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,18.27023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,18.5757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,18.57369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,18.31965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,18.22202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,18.32011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,18.34927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,18.12212);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,17.71709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,18.13064);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,17.95173);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,17.67509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,17.55876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,17.50968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,17.61177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,17.35225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,17.14375);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,16.98942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,17.32406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,16.77553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,16.67137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,16.51653);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,16.50959);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,16.51607);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,16.22106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,16.17881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,16.15537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,16.33317);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,15.97174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,15.87595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,15.82168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,15.61708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,15.51515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,15.52253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,15.18963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,15.00837);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,15.05484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,15.05983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,15.25489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,14.74522);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,15.022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,14.72242);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,14.55191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,14.81625);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,14.70934);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,14.31042);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,14.32548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,14.168);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,14.18877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,14.02441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,13.91574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,14.08492);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,13.78632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,13.77553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,13.68295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,13.51373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,13.39794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,13.59861);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,14.64035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,13.04075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,13.31121);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,14.76499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,13.3309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,13.27675);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,13.14081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,13.2551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,12.93196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,12.88254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,12.95239);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,12.75756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,12.6922);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,12.58209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,12.52685);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,12.6941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,12.87499);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,13.01785);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,12.50086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,12.44397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,12.49996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,12.49084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,13.13725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,12.21381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,12.34935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,12.26188);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,12.25884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,11.96506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,12.03772);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,11.77815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,11.92826);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,11.90289);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,11.55137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,11.83902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,11.74127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,11.83739);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,11.76869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,11.61129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,11.63711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,11.44216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,11.42847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,11.39383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,11.29412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,12.2832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,11.46709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,11.40902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,11.30254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,11.27041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,11.09746);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,11.44326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,11.36464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,11.22044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,11.11058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,11.17343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,11.01343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,11.08206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,11.01217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,11.16881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,11.36225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,10.87541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,10.85157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,10.89605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,11.06825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,11.03346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,10.89738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,10.9254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,10.86793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,10.79929);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,10.6751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,10.47958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,10.45731);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,10.58023);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,10.70418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,10.34911);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,10.38599);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,10.62482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,10.40266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,10.23167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,10.48234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,10.26059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,10.31428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,10.19283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,10.10884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,10.26246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,12.90604);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,10.17437);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,10.01918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,9.961006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,10.16148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,9.990699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,10.13254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,10.11256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,10.02085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,10.0868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,9.885935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,9.834575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,9.784616);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,9.894979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,9.992399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,9.877844);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,9.73668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,10.3575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,9.9808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,9.93671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,9.388851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,9.617741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,9.593022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,9.627068);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,9.432391);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,9.521216);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,9.565818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,9.730906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,9.518997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,9.560997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,9.399196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,9.242392);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,9.504525);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,9.014339);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,9.135318);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,9.384285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,9.264203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,9.140668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,9.283233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,8.908438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,8.972582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,9.168458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,9.137368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,9.153912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,8.984131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,9.001393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,9.085196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,8.778156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,8.916412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,8.986072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,8.765078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,8.866997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,8.659379);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,8.868545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,8.846474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,8.974319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,8.723924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,8.965307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,8.908381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,8.815048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,8.833456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,10.30285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,8.692515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,8.695872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,8.75401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,8.547445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,8.654466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,8.502255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,8.488802);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,8.348291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,8.377791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,8.386662);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,8.412508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,8.34955);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,8.519358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,8.279223);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,8.193629);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,8.386949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,8.240919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,8.33098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,8.478679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,7.951651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,8.31012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,8.173697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,8.248011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,7.914693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,8.169574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,8.082142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,7.994851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,7.827356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,8.212812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,8.066099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,8.011449);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,8.033465);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,7.910931);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,7.84769);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,7.875037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,7.860806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,7.72086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,7.861113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,7.694766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,7.952946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,7.854422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,7.699039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,7.859154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,7.641715);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,7.580546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,7.594587);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,7.694233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,7.568482);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,7.575713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,7.663202);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,8.597652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,7.572659);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,7.604914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,7.450537);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,8.094268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,7.304835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,7.38194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,7.403502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,7.490705);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,7.449026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,7.368097);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,7.416998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,7.228066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,7.26915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,7.427677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,7.266332);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,7.285774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,7.148043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,7.234562);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,7.118269);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,7.039213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,7.160519);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,7.144757);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,7.034518);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,7.129456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,6.96502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,7.123581);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,6.997958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,7.155426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,7.128487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,6.956575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,6.903616);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,6.865502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,7.166259);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,7.148916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,6.918871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,6.963836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,6.991211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,6.867784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,7.085143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,6.772651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,6.95569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,6.755491);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,6.714487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,6.767813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,6.608443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,6.765227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,7.113074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,6.645614);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,6.639101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,6.563112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,6.601771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,8.587138);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,6.53655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,6.557549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,6.53233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,6.460425);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,6.516453);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,6.444924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,6.473141);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,6.246593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,7.006548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,6.400553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,6.330776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,6.459443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,6.32875);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,6.446059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,6.400513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,6.2325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,6.3627);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,6.502865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,6.545117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,6.005152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,6.194496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,6.292075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,6.266319);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,6.248052);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,6.145018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,6.035893);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,6.136413);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,6.26404);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,5.973164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,6.109545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,6.012135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,5.845531);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,6.381513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,6.25655);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,6.050459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,6.700043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,6.008747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,5.828932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,5.788321);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,5.810805);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,5.731558);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,5.999082);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,6.072098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,6.095531);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,6.000866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,6.031984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,5.939999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,5.834128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,5.74495);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,5.731419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,5.812457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,5.793563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,5.799996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,5.664752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,5.507393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,5.662752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,5.593211);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,5.79677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,5.400309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,5.42543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,5.673639);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,5.634743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,5.536234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,5.484945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,5.566495);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,5.429127);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,5.746137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,6.218129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,5.323288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,5.516125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,5.529696);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,5.557831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,5.408132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,5.476747);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,5.587004);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,5.366174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,5.432364);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,5.410476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,5.460866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,5.335184);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,5.261907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,5.61589);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,5.316267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,5.241593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,5.165789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,5.219789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,5.301676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,5.101031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,5.02285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,5.125011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,5.173889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,5.173661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,4.989799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,5.109457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,5.228705);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,5.006407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,5.255231);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,5.173054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,5.101489);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,5.187871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,5.085541);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,4.927751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,4.997833);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,5.013679);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,4.786247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,4.888992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,5.132869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,4.82013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,4.878099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,4.890654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,4.800776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,4.810582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,4.968995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,5.029294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,4.854467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,4.846088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,4.841585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,4.783397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,4.845879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,4.832743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,4.768524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,4.74501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,4.813065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,4.808019);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,4.809883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,5.147475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,4.685108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,4.709418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,4.674631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,4.815256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,4.816678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,4.778075);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,4.638642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,4.698661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,4.436058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,4.805611);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,4.503276);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,4.581728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,4.695797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,4.729733);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,4.471656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,4.689939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,4.614479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,4.535658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,4.480408);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,4.336501);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,4.39123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,4.440575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,4.417327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,4.300816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,4.37714);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,4.578478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,4.528964);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,4.388681);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,4.437672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,4.456362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,4.387302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,4.52651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,4.25734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,4.434534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,4.331315);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,4.294508);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,4.352749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,4.283464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,4.278148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,4.383793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,4.443536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,4.276997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,4.913455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,4.326181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,4.352989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,4.226612);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,4.318656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,4.231586);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,4.310478);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,3.9799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,4.264946);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,4.200996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,4.190963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,3.973902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,4.578323);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,4.213997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,3.897933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,4.12937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,4.094024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,3.933467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,3.951794);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,4.0845);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,4.134208);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,4.148148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,4.059829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,3.99957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,3.928438);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,3.936658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,3.825457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,3.914012);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,3.97477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,4.042892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,4.051358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,3.712617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,4.041983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,3.981689);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,3.899285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,3.970672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,3.790091);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,3.894151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,3.923978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,3.962263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,3.715813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,3.767213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,3.992516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,3.781393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,4.013915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,3.799524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,3.93377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,3.847881);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,3.900848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,3.825344);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,3.873748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,3.650509);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,3.716469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,3.870799);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,4.304206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,3.708897);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,3.818459);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,3.787196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,3.719666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,3.668122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,3.82513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,3.881745);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,3.423314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,3.60024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,3.566402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,3.617483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,3.731377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,3.618882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,3.604218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,3.763338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,3.657722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,3.649791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,3.510458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,3.663685);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,3.931966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,3.635573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,5.095952);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,3.499444);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,3.383163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,3.504096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,3.58166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,3.503345);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,3.540419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,3.483966);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,3.542933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,3.507914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,3.580285);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,3.422851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,3.446593);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,3.372809);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,3.470373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,3.411463);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,3.568651);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,3.601842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,3.401397);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,3.36545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,3.414699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,3.614723);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,3.489872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,3.322592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,3.395766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,3.358458);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,3.28761);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,3.349961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,3.292766);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,3.118937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,3.332447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,3.31945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,3.444945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,3.580888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,3.227132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,3.329429);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,3.166674);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,3.394099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,3.085919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,3.277096);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,3.156983);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,3.196647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,3.000011);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,3.374868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,3.230819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,3.382831);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,3.328442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,3.179806);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,3.379538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,3.044865);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,3.115758);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,3.214241);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,3.234707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,3.125932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,3.073742);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,3.155221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,3.366687);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,2.949099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,2.976914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,3.231549);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,3.163721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,3.090414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,3.093886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,2.969913);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,3.058979);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,3.117147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,3.178329);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,3.095594);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,2.982713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,2.997172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,2.912756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,3.130253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.815268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,2.99692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,3.233534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,3.075027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,3.09637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.995903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.868186);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,3.071497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.730221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,2.849919);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.956676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,2.822247);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.823852);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,3.04331);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,3.010536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,3.054328);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.839926);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,3.081296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,2.849009);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,3.142307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,2.693249);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,2.899909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,2.751577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,3.032369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.976988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,2.945877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.817882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,3.051072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,2.941257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.856031);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,2.779347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,2.87422);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,2.765117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,2.764544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,2.586051);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,2.833367);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,2.801752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,2.775151);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,2.820693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,2.78102);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,2.731157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,2.912551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,2.69407);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,2.741582);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,2.628105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,2.631406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,2.766334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,2.750905);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,2.828296);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,2.824176);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,2.754761);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,2.76253);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,2.775111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,2.670361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,2.735074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,2.768024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,2.616133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,2.668115);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,2.631383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,2.674937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,2.492602);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,2.68029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,2.652074);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,2.582793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,2.64795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,2.675895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,2.624972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,2.713787);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,2.915732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,2.710536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,2.536129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,2.562667);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,2.562279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,2.643664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,2.465566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,2.452688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,2.745613);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,2.642822);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,2.3503);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,2.56104);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,2.594257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,2.357167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,2.358877);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,2.50871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,2.546873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,2.509647);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,2.610257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,2.472666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,2.63569);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,2.524066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,2.501118);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,2.357729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,2.532496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,2.584246);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,2.346467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,2.557058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,3.030672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,2.484325);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,2.59433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,2.411013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,2.419035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,2.478502);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,2.292041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,2.38771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,2.379889);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,2.420916);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,2.465716);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,2.194343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,2.504414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,2.38567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,2.410786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,2.288443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,2.54077);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,2.330776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,2.388866);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,2.310341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,2.509274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,2.238159);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,2.267388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,2.297849);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,2.229292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,2.515039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,2.081218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,2.248781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,2.109213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,2.393057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,2.32467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,2.47663);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,2.190641);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,2.268227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,2.226263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,2.226986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,2.21302);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,2.242131);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,2.187741);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,2.21128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,2.130722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,2.0551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,2.177584);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,2.257377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,2.200945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,2.046671);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,2.17174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,2.838899);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,2.184456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,2.158083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,2.035385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,2.198214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,2.362373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,2.13034);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,2.205442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,2.132013);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,2.027709);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,2.35752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,2.07022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,2.143343);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,2.314571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,2.118045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,2.267025);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,2.304697);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,2.173079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,2.17514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,2.159498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.995442);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,2.107133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.909903);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,2.045316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,2.268271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,2.224002);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,2.211718);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,2.167849);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,2.030156);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,2.054236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,2.116243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,2.051447);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.798126);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,2.19896);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.95591);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,2.024848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,2.073084);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.934256);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,2.013466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.997293);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.747169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,2.119287);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.993278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,2.141255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.969546);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.823664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.962906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,2.130111);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.950976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.930473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,2.013595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,2.086036);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.873729);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,2.169924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.960654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.989358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,2.058098);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,2.116352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.603203);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.903085);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.757503);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,2.054187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.897949);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,2.058427);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.94818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.69962);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.870412);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.631061);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.985975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.871619);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.807284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,2.013306);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.987874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,2.036094);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.672937);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.792086);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.671107);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.94283);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.776071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.867818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.59041);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.765362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.769335);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.723035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.86267);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.880834);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.906268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.715359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.93838);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.827736);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,2.040515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.860991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.67793);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.975637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.779017);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.789326);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.790791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.777994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.873445);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.970334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.921163);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.941403);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.556327);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.922635);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.750672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.782451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,1.688644);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.669539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.962136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.823433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.681347);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.498396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,1.505263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.69771);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.825396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,1.717079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.736871);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.789488);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.724636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.631069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.712303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.777373);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.616675);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.725839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,1.483774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.579276);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.695708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.711067);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,1.657222);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,1.625426);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.512434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.606725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.508295);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.609123);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,1.634743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.697217);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.73388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.5882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,1.575636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.541418);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.68981);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.549789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.725487);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,1.475624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.462461);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,1.622735);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,1.565072);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.571557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,1.580233);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.373926);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,1.522935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.520988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.289943);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,1.649887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.507154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.704984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.668191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,1.601232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.591605);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,1.349895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,1.738209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,1.693986);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,1.496677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,1.537683);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,1.569045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,1.573538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,1.6536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,1.569566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,1.409538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.411143);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.462567);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,23.73721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(890457.5);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_H_mass__133 = new TH1D("VH_DHZfirst_H_mass__133","",1000,0,2000);
   VH_DHZfirst_H_mass__133->SetBinContent(43,873);
   VH_DHZfirst_H_mass__133->SetBinContent(44,1757);
   VH_DHZfirst_H_mass__133->SetBinContent(45,1751);
   VH_DHZfirst_H_mass__133->SetBinContent(46,1637);
   VH_DHZfirst_H_mass__133->SetBinContent(47,1643);
   VH_DHZfirst_H_mass__133->SetBinContent(48,788);
   VH_DHZfirst_H_mass__133->SetBinContent(78,616);
   VH_DHZfirst_H_mass__133->SetBinContent(79,1197);
   VH_DHZfirst_H_mass__133->SetBinContent(80,1211);
   VH_DHZfirst_H_mass__133->SetBinContent(81,1152);
   VH_DHZfirst_H_mass__133->SetBinContent(82,1166);
   VH_DHZfirst_H_mass__133->SetBinContent(83,598);
   VH_DHZfirst_H_mass__133->SetBinContent(1000,3);
   VH_DHZfirst_H_mass__133->SetBinContent(1001,2461);
   VH_DHZfirst_H_mass__133->SetEntries(256402);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__133->SetLineColor(ci);
   VH_DHZfirst_H_mass__133->SetLineWidth(2);
   VH_DHZfirst_H_mass__133->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__133->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__133->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__133->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__133->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__133->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__133->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__133->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__133->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__133->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__133->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__133->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1133[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1133[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 681.4896, 1389.284, 1407.156, 1349.346, 1369.501, 674.7378, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598.8142, 1170.68, 1144.249, 1121.846,
   1118.633, 576.6367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 3.584317 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1133[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1133[1000] = { 0, 0, 0, 0, 0, 0, 0, 0.02449115, 0.03031541, 0.02643383, 0.3077739, 0.01621327, 0.3878066, 0.6649757, 1.395128, 2.117173, 2.829123,
   3.857145, 5.058606, 6.202965, 7.403813, 8.689904, 10.53236, 11.35201, 12.57888, 13.85431, 14.97205, 15.61318, 16.70357, 17.18591, 17.67306, 18.50679, 21.2926,
   18.78683, 19.01098, 19.44186, 19.95432, 19.85773, 19.89144, 20.61448, 20.65789, 20.12317, 19.85991, 19.91738, 19.86744, 19.49728, 19.46164, 19.35485, 19.24856,
   19.40344, 19.40363, 19.11335, 18.87335, 19.8256, 19.15536, 18.71031, 19.06911, 18.81743, 18.59886, 18.6565, 18.81389, 18.48199, 18.62378, 18.27023, 18.5757,
   18.57369, 18.31965, 18.22202, 18.32011, 18.34927, 18.12212, 17.71709, 18.13064, 17.95173, 17.67509, 17.55876, 17.50968, 17.61177, 17.35225, 17.14375, 16.98942,
   17.32406, 16.77553, 16.67137, 16.51653, 16.50959, 16.51607, 16.22106, 16.17881, 16.15537, 16.33317, 15.97174, 15.87595, 15.82168, 15.61708, 15.51515, 15.52253,
   15.18963, 15.00837, 15.05484, 15.05983, 15.25489, 14.74522, 15.022, 14.72242, 14.55191, 14.81625, 14.70934, 14.31042, 14.32548, 14.168, 14.18877, 14.02441,
   13.91574, 14.08492, 13.78632, 13.77553, 13.68295, 13.51373, 13.39794, 13.59861, 14.64035, 13.04075, 13.31121, 14.76499, 13.3309, 13.27675, 13.14081, 13.2551,
   12.93196, 12.88254, 12.95239, 12.75756, 12.6922, 12.58209, 12.52685, 12.6941, 12.87499, 13.01785, 12.50086, 12.44397, 12.49996, 12.49084, 13.13725, 12.21381,
   12.34935, 12.26188, 12.25884, 11.96506, 12.03772, 11.77815, 11.92826, 11.90289, 11.55137, 11.83902, 11.74127, 11.83739, 11.76869, 11.61129, 11.63711, 11.44216,
   11.42847, 11.39383, 11.29412, 12.2832, 11.46709, 11.40902, 11.30254, 11.27041, 11.09746, 11.44326, 11.36464, 11.22044, 11.11058, 11.17343, 11.01343, 11.08206,
   11.01217, 11.16881, 11.36225, 10.87541, 10.85157, 10.89605, 11.06825, 11.03346, 10.89738, 10.9254, 10.86793, 10.79929, 10.6751, 10.47958, 10.45731, 10.58023,
   10.70418, 10.34911, 10.38599, 10.62482, 10.40266, 10.23167, 10.48234, 10.26059, 10.31428, 10.19283, 10.10884, 10.26246, 12.90604, 10.17437, 10.01918, 9.961006,
   10.16148, 9.990699, 10.13254, 10.11256, 10.02085, 10.0868, 9.885935, 9.834575, 9.784616, 9.894979, 9.992399, 9.877844, 9.73668, 10.3575, 9.9808, 9.93671,
   9.388851, 9.617741, 9.593022, 9.627068, 9.432391, 9.521216, 9.565818, 9.730906, 9.518997, 9.560997, 9.399196, 9.242392, 9.504525, 9.014339, 9.135318, 9.384285,
   9.264203, 9.140668, 9.283233, 8.908438, 8.972582, 9.168458, 9.137368, 9.153912, 8.984131, 9.001393, 9.085196, 8.778156, 8.916412, 8.986072, 8.765078, 8.866997,
   8.659379, 8.868545, 8.846474, 8.974319, 8.723924, 8.965307, 8.908381, 8.815048, 8.833456, 10.30285, 8.692515, 8.695872, 8.75401, 8.547445, 8.654466, 8.502255,
   8.488802, 8.348291, 8.377791, 8.386662, 8.412508, 8.34955, 8.519358, 8.279223, 8.193629, 8.386949, 8.240919, 8.33098, 8.478679, 7.951651, 8.31012, 8.173697,
   8.248011, 7.914693, 8.169574, 8.082142, 7.994851, 7.827356, 8.212812, 8.066099, 8.011449, 8.033465, 7.910931, 7.84769, 7.875037, 7.860806, 7.72086, 7.861113,
   7.694766, 7.952946, 7.854422, 7.699039, 7.859154, 7.641715, 7.580546, 7.594587, 7.694233, 7.568482, 7.575713, 7.663202, 8.597652, 7.572659, 7.604914, 7.450537,
   8.094268, 7.304835, 7.38194, 7.403502, 7.490705, 7.449026, 7.368097, 7.416998, 7.228066, 7.26915, 7.427677, 7.266332, 7.285774, 7.148043, 7.234562, 7.118269,
   7.039213, 7.160519, 7.144757, 7.034518, 7.129456, 6.96502, 7.123581, 6.997958, 7.155426, 7.128487, 6.956575, 6.903616, 6.865502, 7.166259, 7.148916, 6.918871,
   6.963836, 6.991211, 6.867784, 7.085143, 6.772651, 6.95569, 6.755491, 6.714487, 6.767813, 6.608443, 6.765227, 7.113074, 6.645614, 6.639101, 6.563112, 6.601771,
   8.587138, 6.53655, 6.557549, 6.53233, 6.460425, 6.516453, 6.444924, 6.473141, 6.246593, 7.006548, 6.400553, 6.330776, 6.459443, 6.32875, 6.446059, 6.400513,
   6.2325, 6.3627, 6.502865, 6.545117, 6.005152, 6.194496, 6.292075, 6.266319, 6.248052, 6.145018, 6.035893, 6.136413, 6.26404, 5.973164, 6.109545, 6.012135,
   5.845531, 6.381513, 6.25655, 6.050459, 6.700043, 6.008747, 5.828932, 5.788321, 5.810805, 5.731558, 5.999082, 6.072098, 6.095531, 6.000866, 6.031984, 5.939999,
   5.834128, 5.74495, 5.731419, 5.812457, 5.793563, 5.799996, 5.664752, 5.507393, 5.662752, 5.593211, 5.79677, 5.400309, 5.42543, 5.673639, 5.634743, 5.536234,
   5.484945, 5.566495, 5.429127, 5.746137, 6.218129, 5.323288, 5.516125, 5.529696, 5.557831, 5.408132, 5.476747, 5.587004, 5.366174, 5.432364, 5.410476, 5.460866,
   5.335184, 5.261907, 5.61589, 5.316267, 5.241593, 5.165789, 5.219789, 5.301676, 5.101031, 5.02285, 5.125011, 5.173889, 5.173661, 4.989799, 5.109457, 5.228705,
   5.006407, 5.255231, 5.173054, 5.101489, 5.187871, 5.085541, 4.927751, 4.997833, 5.013679, 4.786247, 4.888992, 5.132869, 4.82013, 4.878099, 4.890654, 4.800776,
   4.810582, 4.968995, 5.029294, 4.854467, 4.846088, 4.841585, 4.783397, 4.845879, 4.832743, 4.768524, 4.74501, 4.813065, 4.808019, 4.809883, 5.147475, 4.685108,
   4.709418, 4.674631, 4.815256, 4.816678, 4.778075, 4.638642, 4.698661, 4.436058, 4.805611, 4.503276, 4.581728, 4.695797, 4.729733, 4.471656, 4.689939, 4.614479,
   4.535658, 4.480408, 4.336501, 4.39123, 4.440575, 4.417327, 4.300816, 4.37714, 4.578478, 4.528964, 4.388681, 4.437672, 4.456362, 4.387302, 4.52651, 4.25734,
   4.434534, 4.331315, 4.294508, 4.352749, 4.283464, 4.278148, 4.383793, 4.443536, 4.276997, 4.913455, 4.326181, 4.352989, 4.226612, 4.318656, 4.231586, 4.310478,
   3.9799, 4.264946, 4.200996, 4.190963, 3.973902, 4.578323, 4.213997, 3.897933, 4.12937, 4.094024, 3.933467, 3.951794, 4.0845, 4.134208, 4.148148, 4.059829,
   3.99957, 3.928438, 3.936658, 3.825457, 3.914012, 3.97477, 4.042892, 4.051358, 3.712617, 4.041983, 3.981689, 3.899285, 3.970672, 3.790091, 3.894151, 3.923978,
   3.962263, 3.715813, 3.767213, 3.992516, 3.781393, 4.013915, 3.799524, 3.93377, 3.847881, 3.900848, 3.825344, 3.873748, 3.650509, 3.716469, 3.870799, 4.304206,
   3.708897, 3.818459, 3.787196, 3.719666, 3.668122, 3.82513, 3.881745, 3.423314, 3.60024, 3.566402, 3.617483, 3.731377, 3.618882, 3.604218, 3.763338, 3.657722,
   3.649791, 3.510458, 3.663685, 3.931966, 3.635573, 5.095952, 3.499444, 3.383163, 3.504096, 3.58166, 3.503345, 3.540419, 3.483966, 3.542933, 3.507914, 3.580285,
   3.422851, 3.446593, 3.372809, 3.470373, 3.411463, 3.568651, 3.601842, 3.401397, 3.36545, 3.414699, 3.614723, 3.489872, 3.322592, 3.395766, 3.358458, 3.28761,
   3.349961, 3.292766, 3.118937, 3.332447, 3.31945, 3.444945, 3.580888, 3.227132, 3.329429, 3.166674, 3.394099, 3.085919, 3.277096, 3.156983, 3.196647, 3.000011,
   3.374868, 3.230819, 3.382831, 3.328442, 3.179806, 3.379538, 3.044865, 3.115758, 3.214241, 3.234707, 3.125932, 3.073742, 3.155221, 3.366687, 2.949099, 2.976914,
   3.231549, 3.163721, 3.090414, 3.093886, 2.969913, 3.058979, 3.117147, 3.178329, 3.095594, 2.982713, 2.997172, 2.912756, 3.130253, 2.815268, 2.99692, 3.233534,
   3.075027, 3.09637, 2.995903, 2.868186, 3.071497, 2.730221, 2.849919, 2.956676, 2.822247, 2.823852, 3.04331, 3.010536, 3.054328, 2.839926, 3.081296, 2.849009,
   3.142307, 2.693249, 2.899909, 2.751577, 3.032369, 2.976988, 2.945877, 2.817882, 3.051072, 2.941257, 2.856031, 2.779347, 2.87422, 2.765117, 2.764544, 2.586051,
   2.833367, 2.801752, 2.775151, 2.820693, 2.78102, 2.731157, 2.912551, 2.69407, 2.741582, 2.628105, 2.631406, 2.766334, 2.750905, 2.828296, 2.824176, 2.754761,
   2.76253, 2.775111, 2.670361, 2.735074, 2.768024, 2.616133, 2.668115, 2.631383, 2.674937, 2.492602, 2.68029, 2.652074, 2.582793, 2.64795, 2.675895, 2.624972,
   2.713787, 2.915732, 2.710536, 2.536129, 2.562667, 2.562279, 2.643664, 2.465566, 2.452688, 2.745613, 2.642822, 2.3503, 2.56104, 2.594257, 2.357167, 2.358877,
   2.50871, 2.546873, 2.509647, 2.610257, 2.472666, 2.63569, 2.524066, 2.501118, 2.357729, 2.532496, 2.584246, 2.346467, 2.557058, 3.030672, 2.484325, 2.59433,
   2.411013, 2.419035, 2.478502, 2.292041, 2.38771, 2.379889, 2.420916, 2.465716, 2.194343, 2.504414, 2.38567, 2.410786, 2.288443, 2.54077, 2.330776, 2.388866,
   2.310341, 2.509274, 2.238159, 2.267388, 2.297849, 2.229292, 2.515039, 2.081218, 2.248781, 2.109213, 2.393057, 2.32467, 2.47663, 2.190641, 2.268227, 2.226263,
   2.226986, 2.21302, 2.242131, 2.187741, 2.21128, 2.130722, 2.0551, 2.177584, 2.257377, 2.200945, 2.046671, 2.17174, 2.838899, 2.184456, 2.158083, 2.035385,
   2.198214, 2.362373, 2.13034, 2.205442, 2.132013, 2.027709, 2.35752, 2.07022, 2.143343, 2.314571, 2.118045, 2.267025, 2.304697, 2.173079, 2.17514, 2.159498,
   1.995442, 2.107133, 1.909903, 2.045316, 2.268271, 2.224002, 2.211718, 2.167849, 2.030156, 2.054236, 2.116243, 2.051447, 1.798126, 2.19896, 1.95591, 2.024848,
   2.073084, 1.934256, 2.013466, 1.997293, 1.747169, 2.119287, 1.993278, 2.141255, 1.969546, 1.823664, 1.962906, 2.130111, 1.950976, 1.930473, 2.013595, 2.086036,
   1.873729, 2.169924, 1.960654, 1.989358, 2.058098, 2.116352, 1.603203, 1.903085, 1.757503, 2.054187, 1.897949, 2.058427, 1.94818, 1.69962, 1.870412, 1.631061,
   1.985975, 1.871619, 1.807284, 2.013306, 1.987874, 2.036094, 1.672937, 1.792086, 1.671107, 1.94283, 1.776071, 1.867818, 1.59041, 1.765362, 1.769335, 1.723035,
   1.86267, 1.880834, 1.906268, 1.715359, 1.93838, 1.827736, 2.040515, 1.860991, 1.67793, 1.975637, 1.779017, 1.789326, 1.790791, 1.777994, 1.873445, 1.970334,
   1.921163, 1.941403, 1.556327, 1.922635, 1.750672, 1.782451, 1.688644, 1.669539, 1.962136, 1.823433, 1.681347, 1.498396, 1.505263, 1.69771, 1.825396, 1.717079,
   1.736871, 1.789488, 1.724636, 1.631069, 1.712303, 1.777373, 1.616675, 1.725839, 1.483774, 1.579276, 1.695708, 1.711067, 1.657222, 1.625426, 1.512434, 1.606725,
   1.508295, 1.609123, 1.634743, 1.697217, 1.73388, 1.5882, 1.575636, 1.541418, 1.68981, 1.549789, 1.725487, 1.475624, 1.462461, 1.622735, 1.565072, 1.571557,
   1.580233, 1.373926, 1.522935, 1.520988, 1.289943, 1.649887, 1.507154, 1.704984, 1.668191, 1.601232, 1.591605, 1.349895, 1.738209, 1.693986, 1.496677, 1.537683,
   1.569045, 1.573538, 1.6536, 1.569566, 1.409538, 1.411143, 1.462567 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1133,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1133,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1133,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1133);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->SetMinimum(-166.1242);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->SetMaximum(1571.855);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1133);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_DHZfirst_VR_18->cd();
  
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
   
   TH1D *data_mc_ratio__134 = new TH1D("data_mc_ratio__134","",1000,0,2000);
   data_mc_ratio__134->SetBinContent(43,1.281017);
   data_mc_ratio__134->SetBinContent(44,1.264681);
   data_mc_ratio__134->SetBinContent(45,1.244354);
   data_mc_ratio__134->SetBinContent(46,1.213181);
   data_mc_ratio__134->SetBinContent(47,1.199707);
   data_mc_ratio__134->SetBinContent(48,1.167861);
   data_mc_ratio__134->SetBinContent(78,1.0287);
   data_mc_ratio__134->SetBinContent(79,1.022482);
   data_mc_ratio__134->SetBinContent(80,1.058336);
   data_mc_ratio__134->SetBinContent(81,1.026879);
   data_mc_ratio__134->SetBinContent(82,1.042344);
   data_mc_ratio__134->SetBinContent(83,1.037048);
   data_mc_ratio__134->SetBinContent(1000,0.8369795);
   data_mc_ratio__134->SetBinContent(1001,1.099299);
   data_mc_ratio__134->SetBinError(43,0.04335587);
   data_mc_ratio__134->SetBinError(44,0.03017137);
   data_mc_ratio__134->SetBinError(45,0.02973726);
   data_mc_ratio__134->SetBinError(46,0.0299848);
   data_mc_ratio__134->SetBinError(47,0.0295976);
   data_mc_ratio__134->SetBinError(48,0.04160333);
   data_mc_ratio__134->SetBinError(78,0.04144749);
   data_mc_ratio__134->SetBinError(79,0.02955349);
   data_mc_ratio__134->SetBinError(80,0.03041247);
   data_mc_ratio__134->SetBinError(81,0.03025472);
   data_mc_ratio__134->SetBinError(82,0.03052542);
   data_mc_ratio__134->SetBinError(83,0.04240805);
   data_mc_ratio__134->SetBinError(1000,0.4832304);
   data_mc_ratio__134->SetBinError(1001,0.02503809);
   data_mc_ratio__134->SetMinimum(0.4);
   data_mc_ratio__134->SetMaximum(1.6);
   data_mc_ratio__134->SetEntries(560.671);
   data_mc_ratio__134->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__134->SetLineColor(ci);
   data_mc_ratio__134->SetLineWidth(2);
   data_mc_ratio__134->SetMarkerStyle(20);
   data_mc_ratio__134->SetMarkerSize(1.2);
   data_mc_ratio__134->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__134->GetXaxis()->SetRange(1,150);
   data_mc_ratio__134->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__134->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__134->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__134->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__134->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__134->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__134->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__134->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__134->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__134->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1134[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1134[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1134[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1134[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0291419, 0.01433644, 0.01411886, 0.01444943, 0.01421076, 0.028685, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.02941108, 0.01482236, 0.01498254, 0.01514417,
   0.01548681, 0.02909203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.4080462 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1134,Graph_from_mc_statistical_error_fy1134,Graph_from_mc_statistical_error_fex1134,Graph_from_mc_statistical_error_fey1134);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1134 = new TH1F("Graph_Graph_from_mc_statistical_error1134","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1134->SetMinimum(0.5103445);
   Graph_Graph_from_mc_statistical_error1134->SetMaximum(1.489655);
   Graph_Graph_from_mc_statistical_error1134->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1134->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1134->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1134->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1134);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_VR_18->cd();
   H_mass_DHZfirst_VR_18->Modified();
   H_mass_DHZfirst_VR_18->cd();
   H_mass_DHZfirst_VR_18->SetSelected(H_mass_DHZfirst_VR_18);
}
