#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: H_mass_tagFirst_SR_18/H_mass_tagFirst_SR_18
//=========  (Mon Jan  8 11:16:15 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagFirst_SR_18 = new TCanvas("H_mass_tagFirst_SR_18", "H_mass_tagFirst_SR_18",0,0,600,600);
   H_mass_tagFirst_SR_18->SetHighLightColor(2);
   H_mass_tagFirst_SR_18->Range(0,0,1,1);
   H_mass_tagFirst_SR_18->SetFillColor(0);
   H_mass_tagFirst_SR_18->SetFillStyle(4000);
   H_mass_tagFirst_SR_18->SetBorderMode(0);
   H_mass_tagFirst_SR_18->SetBorderSize(2);
   H_mass_tagFirst_SR_18->SetFrameFillStyle(1000);
   H_mass_tagFirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-36.01588,315.7258,35989.86);
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
   st->SetMaximum(32387.28);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",1000,0,2000);
   st_stack_56->SetMinimum(0.01);
   st_stack_56->SetMaximum(32387.28);
   st_stack_56->SetDirectory(nullptr);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->SetLineWidth(0);
   st_stack_56->GetXaxis()->SetRange(1,150);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetTitleOffset(1);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.05);
   st_stack_56->GetYaxis()->SetTitleSize(0.057);
   st_stack_56->GetYaxis()->SetTitleOffset(1.2);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetTitleOffset(1);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VH_tagFirst_2b1c_H_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(48,7277.569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(49,14574.27);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(50,14472.37);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(51,14394.05);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(52,14189.79);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(53,14006.45);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(54,14005.12);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(55,14070.98);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(56,13807.53);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(57,13846.25);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(58,13739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(59,13622.41);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(60,13589.04);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(61,13341.17);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(62,13336.72);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(63,13293.56);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(64,13115.11);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(65,13093.31);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(66,13167.62);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(67,13142.26);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(68,12961.14);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(69,12935.33);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(70,12739.08);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(71,12630.06);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(72,12509.91);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(73,12515.25);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(74,12462.29);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(75,12363.06);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(76,12168.59);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(77,12108.07);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(78,6098.758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1000,47.61526);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinContent(1001,22017.38);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(11,0.6293284);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(12,3.050783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(13,7.923043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(14,14.41286);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(15,21.42491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(16,29.21128);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(17,36.62021);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(18,43.88861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(19,50.66192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(20,57.52248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(21,63.28585);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(22,67.96893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(23,72.10687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(24,75.74067);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(25,78.75914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(26,80.7333);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(27,82.55364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(28,83.91806);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(29,84.86489);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(30,85.63956);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(31,86.3855);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(32,86.02945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(33,86.23867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(34,86.2157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(35,85.732);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(36,85.62221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(37,85.73084);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(38,85.26646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(39,84.38635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(40,84.445);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(41,83.9676);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(42,82.89118);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(43,82.69385);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(44,82.70583);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(45,82.18099);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(46,81.61883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(47,81.18947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(48,80.53191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(49,80.53314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(50,80.2511);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(51,80.03366);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(52,79.46378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(53,78.94875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(54,78.94498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(55,79.13039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(56,78.38614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(57,78.49595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(58,78.19137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(59,77.85889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(60,77.76346);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(61,77.05098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(62,77.03813);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(63,76.91336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(64,76.39539);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(65,76.33186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(66,76.54818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(67,76.47441);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(68,75.94563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(69,75.86998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(70,75.29225);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(71,74.96937);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(72,74.61192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(73,74.62785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(74,74.46979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(75,74.17271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(76,73.58704);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(77,73.40382);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(78,73.54666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(79,72.55314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(80,72.66223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(81,72.29201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(82,72.21938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(83,71.73654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(84,71.36984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(85,70.99148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(86,70.67838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(87,70.61951);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(88,70.59848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(89,70.8379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(90,70.42436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(91,69.69795);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(92,69.51017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(93,69.00838);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(94,68.87625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(95,68.51592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(96,68.26256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(97,68.25095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(98,68.51448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(99,67.87126);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(100,67.98058);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(101,67.65208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(102,67.05966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(103,66.90889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(104,66.50963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(105,66.17532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(106,66.29491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(107,66.09597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(108,65.81223);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(109,65.67066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(110,65.09368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(111,65.2274);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(112,65.07542);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(113,64.69851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(114,64.83763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(115,64.52842);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(116,64.36095);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(117,64.04944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(118,63.87451);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(119,63.76746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(120,63.8373);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(121,63.25768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(122,63.54348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(123,63.07271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(124,62.92498);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(125,62.77532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(126,62.52719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(127,62.5066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(128,62.05829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(129,62.41308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(130,62.01839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(131,61.88414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(132,62.0902);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(133,61.27152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(134,61.65653);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(135,61.40066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(136,61.35872);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(137,61.12914);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(138,60.86293);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(139,60.54159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(140,61.03837);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(141,60.98157);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(142,60.41881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(143,60.20046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(144,60.51706);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(145,59.72821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(146,60.08851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(147,59.7365);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(148,60.06873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(149,59.45572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(150,59.59046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(151,59.25721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(152,58.97415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(153,58.7875);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(154,58.95736);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(155,58.5918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(156,58.9204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(157,58.74032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(158,58.26304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(159,57.88967);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(160,58.29192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(161,57.95633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(162,57.95292);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(163,58.09625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(164,57.55001);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(165,57.73381);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(166,57.54829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(167,57.63769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(168,57.21181);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(169,57.094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(170,56.76354);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(171,56.8681);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(172,56.85417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(173,56.96726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(174,56.26774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(175,56.37849);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(176,56.14266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(177,56.21316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(178,55.96071);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(179,56.08796);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(180,55.53623);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(181,55.27532);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(182,55.11926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(183,55.6253);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(184,55.1785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(185,55.30397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(186,55.01137);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(187,54.45237);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(188,54.81483);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(189,54.35227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(190,54.47782);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(191,54.314);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(192,54.33769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(193,54.21547);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(194,53.93348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(195,53.95368);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(196,54.0032);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(197,53.24989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(198,53.57984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(199,53.25361);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(200,53.59832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(201,53.15125);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(202,52.89168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(203,53.06549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(204,52.52348);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(205,52.23805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(206,52.14889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(207,52.39325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(208,52.0938);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(209,51.9682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(210,52.1147);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(211,51.71227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(212,51.84612);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(213,51.47622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(214,51.57422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(215,51.70078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(216,51.27965);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(217,51.25068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(218,50.62477);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(219,51.26227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(220,50.89201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(221,50.81803);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(222,50.87061);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(223,50.2025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(224,50.0326);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(225,50.03458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(226,50.02271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(227,49.67112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(228,49.93355);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(229,49.59332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(230,49.42132);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(231,49.26279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(232,49.51739);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(233,49.47538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(234,49.17629);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(235,49.16219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(236,48.35602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(237,48.50935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(238,48.90979);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(239,48.19604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(240,48.30685);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(241,48.3212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(242,48.0479);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(243,48.40514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(244,47.88689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(245,47.60486);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(246,47.44444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(247,47.11775);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(248,47.31696);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(249,47.01046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(250,46.95566);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(251,47.24367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(252,47.13876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(253,46.78243);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(254,46.68285);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(255,46.60643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(256,46.82263);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(257,46.32088);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(258,45.94529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(259,45.97545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(260,46.13883);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(261,45.87196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(262,45.44039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(263,45.42731);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(264,45.30509);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(265,45.3597);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(266,45.35315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(267,45.02888);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(268,44.76202);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(269,45.01788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(270,44.78635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(271,44.33305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(272,44.35538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(273,44.35315);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(274,44.24139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(275,44.42898);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(276,43.96074);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(277,43.74625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(278,44.01926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(279,43.70549);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(280,43.84347);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(281,43.86153);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(282,43.24773);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(283,43.16065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(284,43.13081);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(285,43.14458);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(286,42.46918);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(287,42.99516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(288,42.51112);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(289,42.51811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(290,42.58327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(291,42.15561);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(292,42.22602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(293,41.69271);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(294,41.89409);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(295,42.04978);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(296,41.1188);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(297,41.45933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(298,41.64757);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(299,41.06579);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(300,41.27023);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(301,41.01754);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(302,41.26543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(303,40.50255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(304,40.59047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(305,40.52944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(306,40.21305);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(307,40.47565);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(308,40.24751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(309,40.05763);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(310,40.2721);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(311,39.74746);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(312,39.6402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(313,39.82212);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(314,39.69262);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(315,39.90161);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(316,39.29651);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(317,39.25617);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(318,39.1248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(319,38.97266);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(320,38.88364);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(321,38.84287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(322,38.56402);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(323,38.51264);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(324,38.44316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(325,38.07307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(326,37.72823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(327,37.94543);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(328,37.92455);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(329,38.09907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(330,37.88014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(331,37.70197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(332,37.61258);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(333,37.75446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(334,37.09836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(335,37.3749);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(336,36.9057);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(337,36.99145);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(338,36.08363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(339,37.01553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(340,36.6148);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(341,36.35427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(342,36.57422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(343,36.32158);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(344,35.76945);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(345,36.13025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(346,36.23151);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(347,36.09461);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(348,35.73344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(349,36.12751);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(350,35.85792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(351,35.52781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(352,35.69186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(353,35.26767);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(354,34.94332);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(355,35.00843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(356,35.11574);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(357,34.96598);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(358,35.00843);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(359,34.46687);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(360,34.5644);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(361,34.62165);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(362,34.7444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(363,34.5214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(364,34.25363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(365,33.72637);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(366,33.99248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(367,33.82897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(368,33.70287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(369,33.72343);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(370,33.55861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(371,33.76744);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(372,33.4611);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(373,33.05622);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(374,33.27119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(375,32.94821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(376,33.10411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(377,32.73718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(378,32.59776);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(379,32.74625);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(380,32.69481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(381,32.2527);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(382,32.55825);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(383,32.20969);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(384,32.3416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(385,31.88839);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(386,32.0618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(387,31.87907);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(388,31.65466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(389,31.72964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(390,31.59204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(391,31.29921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(392,31.52615);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(393,31.31502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(394,31.40027);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(395,31.25805);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(396,31.08335);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(397,31.17876);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(398,30.46886);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(399,30.68259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(400,30.58238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(401,30.32553);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(402,30.85635);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(403,30.5921);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(404,30.29614);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(405,30.4851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(406,30.09283);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(407,30.2307);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(408,29.78193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(409,29.62192);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(410,29.70204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(411,29.77196);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(412,29.81516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(413,29.70204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(414,29.39038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(415,29.42405);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(416,29.40048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(417,29.07879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(418,29.2959);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(419,29.02426);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(420,28.91146);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(421,29.26885);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(422,28.92858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(423,28.71214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(424,28.17607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(425,28.46277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(426,28.79135);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(427,28.34424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(428,28.3652);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(429,28.20768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(430,27.55065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(431,27.56502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(432,28.01395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(433,27.46786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(434,27.94318);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(435,27.47867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(436,27.22891);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(437,27.80464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(438,27.67257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(439,26.97684);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(440,27.10134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(441,27.09769);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(442,27.1415);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(443,27.07575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(444,26.98785);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(445,26.80378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(446,26.50661);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(447,26.67417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(448,26.54394);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(449,26.67046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(450,26.39056);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(451,26.64818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(452,26.35301);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(453,25.93643);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(454,25.94788);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(455,25.95551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(456,25.57119);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(457,25.68323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(458,26.0545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(459,25.08251);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(460,26.20607);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(461,25.47031);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(462,25.67552);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(463,25.31434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(464,25.44698);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(465,25.40414);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(466,25.2752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(467,24.88435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(468,24.90424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(469,24.56397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(470,24.78468);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(471,24.8525);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(472,24.67256);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(473,24.90424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(474,24.64446);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(475,23.86889);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(476,24.35753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(477,24.49131);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(478,24.19848);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(479,24.39003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(480,24.25569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(481,24.05896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(482,23.88963);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(483,24.02189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(484,24.19029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(485,23.70238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(486,23.68149);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(487,23.81491);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(488,23.74412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(489,23.68567);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(490,23.60191);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(491,23.26388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(492,23.44618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(493,23.55152);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(494,23.22555);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(495,23.44618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(496,23.24259);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(497,23.25537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(498,22.91654);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(499,22.73871);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(500,23.00279);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(501,22.66893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(502,22.89493);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(503,22.59017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(504,22.93814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(505,22.25457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(506,22.69076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(507,22.14306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(508,22.19666);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(509,22.13412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(510,22.32121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(511,22.19219);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(512,21.82781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(513,22.14753);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(514,21.73234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(515,21.94994);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(516,21.6044);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(517,21.46647);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(518,21.31371);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(519,21.71867);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(520,21.20193);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(521,21.85048);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(522,21.41104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(523,21.57229);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(524,20.82973);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(525,21.03313);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(526,21.29047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(527,21.06606);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(528,20.88669);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(529,21.03784);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(530,20.81546);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(531,20.90564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(532,20.70098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(533,20.69142);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(534,21.00015);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(535,20.62911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(536,20.90564);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(537,20.67227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(538,20.50877);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(539,20.99544);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(540,20.39743);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(541,20.47011);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(542,19.98551);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(543,20.04982);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(544,20.36828);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(545,20.18762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(546,19.91106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(547,19.88618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(548,20.14834);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(549,19.65077);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(550,19.77133);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(551,19.93591);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(552,19.77634);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(553,19.31536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(554,20.16308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(555,19.50411);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(556,18.97924);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(557,19.25375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(558,19.18162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(559,19.44818);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(560,19.58516);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(561,18.87985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(562,19.41761);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(563,19.14545);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(564,18.82734);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(565,19.0781);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(566,18.55719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(567,19.07291);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(568,18.54117);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(569,18.21794);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(570,18.8851);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(571,18.61047);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(572,18.93222);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(573,19.04694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(574,18.29388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(575,18.4984);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(576,18.11985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(577,18.11985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(578,18.06512);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(579,17.81678);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(580,17.93862);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(581,17.66609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(582,18.02122);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(583,17.87226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(584,17.92758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(585,18.15261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(586,17.82789);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(587,17.94966);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(588,17.83344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(589,17.83344);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(590,17.58745);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(591,17.58182);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(592,17.47449);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(593,17.40068);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(594,17.77226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(595,17.71646);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(596,17.54235);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(597,17.27504);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(598,17.26357);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(599,17.44046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(600,17.53106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(601,17.1427);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(602,16.89252);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(603,16.97438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(604,17.21187);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(605,17.02098);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(606,16.91595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(607,16.72759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(608,16.81026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(609,16.60879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(610,16.93934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(611,16.54308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(612,16.71575);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(613,16.58492);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(614,16.67424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(615,16.48913);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(616,16.56103);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(617,16.20444);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(618,16.19833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(619,16.45306);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(620,16.16162);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(621,16.02009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(622,16.16774);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(623,16.39881);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(624,16.09408);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(625,16.25934);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(626,15.85233);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(627,16.23497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(628,16.06946);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(629,15.84609);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(630,15.90845);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(631,15.81481);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(632,15.68278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(633,15.75208);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(634,15.70802);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(635,15.46663);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(636,16.14323);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(637,15.43459);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(638,15.49861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(639,15.2604);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(640,15.45383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(641,15.45383);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(642,15.1497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(643,15.7395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(644,14.94572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(645,15.27986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(646,15.49861);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(647,15.14316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(648,15.11699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(649,14.93247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(650,15.16277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(651,14.77917);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(652,15.11699);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(653,14.80595);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(654,14.73892);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(655,14.59038);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(656,14.63104);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(657,14.7322);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(658,14.84602);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(659,14.64457);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(660,14.70529);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(661,14.72548);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(662,14.65808);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(663,14.35779);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(664,14.48139);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(665,14.39911);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(666,13.98752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(667,14.26786);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(668,14.1983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(669,14.2748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(670,14.1494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(671,14.30944);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(672,13.98752);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(673,14.1983);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(674,14.38535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(675,14.43345);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(676,14.10735);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(677,14.36469);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(678,13.75194);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(679,13.92367);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(680,13.69422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(681,13.88094);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(682,13.85238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(683,13.82375);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(684,13.5999);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(685,13.7879);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(686,14.02287);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(687,13.43878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(688,13.47557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(689,13.60718);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(690,13.53422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(691,13.49025);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(692,13.3278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(693,13.2533);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(694,13.1859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(695,13.47557);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(696,13.01204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(697,13.33523);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(698,13.11814);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(699,13.01204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(700,13.40189);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(701,13.05003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(702,13.3278);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(703,12.92807);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(704,13.3055);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(705,12.92041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(706,12.87434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(707,13.2159);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(708,12.62584);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(709,12.85895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(710,12.8204);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(711,13.08035);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(712,12.87434);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(713,12.77397);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(714,12.68062);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(715,13.12569);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(716,12.80494);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(717,12.65717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(718,13.10304);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(719,12.93572);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(720,12.58657);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(721,12.18689);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(722,12.07261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(723,12.53928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(724,12.53928);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(725,12.15435);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(726,12.618);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(727,12.12989);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(728,12.54717);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(729,12.00682);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(730,12.09719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(731,12.40432);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(732,12.089);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(733,11.5014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(734,12.07261);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(735,12.17063);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(736,11.94896);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(737,11.61277);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(738,12.44416);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(739,12.33227);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(740,12.09719);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(741,11.97379);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(742,11.71464);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(743,11.48417);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(744,11.73997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(745,11.68926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(746,11.62981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(747,11.83238);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(748,11.24017);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(749,11.62981);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(750,11.54436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(751,11.72309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(752,11.72309);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(753,11.34538);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(754,11.63832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(755,11.75683);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(756,11.5014);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(757,11.27535);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(758,11.73997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(759,11.53578);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(760,11.12506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(761,11.17833);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(762,11.38893);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(763,11.63832);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(764,11.12506);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(765,10.91844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(766,11.24897);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(767,10.95465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(768,10.71708);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(769,10.76317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(770,10.8912);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(771,10.95465);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(772,10.90029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(773,11.16947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(774,10.79991);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(775,11.13396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(776,11.16947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(777,10.54947);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(778,10.30255);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(779,10.90029);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(780,10.873);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(781,10.67078);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(782,10.68006);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(783,10.91844);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(784,10.34092);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(785,10.69858);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(786,10.65221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(787,10.58694);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(788,10.65221);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(789,10.68932);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(790,10.81823);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(791,10.51186);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(792,10.56822);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(793,10.39821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(794,9.960502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(795,10.33134);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(796,10.60563);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(797,10.20599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(798,10.29294);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(799,10.01008);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(800,9.890673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(801,10.36005);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(802,10.14762);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(803,10.46466);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(804,10.39821);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(805,9.65768);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(806,10.1183);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(807,10.26404);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(808,10.20599);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(809,10.01997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(810,10.07908);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(811,9.970438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(812,10.00019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(813,9.749514);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(814,9.950556);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(815,9.647422);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(816,9.759665);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(817,9.564964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(818,10.00019);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(819,9.667927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(820,9.585645);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(821,9.513065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(822,9.471341);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(823,9.688388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(824,9.910674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(825,9.81026);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(826,9.870631);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(827,9.637154);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(828,9.57531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(829,9.667927);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(830,9.345051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(831,9.418926);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(832,9.57531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(833,9.376783);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(834,9.17396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(835,9.16316);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(836,9.564964);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(837,9.513065);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(838,9.92066);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(839,9.323836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(840,9.249201);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(841,9.397878);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(842,9.492226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(843,9.533859);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(844,9.387336);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(845,9.626874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(846,8.977586);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(847,9.206281);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(848,8.765531);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(849,9.739353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(850,9.152349);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(851,9.17396);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(852,8.833046);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(853,8.844248);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(854,9.345051);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(855,9.492226);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(856,9.065388);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(857,8.788093);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(858,8.944438);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(859,8.821829);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(860,9.141524);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(861,8.87777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(862,8.443327);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(863,8.594424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(864,8.559792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(865,8.396289);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(866,8.720231);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(867,8.501759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(868,9.098096);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(869,8.708869);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(870,8.548217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(871,9.021594);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(872,8.466748);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(873,8.548217);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(874,8.594424);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(875,8.501759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(876,8.348985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(877,8.988608);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(878,8.229537);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(879,8.408073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(880,8.559792);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(881,8.52502);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(882,8.37267);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(883,8.501759);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(884,8.408073);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(885,8.431592);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(886,8.360836);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(887,8.799353);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(888,8.348985);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(889,8.022395);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(890,8.301412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(891,7.694811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(892,8.08387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(893,8.096109);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(894,7.835076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(895,7.898009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(896,8.301412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(897,7.972874);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(898,8.217497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(899,7.707668);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(900,7.835076);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(901,8.08387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(902,7.694811);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(903,8.217497);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(904,8.034728);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(905,8.301412);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(906,8.010043);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(907,8.205439);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(908,7.771633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(909,7.947997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(910,7.565041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(911,7.910536);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(912,7.512505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(913,7.681933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(914,7.771633);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(915,7.617214);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(916,7.538819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(917,7.947997);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(918,7.525674);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(919,7.681933);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(920,7.551941);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(921,7.591172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(922,7.733317);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(923,7.784363);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(924,7.604205);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(925,7.565041);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(926,7.591172);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(927,7.758882);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(928,7.643167);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(929,7.898009);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(930,7.512505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(931,7.512505);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(932,7.325664);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(933,7.25777);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(934,7.147797);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(935,7.339168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(936,7.175448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(937,7.339168);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(938,7.538819);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(939,7.175448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(940,7.216726);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(941,7.392935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(942,7.312136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(943,7.230433);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(944,7.285003);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(945,7.37953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(946,7.419673);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(947,7.189234);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(948,7.120039);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(949,7.392935);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(950,7.37953);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(951,7.133931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(952,6.865163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(953,7.036106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(954,6.922613);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(955,7.312136);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(956,7.007905);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(957,7.050164);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(958,6.821758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(959,6.850725);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(960,6.630387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(961,7.133931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(962,6.645303);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(963,6.936901);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(964,7.202993);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(965,6.734108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(966,7.133931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(967,7.175448);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(968,7.133931);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(969,6.525016);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(970,6.893948);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(971,7.036106);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(972,6.615436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(973,6.308998);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(974,6.792667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(975,6.630387);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(976,6.719389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(977,6.40247);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(978,6.87957);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(979,6.214121);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(980,6.230034);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(981,6.908295);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(982,5.986895);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(983,6.734108);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(984,6.494596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(985,6.865163);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(986,6.615436);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(987,7.078197);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(988,6.778075);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(989,6.340308);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(990,6.836257);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(991,6.719389);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(992,6.433325);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(993,6.792667);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(994,6.494596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(995,6.494596);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(996,6.821758);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(997,6.117772);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(998,6.464033);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(999,6.386986);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1000,6.245906);
   VH_tagFirst_2b1c_H_mass_stack_1->SetBinError(1001,98.98378);
   VH_tagFirst_2b1c_H_mass_stack_1->SetEntries(6884267);

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
   
   TH1D *VH_tagFirst_H_mass__111 = new TH1D("VH_tagFirst_H_mass__111","",1000,0,2000);
   VH_tagFirst_H_mass__111->SetBinContent(1000,55);
   VH_tagFirst_H_mass__111->SetBinContent(1001,23972);
   VH_tagFirst_H_mass__111->SetEntries(3106559);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_mass__111->SetLineColor(ci);
   VH_tagFirst_H_mass__111->SetLineWidth(2);
   VH_tagFirst_H_mass__111->SetMarkerStyle(20);
   VH_tagFirst_H_mass__111->SetMarkerSize(1.2);
   VH_tagFirst_H_mass__111->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_H_mass__111->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__111->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__111->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__111->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__111->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__111->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_mass__111->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_mass__111->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_mass__111->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fx1111[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fy1111[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7277.569, 14574.27,
   14472.37, 14394.05, 14189.79, 14006.45, 14005.12, 14070.98, 13807.53, 13846.25, 13739, 13622.41, 13589.04, 13341.17, 13336.72, 13293.56, 13115.11, 13093.31,
   13167.62, 13142.26, 12961.14, 12935.33, 12739.08, 12630.06, 12509.91, 12515.25, 12462.29, 12363.06, 12168.59, 12108.07, 6098.758, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 47.61526 };
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fex1111[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_H_mass_fey1111[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.6293284, 3.050783, 7.923043, 14.41286, 21.42491, 29.21128, 36.62021,
   43.88861, 50.66192, 57.52248, 63.28585, 67.96893, 72.10687, 75.74067, 78.75914, 80.7333, 82.55364, 83.91806, 84.86489, 85.63956, 86.3855, 86.02945, 86.23867,
   86.2157, 85.732, 85.62221, 85.73084, 85.26646, 84.38635, 84.445, 83.9676, 82.89118, 82.69385, 82.70583, 82.18099, 81.61883, 81.18947, 80.53191, 80.53314,
   80.2511, 80.03366, 79.46378, 78.94875, 78.94498, 79.13039, 78.38614, 78.49595, 78.19137, 77.85889, 77.76346, 77.05098, 77.03813, 76.91336, 76.39539, 76.33186,
   76.54818, 76.47441, 75.94563, 75.86998, 75.29225, 74.96937, 74.61192, 74.62785, 74.46979, 74.17271, 73.58704, 73.40382, 73.54666, 72.55314, 72.66223, 72.29201,
   72.21938, 71.73654, 71.36984, 70.99148, 70.67838, 70.61951, 70.59848, 70.8379, 70.42436, 69.69795, 69.51017, 69.00838, 68.87625, 68.51592, 68.26256, 68.25095,
   68.51448, 67.87126, 67.98058, 67.65208, 67.05966, 66.90889, 66.50963, 66.17532, 66.29491, 66.09597, 65.81223, 65.67066, 65.09368, 65.2274, 65.07542, 64.69851,
   64.83763, 64.52842, 64.36095, 64.04944, 63.87451, 63.76746, 63.8373, 63.25768, 63.54348, 63.07271, 62.92498, 62.77532, 62.52719, 62.5066, 62.05829, 62.41308,
   62.01839, 61.88414, 62.0902, 61.27152, 61.65653, 61.40066, 61.35872, 61.12914, 60.86293, 60.54159, 61.03837, 60.98157, 60.41881, 60.20046, 60.51706, 59.72821,
   60.08851, 59.7365, 60.06873, 59.45572, 59.59046, 59.25721, 58.97415, 58.7875, 58.95736, 58.5918, 58.9204, 58.74032, 58.26304, 57.88967, 58.29192, 57.95633,
   57.95292, 58.09625, 57.55001, 57.73381, 57.54829, 57.63769, 57.21181, 57.094, 56.76354, 56.8681, 56.85417, 56.96726, 56.26774, 56.37849, 56.14266, 56.21316,
   55.96071, 56.08796, 55.53623, 55.27532, 55.11926, 55.6253, 55.1785, 55.30397, 55.01137, 54.45237, 54.81483, 54.35227, 54.47782, 54.314, 54.33769, 54.21547,
   53.93348, 53.95368, 54.0032, 53.24989, 53.57984, 53.25361, 53.59832, 53.15125, 52.89168, 53.06549, 52.52348, 52.23805, 52.14889, 52.39325, 52.0938, 51.9682,
   52.1147, 51.71227, 51.84612, 51.47622, 51.57422, 51.70078, 51.27965, 51.25068, 50.62477, 51.26227, 50.89201, 50.81803, 50.87061, 50.2025, 50.0326, 50.03458,
   50.02271, 49.67112, 49.93355, 49.59332, 49.42132, 49.26279, 49.51739, 49.47538, 49.17629, 49.16219, 48.35602, 48.50935, 48.90979, 48.19604, 48.30685, 48.3212,
   48.0479, 48.40514, 47.88689, 47.60486, 47.44444, 47.11775, 47.31696, 47.01046, 46.95566, 47.24367, 47.13876, 46.78243, 46.68285, 46.60643, 46.82263, 46.32088,
   45.94529, 45.97545, 46.13883, 45.87196, 45.44039, 45.42731, 45.30509, 45.3597, 45.35315, 45.02888, 44.76202, 45.01788, 44.78635, 44.33305, 44.35538, 44.35315,
   44.24139, 44.42898, 43.96074, 43.74625, 44.01926, 43.70549, 43.84347, 43.86153, 43.24773, 43.16065, 43.13081, 43.14458, 42.46918, 42.99516, 42.51112, 42.51811,
   42.58327, 42.15561, 42.22602, 41.69271, 41.89409, 42.04978, 41.1188, 41.45933, 41.64757, 41.06579, 41.27023, 41.01754, 41.26543, 40.50255, 40.59047, 40.52944,
   40.21305, 40.47565, 40.24751, 40.05763, 40.2721, 39.74746, 39.6402, 39.82212, 39.69262, 39.90161, 39.29651, 39.25617, 39.1248, 38.97266, 38.88364, 38.84287,
   38.56402, 38.51264, 38.44316, 38.07307, 37.72823, 37.94543, 37.92455, 38.09907, 37.88014, 37.70197, 37.61258, 37.75446, 37.09836, 37.3749, 36.9057, 36.99145,
   36.08363, 37.01553, 36.6148, 36.35427, 36.57422, 36.32158, 35.76945, 36.13025, 36.23151, 36.09461, 35.73344, 36.12751, 35.85792, 35.52781, 35.69186, 35.26767,
   34.94332, 35.00843, 35.11574, 34.96598, 35.00843, 34.46687, 34.5644, 34.62165, 34.7444, 34.5214, 34.25363, 33.72637, 33.99248, 33.82897, 33.70287, 33.72343,
   33.55861, 33.76744, 33.4611, 33.05622, 33.27119, 32.94821, 33.10411, 32.73718, 32.59776, 32.74625, 32.69481, 32.2527, 32.55825, 32.20969, 32.3416, 31.88839,
   32.0618, 31.87907, 31.65466, 31.72964, 31.59204, 31.29921, 31.52615, 31.31502, 31.40027, 31.25805, 31.08335, 31.17876, 30.46886, 30.68259, 30.58238, 30.32553,
   30.85635, 30.5921, 30.29614, 30.4851, 30.09283, 30.2307, 29.78193, 29.62192, 29.70204, 29.77196, 29.81516, 29.70204, 29.39038, 29.42405, 29.40048, 29.07879,
   29.2959, 29.02426, 28.91146, 29.26885, 28.92858, 28.71214, 28.17607, 28.46277, 28.79135, 28.34424, 28.3652, 28.20768, 27.55065, 27.56502, 28.01395, 27.46786,
   27.94318, 27.47867, 27.22891, 27.80464, 27.67257, 26.97684, 27.10134, 27.09769, 27.1415, 27.07575, 26.98785, 26.80378, 26.50661, 26.67417, 26.54394, 26.67046,
   26.39056, 26.64818, 26.35301, 25.93643, 25.94788, 25.95551, 25.57119, 25.68323, 26.0545, 25.08251, 26.20607, 25.47031, 25.67552, 25.31434, 25.44698, 25.40414,
   25.2752, 24.88435, 24.90424, 24.56397, 24.78468, 24.8525, 24.67256, 24.90424, 24.64446, 23.86889, 24.35753, 24.49131, 24.19848, 24.39003, 24.25569, 24.05896,
   23.88963, 24.02189, 24.19029, 23.70238, 23.68149, 23.81491, 23.74412, 23.68567, 23.60191, 23.26388, 23.44618, 23.55152, 23.22555, 23.44618, 23.24259, 23.25537,
   22.91654, 22.73871, 23.00279, 22.66893, 22.89493, 22.59017, 22.93814, 22.25457, 22.69076, 22.14306, 22.19666, 22.13412, 22.32121, 22.19219, 21.82781, 22.14753,
   21.73234, 21.94994, 21.6044, 21.46647, 21.31371, 21.71867, 21.20193, 21.85048, 21.41104, 21.57229, 20.82973, 21.03313, 21.29047, 21.06606, 20.88669, 21.03784,
   20.81546, 20.90564, 20.70098, 20.69142, 21.00015, 20.62911, 20.90564, 20.67227, 20.50877, 20.99544, 20.39743, 20.47011, 19.98551, 20.04982, 20.36828, 20.18762,
   19.91106, 19.88618, 20.14834, 19.65077, 19.77133, 19.93591, 19.77634, 19.31536, 20.16308, 19.50411, 18.97924, 19.25375, 19.18162, 19.44818, 19.58516, 18.87985,
   19.41761, 19.14545, 18.82734, 19.0781, 18.55719, 19.07291, 18.54117, 18.21794, 18.8851, 18.61047, 18.93222, 19.04694, 18.29388, 18.4984, 18.11985, 18.11985,
   18.06512, 17.81678, 17.93862, 17.66609, 18.02122, 17.87226, 17.92758, 18.15261, 17.82789, 17.94966, 17.83344, 17.83344, 17.58745, 17.58182, 17.47449, 17.40068,
   17.77226, 17.71646, 17.54235, 17.27504, 17.26357, 17.44046, 17.53106, 17.1427, 16.89252, 16.97438, 17.21187, 17.02098, 16.91595, 16.72759, 16.81026, 16.60879,
   16.93934, 16.54308, 16.71575, 16.58492, 16.67424, 16.48913, 16.56103, 16.20444, 16.19833, 16.45306, 16.16162, 16.02009, 16.16774, 16.39881, 16.09408, 16.25934,
   15.85233, 16.23497, 16.06946, 15.84609, 15.90845, 15.81481, 15.68278, 15.75208, 15.70802, 15.46663, 16.14323, 15.43459, 15.49861, 15.2604, 15.45383, 15.45383,
   15.1497, 15.7395, 14.94572, 15.27986, 15.49861, 15.14316, 15.11699, 14.93247, 15.16277, 14.77917, 15.11699, 14.80595, 14.73892, 14.59038, 14.63104, 14.7322,
   14.84602, 14.64457, 14.70529, 14.72548, 14.65808, 14.35779, 14.48139, 14.39911, 13.98752, 14.26786, 14.1983, 14.2748, 14.1494, 14.30944, 13.98752, 14.1983,
   14.38535, 14.43345, 14.10735, 14.36469, 13.75194, 13.92367, 13.69422, 13.88094, 13.85238, 13.82375, 13.5999, 13.7879, 14.02287, 13.43878, 13.47557, 13.60718,
   13.53422, 13.49025, 13.3278, 13.2533, 13.1859, 13.47557, 13.01204, 13.33523, 13.11814, 13.01204, 13.40189, 13.05003, 13.3278, 12.92807, 13.3055, 12.92041,
   12.87434, 13.2159, 12.62584, 12.85895, 12.8204, 13.08035, 12.87434, 12.77397, 12.68062, 13.12569, 12.80494, 12.65717, 13.10304, 12.93572, 12.58657, 12.18689,
   12.07261, 12.53928, 12.53928, 12.15435, 12.618, 12.12989, 12.54717, 12.00682, 12.09719, 12.40432, 12.089, 11.5014, 12.07261, 12.17063, 11.94896, 11.61277,
   12.44416, 12.33227, 12.09719, 11.97379, 11.71464, 11.48417, 11.73997, 11.68926, 11.62981, 11.83238, 11.24017, 11.62981, 11.54436, 11.72309, 11.72309, 11.34538,
   11.63832, 11.75683, 11.5014, 11.27535, 11.73997, 11.53578, 11.12506, 11.17833, 11.38893, 11.63832, 11.12506, 10.91844, 11.24897, 10.95465, 10.71708, 10.76317,
   10.8912, 10.95465, 10.90029, 11.16947, 10.79991, 11.13396, 11.16947, 10.54947, 10.30255, 10.90029, 10.873, 10.67078, 10.68006, 10.91844, 10.34092, 10.69858,
   10.65221, 10.58694, 10.65221, 10.68932, 10.81823, 10.51186, 10.56822, 10.39821, 9.960502, 10.33134, 10.60563, 10.20599, 10.29294, 10.01008, 9.890673, 10.36005,
   10.14762, 10.46466, 10.39821, 9.65768, 10.1183, 10.26404, 10.20599, 10.01997, 10.07908, 9.970438, 10.00019, 9.749514, 9.950556, 9.647422, 9.759665, 9.564964,
   10.00019, 9.667927, 9.585645, 9.513065, 9.471341, 9.688388, 9.910674, 9.81026, 9.870631, 9.637154, 9.57531, 9.667927, 9.345051, 9.418926, 9.57531, 9.376783,
   9.17396, 9.16316, 9.564964, 9.513065, 9.92066, 9.323836, 9.249201, 9.397878, 9.492226, 9.533859, 9.387336, 9.626874, 8.977586, 9.206281, 8.765531, 9.739353,
   9.152349, 9.17396, 8.833046, 8.844248, 9.345051, 9.492226, 9.065388, 8.788093, 8.944438, 8.821829, 9.141524, 8.87777, 8.443327, 8.594424, 8.559792, 8.396289,
   8.720231, 8.501759, 9.098096, 8.708869, 8.548217, 9.021594, 8.466748, 8.548217, 8.594424, 8.501759, 8.348985, 8.988608, 8.229537, 8.408073, 8.559792, 8.52502,
   8.37267, 8.501759, 8.408073, 8.431592, 8.360836, 8.799353, 8.348985, 8.022395, 8.301412, 7.694811, 8.08387, 8.096109, 7.835076, 7.898009, 8.301412, 7.972874,
   8.217497, 7.707668, 7.835076, 8.08387, 7.694811, 8.217497, 8.034728, 8.301412, 8.010043, 8.205439, 7.771633, 7.947997, 7.565041, 7.910536, 7.512505, 7.681933,
   7.771633, 7.617214, 7.538819, 7.947997, 7.525674, 7.681933, 7.551941, 7.591172, 7.733317, 7.784363, 7.604205, 7.565041, 7.591172, 7.758882, 7.643167, 7.898009,
   7.512505, 7.512505, 7.325664, 7.25777, 7.147797, 7.339168, 7.175448, 7.339168, 7.538819, 7.175448, 7.216726, 7.392935, 7.312136, 7.230433, 7.285003, 7.37953,
   7.419673, 7.189234, 7.120039, 7.392935, 7.37953, 7.133931, 6.865163, 7.036106, 6.922613, 7.312136, 7.007905, 7.050164, 6.821758, 6.850725, 6.630387, 7.133931,
   6.645303, 6.936901, 7.202993, 6.734108, 7.133931, 7.175448, 7.133931, 6.525016, 6.893948, 7.036106, 6.615436, 6.308998, 6.792667, 6.630387, 6.719389, 6.40247,
   6.87957, 6.214121, 6.230034, 6.908295, 5.986895, 6.734108, 6.494596, 6.865163, 6.615436, 7.078197, 6.778075, 6.340308, 6.836257, 6.719389, 6.433325, 6.792667,
   6.494596, 6.494596, 6.821758, 6.117772, 6.464033, 6.386986, 6.245906 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_H_mass_fx1111,Graph_from_VH_tagFirst_2b1c_H_mass_fy1111,Graph_from_VH_tagFirst_2b1c_H_mass_fex1111,Graph_from_VH_tagFirst_2b1c_H_mass_fey1111);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->SetMinimum(-1560.505);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->SetMaximum(16128.93);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_H_mass1111);
   
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagFirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__112 = new TH1D("data_mc_ratio__112","",1000,0,2000);
   data_mc_ratio__112->SetBinContent(1000,1.155092);
   data_mc_ratio__112->SetBinContent(1001,1.088776);
   data_mc_ratio__112->SetBinError(1000,0.1557526);
   data_mc_ratio__112->SetBinError(1001,0.008567965);
   data_mc_ratio__112->SetMinimum(0.4);
   data_mc_ratio__112->SetMaximum(1.6);
   data_mc_ratio__112->SetEntries(28.25772);
   data_mc_ratio__112->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__112->SetLineColor(ci);
   data_mc_ratio__112->SetLineWidth(2);
   data_mc_ratio__112->SetMarkerStyle(20);
   data_mc_ratio__112->SetMarkerSize(1.2);
   data_mc_ratio__112->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__112->GetXaxis()->SetRange(1,150);
   data_mc_ratio__112->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__112->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__112->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__112->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__112->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__112->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__112->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__112->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__112->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__112->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1112[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1112[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1112[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1112[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01106577, 0.005525705,
   0.005545125, 0.005560191, 0.005600066, 0.005636599, 0.005636868, 0.00562366, 0.005677055, 0.005669113, 0.005691196, 0.005715499, 0.005722513, 0.005775428, 0.005776392, 0.005785762, 0.00582499, 0.005829839,
   0.005813364, 0.005818971, 0.005859487, 0.00586533, 0.005910335, 0.00593579, 0.005964226, 0.005962954, 0.00597561, 0.005999544, 0.006047293, 0.006062388, 0.01205929, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1112,Graph_from_mc_statistical_error_fy1112,Graph_from_mc_statistical_error_fex1112,Graph_from_mc_statistical_error_fey1112);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1112 = new TH1F("Graph_Graph_from_mc_statistical_error1112","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1112->SetMinimum(0.8425906);
   Graph_Graph_from_mc_statistical_error1112->SetMaximum(1.157409);
   Graph_Graph_from_mc_statistical_error1112->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1112->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1112->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1112->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1112->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1112);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->Modified();
   H_mass_tagFirst_SR_18->cd();
   H_mass_tagFirst_SR_18->SetSelected(H_mass_tagFirst_SR_18);
}
