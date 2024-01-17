#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_17/H_mass_tagFirst_SR_17
//=========  (Mon Jan  8 11:15:50 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_17 = new TCanvas("H_mass_tagFirst_SR_17", "H_mass_tagFirst_SR_17",0,0,600,600);
   H_mass_tagFirst_SR_17->SetHighLightColor(2);
   H_mass_tagFirst_SR_17->Range(0,0,1,1);
   H_mass_tagFirst_SR_17->SetFillColor(0);
   H_mass_tagFirst_SR_17->SetFillStyle(4000);
   H_mass_tagFirst_SR_17->SetBorderMode(0);
   H_mass_tagFirst_SR_17->SetBorderSize(2);
   H_mass_tagFirst_SR_17->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-15.26649,315.7258,15261.22);
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
   st->SetMaximum(13733.57);
   
   TH1F *st_stack_32 = new TH1F("st_stack_32","",1000,0,2000);
   st_stack_32->SetMinimum(0.01);
   st_stack_32->SetMaximum(13733.57);
   st_stack_32->SetDirectory(nullptr);
   st_stack_32->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_32->SetLineColor(ci);
   st_stack_32->SetLineWidth(0);
   st_stack_32->GetXaxis()->SetRange(1,150);
   st_stack_32->GetXaxis()->SetLabelFont(42);
   st_stack_32->GetXaxis()->SetTitleOffset(1);
   st_stack_32->GetXaxis()->SetTitleFont(42);
   st_stack_32->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_32->GetYaxis()->SetLabelFont(42);
   st_stack_32->GetYaxis()->SetLabelSize(0.05);
   st_stack_32->GetYaxis()->SetTitleSize(0.057);
   st_stack_32->GetYaxis()->SetTitleOffset(1.2);
   st_stack_32->GetYaxis()->SetTitleFont(42);
   st_stack_32->GetZaxis()->SetLabelFont(42);
   st_stack_32->GetZaxis()->SetTitleOffset(1);
   st_stack_32->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_32);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,3060.501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,6180.107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,6077.86);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,6074.409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,6085.195);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,6026.09);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,6060.604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,5957.063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,5949.297);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,5859.561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,5831.519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,5884.152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,5846.619);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,5705.113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,5715.467);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,5724.958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,5717.624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,5701.661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,5610.2);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,5590.355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,5564.038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,5551.958);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,5434.18);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,5456.183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,5433.749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,5315.539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,5276.28);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,5346.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,5291.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,5292.243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,2611.823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,22.86532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,8278.108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,1.830365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,4.399649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,9.263004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,13.43653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,18.47067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,23.5431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,28.3099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,33.37872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,37.84721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,41.61145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,44.9424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,48.06039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,50.01136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,52.03411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,53.14015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,54.55217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,55.64162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,55.74021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,55.86362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,56.00338);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,55.9169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,55.71349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,55.40865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,55.38177);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,55.10887);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,54.7582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,54.64251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,54.26653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,54.22879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,53.97076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,52.86449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,52.93838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,52.94189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,52.78698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,52.48996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,51.85495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,51.87469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,51.63554);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,51.20661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,51.19207);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,51.2375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,50.98806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,51.13387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,50.69519);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,50.66214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,50.27861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,50.15815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,50.384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,50.22305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,49.61155);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,49.65655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,49.69776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,49.66592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,49.59654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,49.19714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,49.11005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,48.99432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,48.94111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,48.41921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,48.51713);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,48.41729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,47.88774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,47.71057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,48.02552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,47.77879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,47.78269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,46.91791);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,47.36996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,47.23618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,46.7032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,46.85042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,46.49551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,46.13584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,46.41137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,46.28688);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,45.39362);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,45.75708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,45.36696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,45.71843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,45.31359);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,44.90719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,44.86365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,44.69947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,44.30004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,44.64114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,44.13377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,44.26431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,44.10846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,43.99226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,43.54576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,43.60342);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,43.34655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,43.29714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,43.39376);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,43.42377);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,43.20677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,42.91068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,42.94103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,42.52946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,42.46814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,42.44403);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,42.48348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,42.4221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,42.08512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,42.58194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,42.54258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,42.11386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,41.79444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,41.43664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,41.47481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,42.0453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,41.50397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,41.58013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,41.01678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,41.22499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,41.01451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,41.49275);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,41.39845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,40.72304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,40.54899);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,40.35575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,40.44328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,40.36036);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,40.47549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,40.9532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,40.2842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,40.57652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,40.44328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,40.57423);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,39.92219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,39.65556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,39.87087);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,39.88487);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,39.97111);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,39.63208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,39.46265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,39.36821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,39.51685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,39.5404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,39.55216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,39.16914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,39.22612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,39.10732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,38.94038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,38.78233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,38.88777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,39.08589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,39.12159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,38.35283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,38.73431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,38.75113);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,38.54404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,38.43766);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,38.0752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,37.94054);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,38.08498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,37.98956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,38.25808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,37.77091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,38.03608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,37.54107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,37.47408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,37.33475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,37.2649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,37.24991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,37.12478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,36.9237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,36.9237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,36.60984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,36.77976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,37.06959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,36.64287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,36.9363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,37.21992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,36.86568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,36.10044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,36.5335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,36.23424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,36.44934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,36.25478);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,36.22396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,35.45274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,35.79755);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,35.98424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,35.57328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,35.10188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,35.36337);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,35.32651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,35.0674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,35.29752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,35.31597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,34.98769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,35.27115);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,34.73409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,34.77425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,34.84911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,34.25386);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,34.22396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,34.41919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,34.40837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,34.25657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,33.9893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,33.6702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,33.90157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,34.03855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,33.51506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,33.61211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,33.30336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,33.62595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,33.35641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,33.02274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,33.03401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,33.20541);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,33.25862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,33.14651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,33.07624);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,33.05373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,32.25288);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,32.48289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,32.49148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,32.66573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,32.24133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,32.15173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,31.97468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,32.05317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,31.85512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,31.8025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,31.87265);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,31.64408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,31.36939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,31.91642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,31.37235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,31.28621);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,30.93322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,31.36345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,30.90614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,30.83982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,31.05932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,31.04734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,30.95428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,30.3409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,30.6643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,30.5518);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,30.49082);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,29.83987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,29.85858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,29.93951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,29.95194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,29.91152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,30.07596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,29.7086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,29.57989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,29.81179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,29.53581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,29.10094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,29.3176);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,29.70233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,29.13291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,28.95025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,29.06254);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,28.802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,28.94061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,28.95025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,28.88267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,28.36573);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,28.60748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,28.39197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,28.20781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,28.11529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,28.30662);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,27.81244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,28.06891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,28.01581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,28.07885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,27.5806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,27.78566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,27.63453);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,27.08692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,27.21375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,27.357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,27.14527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,26.99745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,26.79677);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,27.05942);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,26.4894);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,26.89384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,26.23523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,26.44369);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,26.77593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,26.37673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,26.18907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,25.84569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,26.18552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,25.86728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,26.05726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,25.87088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,26.29192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,25.76635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,25.71936);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,25.79523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,25.22615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,25.78801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,25.25933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,25.29982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,25.24827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,25.38428);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,25.10411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,24.89191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,25.07815);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,24.9703);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,24.2902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,24.84326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,24.72687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,24.55313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,24.2902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,24.08242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,24.47721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,24.35524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,24.12103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,23.85724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,23.36853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,23.61021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,23.61809);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,23.736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,23.71639);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,23.78692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,23.80256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,23.43613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,23.12031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,23.38844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,23.01946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,23.28875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,23.32469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,23.18462);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,23.03966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,22.84903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,22.79194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,22.80011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,22.37575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,22.54562);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,22.9344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,22.22133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,22.19199);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,22.23807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,22.11638);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,22.31327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,22.05739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,22.04051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,21.7515);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,22.4173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,21.44124);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,21.8582);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,21.73009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,21.46726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,21.42387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,21.71724);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,22.25062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,21.44992);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,20.86045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,20.95392);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,21.35426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,20.98499);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,20.89611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,20.8872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,20.94948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,20.77999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,20.73067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,20.83366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,20.82026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,20.44135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,20.82026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,20.33637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,20.15711);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,20.30431);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,20.13401);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,19.84068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,19.95293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,20.00417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,20.17096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,19.96692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,20.12477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,19.69474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,19.72779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,19.69001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,19.64269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,19.41874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,19.50959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,19.20672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,19.64743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,18.7854);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,19.36595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,19.07545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,19.25028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,19.09983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,18.95309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,18.83982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,18.8645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,18.99723);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,18.46563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,18.37975);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,18.20168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,18.83982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,18.37469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,18.37469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,18.44546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,18.47571);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,18.54107);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,18.2119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,18.14535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,17.93903);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,17.88707);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,18.25783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,18.24763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,17.64613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,18.01151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,18.16073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,18.0631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,17.56684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,17.65667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,17.48187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,17.61445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,17.70404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,17.47655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,17.11606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,17.0834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,17.34828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,17.24066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,17.18118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,17.25684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,16.92469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,17.12693);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,17.01244);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,16.80328);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,16.56904);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,17.24066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,16.98507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,16.93019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,16.32004);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,16.41102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,16.51841);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,16.09033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,16.85306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,16.52968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,16.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,16.28007);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,15.99752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,16.13653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,16.34853);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,16.28579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,16.05559);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,15.80439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,15.75721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,15.45909);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,15.62674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,15.99752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,15.24083);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,15.33822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,15.71581);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,15.65649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,15.28351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,15.35035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,15.28351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,14.90121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,15.22861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,15.25304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,15.07507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,15.21027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,15.07507);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,15.04417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,15.0256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,15.27133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,14.8449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,14.92617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,14.98218);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,14.681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,15.13667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,14.28258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,15.09357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,14.42521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,14.52166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,14.68734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,14.28258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,14.30862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,14.72531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,14.42521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,14.61747);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,14.3411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,14.50884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,14.35407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,13.90622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,14.14509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,14.19762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,14.28258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,13.89283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,13.81221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,13.66318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,14.15166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,13.64273);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,13.66999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,13.51939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,13.8593);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,13.61542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,13.5949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,13.56063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,13.61542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,13.62908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,13.30429);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,13.54003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,13.60858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,13.31827);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,13.40186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,13.24118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,13.13534);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,13.5469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,13.51939);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,13.01434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,13.11407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,13.05717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,13.09276);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,12.99287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,12.68114);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,12.8922);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,13.12825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,13.14242);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,12.48888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,12.70314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,12.47396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,12.47396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,12.65175);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,12.64439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,12.53351);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,11.94031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,12.60754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,12.57058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,12.27846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,12.30874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,12.3314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,12.54835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,12.34649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,11.9091);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,12.39163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,12.27846);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,12.3314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,11.96367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,11.62438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,12.32385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,12.35402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,11.93252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,11.60835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,12.27088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,11.43876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,11.5682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,12.14127);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,11.8307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,12.07979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,11.88563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,11.60033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,11.20865);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,11.41433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,11.45502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,11.84642);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,11.95589);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,11.64038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,11.85427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,11.5682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,11.43062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,11.12531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,11.45502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,11.07501);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,11.33251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,10.79415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,10.84576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,11.67231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,10.80277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,10.89712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,11.10857);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,11.03291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,10.89712);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,11.01603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,10.91419);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,10.81999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,10.72496);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,10.82858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,10.75961);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,10.53233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,10.67277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,10.594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,10.92271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,10.50579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,10.64658);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,10.33611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,10.67277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,10.58521);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,10.41683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,10.01603);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,10.96523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,10.60278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,10.39);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,9.93206);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,10.35411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,10.42576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,10.25476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,9.96013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,10.84576);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,10.24568);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,10.04387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,9.96013);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,10.09009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,10.1819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,10.08086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,10.09009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,10.25476);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,9.752407);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,9.780993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,9.780993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,9.913302);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,10.02532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,9.950782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,9.969469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,9.598514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,10.08086);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,9.637217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,9.588813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,9.598514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,9.352987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,9.780993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,9.432251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,9.617885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,9.530404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,9.333065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,9.704578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,9.771474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,9.549913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,9.382789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,9.070109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,9.151824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,8.799298);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,9.100838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,9.559653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,9.182279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,8.977292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,9.100838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,9.412497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,9.059843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,9.422379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,9.131464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,9.212634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,8.956535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,8.883504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,8.820425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,8.977292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,8.862528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,9.161987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,8.563464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,8.852021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,9.161987);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,9.273045);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,8.487052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,8.820425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,8.756892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,8.966919);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,8.49801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,8.47608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,8.649966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,8.820425);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,8.660718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,8.276092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,8.596005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,8.746258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,8.893974);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,8.574325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,8.767513);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,8.519884);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,8.487052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,8.487052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,8.432048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,8.432048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,8.16287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,8.343287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,8.320949);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,8.23099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,8.208346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,8.487052);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,8.606824);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,7.813368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,8.128596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,8.219676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,8.197001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,8.596005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,8.082672);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,8.059611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,8.013291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,7.978375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,8.048056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,8.128596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,7.717495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,8.036485);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,7.729544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,7.884508);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,7.837153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,7.919839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,7.955012);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,7.93158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,7.644801);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,7.753587);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,7.534446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,7.669109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,7.801449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,7.860867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,7.509702);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,7.632618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,7.546787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,7.546787);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,7.397331);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,7.860867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,7.729544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,7.595952);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,7.422449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,7.534446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,7.789511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,7.559108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,7.472433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,7.359493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,7.244792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,7.321459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,7.38474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,7.128246);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,7.459968);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,7.583691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,7.193227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,7.583691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,7.283226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,6.996475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,7.57141);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,7.244792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,7.049479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,6.834996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,6.902738);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,7.257626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,7.522084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,7.102088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,7.257626);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,7.231935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,7.38474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,7.283226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,7.088972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,7.497299);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,6.983161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,7.009763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,6.862173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,6.794026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,7.088972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,6.725189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,6.725189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,7.447483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,7.088972);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,6.725189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,6.875721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,6.862173);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,6.500014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,6.725189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,6.725189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,6.384449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,6.45692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,6.780315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,6.996475);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,6.281586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,6.085944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,6.780315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,6.296384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,6.821367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,7.115179);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,6.528586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,6.45692);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,6.655641);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,6.542825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,6.834996);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,6.35523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,6.669608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,6.442491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,6.485681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,6.42803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,6.557033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,6.17701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,6.542825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,5.836156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,6.161926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,6.485681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,6.442491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,6.131646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,6.17701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,6.131646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,6.024468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,6.35523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,6.222044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,5.690835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,6.399009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,5.690835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,5.674459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,6.251886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,5.641563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,6.024468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,5.755875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,5.836156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,6.542825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,5.899595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,6.039895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,5.899595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,6.11645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,6.17701);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,5.93106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,5.93106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,6.009001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,5.962358);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,5.915348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,6.024468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,6.413536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,5.690835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,6.11645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,5.93106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,5.788121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,5.93106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,5.836156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,5.946729);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,5.658035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,5.641563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,5.674459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,5.575189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,6.11645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,5.658035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,5.658035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,5.883799);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,5.755875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,5.755875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,5.336384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,5.301391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,5.457093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,5.690835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,5.608474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,5.723448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,5.755875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,5.541704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,5.625043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,5.06805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,5.625043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,5.336384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,5.457093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,5.977946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,5.266166);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,5.690835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,5.104643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,5.405691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,5.336384);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,5.836156);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,5.159046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,4.975391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,4.918957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,5.140976);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,5.283808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,4.975391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,5.104643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,5.031191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,5.558472);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,5.248464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,5.194998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,5.049655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,5.212881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,4.745632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,5.212881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,5.049655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,5.194998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,4.706249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,5.104643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,5.06805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,5.104643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,5.353795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,5.194998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,5.122842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,5.122842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,4.99406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,4.975391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,5.177053);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,4.804102);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,4.784691);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,5.47412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,4.765202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,4.706249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,4.545303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,5.031191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,4.861869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,5.049655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,4.84269);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,4.606317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,4.586069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,4.900002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,5.159046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,4.918957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,4.745632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,4.975391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,4.706249);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,4.975391);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,5.031191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,4.586069);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,4.725981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,4.880973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,4.378446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,4.070019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,4.745632);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,4.666533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,4.606317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,4.314211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,4.504169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,4.900002);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,4.204973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,4.765202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,4.99406);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,4.270851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,4.646547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,4.545303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,3.95404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,4.524783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,4.545303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,4.182783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,4.861869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,4.606317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,4.606317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,4.565732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,4.462655);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,4.504169);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,4.666533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,4.024028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,4.227046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,4.399649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,4.024028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,4.314211);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,4.35714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,4.249005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,4.545303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,4.160474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,4.524783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,4.335728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,4.024028);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,4.378446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,4.399649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,4.182783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,4.399649);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,4.09282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,4.204973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,4.070019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,4.270851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,4.646547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,4.160474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,3.95404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,3.761042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,4.35714);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,3.906684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,3.761042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,4.115495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,4.270851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,4.270851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,4.115495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,4.160474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,4.420751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,4.000835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,3.95404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,4.09282);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,4.138046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,4.000835);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,3.810208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,4.249005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,3.834555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,3.95404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,3.609528);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,3.686063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,3.977506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,3.88279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,4.160474);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,3.635219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,3.761042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,3.635219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,4.182783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,3.810208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,3.635219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,3.635219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,4.115495);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,3.88279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,3.761042);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,3.736216);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,4.227046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,59.76078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(3073644);

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
   
   TH1D *VH_tagFirst_H_mass__63 = new TH1D("VH_tagFirst_H_mass__63","",1000,0,2000);
   VH_tagFirst_H_mass__63->SetBinContent(1000,26);
   VH_tagFirst_H_mass__63->SetBinContent(1001,9229);
   VH_tagFirst_H_mass__63->SetEntries(1359367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__63->SetLineColor(ci);
   VH_tagFirst_H_mass__63->SetLineWidth(2);
   VH_tagFirst_H_mass__63->SetMarkerStyle(20);
   VH_tagFirst_H_mass__63->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__63->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__63->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__63->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__63->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__63->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__63->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__63->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__63->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__63->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__63->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1063[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1063[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3060.501, 6180.107,
   6077.86, 6074.409, 6085.195, 6026.09, 6060.604, 5957.063, 5949.297, 5859.561, 5831.519, 5884.152, 5846.619, 5705.113, 5715.467, 5724.958, 5717.624, 5701.661,
   5610.2, 5590.355, 5564.038, 5551.958, 5434.18, 5456.183, 5433.749, 5315.539, 5276.28, 5346.17, 5291.38, 5292.243, 2611.823, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 22.86532 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1063[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1063[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1.830365, 4.399649, 9.263004, 13.43653, 18.47067, 23.5431,
   28.3099, 33.37872, 37.84721, 41.61145, 44.9424, 48.06039, 50.01136, 52.03411, 53.14015, 54.55217, 55.64162, 55.74021, 55.86362, 56.00338, 55.9169, 55.71349,
   55.40865, 55.38177, 55.10887, 54.7582, 54.64251, 54.26653, 54.22879, 53.97076, 52.86449, 52.93838, 52.94189, 52.78698, 52.48996, 51.85495, 51.87469, 51.63554,
   51.20661, 51.19207, 51.2375, 50.98806, 51.13387, 50.69519, 50.66214, 50.27861, 50.15815, 50.384, 50.22305, 49.61155, 49.65655, 49.69776, 49.66592, 49.59654,
   49.19714, 49.11005, 48.99432, 48.94111, 48.41921, 48.51713, 48.41729, 47.88774, 47.71057, 48.02552, 47.77879, 47.78269, 46.91791, 47.36996, 47.23618, 46.7032,
   46.85042, 46.49551, 46.13584, 46.41137, 46.28688, 45.39362, 45.75708, 45.36696, 45.71843, 45.31359, 44.90719, 44.86365, 44.69947, 44.30004, 44.64114, 44.13377,
   44.26431, 44.10846, 43.99226, 43.54576, 43.60342, 43.34655, 43.29714, 43.39376, 43.42377, 43.20677, 42.91068, 42.94103, 42.52946, 42.46814, 42.44403, 42.48348,
   42.4221, 42.08512, 42.58194, 42.54258, 42.11386, 41.79444, 41.43664, 41.47481, 42.0453, 41.50397, 41.58013, 41.01678, 41.22499, 41.01451, 41.49275, 41.39845,
   40.72304, 40.54899, 40.35575, 40.44328, 40.36036, 40.47549, 40.9532, 40.2842, 40.57652, 40.44328, 40.57423, 39.92219, 39.65556, 39.87087, 39.88487, 39.97111,
   39.63208, 39.46265, 39.36821, 39.51685, 39.5404, 39.55216, 39.16914, 39.22612, 39.10732, 38.94038, 38.78233, 38.88777, 39.08589, 39.12159, 38.35283, 38.73431,
   38.75113, 38.54404, 38.43766, 38.0752, 37.94054, 38.08498, 37.98956, 38.25808, 37.77091, 38.03608, 37.54107, 37.47408, 37.33475, 37.2649, 37.24991, 37.12478,
   36.9237, 36.9237, 36.60984, 36.77976, 37.06959, 36.64287, 36.9363, 37.21992, 36.86568, 36.10044, 36.5335, 36.23424, 36.44934, 36.25478, 36.22396, 35.45274,
   35.79755, 35.98424, 35.57328, 35.10188, 35.36337, 35.32651, 35.0674, 35.29752, 35.31597, 34.98769, 35.27115, 34.73409, 34.77425, 34.84911, 34.25386, 34.22396,
   34.41919, 34.40837, 34.25657, 33.9893, 33.6702, 33.90157, 34.03855, 33.51506, 33.61211, 33.30336, 33.62595, 33.35641, 33.02274, 33.03401, 33.20541, 33.25862,
   33.14651, 33.07624, 33.05373, 32.25288, 32.48289, 32.49148, 32.66573, 32.24133, 32.15173, 31.97468, 32.05317, 31.85512, 31.8025, 31.87265, 31.64408, 31.36939,
   31.91642, 31.37235, 31.28621, 30.93322, 31.36345, 30.90614, 30.83982, 31.05932, 31.04734, 30.95428, 30.3409, 30.6643, 30.5518, 30.49082, 29.83987, 29.85858,
   29.93951, 29.95194, 29.91152, 30.07596, 29.7086, 29.57989, 29.81179, 29.53581, 29.10094, 29.3176, 29.70233, 29.13291, 28.95025, 29.06254, 28.802, 28.94061,
   28.95025, 28.88267, 28.36573, 28.60748, 28.39197, 28.20781, 28.11529, 28.30662, 27.81244, 28.06891, 28.01581, 28.07885, 27.5806, 27.78566, 27.63453, 27.08692,
   27.21375, 27.357, 27.14527, 26.99745, 26.79677, 27.05942, 26.4894, 26.89384, 26.23523, 26.44369, 26.77593, 26.37673, 26.18907, 25.84569, 26.18552, 25.86728,
   26.05726, 25.87088, 26.29192, 25.76635, 25.71936, 25.79523, 25.22615, 25.78801, 25.25933, 25.29982, 25.24827, 25.38428, 25.10411, 24.89191, 25.07815, 24.9703,
   24.2902, 24.84326, 24.72687, 24.55313, 24.2902, 24.08242, 24.47721, 24.35524, 24.12103, 23.85724, 23.36853, 23.61021, 23.61809, 23.736, 23.71639, 23.78692,
   23.80256, 23.43613, 23.12031, 23.38844, 23.01946, 23.28875, 23.32469, 23.18462, 23.03966, 22.84903, 22.79194, 22.80011, 22.37575, 22.54562, 22.9344, 22.22133,
   22.19199, 22.23807, 22.11638, 22.31327, 22.05739, 22.04051, 21.7515, 22.4173, 21.44124, 21.8582, 21.73009, 21.46726, 21.42387, 21.71724, 22.25062, 21.44992,
   20.86045, 20.95392, 21.35426, 20.98499, 20.89611, 20.8872, 20.94948, 20.77999, 20.73067, 20.83366, 20.82026, 20.44135, 20.82026, 20.33637, 20.15711, 20.30431,
   20.13401, 19.84068, 19.95293, 20.00417, 20.17096, 19.96692, 20.12477, 19.69474, 19.72779, 19.69001, 19.64269, 19.41874, 19.50959, 19.20672, 19.64743, 18.7854,
   19.36595, 19.07545, 19.25028, 19.09983, 18.95309, 18.83982, 18.8645, 18.99723, 18.46563, 18.37975, 18.20168, 18.83982, 18.37469, 18.37469, 18.44546, 18.47571,
   18.54107, 18.2119, 18.14535, 17.93903, 17.88707, 18.25783, 18.24763, 17.64613, 18.01151, 18.16073, 18.0631, 17.56684, 17.65667, 17.48187, 17.61445, 17.70404,
   17.47655, 17.11606, 17.0834, 17.34828, 17.24066, 17.18118, 17.25684, 16.92469, 17.12693, 17.01244, 16.80328, 16.56904, 17.24066, 16.98507, 16.93019, 16.32004,
   16.41102, 16.51841, 16.09033, 16.85306, 16.52968, 16.72, 16.28007, 15.99752, 16.13653, 16.34853, 16.28579, 16.05559, 15.80439, 15.75721, 15.45909, 15.62674,
   15.99752, 15.24083, 15.33822, 15.71581, 15.65649, 15.28351, 15.35035, 15.28351, 14.90121, 15.22861, 15.25304, 15.07507, 15.21027, 15.07507, 15.04417, 15.0256,
   15.27133, 14.8449, 14.92617, 14.98218, 14.681, 15.13667, 14.28258, 15.09357, 14.42521, 14.52166, 14.68734, 14.28258, 14.30862, 14.72531, 14.42521, 14.61747,
   14.3411, 14.50884, 14.35407, 13.90622, 14.14509, 14.19762, 14.28258, 13.89283, 13.81221, 13.66318, 14.15166, 13.64273, 13.66999, 13.51939, 13.8593, 13.61542,
   13.5949, 13.56063, 13.61542, 13.62908, 13.30429, 13.54003, 13.60858, 13.31827, 13.40186, 13.24118, 13.13534, 13.5469, 13.51939, 13.01434, 13.11407, 13.05717,
   13.09276, 12.99287, 12.68114, 12.8922, 13.12825, 13.14242, 12.48888, 12.70314, 12.47396, 12.47396, 12.65175, 12.64439, 12.53351, 11.94031, 12.60754, 12.57058,
   12.27846, 12.30874, 12.3314, 12.54835, 12.34649, 11.9091, 12.39163, 12.27846, 12.3314, 11.96367, 11.62438, 12.32385, 12.35402, 11.93252, 11.60835, 12.27088,
   11.43876, 11.5682, 12.14127, 11.8307, 12.07979, 11.88563, 11.60033, 11.20865, 11.41433, 11.45502, 11.84642, 11.95589, 11.64038, 11.85427, 11.5682, 11.43062,
   11.12531, 11.45502, 11.07501, 11.33251, 10.79415, 10.84576, 11.67231, 10.80277, 10.89712, 11.10857, 11.03291, 10.89712, 11.01603, 10.91419, 10.81999, 10.72496,
   10.82858, 10.75961, 10.53233, 10.67277, 10.594, 10.92271, 10.50579, 10.64658, 10.33611, 10.67277, 10.58521, 10.41683, 10.01603, 10.96523, 10.60278, 10.39,
   9.93206, 10.35411, 10.42576, 10.25476, 9.96013, 10.84576, 10.24568, 10.04387, 9.96013, 10.09009, 10.1819, 10.08086, 10.09009, 10.25476, 9.752407, 9.780993,
   9.780993, 9.913302, 10.02532, 9.950782, 9.969469, 9.598514, 10.08086, 9.637217, 9.588813, 9.598514, 9.352987, 9.780993, 9.432251, 9.617885, 9.530404, 9.333065,
   9.704578, 9.771474, 9.549913, 9.382789, 9.070109, 9.151824, 8.799298, 9.100838, 9.559653, 9.182279, 8.977292, 9.100838, 9.412497, 9.059843, 9.422379, 9.131464,
   9.212634, 8.956535, 8.883504, 8.820425, 8.977292, 8.862528, 9.161987, 8.563464, 8.852021, 9.161987, 9.273045, 8.487052, 8.820425, 8.756892, 8.966919, 8.49801,
   8.47608, 8.649966, 8.820425, 8.660718, 8.276092, 8.596005, 8.746258, 8.893974, 8.574325, 8.767513, 8.519884, 8.487052, 8.487052, 8.432048, 8.432048, 8.16287,
   8.343287, 8.320949, 8.23099, 8.208346, 8.487052, 8.606824, 7.813368, 8.128596, 8.219676, 8.197001, 8.596005, 8.082672, 8.059611, 8.013291, 7.978375, 8.048056,
   8.128596, 7.717495, 8.036485, 7.729544, 7.884508, 7.837153, 7.919839, 7.955012, 7.93158, 7.644801, 7.753587, 7.534446, 7.669109, 7.801449, 7.860867, 7.509702,
   7.632618, 7.546787, 7.546787, 7.397331, 7.860867, 7.729544, 7.595952, 7.422449, 7.534446, 7.789511, 7.559108, 7.472433, 7.359493, 7.244792, 7.321459, 7.38474,
   7.128246, 7.459968, 7.583691, 7.193227, 7.583691, 7.283226, 6.996475, 7.57141, 7.244792, 7.049479, 6.834996, 6.902738, 7.257626, 7.522084, 7.102088, 7.257626,
   7.231935, 7.38474, 7.283226, 7.088972, 7.497299, 6.983161, 7.009763, 6.862173, 6.794026, 7.088972, 6.725189, 6.725189, 7.447483, 7.088972, 6.725189, 6.875721,
   6.862173, 6.500014, 6.725189, 6.725189, 6.384449, 6.45692, 6.780315, 6.996475, 6.281586, 6.085944, 6.780315, 6.296384, 6.821367, 7.115179, 6.528586, 6.45692,
   6.655641, 6.542825, 6.834996, 6.35523, 6.669608, 6.442491, 6.485681, 6.42803, 6.557033, 6.17701, 6.542825, 5.836156, 6.161926, 6.485681, 6.442491, 6.131646,
   6.17701, 6.131646, 6.024468, 6.35523, 6.222044, 5.690835, 6.399009, 5.690835, 5.674459, 6.251886, 5.641563, 6.024468, 5.755875, 5.836156, 6.542825, 5.899595,
   6.039895, 5.899595, 6.11645, 6.17701, 5.93106, 5.93106, 6.009001, 5.962358, 5.915348, 6.024468, 6.413536, 5.690835, 6.11645, 5.93106, 5.788121, 5.93106,
   5.836156, 5.946729, 5.658035, 5.641563, 5.674459, 5.575189, 6.11645, 5.658035, 5.658035, 5.883799, 5.755875, 5.755875, 5.336384, 5.301391, 5.457093, 5.690835,
   5.608474, 5.723448, 5.755875, 5.541704, 5.625043, 5.06805, 5.625043, 5.336384, 5.457093, 5.977946, 5.266166, 5.690835, 5.104643, 5.405691, 5.336384, 5.836156,
   5.159046, 4.975391, 4.918957, 5.140976, 5.283808, 4.975391, 5.104643, 5.031191, 5.558472, 5.248464, 5.194998, 5.049655, 5.212881, 4.745632, 5.212881, 5.049655,
   5.194998, 4.706249, 5.104643, 5.06805, 5.104643, 5.353795, 5.194998, 5.122842, 5.122842, 4.99406, 4.975391, 5.177053, 4.804102, 4.784691, 5.47412, 4.765202,
   4.706249, 4.545303, 5.031191, 4.861869, 5.049655, 4.84269, 4.606317, 4.586069, 4.900002, 5.159046, 4.918957, 4.745632, 4.975391, 4.706249, 4.975391, 5.031191,
   4.586069, 4.725981, 4.880973, 4.378446, 4.070019, 4.745632, 4.666533, 4.606317, 4.314211, 4.504169, 4.900002, 4.204973, 4.765202, 4.99406, 4.270851, 4.646547,
   4.545303, 3.95404, 4.524783, 4.545303, 4.182783, 4.861869, 4.606317, 4.606317, 4.565732, 4.462655, 4.504169, 4.666533, 4.024028, 4.227046, 4.399649, 4.024028,
   4.314211, 4.35714, 4.249005, 4.545303, 4.160474, 4.524783, 4.335728, 4.024028, 4.378446, 4.399649, 4.182783, 4.399649, 4.09282, 4.204973, 4.070019, 4.270851,
   4.646547, 4.160474, 3.95404, 3.761042, 4.35714, 3.906684, 3.761042, 4.115495, 4.270851, 4.270851, 4.115495, 4.160474, 4.420751, 4.000835, 3.95404, 4.09282,
   4.138046, 4.000835, 3.810208, 4.249005, 3.834555, 3.95404, 3.609528, 3.686063, 3.977506, 3.88279, 4.160474, 3.635219, 3.761042, 3.635219, 4.182783, 3.810208,
   3.635219, 3.635219, 4.115495, 3.88279, 3.761042, 3.736216, 4.227046 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1063,Graph_from_VH_tagFirst_2b1c_H_mass_fy1063,Graph_from_VH_tagFirst_2b1c_H_mass_fex1063,Graph_from_VH_tagFirst_2b1c_H_mass_fey1063);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->SetMinimum(-684.778);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->SetMaximum(6860.517);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1063);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_H_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__64 = new TH1D("data_mc_ratio__64","",1000,0,2000);
   data_mc_ratio__64->SetBinContent(1000,1.137093);
   data_mc_ratio__64->SetBinContent(1001,1.114868);
   data_mc_ratio__64->SetBinError(1000,0.2230023);
   data_mc_ratio__64->SetBinError(1001,0.01412279);
   data_mc_ratio__64->SetMinimum(0.4);
   data_mc_ratio__64->SetMaximum(1.6);
   data_mc_ratio__64->SetEntries(13.76701);
   data_mc_ratio__64->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__64->SetLineColor(ci);
   data_mc_ratio__64->SetLineWidth(2);
   data_mc_ratio__64->SetMarkerStyle(20);
   data_mc_ratio__64->SetMarkerSize(1.2);
   data_mc_ratio__64->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__64->GetXaxis()->SetRange(1,150);
   data_mc_ratio__64->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__64->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__64->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__64->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__64->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__64->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__64->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__64->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__64->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__64->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__64->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__64->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__64->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__64->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__64->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__64->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1064[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1064[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1064[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1064[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01694974, 0.00835512,
   0.008425105, 0.008427498, 0.008420026, 0.008461218, 0.008437091, 0.008510099, 0.008515651, 0.008580609, 0.008601216, 0.008562661, 0.008590102, 0.008695981, 0.008688101, 0.008680896, 0.008686462, 0.008698613,
   0.008769231, 0.008784782, 0.008805533, 0.008815107, 0.008910122, 0.008892139, 0.008910476, 0.009009009, 0.009042464, 0.008983163, 0.009029552, 0.009028816, 0.01796366, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1848672 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1064,Graph_from_mc_statistical_error_fy1064,Graph_from_mc_statistical_error_fex1064,Graph_from_mc_statistical_error_fey1064);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1064 = new TH1F("Graph_Graph_from_mc_statistical_error1064","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1064->SetMinimum(0.7781594);
   Graph_Graph_from_mc_statistical_error1064->SetMaximum(1.221841);
   Graph_Graph_from_mc_statistical_error1064->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1064->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1064->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1064->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1064->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1064->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1064->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1064->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1064->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1064);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->Modified();
   H_mass_tagFirst_SR_17->cd();
   H_mass_tagFirst_SR_17->SetSelected(H_mass_tagFirst_SR_17);
}
