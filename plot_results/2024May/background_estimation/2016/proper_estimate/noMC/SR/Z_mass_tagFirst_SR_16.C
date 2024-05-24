#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Fri May 24 11:23:58 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-69.71607,315.7258,69656.35);
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
   st->SetMaximum(62683.74);
   
   TH1F *st_stack_124 = new TH1F("st_stack_124","",1000,0,2000);
   st_stack_124->SetMinimum(0.01);
   st_stack_124->SetMaximum(62683.74);
   st_stack_124->SetDirectory(nullptr);
   st_stack_124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_124->SetLineColor(ci);
   st_stack_124->SetLineWidth(0);
   st_stack_124->GetXaxis()->SetRange(1,150);
   st_stack_124->GetXaxis()->SetLabelFont(42);
   st_stack_124->GetXaxis()->SetTitleOffset(1);
   st_stack_124->GetXaxis()->SetTitleFont(42);
   st_stack_124->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_124->GetYaxis()->SetLabelFont(42);
   st_stack_124->GetYaxis()->SetLabelSize(0.05);
   st_stack_124->GetYaxis()->SetTitleSize(0.057);
   st_stack_124->GetYaxis()->SetTitleOffset(1.2);
   st_stack_124->GetYaxis()->SetTitleFont(42);
   st_stack_124->GetZaxis()->SetLabelFont(42);
   st_stack_124->GetZaxis()->SetTitleOffset(1);
   st_stack_124->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_124);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,28207.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,27774.42);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,27712.69);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,27273.4);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,26729.15);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,26518.71);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,25796.57);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,25273.18);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,24784.5);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,24316.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,23650.31);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,23033.94);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,22732.43);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,22355.72);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,21651.04);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,21163.52);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,20822.47);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,20233.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,19899.54);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,19731.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,19248.19);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,18744.63);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,18474.44);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,18192.08);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,18037.78);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,17742.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,17310.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,17098.05);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,16764.26);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,16440.55);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,64.99685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,41423.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01337424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01832488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.02584163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.9903583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,3.400176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,7.421732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,14.07764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,22.13857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,31.4796);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,41.46512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,50.99449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,60.32621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,68.43103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,76.58514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,83.37921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,88.78306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,93.55331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,97.32637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,99.74272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,101.8584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,102.9021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,103.6453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,104.633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,103.8498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,103.865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,103.317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,102.2846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,102.0111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,100.937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,100.0651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,99.26096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,98.4819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,97.40598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,96.55718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,96.10168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,95.55219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,94.26733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,93.3095);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,92.73504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,91.61623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,90.96754);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,90.60957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,89.61481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,88.3366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,87.66483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,87.05432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,86.64433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,85.98517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,84.94971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,84.49227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,83.66247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,83.07763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,82.50859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,81.95751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,81.90747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,81.12689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,80.71016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,80.00215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,79.30783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,78.75967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,78.08537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,78.05456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,77.65917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,77.15744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,76.43497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,76.27358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,75.56362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,74.75527);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,74.80179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,73.85487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,73.80741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,73.07013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,72.44655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,72.05637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,71.69279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,71.18851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,70.78086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,70.3771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,69.96912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,69.66275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,69.08184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,68.83944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,68.4909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,67.99061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,67.33286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,67.23106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,66.67434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,66.5236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,66.23688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,65.79773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,65.72282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,65.15472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,64.65967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,64.65555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,63.66964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,63.56423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,63.14963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,62.95026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,62.71646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,62.72719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,62.15518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,62.13128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,61.53678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,61.2902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,61.07601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,61.02894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,60.555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,60.44127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,60.23598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,59.91037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,59.71921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,59.73366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,59.26317);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,59.03598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,58.75459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,58.91846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,58.4328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,58.14957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,57.89012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,57.88595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,57.52705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,57.50449);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,57.28977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,57.21454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,56.83549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,56.99171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,56.40775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,56.08465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,56.41609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,56.2236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,56.03425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,55.79788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,55.55473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,55.30263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,55.11455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,55.01455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,54.70135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,54.66793);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,54.11895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,54.35104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,53.93341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,54.18807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,54.16435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,53.7443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,53.49457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,53.57931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,53.16197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,53.21866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,53.26191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,53.01336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,52.78919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,52.4067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,52.63277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,52.20279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,52.62499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,51.85161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,52.24491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,51.63785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,51.76791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,51.70377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,51.61666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,51.48465);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,51.24674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,51.19415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,50.96776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,50.85956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,50.6973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,50.41173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,50.46436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,50.27586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,50.99189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,50.28314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,49.84645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,49.95358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,49.56125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,49.71421);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,49.2218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,49.55313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,49.61658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,49.59319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,49.38931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,49.26188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,49.36879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,48.70133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,48.91206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,48.4455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,48.72427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,48.23709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,48.11007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,48.45408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,47.9636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,48.03747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,47.93955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,47.5366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,47.80372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,47.32164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,47.27619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,47.32827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,46.86396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,46.93618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,47.24728);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,47.08146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,47.02022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,46.26811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,46.55791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,46.45243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,46.45136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,46.19938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,46.55024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,45.64687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,46.06089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,45.57811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,45.58492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,45.3783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,45.59616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,45.52282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,45.44395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,45.12413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,45.25565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,44.83172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,44.78799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,44.37716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,44.60744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,44.45034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,43.81547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,44.12926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,44.26389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,44.36451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,44.04298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,43.77879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,43.79799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,43.70512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,43.44718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,43.33898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,43.24889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,43.1263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,43.01229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,43.15987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,42.99316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,42.92361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,42.65512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,42.50594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,42.83964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,42.12549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,42.37051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,42.15055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,42.31214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,42.30339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,41.70075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,41.6423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,41.38068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,41.85138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,41.70829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,41.48438);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,41.1902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,41.19742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,41.16647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,40.68406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,41.11705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,40.35717);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,40.97111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,40.85229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,40.33843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,40.70965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,40.45307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,40.1835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,40.07558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,40.22463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,40.15845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,39.90365);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,39.42456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,39.56641);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,39.67753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,39.36504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,39.44302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,39.18133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,39.39548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,38.99706);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,38.96712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,38.99925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,38.89583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,38.63078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,38.92632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,38.37907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,38.13002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,38.35295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,37.97952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,38.17585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,37.62354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,37.89286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,38.01138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,37.93541);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,37.53508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,37.54673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,37.52729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,37.32614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,37.44497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,37.13454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,37.034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,37.02272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,36.96447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,37.06627);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,36.69036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,36.82962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,36.8171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,36.40177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,36.10974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,36.54927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,36.11884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,35.87834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,36.03306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,35.95578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,35.74208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,35.55344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,35.58794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,35.99389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,35.95202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,35.45987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,35.19028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,35.53908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,35.00525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,35.09739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,34.72252);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,34.94427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,34.64935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,34.61909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,35.05229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,34.31427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,34.53986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,34.49615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,34.72709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,34.1516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,34.09846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,34.16605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,34.01272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,34.07439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,34.2308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,33.91847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,33.79415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,33.81291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,33.57855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,33.52473);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,33.30577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,33.39618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,33.54247);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,33.23646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,32.71082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,32.89777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,33.02361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,32.49893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,32.45253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,32.65747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,32.58739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,32.37463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,32.20952);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,32.51132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,32.1932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,32.46921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,31.86657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,32.08212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,31.76153);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,31.72791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,31.80684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,31.61992);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,31.63888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,31.53885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,31.65879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,31.05551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,31.16388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,31.23034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,31.47023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,30.97356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,31.15443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,31.00873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,31.19042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,30.55554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,30.61679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,30.82282);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,30.29644);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,30.79111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,30.40166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,30.53348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,30.17673);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,30.65902);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,30.19275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,29.9204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,29.8481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,29.86187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,30.05314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,29.48851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,29.39051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,29.37062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,29.59425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,29.46926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,29.3612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,29.307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,29.16225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,28.97011);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,29.04556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,29.05437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,28.92549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,28.73747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,28.89114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,29.18169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,29.06818);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,28.59645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,28.31248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,28.25264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,28.30722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,28.29374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,28.49269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,27.89997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,27.9571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,27.65969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,28.64686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,28.16308);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,28.01965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,27.58386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,27.84953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,27.7459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,27.62243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,27.49493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,27.52397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,27.5173);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,27.14138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,27.16949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,27.30231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,27.14393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,27.10468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,26.92144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,26.78255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,26.75974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,27.0146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,26.82416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,26.87882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,25.9327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,26.44079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,26.32235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,26.51618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,26.42752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,26.31159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,26.30909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,26.23578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,26.10674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,25.82267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,26.18188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,25.78947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,25.81981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,25.96819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,25.80054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,25.78576);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,25.41977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,25.75543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,25.4681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,25.73519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,25.38642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,25.42451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,25.35168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,25.37029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,24.9425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,25.02523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,24.88595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,25.06474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,25.06463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,24.6984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,24.70191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,24.66786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,24.54416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,24.70196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,24.49637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,24.69263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,24.48239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,24.44577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,24.19711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,24.19592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,23.92161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,24.08937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,24.12337);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,23.88394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,23.56466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,23.87393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,23.92894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,23.5168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,24.01332);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,23.90925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,23.49925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,23.64927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,23.63725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,23.8634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,23.35383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,23.16418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,23.58012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,23.4077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,23.14348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,22.94129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,23.04269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,22.80988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,22.79174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,23.09725);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,22.8112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,23.10184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,22.48595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,22.59722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,23.00448);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,22.61295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,22.56399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,22.46474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,22.55057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,22.58548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,22.33963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,22.53347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,22.28123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,22.08808);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,22.03503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,22.1807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,21.67712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,21.6538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,22.17817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,21.92074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,22.08118);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,21.61291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,21.62471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,21.70112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,21.66038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,21.19534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,21.53187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,21.68617);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,21.47581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,21.26938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,21.39612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,21.04009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,21.69411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,21.29117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,21.08968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,20.84397);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,20.9805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,20.94315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,20.96977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,20.6537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,20.8105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,20.49941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,20.39382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,20.36286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,20.84325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,20.27806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,20.66458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,20.81669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,20.53194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,20.39894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,20.40442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,20.29432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,20.2816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,20.70482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,20.16307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,20.28327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,20.26108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,20.30103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,20.10555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,20.06682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,19.85976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,19.69328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,19.91273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,19.94761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,19.90444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,19.59109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,19.73917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,19.54544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,19.49735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,19.48129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,19.61583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,19.59033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,19.48549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,19.68102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,19.46078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,19.05273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,19.30482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,19.28082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,19.02735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,18.86572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,18.78603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,18.56714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,19.04243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,19.08229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,19.08712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,18.91548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,18.50932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,18.64647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,18.9905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,18.54294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,18.63294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,18.60364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,18.65467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,18.29262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,18.41493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,18.3291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,18.19757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,18.59137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,18.18821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,18.0575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,18.05464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,18.16929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,17.9646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,17.9722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,17.83008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,17.77443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,17.94216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,18.09049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,17.88192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,17.9714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,17.62599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,17.76251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,17.40531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,17.57357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,17.32765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,17.51071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,17.79312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,17.42014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,17.37966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,17.19029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,17.49041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,17.4044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,17.47074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,17.04744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,17.01378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,17.01216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,17.19284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,17.02533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,17.14826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,17.15323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,16.93855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,16.95696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,17.04758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,16.62919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,16.93115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,16.64561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,16.97232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,16.58114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,16.8778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,16.34529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,16.79402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,16.48492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,16.69558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,16.62568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,16.48895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,16.59386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,16.41679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,16.07294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,16.18474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,16.73514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,16.3267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,16.50721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,15.68493);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,16.52875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,16.0176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,16.04369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,16.20582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,16.17922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,16.22177);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,15.78893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,15.9652);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,15.5304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,16.07834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,15.8082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,15.58661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,15.98401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,15.17791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,15.61935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,15.60322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,15.32514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,15.75729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,15.55797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,15.57277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,15.38003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,15.49191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,15.48509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,15.25318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,15.67266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,15.51428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,15.47006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,15.17976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,15.06861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,14.98797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,15.18326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,15.20228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,15.00998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,15.23239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,15.05029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,15.32648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,14.79683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,14.8679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,14.66151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,14.95316);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,14.99651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,14.6548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,14.46335);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,14.47819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,14.49146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,14.7183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,14.46461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,14.54243);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,14.37293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,14.69625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,14.56995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,14.23748);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,14.42132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,14.82384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,14.49909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,14.35987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,14.24782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,14.44035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,14.18712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,14.21684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,14.1062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,14.34231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,13.9562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,13.86786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,13.80744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,14.10797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,13.84683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,13.97502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,13.89891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,13.78567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,13.69075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,13.8187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,13.58376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,13.64228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,13.6718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,13.56798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,13.97988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,13.43693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,13.56936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,13.56331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,13.6758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,13.77911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,13.41586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,13.4395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,13.48666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,13.31167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,13.49806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,13.24612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,13.30901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,13.35384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,13.49419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,13.06784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,13.29939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,12.98189);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,13.28702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,13.31483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,13.04036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,13.18964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,13.1015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,12.86268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,12.79685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,12.99697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,13.32965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,13.29683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,12.90829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,12.78253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,12.96338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,12.73624);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,13.08117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,12.44106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,12.85093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,12.67192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,12.56029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,12.40939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,12.79811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,12.61694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,12.66249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,12.73422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,12.60772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,12.10333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,12.57689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,12.37139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,12.52276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,12.7375);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.59786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,12.30846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,11.82193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,12.21206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,12.51828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,12.30542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,12.18604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,12.04475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,12.08474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,12.05205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,12.31338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,11.92633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.23027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,12.07184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,12.28719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.16482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,12.02434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.40499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,11.66483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,12.05807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,11.76821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,11.71144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,11.88935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,11.79425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,12.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,11.70097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,11.41752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,11.40932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,11.68828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,11.54708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,11.64296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,11.30163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,11.33268);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,11.03225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,11.29327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,11.43721);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.18702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,11.54254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,11.64531);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,11.57833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.37739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,11.27079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,11.19384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,11.22711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.19261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.18088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,11.0867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,10.84128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,10.97053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,11.03622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,11.17165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,10.90386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.10017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,10.91547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,10.89434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.17152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,10.88552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,10.8342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.09907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,10.67763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,10.75907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,10.87434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,10.858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,10.84999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,10.91207);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,10.63666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,10.7023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,10.61364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,10.51171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,10.55436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,10.48014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,10.50595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,10.34957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,10.71394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,10.59934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.38434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,10.59864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,10.30746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.37184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.26837);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,10.58996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.18549);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.06927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,9.871266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.01259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,9.928315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.23663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,10.15946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.19921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.23703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,10.28582);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.1605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.28529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.32885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,10.11056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,10.01094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,9.928368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,10.11659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,10.09766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,10.38789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.18411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.21079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,9.734513);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,9.684434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,9.816105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.19137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,10.00186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,9.679993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,9.979093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,9.395425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,10.06049);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,10.08194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,9.582193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,9.850751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,9.710271);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,9.709134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,9.70221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,9.619772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,9.039161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.462699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,9.6901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.258356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,9.41519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,9.391336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,9.335103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,9.281853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,9.455242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.160486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.459762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.493468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.235635);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.084391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,9.47802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.387621);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.418666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.266815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.31474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.133094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.073787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.291614);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.290062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.077911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.147619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.046623);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,8.82844);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,8.849259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,8.944061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,8.812845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,8.83551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.040329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,8.633348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,8.657776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,8.887056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,8.800439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,8.849942);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,8.712885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,8.801686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,8.897161);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,8.873974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,8.704899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,8.679356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,8.376387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,8.656777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,8.766854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,8.713649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,8.922035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,8.927312);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,8.572289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,8.7647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,8.702318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,8.550406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,8.603583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,8.693306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,8.734067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.480264);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.409099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,8.687726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,8.524718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,7.917488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.811858);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.587364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,7.958512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.307896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.175517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.007298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,7.95065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.120639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.200371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.239846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.338134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.113284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.268193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,7.913792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,8.358196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.182538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.156309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.188494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.27677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.131533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.123031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.300372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,7.884135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.063676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,7.790055);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,7.779012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,7.953426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.061643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,7.680378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,7.901847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.102313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.550319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,7.683932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.034277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.198963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,7.917869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,7.542378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,129.2162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(7551245);

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
   
   TH1D *VH_tagFirst_Z_mass__247 = new TH1D("VH_tagFirst_Z_mass__247","",1000,0,2000);
   VH_tagFirst_Z_mass__247->SetBinContent(1000,74);
   VH_tagFirst_Z_mass__247->SetBinContent(1001,46470);
   VH_tagFirst_Z_mass__247->SetEntries(3740208);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__247->SetLineColor(ci);
   VH_tagFirst_Z_mass__247->SetLineWidth(2);
   VH_tagFirst_Z_mass__247->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__247->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__247->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__247->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__247->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__247->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__247->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__247->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__247->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__247->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__247->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__247->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1247[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1247[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28207.68, 27774.42, 27712.69,
   27273.4, 26729.15, 26518.71, 25796.57, 25273.18, 24784.5, 24316.64, 23650.31, 23033.94, 22732.43, 22355.72, 21651.04, 21163.52, 20822.47, 20233.3, 19899.54,
   19731.48, 19248.19, 18744.63, 18474.44, 18192.08, 18037.78, 17742.73, 17310.56, 17098.05, 16764.26, 16440.55, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 64.99685 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1247[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1247[1000] = { 0, 0, 0, 0, 0, 0, 0.01337424, 0.01832488, 0, 0.02584163, 0, 0.9903583, 3.400176, 7.421732, 14.07764, 22.13857, 31.4796,
   41.46512, 50.99449, 60.32621, 68.43103, 76.58514, 83.37921, 88.78306, 93.55331, 97.32637, 99.74272, 101.8584, 102.9021, 103.6453, 104.633, 103.8498, 103.865,
   103.317, 102.2846, 102.0111, 100.937, 100.0651, 99.26096, 98.4819, 97.40598, 96.55718, 96.10168, 95.55219, 94.26733, 93.3095, 92.73504, 91.61623, 90.96754,
   90.60957, 89.61481, 88.3366, 87.66483, 87.05432, 86.64433, 85.98517, 84.94971, 84.49227, 83.66247, 83.07763, 82.50859, 81.95751, 81.90747, 81.12689, 80.71016,
   80.00215, 79.30783, 78.75967, 78.08537, 78.05456, 77.65917, 77.15744, 76.43497, 76.27358, 75.56362, 74.75527, 74.80179, 73.85487, 73.80741, 73.07013, 72.44655,
   72.05637, 71.69279, 71.18851, 70.78086, 70.3771, 69.96912, 69.66275, 69.08184, 68.83944, 68.4909, 67.99061, 67.33286, 67.23106, 66.67434, 66.5236, 66.23688,
   65.79773, 65.72282, 65.15472, 64.65967, 64.65555, 63.66964, 63.56423, 63.14963, 62.95026, 62.71646, 62.72719, 62.15518, 62.13128, 61.53678, 61.2902, 61.07601,
   61.02894, 60.555, 60.44127, 60.23598, 59.91037, 59.71921, 59.73366, 59.26317, 59.03598, 58.75459, 58.91846, 58.4328, 58.14957, 57.89012, 57.88595, 57.52705,
   57.50449, 57.28977, 57.21454, 56.83549, 56.99171, 56.40775, 56.08465, 56.41609, 56.2236, 56.03425, 55.79788, 55.55473, 55.30263, 55.11455, 55.01455, 54.70135,
   54.66793, 54.11895, 54.35104, 53.93341, 54.18807, 54.16435, 53.7443, 53.49457, 53.57931, 53.16197, 53.21866, 53.26191, 53.01336, 52.78919, 52.4067, 52.63277,
   52.20279, 52.62499, 51.85161, 52.24491, 51.63785, 51.76791, 51.70377, 51.61666, 51.48465, 51.24674, 51.19415, 50.96776, 50.85956, 50.6973, 50.41173, 50.46436,
   50.27586, 50.99189, 50.28314, 49.84645, 49.95358, 49.56125, 49.71421, 49.2218, 49.55313, 49.61658, 49.59319, 49.38931, 49.26188, 49.36879, 48.70133, 48.91206,
   48.4455, 48.72427, 48.23709, 48.11007, 48.45408, 47.9636, 48.03747, 47.93955, 47.5366, 47.80372, 47.32164, 47.27619, 47.32827, 46.86396, 46.93618, 47.24728,
   47.08146, 47.02022, 46.26811, 46.55791, 46.45243, 46.45136, 46.19938, 46.55024, 45.64687, 46.06089, 45.57811, 45.58492, 45.3783, 45.59616, 45.52282, 45.44395,
   45.12413, 45.25565, 44.83172, 44.78799, 44.37716, 44.60744, 44.45034, 43.81547, 44.12926, 44.26389, 44.36451, 44.04298, 43.77879, 43.79799, 43.70512, 43.44718,
   43.33898, 43.24889, 43.1263, 43.01229, 43.15987, 42.99316, 42.92361, 42.65512, 42.50594, 42.83964, 42.12549, 42.37051, 42.15055, 42.31214, 42.30339, 41.70075,
   41.6423, 41.38068, 41.85138, 41.70829, 41.48438, 41.1902, 41.19742, 41.16647, 40.68406, 41.11705, 40.35717, 40.97111, 40.85229, 40.33843, 40.70965, 40.45307,
   40.1835, 40.07558, 40.22463, 40.15845, 39.90365, 39.42456, 39.56641, 39.67753, 39.36504, 39.44302, 39.18133, 39.39548, 38.99706, 38.96712, 38.99925, 38.89583,
   38.63078, 38.92632, 38.37907, 38.13002, 38.35295, 37.97952, 38.17585, 37.62354, 37.89286, 38.01138, 37.93541, 37.53508, 37.54673, 37.52729, 37.32614, 37.44497,
   37.13454, 37.034, 37.02272, 36.96447, 37.06627, 36.69036, 36.82962, 36.8171, 36.40177, 36.10974, 36.54927, 36.11884, 35.87834, 36.03306, 35.95578, 35.74208,
   35.55344, 35.58794, 35.99389, 35.95202, 35.45987, 35.19028, 35.53908, 35.00525, 35.09739, 34.72252, 34.94427, 34.64935, 34.61909, 35.05229, 34.31427, 34.53986,
   34.49615, 34.72709, 34.1516, 34.09846, 34.16605, 34.01272, 34.07439, 34.2308, 33.91847, 33.79415, 33.81291, 33.57855, 33.52473, 33.30577, 33.39618, 33.54247,
   33.23646, 32.71082, 32.89777, 33.02361, 32.49893, 32.45253, 32.65747, 32.58739, 32.37463, 32.20952, 32.51132, 32.1932, 32.46921, 31.86657, 32.08212, 31.76153,
   31.72791, 31.80684, 31.61992, 31.63888, 31.53885, 31.65879, 31.05551, 31.16388, 31.23034, 31.47023, 30.97356, 31.15443, 31.00873, 31.19042, 30.55554, 30.61679,
   30.82282, 30.29644, 30.79111, 30.40166, 30.53348, 30.17673, 30.65902, 30.19275, 29.9204, 29.8481, 29.86187, 30.05314, 29.48851, 29.39051, 29.37062, 29.59425,
   29.46926, 29.3612, 29.307, 29.16225, 28.97011, 29.04556, 29.05437, 28.92549, 28.73747, 28.89114, 29.18169, 29.06818, 28.59645, 28.31248, 28.25264, 28.30722,
   28.29374, 28.49269, 27.89997, 27.9571, 27.65969, 28.64686, 28.16308, 28.01965, 27.58386, 27.84953, 27.7459, 27.62243, 27.49493, 27.52397, 27.5173, 27.14138,
   27.16949, 27.30231, 27.14393, 27.10468, 26.92144, 26.78255, 26.75974, 27.0146, 26.82416, 26.87882, 25.9327, 26.44079, 26.32235, 26.51618, 26.42752, 26.31159,
   26.30909, 26.23578, 26.10674, 25.82267, 26.18188, 25.78947, 25.81981, 25.96819, 25.80054, 25.78576, 25.41977, 25.75543, 25.4681, 25.73519, 25.38642, 25.42451,
   25.35168, 25.37029, 24.9425, 25.02523, 24.88595, 25.06474, 25.06463, 24.6984, 24.70191, 24.66786, 24.54416, 24.70196, 24.49637, 24.69263, 24.48239, 24.44577,
   24.19711, 24.19592, 23.92161, 24.08937, 24.12337, 23.88394, 23.56466, 23.87393, 23.92894, 23.5168, 24.01332, 23.90925, 23.49925, 23.64927, 23.63725, 23.8634,
   23.35383, 23.16418, 23.58012, 23.4077, 23.14348, 22.94129, 23.04269, 22.80988, 22.79174, 23.09725, 22.8112, 23.10184, 22.48595, 22.59722, 23.00448, 22.61295,
   22.56399, 22.46474, 22.55057, 22.58548, 22.33963, 22.53347, 22.28123, 22.08808, 22.03503, 22.1807, 21.67712, 21.6538, 22.17817, 21.92074, 22.08118, 21.61291,
   21.62471, 21.70112, 21.66038, 21.19534, 21.53187, 21.68617, 21.47581, 21.26938, 21.39612, 21.04009, 21.69411, 21.29117, 21.08968, 20.84397, 20.9805, 20.94315,
   20.96977, 20.6537, 20.8105, 20.49941, 20.39382, 20.36286, 20.84325, 20.27806, 20.66458, 20.81669, 20.53194, 20.39894, 20.40442, 20.29432, 20.2816, 20.70482,
   20.16307, 20.28327, 20.26108, 20.30103, 20.10555, 20.06682, 19.85976, 19.69328, 19.91273, 19.94761, 19.90444, 19.59109, 19.73917, 19.54544, 19.49735, 19.48129,
   19.61583, 19.59033, 19.48549, 19.68102, 19.46078, 19.05273, 19.30482, 19.28082, 19.02735, 18.86572, 18.78603, 18.56714, 19.04243, 19.08229, 19.08712, 18.91548,
   18.50932, 18.64647, 18.9905, 18.54294, 18.63294, 18.60364, 18.65467, 18.29262, 18.41493, 18.3291, 18.19757, 18.59137, 18.18821, 18.0575, 18.05464, 18.16929,
   17.9646, 17.9722, 17.83008, 17.77443, 17.94216, 18.09049, 17.88192, 17.9714, 17.62599, 17.76251, 17.40531, 17.57357, 17.32765, 17.51071, 17.79312, 17.42014,
   17.37966, 17.19029, 17.49041, 17.4044, 17.47074, 17.04744, 17.01378, 17.01216, 17.19284, 17.02533, 17.14826, 17.15323, 16.93855, 16.95696, 17.04758, 16.62919,
   16.93115, 16.64561, 16.97232, 16.58114, 16.8778, 16.34529, 16.79402, 16.48492, 16.69558, 16.62568, 16.48895, 16.59386, 16.41679, 16.07294, 16.18474, 16.73514,
   16.3267, 16.50721, 15.68493, 16.52875, 16.0176, 16.04369, 16.20582, 16.17922, 16.22177, 15.78893, 15.9652, 15.5304, 16.07834, 15.8082, 15.58661, 15.98401,
   15.17791, 15.61935, 15.60322, 15.32514, 15.75729, 15.55797, 15.57277, 15.38003, 15.49191, 15.48509, 15.25318, 15.67266, 15.51428, 15.47006, 15.17976, 15.06861,
   14.98797, 15.18326, 15.20228, 15.00998, 15.23239, 15.05029, 15.32648, 14.79683, 14.8679, 14.66151, 14.95316, 14.99651, 14.6548, 14.46335, 14.47819, 14.49146,
   14.7183, 14.46461, 14.54243, 14.37293, 14.69625, 14.56995, 14.23748, 14.42132, 14.82384, 14.49909, 14.35987, 14.24782, 14.44035, 14.18712, 14.21684, 14.1062,
   14.34231, 13.9562, 13.86786, 13.80744, 14.10797, 13.84683, 13.97502, 13.89891, 13.78567, 13.69075, 13.8187, 13.58376, 13.64228, 13.6718, 13.56798, 13.97988,
   13.43693, 13.56936, 13.56331, 13.6758, 13.77911, 13.41586, 13.4395, 13.48666, 13.31167, 13.49806, 13.24612, 13.30901, 13.35384, 13.49419, 13.06784, 13.29939,
   12.98189, 13.28702, 13.31483, 13.04036, 13.18964, 13.1015, 12.86268, 12.79685, 12.99697, 13.32965, 13.29683, 12.90829, 12.78253, 12.96338, 12.73624, 13.08117,
   12.44106, 12.85093, 12.67192, 12.56029, 12.40939, 12.79811, 12.61694, 12.66249, 12.73422, 12.60772, 12.10333, 12.57689, 12.37139, 12.52276, 12.7375, 12.59786,
   12.30846, 11.82193, 12.21206, 12.51828, 12.30542, 12.18604, 12.04475, 12.08474, 12.05205, 12.31338, 11.92633, 12.23027, 12.07184, 12.28719, 12.16482, 12.02434,
   12.40499, 11.66483, 12.05807, 11.76821, 11.71144, 11.88935, 11.79425, 12.11, 11.70097, 11.41752, 11.40932, 11.68828, 11.54708, 11.64296, 11.30163, 11.33268,
   11.03225, 11.29327, 11.43721, 11.18702, 11.54254, 11.64531, 11.57833, 11.37739, 11.27079, 11.19384, 11.22711, 11.19261, 11.18088, 11.0867, 10.84128, 10.97053,
   11.03622, 11.17165, 10.90386, 11.10017, 10.91547, 10.89434, 11.17152, 10.88552, 10.8342, 11.09907, 10.67763, 10.75907, 10.87434, 10.858, 10.84999, 10.91207,
   10.63666, 10.7023, 10.61364, 10.51171, 10.55436, 10.48014, 10.50595, 10.34957, 10.71394, 10.59934, 10.38434, 10.59864, 10.30746, 10.37184, 10.26837, 10.58996,
   10.18549, 10.06927, 9.871266, 10.01259, 9.928315, 10.23663, 10.15946, 10.19921, 10.23703, 10.28582, 10.1605, 10.28529, 10.32885, 10.11056, 10.01094, 9.928368,
   10.11659, 10.09766, 10.38789, 10.18411, 10.21079, 9.734513, 9.684434, 9.816105, 10.19137, 10.00186, 9.679993, 9.979093, 9.395425, 10.06049, 10.08194, 9.582193,
   9.850751, 9.710271, 9.709134, 9.70221, 9.619772, 9.039161, 9.462699, 9.6901, 9.258356, 9.41519, 9.391336, 9.335103, 9.281853, 9.455242, 9.160486, 9.459762,
   9.493468, 9.235635, 9.084391, 9.47802, 9.387621, 9.418666, 9.266815, 9.31474, 9.133094, 9.073787, 9.291614, 9.290062, 9.077911, 9.147619, 9.046623, 8.82844,
   8.849259, 8.944061, 8.812845, 8.83551, 9.040329, 8.633348, 8.657776, 8.887056, 8.800439, 8.849942, 8.712885, 8.801686, 8.897161, 8.873974, 8.704899, 8.679356,
   8.376387, 8.656777, 8.766854, 8.713649, 8.922035, 8.927312, 8.572289, 8.7647, 8.702318, 8.550406, 8.603583, 8.693306, 8.734067, 8.480264, 8.409099, 8.687726,
   8.524718, 7.917488, 8.811858, 8.587364, 7.958512, 8.307896, 8.175517, 8.007298, 7.95065, 8.120639, 8.200371, 8.239846, 8.338134, 8.113284, 8.268193, 7.913792,
   8.358196, 8.182538, 8.156309, 8.188494, 8.27677, 8.131533, 8.123031, 8.300372, 7.884135, 8.063676, 7.790055, 7.779012, 7.953426, 8.061643, 7.680378, 7.901847,
   8.102313, 7.550319, 7.683932, 8.034277, 8.198963, 7.917869, 7.542378 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1247,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1247,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1247,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1247);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->SetMinimum(-2945.241);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->SetMaximum(31153.91);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1247);
   
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
   
   TH1D *data_mc_ratio__248 = new TH1D("data_mc_ratio__248","",1000,0,2000);
   data_mc_ratio__248->SetBinContent(1000,1.138517);
   data_mc_ratio__248->SetBinContent(1001,1.121823);
   data_mc_ratio__248->SetBinError(1000,0.1323499);
   data_mc_ratio__248->SetBinError(1001,0.006271164);
   data_mc_ratio__248->SetMinimum(0.4);
   data_mc_ratio__248->SetMaximum(1.6);
   data_mc_ratio__248->SetEntries(37.06544);
   data_mc_ratio__248->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__248->SetLineColor(ci);
   data_mc_ratio__248->SetLineWidth(2);
   data_mc_ratio__248->SetMarkerStyle(20);
   data_mc_ratio__248->SetMarkerSize(1.2);
   data_mc_ratio__248->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__248->GetXaxis()->SetRange(1,150);
   data_mc_ratio__248->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__248->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__248->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__248->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__248->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__248->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__248->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__248->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__248->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__248->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__248->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__248->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__248->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__248->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__248->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__248->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1248[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1248[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1248[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1248[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.003709379, 0.003739045, 0.003747921,
   0.003788198, 0.003826707, 0.00384676, 0.003912807, 0.003959338, 0.004004962, 0.00404998, 0.004118593, 0.004191952, 0.004227516, 0.004274172, 0.004353939, 0.004408979, 0.004453605, 0.004527991, 0.004571339,
   0.004592132, 0.004655753, 0.004712635, 0.004745196, 0.004785287, 0.004803493, 0.00484622, 0.004907392, 0.004941631, 0.004990526, 0.005053216, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1160422 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1248,Graph_from_mc_statistical_error_fy1248,Graph_from_mc_statistical_error_fex1248,Graph_from_mc_statistical_error_fey1248);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1248 = new TH1F("Graph_Graph_from_mc_statistical_error1248","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1248->SetMinimum(0.8607494);
   Graph_Graph_from_mc_statistical_error1248->SetMaximum(1.139251);
   Graph_Graph_from_mc_statistical_error1248->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1248->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1248->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1248->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1248->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1248->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1248->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1248->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1248->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1248->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1248->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1248);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
