#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_SR_16()
{
//=========Macro generated from canvas: H_mass_tagOnly_SR_16/H_mass_tagOnly_SR_16
//=========  (Fri Dec  8 12:19:05 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tagOnly_SR_16 = new TCanvas("H_mass_tagOnly_SR_16", "H_mass_tagOnly_SR_16",0,0,600,600);
   H_mass_tagOnly_SR_16->SetHighLightColor(2);
   H_mass_tagOnly_SR_16->Range(0,0,1,1);
   H_mass_tagOnly_SR_16->SetFillColor(0);
   H_mass_tagOnly_SR_16->SetFillStyle(4000);
   H_mass_tagOnly_SR_16->SetBorderMode(0);
   H_mass_tagOnly_SR_16->SetBorderSize(2);
   H_mass_tagOnly_SR_16->SetFrameFillStyle(1000);
   H_mass_tagOnly_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-39.60181,315.7258,39572.2);
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
   st->SetMaximum(35611.02);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",1000,0,2000);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(35611.02);
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
   st_stack_3->GetYaxis()->SetTitle("Events/2.0");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,8051.608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(49,16024.96);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(50,15970.36);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(51,15874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(52,15773.26);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(53,15736.17);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(54,15784.64);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(55,15695.29);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(56,15773.84);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(57,15738.51);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(58,15649.74);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(59,15647.4);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(60,15687.41);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(61,15437.46);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(62,15620.25);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(63,15659.96);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(64,15543.45);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(65,15475.12);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(66,15339.05);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(67,15372.05);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(68,15254.37);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(69,15244.74);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(70,15251.16);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(71,15153.34);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(72,14991.57);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(73,15000.62);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(74,14956.24);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(75,14668.62);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(76,14613.43);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(77,14545.1);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,7222.62);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,52.852);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,28759.66);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.4129504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.715251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,2.890653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,7.020156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,12.20127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,17.33408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,22.97541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,28.74384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,34.5462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,39.82991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,45.13266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,49.77979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,53.96473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,57.77174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,60.93712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,63.16656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,65.13498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,66.4555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,67.925);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,68.6318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,69.17196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,69.80083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,69.94177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,69.79472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,70.27986);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,69.98991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,70.61753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,70.65797);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,70.79419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,70.8255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,70.73335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,70.438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,70.34958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,70.37382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,70.16147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,69.79289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,69.33017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,68.76027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,68.5765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,68.40532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,68.28868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,68.08235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,67.86598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,67.78615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,67.89047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,67.69804);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,67.86723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,67.79118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,67.59973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,67.59469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,67.68104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,67.13968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,67.53601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,67.6218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,67.36979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,67.22155);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,66.92536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,66.9973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,66.74037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,66.71928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,66.73334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,66.51898);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,66.16297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,66.18294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,66.08496);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,65.44644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,65.32321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,65.17032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,65.04787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,64.75754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,64.54389);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,64.65542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,64.1078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,63.95533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,63.42654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,63.20434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,63.09633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,62.78543);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,62.7929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,62.32815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,62.13016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,61.63275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,61.33877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,61.3617);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,60.88883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,60.68263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,60.27024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,60.10166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,60.19734);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,59.70954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,59.49854);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,59.25658);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,59.16009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,58.61568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,58.39781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,57.95667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,58.18059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,57.92944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,57.5025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,57.1418);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,56.97668);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,56.60735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,56.52293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,56.66756);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,56.23408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,56.08605);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,55.70622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,55.759);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,55.32995);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,55.27754);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,54.99299);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,54.90687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,54.57354);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,54.73812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,54.35829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,53.77717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,53.77004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,53.84768);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,53.6478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,53.4703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,53.34977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,52.9318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,52.87055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,52.79228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,52.58676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,52.378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,52.24924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,52.15205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,51.92266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,51.73264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,51.60062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,51.31147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,51.05827);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,51.07914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,50.82897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,50.72738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,50.69544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,50.30542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,50.13649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,50.16455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,49.9815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,50.09141);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,49.78407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,49.53253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,49.52651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,49.45328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,48.82341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,49.02036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,48.62655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,48.58357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,48.60726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,48.37339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,48.3637);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,47.89334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,47.82475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,47.85327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,47.40483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,47.70873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,47.21018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,47.28777);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,46.91305);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,47.02288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,46.67527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,46.60671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,46.6442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,46.27256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,46.28085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,46.05739);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,46.0083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,45.91276);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,46.0907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,45.45175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,45.6987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,45.3541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,45.25623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,45.05987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,44.90349);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,44.90633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,44.8151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,44.53933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,44.19244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,44.41185);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,44.14225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,44.21077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,43.97194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,43.58436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,43.58338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,43.67426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,43.69378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,43.55011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,43.08262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,43.19627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,43.07173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,42.86536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,42.85144);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,42.29567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,42.43655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,42.4466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,42.19678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,42.25534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,42.18263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,41.95868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,41.69981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,41.57489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,41.51024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,41.4002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,41.17821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,41.38682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,41.32909);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,40.54386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,40.75048);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,40.68871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,40.33935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,40.26001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,40.1837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,39.8481);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,40.04128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,40.11149);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,39.89195);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,39.63893);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,39.69589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,39.77314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,39.39187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,39.4708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,39.15196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,39.37672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,38.85027);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,39.032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,38.70074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,38.44322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,38.35106);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,38.35329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,38.15156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,38.09565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,38.06094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,38.21967);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,38.01163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,37.73472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,37.83851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,37.67818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,37.63856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,37.34976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,37.48307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,37.08055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,37.15291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,37.01035);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,36.78157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,36.77693);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,36.75026);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,36.55719);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,36.42985);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,36.60147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,36.47196);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,35.78877);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,35.85422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,35.75778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,35.97056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,35.83519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,35.60006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,35.4284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,35.44765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,35.29458);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,35.04365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,34.97911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,35.02296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,34.91934);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,34.82154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,34.84357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,34.48074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,34.57088);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,34.23879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,34.37176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,34.41638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,34.12405);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,33.93613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,34.05651);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,33.87074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,33.75601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,33.78);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,33.67888);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,33.49738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,33.38902);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,33.32);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,33.2393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,33.08632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,32.86135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,33.18153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,32.64659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,32.92098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,32.67139);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,32.66878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,32.66095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,32.17835);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,32.14521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,31.92296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,32.10407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,32.01098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,31.84005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,31.84942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,31.959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,31.80656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,31.61296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,31.50219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,31.62914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,31.37064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,31.29717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,31.08943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,30.98917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,30.74193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,31.20031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,30.84853);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,30.94373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,31.05101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,30.56391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,30.65861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,30.46051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,30.35396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,30.33007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,30.05757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,29.93961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,30.00504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,29.98372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,29.89972);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,29.92252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,29.48043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,29.75249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,29.58725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,29.5079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,29.51368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,29.42833);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,29.09909);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,29.14154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,29.14008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,29.10202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,29.04483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,28.59663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,28.93453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,28.66215);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,28.8031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,28.46963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,28.45465);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,28.37964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,28.36912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,28.27278);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,28.26373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,28.13674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,27.82287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,27.86727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,27.89632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,27.96958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,27.53639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,27.85043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,27.55187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,27.39203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,27.27974);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,27.37335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,27.31566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,27.22968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,26.98118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,27.11043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,26.97012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,26.81953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,26.53829);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,26.81953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,26.47073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,26.48844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,26.58483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,26.49488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,26.55274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,26.25241);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,26.16457);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,26.27838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,26.12054);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,26.00604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,26.00112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,25.9486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,25.89597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,25.74076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,25.78544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,25.52287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,25.47104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,25.35865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,25.52955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,25.42581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,25.19674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,25.21535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,25.19166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,25.25083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,25.10691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,24.92114);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,24.91771);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,24.8749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,24.69257);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,24.71673);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,24.65628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,24.49147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,24.66838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,24.29222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,24.46883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,24.50713);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,24.30275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,24.0435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,24.03641);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,24.03818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,24.09487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,23.87982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,23.82083);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,23.9938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,23.80472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,23.77067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,23.54904);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,23.53636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,23.65921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,23.05506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,23.53998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,23.10678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,23.29787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,23.24841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,23.26857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,23.29238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,22.95685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,23.01249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,22.73478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,23.04581);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,22.81714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,22.701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,22.78161);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,22.63518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,22.50295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,22.35851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,22.27062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,22.53514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,22.27828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,22.26297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,22.12466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,22.07644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,21.95444);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,22.03971);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,22.24764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,22.12659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,21.64742);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,21.61983);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,21.97773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,21.7868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,21.70053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,21.69267);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,21.28598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,21.5012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,21.18359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,21.304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,21.19767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,21.24789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,21.37791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,21.05439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,21.12111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,21.0098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,21.00574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,20.82638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,20.74433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,20.89382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,20.98544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,20.76282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,20.75255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,20.55232);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,20.56269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,20.64132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,20.2156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,20.44);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,20.36896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,20.1776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,20.25773);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,20.12895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,19.89889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,20.0249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,20.02916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,19.90318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,19.98227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,19.60101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,20.00147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,19.59883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,19.54656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,19.68565);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,19.39548);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,19.33384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,19.22327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,19.32722);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,19.36028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,18.98674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,19.30074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,19.13881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,19.08528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,19.11652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,19.22992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,19.20108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,18.76767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,19.04055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,18.84475);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,19.07187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,18.55981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,18.49308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,18.75859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,18.31936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,18.45385);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,18.69256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,18.43998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,18.55981);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,18.69712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,18.15104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,18.27976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,18.10871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,18.07808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,18.19326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,18.12753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,18.11812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,18.09222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,17.8598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,17.80721);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,17.80961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,17.60254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,18.00483);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,17.74005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,17.74966);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,17.67264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,17.45906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,17.339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,17.59527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,17.58315);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,17.60738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,17.48102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,17.33408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,17.23542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,17.43952);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,17.16851);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,16.94858);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,17.2379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,17.20571);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,17.17844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,16.87295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,17.1958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,17.11628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,16.63631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,16.70281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,16.90072);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,16.71557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,16.67727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,16.56183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,16.72322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,16.54638);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,16.5747);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,16.49735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,16.21323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,16.51801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,16.28669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,16.06796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,16.15528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,16.08917);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,16.08122);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,15.87309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,16.33896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,16.352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,16.03875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,16.09977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,15.95614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,15.95346);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,16.08652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,15.531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,15.75177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,15.72468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,15.50352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,15.68124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,15.53649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,15.53374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,15.31818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,15.46498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,15.48151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,15.65131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,15.12774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,15.29032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,15.32374);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,15.20364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,15.22326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,15.27358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,15.16433);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,15.17277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,15.1221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,14.93488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,14.892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,14.85187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,14.92631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,15.01459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,14.91774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,14.68153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,14.9206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,14.83751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,14.81163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,14.73081);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,14.54735);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,14.38822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,14.71923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,14.30204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,14.58247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,14.35559);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,14.21533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,14.29608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,14.33776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,14.07973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,14.31991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,14.28116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,14.09184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,14.10393);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,14.32289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,13.8938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,14.04942);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,13.73021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,13.83846);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,14.14016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,14.07367);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,13.8477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,13.97335);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,13.71157);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,13.57093);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,13.33644);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,13.38112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,13.69913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,13.59918);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,13.73021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,13.61171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,13.50796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,13.49533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,13.28199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,13.58035);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,13.37156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,13.38112);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,13.03249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,13.02922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,12.97676);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,12.9899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,13.39386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,12.94058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,13.33005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,13.22409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,13.10426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,12.99318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,13.01613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,13.0945);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,12.57636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,12.73803);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,12.78146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,12.67428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,12.83472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,12.57974);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,12.94058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,12.81145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,12.60345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,12.55939);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,12.41944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,12.42974);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,12.45372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,12.71123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,12.41944);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,12.37129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,12.16628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,12.22221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,12.25705);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,12.29871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,12.18379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,12.30911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,12.44002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,12.05362);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,11.81067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,12.04655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,11.91131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,12.04655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,12.00401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,11.84671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,11.74189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,11.78899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,11.76003);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,11.95062);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,11.90057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,11.94348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,12.1347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,11.86828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,11.59575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,11.388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,11.44029);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,11.66539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,11.64344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,11.58471);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,11.67635);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,11.64344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,11.48492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,11.66174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,11.36552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,11.50347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,11.13818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,11.3505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,11.19545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,11.50717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,11.19545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,11.12286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,11.34675);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,11.3505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,11.10368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,11.2978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,11.14584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,11.20687);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,11.06137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,11.47749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,10.83946);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,11.22207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,10.84339);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,11.06522);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,11.01502);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,10.7882);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,10.88655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,10.71684);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,10.76447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,10.64099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,10.81977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,10.60889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,10.5928);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,10.56863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,10.98789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,10.40192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,10.79216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,10.56863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,10.52011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,10.6129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,10.39372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,10.653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,10.32789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,10.649);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,10.41421);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,10.44691);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,10.21583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,10.30309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,10.28238);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,10.34439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,10.08563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,10.46729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,10.11518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,10.27409);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,10.23251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,10.19076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,10.29895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,10.19076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,9.910809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,10.056);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,10.19076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,9.979396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,9.80268);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,9.71531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,9.618287);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,10.10252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,10.07717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,9.710921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,9.622718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,9.515796);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,9.560492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,9.750352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,9.824401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,9.344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,9.622718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,9.502346);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,9.520275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,9.640423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,9.684544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,9.443842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,9.344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,9.520275);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,9.484383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,9.533699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,9.710921);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,9.348561);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,9.466386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,9.622718);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,9.466386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,9.375883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,9.631575);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,9.182924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,9.256907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,9.182924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,9.366785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,9.075518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,9.098975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,9.452866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,9.196841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,9.098975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,9.127044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,9.080214);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,8.789151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,9.201476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,8.82304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,9.136381);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,9.066118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,8.885632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,8.808532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,9.014244);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,9.061414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,9.03786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,8.832698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,8.95255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,8.706302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,8.745388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,8.681784);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,8.900014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,8.7843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,8.6916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,8.657197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,8.617711);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,8.607811);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,8.533197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,8.735633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,8.5979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,8.538192);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,8.51319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,8.176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,8.176);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,8.402297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,8.387061);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,8.51319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,8.207226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,8.402297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,8.181213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,8.269325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,8.207226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,8.361608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,8.284776);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,8.191628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,8.3002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,7.856916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,8.341188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,8.361608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,8.149887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,8.11844);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,8.3002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,7.873178);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,8.196831);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,8.346298);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,7.862341);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,8.269325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,7.943259);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,8.361608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,7.769615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,7.791532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,7.846057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,7.93789);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,7.894807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,7.878591);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,7.802467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,7.608828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,7.714549);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,7.786058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,7.818842);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,7.840621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,8.081598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,7.703489);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,7.697953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,7.884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,7.427369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,7.753136);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,7.473147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,7.569505);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,7.608828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,7.46744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,7.742131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,7.736623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,7.580761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,7.742131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,7.614428);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,7.461728);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,7.620025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,7.512973);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,7.427369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,7.270741);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,7.25313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,7.524314);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,7.340766);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,7.259005);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,7.501616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,7.323323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,7.647948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,7.317499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,7.305838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,7.134606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,7.484547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,6.916148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,7.241365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,7.39285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,7.038351);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,7.473147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,6.810552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,7.176312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,7.092655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,7.134606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,6.860447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,7.188184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,6.940761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,6.983624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,6.983624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,6.989726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,7.050455);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,6.810552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,6.977517);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,7.104667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,6.922309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,7.001914);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,6.897631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,6.785467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,6.885258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,6.885258);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,6.922309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,6.835545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,6.684186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,6.798021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,6.443878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,6.363992);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,6.798021);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,6.607206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,6.613655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,6.766592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,6.772889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,6.410714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,6.645807);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,6.430633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,6.555384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,6.696929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,6.343864);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,6.785467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,6.594288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,6.476873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,6.568378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,6.658624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,6.410714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,6.665024);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,6.397399);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,6.450491);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,6.535845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,6.696929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,6.276302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,6.221725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,6.276302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,6.522786);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,6.145889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,6.269506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,6.289872);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,6.542364);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,6.33714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,6.166664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,6.173573);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,6.221725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,6.076126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,6.303414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,5.948492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,6.303414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,6.296647);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,6.269506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,6.194255);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,6.019734);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,6.019734);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,6.111107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,6.323671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,5.890878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,5.810727);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,6.35729);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,5.962809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,6.166664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,5.934141);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,5.941321);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,6.104127);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,5.962809);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,5.832695);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,5.825382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,6.262702);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,5.818059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,6.125044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,5.616732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,6.040943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,6.166664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,5.796035);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,5.825382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,6.33714);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,5.919755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,5.699613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,5.948492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,5.890878);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,5.684633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,5.692128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,5.766538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,5.3285);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,91.63963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(1.122467e+07);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_H_mass__5 = new TH1D("VH_tagOnly_H_mass__5","",1000,0,2000);
   VH_tagOnly_H_mass__5->SetBinContent(1000,61);
   VH_tagOnly_H_mass__5->SetBinContent(1001,36743);
   VH_tagOnly_H_mass__5->SetEntries(3436913);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__5->SetLineColor(ci);
   VH_tagOnly_H_mass__5->SetLineWidth(2);
   VH_tagOnly_H_mass__5->SetMarkerStyle(20);
   VH_tagOnly_H_mass__5->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__5->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__5->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__5->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__5->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__5->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__5->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1005[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8051.608, 16024.96,
   15970.36, 15874, 15773.26, 15736.17, 15784.64, 15695.29, 15773.84, 15738.51, 15649.74, 15647.4, 15687.41, 15437.46, 15620.25, 15659.96, 15543.45, 15475.12,
   15339.05, 15372.05, 15254.37, 15244.74, 15251.16, 15153.34, 14991.57, 15000.62, 14956.24, 14668.62, 14613.43, 14545.1, 7222.62, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 52.852 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1005[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1005[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4129504, 0.715251, 2.890653, 7.020156, 12.20127, 17.33408, 22.97541, 28.74384,
   34.5462, 39.82991, 45.13266, 49.77979, 53.96473, 57.77174, 60.93712, 63.16656, 65.13498, 66.4555, 67.925, 68.6318, 69.17196, 69.80083, 69.94177, 69.79472,
   70.27986, 69.98991, 70.61753, 70.65797, 70.79419, 70.8255, 70.73335, 70.438, 70.34958, 70.37382, 70.16147, 69.79289, 69.33017, 68.76027, 68.5765, 68.40532,
   68.28868, 68.08235, 67.86598, 67.78615, 67.89047, 67.69804, 67.86723, 67.79118, 67.59973, 67.59469, 67.68104, 67.13968, 67.53601, 67.6218, 67.36979, 67.22155,
   66.92536, 66.9973, 66.74037, 66.71928, 66.73334, 66.51898, 66.16297, 66.18294, 66.08496, 65.44644, 65.32321, 65.17032, 65.04787, 64.75754, 64.54389, 64.65542,
   64.1078, 63.95533, 63.42654, 63.20434, 63.09633, 62.78543, 62.7929, 62.32815, 62.13016, 61.63275, 61.33877, 61.3617, 60.88883, 60.68263, 60.27024, 60.10166,
   60.19734, 59.70954, 59.49854, 59.25658, 59.16009, 58.61568, 58.39781, 57.95667, 58.18059, 57.92944, 57.5025, 57.1418, 56.97668, 56.60735, 56.52293, 56.66756,
   56.23408, 56.08605, 55.70622, 55.759, 55.32995, 55.27754, 54.99299, 54.90687, 54.57354, 54.73812, 54.35829, 53.77717, 53.77004, 53.84768, 53.6478, 53.4703,
   53.34977, 52.9318, 52.87055, 52.79228, 52.58676, 52.378, 52.24924, 52.15205, 51.92266, 51.73264, 51.60062, 51.31147, 51.05827, 51.07914, 50.82897, 50.72738,
   50.69544, 50.30542, 50.13649, 50.16455, 49.9815, 50.09141, 49.78407, 49.53253, 49.52651, 49.45328, 48.82341, 49.02036, 48.62655, 48.58357, 48.60726, 48.37339,
   48.3637, 47.89334, 47.82475, 47.85327, 47.40483, 47.70873, 47.21018, 47.28777, 46.91305, 47.02288, 46.67527, 46.60671, 46.6442, 46.27256, 46.28085, 46.05739,
   46.0083, 45.91276, 46.0907, 45.45175, 45.6987, 45.3541, 45.25623, 45.05987, 44.90349, 44.90633, 44.8151, 44.53933, 44.19244, 44.41185, 44.14225, 44.21077,
   43.97194, 43.58436, 43.58338, 43.67426, 43.69378, 43.55011, 43.08262, 43.19627, 43.07173, 42.86536, 42.85144, 42.29567, 42.43655, 42.4466, 42.19678, 42.25534,
   42.18263, 41.95868, 41.69981, 41.57489, 41.51024, 41.4002, 41.17821, 41.38682, 41.32909, 40.54386, 40.75048, 40.68871, 40.33935, 40.26001, 40.1837, 39.8481,
   40.04128, 40.11149, 39.89195, 39.63893, 39.69589, 39.77314, 39.39187, 39.4708, 39.15196, 39.37672, 38.85027, 39.032, 38.70074, 38.44322, 38.35106, 38.35329,
   38.15156, 38.09565, 38.06094, 38.21967, 38.01163, 37.73472, 37.83851, 37.67818, 37.63856, 37.34976, 37.48307, 37.08055, 37.15291, 37.01035, 36.78157, 36.77693,
   36.75026, 36.55719, 36.42985, 36.60147, 36.47196, 35.78877, 35.85422, 35.75778, 35.97056, 35.83519, 35.60006, 35.4284, 35.44765, 35.29458, 35.04365, 34.97911,
   35.02296, 34.91934, 34.82154, 34.84357, 34.48074, 34.57088, 34.23879, 34.37176, 34.41638, 34.12405, 33.93613, 34.05651, 33.87074, 33.75601, 33.78, 33.67888,
   33.49738, 33.38902, 33.32, 33.2393, 33.08632, 32.86135, 33.18153, 32.64659, 32.92098, 32.67139, 32.66878, 32.66095, 32.17835, 32.14521, 31.92296, 32.10407,
   32.01098, 31.84005, 31.84942, 31.959, 31.80656, 31.61296, 31.50219, 31.62914, 31.37064, 31.29717, 31.08943, 30.98917, 30.74193, 31.20031, 30.84853, 30.94373,
   31.05101, 30.56391, 30.65861, 30.46051, 30.35396, 30.33007, 30.05757, 29.93961, 30.00504, 29.98372, 29.89972, 29.92252, 29.48043, 29.75249, 29.58725, 29.5079,
   29.51368, 29.42833, 29.09909, 29.14154, 29.14008, 29.10202, 29.04483, 28.59663, 28.93453, 28.66215, 28.8031, 28.46963, 28.45465, 28.37964, 28.36912, 28.27278,
   28.26373, 28.13674, 27.82287, 27.86727, 27.89632, 27.96958, 27.53639, 27.85043, 27.55187, 27.39203, 27.27974, 27.37335, 27.31566, 27.22968, 26.98118, 27.11043,
   26.97012, 26.81953, 26.53829, 26.81953, 26.47073, 26.48844, 26.58483, 26.49488, 26.55274, 26.25241, 26.16457, 26.27838, 26.12054, 26.00604, 26.00112, 25.9486,
   25.89597, 25.74076, 25.78544, 25.52287, 25.47104, 25.35865, 25.52955, 25.42581, 25.19674, 25.21535, 25.19166, 25.25083, 25.10691, 24.92114, 24.91771, 24.8749,
   24.69257, 24.71673, 24.65628, 24.49147, 24.66838, 24.29222, 24.46883, 24.50713, 24.30275, 24.0435, 24.03641, 24.03818, 24.09487, 23.87982, 23.82083, 23.9938,
   23.80472, 23.77067, 23.54904, 23.53636, 23.65921, 23.05506, 23.53998, 23.10678, 23.29787, 23.24841, 23.26857, 23.29238, 22.95685, 23.01249, 22.73478, 23.04581,
   22.81714, 22.701, 22.78161, 22.63518, 22.50295, 22.35851, 22.27062, 22.53514, 22.27828, 22.26297, 22.12466, 22.07644, 21.95444, 22.03971, 22.24764, 22.12659,
   21.64742, 21.61983, 21.97773, 21.7868, 21.70053, 21.69267, 21.28598, 21.5012, 21.18359, 21.304, 21.19767, 21.24789, 21.37791, 21.05439, 21.12111, 21.0098,
   21.00574, 20.82638, 20.74433, 20.89382, 20.98544, 20.76282, 20.75255, 20.55232, 20.56269, 20.64132, 20.2156, 20.44, 20.36896, 20.1776, 20.25773, 20.12895,
   19.89889, 20.0249, 20.02916, 19.90318, 19.98227, 19.60101, 20.00147, 19.59883, 19.54656, 19.68565, 19.39548, 19.33384, 19.22327, 19.32722, 19.36028, 18.98674,
   19.30074, 19.13881, 19.08528, 19.11652, 19.22992, 19.20108, 18.76767, 19.04055, 18.84475, 19.07187, 18.55981, 18.49308, 18.75859, 18.31936, 18.45385, 18.69256,
   18.43998, 18.55981, 18.69712, 18.15104, 18.27976, 18.10871, 18.07808, 18.19326, 18.12753, 18.11812, 18.09222, 17.8598, 17.80721, 17.80961, 17.60254, 18.00483,
   17.74005, 17.74966, 17.67264, 17.45906, 17.339, 17.59527, 17.58315, 17.60738, 17.48102, 17.33408, 17.23542, 17.43952, 17.16851, 16.94858, 17.2379, 17.20571,
   17.17844, 16.87295, 17.1958, 17.11628, 16.63631, 16.70281, 16.90072, 16.71557, 16.67727, 16.56183, 16.72322, 16.54638, 16.5747, 16.49735, 16.21323, 16.51801,
   16.28669, 16.06796, 16.15528, 16.08917, 16.08122, 15.87309, 16.33896, 16.352, 16.03875, 16.09977, 15.95614, 15.95346, 16.08652, 15.531, 15.75177, 15.72468,
   15.50352, 15.68124, 15.53649, 15.53374, 15.31818, 15.46498, 15.48151, 15.65131, 15.12774, 15.29032, 15.32374, 15.20364, 15.22326, 15.27358, 15.16433, 15.17277,
   15.1221, 14.93488, 14.892, 14.85187, 14.92631, 15.01459, 14.91774, 14.68153, 14.9206, 14.83751, 14.81163, 14.73081, 14.54735, 14.38822, 14.71923, 14.30204,
   14.58247, 14.35559, 14.21533, 14.29608, 14.33776, 14.07973, 14.31991, 14.28116, 14.09184, 14.10393, 14.32289, 13.8938, 14.04942, 13.73021, 13.83846, 14.14016,
   14.07367, 13.8477, 13.97335, 13.71157, 13.57093, 13.33644, 13.38112, 13.69913, 13.59918, 13.73021, 13.61171, 13.50796, 13.49533, 13.28199, 13.58035, 13.37156,
   13.38112, 13.03249, 13.02922, 12.97676, 12.9899, 13.39386, 12.94058, 13.33005, 13.22409, 13.10426, 12.99318, 13.01613, 13.0945, 12.57636, 12.73803, 12.78146,
   12.67428, 12.83472, 12.57974, 12.94058, 12.81145, 12.60345, 12.55939, 12.41944, 12.42974, 12.45372, 12.71123, 12.41944, 12.37129, 12.16628, 12.22221, 12.25705,
   12.29871, 12.18379, 12.30911, 12.44002, 12.05362, 11.81067, 12.04655, 11.91131, 12.04655, 12.00401, 11.84671, 11.74189, 11.78899, 11.76003, 11.95062, 11.90057,
   11.94348, 12.1347, 11.86828, 11.59575, 11.388, 11.44029, 11.66539, 11.64344, 11.58471, 11.67635, 11.64344, 11.48492, 11.66174, 11.36552, 11.50347, 11.13818,
   11.3505, 11.19545, 11.50717, 11.19545, 11.12286, 11.34675, 11.3505, 11.10368, 11.2978, 11.14584, 11.20687, 11.06137, 11.47749, 10.83946, 11.22207, 10.84339,
   11.06522, 11.01502, 10.7882, 10.88655, 10.71684, 10.76447, 10.64099, 10.81977, 10.60889, 10.5928, 10.56863, 10.98789, 10.40192, 10.79216, 10.56863, 10.52011,
   10.6129, 10.39372, 10.653, 10.32789, 10.649, 10.41421, 10.44691, 10.21583, 10.30309, 10.28238, 10.34439, 10.08563, 10.46729, 10.11518, 10.27409, 10.23251,
   10.19076, 10.29895, 10.19076, 9.910809, 10.056, 10.19076, 9.979396, 9.80268, 9.71531, 9.618287, 10.10252, 10.07717, 9.710921, 9.622718, 9.515796, 9.560492,
   9.750352, 9.824401, 9.344, 9.622718, 9.502346, 9.520275, 9.640423, 9.684544, 9.443842, 9.344, 9.520275, 9.484383, 9.533699, 9.710921, 9.348561, 9.466386,
   9.622718, 9.466386, 9.375883, 9.631575, 9.182924, 9.256907, 9.182924, 9.366785, 9.075518, 9.098975, 9.452866, 9.196841, 9.098975, 9.127044, 9.080214, 8.789151,
   9.201476, 8.82304, 9.136381, 9.066118, 8.885632, 8.808532, 9.014244, 9.061414, 9.03786, 8.832698, 8.95255, 8.706302, 8.745388, 8.681784, 8.900014, 8.7843,
   8.6916, 8.657197, 8.617711, 8.607811, 8.533197, 8.735633, 8.5979, 8.538192, 8.51319, 8.176, 8.176, 8.402297, 8.387061, 8.51319, 8.207226, 8.402297,
   8.181213, 8.269325, 8.207226, 8.361608, 8.284776, 8.191628, 8.3002, 7.856916, 8.341188, 8.361608, 8.149887, 8.11844, 8.3002, 7.873178, 8.196831, 8.346298,
   7.862341, 8.269325, 7.943259, 8.361608, 7.769615, 7.791532, 7.846057, 7.93789, 7.894807, 7.878591, 7.802467, 7.608828, 7.714549, 7.786058, 7.818842, 7.840621,
   8.081598, 7.703489, 7.697953, 7.884, 7.427369, 7.753136, 7.473147, 7.569505, 7.608828, 7.46744, 7.742131, 7.736623, 7.580761, 7.742131, 7.614428, 7.461728,
   7.620025, 7.512973, 7.427369, 7.270741, 7.25313, 7.524314, 7.340766, 7.259005, 7.501616, 7.323323, 7.647948, 7.317499, 7.305838, 7.134606, 7.484547, 6.916148,
   7.241365, 7.39285, 7.038351, 7.473147, 6.810552, 7.176312, 7.092655, 7.134606, 6.860447, 7.188184, 6.940761, 6.983624, 6.983624, 6.989726, 7.050455, 6.810552,
   6.977517, 7.104667, 6.922309, 7.001914, 6.897631, 6.785467, 6.885258, 6.885258, 6.922309, 6.835545, 6.684186, 6.798021, 6.443878, 6.363992, 6.798021, 6.607206,
   6.613655, 6.766592, 6.772889, 6.410714, 6.645807, 6.430633, 6.555384, 6.696929, 6.343864, 6.785467, 6.594288, 6.476873, 6.568378, 6.658624, 6.410714, 6.665024,
   6.397399, 6.450491, 6.535845, 6.696929, 6.276302, 6.221725, 6.276302, 6.522786, 6.145889, 6.269506, 6.289872, 6.542364, 6.33714, 6.166664, 6.173573, 6.221725,
   6.076126, 6.303414, 5.948492, 6.303414, 6.296647, 6.269506, 6.194255, 6.019734, 6.019734, 6.111107, 6.323671, 5.890878, 5.810727, 6.35729, 5.962809, 6.166664,
   5.934141, 5.941321, 6.104127, 5.962809, 5.832695, 5.825382, 6.262702, 5.818059, 6.125044, 5.616732, 6.040943, 6.166664, 5.796035, 5.825382, 6.33714, 5.919755,
   5.699613, 5.948492, 5.890878, 5.684633, 5.692128, 5.766538, 5.3285 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1005,Graph_from_VH_tagOnly_2b1c_H_mass_fy1005,Graph_from_VH_tagOnly_2b1c_H_mass_fex1005,Graph_from_VH_tagOnly_2b1c_H_mass_fey1005);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMinimum(-1687.245);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetMaximum(17709.78);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_tagOnly_SR_16->cd();
  
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
   data_mc_ratio__6->SetBinContent(1000,1.154166);
   data_mc_ratio__6->SetBinContent(1001,1.277588);
   data_mc_ratio__6->SetBinError(1000,0.1477759);
   data_mc_ratio__6->SetBinError(1001,0.007809938);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetEntries(37.65348);
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
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.008517118, 0.004268674,
   0.004275965, 0.004288923, 0.004302598, 0.004307665, 0.004301045, 0.004313271, 0.004302518, 0.004307345, 0.004319544, 0.004319866, 0.004314355, 0.004349142, 0.004323619, 0.004318134, 0.004334287, 0.004343845,
   0.00436307, 0.004358385, 0.004375163, 0.004376546, 0.004375624, 0.004389724, 0.004413345, 0.004412013, 0.004418554, 0.004461663, 0.00447008, 0.004480567, 0.009006133, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1008193 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0.8790169);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(1.120983);
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
   H_mass_tagOnly_SR_16->cd();
   H_mass_tagOnly_SR_16->Modified();
   H_mass_tagOnly_SR_16->cd();
   H_mass_tagOnly_SR_16->SetSelected(H_mass_tagOnly_SR_16);
}
