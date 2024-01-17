#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_SR_18/Z_mass_DHZfirst_SR_18
//=========  (Sat Dec  9 13:50:16 2023) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_SR_18 = new TCanvas("Z_mass_DHZfirst_SR_18", "Z_mass_DHZfirst_SR_18",0,0,600,600);
   Z_mass_DHZfirst_SR_18->SetHighLightColor(2);
   Z_mass_DHZfirst_SR_18->Range(0,0,1,1);
   Z_mass_DHZfirst_SR_18->SetFillColor(0);
   Z_mass_DHZfirst_SR_18->SetFillStyle(4000);
   Z_mass_DHZfirst_SR_18->SetBorderMode(0);
   Z_mass_DHZfirst_SR_18->SetBorderSize(2);
   Z_mass_DHZfirst_SR_18->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-4.931677,315.7258,4936.746);
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
   st->SetMaximum(4442.578);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",1000,0,2000);
   st_stack_80->SetMinimum(0.01);
   st_stack_80->SetMaximum(4442.578);
   st_stack_80->SetDirectory(nullptr);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->SetLineWidth(0);
   st_stack_80->GetXaxis()->SetRange(1,150);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetLabelSize(0.05);
   st_stack_80->GetYaxis()->SetTitleSize(0.057);
   st_stack_80->GetYaxis()->SetTitleOffset(1.2);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(31,1233.628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(32,1387.116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(33,1520.252);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(34,1614.168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(35,1692.608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(36,1762.992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(37,1842.916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(38,1916.904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(39,1925.172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(40,1978.808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(41,1985.592);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(42,1965.664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(43,1969.056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(44,1999.16);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(45,1936.196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(46,1971.388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(47,1922.204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(48,1923.052);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(49,1907.788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(50,1877.896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(51,1858.816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(52,1852.032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(53,1781.436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(54,1773.168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(55,1756.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(56,1755.996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(57,1736.916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(58,1674.164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(59,1674.8);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(60,1683.492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,14.628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,6921.376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,0.4740464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,0.636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,0.9480928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,1.919742);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,2.535151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,3.780502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,4.730974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,5.813595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,7.477321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,8.761527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,9.950459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,11.30976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,12.73765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,14.24823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,15.23305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,16.17186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,17.14843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,17.95253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,18.49875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,18.94289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,19.33273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,19.76609);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,20.15896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,20.20239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,20.48188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,20.51696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,20.41374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,20.43135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,20.58694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,20.26015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,20.44344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,20.18681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,20.19126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,20.11097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,19.95279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,19.85117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,19.81491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,19.43359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,19.38844);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,19.29782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,19.29433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,19.18922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,18.83939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,18.84297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,18.89181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,18.79999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,18.59084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,18.54485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,18.43669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,18.36953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,18.32298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,18.33279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,18.02249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,18.08225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,17.90114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,17.73846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,18.02374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,17.6966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,17.50894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,17.37754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,17.56148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,17.32314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,17.34518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,17.26987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,17.22688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,17.26466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,16.95072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,17.00499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,16.89761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,16.67943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,16.51016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,16.59704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,16.36113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,16.39543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,16.22181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,15.99722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,15.94516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,16.00424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,16.06591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,15.83485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,15.56432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,15.38133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,15.39739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,15.25664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,15.29195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,15.15615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,14.90648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,14.97266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,14.61724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,14.59878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,14.60032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,14.50148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,14.33314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,14.26872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,14.09122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,14.25138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,14.02088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,13.95984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,13.56137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,13.81258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,13.59282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,13.54811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,13.53649);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,13.29867);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,13.20711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,13.04102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,13.01514);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,13.11662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,12.91983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,12.75352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,12.76409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,12.38704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,12.59394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,12.56178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,12.43773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,12.508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,12.44677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,12.25206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,12.27222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,12.13596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,12.06353);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,11.84737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,11.90602);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,11.82458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,11.78461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,11.80747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,11.43229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,11.58265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,11.53989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,11.54768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,11.42049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,11.37909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,11.24999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,11.16578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,11.05453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,11.21999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,11.14564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,10.90101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,10.79952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,10.82239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,10.97087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,10.61483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,10.83691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,10.66341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,10.84935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,10.75574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,10.63598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,10.48918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,10.3555);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,10.47632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,10.253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,10.24642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,10.19586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,10.23106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,10.42255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,10.24423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,9.986528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,10.09841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,9.7888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,10.03591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,9.97527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,9.807148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,10.02022);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,9.85515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,9.823175);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,9.675658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,9.682623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,9.528215);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,9.742778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,9.652404);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,9.532931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,9.407164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,9.344848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,9.570573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,9.194545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,9.236001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,9.342443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,9.140618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,9.291793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,9.05168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,9.096258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,9.125855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,9.182317);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,8.931719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,9.218954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,8.807573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,8.991899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,9.006882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,9.211638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,8.774342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,8.689414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,8.807573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,8.753829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,8.689414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,8.876195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,8.686828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,8.645338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,8.627124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,8.699753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,8.535469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,8.621913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,8.469393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,8.432165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,8.36796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,8.357211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,8.381376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,8.346448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,8.207987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,8.270718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,8.259842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,8.251676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,8.319481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,8.18331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,8.128203);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,8.136493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,8.197029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,8.058789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,8.092182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,7.946466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,8.06715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,7.766263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,7.912458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,7.832532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,7.696505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,7.806668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,7.800909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,7.777829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,7.716916);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,7.693585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,7.655519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,7.510308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,7.629055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,7.798027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,7.740178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,7.602499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,7.566945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,7.655519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,7.632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,7.578815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,7.670182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,7.226682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,7.504321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,7.486332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,7.581779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,7.297852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,7.386611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,7.294772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,7.201762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,7.282439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,7.346955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,7.350013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,7.195519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,7.183016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,7.037634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,7.337773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,7.047207);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,7.066313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,7.16422);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,7.217347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,6.947651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,6.973479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,7.12648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,6.86304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,7.154804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,7.00563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,7.018449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,6.963805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,7.085369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,7.242213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,6.960577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,6.908728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,6.885922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,6.934701);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,6.905475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,6.734129);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,6.717423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,6.833507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,6.973479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,6.947651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,6.817045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,6.869585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,6.687248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,6.730791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,6.908728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,6.663683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,6.700676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,6.670424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,6.697321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,6.680523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,6.807148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,6.653558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,6.589075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,6.58225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,6.437264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,6.572);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,6.377642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,6.534279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,6.451213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,6.489417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,6.833507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,6.616302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,6.537717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,6.451213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,6.391721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,6.548021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,6.589075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,6.468606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,6.36);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,6.461654);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,6.440754);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,6.345851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,6.592484);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,6.36);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,6.551452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,6.260285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,6.338765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,6.395236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,6.548021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,6.299647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,6.274627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,6.363532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,6.356466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,6.288936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,6.271045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,6.468606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,6.281786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,6.202585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,6.100298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,6.256694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,6.24591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,6.321014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,6.321014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,6.26746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,6.173533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,6.303213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,6.169892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,6.12236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,6.198961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,6.352929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,6.184444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,6.169892);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,6.158956);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,6.003756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,6.198961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,6.100298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,6.202585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,6.202585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,6.052219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,5.977498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,6.037349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,6.044789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,6.107661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,6.184444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,6.166249);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,6.111339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,6.177172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,6.085545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,6.115015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,6.070756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,6.048505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,5.962441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,5.936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,6.037349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,5.90183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,6.003756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,5.867461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,5.86363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,5.90183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,5.708275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,5.86363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,6.0299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,5.875116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,5.84828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,5.87894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,5.867461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,5.89421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,5.767023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,5.917041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,6.115015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,5.829036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,5.981256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,6.000012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,5.867461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,5.966209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,5.875116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,5.813595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,5.592944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,5.751416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,5.882761);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,5.817459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,5.680651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,5.794236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,5.724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,5.664805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,5.727925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,5.939785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,5.568784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,5.708275);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,5.620999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,5.704337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,5.867461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,5.844437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,5.786474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,5.966209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,5.727925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,5.747507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,5.471079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,5.648915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,5.817459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,5.829036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,5.664805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,5.700396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,5.84059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,5.727925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,5.544519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,5.660837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,5.532347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,5.544519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,5.520148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,5.727925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,5.499756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,5.588925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,5.379957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,5.692506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,5.491578);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,5.532347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,5.433986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,5.450503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,5.71221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,5.576849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,5.417419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,5.564748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,5.688557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,5.462858);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,5.544519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,5.536407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,5.516075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,5.516075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,5.429849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,5.367411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,5.316933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,5.471079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,5.3);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,5.450503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,5.367411);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,5.346437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,5.283013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,5.371596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,5.620999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,5.291513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,5.346437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,5.442251);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,5.253153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,5.375778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,5.316933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,5.092415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,5.392473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,5.24459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,5.304238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,5.261702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,5.329597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,5.304238);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,5.46697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,5.039182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,5.400801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,5.359031);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,5.118823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,5.105636);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,5.261702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,4.967319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,5.287265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,5.158183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,5.283013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,5.253153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,5.052543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,5.201566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,5.197244);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,5.210199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,5.162537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,5.184256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,5.184256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,5.158183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,4.912731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,5.052543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,4.930994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,5.210199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,5.188589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,4.876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,5.248873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,5.04364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,5.092415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,4.903574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,5.253153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,5.039182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,4.9401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,5.052543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,5.083581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,4.971841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,5.070303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,5.123211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,4.903574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,5.074733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,4.976359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,4.908155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,5.052543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,4.94919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,4.885209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,4.834344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,4.735721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,5.039182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,4.754664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,4.944647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,4.912731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,4.797012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,4.889807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,4.889807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,4.605819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,4.848269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,4.94919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,4.908155);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,4.764107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,4.782938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,4.764107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,4.654354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,4.912731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,4.94919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,4.635001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,4.764107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,4.664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,4.668816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,4.787634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,4.843632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,4.605819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,4.848269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,4.749936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,4.811046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,4.591158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,4.649523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,4.683233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,4.452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,4.586261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,4.546893);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,4.586261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,4.497199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,4.576451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,4.944647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,4.740464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,4.639847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,4.635001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,4.436831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,4.517142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,4.452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,4.707164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,4.778237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,4.711935);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,4.644687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,4.492199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,4.467117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,4.431764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,4.44695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,4.654354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,4.349876);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,4.452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,4.487194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,4.436831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,4.536998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,4.482183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,4.431764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,4.33435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,4.467117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,4.323969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,4.586261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,4.271682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,4.391011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,4.487194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,4.497199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,4.396126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,4.261147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,4.30313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,4.355039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,4.271682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,4.365347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,4.462084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,4.138075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,4.365347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,4.355039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,4.401234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,4.517142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,4.245297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,4.22407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,4.276939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,4.30313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,4.165139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,4.436831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,4.33435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,4.452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,4.218747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,4.261147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,4.0944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,4.375631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,4.482183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,4.202736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,4.344707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,4.077901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,4.050254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,4.24);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,4.261147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,4.022417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,3.960487);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,4.20808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,4.077901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,4.061336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,4.261147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,4.313562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,4.323969);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,4.148922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,4.234697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,4.25587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,4.181294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,4.033575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,4.138075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,3.983118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,4.318768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,4.0944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,4.165139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,4.121751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,3.816);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,4.028);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,4.186665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,4.050254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,3.983118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,3.949122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,4.083408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,4.011228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,4.0944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,4.077901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,3.949122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,4.061336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,3.983118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,4.061336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,4.016827);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,4.105362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,4.0944);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,3.937725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,3.943428);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,3.988756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,3.833626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,3.880237);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,4.011228);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,3.932014);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,3.920567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,3.857002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,3.926295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,3.891803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,3.983118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,3.903334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,3.82776);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,3.738661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,3.845332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,3.914831);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,3.868637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,3.886024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,3.903334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,3.897573);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,3.708485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,3.994386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,3.903334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,3.720585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,3.810107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,3.886024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,3.857002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,4.022417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,3.977473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,3.684167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,3.804204);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,3.845332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,3.738661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,3.75665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,3.659687);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,3.750663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,3.798292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,3.653542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,3.868637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,3.750663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,3.71454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,3.810107);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,3.750663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,3.845332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,3.696346);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,3.635043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,3.702421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,3.702421);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,3.732645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,3.720585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,3.572688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,3.622658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,3.405224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,3.578972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,3.496394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,3.647386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,3.515622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,3.75665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,3.502815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,3.635043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,3.61023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,3.438062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,3.684167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,3.684167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,3.48996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,3.591508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,3.647386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,3.528383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,3.43152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,3.48996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,3.457615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,3.541098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,3.411817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,3.622658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,3.528383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,3.635043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,3.566392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,3.553768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,3.418397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,3.405224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,3.528383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,3.502815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,3.502815);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,3.385369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,3.578972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,3.585245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,3.424965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.398619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,3.572688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,3.444592);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,3.591508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,3.438062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,3.411817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,3.438062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,3.47059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,3.424965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,3.28429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,3.372066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,3.215139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,3.378724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,3.45111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,3.358712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,3.378724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,3.528383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,3.438062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,3.345304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,3.560085);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,3.311546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,3.28429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,3.509224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,3.48996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,3.28429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,3.405224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,3.444592);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,3.32509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,3.311546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,3.385369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,3.318325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,3.304753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,3.215139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,3.372066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,3.318325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,3.158729);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,3.242976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,3.242976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,3.222121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,3.086767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,3.263699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,3.130142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,3.263699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,3.27744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,3.23604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,3.072172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,3.194102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,3.43152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,3.165835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,3.057507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,3.215139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,3.23604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,3.194102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,3.256806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,3.222121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,3.23604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,3.172925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,3.137314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,3.222121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,3.242976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,3.187059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,3.297946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,3.194102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,3.165835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,3.304753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,3.057507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,3.086767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,3.115751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,3.10853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,3.042772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,3.263699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,3.130142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,3.122955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,3.057507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,3.242976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,2.975562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,3.042772);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,3.358712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,3.020535);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,3.050149);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.937558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,3.005619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,3.072172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,3.20113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,2.937558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,3.215139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,3.115751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,3.057507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.714925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,3.20113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,2.945198);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,3.172925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,2.906798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,2.891295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,2.975562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,3.027966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,2.952818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,2.998133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,2.906798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,2.975562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,3.035378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,2.998133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,2.929898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,2.922218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,2.891295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,2.990628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,2.844278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,2.922218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,3.020535);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,3.013086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,2.922218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,2.820477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,2.883512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,2.747834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,2.747834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,2.914518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,3.079478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,2.706635);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,3.10853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,3.035378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,2.836367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,2.788425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,2.914518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,2.812498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,2.647879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,2.883512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,2.867883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.780354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,2.828433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,2.77226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,2.689978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,2.723189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,2.836367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,2.77226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,2.820477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,2.883512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,2.867883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,2.731429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,2.723189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,2.804496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,2.639379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,2.723189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,2.875708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,2.780354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,2.867883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,2.723189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,2.647879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,2.664799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,2.844278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,2.836367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,2.731429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,2.937558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,2.780354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,2.472324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,2.739644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,2.622295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,2.689978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,2.613712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,2.906798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,2.788425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,2.613712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,2.747834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,2.756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,2.747834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,2.764142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,2.77226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,2.656352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,2.499443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,2.472324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,2.535151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,2.552818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,2.852168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,2.747834);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,2.6051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,2.891295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,2.796472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,2.698319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,2.681611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,2.698319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,2.77226);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,2.58779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,2.731429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,2.561606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,2.490436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,2.426451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,2.689978);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,2.739644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,2.499443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,2.647879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,2.58779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,2.622295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,2.622295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,2.579091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,2.596459);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,2.472324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,2.398506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,2.681611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,2.58779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,2.407857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,2.561606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,2.454077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,2.681611);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,2.508418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,2.570363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,2.517361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,2.552818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,2.526272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,2.490436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,2.508418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,2.639379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,2.552818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,2.570363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,2.463217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,2.444903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,2.454077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,2.444903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,2.426451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,2.435695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,2.435695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,2.630851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,2.526272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,2.351194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,2.398506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,2.426451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,2.370232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,2.407857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,2.622295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,2.426451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,2.341617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,2.192945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,2.351194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,2.435695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,2.370232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,2.463217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,2.398506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,2.454077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,2.379694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,2.58779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,2.499443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,2.444903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,2.579091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,2.370232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,2.302909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,2.351194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,2.273447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,2.273447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,2.417172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,2.312647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,2.370232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,2.389119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,2.508418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,2.379694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,2.161984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,2.341617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,38.30577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(1303947);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_Z_mass__159 = new TH1D("VH_DHZfirst_Z_mass__159","",1000,0,2000);
   VH_DHZfirst_Z_mass__159->SetBinContent(1000,12);
   VH_DHZfirst_Z_mass__159->SetBinContent(1001,6822);
   VH_DHZfirst_Z_mass__159->SetEntries(264168);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__159->SetLineColor(ci);
   VH_DHZfirst_Z_mass__159->SetLineWidth(2);
   VH_DHZfirst_Z_mass__159->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__159->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__159->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__159->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__159->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__159->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__159->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__159->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__159->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__159->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__159->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__159->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1159[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1159[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1233.628, 1387.116, 1520.252,
   1614.168, 1692.608, 1762.992, 1842.916, 1916.904, 1925.172, 1978.808, 1985.592, 1965.664, 1969.056, 1999.16, 1936.196, 1971.388, 1922.204, 1923.052, 1907.788,
   1877.896, 1858.816, 1852.032, 1781.436, 1773.168, 1756.632, 1755.996, 1736.916, 1674.164, 1674.8, 1683.492, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 14.628 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1159[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1159[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4740464, 0.636,
   0.9480928, 1.919742, 2.535151, 3.780502, 4.730974, 5.813595, 7.477321, 8.761527, 9.950459, 11.30976, 12.73765, 14.24823, 15.23305, 16.17186, 17.14843, 17.95253,
   18.49875, 18.94289, 19.33273, 19.76609, 20.15896, 20.20239, 20.48188, 20.51696, 20.41374, 20.43135, 20.58694, 20.26015, 20.44344, 20.18681, 20.19126, 20.11097,
   19.95279, 19.85117, 19.81491, 19.43359, 19.38844, 19.29782, 19.29433, 19.18922, 18.83939, 18.84297, 18.89181, 18.79999, 18.59084, 18.54485, 18.43669, 18.36953,
   18.32298, 18.33279, 18.02249, 18.08225, 17.90114, 17.73846, 18.02374, 17.6966, 17.50894, 17.37754, 17.56148, 17.32314, 17.34518, 17.26987, 17.22688, 17.26466,
   16.95072, 17.00499, 16.89761, 16.67943, 16.51016, 16.59704, 16.36113, 16.39543, 16.22181, 15.99722, 15.94516, 16.00424, 16.06591, 15.83485, 15.56432, 15.38133,
   15.39739, 15.25664, 15.29195, 15.15615, 14.90648, 14.97266, 14.61724, 14.59878, 14.60032, 14.50148, 14.33314, 14.26872, 14.09122, 14.25138, 14.02088, 13.95984,
   13.56137, 13.81258, 13.59282, 13.54811, 13.53649, 13.29867, 13.20711, 13.04102, 13.01514, 13.11662, 12.91983, 12.75352, 12.76409, 12.38704, 12.59394, 12.56178,
   12.43773, 12.508, 12.44677, 12.25206, 12.27222, 12.13596, 12.06353, 11.84737, 11.90602, 11.82458, 11.78461, 11.80747, 11.43229, 11.58265, 11.53989, 11.54768,
   11.42049, 11.37909, 11.24999, 11.16578, 11.05453, 11.21999, 11.14564, 10.90101, 10.79952, 10.82239, 10.97087, 10.61483, 10.83691, 10.66341, 10.84935, 10.75574,
   10.63598, 10.48918, 10.3555, 10.47632, 10.253, 10.24642, 10.19586, 10.23106, 10.42255, 10.24423, 9.986528, 10.09841, 9.7888, 10.03591, 9.97527, 9.807148,
   10.02022, 9.85515, 9.823175, 9.675658, 9.682623, 9.528215, 9.742778, 9.652404, 9.532931, 9.407164, 9.344848, 9.570573, 9.194545, 9.236001, 9.342443, 9.140618,
   9.291793, 9.05168, 9.096258, 9.125855, 9.182317, 8.931719, 9.218954, 8.807573, 8.991899, 9.006882, 9.211638, 8.774342, 8.689414, 8.807573, 8.753829, 8.689414,
   8.876195, 8.686828, 8.645338, 8.627124, 8.699753, 8.535469, 8.621913, 8.469393, 8.432165, 8.36796, 8.357211, 8.381376, 8.346448, 8.207987, 8.270718, 8.259842,
   8.251676, 8.319481, 8.18331, 8.128203, 8.136493, 8.197029, 8.058789, 8.092182, 7.946466, 8.06715, 7.766263, 7.912458, 7.832532, 7.696505, 7.806668, 7.800909,
   7.777829, 7.716916, 7.693585, 7.655519, 7.510308, 7.629055, 7.798027, 7.740178, 7.602499, 7.566945, 7.655519, 7.632, 7.578815, 7.670182, 7.226682, 7.504321,
   7.486332, 7.581779, 7.297852, 7.386611, 7.294772, 7.201762, 7.282439, 7.346955, 7.350013, 7.195519, 7.183016, 7.037634, 7.337773, 7.047207, 7.066313, 7.16422,
   7.217347, 6.947651, 6.973479, 7.12648, 6.86304, 7.154804, 7.00563, 7.018449, 6.963805, 7.085369, 7.242213, 6.960577, 6.908728, 6.885922, 6.934701, 6.905475,
   6.734129, 6.717423, 6.833507, 6.973479, 6.947651, 6.817045, 6.869585, 6.687248, 6.730791, 6.908728, 6.663683, 6.700676, 6.670424, 6.697321, 6.680523, 6.807148,
   6.653558, 6.589075, 6.58225, 6.437264, 6.572, 6.377642, 6.534279, 6.451213, 6.489417, 6.833507, 6.616302, 6.537717, 6.451213, 6.391721, 6.548021, 6.589075,
   6.468606, 6.36, 6.461654, 6.440754, 6.345851, 6.592484, 6.36, 6.551452, 6.260285, 6.338765, 6.395236, 6.548021, 6.299647, 6.274627, 6.363532, 6.356466,
   6.288936, 6.271045, 6.468606, 6.281786, 6.202585, 6.100298, 6.256694, 6.24591, 6.321014, 6.321014, 6.26746, 6.173533, 6.303213, 6.169892, 6.12236, 6.198961,
   6.352929, 6.184444, 6.169892, 6.158956, 6.003756, 6.198961, 6.100298, 6.202585, 6.202585, 6.052219, 5.977498, 6.037349, 6.044789, 6.107661, 6.184444, 6.166249,
   6.111339, 6.177172, 6.085545, 6.115015, 6.070756, 6.048505, 5.962441, 5.936, 6.037349, 5.90183, 6.003756, 5.867461, 5.86363, 5.90183, 5.708275, 5.86363,
   6.0299, 5.875116, 5.84828, 5.87894, 5.867461, 5.89421, 5.767023, 5.917041, 6.115015, 5.829036, 5.981256, 6.000012, 5.867461, 5.966209, 5.875116, 5.813595,
   5.592944, 5.751416, 5.882761, 5.817459, 5.680651, 5.794236, 5.724, 5.664805, 5.727925, 5.939785, 5.568784, 5.708275, 5.620999, 5.704337, 5.867461, 5.844437,
   5.786474, 5.966209, 5.727925, 5.747507, 5.471079, 5.648915, 5.817459, 5.829036, 5.664805, 5.700396, 5.84059, 5.727925, 5.544519, 5.660837, 5.532347, 5.544519,
   5.520148, 5.727925, 5.499756, 5.588925, 5.379957, 5.692506, 5.491578, 5.532347, 5.433986, 5.450503, 5.71221, 5.576849, 5.417419, 5.564748, 5.688557, 5.462858,
   5.544519, 5.536407, 5.516075, 5.516075, 5.429849, 5.367411, 5.316933, 5.471079, 5.3, 5.450503, 5.367411, 5.346437, 5.283013, 5.371596, 5.620999, 5.291513,
   5.346437, 5.442251, 5.253153, 5.375778, 5.316933, 5.092415, 5.392473, 5.24459, 5.304238, 5.261702, 5.329597, 5.304238, 5.46697, 5.039182, 5.400801, 5.359031,
   5.118823, 5.105636, 5.261702, 4.967319, 5.287265, 5.158183, 5.283013, 5.253153, 5.052543, 5.201566, 5.197244, 5.210199, 5.162537, 5.184256, 5.184256, 5.158183,
   4.912731, 5.052543, 4.930994, 5.210199, 5.188589, 4.876, 5.248873, 5.04364, 5.092415, 4.903574, 5.253153, 5.039182, 4.9401, 5.052543, 5.083581, 4.971841,
   5.070303, 5.123211, 4.903574, 5.074733, 4.976359, 4.908155, 5.052543, 4.94919, 4.885209, 4.834344, 4.735721, 5.039182, 4.754664, 4.944647, 4.912731, 4.797012,
   4.889807, 4.889807, 4.605819, 4.848269, 4.94919, 4.908155, 4.764107, 4.782938, 4.764107, 4.654354, 4.912731, 4.94919, 4.635001, 4.764107, 4.664, 4.668816,
   4.787634, 4.843632, 4.605819, 4.848269, 4.749936, 4.811046, 4.591158, 4.649523, 4.683233, 4.452, 4.586261, 4.546893, 4.586261, 4.497199, 4.576451, 4.944647,
   4.740464, 4.639847, 4.635001, 4.436831, 4.517142, 4.452, 4.707164, 4.778237, 4.711935, 4.644687, 4.492199, 4.467117, 4.431764, 4.44695, 4.654354, 4.349876,
   4.452, 4.487194, 4.436831, 4.536998, 4.482183, 4.431764, 4.33435, 4.467117, 4.323969, 4.586261, 4.271682, 4.391011, 4.487194, 4.497199, 4.396126, 4.261147,
   4.30313, 4.355039, 4.271682, 4.365347, 4.462084, 4.138075, 4.365347, 4.355039, 4.401234, 4.517142, 4.245297, 4.22407, 4.276939, 4.30313, 4.165139, 4.436831,
   4.33435, 4.452, 4.218747, 4.261147, 4.0944, 4.375631, 4.482183, 4.202736, 4.344707, 4.077901, 4.050254, 4.24, 4.261147, 4.022417, 3.960487, 4.20808,
   4.077901, 4.061336, 4.261147, 4.313562, 4.323969, 4.148922, 4.234697, 4.25587, 4.181294, 4.033575, 4.138075, 3.983118, 4.318768, 4.0944, 4.165139, 4.121751,
   3.816, 4.028, 4.186665, 4.050254, 3.983118, 3.949122, 4.083408, 4.011228, 4.0944, 4.077901, 3.949122, 4.061336, 3.983118, 4.061336, 4.016827, 4.105362,
   4.0944, 3.937725, 3.943428, 3.988756, 3.833626, 3.880237, 4.011228, 3.932014, 3.920567, 3.857002, 3.926295, 3.891803, 3.983118, 3.903334, 3.82776, 3.738661,
   3.845332, 3.914831, 3.868637, 3.886024, 3.903334, 3.897573, 3.708485, 3.994386, 3.903334, 3.720585, 3.810107, 3.886024, 3.857002, 4.022417, 3.977473, 3.684167,
   3.804204, 3.845332, 3.738661, 3.75665, 3.659687, 3.750663, 3.798292, 3.653542, 3.868637, 3.750663, 3.71454, 3.810107, 3.750663, 3.845332, 3.696346, 3.635043,
   3.702421, 3.702421, 3.732645, 3.720585, 3.572688, 3.622658, 3.405224, 3.578972, 3.496394, 3.647386, 3.515622, 3.75665, 3.502815, 3.635043, 3.61023, 3.438062,
   3.684167, 3.684167, 3.48996, 3.591508, 3.647386, 3.528383, 3.43152, 3.48996, 3.457615, 3.541098, 3.411817, 3.622658, 3.528383, 3.635043, 3.566392, 3.553768,
   3.418397, 3.405224, 3.528383, 3.502815, 3.502815, 3.385369, 3.578972, 3.585245, 3.424965, 3.398619, 3.572688, 3.444592, 3.591508, 3.438062, 3.411817, 3.438062,
   3.47059, 3.424965, 3.28429, 3.372066, 3.215139, 3.378724, 3.45111, 3.358712, 3.378724, 3.528383, 3.438062, 3.345304, 3.560085, 3.311546, 3.28429, 3.509224,
   3.48996, 3.28429, 3.405224, 3.444592, 3.32509, 3.311546, 3.385369, 3.318325, 3.304753, 3.215139, 3.372066, 3.318325, 3.158729, 3.242976, 3.242976, 3.222121,
   3.086767, 3.263699, 3.130142, 3.263699, 3.27744, 3.23604, 3.072172, 3.194102, 3.43152, 3.165835, 3.057507, 3.215139, 3.23604, 3.194102, 3.256806, 3.222121,
   3.23604, 3.172925, 3.137314, 3.222121, 3.242976, 3.187059, 3.297946, 3.194102, 3.165835, 3.304753, 3.057507, 3.086767, 3.115751, 3.10853, 3.042772, 3.263699,
   3.130142, 3.122955, 3.057507, 3.242976, 2.975562, 3.042772, 3.358712, 3.020535, 3.050149, 2.937558, 3.005619, 3.072172, 3.20113, 2.937558, 3.215139, 3.115751,
   3.057507, 2.714925, 3.20113, 2.945198, 3.172925, 2.906798, 2.891295, 2.975562, 3.027966, 2.952818, 2.998133, 2.906798, 2.975562, 3.035378, 2.998133, 2.929898,
   2.922218, 2.891295, 2.990628, 2.844278, 2.922218, 3.020535, 3.013086, 2.922218, 2.820477, 2.883512, 2.747834, 2.747834, 2.914518, 3.079478, 2.706635, 3.10853,
   3.035378, 2.836367, 2.788425, 2.914518, 2.812498, 2.647879, 2.883512, 2.867883, 2.780354, 2.828433, 2.77226, 2.689978, 2.723189, 2.836367, 2.77226, 2.820477,
   2.883512, 2.867883, 2.731429, 2.723189, 2.804496, 2.639379, 2.723189, 2.875708, 2.780354, 2.867883, 2.723189, 2.647879, 2.664799, 2.844278, 2.836367, 2.731429,
   2.937558, 2.780354, 2.472324, 2.739644, 2.622295, 2.689978, 2.613712, 2.906798, 2.788425, 2.613712, 2.747834, 2.756, 2.747834, 2.764142, 2.77226, 2.656352,
   2.499443, 2.472324, 2.535151, 2.552818, 2.852168, 2.747834, 2.6051, 2.891295, 2.796472, 2.698319, 2.681611, 2.698319, 2.77226, 2.58779, 2.731429, 2.561606,
   2.490436, 2.426451, 2.689978, 2.739644, 2.499443, 2.647879, 2.58779, 2.622295, 2.622295, 2.579091, 2.596459, 2.472324, 2.398506, 2.681611, 2.58779, 2.407857,
   2.561606, 2.454077, 2.681611, 2.508418, 2.570363, 2.517361, 2.552818, 2.526272, 2.490436, 2.508418, 2.639379, 2.552818, 2.570363, 2.463217, 2.444903, 2.454077,
   2.444903, 2.426451, 2.435695, 2.435695, 2.630851, 2.526272, 2.351194, 2.398506, 2.426451, 2.370232, 2.407857, 2.622295, 2.426451, 2.341617, 2.192945, 2.351194,
   2.435695, 2.370232, 2.463217, 2.398506, 2.454077, 2.379694, 2.58779, 2.499443, 2.444903, 2.579091, 2.370232, 2.302909, 2.351194, 2.273447, 2.273447, 2.417172,
   2.312647, 2.370232, 2.389119, 2.508418, 2.379694, 2.161984, 2.341617 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1159,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1159,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1159,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1159);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->SetMinimum(-222.6547);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->SetMaximum(2223.602);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1159);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_DHZfirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__160 = new TH1D("data_mc_ratio__160","",1000,0,2000);
   data_mc_ratio__160->SetBinContent(1000,0.8203445);
   data_mc_ratio__160->SetBinContent(1001,0.9856422);
   data_mc_ratio__160->SetBinError(1000,0.2368131);
   data_mc_ratio__160->SetBinError(1001,0.01312105);
   data_mc_ratio__160->SetMinimum(0.4);
   data_mc_ratio__160->SetMaximum(1.6);
   data_mc_ratio__160->SetEntries(9.177831);
   data_mc_ratio__160->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__160->SetLineColor(ci);
   data_mc_ratio__160->SetLineWidth(2);
   data_mc_ratio__160->SetMarkerStyle(20);
   data_mc_ratio__160->SetMarkerSize(1.2);
   data_mc_ratio__160->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__160->GetXaxis()->SetRange(1,150);
   data_mc_ratio__160->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__160->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__160->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__160->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__160->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__160->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__160->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__160->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__160->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__160->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__160->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__160->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__160->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__160->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__160->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__160->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1160[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1160[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1160[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1160[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01310919, 0.01236265, 0.01180892,
   0.01146024, 0.01119154, 0.01096586, 0.01072544, 0.01051642, 0.01049381, 0.01035061, 0.01033292, 0.01038516, 0.01037621, 0.01029779, 0.01046389, 0.01037007, 0.01050191, 0.01049959, 0.01054151,
   0.01062508, 0.01067947, 0.01069901, 0.01090895, 0.01093435, 0.01098569, 0.01098768, 0.01104787, 0.01125302, 0.01125088, 0.0112218, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1600777 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1160,Graph_from_mc_statistical_error_fy1160,Graph_from_mc_statistical_error_fex1160,Graph_from_mc_statistical_error_fey1160);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1160 = new TH1F("Graph_Graph_from_mc_statistical_error1160","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1160->SetMinimum(0.8079068);
   Graph_Graph_from_mc_statistical_error1160->SetMaximum(1.192093);
   Graph_Graph_from_mc_statistical_error1160->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1160->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1160->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1160->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1160->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1160->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1160->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1160->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1160->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1160->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1160->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1160);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_SR_18->cd();
   Z_mass_DHZfirst_SR_18->Modified();
   Z_mass_DHZfirst_SR_18->cd();
   Z_mass_DHZfirst_SR_18->SetSelected(Z_mass_DHZfirst_SR_18);
}
