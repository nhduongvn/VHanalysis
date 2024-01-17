#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_16/H_mass_tagFirst_SR_16
//=========  (Sat Dec  9 13:50:16 2023) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_16 = new TCanvas("H_mass_tagFirst_SR_16", "H_mass_tagFirst_SR_16",0,0,600,600);
   H_mass_tagFirst_SR_16->SetHighLightColor(2);
   H_mass_tagFirst_SR_16->Range(0,0,1,1);
   H_mass_tagFirst_SR_16->SetFillColor(0);
   H_mass_tagFirst_SR_16->SetFillStyle(4000);
   H_mass_tagFirst_SR_16->SetBorderMode(0);
   H_mass_tagFirst_SR_16->SetBorderSize(2);
   H_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-41.07924,315.7258,41048.16);
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
   st->SetMaximum(36939.23);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",1000,0,2000);
   st_stack_87->SetMinimum(0.01);
   st_stack_87->SetMaximum(36939.23);
   st_stack_87->SetDirectory(nullptr);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->SetLineWidth(0);
   st_stack_87->GetXaxis()->SetRange(1,150);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetTitleOffset(1);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetLabelSize(0.05);
   st_stack_87->GetYaxis()->SetTitleSize(0.057);
   st_stack_87->GetYaxis()->SetTitleOffset(1.2);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetTitleOffset(1);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,8312.997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,16622.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,16611.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,16568.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,16414.15);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,16459.79);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,16523.23);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,16336.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,16265.75);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,16135.16);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,16091.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,15984.16);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,16035.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,15865.44);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,15788.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,15815.36);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,15640.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,15455.86);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,15428.78);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,15269.99);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,15140.14);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,15152.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,15009.55);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,14941.65);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,14825.9);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,14685.66);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,14589.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,14505.73);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,14288.32);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,14250.48);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,7109.844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,30.793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,19717.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(10,0.5246732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.9815737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,4.262465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,9.920349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,17.64884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,25.29339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,33.4003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,41.68594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,49.95154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,57.26394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,63.5862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,69.46226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,74.00869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,77.63391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,80.63171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,82.6914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,83.91738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,84.42431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,85.06505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,85.35177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,84.96872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,84.81712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,84.38436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,84.00508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,83.9182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,83.07087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,82.90833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,82.49141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,81.91458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,81.48836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,81.17273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,80.96135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,80.44115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,80.06899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,80.14888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,79.58534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,79.03693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,78.78751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,78.5881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,78.53028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,78.50399);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,78.40135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,78.03621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,78.14461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.29507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,77.85256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,77.68265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,77.37018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,77.26515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,77.0073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,77.13143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,76.72079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,76.53398);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.5996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.17525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,75.724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,75.65763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,75.2673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,74.94659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,74.97689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,74.62266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.4537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.16475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,73.81315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,73.57034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,73.35956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,72.80775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,72.71127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,72.51318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,72.04377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,71.73264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,71.78155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,71.01332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,71.05691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,70.75798);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.60219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,69.886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,69.93424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,70.06598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,69.66013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,69.48801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,68.74921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,68.98904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,69.02295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.56879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.21055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,68.07521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,67.55461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,67.74586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.72249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.33216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.37303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.22475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.51255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.64796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.22948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.54152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.20765);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,66.17438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.64079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.46021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.37921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.63555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,65.35816);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,65.17151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,65.24539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.84121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,65.09015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,64.66478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,64.70734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,64.45157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,64.31582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,64.3308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,64.24088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,64.21194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,63.75374);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,63.52881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,63.70838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,63.47462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,63.56888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,63.43883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,62.60673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.87109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,62.90173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,62.61662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,62.72314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,62.54074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,62.31806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,62.04247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,62.16658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.92033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,61.73221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,61.22961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,61.34752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,61.20488);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,61.27793);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,61.09121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,60.77496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.51737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,60.39898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,60.39784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,60.5867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,59.99886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,59.94492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,59.92425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,59.93574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,59.43647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,59.75174);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,59.00766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,59.29272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.60626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,58.52165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,58.464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.35324);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,58.42043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,58.15122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.71286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.92473);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.61022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.51098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,57.07254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,57.34561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.74845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.59787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.92281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.50173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.32362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,55.93371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,56.00257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,55.80314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.70562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.42323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.40211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.5262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,54.67941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,54.79508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,54.87791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.58997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.23457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.17743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,53.54752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,53.51667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,53.74508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,53.60918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.22783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.14114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,53.01018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,53.09968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,52.94522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,52.23464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,51.97179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,52.13177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,51.69296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,51.63568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.23069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,51.15093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,51.07149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,51.13748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,51.13882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,50.91764);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,50.66697);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,50.56636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,50.12895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,50.35906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,49.855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,49.79423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,49.70708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,49.55455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,49.67107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,48.56417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,48.83268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,49.08009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,48.62648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,48.04271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,48.33263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,47.40387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,47.98538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,47.9696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,47.69623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,47.18706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,47.22351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,47.15496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,47.03952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,47.05854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,46.46247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,47.04976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,46.50985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,46.29033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,45.86016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,46.19211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,45.46832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,45.72641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,45.32278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,45.10969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,45.48194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,45.25136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,44.84192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,44.94922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,44.60648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,44.69126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,44.51227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,44.3279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,44.15679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,43.98502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,43.67255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,43.50993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,43.77643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,43.22429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,43.17171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,43.1749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,42.87579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,42.56649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,42.92231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,42.71659);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,41.86386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,42.09828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,41.95746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,41.98042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,41.59339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,41.45417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,41.35277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,41.39934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,40.99844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,41.02696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,40.89928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,40.58679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,40.58849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,40.16578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,40.15036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,40.02676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,40.39643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,40.21886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,40.1092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,39.49887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,39.60153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,39.69006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,39.18224);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,39.42911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,38.92496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,39.13127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,38.57686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,38.41239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,38.64994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,38.31731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,38.20039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,38.08311);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,38.08853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,37.82745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,37.67431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,37.84746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,37.34037);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,37.17413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,37.17783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,37.28688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,36.92895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,37.10742);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,37.05731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,36.62204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,36.32391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,36.44497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,36.4978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,36.17012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,36.1568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,35.84713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,35.73753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,35.51925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,35.67199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,35.62952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,35.26257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,35.51538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,34.92527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,35.40281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,35.15115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,34.91147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,34.44111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,34.75737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,34.42712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,34.4551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,33.94802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,34.54287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,34.52294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,33.8587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,33.93991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,33.92571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,33.71817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,33.76711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,33.3343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,33.25783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,33.12513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,33.18532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,33.23713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,32.96685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,32.8958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,32.87696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,32.79732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,32.43015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,32.47681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,32.3409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,32.10597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,31.97064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,31.88226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,31.84987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,31.62435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,31.54155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,31.58515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,31.14633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,31.21916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,31.28522);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,30.90454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,31.41036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,30.90009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,30.98239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,30.55518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,30.61368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,30.31322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,30.24958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,30.40616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,30.23593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,29.85801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,30.15388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,30.25413);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,29.83264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,29.52657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,29.69159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,29.33951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,29.31604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,29.3653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,29.14653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,29.39809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,28.89516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,28.94989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,28.85464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,28.6872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,28.61274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,28.76626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,28.5429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,28.13002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,27.92129);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,28.01726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,27.9607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,27.93361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,27.85219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,28.48014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,28.0737);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,27.46152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,27.47655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,27.58404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,27.23251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,27.3183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,27.35355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,27.05503);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,27.25272);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,26.68364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,26.80716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,26.65268);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,26.48171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,26.9633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,26.62426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,26.54919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,26.39842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,26.22841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,26.39842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,26.28869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,26.19954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,26.13378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,25.90898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,25.77849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,25.78116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,25.64466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,25.3396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,25.21709);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,25.21981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,25.12139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,25.02532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,25.23891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,24.75435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,25.33417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,24.52812);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,24.74322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,24.78769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,24.83761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,24.60936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,24.33658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,24.60096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,24.05213);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,24.27996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,24.26862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,23.90864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,24.39872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,24.35354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,23.66561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,23.81635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,23.70629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,23.93741);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,23.58405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,23.46703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,23.53146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,23.423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,23.5022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,23.00499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,22.78556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,22.48762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,22.93308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,23.20159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,22.70387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,23.08264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,22.85794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,22.64012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,22.57315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,22.42019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,22.63708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,22.41712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,22.7916);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,22.40484);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,22.02065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,21.97059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,22.03315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,21.889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,21.85754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,21.93925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,21.89529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,21.37359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,21.54357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,21.46997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,21.57868);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,21.60418);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,21.17952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,21.03606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,21.09813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,21.19576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,21.28325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,21.05568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,20.82893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,20.67971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,20.77931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,20.56625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,21.03606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,20.76606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,20.52606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,20.33743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,20.4925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,20.40163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,20.54617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,20.21524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,20.18799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,20.27643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,20.1197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,19.74682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,19.54716);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,19.86496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,19.91341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,19.72241);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,19.99962);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,19.75379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,19.24199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,19.69797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,19.54012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,19.49781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,19.20261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,18.86271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,19.3027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,18.65728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,19.15596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,19.16674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,18.84811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,18.50915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,19.28486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,18.77861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,18.84446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,18.73825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,18.81888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,18.57595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,18.54258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,18.54629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,18.50915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,18.29974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,18.16006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,18.17143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,18.53144);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,17.95425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,18.10313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,17.7848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,18.3748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,17.51576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,17.85817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,17.81959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,18.28093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,17.437);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,17.65274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,17.9082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,17.34599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,17.65274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,17.18655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,17.38166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,17.51183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,17.30229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,17.32614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,16.95677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,17.23454);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,17.51576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,17.30229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,16.84683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,16.94053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,16.74028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,16.67025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,16.44162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,16.76904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,16.51679);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,16.64546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,16.82639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,16.15874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,16.49177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,16.35348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,16.23098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,16.29446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,16.16726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,16.30713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,15.97025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,16.23098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,16.55425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,16.15022);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,16.06477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,15.9271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,16.10755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,16.19703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,15.85347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,16.01758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,15.65251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,15.80565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,15.84044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,15.61289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,15.33267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,15.30572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,15.52004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,15.3192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,15.65251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,15.05638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,15.61289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,15.05638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,15.32369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,15.34613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,15.18383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,14.86317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,15.18836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,15.25167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,14.84464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,14.77027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,14.82608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,14.77027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,14.64863);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,14.84464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,14.469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,14.77493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,14.77959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,14.54963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,14.63453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,14.24853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,14.27265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,14.49751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,14.38313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,14.4309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,14.4309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,14.23886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,14.0393);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,14.00986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,13.94091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,14.00986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,13.8617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,14.10776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,14.098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,13.98035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,13.85674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,13.95078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,13.78204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,13.86667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,13.72199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,14.054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,13.62636);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,13.23176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,13.55039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,13.49951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,13.45866);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,12.96909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,13.33537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,13.5859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,13.38688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,13.53515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,12.92657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,13.06426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,13.00618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,13.16397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,13.16397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,13.1953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,12.88391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,13.07479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,13.1953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,12.71183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,12.69557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,12.65757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,13.16919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,12.86787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,12.73346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,12.9744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,12.55384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,12.47134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,12.44372);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,12.76046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,12.51541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,12.1414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,12.43819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,12.5264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,13.03261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,12.82501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,12.47686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,12.43819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,11.91251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,12.18101);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,11.99312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,12.48237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,11.91828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,12.10165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,11.8604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,11.90095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,12.11302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,11.92983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,11.71444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,11.81971);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,11.97589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,11.89516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,11.2285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,11.84879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,11.54877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,11.70856);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,11.61414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,11.6968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,11.54281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,11.30181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,11.441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,11.51296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,11.73791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,11.81389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,11.65554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,11.73791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,11.20395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,11.27132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,11.11143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,11.51296);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,11.35042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,11.15471);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,11.36254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,11.43499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,11.11763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,11.10524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,11.06799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,11.35042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,11.08663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,10.89882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,10.89882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,10.8925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,10.78456);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,10.9555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,10.85452);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,11.00564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,10.50002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,10.90513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,10.94293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,10.6303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,10.57838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,10.79094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,10.51312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,10.4869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,10.40786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,10.6497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,10.65616);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,10.46062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,10.62382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,10.67552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,10.48034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,10.18055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,10.44745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,10.18055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,10.18731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,10.20081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,10.28145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,9.941139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,10.48034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,9.794681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,9.906464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,10.07864);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,10.06498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,10.32154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,10.01013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,10.20081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,10.23449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,10.28815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,9.948059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,9.948059);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,9.941139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,9.801705);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,9.717084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,10.09911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,9.850731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,9.941139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,9.436828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,9.731239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,9.588753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,9.731239);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,9.282417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,9.282417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,9.465954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,9.588753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,9.260148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,9.502236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,8.873029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,9.617419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,9.282417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,9.334171);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,9.378305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,9.230373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,9.170532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,9.465954);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,9.207978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,9.019192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,9.14799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,9.011559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,9.03444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,9.207978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,9.237826);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,8.919445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,9.132932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,8.732303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,8.980959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,9.117849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,9.019192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,8.950255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,9.14799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,8.927157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,9.282417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,8.755914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,8.911726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,8.919445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,8.716526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,8.82637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,8.621261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,8.74018);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,8.557161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,8.86527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,8.700721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,8.77162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,8.700721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,8.50877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,8.755914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,8.5652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,8.279204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,8.661082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,8.443817);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,8.732303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,8.476355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,8.270887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,8.62924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,8.5652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,8.245887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,8.476355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,8.460102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,7.931074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,8.229178);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,8.254229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,8.287512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,8.178846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,8.060183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,8.220811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,8.287512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,8.254229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,8.204051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,8.077242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,8.025957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,7.931074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,8.111251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,7.684269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,7.746707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,8.017378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,7.548733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,7.808647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,8.136665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,7.70216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,7.548733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,7.612284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,7.870098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,7.621319);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,7.782162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,7.675308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,7.401427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,7.612284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,7.957064);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,7.808647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,7.475443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,7.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,7.728919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,7.69322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,7.70216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,7.251128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,7.576034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,7.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,7.764455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,7.594181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,7.203517);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,7.475443);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,7.521333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,7.639358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,7.087945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,7.107338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,6.960577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,6.990176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,7.126677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,7.42);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,7.097648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,7.666336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,7.354788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,7.184384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,7.345425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,7.136327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,7.126677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,7.307852);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,7.279546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,7.222599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,7.107338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,7.049);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,7.097648);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,6.960577);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,7.174799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,7.298429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,7.078229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,7.222599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,7.078229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,6.860993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,7.019649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,7.019649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,6.990176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,6.850955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,6.729331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,7.184384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,6.920915);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,7.107338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,6.770115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,6.800542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,6.605467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,6.810655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,6.393698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,6.73955);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,6.970457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,6.970457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,6.970457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,6.574137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,6.729331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,6.479236);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,6.615878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,6.152339);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,6.382925);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,6.500445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,6.447293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,6.667686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,6.59504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,6.584597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,6.361325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,6.489849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,6.500445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,6.361325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,6.615878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,6.361325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,6.468606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,6.328786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,6.667686);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,6.274179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,6.41519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,6.307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,6.361325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,5.982195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,6.073532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,5.877745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,6.016609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,6.039442);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,6.372134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,6.241186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,6.252203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,6.393698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,5.912767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,6.06219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,6.252203);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,6.404453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,6.016609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,6.028036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,6.141143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,5.901116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,6.141143);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,6.050827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,6.06219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,6.028036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,6.296079);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,6.317902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,5.993688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,5.818908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,5.936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,5.924395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,5.842514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,5.783318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,5.947582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,5.565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,5.830723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,5.747507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,5.759469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,5.687322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,5.515312);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,5.69941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,5.626494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,5.982195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,5.735521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,5.723509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,5.735521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,5.901116);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,5.663069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,5.842514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,5.771406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,5.350638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,5.401842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,5.842514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,5.33776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,5.650904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,5.687322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.452564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,5.540211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,5.711472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,5.55262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,5.414567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,5.477749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,5.113882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,5.259833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,5.55262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,5.55262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,5.638712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,5.180733);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,5.687322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,5.663069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,4.865619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,5.675209);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,5.073349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,5.246732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,85.52978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(9235223);

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
   
   TH1D *VH_tagFirst_H_mass__173 = new TH1D("VH_tagFirst_H_mass__173","",1000,0,2000);
   VH_tagFirst_H_mass__173->SetBinContent(1000,25);
   VH_tagFirst_H_mass__173->SetBinContent(1001,23051);
   VH_tagFirst_H_mass__173->SetEntries(3572384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__173->SetLineColor(ci);
   VH_tagFirst_H_mass__173->SetLineWidth(2);
   VH_tagFirst_H_mass__173->SetMarkerStyle(20);
   VH_tagFirst_H_mass__173->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__173->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__173->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__173->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__173->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__173->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__173->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__173->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__173->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__173->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__173->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1173[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1173[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8312.997, 16622.65,
   16611.53, 16568.12, 16414.15, 16459.79, 16523.23, 16336.99, 16265.75, 16135.16, 16091.38, 15984.16, 16035.73, 15865.44, 15788.28, 15815.36, 15640.62, 15455.86,
   15428.78, 15269.99, 15140.14, 15152.38, 15009.55, 14941.65, 14825.9, 14685.66, 14589.2, 14505.73, 14288.32, 14250.48, 7109.844, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 30.793 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1173[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1173[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5246732, 0.9815737, 4.262465, 9.920349, 17.64884, 25.29339, 33.4003, 41.68594,
   49.95154, 57.26394, 63.5862, 69.46226, 74.00869, 77.63391, 80.63171, 82.6914, 83.91738, 84.42431, 85.06505, 85.35177, 84.96872, 84.81712, 84.38436, 84.00508,
   83.9182, 83.07087, 82.90833, 82.49141, 81.91458, 81.48836, 81.17273, 80.96135, 80.44115, 80.06899, 80.14888, 79.58534, 79.03693, 78.78751, 78.5881, 78.53028,
   78.50399, 78.40135, 78.03621, 78.14461, 78.29507, 77.85256, 77.68265, 77.37018, 77.26515, 77.0073, 77.13143, 76.72079, 76.53398, 76.5996, 76.17525, 75.724,
   75.65763, 75.2673, 74.94659, 74.97689, 74.62266, 74.4537, 74.16475, 73.81315, 73.57034, 73.35956, 72.80775, 72.71127, 72.51318, 72.04377, 71.73264, 71.78155,
   71.01332, 71.05691, 70.75798, 70.60219, 69.886, 69.93424, 70.06598, 69.66013, 69.48801, 68.74921, 68.98904, 69.02295, 68.56879, 68.21055, 68.07521, 67.55461,
   67.74586, 67.72249, 67.33216, 67.37303, 67.22475, 66.51255, 66.64796, 66.22948, 66.54152, 66.20765, 66.17438, 65.64079, 65.46021, 65.37921, 65.63555, 65.35816,
   65.17151, 65.24539, 64.84121, 65.09015, 64.66478, 64.70734, 64.45157, 64.31582, 64.3308, 64.24088, 64.21194, 63.75374, 63.52881, 63.70838, 63.47462, 63.56888,
   63.43883, 62.60673, 62.87109, 62.90173, 62.61662, 62.72314, 62.54074, 62.31806, 62.04247, 62.16658, 61.92033, 61.73221, 61.22961, 61.34752, 61.20488, 61.27793,
   61.09121, 60.77496, 60.51737, 60.39898, 60.39784, 60.5867, 59.99886, 59.94492, 59.92425, 59.93574, 59.43647, 59.75174, 59.00766, 59.29272, 58.60626, 58.52165,
   58.464, 58.35324, 58.42043, 58.15122, 57.71286, 57.92473, 57.61022, 57.51098, 57.07254, 57.34561, 56.74845, 56.59787, 56.92281, 56.50173, 56.32362, 55.93371,
   56.00257, 55.80314, 55.70562, 55.42323, 55.40211, 55.5262, 54.67941, 54.79508, 54.87791, 54.58997, 54.23457, 54.17743, 53.54752, 53.51667, 53.74508, 53.60918,
   53.22783, 53.14114, 53.01018, 53.09968, 52.94522, 52.23464, 51.97179, 52.13177, 51.69296, 51.63568, 52.23069, 51.15093, 51.07149, 51.13748, 51.13882, 50.91764,
   50.66697, 50.56636, 50.12895, 50.35906, 49.855, 49.79423, 49.70708, 49.55455, 49.67107, 48.56417, 48.83268, 49.08009, 48.62648, 48.04271, 48.33263, 47.40387,
   47.98538, 47.9696, 47.69623, 47.18706, 47.22351, 47.15496, 47.03952, 47.05854, 46.46247, 47.04976, 46.50985, 46.29033, 45.86016, 46.19211, 45.46832, 45.72641,
   45.32278, 45.10969, 45.48194, 45.25136, 44.84192, 44.94922, 44.60648, 44.69126, 44.51227, 44.3279, 44.15679, 43.98502, 43.67255, 43.50993, 43.77643, 43.22429,
   43.17171, 43.1749, 42.87579, 42.56649, 42.92231, 42.71659, 41.86386, 42.09828, 41.95746, 41.98042, 41.59339, 41.45417, 41.35277, 41.39934, 40.99844, 41.02696,
   40.89928, 40.58679, 40.58849, 40.16578, 40.15036, 40.02676, 40.39643, 40.21886, 40.1092, 39.49887, 39.60153, 39.69006, 39.18224, 39.42911, 38.92496, 39.13127,
   38.57686, 38.41239, 38.64994, 38.31731, 38.20039, 38.08311, 38.08853, 37.82745, 37.67431, 37.84746, 37.34037, 37.17413, 37.17783, 37.28688, 36.92895, 37.10742,
   37.05731, 36.62204, 36.32391, 36.44497, 36.4978, 36.17012, 36.1568, 35.84713, 35.73753, 35.51925, 35.67199, 35.62952, 35.26257, 35.51538, 34.92527, 35.40281,
   35.15115, 34.91147, 34.44111, 34.75737, 34.42712, 34.4551, 33.94802, 34.54287, 34.52294, 33.8587, 33.93991, 33.92571, 33.71817, 33.76711, 33.3343, 33.25783,
   33.12513, 33.18532, 33.23713, 32.96685, 32.8958, 32.87696, 32.79732, 32.43015, 32.47681, 32.3409, 32.10597, 31.97064, 31.88226, 31.84987, 31.62435, 31.54155,
   31.58515, 31.14633, 31.21916, 31.28522, 30.90454, 31.41036, 30.90009, 30.98239, 30.55518, 30.61368, 30.31322, 30.24958, 30.40616, 30.23593, 29.85801, 30.15388,
   30.25413, 29.83264, 29.52657, 29.69159, 29.33951, 29.31604, 29.3653, 29.14653, 29.39809, 28.89516, 28.94989, 28.85464, 28.6872, 28.61274, 28.76626, 28.5429,
   28.13002, 27.92129, 28.01726, 27.9607, 27.93361, 27.85219, 28.48014, 28.0737, 27.46152, 27.47655, 27.58404, 27.23251, 27.3183, 27.35355, 27.05503, 27.25272,
   26.68364, 26.80716, 26.65268, 26.48171, 26.9633, 26.62426, 26.54919, 26.39842, 26.22841, 26.39842, 26.28869, 26.19954, 26.13378, 25.90898, 25.77849, 25.78116,
   25.64466, 25.3396, 25.21709, 25.21981, 25.12139, 25.02532, 25.23891, 24.75435, 25.33417, 24.52812, 24.74322, 24.78769, 24.83761, 24.60936, 24.33658, 24.60096,
   24.05213, 24.27996, 24.26862, 23.90864, 24.39872, 24.35354, 23.66561, 23.81635, 23.70629, 23.93741, 23.58405, 23.46703, 23.53146, 23.423, 23.5022, 23.00499,
   22.78556, 22.48762, 22.93308, 23.20159, 22.70387, 23.08264, 22.85794, 22.64012, 22.57315, 22.42019, 22.63708, 22.41712, 22.7916, 22.40484, 22.02065, 21.97059,
   22.03315, 21.889, 21.85754, 21.93925, 21.89529, 21.37359, 21.54357, 21.46997, 21.57868, 21.60418, 21.17952, 21.03606, 21.09813, 21.19576, 21.28325, 21.05568,
   20.82893, 20.67971, 20.77931, 20.56625, 21.03606, 20.76606, 20.52606, 20.33743, 20.4925, 20.40163, 20.54617, 20.21524, 20.18799, 20.27643, 20.1197, 19.74682,
   19.54716, 19.86496, 19.91341, 19.72241, 19.99962, 19.75379, 19.24199, 19.69797, 19.54012, 19.49781, 19.20261, 18.86271, 19.3027, 18.65728, 19.15596, 19.16674,
   18.84811, 18.50915, 19.28486, 18.77861, 18.84446, 18.73825, 18.81888, 18.57595, 18.54258, 18.54629, 18.50915, 18.29974, 18.16006, 18.17143, 18.53144, 17.95425,
   18.10313, 17.7848, 18.3748, 17.51576, 17.85817, 17.81959, 18.28093, 17.437, 17.65274, 17.9082, 17.34599, 17.65274, 17.18655, 17.38166, 17.51183, 17.30229,
   17.32614, 16.95677, 17.23454, 17.51576, 17.30229, 16.84683, 16.94053, 16.74028, 16.67025, 16.44162, 16.76904, 16.51679, 16.64546, 16.82639, 16.15874, 16.49177,
   16.35348, 16.23098, 16.29446, 16.16726, 16.30713, 15.97025, 16.23098, 16.55425, 16.15022, 16.06477, 15.9271, 16.10755, 16.19703, 15.85347, 16.01758, 15.65251,
   15.80565, 15.84044, 15.61289, 15.33267, 15.30572, 15.52004, 15.3192, 15.65251, 15.05638, 15.61289, 15.05638, 15.32369, 15.34613, 15.18383, 14.86317, 15.18836,
   15.25167, 14.84464, 14.77027, 14.82608, 14.77027, 14.64863, 14.84464, 14.469, 14.77493, 14.77959, 14.54963, 14.63453, 14.24853, 14.27265, 14.49751, 14.38313,
   14.4309, 14.4309, 14.23886, 14.0393, 14.00986, 13.94091, 14.00986, 13.8617, 14.10776, 14.098, 13.98035, 13.85674, 13.95078, 13.78204, 13.86667, 13.72199,
   14.054, 13.62636, 13.23176, 13.55039, 13.49951, 13.45866, 12.96909, 13.33537, 13.5859, 13.38688, 13.53515, 12.92657, 13.06426, 13.00618, 13.16397, 13.16397,
   13.1953, 12.88391, 13.07479, 13.1953, 12.71183, 12.69557, 12.65757, 13.16919, 12.86787, 12.73346, 12.9744, 12.55384, 12.47134, 12.44372, 12.76046, 12.51541,
   12.1414, 12.43819, 12.5264, 13.03261, 12.82501, 12.47686, 12.43819, 11.91251, 12.18101, 11.99312, 12.48237, 11.91828, 12.10165, 11.8604, 11.90095, 12.11302,
   11.92983, 11.71444, 11.81971, 11.97589, 11.89516, 11.2285, 11.84879, 11.54877, 11.70856, 11.61414, 11.6968, 11.54281, 11.30181, 11.441, 11.51296, 11.73791,
   11.81389, 11.65554, 11.73791, 11.20395, 11.27132, 11.11143, 11.51296, 11.35042, 11.15471, 11.36254, 11.43499, 11.11763, 11.10524, 11.06799, 11.35042, 11.08663,
   10.89882, 10.89882, 10.8925, 10.78456, 10.9555, 10.85452, 11.00564, 10.50002, 10.90513, 10.94293, 10.6303, 10.57838, 10.79094, 10.51312, 10.4869, 10.40786,
   10.6497, 10.65616, 10.46062, 10.62382, 10.67552, 10.48034, 10.18055, 10.44745, 10.18055, 10.18731, 10.20081, 10.28145, 9.941139, 10.48034, 9.794681, 9.906464,
   10.07864, 10.06498, 10.32154, 10.01013, 10.20081, 10.23449, 10.28815, 9.948059, 9.948059, 9.941139, 9.801705, 9.717084, 10.09911, 9.850731, 9.941139, 9.436828,
   9.731239, 9.588753, 9.731239, 9.282417, 9.282417, 9.465954, 9.588753, 9.260148, 9.502236, 8.873029, 9.617419, 9.282417, 9.334171, 9.378305, 9.230373, 9.170532,
   9.465954, 9.207978, 9.019192, 9.14799, 9.011559, 9.03444, 9.207978, 9.237826, 8.919445, 9.132932, 8.732303, 8.980959, 9.117849, 9.019192, 8.950255, 9.14799,
   8.927157, 9.282417, 8.755914, 8.911726, 8.919445, 8.716526, 8.82637, 8.621261, 8.74018, 8.557161, 8.86527, 8.700721, 8.77162, 8.700721, 8.50877, 8.755914,
   8.5652, 8.279204, 8.661082, 8.443817, 8.732303, 8.476355, 8.270887, 8.62924, 8.5652, 8.245887, 8.476355, 8.460102, 7.931074, 8.229178, 8.254229, 8.287512,
   8.178846, 8.060183, 8.220811, 8.287512, 8.254229, 8.204051, 8.077242, 8.025957, 7.931074, 8.111251, 7.684269, 7.746707, 8.017378, 7.548733, 7.808647, 8.136665,
   7.70216, 7.548733, 7.612284, 7.870098, 7.621319, 7.782162, 7.675308, 7.401427, 7.612284, 7.957064, 7.808647, 7.475443, 7.42, 7.728919, 7.69322, 7.70216,
   7.251128, 7.576034, 7.42, 7.764455, 7.594181, 7.203517, 7.475443, 7.521333, 7.639358, 7.087945, 7.107338, 6.960577, 6.990176, 7.126677, 7.42, 7.097648,
   7.666336, 7.354788, 7.184384, 7.345425, 7.136327, 7.126677, 7.307852, 7.279546, 7.222599, 7.107338, 7.049, 7.097648, 6.960577, 7.174799, 7.298429, 7.078229,
   7.222599, 7.078229, 6.860993, 7.019649, 7.019649, 6.990176, 6.850955, 6.729331, 7.184384, 6.920915, 7.107338, 6.770115, 6.800542, 6.605467, 6.810655, 6.393698,
   6.73955, 6.970457, 6.970457, 6.970457, 6.574137, 6.729331, 6.479236, 6.615878, 6.152339, 6.382925, 6.500445, 6.447293, 6.667686, 6.59504, 6.584597, 6.361325,
   6.489849, 6.500445, 6.361325, 6.615878, 6.361325, 6.468606, 6.328786, 6.667686, 6.274179, 6.41519, 6.307, 6.361325, 5.982195, 6.073532, 5.877745, 6.016609,
   6.039442, 6.372134, 6.241186, 6.252203, 6.393698, 5.912767, 6.06219, 6.252203, 6.404453, 6.016609, 6.028036, 6.141143, 5.901116, 6.141143, 6.050827, 6.06219,
   6.028036, 6.296079, 6.317902, 5.993688, 5.818908, 5.936, 5.924395, 5.842514, 5.783318, 5.947582, 5.565, 5.830723, 5.747507, 5.759469, 5.675209, 5.687322,
   5.515312, 5.69941, 5.626494, 5.982195, 5.675209, 5.735521, 5.723509, 5.735521, 5.901116, 5.675209, 5.663069, 5.675209, 5.842514, 5.771406, 5.350638, 5.401842,
   5.842514, 5.33776, 5.650904, 5.687322, 5.452564, 5.540211, 5.711472, 5.55262, 5.675209, 5.414567, 5.477749, 5.113882, 5.259833, 5.55262, 5.55262, 5.638712,
   5.180733, 5.687322, 5.663069, 4.865619, 5.675209, 5.073349, 5.246732 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1173,Graph_from_VH_tagFirst_2b1c_H_mass_fy1173,Graph_from_VH_tagFirst_2b1c_H_mass_fex1173,Graph_from_VH_tagFirst_2b1c_H_mass_fey1173);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->SetMinimum(-1764.005);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->SetMaximum(18379.84);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1173);
   
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
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
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
   H_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__174 = new TH1D("data_mc_ratio__174","",1000,0,2000);
   data_mc_ratio__174->SetBinContent(1000,0.8118728);
   data_mc_ratio__174->SetBinContent(1001,1.169039);
   data_mc_ratio__174->SetBinError(1000,0.1623746);
   data_mc_ratio__174->SetBinError(1001,0.009219667);
   data_mc_ratio__174->SetMinimum(0.4);
   data_mc_ratio__174->SetMaximum(1.6);
   data_mc_ratio__174->SetEntries(14.48608);
   data_mc_ratio__174->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__174->SetLineColor(ci);
   data_mc_ratio__174->SetLineWidth(2);
   data_mc_ratio__174->SetMarkerStyle(20);
   data_mc_ratio__174->SetMarkerSize(1.2);
   data_mc_ratio__174->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__174->GetXaxis()->SetRange(1,150);
   data_mc_ratio__174->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__174->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__174->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__174->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__174->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__174->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__174->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__174->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__174->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__174->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__174->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__174->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__174->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1174[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1174[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1174[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1174[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009453642, 0.004724292,
   0.004725875, 0.004732061, 0.004754203, 0.004747608, 0.004738485, 0.004765418, 0.004775841, 0.004795129, 0.004801647, 0.004817725, 0.004809972, 0.004835717, 0.00484752, 0.004843368, 0.004870348, 0.004899371,
   0.00490367, 0.0049291, 0.004950192, 0.004948192, 0.00497168, 0.004982962, 0.005002377, 0.005026205, 0.005042793, 0.005057282, 0.005095612, 0.005102373, 0.01019898, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1703872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1174,Graph_from_mc_statistical_error_fy1174,Graph_from_mc_statistical_error_fex1174,Graph_from_mc_statistical_error_fey1174);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1174 = new TH1F("Graph_Graph_from_mc_statistical_error1174","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1174->SetMinimum(0.7955354);
   Graph_Graph_from_mc_statistical_error1174->SetMaximum(1.204465);
   Graph_Graph_from_mc_statistical_error1174->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1174->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1174->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1174);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->Modified();
   H_mass_tagFirst_SR_16->cd();
   H_mass_tagFirst_SR_16->SetSelected(H_mass_tagFirst_SR_16);
}
