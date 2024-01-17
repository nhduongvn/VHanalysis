#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Sat Dec  9 13:50:17 2023) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_16 = new TCanvas("Z_mass_tagFirst_SR_16", "Z_mass_tagFirst_SR_16",0,0,600,600);
   Z_mass_tagFirst_SR_16->SetHighLightColor(2);
   Z_mass_tagFirst_SR_16->Range(0,0,1,1);
   Z_mass_tagFirst_SR_16->SetFillColor(0);
   Z_mass_tagFirst_SR_16->SetFillStyle(4000);
   Z_mass_tagFirst_SR_16->SetBorderMode(0);
   Z_mass_tagFirst_SR_16->SetBorderSize(2);
   Z_mass_tagFirst_SR_16->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-65.52737,315.7258,65471.83);
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
   st->SetMaximum(58918.1);
   
   TH1F *st_stack_108 = new TH1F("st_stack_108","",1000,0,2000);
   st_stack_108->SetMinimum(0.01);
   st_stack_108->SetMaximum(58918.1);
   st_stack_108->SetDirectory(nullptr);
   st_stack_108->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_108->SetLineColor(ci);
   st_stack_108->SetLineWidth(0);
   st_stack_108->GetXaxis()->SetRange(1,150);
   st_stack_108->GetXaxis()->SetLabelFont(42);
   st_stack_108->GetXaxis()->SetTitleOffset(1);
   st_stack_108->GetXaxis()->SetTitleFont(42);
   st_stack_108->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_108->GetYaxis()->SetLabelFont(42);
   st_stack_108->GetYaxis()->SetLabelSize(0.05);
   st_stack_108->GetYaxis()->SetTitleSize(0.057);
   st_stack_108->GetYaxis()->SetTitleOffset(1.2);
   st_stack_108->GetYaxis()->SetTitleFont(42);
   st_stack_108->GetZaxis()->SetLabelFont(42);
   st_stack_108->GetZaxis()->SetTitleOffset(1);
   st_stack_108->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_108);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,26360.66);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,26414.09);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,26513.14);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,26425.96);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,26186.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,26039.38);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,25904.7);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,25760.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,25443.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,25282.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,24982.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,24532.75);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,24345.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,24119.45);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,23774.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,23380.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,23041.7);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,22376.49);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,22023.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,21743.94);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,21367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,20895.46);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,20537.08);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,20223.58);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,19920.47);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,19606.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,19453.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,19263.8);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,19065.69);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,18757.02);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,97.944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,50614.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9815737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.873754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,6.980323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,13.10108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,20.08546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,28.15692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,36.70651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,45.05932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,53.48322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,60.81119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,68.81525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,75.22614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,80.37525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,85.03025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,89.39637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,92.26793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,94.46887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,96.55912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,97.38662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.8929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,98.99306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,99.17851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,99.01531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,98.56528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,98.2884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,98.0339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,97.76114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,97.15738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,96.85019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,96.27361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,95.40256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,95.0383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,94.59554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,93.91578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,93.13578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.45793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,91.11355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,90.39162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,89.81649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.03459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,88.04667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.28835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,86.61956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,85.96799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.28805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.95333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.53917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,84.10334);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.41974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.86516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,82.60813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,82.11597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.65456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,81.66299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.75282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,80.26729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,79.51007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,79.40613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,79.4382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,78.673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,78.42329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,77.96298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,77.84107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,76.99926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,76.48361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,76.19784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,75.60485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,75.35776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,74.78112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,74.36214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,73.69278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,73.52449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,72.99938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,72.27457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,72.10011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,71.45387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,71.18658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,70.56319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,70.06598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,69.89388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,69.16937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,68.39091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,68.12776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,68.04185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,67.64928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,67.12947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,66.21285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,66.20349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.56631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.94832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.77643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,64.15512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.78719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.23238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,63.0045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.51873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.02805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,61.50549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,61.49318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,60.80779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,60.73192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,60.50486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,59.60182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,59.31013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,59.02632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,58.65556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,58.27063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,58.03275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,57.82842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,57.08339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,57.09183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,56.59787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,56.38712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,56.0124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,55.38969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,55.16434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,54.94684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,54.74733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,54.39169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,54.00185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,54.18632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,53.35697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,53.3531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,52.96602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,52.39907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,52.47257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,52.50535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,51.98371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,51.91084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,51.44741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,51.37379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,51.089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,50.37273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,50.28385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,50.36453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,49.70015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,49.79146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,49.43357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,49.15435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,49.07168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,48.45919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,48.56275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,48.60808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,48.03411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,48.15431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,47.84749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,47.54159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,47.24099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,47.2439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,47.09947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,46.9282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,46.74011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,46.58821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,46.88565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,46.271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,46.09068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,45.75048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,45.51219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,45.66918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,45.21332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,45.5016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,45.07459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,44.74512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,45.08528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,44.83885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,44.38066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,44.32014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,44.73128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,44.31859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,43.95215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,43.89104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,43.63471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,43.7009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,43.51468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,43.55578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,43.69933);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,43.46087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,43.55104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,43.1095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,43.40541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,42.97039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,42.8501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,42.74558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,43.08714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,42.59074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,42.13587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,42.24027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,42.53414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,41.7173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,42.07212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,41.80299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,42.04758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,41.66117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,41.78982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,41.80793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,41.57353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,41.50726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,41.43424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,41.54703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,41.01186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,40.97157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,40.90769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,41.181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,41.01858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,40.83023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,40.75938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,40.21544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,40.37598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,40.0491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,40.30604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,40.0302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,40.08174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,39.94586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,40.27529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,40.05769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,39.89932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,39.7957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,39.65016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,39.48667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,39.57894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,39.48144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,39.02208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,39.22086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,38.9497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,39.18048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,38.83291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,39.07495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,38.86302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,39.17697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,38.56616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,38.60005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,38.46968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,38.47325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,38.62144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,38.31552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,38.46073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,38.08311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,38.03971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,38.06503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,38.59827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,37.83472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,37.91286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,37.64508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,37.9709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,37.80015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,37.41034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,37.60667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,37.18153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,37.4912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,37.32562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,37.30534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,37.15561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,36.99969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,37.05174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,36.69526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,37.25549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,36.6765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,36.92149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,36.75148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,36.60324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,36.49403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,36.49403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,36.38638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,36.35611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,36.17202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,36.286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,36.11871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,36.06914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,36.1549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,36.02714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,35.93916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,36.01758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,35.78756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,35.54831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,35.45914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,35.56959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,35.77602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,35.38726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,35.26842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,35.46302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,34.94694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,35.12765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,34.86413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,35.04919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,34.95482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,34.86018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,34.91147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,34.93906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,34.76925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,34.46308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,34.68007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,34.43512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,34.19847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,34.41112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,34.04115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,34.47906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,34.38311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,34.17432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,34.06338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,33.73653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,33.74469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,33.7773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,34.18237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,33.53192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,33.78953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,33.44149);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,33.18947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,33.47029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,33.42708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,33.24955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,33.06066);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,33.1625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,33.39824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,33.30745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,33.11266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,32.71539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,32.81201);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,32.9397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,32.68171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,32.43652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,32.75533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,32.553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,32.53397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,32.54243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,32.17021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,32.51281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,32.1638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,32.16594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,32.11026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,32.21511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,31.99001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,31.93618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,31.82177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,32.16807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,31.91463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,31.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,31.70694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,31.7243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,31.45634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,31.40598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,31.33138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,31.51754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,31.34676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,31.19049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,31.08218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,31.26762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,31.01125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,30.81757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,30.85775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,31.09989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,30.64514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,30.45817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,30.68105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,30.22227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,30.61368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,30.38125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,30.35633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,30.09905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,30.03267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,29.97992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,29.97533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,30.14475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,30.02121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,29.77029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,29.61733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,29.70781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,29.63127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,30.00746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,29.4589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,29.76336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,29.9914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,29.93857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,29.262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,29.23376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,29.49392);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,29.00689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,29.42383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,29.29491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,29.52657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,29.00451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,29.3043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,28.99739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,28.79734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,28.93562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,28.82362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,28.72077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,28.52602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,28.74472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,28.44387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,28.50188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,28.34207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,28.567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,28.18135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,28.34693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.19112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,28.26669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,27.96809);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,28.00989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.21308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,27.93361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,27.86948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,28.3275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,27.88183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,27.70106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,27.80521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,27.5416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,27.454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,27.61646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.47906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.24262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.49158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.06634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,27.35355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,27.3057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.32837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.50409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.10586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,27.04486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,26.83282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,26.89174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,27.03468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,26.86614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,26.85845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,26.57251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,26.7326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,26.67591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.69138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.41666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.7223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,26.71715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.68622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.60098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.97);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.13378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.32009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.17851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.28869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.13905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.07578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,25.8691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,25.8265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.58824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,25.79451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.67148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.90898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,26.08634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.54787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.5721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.42636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.32058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.3233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.61781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.43718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.17885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.25254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,24.98954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.90126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,24.9675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.94268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.17338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.12686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.98954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.78769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.6401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.50286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.55897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.8653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.71818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.62613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.70704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.53093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.35919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,24.25727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.26578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,23.98049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,24.00631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.93166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,24.21184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.92878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.89136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.05786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.90288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.87984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.96614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,24.04641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.92015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.75849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.07668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.64816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.50513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.66561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,23.54608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.40537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,23.10648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.95108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.24604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,23.19863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,22.8067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.92108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.73719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.90005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.66746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.57315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.70083);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.96907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.7281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.56705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.50903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.80971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.7069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.65835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,22.19808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,22.25382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.61579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,22.35871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.82479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,22.16706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,22.23835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,22.12977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,22.0019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.5212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.96119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,22.10176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.93925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.54996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,22.15463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.90471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,22.19188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.73756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.55635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,21.5148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,21.40898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,21.61692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,21.57868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,21.34137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,21.29618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,21.28971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,21.14375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,21.06548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,21.27678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.91466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,21.2282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.91137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,21.23469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.94754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,21.28648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,21.02297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.81241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.88173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.94426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.51935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.92453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.63974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.81241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.36449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,20.46226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,20.42186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,20.52271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,20.66307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,20.69967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,20.1197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,20.36787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.96518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,20.13337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,20.29);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,20.3915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,20.07861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,20.06832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,20.28322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,20.24586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.67);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.81293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,20.10601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.90649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,19.58936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,19.62797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,19.56827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.74682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.77816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,19.29913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,19.52602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,19.33832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,19.56827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,19.06954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,19.41645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,19.5542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,19.19903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.95734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,19.08758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,19.13799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.98998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,19.19186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.98273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.79693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.93918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.9028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,18.75294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,18.85542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,18.46447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,18.38604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,18.58336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.81522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,18.60187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,18.49799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,18.2206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,18.43463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,18.33731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,18.35607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,18.3035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,18.4682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,18.39726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,18.1411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,18.25456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,18.14869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,18.36356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,18.0803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,18.42343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,18.04601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.66833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.87358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.98107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.52361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.87358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.69168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,17.52361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,17.9082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.64104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,17.57068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,17.79253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,17.73054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,17.39749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,17.29433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,17.44884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,17.4054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,17.36977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,17.76931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,17.28239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,17.31422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,17.44095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,17.26645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,17.29831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.7156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.83457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,17.50003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.92427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.83048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,16.695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,17.37374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.91207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.72383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.73206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.74439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.68675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,16.63305);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,16.70324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,16.58748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.79774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,16.50429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,16.22674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,16.34085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,16.29024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,16.42906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,16.59162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,16.02617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,16.23946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,16.31978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,16.35348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,16.45417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,16.2225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,16.35769);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,16.21826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,16.1417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,16.06905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,16.21402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.89682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.66569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,15.89249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.65251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.6569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.84913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,16.1161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.81435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.83175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,15.56432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,15.58642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,15.29222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,15.5599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,15.7008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,15.40879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,15.44448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,15.6217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,15.12479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,15.45784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,15.44893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,15.33267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,15.06096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,15.48453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,15.23812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,15.31021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,15.44002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,15.38644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,15.37749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.96469);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.97388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,15.06552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,15.15661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.81215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.52596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.95549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,14.77493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,14.62982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,14.7982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.85391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,14.85854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,14.74696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,14.64393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,14.48801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,14.35919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,14.64863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,14.25818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,14.45472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,14.45948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,14.19045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,14.37834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,14.3304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,14.83536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,14.21468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,14.30637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,14.29193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,14.3352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,14.3496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,14.01477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.95078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,14.20499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.93598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,14.0393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,14.054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.88651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.75204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.94585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,13.90632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,14.08823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.79202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.65159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.86667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.84183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,13.6818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,13.67174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,13.84183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.96558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.80698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,13.86667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,13.75204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,13.65663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,13.25774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.72199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,13.08005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,13.5859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,13.37145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,13.21093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,13.20572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,13.1953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,13.31471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,13.65159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,13.16397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,13.55547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,13.22135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,13.42282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,13.22655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,13.31471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,13.32505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,13.00618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.91592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,12.65757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.63036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,13.13256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,13.05899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.86787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.83574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.77663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,13.04317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.88391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,12.64125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.96378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.88391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,13.04845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.96378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.65213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.92657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,12.45477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.51541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,12.4603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,12.54287);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,12.63036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,12.15839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.72806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,12.46582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,12.1187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,12.32145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,12.23175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,12.28789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,12.15839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,12.1697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.84298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.66735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.78473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,12.37161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.96439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,12.26546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,12.15839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,12.12438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.8604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.73791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,12.10165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,12.10734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.98738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.90095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.83135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,11.81971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.92983);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.52491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.65554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,11.65554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.90095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.77888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,11.52491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.76719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.81389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,11.501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.96439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,11.33828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.70268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,11.70856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,11.42897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,11.36254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,11.38674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,11.30789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,11.11143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,11.32006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,11.08663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,11.51296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,11.1732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,11.04309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,11.2591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,11.30789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,11.35648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.8925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,11.27132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,11.1732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.85452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.99313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,11.21623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.97433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.72055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.8925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.80368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.81642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.98686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,11.13618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.79094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.65616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,11.02438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.84184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.89882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.77179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.67552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.57838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.71413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.70771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.5458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.61734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.66262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.64324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,10.36147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,10.50002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,10.15348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.67552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.44745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,10.30151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.73338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,10.25464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.56536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,10.18731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,10.44745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,10.39462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,10.30819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,10.4869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,10.18055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,10.10592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.982589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,10.22776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.934213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,10.2143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,10.24121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,10.06498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,10.36811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,10.11953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.724164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.948059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,10.00325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.624572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.808724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,10.16025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.941139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.878637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.961885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.857715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.724164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.89256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.801705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.941139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.968791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.617419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.581573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.429533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.709999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,9.334171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,9.502236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.766535);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.702909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,9.282417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,9.207978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.787652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,9.494991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.494991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,9.230373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,9.275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,9.207978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.603097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,9.289828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,9.289828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,9.125393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,9.215449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,9.603097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,9.348906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.531163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,9.414925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,9.10274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,9.363617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.480484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,9.03444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,9.14799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,9.163024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,9.237826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.82637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.934863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,9.095177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,9.252713);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.988619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.810762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.787298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.942562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.818569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.74018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.492578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.484471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.549115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.716526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.59728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.589271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.973293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.637211);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,9.10274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.896267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.613275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.692808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.888528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.443817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.516854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.62924);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.810762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.573231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,8.025957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.684887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,8.187256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.460102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.605281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,8.000192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.524931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.443817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.77162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.59728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,8.337188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,137.0332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(9235223);

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
   
   TH1D *VH_tagFirst_Z_mass__215 = new TH1D("VH_tagFirst_Z_mass__215","",1000,0,2000);
   VH_tagFirst_Z_mass__215->SetBinContent(1000,110);
   VH_tagFirst_Z_mass__215->SetBinContent(1001,60794);
   VH_tagFirst_Z_mass__215->SetEntries(3572384);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__215->SetLineColor(ci);
   VH_tagFirst_Z_mass__215->SetLineWidth(2);
   VH_tagFirst_Z_mass__215->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__215->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__215->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__215->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__215->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__215->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__215->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__215->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__215->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__215->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__215->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__215->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1215[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1215[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26360.66, 26414.09, 26513.14,
   26425.96, 26186.29, 26039.38, 25904.7, 25760.76, 25443.55, 25282.91, 24982.77, 24532.75, 24345.76, 24119.45, 23774.05, 23380.79, 23041.7, 22376.49, 22023.3,
   21743.94, 21367, 20895.46, 20537.08, 20223.58, 19920.47, 19606.61, 19453.01, 19263.8, 19065.69, 18757.02, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 97.944 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1215[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1215[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.9815737, 2.873754, 6.980323, 13.10108, 20.08546, 28.15692,
   36.70651, 45.05932, 53.48322, 60.81119, 68.81525, 75.22614, 80.37525, 85.03025, 89.39637, 92.26793, 94.46887, 96.55912, 97.38662, 98.8929, 98.99306, 99.17851,
   99.01531, 98.56528, 98.2884, 98.0339, 97.76114, 97.15738, 96.85019, 96.27361, 95.40256, 95.0383, 94.59554, 93.91578, 93.13578, 92.45793, 91.11355, 90.39162,
   89.81649, 89.03459, 88.04667, 87.28835, 86.61956, 85.96799, 85.28805, 84.95333, 84.53917, 84.10334, 83.41974, 82.86516, 82.60813, 82.11597, 81.65456, 81.66299,
   80.75282, 80.26729, 79.51007, 79.40613, 79.4382, 78.673, 78.42329, 77.96298, 77.84107, 76.99926, 76.48361, 76.19784, 75.60485, 75.35776, 74.78112, 74.36214,
   73.69278, 73.52449, 72.99938, 72.27457, 72.10011, 71.45387, 71.18658, 70.56319, 70.06598, 69.89388, 69.16937, 68.39091, 68.12776, 68.04185, 67.64928, 67.12947,
   66.21285, 66.20349, 65.56631, 64.94832, 64.77643, 64.15512, 63.78719, 63.23238, 63.0045, 62.51873, 62.02805, 61.50549, 61.49318, 60.80779, 60.73192, 60.50486,
   59.60182, 59.31013, 59.02632, 58.65556, 58.27063, 58.03275, 57.82842, 57.08339, 57.09183, 56.59787, 56.38712, 56.0124, 55.38969, 55.16434, 54.94684, 54.74733,
   54.39169, 54.00185, 54.18632, 53.35697, 53.3531, 52.96602, 52.39907, 52.47257, 52.50535, 51.98371, 51.91084, 51.44741, 51.37379, 51.089, 50.37273, 50.28385,
   50.36453, 49.70015, 49.79146, 49.43357, 49.15435, 49.07168, 48.45919, 48.56275, 48.60808, 48.03411, 48.15431, 47.84749, 47.54159, 47.24099, 47.2439, 47.09947,
   46.9282, 46.74011, 46.58821, 46.88565, 46.271, 46.09068, 45.75048, 45.51219, 45.66918, 45.21332, 45.5016, 45.07459, 44.74512, 45.08528, 44.83885, 44.38066,
   44.32014, 44.73128, 44.31859, 43.95215, 43.89104, 43.63471, 43.7009, 43.51468, 43.55578, 43.69933, 43.46087, 43.55104, 43.1095, 43.40541, 42.97039, 42.8501,
   42.74558, 43.08714, 42.59074, 42.13587, 42.24027, 42.53414, 41.7173, 42.07212, 41.80299, 42.04758, 41.66117, 41.78982, 41.80793, 41.57353, 41.50726, 41.43424,
   41.54703, 41.01186, 40.97157, 40.90769, 41.181, 41.01858, 40.83023, 40.75938, 40.21544, 40.37598, 40.0491, 40.30604, 40.0302, 40.08174, 39.94586, 40.27529,
   40.05769, 39.89932, 39.7957, 39.65016, 39.48667, 39.57894, 39.48144, 39.02208, 39.22086, 38.9497, 39.18048, 38.83291, 39.07495, 38.86302, 39.17697, 38.56616,
   38.60005, 38.46968, 38.47325, 38.62144, 38.31552, 38.46073, 38.08311, 38.03971, 38.06503, 38.59827, 37.83472, 37.91286, 37.64508, 37.9709, 37.80015, 37.41034,
   37.60667, 37.18153, 37.4912, 37.32562, 37.30534, 37.15561, 36.99969, 37.05174, 36.69526, 37.25549, 36.6765, 36.92149, 36.75148, 36.60324, 36.49403, 36.49403,
   36.38638, 36.35611, 36.17202, 36.286, 36.11871, 36.06914, 36.1549, 36.02714, 35.93916, 36.01758, 35.78756, 35.54831, 35.45914, 35.56959, 35.77602, 35.38726,
   35.26842, 35.46302, 34.94694, 35.12765, 34.86413, 35.04919, 34.95482, 34.86018, 34.91147, 34.93906, 34.76925, 34.46308, 34.68007, 34.43512, 34.19847, 34.41112,
   34.04115, 34.47906, 34.38311, 34.17432, 34.06338, 33.73653, 33.74469, 33.7773, 34.18237, 33.53192, 33.78953, 33.44149, 33.18947, 33.47029, 33.42708, 33.24955,
   33.06066, 33.1625, 33.39824, 33.30745, 33.11266, 32.71539, 32.81201, 32.9397, 32.68171, 32.43652, 32.75533, 32.553, 32.53397, 32.54243, 32.17021, 32.51281,
   32.1638, 32.16594, 32.11026, 32.21511, 31.99001, 31.93618, 31.82177, 32.16807, 31.91463, 31.62, 31.70694, 31.7243, 31.45634, 31.40598, 31.33138, 31.51754,
   31.34676, 31.19049, 31.08218, 31.26762, 31.01125, 30.81757, 30.85775, 31.09989, 30.64514, 30.45817, 30.68105, 30.22227, 30.61368, 30.38125, 30.35633, 30.09905,
   30.03267, 29.97992, 29.97533, 30.14475, 30.02121, 29.77029, 29.61733, 29.70781, 29.63127, 30.00746, 29.4589, 29.76336, 29.9914, 29.93857, 29.262, 29.23376,
   29.49392, 29.00689, 29.42383, 29.29491, 29.52657, 29.00451, 29.3043, 28.99739, 28.79734, 28.93562, 28.82362, 28.72077, 28.52602, 28.74472, 28.44387, 28.50188,
   28.34207, 28.567, 28.18135, 28.34693, 28.19112, 28.26669, 27.96809, 28.00989, 28.21308, 27.93361, 27.86948, 28.3275, 27.88183, 27.70106, 27.80521, 27.5416,
   27.454, 27.61646, 27.47906, 27.24262, 27.49158, 28.06634, 27.35355, 27.3057, 27.32837, 27.50409, 27.10586, 27.04486, 26.83282, 26.89174, 27.03468, 26.86614,
   26.85845, 26.57251, 26.7326, 26.67591, 26.69138, 26.41666, 26.7223, 26.71715, 26.68622, 26.60098, 25.97, 26.13378, 26.32009, 26.17851, 26.28869, 26.13905,
   26.07578, 25.8691, 25.8265, 25.58824, 25.79451, 25.67148, 25.90898, 26.08634, 25.54787, 25.5721, 25.42636, 25.32058, 25.3233, 25.61781, 25.43718, 25.17885,
   25.25254, 24.98954, 24.90126, 24.9675, 24.94268, 25.17338, 25.12686, 24.98954, 24.78769, 24.6401, 24.50286, 24.55897, 24.8653, 24.71818, 24.62613, 24.70704,
   24.53093, 24.35919, 24.25727, 24.26578, 23.98049, 24.00631, 23.93166, 24.21184, 23.92878, 23.89136, 24.05786, 23.90288, 23.87984, 23.96614, 24.04641, 23.92015,
   23.75849, 23.07668, 23.64816, 23.50513, 23.66561, 23.54608, 23.40537, 23.10648, 22.95108, 23.24604, 23.19863, 22.8067, 22.92108, 22.73719, 23.423, 22.90005,
   22.66746, 22.57315, 22.70083, 22.96907, 22.7281, 22.56705, 22.50903, 22.80971, 22.7069, 22.65835, 22.19808, 22.25382, 22.61579, 22.35871, 22.82479, 22.16706,
   22.23835, 22.12977, 22.0019, 21.5212, 21.96119, 22.10176, 21.93925, 21.54996, 22.15463, 21.90471, 22.19188, 21.73756, 21.55635, 21.5148, 21.40898, 21.61692,
   21.57868, 21.34137, 21.29618, 21.28971, 21.14375, 21.06548, 21.27678, 20.91466, 21.2282, 20.91137, 21.23469, 20.94754, 21.28648, 21.02297, 20.81241, 20.88173,
   20.94426, 20.51935, 20.92453, 20.63974, 20.81241, 20.36449, 20.46226, 20.42186, 20.52271, 20.66307, 20.69967, 20.1197, 20.36787, 19.96518, 20.13337, 20.29,
   20.3915, 20.07861, 20.06832, 20.28322, 20.24586, 19.67, 19.81293, 20.10601, 19.90649, 19.58936, 19.62797, 19.56827, 19.663, 19.74682, 19.77816, 19.29913,
   19.52602, 19.33832, 19.56827, 19.06954, 19.41645, 19.5542, 19.19903, 18.95734, 19.08758, 19.13799, 18.98998, 19.19186, 18.98273, 18.79693, 18.93918, 18.9028,
   18.75294, 18.85542, 18.46447, 18.38604, 18.58336, 18.81522, 18.60187, 18.49799, 18.2206, 18.43463, 18.33731, 18.35607, 18.3035, 18.4682, 18.39726, 18.1411,
   18.25456, 18.14869, 18.36356, 18.0803, 18.42343, 18.04601, 17.66833, 17.87358, 17.98107, 17.52361, 17.87358, 17.69168, 17.52361, 17.9082, 17.64104, 17.57068,
   17.79253, 17.73054, 17.39749, 17.29433, 17.44884, 17.4054, 17.36977, 17.76931, 17.28239, 17.31422, 17.44095, 17.26645, 17.29831, 16.7156, 16.83457, 17.50003,
   16.92427, 16.83048, 16.695, 17.37374, 16.91207, 16.72383, 16.73206, 16.74439, 16.68675, 16.63305, 16.70324, 16.58748, 16.79774, 16.50429, 16.22674, 16.34085,
   16.29024, 16.42906, 16.59162, 16.02617, 16.23946, 16.31978, 16.35348, 16.45417, 16.2225, 16.35769, 16.21826, 16.1417, 16.06905, 16.21402, 15.89682, 15.66569,
   15.89249, 15.65251, 15.6569, 15.84913, 16.1161, 15.81435, 15.83175, 15.56432, 15.58642, 15.29222, 15.5599, 15.7008, 15.40879, 15.44448, 15.6217, 15.12479,
   15.45784, 15.44893, 15.33267, 15.06096, 15.48453, 15.23812, 15.31021, 15.44002, 15.38644, 15.37749, 14.96469, 14.97388, 15.06552, 15.15661, 14.81215, 14.52596,
   14.95549, 14.77493, 14.62982, 14.7982, 14.85391, 14.85854, 14.74696, 14.64393, 14.48801, 14.35919, 14.64863, 14.25818, 14.45472, 14.45948, 14.19045, 14.37834,
   14.3304, 14.83536, 14.21468, 14.30637, 14.29193, 14.3352, 14.3496, 14.01477, 13.95078, 14.20499, 13.93598, 14.0393, 14.054, 13.88651, 13.75204, 13.94585,
   13.90632, 14.08823, 13.79202, 13.65159, 13.86667, 13.84183, 13.6818, 13.67174, 13.84183, 13.96558, 13.80698, 13.86667, 13.75204, 13.65663, 13.25774, 13.72199,
   13.08005, 13.5859, 13.37145, 13.21093, 13.20572, 13.1953, 13.31471, 13.65159, 13.16397, 13.55547, 13.22135, 13.42282, 13.22655, 13.31471, 13.32505, 13.00618,
   12.91592, 12.65757, 12.63036, 13.13256, 13.05899, 12.86787, 12.83574, 12.77663, 13.04317, 12.88391, 12.64125, 12.96378, 12.88391, 13.04845, 12.96378, 12.65213,
   12.92657, 12.45477, 12.51541, 12.4603, 12.54287, 12.63036, 12.15839, 12.72806, 12.46582, 12.1187, 12.32145, 12.23175, 12.28789, 12.15839, 12.1697, 11.84298,
   11.66735, 11.78473, 12.37161, 11.96439, 12.26546, 12.15839, 12.12438, 11.8604, 11.73791, 12.10165, 12.10734, 11.98738, 11.90095, 11.83135, 11.81971, 11.92983,
   11.52491, 11.65554, 11.65554, 11.90095, 11.77888, 11.52491, 11.76719, 11.81389, 11.501, 11.96439, 11.33828, 11.70268, 11.70856, 11.42897, 11.36254, 11.38674,
   11.30789, 11.11143, 11.32006, 11.08663, 11.51296, 11.1732, 11.04309, 11.2591, 11.30789, 11.35648, 10.8925, 11.27132, 11.1732, 10.85452, 10.99313, 11.21623,
   10.97433, 10.72055, 10.8925, 10.80368, 10.81642, 10.98686, 11.13618, 10.79094, 10.65616, 11.02438, 10.84184, 10.89882, 10.77179, 10.67552, 10.57838, 10.71413,
   10.70771, 10.5458, 10.61734, 10.66262, 10.64324, 10.36147, 10.50002, 10.15348, 10.67552, 10.44745, 10.30151, 10.73338, 10.25464, 10.388, 10.56536, 10.18731,
   10.44745, 10.39462, 10.30819, 10.4869, 10.18055, 10.10592, 9.982589, 10.22776, 9.934213, 10.2143, 10.24121, 10.06498, 10.36811, 10.11953, 9.724164, 9.948059,
   10.00325, 9.624572, 9.808724, 10.16025, 9.941139, 9.878637, 9.961885, 9.857715, 9.724164, 9.89256, 9.801705, 9.941139, 9.968791, 9.617419, 9.581573, 9.429533,
   9.709999, 9.334171, 9.502236, 9.766535, 9.702909, 9.282417, 9.207978, 9.787652, 9.494991, 9.494991, 9.230373, 9.275, 9.207978, 9.603097, 9.289828, 9.289828,
   9.125393, 9.215449, 9.603097, 9.348906, 9.531163, 9.414925, 9.10274, 9.363617, 9.480484, 9.03444, 9.14799, 9.163024, 9.237826, 8.82637, 8.934863, 9.095177,
   9.252713, 8.904, 8.988619, 8.810762, 8.787298, 8.942562, 8.818569, 8.74018, 8.492578, 8.484471, 8.549115, 8.716526, 8.59728, 8.589271, 8.973293, 8.637211,
   9.10274, 8.896267, 8.613275, 8.692808, 8.888528, 8.443817, 8.516854, 8.62924, 8.533, 8.810762, 8.573231, 8.025957, 8.533, 8.684887, 8.187256, 8.460102,
   8.605281, 8.000192, 8.524931, 8.443817, 8.77162, 8.59728, 8.337188 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1215,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1215,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1215,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1215);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->SetMinimum(-2768.358);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->SetMaximum(29283.29);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1215);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (BTagCSV, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
  
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
   
   TH1D *data_mc_ratio__216 = new TH1D("data_mc_ratio__216","",1000,0,2000);
   data_mc_ratio__216->SetBinContent(1000,1.123091);
   data_mc_ratio__216->SetBinContent(1001,1.201111);
   data_mc_ratio__216->SetBinError(1000,0.1070825);
   data_mc_ratio__216->SetBinError(1001,0.005857049);
   data_mc_ratio__216->SetMinimum(0.4);
   data_mc_ratio__216->SetMaximum(1.6);
   data_mc_ratio__216->SetEntries(61.21201);
   data_mc_ratio__216->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__216->SetLineColor(ci);
   data_mc_ratio__216->SetLineWidth(2);
   data_mc_ratio__216->SetMarkerStyle(20);
   data_mc_ratio__216->SetMarkerSize(1.2);
   data_mc_ratio__216->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__216->GetXaxis()->SetRange(1,150);
   data_mc_ratio__216->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__216->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__216->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__216->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__216->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__216->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__216->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__216->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__216->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__216->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__216->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__216->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__216->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__216->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1216[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1216[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1216[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1216[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003751533, 0.003747737, 0.00374073,
   0.003746895, 0.003764003, 0.003774606, 0.003784405, 0.003794964, 0.003818547, 0.003830659, 0.0038536, 0.003888784, 0.00390369, 0.003921961, 0.003950348, 0.003983432, 0.004012636, 0.004071842, 0.004104363,
   0.004130645, 0.00416692, 0.004213674, 0.004250281, 0.004283097, 0.00431556, 0.004349965, 0.004367104, 0.004388498, 0.00441124, 0.004447388, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.08512199 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1216,Graph_from_mc_statistical_error_fy1216,Graph_from_mc_statistical_error_fex1216,Graph_from_mc_statistical_error_fey1216);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1216 = new TH1F("Graph_Graph_from_mc_statistical_error1216","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1216->SetMinimum(0.8978536);
   Graph_Graph_from_mc_statistical_error1216->SetMaximum(1.102146);
   Graph_Graph_from_mc_statistical_error1216->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1216->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1216->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1216->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1216);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
