#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_17/Z_mass_tagFirst_SR_17
//=========  (Mon Jan  8 11:15:50 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-24.2383,315.7258,24224.06);
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
   st->SetMaximum(21799.23);
   
   TH1F *st_stack_28 = new TH1F("st_stack_28","",1000,0,2000);
   st_stack_28->SetMinimum(0.01);
   st_stack_28->SetMaximum(21799.23);
   st_stack_28->SetDirectory(nullptr);
   st_stack_28->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_28->SetLineColor(ci);
   st_stack_28->SetLineWidth(0);
   st_stack_28->GetXaxis()->SetRange(1,150);
   st_stack_28->GetXaxis()->SetLabelFont(42);
   st_stack_28->GetXaxis()->SetTitleOffset(1);
   st_stack_28->GetXaxis()->SetTitleFont(42);
   st_stack_28->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_28->GetYaxis()->SetLabelFont(42);
   st_stack_28->GetYaxis()->SetLabelSize(0.05);
   st_stack_28->GetYaxis()->SetTitleSize(0.057);
   st_stack_28->GetYaxis()->SetTitleOffset(1.2);
   st_stack_28->GetYaxis()->SetTitleFont(42);
   st_stack_28->GetZaxis()->SetLabelFont(42);
   st_stack_28->GetZaxis()->SetTitleOffset(1);
   st_stack_28->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_28);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,9060.706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,9336.384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,9612.062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,9553.389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,9616.376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,9725.094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,9809.653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,9743.646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,9623.279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,9595.237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,9603.002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,9555.977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,9365.289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,9416.197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,9303.596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,9235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,8934.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,8815.659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,8544.726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,8445.499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,8242.732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,8001.999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,7985.605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,7659.45);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,7605.954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,7536.927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,7357.024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,7234.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,7157.707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,7019.653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,43.14211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,23240.22);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9646869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,0.7472433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,2.478326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,5.558472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,8.925309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,13.17071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,17.68827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,22.63214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,26.98366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,32.10538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,36.71391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,41.00997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,45.23754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,48.76013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,52.40834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,54.92111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,57.50537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,59.4579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,61.10361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,62.52183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,63.46584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,64.39601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,64.19917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,64.41046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,64.77354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,65.05453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,64.83529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,64.43358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,64.33963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,64.36566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,64.20787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,63.56401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,63.73654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,63.3543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,63.12031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,62.08418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,61.67059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,60.71553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,60.36196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,59.63295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,58.75569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,58.69547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,57.48433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,57.28324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,57.02271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,56.33805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,55.86695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,55.56965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,55.03114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,54.70889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,54.38815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,54.13089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,54.06552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,53.79287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,53.51187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,53.19966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,52.63161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,52.38881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,52.11453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,51.81545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,51.47308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,51.46946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,51.47308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,50.80155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,50.49102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,50.31931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,50.06158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,49.59842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,49.38782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,49.26519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,48.90116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,48.91448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,48.11844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,47.92271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,47.79242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,47.70277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,47.55623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,47.02292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,46.94369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,46.19632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,46.07529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,45.82618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,45.86272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,45.26017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,45.32797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,44.89682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,44.82837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,44.24118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,44.02398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,43.68871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,43.37231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,43.34655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,42.48129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,42.63436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,42.27927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,42.19334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,42.25064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,41.52638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,41.24756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,41.60698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,40.9009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,40.56276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,40.32576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,40.27033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,40.05484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,39.58274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,38.94277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,39.01679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,38.73191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,38.72951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,38.30184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,38.46912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,38.14846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,37.43681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,37.84967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,37.402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,37.30733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,37.03946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,36.70123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,36.3701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,36.40591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,36.52585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,35.73771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,35.74032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,35.82614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,35.31597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,35.10718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,35.18926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,35.29489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,34.95842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,34.86779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,34.42459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,34.5595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,33.94821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,33.92627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,33.68402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,33.73095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,33.57609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,33.36478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,33.46226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,33.48728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,32.86455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,32.65433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,32.79368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,32.81354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,32.18066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,32.10828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,31.64996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,32.20668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,31.58521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,31.93391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,31.39015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,31.59405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,31.78493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,31.20878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,31.21176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,31.33674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,30.8368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,30.7915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,30.72494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,30.14087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,30.36543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,30.16248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,30.36543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,29.97989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,30.1563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,29.94261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,30.301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,29.76806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,29.66471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,29.59247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,29.54841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,29.6239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,29.39368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,29.12013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,29.37784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,29.04332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,28.86978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,28.95668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,28.81493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,29.00164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,28.67247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,28.72759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,29.12652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,28.56842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,28.41163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,28.2803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,28.20452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,27.84254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,28.03573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,28.30333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,28.05564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,28.10204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,28.13183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,28.03905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,27.69508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,27.50965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,27.66483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,27.3638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,27.15898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,27.8893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,27.685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,27.23426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,26.96296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,27.08005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,27.26499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,26.85575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,27.24109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,27.11783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,26.78288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,27.09036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,26.61907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,26.75159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,26.32022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,26.58408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,26.66099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,26.48237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,26.46479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,26.41552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,26.654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,26.61557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,26.28484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,26.1464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,25.82047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,26.53152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,26.00721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,26.23877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,26.03583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,26.03583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,26.09295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,25.51228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,25.15226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,25.7808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,25.65414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,25.61058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,25.7085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,25.46847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,25.65052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,25.80966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,25.40261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,25.53415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,25.30718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,25.39894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,25.14115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,25.47212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,24.85824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,24.73815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,25.07073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,24.94793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,24.67789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,25.09299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,25.07444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,24.95166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,24.53417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,24.70051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,25.04473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,25.36228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,24.65148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,24.39342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,24.62126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,24.54176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,24.73439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,24.84326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,24.20192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,24.44677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,24.00113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,24.23266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,24.61748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,24.18653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,23.86114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,24.07855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,24.48861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,23.98174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,24.22882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,23.74776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,24.04761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,23.736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,24.20961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,23.75952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,23.98562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,23.81429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,23.67319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,23.52729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,23.60627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,23.65746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,23.64565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,23.50354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,23.25276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,23.32069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,23.41627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,23.50354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,23.26876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,23.23674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,23.32867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,22.92223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,22.7388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,23.23674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,23.33266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,23.05985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,22.51671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,22.80827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,22.87346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,23.1364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,22.94252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,22.92629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,22.92629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,22.96684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,22.74289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,22.62391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,22.74698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,22.56213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,22.59922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,22.50017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,22.6609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,22.63214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,22.38406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,22.50844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,22.45877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,22.26735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,22.66912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,22.55388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,22.1248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,22.80827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,22.31744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,22.17521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,22.00671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,22.12059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,21.79851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,21.79851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,21.83264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,22.20038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,21.73438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,22.14582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,21.93045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,22.17941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,21.73866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,21.34118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,21.44992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,21.31063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,21.40649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,21.88798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,21.08233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,21.54515);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,21.35426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,21.44558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,21.63567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,21.06908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,21.49759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,21.10439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,21.09557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,21.1132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,20.93171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,21.09998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,20.89611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,21.03371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,20.77551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,20.53673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,20.57295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,20.58652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,20.63167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,21.12202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,20.31806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,20.55485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,20.68573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,20.52767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,20.33637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,20.80685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,20.78895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,20.34094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,20.58652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,20.24924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,20.52767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,20.4459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,20.48682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,20.21244);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,20.21704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,19.90156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,19.93427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,19.94827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,20.05992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,19.78902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,19.74194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,19.95293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,19.77961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,19.50481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,19.67583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,19.5715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,20.29514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,19.76549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,19.99487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,19.32747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,19.49527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,19.68056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,19.75136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,19.92026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,19.56674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,19.52866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,19.6569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,19.04127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,19.67583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,19.48572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,19.00213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,19.48572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,19.35153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,19.44269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,19.09495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,19.24544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,19.39956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,19.36115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,19.18248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,19.22609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,19.14363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,18.53103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,18.98743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,19.16306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,18.94327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,19.20672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,18.92361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,18.7854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,18.41516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,18.38482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,18.58118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,18.74573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,18.65117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,18.76558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,18.0528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,18.32397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,18.45555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,17.78795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,18.76062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,18.32397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,18.0528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,18.46059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,18.40505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,18.23233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,18.19145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,18.31889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,18.20168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,18.14022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,17.60388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,18.43537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,18.11455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,17.9753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,18.27821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,17.98048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,17.74604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,17.82975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,17.49784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,17.64613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,17.66194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,17.91307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,17.88707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,17.79318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,17.32144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,17.69353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,17.67774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,17.26224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,17.67774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,17.50847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,17.27301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,17.45524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,16.9741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,17.47655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,17.359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,17.29455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,17.27301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,17.13779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,17.17576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,16.95765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,17.18118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,16.80882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,17.36436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,16.77002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,17.18118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,17.29993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,17.20824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,16.52968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,16.94667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,16.49586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,16.50714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,16.30292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,16.70887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,16.83648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,16.87513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,16.61951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,16.52968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,16.63071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,16.38832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,16.26864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,16.35991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,16.52968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,16.53531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,16.43935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,16.37696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,16.59149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,16.35422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,16.18835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,16.5578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,16.21133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,15.94508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,16.22281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,16.04979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,15.87489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,16.37128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,15.59693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,15.92756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,15.93924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,16.02077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,15.63269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,15.85142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,15.84555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,15.85142);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,15.82792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,16.00334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,15.05653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,15.59693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,15.25304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,15.89832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,15.30785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,15.13667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,15.92172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,15.47112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,15.69211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,15.2225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,15.32608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,15.2896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,15.34428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,15.08124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,15.24083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,15.1059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,15.48315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,15.21639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,14.80724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,15.14896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,15.04417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,14.75687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,14.52807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,14.83863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,14.85743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,14.91994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,14.74425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,14.87621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,14.47673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,14.94487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,15.07507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,14.90746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,14.88246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,14.57284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,14.52166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,14.70633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,14.37998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,14.83236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,14.98839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,14.48316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,14.55367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,14.17138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,14.45744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,14.19107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,14.50884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,14.15824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,14.16481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,14.02616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,14.55367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,13.72435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,14.37351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,14.14509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,13.79873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,14.21073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,13.9863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,14.13851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,13.89953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,13.8593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,13.78524);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,13.75821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,13.66318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,13.66999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,13.73112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,13.75821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,13.5469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,13.66318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,13.6904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,13.62908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,13.83914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,13.71756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,13.49872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,13.49872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,13.62908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,13.87272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,13.5469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,13.60858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,13.73112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,13.49872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,13.65637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,13.56749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,13.64955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,13.42267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,13.40186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,13.5949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,13.00003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,13.24118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,13.08565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,13.43653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,13.33922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,13.23415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,13.19895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,13.42961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,13.10697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,12.85606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,12.55576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,13.05004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,12.96419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,12.95701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,12.90663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,13.04291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,12.73241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,13.1495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,12.97853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,12.8922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,13.08565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,12.57798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,12.87053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,12.9857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,12.71046);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,12.43661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,12.60016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,12.79074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,12.57798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,12.73971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,12.54835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,12.4665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,12.44409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,12.35402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,12.03348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,12.47396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,12.14893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,12.26329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,12.49633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,12.36155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,12.54093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,12.018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,12.48888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,12.05666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,12.87053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,12.3766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,11.7913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,12.54835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,12.27088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,12.24811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,11.7676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,11.96367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,12.21006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,11.56015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,12.42163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,12.15659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,11.79919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,11.57624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,11.64837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,11.63238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,11.72005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,11.97922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,11.80707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,12.17189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,11.89346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,11.75969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,11.61637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,11.67231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,11.61637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,11.4469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,11.51175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,11.41433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,11.72799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,11.49557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,11.79919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,11.38984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,11.24181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,11.73592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,11.29961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,11.23353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,11.35711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,11.62438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,10.99912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,11.38984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,10.99066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,11.39801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,11.29137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,11.7676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,10.65532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,11.20034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,10.99912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,11.17539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,10.92271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,11.43062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,11.14203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,10.83717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,11.18371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,10.85434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,10.82858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,11.15872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,10.81138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,11.04135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,11.05819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,10.81999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,10.6989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,11.02448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,10.62908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,10.93123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,10.54116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,10.62908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,10.79415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,10.75096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,10.67277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,10.84576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,10.49693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,10.65532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,10.37207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,10.70759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,10.66405);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,10.43468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,10.88858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,10.7423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,10.4703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,10.26383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,10.20929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,10.30004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,10.46141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,10.2366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,10.53233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,10.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,10.12692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,10.54999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,10.31809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,10.54116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,10.1361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,10.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,10.38104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,10.0346);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,9.723738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,10.64658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,10.2275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,10.15445);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,10.09009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,10.291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,9.913302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,9.780993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,9.866253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,9.761945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,10.01603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,9.922685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,10.07163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,9.90391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,9.87568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,9.646869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,9.723738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,9.969469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,9.675766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,9.941425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,9.491264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,10.01603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,9.362931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,9.412497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,9.714162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,9.733304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,9.579103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,9.212634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,9.771474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,9.451963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,9.212634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,9.212634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,9.520634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,9.885099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,9.422379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,9.451963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,9.809495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,9.313102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,9.313102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,9.283075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,9.412497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,9.402605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,9.637217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,9.530404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,9.131464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,9.018662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,9.059843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,8.904431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,9.182279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,9.141649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,8.998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,9.090607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,9.172138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,8.93573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,9.232815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,8.841502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,9.432251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,9.151824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,9.100838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,9.232815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,9.461803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,8.432048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,8.966919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,8.966919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,8.883504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,9.059843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,8.820425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,9.018662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,8.639201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,8.852021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,8.93573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,9.161987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,8.83097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,8.746258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,8.343287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,8.977292);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,8.574325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,8.298551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,8.682182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,9.028975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,8.714279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,8.671457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,8.320949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,8.649966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,8.724952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,8.639201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,8.23099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,8.682182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,8.862528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,8.398872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,8.354434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,8.07115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,8.242289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,8.432048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,8.320949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,8.219676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,8.354434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,8.465093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,8.18564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,8.287329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,8.606824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,8.5308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,8.376683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,8.242289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,8.128596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,7.978375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,7.76558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,8.048056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,8.128596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,7.943305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,8.140037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,8.253572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,8.013291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,8.059611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,7.955012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,8.174263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,8.298551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,7.966702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,8.082672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,7.559108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,7.705427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,7.943305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,7.644801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,8.320949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,8.013291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,8.11714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,7.908079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,7.896303);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,7.813368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,7.777554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,7.705427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,7.459968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,7.620416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,7.244792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,7.644801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,7.422449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,7.632618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,7.422449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,7.753587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,7.409901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,7.257626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,7.753587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,7.608194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,7.115179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,7.257626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,7.472433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,7.38474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,7.459968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,6.956456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,7.270438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,7.522084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,7.459968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,7.656965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,7.447483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,7.534446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,7.334159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,7.219056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,7.023027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,7.167306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,6.929649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,7.036265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,7.346837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,7.422449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,7.321459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,7.372127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,7.180278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,7.14129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,7.409901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,6.766576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,7.729544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,7.075832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,7.346837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,7.583691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,7.088972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,6.875721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,7.128246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,7.115179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,6.627617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,7.128246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,6.889243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,6.780315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,6.969821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,7.075832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,6.902738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,7.036265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,6.766576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,6.956456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,7.257626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,7.206153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,6.340569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,6.528586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,6.875721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,6.61356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,7.023027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,6.996475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,6.916206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,6.780315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,6.669608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,6.752808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,7.075832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,6.834996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,6.655641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,6.485681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,6.969821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,6.585357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,6.794026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,6.61356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,6.683547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,6.683547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,6.929649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,6.739013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,6.821367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,6.384449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,6.542825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,6.599474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,6.161926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,6.848598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,6.325875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,6.384449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,6.413536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,6.500014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,6.821367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,6.514316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,6.821367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,6.101216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,6.61356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,6.369856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,6.384449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,6.296384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,6.281586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,6.325875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,6.311147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,6.557033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,6.384449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,6.085944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,5.962358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,6.471317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,6.222044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,6.251886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,5.788121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,6.35523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,6.340569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,6.055284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,6.085944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,6.57121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,5.723448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,6.17701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,6.070633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,100.1315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3073644);

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
   
   TH1D *VH_tagFirst_Z_mass__55 = new TH1D("VH_tagFirst_Z_mass__55","",1000,0,2000);
   VH_tagFirst_Z_mass__55->SetBinContent(1000,50);
   VH_tagFirst_Z_mass__55->SetBinContent(1001,26893);
   VH_tagFirst_Z_mass__55->SetEntries(1359367);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__55->SetLineColor(ci);
   VH_tagFirst_Z_mass__55->SetLineWidth(2);
   VH_tagFirst_Z_mass__55->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__55->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__55->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__55->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__55->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1055[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1055[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9060.706, 9336.384, 9612.062,
   9553.389, 9616.376, 9725.094, 9809.653, 9743.646, 9623.279, 9595.237, 9603.002, 9555.977, 9365.289, 9416.197, 9303.596, 9235, 8934.3, 8815.659, 8544.726,
   8445.499, 8242.732, 8001.999, 7985.605, 7659.45, 7605.954, 7536.927, 7357.024, 7234.5, 7157.707, 7019.653, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 43.14211 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1055[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1055[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9646869, 0.7472433, 2.478326, 5.558472, 8.925309, 13.17071,
   17.68827, 22.63214, 26.98366, 32.10538, 36.71391, 41.00997, 45.23754, 48.76013, 52.40834, 54.92111, 57.50537, 59.4579, 61.10361, 62.52183, 63.46584, 64.39601,
   64.19917, 64.41046, 64.77354, 65.05453, 64.83529, 64.43358, 64.33963, 64.36566, 64.20787, 63.56401, 63.73654, 63.3543, 63.12031, 62.08418, 61.67059, 60.71553,
   60.36196, 59.63295, 58.75569, 58.69547, 57.48433, 57.28324, 57.02271, 56.33805, 55.86695, 55.56965, 55.03114, 54.70889, 54.38815, 54.13089, 54.06552, 53.79287,
   53.51187, 53.19966, 52.63161, 52.38881, 52.11453, 51.81545, 51.47308, 51.46946, 51.47308, 50.80155, 50.49102, 50.31931, 50.06158, 49.59842, 49.38782, 49.26519,
   48.90116, 48.91448, 48.11844, 47.92271, 47.79242, 47.70277, 47.55623, 47.02292, 46.94369, 46.19632, 46.07529, 45.82618, 45.86272, 45.26017, 45.32797, 44.89682,
   44.82837, 44.24118, 44.02398, 43.68871, 43.37231, 43.34655, 42.48129, 42.63436, 42.27927, 42.19334, 42.25064, 41.52638, 41.24756, 41.60698, 40.9009, 40.56276,
   40.32576, 40.27033, 40.05484, 39.58274, 38.94277, 39.01679, 38.73191, 38.72951, 38.30184, 38.46912, 38.14846, 37.43681, 37.84967, 37.402, 37.30733, 37.03946,
   36.70123, 36.3701, 36.40591, 36.52585, 35.73771, 35.74032, 35.82614, 35.31597, 35.10718, 35.18926, 35.29489, 34.95842, 34.86779, 34.42459, 34.5595, 33.94821,
   33.92627, 33.68402, 33.73095, 33.57609, 33.36478, 33.46226, 33.48728, 32.86455, 32.65433, 32.79368, 32.81354, 32.18066, 32.10828, 31.64996, 32.20668, 31.58521,
   31.93391, 31.39015, 31.59405, 31.78493, 31.20878, 31.21176, 31.33674, 30.8368, 30.7915, 30.72494, 30.14087, 30.36543, 30.16248, 30.36543, 29.97989, 30.1563,
   29.94261, 30.301, 29.76806, 29.66471, 29.59247, 29.54841, 29.6239, 29.39368, 29.12013, 29.37784, 29.04332, 28.86978, 28.95668, 28.81493, 29.00164, 28.67247,
   28.72759, 29.12652, 28.56842, 28.41163, 28.2803, 28.20452, 27.84254, 28.03573, 28.30333, 28.05564, 28.10204, 28.13183, 28.03905, 27.69508, 27.50965, 27.66483,
   27.3638, 27.15898, 27.8893, 27.685, 27.23426, 26.96296, 27.08005, 27.26499, 26.85575, 27.24109, 27.11783, 26.78288, 27.09036, 26.61907, 26.75159, 26.32022,
   26.58408, 26.66099, 26.48237, 26.46479, 26.41552, 26.654, 26.61557, 26.28484, 26.1464, 25.82047, 26.53152, 26.00721, 26.23877, 26.03583, 26.03583, 26.09295,
   25.51228, 25.15226, 25.7808, 25.65414, 25.61058, 25.7085, 25.46847, 25.65052, 25.80966, 25.40261, 25.53415, 25.30718, 25.39894, 25.14115, 25.47212, 24.85824,
   24.73815, 25.07073, 24.94793, 24.67789, 25.09299, 25.07444, 24.95166, 24.53417, 24.70051, 25.04473, 25.36228, 24.65148, 24.39342, 24.62126, 24.54176, 24.73439,
   24.84326, 24.20192, 24.44677, 24.00113, 24.23266, 24.61748, 24.18653, 23.86114, 24.07855, 24.48861, 23.98174, 24.22882, 23.74776, 24.04761, 23.736, 24.20961,
   23.75952, 23.98562, 23.81429, 23.67319, 23.52729, 23.60627, 23.65746, 23.64565, 23.50354, 23.25276, 23.32069, 23.41627, 23.50354, 23.26876, 23.23674, 23.32867,
   22.92223, 22.7388, 23.23674, 23.33266, 23.05985, 22.51671, 22.80827, 22.87346, 23.1364, 22.94252, 22.92629, 22.92629, 22.96684, 22.74289, 22.62391, 22.74698,
   22.56213, 22.59922, 22.50017, 22.6609, 22.63214, 22.38406, 22.50844, 22.45877, 22.26735, 22.66912, 22.55388, 22.1248, 22.80827, 22.31744, 22.17521, 22.00671,
   22.12059, 21.79851, 21.79851, 21.83264, 22.20038, 21.73438, 22.14582, 21.93045, 22.17941, 21.73866, 21.34118, 21.44992, 21.31063, 21.40649, 21.88798, 21.08233,
   21.54515, 21.35426, 21.44558, 21.63567, 21.06908, 21.49759, 21.10439, 21.09557, 21.1132, 20.93171, 21.09998, 20.89611, 21.03371, 20.77551, 20.53673, 20.57295,
   20.58652, 20.63167, 21.12202, 20.31806, 20.55485, 20.68573, 20.52767, 20.33637, 20.80685, 20.78895, 20.34094, 20.58652, 20.24924, 20.52767, 20.4459, 20.48682,
   20.21244, 20.21704, 19.90156, 19.93427, 19.94827, 20.05992, 19.78902, 19.74194, 19.95293, 19.77961, 19.50481, 19.67583, 19.5715, 20.29514, 19.76549, 19.99487,
   19.32747, 19.49527, 19.68056, 19.75136, 19.92026, 19.56674, 19.52866, 19.6569, 19.04127, 19.67583, 19.48572, 19.00213, 19.48572, 19.35153, 19.44269, 19.09495,
   19.24544, 19.39956, 19.36115, 19.18248, 19.22609, 19.14363, 18.53103, 18.98743, 19.16306, 18.94327, 19.20672, 18.92361, 18.7854, 18.41516, 18.38482, 18.58118,
   18.74573, 18.65117, 18.76558, 18.0528, 18.32397, 18.45555, 17.78795, 18.76062, 18.32397, 18.0528, 18.46059, 18.40505, 18.23233, 18.19145, 18.31889, 18.20168,
   18.14022, 17.60388, 18.43537, 18.11455, 17.9753, 18.27821, 17.98048, 17.74604, 17.82975, 17.49784, 17.64613, 17.66194, 17.91307, 17.88707, 17.79318, 17.32144,
   17.69353, 17.67774, 17.26224, 17.67774, 17.50847, 17.27301, 17.45524, 16.9741, 17.47655, 17.359, 17.29455, 17.27301, 17.13779, 17.17576, 16.95765, 17.18118,
   16.80882, 17.36436, 16.77002, 17.18118, 17.29993, 17.20824, 16.52968, 16.94667, 16.49586, 16.50714, 16.30292, 16.70887, 16.83648, 16.87513, 16.61951, 16.52968,
   16.63071, 16.38832, 16.26864, 16.35991, 16.52968, 16.53531, 16.43935, 16.37696, 16.59149, 16.35422, 16.18835, 16.5578, 16.21133, 15.94508, 16.22281, 16.04979,
   15.87489, 16.37128, 15.59693, 15.92756, 15.93924, 16.02077, 15.63269, 15.85142, 15.84555, 15.85142, 15.82792, 16.00334, 15.05653, 15.59693, 15.25304, 15.89832,
   15.30785, 15.13667, 15.92172, 15.47112, 15.69211, 15.2225, 15.32608, 15.2896, 15.34428, 15.08124, 15.24083, 15.1059, 15.48315, 15.21639, 14.80724, 15.14896,
   15.04417, 14.75687, 14.52807, 14.83863, 14.85743, 14.91994, 14.74425, 14.87621, 14.47673, 14.94487, 15.07507, 14.90746, 14.88246, 14.57284, 14.52166, 14.70633,
   14.37998, 14.83236, 14.98839, 14.48316, 14.55367, 14.17138, 14.45744, 14.19107, 14.50884, 14.15824, 14.16481, 14.02616, 14.55367, 13.72435, 14.37351, 14.14509,
   13.79873, 14.21073, 13.9863, 14.13851, 13.89953, 13.8593, 13.78524, 13.75821, 13.66318, 13.66999, 13.73112, 13.75821, 13.5469, 13.66318, 13.6904, 13.62908,
   13.83914, 13.71756, 13.49872, 13.49872, 13.62908, 13.87272, 13.5469, 13.60858, 13.73112, 13.49872, 13.65637, 13.56749, 13.64955, 13.42267, 13.40186, 13.5949,
   13.00003, 13.24118, 13.08565, 13.43653, 13.33922, 13.23415, 13.19895, 13.42961, 13.10697, 12.85606, 12.55576, 13.05004, 12.96419, 12.95701, 12.90663, 13.04291,
   12.73241, 13.1495, 12.97853, 12.8922, 13.08565, 12.57798, 12.87053, 12.9857, 12.71046, 12.43661, 12.60016, 12.79074, 12.57798, 12.73971, 12.54835, 12.4665,
   12.44409, 12.35402, 12.03348, 12.47396, 12.14893, 12.26329, 12.49633, 12.36155, 12.54093, 12.018, 12.48888, 12.05666, 12.87053, 12.3766, 11.7913, 12.54835,
   12.27088, 12.24811, 11.7676, 11.96367, 12.21006, 11.56015, 12.42163, 12.15659, 11.79919, 11.57624, 11.64837, 11.63238, 11.72005, 11.97922, 11.80707, 12.17189,
   11.89346, 11.75969, 11.61637, 11.67231, 11.61637, 11.4469, 11.51175, 11.41433, 11.72799, 11.49557, 11.79919, 11.38984, 11.24181, 11.73592, 11.29961, 11.23353,
   11.35711, 11.62438, 10.99912, 11.38984, 10.99066, 11.39801, 11.29137, 11.7676, 10.65532, 11.20034, 10.99912, 11.17539, 10.92271, 11.43062, 11.14203, 10.83717,
   11.18371, 10.85434, 10.82858, 11.15872, 10.81138, 11.04135, 11.05819, 10.81999, 10.6989, 11.02448, 10.62908, 10.93123, 10.54116, 10.62908, 10.79415, 10.75096,
   10.67277, 10.84576, 10.49693, 10.65532, 10.37207, 10.70759, 10.66405, 10.43468, 10.88858, 10.7423, 10.4703, 10.26383, 10.20929, 10.30004, 10.46141, 10.2366,
   10.53233, 10.39, 10.12692, 10.54999, 10.31809, 10.54116, 10.1361, 10.39, 10.38104, 10.0346, 9.723738, 10.64658, 10.2275, 10.15445, 10.09009, 10.291,
   9.913302, 9.780993, 9.866253, 9.761945, 10.01603, 9.922685, 10.07163, 9.90391, 9.87568, 9.646869, 9.723738, 9.969469, 9.675766, 9.941425, 9.491264, 10.01603,
   9.362931, 9.412497, 9.714162, 9.733304, 9.579103, 9.212634, 9.771474, 9.451963, 9.212634, 9.212634, 9.520634, 9.885099, 9.422379, 9.451963, 9.809495, 9.313102,
   9.313102, 9.283075, 9.412497, 9.402605, 9.637217, 9.530404, 9.131464, 9.018662, 9.059843, 8.904431, 9.182279, 9.141649, 8.998, 9.090607, 9.172138, 8.93573,
   9.232815, 8.841502, 9.432251, 9.151824, 9.100838, 9.232815, 9.461803, 8.432048, 8.966919, 8.966919, 8.883504, 9.059843, 8.820425, 9.018662, 8.639201, 8.852021,
   8.93573, 9.161987, 8.83097, 8.746258, 8.343287, 8.977292, 8.574325, 8.298551, 8.682182, 9.028975, 8.714279, 8.671457, 8.320949, 8.649966, 8.724952, 8.639201,
   8.23099, 8.682182, 8.862528, 8.059611, 8.398872, 8.354434, 8.07115, 8.242289, 8.432048, 8.320949, 8.219676, 8.354434, 8.465093, 8.18564, 8.287329, 8.606824,
   8.5308, 8.059611, 8.376683, 8.242289, 8.128596, 7.978375, 8.059611, 7.76558, 8.059611, 8.048056, 8.128596, 7.943305, 8.140037, 8.059611, 8.253572, 8.013291,
   8.059611, 7.955012, 8.174263, 8.298551, 7.966702, 8.082672, 7.559108, 7.705427, 7.943305, 7.644801, 8.320949, 8.013291, 8.11714, 7.908079, 7.896303, 7.813368,
   7.777554, 7.705427, 7.459968, 7.620416, 7.244792, 7.644801, 7.422449, 7.632618, 7.422449, 7.753587, 7.409901, 7.257626, 7.753587, 7.608194, 7.115179, 7.257626,
   7.472433, 7.38474, 7.459968, 6.956456, 7.270438, 7.522084, 7.459968, 7.656965, 7.447483, 7.534446, 7.334159, 7.219056, 7.023027, 7.167306, 6.929649, 7.036265,
   7.346837, 7.422449, 7.321459, 7.372127, 7.180278, 7.14129, 7.409901, 6.766576, 7.729544, 7.075832, 7.346837, 7.583691, 7.088972, 6.875721, 7.128246, 7.115179,
   6.627617, 7.128246, 6.889243, 6.780315, 6.969821, 7.075832, 6.902738, 7.036265, 6.766576, 6.956456, 7.257626, 7.206153, 6.340569, 6.528586, 6.875721, 6.61356,
   7.023027, 6.996475, 6.916206, 6.780315, 6.669608, 6.752808, 7.075832, 6.834996, 6.655641, 6.485681, 6.969821, 6.585357, 6.794026, 6.61356, 6.683547, 6.683547,
   6.929649, 6.739013, 6.821367, 6.384449, 6.542825, 6.599474, 6.161926, 6.848598, 6.325875, 6.384449, 6.413536, 6.500014, 6.821367, 6.514316, 6.821367, 6.101216,
   6.61356, 6.369856, 6.384449, 6.296384, 6.281586, 6.325875, 6.311147, 6.557033, 6.384449, 6.085944, 5.962358, 6.471317, 6.222044, 6.251886, 5.788121, 6.35523,
   6.340569, 6.055284, 6.085944, 6.57121, 5.723448, 6.17701, 6.070633 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1055,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1055);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetMinimum(-1054.685);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetMaximum(10868.29);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1055);
   
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
   
   TH1D *data_mc_ratio__56 = new TH1D("data_mc_ratio__56","",1000,0,2000);
   data_mc_ratio__56->SetBinContent(1000,1.15896);
   data_mc_ratio__56->SetBinContent(1001,1.157175);
   data_mc_ratio__56->SetBinError(1000,0.1639018);
   data_mc_ratio__56->SetBinError(1001,0.008639993);
   data_mc_ratio__56->SetMinimum(0.4);
   data_mc_ratio__56->SetMaximum(1.6);
   data_mc_ratio__56->SetEntries(25.12563);
   data_mc_ratio__56->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__56->SetLineColor(ci);
   data_mc_ratio__56->SetLineWidth(2);
   data_mc_ratio__56->SetMarkerStyle(20);
   data_mc_ratio__56->SetMarkerSize(1.2);
   data_mc_ratio__56->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__56->GetXaxis()->SetRange(1,150);
   data_mc_ratio__56->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__56->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__56->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__56->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__56->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__56->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__56->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__56->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__56->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__56->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__56->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__56->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__56->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__56->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1056[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1056[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1056[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1056[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006900327, 0.00679769, 0.0066995,
   0.006720042, 0.006697997, 0.006660453, 0.006631685, 0.00665411, 0.006695595, 0.006705372, 0.00670266, 0.006719131, 0.006787191, 0.006768819, 0.006809657, 0.006834901, 0.00694897, 0.006995573, 0.007105614,
   0.007147234, 0.00723461, 0.007342627, 0.00735016, 0.007505021, 0.007531368, 0.007565777, 0.007657722, 0.007722296, 0.00776361, 0.007839581, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1407125 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1056,Graph_from_mc_statistical_error_fy1056,Graph_from_mc_statistical_error_fex1056,Graph_from_mc_statistical_error_fey1056);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1056 = new TH1F("Graph_Graph_from_mc_statistical_error1056","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1056->SetMinimum(0.831145);
   Graph_Graph_from_mc_statistical_error1056->SetMaximum(1.168855);
   Graph_Graph_from_mc_statistical_error1056->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1056->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1056->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1056->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1056);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->Modified();
   Z_mass_tagFirst_SR_17->cd();
   Z_mass_tagFirst_SR_17->SetSelected(Z_mass_tagFirst_SR_17);
}
