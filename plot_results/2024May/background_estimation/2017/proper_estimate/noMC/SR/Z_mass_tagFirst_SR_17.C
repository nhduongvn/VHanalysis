#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Fri May 24 11:23:59 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_17 = new TCanvas("Z_mass_tagFirst_SR_17", "Z_mass_tagFirst_SR_17",0,0,600,600);
   Z_mass_tagFirst_SR_17->SetHighLightColor(2);
   Z_mass_tagFirst_SR_17->Range(0,0,1,1);
   Z_mass_tagFirst_SR_17->SetFillColor(0);
   Z_mass_tagFirst_SR_17->SetFillStyle(4000);
   Z_mass_tagFirst_SR_17->SetBorderMode(0);
   Z_mass_tagFirst_SR_17->SetBorderSize(2);
   Z_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-25.79445,315.7258,25778.65);
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
   st->SetMaximum(23198.2);
   
   TH1F *st_stack_132 = new TH1F("st_stack_132","",1000,0,2000);
   st_stack_132->SetMinimum(0.01);
   st_stack_132->SetMaximum(23198.2);
   st_stack_132->SetDirectory(nullptr);
   st_stack_132->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_132->SetLineColor(ci);
   st_stack_132->SetLineWidth(0);
   st_stack_132->GetXaxis()->SetRange(1,150);
   st_stack_132->GetXaxis()->SetLabelFont(42);
   st_stack_132->GetXaxis()->SetTitleOffset(1);
   st_stack_132->GetXaxis()->SetTitleFont(42);
   st_stack_132->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_132->GetYaxis()->SetLabelFont(42);
   st_stack_132->GetYaxis()->SetLabelSize(0.05);
   st_stack_132->GetYaxis()->SetTitleSize(0.057);
   st_stack_132->GetYaxis()->SetTitleOffset(1.2);
   st_stack_132->GetYaxis()->SetTitleFont(42);
   st_stack_132->GetZaxis()->SetLabelFont(42);
   st_stack_132->GetZaxis()->SetTitleOffset(1);
   st_stack_132->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_132);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,10241.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,10439.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,10412.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,10326.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,10248.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,10208.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,10060.15);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,9871.589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,9542.912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,9396.229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,9201.995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,9073.763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,8673.105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,8573.387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,8294.832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,8185.849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,7892.793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,7863.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,7516.796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,7509.493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,7266.048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,7041.131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,7015.851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,6719.441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,6663.665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,6629.796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,6510.375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,6192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,6193.599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,6069.354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,23.46934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,15409.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01263267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.02578307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.01299457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.02612102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.8742705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7647349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,3.219014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,7.164455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,11.51193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,16.47941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,21.88684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,28.19499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,33.57928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,39.12574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,44.57246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,49.27857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,53.49808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,57.44536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,60.53498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,62.77692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,65.4116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,67.02703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,68.96141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,69.12648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,69.75358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,69.85459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,69.68806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,69.67614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,69.55262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,69.27763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,68.84917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,67.82617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,67.75724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,67.22236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,67.03416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,66.2988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,65.91717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,65.0552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,64.92686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,63.96345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,64.15208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,62.72799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,62.57002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,61.88629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,60.96323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,60.76258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,59.73309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,59.55857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,59.25046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,58.67436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,57.56509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,57.61457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,56.96175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,56.66096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,56.37221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,55.83684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,55.70527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,55.67589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,55.04174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,54.70683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,54.39433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,53.92504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,53.92307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,53.38424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,52.86297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,52.64762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,52.43917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,51.99883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,52.00706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,51.4909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,51.04707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,50.6373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,50.78126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,50.67273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,50.03772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,49.86981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,49.16861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,49.02543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,48.68867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,48.53026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,48.28461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,47.86587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,47.66121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,47.07293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,46.74094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,46.45842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,46.90387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,46.20515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,46.11997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,45.75833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,45.26962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,45.31517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,44.81121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,44.81467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,44.28646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,44.22978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,43.73118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,43.49585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,43.71408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,43.24553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,43.40354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,42.94037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,42.34836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,42.57462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,42.75896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,41.65955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,41.79852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,41.4552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,41.4045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,41.12822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,40.74107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,40.80265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,40.46251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,40.61625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,40.06267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,40.66164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,40.07791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,39.71762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,40.12675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,39.3955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,39.87391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,39.47516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,39.96562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,39.33596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,38.71299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,38.49439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,38.41631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,38.62921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,38.007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,38.11952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,38.22144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,37.92987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,37.72904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,37.89225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,37.81746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,37.38839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,37.61735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,37.36866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,37.41782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,37.15617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,36.73295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,36.66142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,36.80079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,36.39493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,36.32192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,37.02734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,36.56067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,36.05515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,36.83546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,36.02334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,35.97236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,35.66759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,35.529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,35.58668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,35.66752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,35.60257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,35.36438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,35.59332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,35.5188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,35.20617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,35.14985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,34.64354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,35.01683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,34.67389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,34.29346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,34.72106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,34.58938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,34.49904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,33.70883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,34.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,34.10509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,34.6147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,34.40324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,34.13576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,34.61301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,33.82482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,33.67861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,33.50353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,33.36188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,33.39996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,33.40558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,33.26712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,33.01835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,33.22587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,33.10012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,32.98105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,32.70394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,33.38438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,33.07271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,32.707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,32.77911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,32.63673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,32.71304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,32.56384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,32.70339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,32.39331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,32.18216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,32.33143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,32.02913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,31.83245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,31.86529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,32.02075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,32.18331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,31.46951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,31.86669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,31.77934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,31.68505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,31.29024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,31.26433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,31.49827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,31.40735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,31.36243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,31.18897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,31.06117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,31.40253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,30.97402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,30.80113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,30.79621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,30.82506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,30.5078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,31.22356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,30.33752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,30.49956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,30.65232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,30.72979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,30.42048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,30.45686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,30.10052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,30.24571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,29.89138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,30.38391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,30.73238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,30.47475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,30.16044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,29.74472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,30.41377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,29.64598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,29.67719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,29.46921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,29.78471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,29.32607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,29.54453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,29.29886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,29.28987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,29.26747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,28.70706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,29.20678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,29.05449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,29.22347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,28.78066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,28.61256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,28.67019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,28.61935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,28.39863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,28.69902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,28.79037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,28.66493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,28.09209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,28.46675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,28.40335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,28.47724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,28.46075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,28.05884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,28.16126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,28.27338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,28.17021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,27.92173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,27.73432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,27.76816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,27.53863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,27.62338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,27.8954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,27.36822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,27.28446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,27.56508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,27.28847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,27.30437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,27.50126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,26.92593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,27.07583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,26.94571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,27.48913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,26.6862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,27.20745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,26.85485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,26.58968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,26.60733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,26.57788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,26.33606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,26.28565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,26.43731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,26.15141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,25.86801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,26.18228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,25.62718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,26.39049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,25.74434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,25.8739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,25.93769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,25.81973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,25.98965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,25.94141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,25.88799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,25.73139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,25.60547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,25.61341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,25.59259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,25.17278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,25.44736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,25.24728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,25.27909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,25.33037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,25.09744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,24.99747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,26.3995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,25.13054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,25.17569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,24.92784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,24.80395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,24.80368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,24.73754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,24.79107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,24.7366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,24.58187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,24.38965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,24.60594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,24.81159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,24.28913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,24.0209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,24.12181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,24.15856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,23.94571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,24.04199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,23.96999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,24.05546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,23.63903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,23.87956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,23.64332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,24.02723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,23.80354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,23.06823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,23.8668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,23.10485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,23.14448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,23.58867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,23.23853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,23.25885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,23.05445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,23.58971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,23.02077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,23.07733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,22.99466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,22.83533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,23.01964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,22.63377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,22.61285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,22.65349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,22.63983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,22.58028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,22.3404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,22.3494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,22.54352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,22.49625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,22.05304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,22.20139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,22.14048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,21.93742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,22.63372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,22.01225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,21.73547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,22.62432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,22.0433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,21.48711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,21.51733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,21.45404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,22.0106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,21.52419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,21.62646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,21.36585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,21.60519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,20.97644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,20.90867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,20.81672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,20.86956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,20.87712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,21.2233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,21.06618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,20.7886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,20.61056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,20.52678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,20.73775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,21.31041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,21.34841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,20.73417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,20.54368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,20.48236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,20.7806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,20.46125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,20.52638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,20.77449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,20.36131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,20.59548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,20.26165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,20.5352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,20.30985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,19.82063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.93606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,20.24575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,20.27476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,20.38784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.82749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.81378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.90243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,20.41101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,19.75116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,19.74137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,19.39695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,19.59779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,19.93453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,19.18719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,19.56281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,19.42418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,19.24245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,19.53214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,19.27162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,19.37094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,19.17831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,19.16245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,19.09063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,19.11173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.80978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.70696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,18.89901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.71364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.45402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,18.65144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.9597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.56557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.63452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,18.73158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.72927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,18.16324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,18.48998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,18.23827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.21861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,18.17671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,18.25818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.26801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,18.28754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.9237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,18.02101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.98619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,18.1234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,18.22215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,18.26906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.70412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.81868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.2661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.9339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.86364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.41894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.51158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.23619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.40567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.22589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,17.49926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.3306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.82359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.50832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.28941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,17.08918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,17.21801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,17.33484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,17.17985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.91517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.33185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.6895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,16.8748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.23044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,16.93756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.58829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,17.18481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.67731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.60747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.09939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.50695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.74615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.51376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.62111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.20348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.51473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.43607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.15068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.35105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.49076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.15003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.21445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,15.99585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.37489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,15.98421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,16.29668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.04538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.02227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.83517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.38445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,15.74192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.76955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,15.88126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.42106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.36006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,16.1379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,15.3908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.56028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.25031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.72084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.66605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.44826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,15.31505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,15.07006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,16.24017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,14.94764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.25157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.23536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,15.1216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.45118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.11161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.36491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,14.83706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.32803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.05285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,14.8386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,15.1403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,14.90031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,14.57183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,14.86677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,14.81855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.31236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,14.78919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,14.78065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.17213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.43524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.27234);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.45252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.49628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.47923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.54467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,13.9411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.0905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,14.45834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.2608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.47653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.17291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,13.90411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.19433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,13.88625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,13.83586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,14.94884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,13.71569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,13.80498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,13.70451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,13.63713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,13.76953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,13.72215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,13.94172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,13.78412);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.20195);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.53263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,13.66306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,13.55167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.51278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,13.3544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,13.24784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,13.95739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.30677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.21016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.5091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.20722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.0531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.14176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.36857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.30181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,12.99954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.54914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,12.67967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.13415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.33966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.13715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.06463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.08565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.04926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,12.80152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,12.82786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,12.59835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,12.93366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.0183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.08336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,12.91192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.02885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,12.49614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,12.26922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,12.76309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,12.21521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,12.45107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,12.25764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,12.65593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,12.73846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,12.47872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,12.396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.07444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,12.49905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.13887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.64063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,12.3944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.75494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.18971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.66142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,12.63489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.40698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,12.1802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,12.1715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.14597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,12.49909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.05232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,11.96105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,12.08569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.2532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,11.87932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,11.83047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.19903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.04745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,11.97883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,11.83085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,11.79337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,11.85577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,11.89514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,11.31041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,11.99872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,11.90857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,11.88431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,11.76322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,11.45218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.15223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,11.2788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,11.94597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,11.56393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.34876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,11.35393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.5455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,11.5209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,11.37466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,11.4702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.21244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.41374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,11.34289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,10.80332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,11.49172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,11.18002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.03961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,10.98215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.00519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.05903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.21949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,11.36452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,10.86408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,11.4434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.18085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,10.96556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,10.97899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,10.65384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,10.85875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,10.74963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,10.63538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,10.84548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.24814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,10.74733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.14027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,10.44512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,10.85789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,10.68473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,10.72438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,10.62838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,10.55741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,10.39281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,10.4766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,10.60972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,10.53645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,10.40443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,10.27519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,10.90628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,9.956212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,10.60747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,10.28429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,10.26782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.23663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,10.44783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,10.42975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.48825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,10.16833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.09167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,9.990548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,10.63663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.14194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,10.3461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,10.35603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.08166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.01713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,10.18679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,9.712718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,9.826052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,9.706452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,9.997565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.33659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,9.785816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.09339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,9.973106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,9.470984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.01011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,9.657444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,9.807887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,9.781997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,9.529329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,9.957222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,9.788739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,9.597075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,9.568502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,9.576887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,9.360395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,9.408743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,9.584571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,9.928004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,9.600299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,9.316066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,9.401324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,9.811905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,9.774601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,9.194644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,9.628437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,9.592969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,9.304274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.22992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,9.718617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,9.508131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,11.01272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,9.811884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,9.383115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,10.60161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.02336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,8.708096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,8.767258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,8.870007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,9.02411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,9.160633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.40461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.069046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.00437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.111268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.102594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,8.832488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.08989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.270329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,8.925325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,8.657054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,8.790374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,8.646491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.009271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.069943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,8.870564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.056593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,8.706156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,8.49206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,8.473064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,8.696907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.22948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,8.767859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,8.868309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,8.585224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,8.887865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,8.287853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,8.562809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,8.469806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,8.761157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,8.540122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,8.96245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,8.845059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,8.364099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,8.314719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.350073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,8.45298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,8.726454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,8.189404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,8.035438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,8.347758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.111109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,8.247687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.071771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,8.509212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,8.336084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,8.310287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,8.19386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,8.715839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,7.86534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.187333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.171717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.131155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,8.332643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.046641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,8.125134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,7.694998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,7.79211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,7.94492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,8.528177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.061854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.097683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,7.873434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.26837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.108466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,7.795443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.070916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,8.383736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,7.743662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,7.806231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,7.61261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,7.645746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,7.981649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.02852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,7.633732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,7.916186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,7.894578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,7.16406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,7.545801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,7.566038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,7.261298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,7.556247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,7.836215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,7.96336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,7.28726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,7.657632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,7.618952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,7.473461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,7.497337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,7.724519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,7.512352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,7.392696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,7.379141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,7.582222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,7.224159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.31438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,7.524213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.401893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,7.627526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,7.393886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,7.034501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.351283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,7.27588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,7.362149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,7.168123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,7.237826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,7.160481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.373953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,7.250031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,7.324731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.263335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,7.036399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.103661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.422063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,6.990289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,6.643635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,7.22631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,7.2041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,7.302484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.342707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.268069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,6.85272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.032776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,6.942883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,6.315639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.048938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,6.708252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.08403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.139547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.228921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,6.804473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,6.839729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,6.927014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,6.669094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.044486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,6.497815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,6.945923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,6.524532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,6.369327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,6.490312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,6.457764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.077895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,6.883674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,6.85644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,6.750615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.158557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,6.723898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,6.872814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,6.677836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.017285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,6.280818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,6.308159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.282441);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,6.439462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,6.331424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,6.645377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,6.725894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,6.552319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,6.801618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,6.181731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,6.404896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.197604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.002456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,6.391128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,6.64822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,6.617332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,6.498519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.198993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,6.555697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,6.401996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.069766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,6.710463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.17347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.222654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.132947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,6.329089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.287976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,6.475262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.024636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.253546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,6.381131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,6.636311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.23834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,5.923507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.025654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.014526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,6.171836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,6.475836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.453256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,5.904578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.217904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,5.962961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,6.355552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,5.918157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.118272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,5.719092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.249346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,5.594785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,5.939723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.111388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,5.735416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,5.759833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.21792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.339607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.117303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,5.558547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,5.704833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,5.716622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,5.649832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.185307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,5.14632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,5.976451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,5.399142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,5.898263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.234848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.091182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,5.776854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,5.736701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,5.819671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,5.641094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,5.866164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,5.652179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,5.738434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,5.484259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,5.707628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,5.517565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,5.733939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,5.60882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.146943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,5.525641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,5.782335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,5.616822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.409347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,5.722456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,5.733416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,5.043324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,5.583528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,5.678151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.223462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,5.467143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,5.172472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,88.51209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(2082247);

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
   
   TH1D *VH_tagFirst_Z_mass__263 = new TH1D("VH_tagFirst_Z_mass__263","",1000,0,2000);
   VH_tagFirst_Z_mass__263->SetBinContent(1000,31);
   VH_tagFirst_Z_mass__263->SetBinContent(1001,17291);
   VH_tagFirst_Z_mass__263->SetEntries(1443866);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__263->SetLineColor(ci);
   VH_tagFirst_Z_mass__263->SetLineWidth(2);
   VH_tagFirst_Z_mass__263->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__263->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__263->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__263->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__263->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__263->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__263->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__263->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__263->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__263->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__263->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__263->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1263[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1263[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10241.16, 10439.19, 10412.18,
   10326.72, 10248.97, 10208.19, 10060.15, 9871.589, 9542.912, 9396.229, 9201.995, 9073.763, 8673.105, 8573.387, 8294.832, 8185.849, 7892.793, 7863.68, 7516.796,
   7509.493, 7266.048, 7041.131, 7015.851, 6719.441, 6663.665, 6629.796, 6510.375, 6192, 6193.599, 6069.354, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 23.46934 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1263[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1263[1000] = { 0, 0, 0, 0, 0, 0, 0.01263267, 0.02578307, 0.01299457, 0, 0.02612102, 0.8742705, 0.7647349, 3.219014, 7.164455, 11.51193, 16.47941,
   21.88684, 28.19499, 33.57928, 39.12574, 44.57246, 49.27857, 53.49808, 57.44536, 60.53498, 62.77692, 65.4116, 67.02703, 68.96141, 69.12648, 69.75358, 69.85459,
   69.68806, 69.67614, 69.55262, 69.27763, 68.84917, 67.82617, 67.75724, 67.22236, 67.03416, 66.2988, 65.91717, 65.0552, 64.92686, 63.96345, 64.15208, 62.72799,
   62.57002, 61.88629, 60.96323, 60.76258, 59.73309, 59.55857, 59.25046, 58.67436, 57.56509, 57.61457, 56.96175, 56.66096, 56.37221, 55.83684, 55.70527, 55.67589,
   55.04174, 54.70683, 54.39433, 53.92504, 53.92307, 53.38424, 52.86297, 52.64762, 52.43917, 51.99883, 52.00706, 51.4909, 51.04707, 50.6373, 50.78126, 50.67273,
   50.03772, 49.86981, 49.16861, 49.02543, 48.68867, 48.53026, 48.28461, 47.86587, 47.66121, 47.07293, 46.74094, 46.45842, 46.90387, 46.20515, 46.11997, 45.75833,
   45.26962, 45.31517, 44.81121, 44.81467, 44.28646, 44.22978, 43.73118, 43.49585, 43.71408, 43.24553, 43.40354, 42.94037, 42.34836, 42.57462, 42.75896, 41.65955,
   41.79852, 41.4552, 41.4045, 41.12822, 40.74107, 40.80265, 40.46251, 40.61625, 40.06267, 40.66164, 40.07791, 39.71762, 40.12675, 39.3955, 39.87391, 39.47516,
   39.96562, 39.33596, 38.71299, 38.49439, 38.41631, 38.62921, 38.007, 38.11952, 38.22144, 37.92987, 37.72904, 37.89225, 37.81746, 37.38839, 37.61735, 37.36866,
   37.41782, 37.15617, 36.73295, 36.66142, 36.80079, 36.39493, 36.32192, 37.02734, 36.56067, 36.05515, 36.83546, 36.02334, 35.97236, 35.66759, 35.529, 35.58668,
   35.66752, 35.60257, 35.36438, 35.59332, 35.5188, 35.20617, 35.14985, 34.64354, 35.01683, 34.67389, 34.29346, 34.72106, 34.58938, 34.49904, 33.70883, 34.5,
   34.10509, 34.6147, 34.40324, 34.13576, 34.61301, 33.82482, 33.67861, 33.50353, 33.36188, 33.39996, 33.40558, 33.26712, 33.01835, 33.22587, 33.10012, 32.98105,
   32.70394, 33.38438, 33.07271, 32.707, 32.77911, 32.63673, 32.71304, 32.56384, 32.70339, 32.39331, 32.18216, 32.33143, 32.02913, 31.83245, 31.86529, 32.02075,
   32.18331, 31.46951, 31.86669, 31.77934, 31.68505, 31.29024, 31.26433, 31.49827, 31.40735, 31.36243, 31.18897, 31.06117, 31.40253, 30.97402, 30.80113, 30.79621,
   30.82506, 30.5078, 31.22356, 30.33752, 30.49956, 30.65232, 30.72979, 30.42048, 30.45686, 30.10052, 30.24571, 29.89138, 30.38391, 30.73238, 30.47475, 30.16044,
   29.74472, 30.41377, 29.64598, 29.67719, 29.46921, 29.78471, 29.32607, 29.54453, 29.29886, 29.28987, 29.26747, 28.70706, 29.20678, 29.05449, 29.22347, 28.78066,
   28.61256, 28.67019, 28.61935, 28.39863, 28.69902, 28.79037, 28.66493, 28.09209, 28.46675, 28.40335, 28.47724, 28.46075, 28.05884, 28.16126, 28.27338, 28.17021,
   27.92173, 27.73432, 27.76816, 27.53863, 27.62338, 27.8954, 27.36822, 27.28446, 27.56508, 27.28847, 27.30437, 27.50126, 26.92593, 27.07583, 26.94571, 27.48913,
   26.6862, 27.20745, 26.85485, 26.58968, 26.60733, 26.57788, 26.33606, 26.28565, 26.43731, 26.15141, 25.86801, 26.18228, 25.62718, 26.39049, 25.74434, 25.8739,
   25.93769, 25.81973, 25.98965, 25.94141, 25.88799, 25.73139, 25.60547, 25.61341, 25.59259, 25.17278, 25.44736, 25.24728, 25.27909, 25.33037, 25.09744, 24.99747,
   26.3995, 25.13054, 25.17569, 24.92784, 24.80395, 24.80368, 24.73754, 24.79107, 24.7366, 24.58187, 24.38965, 24.60594, 24.81159, 24.28913, 24.0209, 24.12181,
   24.15856, 23.94571, 24.04199, 23.96999, 24.05546, 23.63903, 23.87956, 23.64332, 24.02723, 23.80354, 23.06823, 23.8668, 23.10485, 23.14448, 23.58867, 23.23853,
   23.25885, 23.05445, 23.58971, 23.02077, 23.07733, 22.99466, 22.83533, 23.01964, 22.63377, 22.61285, 22.65349, 22.63983, 22.58028, 22.3404, 22.3494, 22.54352,
   22.49625, 22.05304, 22.20139, 22.14048, 21.93742, 22.63372, 22.01225, 21.73547, 22.62432, 22.0433, 21.48711, 21.51733, 21.45404, 22.0106, 21.52419, 21.62646,
   21.36585, 21.60519, 20.97644, 20.90867, 20.81672, 20.86956, 20.87712, 21.2233, 21.06618, 20.7886, 20.61056, 20.52678, 20.73775, 21.31041, 21.34841, 20.73417,
   20.54368, 20.48236, 20.7806, 20.46125, 20.52638, 20.77449, 20.36131, 20.59548, 20.26165, 20.5352, 20.30985, 19.82063, 19.93606, 20.24575, 20.27476, 20.38784,
   19.82749, 19.81378, 19.90243, 20.41101, 19.75116, 19.74137, 19.39695, 19.59779, 19.93453, 19.18719, 19.56281, 19.42418, 19.24245, 19.53214, 19.27162, 19.37094,
   19.17831, 19.16245, 19.09063, 19.11173, 18.80978, 18.70696, 18.89901, 18.71364, 18.45402, 18.65144, 18.9597, 18.56557, 18.63452, 18.73158, 18.72927, 18.16324,
   18.48998, 18.23827, 18.21861, 18.17671, 18.25818, 18.26801, 18.28754, 17.9237, 18.02101, 17.98619, 18.1234, 18.22215, 18.26906, 17.70412, 17.81868, 17.2661,
   17.9339, 17.86364, 17.41894, 17.51158, 17.23619, 17.40567, 17.22589, 17.49926, 17.3306, 17.82359, 17.50832, 17.28941, 17.08918, 17.21801, 17.33484, 17.17985,
   16.91517, 17.33185, 16.6895, 16.8748, 17.23044, 16.93756, 16.58829, 17.18481, 16.67731, 16.60747, 16.09939, 16.50695, 16.74615, 16.51376, 16.62111, 16.20348,
   16.51473, 16.43607, 16.15068, 16.35105, 16.49076, 16.15003, 16.21445, 15.99585, 16.37489, 15.98421, 16.29668, 16.04538, 16.02227, 15.83517, 16.38445, 15.74192,
   15.76955, 15.88126, 15.42106, 15.36006, 16.1379, 15.3908, 15.56028, 15.25031, 15.72084, 15.66605, 15.44826, 15.31505, 15.07006, 16.24017, 14.94764, 15.25157,
   15.23536, 15.1216, 15.45118, 15.11161, 15.36491, 14.83706, 15.32803, 15.05285, 14.8386, 15.1403, 14.90031, 14.57183, 14.86677, 14.81855, 14.31236, 14.78919,
   14.78065, 14.17213, 14.43524, 14.27234, 14.45252, 14.49628, 14.47923, 14.54467, 13.9411, 14.0905, 14.45834, 14.2608, 14.47653, 14.17291, 13.90411, 14.19433,
   13.88625, 13.83586, 14.94884, 13.71569, 14.114, 13.80498, 13.70451, 13.63713, 13.76953, 13.72215, 13.94172, 13.78412, 14.20195, 13.53263, 13.66306, 13.55167,
   13.51278, 13.3544, 13.24784, 13.95739, 13.30677, 13.21016, 13.5091, 13.20722, 13.0531, 13.14176, 13.36857, 13.30181, 12.99954, 13.54914, 12.67967, 13.13415,
   13.33966, 13.13715, 13.06463, 13.08565, 13.04926, 12.80152, 12.82786, 12.59835, 12.93366, 13.0183, 13.08336, 12.91192, 13.02885, 12.49614, 12.26922, 12.76309,
   12.21521, 12.45107, 12.25764, 12.65593, 12.73846, 12.47872, 12.396, 13.07444, 12.49905, 12.13887, 12.64063, 12.3944, 12.75494, 12.18971, 12.66142, 12.63489,
   12.40698, 12.1802, 12.1715, 12.14597, 12.49909, 12.05232, 11.96105, 12.08569, 12.2532, 11.87932, 11.83047, 12.19903, 12.04745, 11.97883, 11.83085, 11.79337,
   11.85577, 11.89514, 11.31041, 11.99872, 11.90857, 11.88431, 11.76322, 11.45218, 12.15223, 11.2788, 11.94597, 11.56393, 12.34876, 11.35393, 11.5455, 11.5209,
   11.37466, 11.4702, 11.21244, 11.41374, 11.34289, 10.80332, 11.49172, 11.18002, 11.03961, 10.98215, 11.00519, 11.05903, 11.21949, 11.36452, 10.86408, 11.4434,
   11.18085, 10.96556, 10.97899, 10.65384, 10.85875, 10.74963, 10.63538, 10.84548, 11.24814, 10.74733, 11.14027, 10.44512, 10.85789, 10.68473, 10.72438, 10.62838,
   10.55741, 10.39281, 10.4766, 10.60972, 10.53645, 10.40443, 10.27519, 10.90628, 9.956212, 10.60747, 10.28429, 10.26782, 10.23663, 10.44783, 10.42975, 10.48825,
   10.16833, 10.09167, 9.990548, 10.63663, 10.14194, 10.3461, 10.35603, 10.08166, 10.01713, 10.18679, 9.712718, 9.826052, 9.706452, 9.997565, 10.33659, 9.785816,
   10.09339, 9.973106, 9.470984, 10.01011, 9.657444, 9.807887, 9.781997, 9.529329, 9.957222, 9.788739, 9.597075, 9.568502, 9.576887, 9.360395, 9.408743, 9.584571,
   9.928004, 9.600299, 9.316066, 9.401324, 9.811905, 9.774601, 9.194644, 9.628437, 9.592969, 9.304274, 9.22992, 9.718617, 9.508131, 11.01272, 9.811884, 9.383115,
   10.60161, 9.02336, 8.708096, 8.767258, 8.870007, 9.02411, 9.160633, 9.40461, 9.069046, 9.00437, 9.111268, 9.102594, 8.832488, 9.08989, 9.270329, 8.925325,
   8.657054, 8.790374, 8.646491, 9.009271, 9.069943, 8.870564, 9.056593, 8.706156, 8.49206, 8.473064, 8.696907, 9.22948, 8.767859, 8.868309, 8.585224, 8.887865,
   8.287853, 8.562809, 8.469806, 8.761157, 8.540122, 8.96245, 8.845059, 8.364099, 8.314719, 8.350073, 8.45298, 8.726454, 8.189404, 8.035438, 8.347758, 8.111109,
   8.247687, 8.071771, 8.509212, 8.336084, 8.310287, 8.19386, 8.715839, 7.86534, 8.187333, 8.171717, 8.131155, 8.332643, 8.046641, 8.125134, 7.694998, 7.79211,
   7.94492, 8.528177, 8.061854, 8.097683, 7.873434, 8.26837, 8.108466, 7.795443, 8.070916, 8.383736, 7.743662, 7.806231, 7.61261, 7.645746, 7.981649, 8.02852,
   7.633732, 7.916186, 7.894578, 7.16406, 7.545801, 7.566038, 7.261298, 7.556247, 7.836215, 7.96336, 7.28726, 7.657632, 7.618952, 7.473461, 7.497337, 7.724519,
   7.512352, 7.392696, 7.379141, 7.582222, 7.224159, 7.31438, 7.524213, 7.401893, 7.627526, 7.393886, 7.034501, 7.351283, 7.27588, 7.362149, 7.168123, 7.237826,
   7.160481, 7.373953, 7.250031, 7.324731, 7.263335, 7.036399, 7.103661, 7.422063, 6.990289, 6.643635, 7.22631, 7.2041, 7.302484, 7.342707, 7.268069, 6.85272,
   7.032776, 6.942883, 6.315639, 7.048938, 6.708252, 7.08403, 7.139547, 7.228921, 6.804473, 6.839729, 6.927014, 6.669094, 7.044486, 6.497815, 6.945923, 6.524532,
   6.369327, 6.490312, 6.457764, 6.077895, 6.883674, 6.85644, 6.750615, 7.158557, 6.723898, 6.872814, 6.677836, 7.017285, 6.280818, 6.308159, 6.282441, 6.439462,
   6.331424, 6.645377, 6.725894, 6.552319, 6.801618, 6.181731, 6.404896, 6.197604, 7.002456, 6.391128, 6.64822, 6.617332, 6.498519, 6.198993, 6.555697, 6.401996,
   6.069766, 6.710463, 6.17347, 6.222654, 6.132947, 6.329089, 6.287976, 6.475262, 6.024636, 6.253546, 6.381131, 6.636311, 6.23834, 5.923507, 6.025654, 6.014526,
   6.171836, 6.475836, 6.453256, 5.904578, 6.217904, 5.962961, 6.355552, 5.918157, 6.118272, 5.719092, 6.249346, 5.594785, 5.939723, 6.111388, 5.735416, 5.759833,
   6.21792, 6.339607, 6.117303, 5.558547, 5.704833, 5.716622, 5.649832, 6.185307, 5.14632, 5.976451, 5.399142, 5.898263, 6.234848, 6.091182, 5.776854, 5.736701,
   5.819671, 5.641094, 5.866164, 5.652179, 5.738434, 5.484259, 5.707628, 5.517565, 5.733939, 5.60882, 5.146943, 5.525641, 5.782335, 5.616822, 5.409347, 5.722456,
   5.733416, 5.043324, 5.583528, 5.678151, 5.223462, 5.467143, 5.172472 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1263,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1263,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1263,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1263);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->SetMinimum(-1126.752);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->SetMaximum(11566.74);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1263);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__264 = new TH1D("data_mc_ratio__264","",1000,0,2000);
   data_mc_ratio__264->SetBinContent(1000,1.320872);
   data_mc_ratio__264->SetBinContent(1001,1.122122);
   data_mc_ratio__264->SetBinError(1000,0.2372357);
   data_mc_ratio__264->SetBinError(1001,0.01069426);
   data_mc_ratio__264->SetMinimum(0.4);
   data_mc_ratio__264->SetMaximum(1.6);
   data_mc_ratio__264->SetEntries(12.37149);
   data_mc_ratio__264->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__264->SetLineColor(ci);
   data_mc_ratio__264->SetLineWidth(2);
   data_mc_ratio__264->SetMarkerStyle(20);
   data_mc_ratio__264->SetMarkerSize(1.2);
   data_mc_ratio__264->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__264->GetXaxis()->SetRange(1,150);
   data_mc_ratio__264->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__264->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__264->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__264->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__264->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__264->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__264->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__264->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__264->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__264->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__264->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__264->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__264->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__264->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__264->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__264->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1264[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1264[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1264[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1264[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006749866, 0.006681894, 0.006708928,
   0.006748325, 0.006798357, 0.006813413, 0.006886345, 0.006974477, 0.007107491, 0.00721111, 0.007305194, 0.007387691, 0.007644183, 0.00768858, 0.00784286, 0.007931598, 0.008104032, 0.008158023, 0.008345045,
   0.008332123, 0.008517186, 0.008658159, 0.008660757, 0.008889593, 0.00893781, 0.008936997, 0.009012439, 0.009296688, 0.009302276, 0.009385142, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2203927 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1264,Graph_from_mc_statistical_error_fy1264,Graph_from_mc_statistical_error_fex1264,Graph_from_mc_statistical_error_fey1264);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1264 = new TH1F("Graph_Graph_from_mc_statistical_error1264","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1264->SetMinimum(0.7355287);
   Graph_Graph_from_mc_statistical_error1264->SetMaximum(1.264471);
   Graph_Graph_from_mc_statistical_error1264->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1264->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1264->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1264->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1264->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1264->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1264->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1264->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1264->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1264);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->SetSelected(Z_mass_tagFirst_SR_17);
}
