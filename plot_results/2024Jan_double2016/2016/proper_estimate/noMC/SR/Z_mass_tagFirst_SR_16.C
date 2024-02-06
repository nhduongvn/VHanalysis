#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_16()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_16/Z_mass_tagFirst_SR_16
//=========  (Tue Feb  6 13:31:00 2024) by ROOT version 6.28/10
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
   topPad->Range(-45.96762,-34.64676,315.7258,34622.11);
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
   st->SetMaximum(31156.43);
   
   TH1F *st_stack_12 = new TH1F("st_stack_12","",1000,0,2000);
   st_stack_12->SetMinimum(0.01);
   st_stack_12->SetMaximum(31156.43);
   st_stack_12->SetDirectory(nullptr);
   st_stack_12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_12->SetLineColor(ci);
   st_stack_12->SetLineWidth(0);
   st_stack_12->GetXaxis()->SetRange(1,150);
   st_stack_12->GetXaxis()->SetLabelFont(42);
   st_stack_12->GetXaxis()->SetTitleOffset(1);
   st_stack_12->GetXaxis()->SetTitleFont(42);
   st_stack_12->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_12->GetYaxis()->SetLabelFont(42);
   st_stack_12->GetYaxis()->SetLabelSize(0.05);
   st_stack_12->GetYaxis()->SetTitleSize(0.057);
   st_stack_12->GetYaxis()->SetTitleOffset(1.2);
   st_stack_12->GetYaxis()->SetTitleFont(42);
   st_stack_12->GetZaxis()->SetLabelFont(42);
   st_stack_12->GetZaxis()->SetTitleOffset(1);
   st_stack_12->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_12);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,13330.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,13728.91);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,13888.2);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,14020.4);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,13945.56);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,13991.45);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,13870.73);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,13719.51);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,13578.76);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,13170.6);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,12780.68);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,12468.3);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,12109.06);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,12060.32);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,11805.01);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,11685.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,11454.09);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,11094.61);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,11089.95);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,10996.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,10787.16);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,10688.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,10586.35);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,10456.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,10240.77);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,10051.96);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,10013.17);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,9864.239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,9793.451);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,9581.545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,78.5998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,42096.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(7,0.01279787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.01953698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.05076001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.01683672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.02362336);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.7582672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,2.006198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,4.25771);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.051684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,11.97294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,16.49383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,21.05036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,25.5787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,30.54887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,35.27626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,41.12414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,46.1512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,51.09113);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,55.64956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,60.36478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,63.69409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,66.34958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,69.65738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,71.13315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,73.12172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,74.35364);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,74.96263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,75.53501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,75.67075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,76.10373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,76.10891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,76.43495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,76.5579);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,76.15719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,75.74371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,75.6245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,75.09435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,75.31663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,74.58434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,74.00891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,73.24353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,71.94745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,71.45258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,70.55799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,69.72089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,69.04034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,68.31985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,67.71169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,66.87993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,66.23314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,65.93915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,65.36856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,65.06637);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,64.37768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,64.28483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,63.72863);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,63.24512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,62.8714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,62.82458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,62.21594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,61.90068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,61.33577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,61.0819);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,61.03033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,60.55325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,60.44726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,60.34523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,59.8991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,59.28986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,59.35888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,59.00663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,58.59626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,58.67315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,58.0429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,57.99483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,57.78804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,57.40128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,57.34845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,56.3926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,56.54807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,56.30688);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,56.14208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,55.73756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,55.60175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,55.40826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,54.99141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,54.44406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,54.09752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,54.22186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,54.05868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,53.44689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,52.78131);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,52.95714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,52.54423);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,51.90491);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,51.85068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,51.59434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,51.30855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,50.94191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,50.70068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,50.34294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,50.09606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,49.84764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,49.53964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,49.2014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,49.29929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,49.16114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,48.27077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,48.07926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,47.98502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,47.76051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,47.44197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,47.03838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,47.14468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,46.2904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,46.37059);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,46.02141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,45.91593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,45.6223);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,45.23702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,45.00886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,44.72242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,44.69358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,44.35324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,44.00447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,44.12509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,43.70003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,43.38327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,43.15272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,42.79871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,42.85851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,42.95832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,42.48472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,42.24091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,42.03834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,41.93718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,41.78967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,41.37607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,41.208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,41.12555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,40.52583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,40.48307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,40.30566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,40.27612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,40.1973);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,39.866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,39.83383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,39.76779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,39.42479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,39.32807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,39.20901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,38.94742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,38.52532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,38.5197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,38.56913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,38.30391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,38.28662);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,38.17678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,38.02415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,37.86803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,37.7418);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,37.60533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,36.97965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,37.39443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,36.89766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,36.99591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,36.81832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,36.48737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,36.76774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,36.8154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,36.0938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,36.0871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,36.74286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,36.20526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,35.70294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,35.84494);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,35.32233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,35.53179);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,35.43208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,35.43941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,35.70196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,35.32695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,35.46597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,34.74079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,35.14086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,34.89309);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,34.88701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,34.58327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,35.08948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,34.74174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,34.30463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,34.38859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,34.3989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,33.76831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,34.28691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,34.18961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,34.25499);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,33.70749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,33.89064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,33.93155);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,33.71959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,33.86258);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,33.49696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,33.72982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,33.14962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,33.14213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,33.3866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,33.29828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,33.41518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,32.93232);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,32.84098);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,32.65823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,32.49763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,32.30393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,32.51517);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,32.41775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,32.26388);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,32.35833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,32.55787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,32.3382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,32.14825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,32.12279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,32.26873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,31.8459);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,32.02847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,31.90119);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,31.54669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,31.57298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,31.60128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,31.61978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,31.45301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,31.63163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,31.37406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,31.48807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,31.27327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,31.01203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,30.97647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,31.14442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,31.22216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,30.90607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,31.12534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,30.879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,30.82701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,30.80032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,31.12521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,30.6846);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,30.78955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,30.56749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,30.75507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,30.78709);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,30.19522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,30.48419);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,30.13076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,30.33057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,30.25565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,30.34349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,30.11209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,30.00151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,30.03117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,29.7595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,30.28791);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,29.93406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,30.03017);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,29.59842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,29.93562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,29.71009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,29.74766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,29.48782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,29.57479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,29.38855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,29.51102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,29.409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,29.51185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,29.4869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,29.25348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,29.39001);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,29.38294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,29.41127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,29.05672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,29.0526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,29.30212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,29.1003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,29.05723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,28.81862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,29.02999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,28.7319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,28.78099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,28.69965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,28.99779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,28.81687);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,28.70286);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,28.55504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,28.70979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,28.70061);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,28.37393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,28.26891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,28.28143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,28.0746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,28.38723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,28.03029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,28.58349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,28.14915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,28.26175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,28.23338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,27.86736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,27.80947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,27.75437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,28.36958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,27.74341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,27.98245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,27.68658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,27.44672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,27.54871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,27.59904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,27.57245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,27.44175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,27.63674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,27.8827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,27.67079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,27.41377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,27.21689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,27.25371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,27.66262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,27.35091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,27.17478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,27.33814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,27.06737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,27.1138);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,27.23492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,26.56176);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,27.13536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,27.12951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,26.92767);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,26.77923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,27.00664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,26.86855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,26.57705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,27.02025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,26.79911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,26.76183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,26.50546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,26.67982);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,26.55781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,26.39139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,26.43972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,26.3384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,26.67146);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,26.28906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,26.0761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,26.31273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,26.66183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,26.00347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,25.9772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,25.94151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,26.25427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,25.97832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,25.79813);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,26.09587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,25.52611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,25.84747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,25.70563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,25.82132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,25.50356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,25.35496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,25.2695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,25.41522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,25.46666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,25.41938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,25.2373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,25.10288);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,25.3311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,25.07415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,25.27039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,24.79664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,25.3088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,25.33727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,25.48538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,25.00683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,24.79698);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,25.11591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,24.95743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,24.86731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,24.87963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,24.96547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,24.69447);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,24.97857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,24.60399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,24.51019);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,24.7691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,24.58511);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,24.56563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,24.43697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,24.48755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,24.19251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,24.22425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,24.19944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,24.21888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,24.08532);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,24.22961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,24.1127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,24.01261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,24.13893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,24.02003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,24.32431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,24.02043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,23.97468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,24.27357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,23.91665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,23.76831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,24.04398);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,23.51084);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,23.44981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,23.63953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,23.70986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,23.40609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,23.53607);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,24.06597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,23.57454);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,23.27667);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,23.28067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,23.72172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,23.25257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,23.25946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,23.20665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,23.01404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,23.29509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,22.95578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,23.08329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,22.93779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,23.11174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,23.10408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,23.10944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,22.84839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,22.94519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,23.1342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,22.84032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,23.01904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,22.49548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,22.61558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,22.8763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,22.56506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,22.85508);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,22.41998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,22.35341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,22.39633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,22.40192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,22.20964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,22.32538);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,22.03542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,22.33111);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,22.41109);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,22.30089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,22.32475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,22.08367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,21.92088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,21.84241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,22.23401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,22.17969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,22.04384);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,21.9272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,21.79764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,21.48948);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,21.7015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,21.63996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,21.8208);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,21.73848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,21.56045);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,21.53996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,21.47081);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,21.22005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,21.32018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,21.57385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,21.56923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,21.42955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,21.54479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,21.44281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,21.07941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,21.1856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,21.20367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,20.77755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,20.89891);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,20.85597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,20.98203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,20.85166);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,20.82628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,20.80834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,20.81245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,20.97986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,20.77221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,21.10836);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,21.00865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,20.83573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,20.20633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,20.724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,20.51786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,20.69944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,20.50782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,20.3156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,20.28307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,19.99618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,20.28821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,20.34528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,20.02378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,20.03148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,19.76158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,20.49886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,20.14823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,19.55657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,19.75235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,19.9691);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,20.08551);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,19.95965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,19.79985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,19.78544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,19.99941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,19.89917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,19.84591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,19.54487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,19.44004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,19.76777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,19.65082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,20.12204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,19.30533);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,19.65018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,19.38222);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,19.30642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,18.90408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,19.19845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,19.48437);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,19.21426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,18.77881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,19.3273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,19.14949);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,19.31298);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,19.15228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,18.82722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,19.03794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,18.87136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,19.0561);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,18.91675);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,18.58571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,18.47242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,18.81417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,18.67565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,18.46228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,18.65215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,18.56668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,18.70615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,18.38877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,18.5135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,18.44254);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,18.69855);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,18.40912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,18.54274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,18.55374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,18.39184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,18.07738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,18.2766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,18.08041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,18.35043);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,18.085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,17.99406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,18.03032);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,18.0699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,18.36977);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,18.20193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,17.96733);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,17.83612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,17.56923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,17.69759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,18.07947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,18.1661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,17.76972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,18.02954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,18.14122);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,17.88193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,17.3363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,17.5325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,17.88762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,17.52528);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,17.59148);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,17.48556);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,17.22299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,17.34393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,17.52283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,17.51492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,17.08867);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,17.38618);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,17.07198);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,17.43953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,17.02852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,17.24757);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,17.41058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,16.97343);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,16.80883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,16.8492);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,17.03773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,16.78557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,17.11569);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,16.72277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,16.70285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,16.98966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,16.86311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,16.85065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,16.77468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,16.48186);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,16.4476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,16.65826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,16.6141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,16.65079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,16.39479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,16.18787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,16.40984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,16.35488);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,16.22525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,16.34278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,16.47204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,16.30945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,16.24745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,16.351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,16.06313);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,16.39994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,16.18157);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,16.4786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,16.05294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,15.82798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,15.86726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,16.03566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,15.59747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,15.77951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,15.9357);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,15.75638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,16.10053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,15.64822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,15.70906);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,15.98175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,15.70285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,15.8193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,15.44467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,15.57342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,15.44914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,15.49787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,15.84649);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,15.44611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,15.56172);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,15.62789);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,15.52078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,15.50137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,14.99697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,15.11609);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,15.7496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,15.34612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,15.0267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,15.0396);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,15.53639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,15.11887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,14.94724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,14.92557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,15.04645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,14.94344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,15.01501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,15.04162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,14.92601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,15.14029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,14.99328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,14.59117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,14.64586);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,14.73426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,14.79872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,14.87464);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,14.49953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,14.50283);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,14.79976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,14.77239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,14.7455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,14.69361);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,14.81833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,14.85003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,14.43505);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,14.48062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,14.59085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,14.2695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,14.28006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,14.28835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,14.16703);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,14.15263);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,14.22951);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,14.61439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,14.36435);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,14.40018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,14.13354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,14.09073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,13.84063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,14.13761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,14.25895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,13.8253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,13.699);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,14.1187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,13.734);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,14.02261);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,13.95926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,13.96774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,13.67516);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,13.97267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,13.72216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,13.91642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,13.9833);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,14.05658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,13.99773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,13.67679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,13.46368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,13.60279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,13.76692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,13.57474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,13.10065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,13.57422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,13.44242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,13.27188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,13.47936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,13.58115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,13.46482);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,13.51289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,13.14634);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,12.99939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,12.99651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,13.45042);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,12.89385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,13.25235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,13.20159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,13.0715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,13.01363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,12.96775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,13.48657);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,13.05864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,13.03562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,13.19895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,13.05827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,13.07739);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,12.76446);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,12.66835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,12.94604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,12.74932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,12.91284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,12.95899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,12.7909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,12.70479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,12.74483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,12.83596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,12.77817);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,12.61803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,12.46246);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,12.68135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,12.63545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,12.5174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,12.57123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,12.70004);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,12.90615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,12.62944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,12.68383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,12.44577);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,12.64411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,12.55689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,12.7886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,11.91853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,12.58989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,12.42585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,12.19731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,12.08101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,12.0811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,12.27221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,12.598);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,12.05206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,12.41807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,12.1859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,12.41723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,12.31981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,12.31276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,12.27803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,12.05979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,11.86498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,11.56329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,11.78331);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,12.17344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,12.11139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,11.97371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,11.80314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,11.67738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,12.18742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,11.85922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,11.61105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,12.03323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,11.93239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,12.03903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,12.01826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,11.87009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,12.10684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,11.54117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,11.51442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,11.59196);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,11.58633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,11.79978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,11.22141);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,11.81684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,11.61342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,11.44193);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,11.46521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,11.2888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,11.47674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,11.2923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,11.27612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,10.9668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,10.7768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,10.87047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,11.44832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,11.12622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,11.28915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,11.53231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,11.36708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,11.08787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,10.86403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,11.36293);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,11.36941);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,11.19967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,11.09692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,10.97547);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,10.86475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,11.03068);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,10.71737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,10.99231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,10.78523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,11.15406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,11.03807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,10.73916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,11.06969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,11.14156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,10.8205);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,11.20369);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,10.40786);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,11.00826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,10.93395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,10.69779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,10.64872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,10.75564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,10.4876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,10.39439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,10.60664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,10.50129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,10.85338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,10.45065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,10.43737);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,10.79726);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,10.50461);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,10.5297);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,10.33468);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,10.67518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,10.54907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,10.1773);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,10.37647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,10.48158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,10.31304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,10.05326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,10.11487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,10.10798);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,10.12777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,10.28391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,10.3777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,10.1684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,10.08123);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,10.49126);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,10.2203);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,10.27984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,10.00857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,9.861007);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,9.921638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,10.09009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,9.991136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,9.894756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,9.997163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,10.0968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,10.10875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,9.752772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,9.793181);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,9.68256);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,10.09018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,9.855038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,9.71587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,10.16921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,9.640064);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,9.82522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,9.829794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,9.61381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,9.921394);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,9.801352);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,9.749276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,9.908477);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,9.631408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,9.458792);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,9.411606);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,9.623382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,9.349743);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,9.767956);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,9.685251);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,9.616901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,9.858591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,9.58574);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,9.388975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,9.425514);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,9.497997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,9.109215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,9.424642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,9.653367);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,9.381333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,9.413632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,9.36692);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,9.404075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,9.098318);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,9.34605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,9.218883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,9.430101);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,9.32821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,9.274092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,9.051248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,9.035755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,9.140881);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,8.725496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,8.902856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,9.285226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,9.189028);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,8.740495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,8.7174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,9.238871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,8.958504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,9.087315);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,8.813601);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,8.659202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,8.750987);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,9.339214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,8.814764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,8.885908);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,8.66887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,8.826849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,8.941986);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,8.812374);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,9.03677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,8.798778);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,8.658071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,8.912314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,9.078452);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,8.481553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,8.783116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,8.817968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,8.710921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,8.5788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,8.551939);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,8.68904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,8.730044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,8.452668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,8.604682);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,8.509014);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,8.465985);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,8.570431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,8.485559);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,8.375919);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,8.145928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,8.085124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,8.111416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,8.424426);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,8.160967);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,8.146615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,8.528325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,8.256694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,8.613651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,8.483708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,8.300783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,8.327466);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,8.590861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,8.17214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,8.076589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,8.369063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,8.220711);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,8.371253);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,8.269788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,7.692596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,8.124277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,8.379071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,7.818632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,8.061354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,8.255453);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,7.710589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,8.160738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,8.120823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,8.468545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,8.290693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,7.941679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,133.0237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(4290235);

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
   
   TH1D *VH_tagFirst_Z_mass__23 = new TH1D("VH_tagFirst_Z_mass__23","",1000,0,2000);
   VH_tagFirst_Z_mass__23->SetBinContent(1000,96);
   VH_tagFirst_Z_mass__23->SetBinContent(1001,54979);
   VH_tagFirst_Z_mass__23->SetEntries(2298534);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__23->SetLineColor(ci);
   VH_tagFirst_Z_mass__23->SetLineWidth(2);
   VH_tagFirst_Z_mass__23->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__23->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__23->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__23->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__23->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1023[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1023[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13330.01, 13728.91, 13888.2,
   14020.4, 13945.56, 13991.45, 13870.73, 13719.51, 13578.76, 13170.6, 12780.68, 12468.3, 12109.06, 12060.32, 11805.01, 11685.25, 11454.09, 11094.61, 11089.95,
   10996.74, 10787.16, 10688.62, 10586.35, 10456.24, 10240.77, 10051.96, 10013.17, 9864.239, 9793.451, 9581.545, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 78.5998 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1023[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1023[1000] = { 0, 0, 0, 0, 0, 0, 0.01279787, 0.01953698, 0.05076001, 0.01683672, 0.02362336, 0.7582672, 2.006198, 4.25771, 8.051684, 11.97294, 16.49383,
   21.05036, 25.5787, 30.54887, 35.27626, 41.12414, 46.1512, 51.09113, 55.64956, 60.36478, 63.69409, 66.34958, 69.65738, 71.13315, 73.12172, 74.35364, 74.96263,
   75.53501, 75.67075, 76.10373, 76.10891, 76.43495, 76.5579, 76.15719, 75.74371, 75.6245, 75.09435, 75.31663, 74.58434, 74.00891, 73.24353, 71.94745, 71.45258,
   70.55799, 69.72089, 69.04034, 68.31985, 67.71169, 66.87993, 66.23314, 65.93915, 65.36856, 65.06637, 64.37768, 64.28483, 63.72863, 63.24512, 62.8714, 62.82458,
   62.21594, 61.90068, 61.33577, 61.0819, 61.03033, 60.55325, 60.44726, 60.34523, 59.8991, 59.28986, 59.35888, 59.00663, 58.59626, 58.67315, 58.0429, 57.99483,
   57.78804, 57.40128, 57.34845, 56.3926, 56.54807, 56.30688, 56.14208, 55.73756, 55.60175, 55.40826, 54.99141, 54.44406, 54.09752, 54.22186, 54.05868, 53.44689,
   52.78131, 52.95714, 52.54423, 51.90491, 51.85068, 51.59434, 51.30855, 50.94191, 50.70068, 50.34294, 50.09606, 49.84764, 49.53964, 49.2014, 49.29929, 49.16114,
   48.27077, 48.07926, 47.98502, 47.76051, 47.44197, 47.03838, 47.14468, 46.2904, 46.37059, 46.02141, 45.91593, 45.6223, 45.23702, 45.00886, 44.72242, 44.69358,
   44.35324, 44.00447, 44.12509, 43.70003, 43.38327, 43.15272, 42.79871, 42.85851, 42.95832, 42.48472, 42.24091, 42.03834, 41.93718, 41.78967, 41.37607, 41.208,
   41.12555, 40.52583, 40.48307, 40.30566, 40.27612, 40.1973, 39.866, 39.83383, 39.76779, 39.42479, 39.32807, 39.20901, 38.94742, 38.52532, 38.5197, 38.56913,
   38.30391, 38.28662, 38.17678, 38.02415, 37.86803, 37.7418, 37.60533, 36.97965, 37.39443, 36.89766, 36.99591, 36.81832, 36.48737, 36.76774, 36.8154, 36.0938,
   36.0871, 36.74286, 36.20526, 35.70294, 35.84494, 35.32233, 35.53179, 35.43208, 35.43941, 35.70196, 35.32695, 35.46597, 34.74079, 35.14086, 34.89309, 34.88701,
   34.58327, 35.08948, 34.74174, 34.30463, 34.38859, 34.3989, 33.76831, 34.28691, 34.18961, 34.25499, 33.70749, 33.89064, 33.93155, 33.71959, 33.86258, 33.49696,
   33.72982, 33.14962, 33.14213, 33.3866, 33.29828, 33.41518, 32.93232, 32.84098, 32.65823, 32.49763, 32.30393, 32.51517, 32.41775, 32.26388, 32.35833, 32.55787,
   32.3382, 32.14825, 32.12279, 32.26873, 31.8459, 32.02847, 31.90119, 31.54669, 31.57298, 31.60128, 31.61978, 31.45301, 31.63163, 31.37406, 31.48807, 31.27327,
   31.01203, 30.97647, 31.14442, 31.22216, 30.90607, 31.12534, 30.879, 30.82701, 30.80032, 31.12521, 30.6846, 30.78955, 30.56749, 30.75507, 30.78709, 30.19522,
   30.48419, 30.13076, 30.33057, 30.25565, 30.34349, 30.11209, 30.00151, 30.03117, 29.7595, 30.28791, 29.93406, 30.03017, 29.59842, 29.93562, 29.71009, 29.74766,
   29.48782, 29.57479, 29.38855, 29.51102, 29.409, 29.51185, 29.4869, 29.25348, 29.39001, 29.38294, 29.41127, 29.05672, 29.0526, 29.30212, 29.1003, 29.05723,
   28.81862, 29.02999, 28.7319, 28.78099, 28.69965, 28.99779, 28.81687, 28.70286, 28.55504, 28.70979, 28.70061, 28.37393, 28.26891, 28.28143, 28.0746, 28.38723,
   28.03029, 28.58349, 28.14915, 28.26175, 28.23338, 27.86736, 27.80947, 27.75437, 28.36958, 27.74341, 27.98245, 27.68658, 27.44672, 27.54871, 27.59904, 27.57245,
   27.44175, 27.63674, 27.8827, 27.67079, 27.41377, 27.21689, 27.25371, 27.66262, 27.35091, 27.17478, 27.33814, 27.06737, 27.1138, 27.23492, 26.56176, 27.13536,
   27.12951, 26.92767, 26.77923, 27.00664, 26.86855, 26.57705, 27.02025, 26.79911, 26.76183, 26.50546, 26.67982, 26.55781, 26.39139, 26.43972, 26.3384, 26.67146,
   26.28906, 26.0761, 26.31273, 26.66183, 26.00347, 25.9772, 25.94151, 26.25427, 25.97832, 25.79813, 26.09587, 25.52611, 25.84747, 25.70563, 25.82132, 25.50356,
   25.35496, 25.2695, 25.41522, 25.46666, 25.41938, 25.2373, 25.10288, 25.3311, 25.07415, 25.27039, 24.79664, 25.3088, 25.33727, 25.48538, 25.00683, 24.79698,
   25.11591, 24.95743, 24.86731, 24.87963, 24.96547, 24.69447, 24.97857, 24.60399, 24.51019, 24.7691, 24.58511, 24.56563, 24.43697, 24.48755, 24.19251, 24.22425,
   24.19944, 24.21888, 24.08532, 24.22961, 24.1127, 24.01261, 24.13893, 24.02003, 24.32431, 24.02043, 23.97468, 24.27357, 23.91665, 23.76831, 24.04398, 23.51084,
   23.44981, 23.63953, 23.70986, 23.40609, 23.53607, 24.06597, 23.57454, 23.27667, 23.28067, 23.72172, 23.25257, 23.25946, 23.20665, 23.01404, 23.29509, 22.95578,
   23.08329, 22.93779, 23.11174, 23.10408, 23.10944, 22.84839, 22.94519, 23.1342, 22.84032, 23.01904, 22.49548, 22.61558, 22.8763, 22.56506, 22.85508, 22.41998,
   22.35341, 22.39633, 22.40192, 22.20964, 22.32538, 22.03542, 22.33111, 22.41109, 22.30089, 22.32475, 22.08367, 21.92088, 21.84241, 22.23401, 22.17969, 22.04384,
   21.9272, 21.79764, 21.48948, 21.7015, 21.63996, 21.8208, 21.73848, 21.56045, 21.53996, 21.47081, 21.22005, 21.32018, 21.57385, 21.56923, 21.42955, 21.54479,
   21.44281, 21.07941, 21.1856, 21.20367, 20.77755, 20.89891, 20.85597, 20.98203, 20.85166, 20.82628, 20.80834, 20.81245, 20.97986, 20.77221, 21.10836, 21.00865,
   20.83573, 20.20633, 20.724, 20.51786, 20.69944, 20.50782, 20.3156, 20.28307, 19.99618, 20.28821, 20.34528, 20.02378, 20.03148, 19.76158, 20.49886, 20.14823,
   19.55657, 19.75235, 19.9691, 20.08551, 19.95965, 19.79985, 19.78544, 19.99941, 19.89917, 19.84591, 19.54487, 19.44004, 19.76777, 19.65082, 20.12204, 19.30533,
   19.65018, 19.38222, 19.30642, 18.90408, 19.19845, 19.48437, 19.21426, 18.77881, 19.3273, 19.14949, 19.31298, 19.15228, 18.82722, 19.03794, 18.87136, 19.0561,
   18.91675, 18.58571, 18.47242, 18.81417, 18.67565, 18.46228, 18.65215, 18.56668, 18.70615, 18.38877, 18.5135, 18.44254, 18.69855, 18.40912, 18.54274, 18.55374,
   18.39184, 18.07738, 18.2766, 18.08041, 18.35043, 18.085, 17.99406, 18.03032, 18.0699, 18.36977, 18.20193, 17.96733, 17.83612, 17.56923, 17.69759, 18.07947,
   18.1661, 17.76972, 18.02954, 18.14122, 17.88193, 17.3363, 17.5325, 17.88762, 17.52528, 17.59148, 17.48556, 17.22299, 17.34393, 17.52283, 17.51492, 17.08867,
   17.38618, 17.07198, 17.43953, 17.02852, 17.24757, 17.41058, 16.97343, 16.80883, 16.8492, 17.03773, 16.78557, 17.11569, 16.72277, 16.70285, 16.98966, 16.86311,
   16.85065, 16.77468, 16.48186, 16.4476, 16.65826, 16.6141, 16.65079, 16.39479, 16.18787, 16.40984, 16.35488, 16.22525, 16.34278, 16.47204, 16.30945, 16.24745,
   16.351, 16.06313, 16.39994, 16.18157, 16.4786, 16.05294, 15.82798, 15.86726, 16.03566, 15.59747, 15.77951, 15.9357, 15.75638, 16.10053, 15.64822, 15.70906,
   15.98175, 15.70285, 15.8193, 15.44467, 15.57342, 15.44914, 15.49787, 15.84649, 15.44611, 15.56172, 15.62789, 15.52078, 15.50137, 14.99697, 15.11609, 15.7496,
   15.34612, 15.0267, 15.0396, 15.53639, 15.11887, 14.94724, 14.92557, 15.04645, 14.94344, 15.01501, 15.04162, 14.92601, 15.14029, 14.99328, 14.59117, 14.64586,
   14.73426, 14.79872, 14.87464, 14.49953, 14.50283, 14.79976, 14.77239, 14.7455, 14.69361, 14.81833, 14.85003, 14.43505, 14.48062, 14.59085, 14.2695, 14.28006,
   14.28835, 14.16703, 14.15263, 14.22951, 14.61439, 14.36435, 14.40018, 14.13354, 14.09073, 13.84063, 14.13761, 14.25895, 13.8253, 13.699, 14.1187, 13.734,
   14.02261, 13.95926, 13.96774, 13.67516, 13.97267, 13.72216, 13.91642, 13.9833, 14.05658, 13.99773, 13.67679, 13.46368, 13.60279, 13.76692, 13.57474, 13.10065,
   13.57422, 13.44242, 13.27188, 13.47936, 13.58115, 13.46482, 13.51289, 13.14634, 12.99939, 12.99651, 13.45042, 12.89385, 13.25235, 13.20159, 13.0715, 13.01363,
   12.96775, 13.48657, 13.05864, 13.03562, 13.19895, 13.05827, 13.07739, 12.76446, 12.66835, 12.94604, 12.74932, 12.91284, 12.95899, 12.7909, 12.70479, 12.74483,
   12.83596, 12.77817, 12.61803, 12.46246, 12.68135, 12.63545, 12.5174, 12.57123, 12.70004, 12.90615, 12.62944, 12.68383, 12.44577, 12.64411, 12.55689, 12.7886,
   11.91853, 12.58989, 12.42585, 12.19731, 12.08101, 12.0811, 12.27221, 12.598, 12.05206, 12.41807, 12.1859, 12.41723, 12.31981, 12.31276, 12.27803, 12.05979,
   11.86498, 11.56329, 11.78331, 12.17344, 12.11139, 11.97371, 11.80314, 11.67738, 12.18742, 11.85922, 11.61105, 12.03323, 11.93239, 12.03903, 12.01826, 11.87009,
   12.10684, 11.54117, 11.51442, 11.59196, 11.58633, 11.79978, 11.22141, 11.81684, 11.61342, 11.44193, 11.46521, 11.2888, 11.47674, 11.2923, 11.27612, 10.9668,
   10.7768, 10.87047, 11.44832, 11.12622, 11.28915, 11.53231, 11.36708, 11.08787, 10.86403, 11.36293, 11.36941, 11.19967, 11.09692, 10.97547, 10.86475, 11.03068,
   10.71737, 10.99231, 10.78523, 11.15406, 11.03807, 10.73916, 11.06969, 11.14156, 10.8205, 11.20369, 10.40786, 11.00826, 10.93395, 10.69779, 10.64872, 10.75564,
   10.4876, 10.39439, 10.60664, 10.50129, 10.85338, 10.45065, 10.43737, 10.79726, 10.50461, 10.5297, 10.33468, 10.67518, 10.54907, 10.1773, 10.37647, 10.48158,
   10.31304, 10.05326, 10.11487, 10.10798, 10.12777, 10.28391, 10.3777, 10.1684, 10.08123, 10.49126, 10.2203, 10.27984, 10.00857, 9.861007, 9.921638, 10.09009,
   9.991136, 9.894756, 9.997163, 10.0968, 10.10875, 9.752772, 9.793181, 9.68256, 10.09018, 9.855038, 9.71587, 10.16921, 9.640064, 9.82522, 9.829794, 9.61381,
   9.921394, 9.801352, 9.749276, 9.908477, 9.631408, 9.458792, 9.411606, 9.623382, 9.349743, 9.767956, 9.685251, 9.616901, 9.858591, 9.58574, 9.388975, 9.425514,
   9.497997, 9.109215, 9.424642, 9.653367, 9.381333, 9.413632, 9.36692, 9.404075, 9.098318, 9.34605, 9.218883, 9.430101, 9.32821, 9.274092, 9.051248, 9.035755,
   9.140881, 8.725496, 8.902856, 9.285226, 9.189028, 8.740495, 8.7174, 9.238871, 8.958504, 9.087315, 8.813601, 8.659202, 8.750987, 9.339214, 8.814764, 8.885908,
   8.66887, 8.826849, 8.941986, 8.812374, 9.03677, 8.798778, 8.658071, 8.912314, 9.078452, 8.481553, 8.783116, 8.817968, 8.710921, 8.5788, 8.551939, 8.68904,
   8.730044, 8.452668, 8.604682, 8.509014, 8.465985, 8.570431, 8.485559, 8.375919, 8.145928, 8.085124, 8.111416, 8.424426, 8.160967, 8.146615, 8.528325, 8.256694,
   8.613651, 8.483708, 8.300783, 8.327466, 8.590861, 8.17214, 8.076589, 8.369063, 8.220711, 8.371253, 8.269788, 7.692596, 8.124277, 8.379071, 7.818632, 8.061354,
   8.255453, 7.710589, 8.160738, 8.120823, 8.468545, 8.290693, 7.941679 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1023,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1023);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetMinimum(-1487.84);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetMaximum(15512.64);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1023);
   
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
   
   TH1D *data_mc_ratio__24 = new TH1D("data_mc_ratio__24","",1000,0,2000);
   data_mc_ratio__24->SetBinContent(1000,1.221377);
   data_mc_ratio__24->SetBinContent(1001,1.306019);
   data_mc_ratio__24->SetBinError(1000,0.1246563);
   data_mc_ratio__24->SetBinError(1001,0.006932258);
   data_mc_ratio__24->SetMinimum(0.4);
   data_mc_ratio__24->SetMaximum(1.6);
   data_mc_ratio__24->SetEntries(48.48336);
   data_mc_ratio__24->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__24->SetLineColor(ci);
   data_mc_ratio__24->SetLineWidth(2);
   data_mc_ratio__24->SetMarkerStyle(20);
   data_mc_ratio__24->SetMarkerSize(1.2);
   data_mc_ratio__24->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__24->GetXaxis()->SetRange(1,150);
   data_mc_ratio__24->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__24->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__24->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__24->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__24->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__24->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__24->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__24->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__24->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__24->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1024[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1024[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1024[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005485496, 0.005415846, 0.005397577,
   0.005387509, 0.005426153, 0.005439301, 0.005487015, 0.005571261, 0.00563806, 0.005782362, 0.005926423, 0.006065343, 0.006201502, 0.006244995, 0.006318026, 0.006333534, 0.006394533, 0.006484903, 0.006443001,
   0.006416264, 0.006463324, 0.006459235, 0.006453582, 0.006475722, 0.006530752, 0.006589074, 0.006585239, 0.006626823, 0.006643865, 0.006718925, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1010394 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1024,Graph_from_mc_statistical_error_fy1024,Graph_from_mc_statistical_error_fex1024,Graph_from_mc_statistical_error_fey1024);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1024 = new TH1F("Graph_Graph_from_mc_statistical_error1024","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1024->SetMinimum(0.8787527);
   Graph_Graph_from_mc_statistical_error1024->SetMaximum(1.121247);
   Graph_Graph_from_mc_statistical_error1024->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1024->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1024->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1024);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->Modified();
   Z_mass_tagFirst_SR_16->cd();
   Z_mass_tagFirst_SR_16->SetSelected(Z_mass_tagFirst_SR_16);
}
