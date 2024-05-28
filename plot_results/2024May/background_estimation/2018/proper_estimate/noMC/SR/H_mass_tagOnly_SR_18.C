#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tagOnly_SR_18()
{
//=========Macro generated from canvas: H_mass_tagOnly_SR_18/H_mass_tagOnly_SR_18
//=========  (Tue May 28 14:46:57 2024) by ROOT version 6.28/10
   TCanvas *H_mass_tagOnly_SR_18 = new TCanvas("H_mass_tagOnly_SR_18", "H_mass_tagOnly_SR_18",0,0,600,600);
   H_mass_tagOnly_SR_18->SetHighLightColor(2);
   H_mass_tagOnly_SR_18->Range(0,0,1,1);
   H_mass_tagOnly_SR_18->SetFillColor(0);
   H_mass_tagOnly_SR_18->SetFillStyle(4000);
   H_mass_tagOnly_SR_18->SetBorderMode(0);
   H_mass_tagOnly_SR_18->SetBorderSize(2);
   H_mass_tagOnly_SR_18->SetFrameFillStyle(1000);
   H_mass_tagOnly_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-22.80968,315.7258,22796.87);
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
   st->SetMaximum(20514.9);
   
   TH1F *st_stack_4 = new TH1F("st_stack_4","",1000,0,2000);
   st_stack_4->SetMinimum(0.01);
   st_stack_4->SetMaximum(20514.9);
   st_stack_4->SetDirectory(nullptr);
   st_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_4->SetLineColor(ci);
   st_stack_4->SetLineWidth(0);
   st_stack_4->GetXaxis()->SetRange(1,150);
   st_stack_4->GetXaxis()->SetLabelFont(42);
   st_stack_4->GetXaxis()->SetTitleOffset(1);
   st_stack_4->GetXaxis()->SetTitleFont(42);
   st_stack_4->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_4->GetYaxis()->SetLabelFont(42);
   st_stack_4->GetYaxis()->SetLabelSize(0.05);
   st_stack_4->GetYaxis()->SetTitleSize(0.057);
   st_stack_4->GetYaxis()->SetTitleOffset(1.2);
   st_stack_4->GetYaxis()->SetTitleFont(42);
   st_stack_4->GetZaxis()->SetLabelFont(42);
   st_stack_4->GetZaxis()->SetTitleOffset(1);
   st_stack_4->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_4);
   
   
   TH1D *VH_tagOnly_2b1c_H_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(48,4255.312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(49,8856.065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(50,8894.301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(51,9058.447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(52,8929.526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(53,8836.654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(54,9092.89);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(55,9142.225);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(56,9030.125);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(57,9231.704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(58,9119.656);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(59,9133.943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(60,9099.204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(61,9109.761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(62,9068.602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(63,9061.384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(64,9027.08);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(65,9046.497);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(66,9108.778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(67,9135.895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(68,9137.662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(69,9111.064);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(70,9012.544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(71,8947.655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(72,8893.886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(73,8918.594);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(74,8995.345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(75,8978.318);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(76,9010.442);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(77,8850.375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(78,4400.753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1000,51.18006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinContent(1001,30058.3);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(5,0.02619059);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(6,0.350487);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(7,0.02454911);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(8,0.04155514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(9,0.1065896);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(10,0.06076935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(11,0.6145919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(12,1.817099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(13,4.943327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(14,8.332229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(15,12.65326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(16,16.84194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(17,21.14313);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(18,25.33436);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(19,29.94887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(20,34.3467);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(21,38.03412);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(22,41.84205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(23,45.94539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(24,48.72018);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(25,51.56544);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(26,54.67204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(27,56.52898);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(28,58.74616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(29,60.91482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(30,62.40998);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(31,63.63608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(32,64.86623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(33,67.25949);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(34,66.72767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(35,67.81968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(36,67.95028);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(37,69.28494);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(38,69.89737);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(39,71.58937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(40,72.20357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(41,71.86763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(42,71.72806);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(43,71.10495);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(44,70.79988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(45,73.1078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(46,70.09991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(47,68.92761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(48,67.81774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(49,67.54513);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(50,67.3947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(51,66.89547);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(52,65.81466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(53,65.63677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(54,65.90328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(55,65.51057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(56,65.00213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(57,66.21697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(58,65.70425);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(59,64.77595);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(60,65.00924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(61,64.96661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(62,64.95169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(63,64.21373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(64,64.29398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(65,63.94582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(66,64.62503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(67,64.20358);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(68,64.17184);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(69,64.22108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(70,63.81941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(71,63.45218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(72,64.20087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(73,63.66936);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(74,63.2667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(75,63.35032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(76,63.94518);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(77,62.72704);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(78,63.46395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(79,62.41508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(80,62.44627);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(81,62.34001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(82,62.47047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(83,61.99964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(84,61.88053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(85,61.38503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(86,61.79746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(87,61.41915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(88,61.85344);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(89,60.923);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(90,62.3001);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(91,60.66017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(92,60.59025);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(93,60.68002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(94,60.4041);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(95,59.93661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(96,59.88403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(97,59.49827);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(98,59.43672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(99,59.72555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(100,59.14528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(101,59.09352);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(102,58.53557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(103,58.13551);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(104,58.32607);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(105,58.44682);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(106,57.96387);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(107,57.6264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(108,57.44493);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(109,57.27964);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(110,56.85922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(111,56.82087);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(112,57.36256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(113,56.40065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(114,57.17601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(115,57.29886);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(116,55.75253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(117,55.49042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(118,55.34525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(119,55.5375);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(120,55.07792);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(121,54.87845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(122,55.72094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(123,54.70703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(124,55.24634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(125,55.19816);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(126,54.26199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(127,53.97738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(128,53.51263);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(129,55.89633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(130,53.35629);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(131,53.42572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(132,53.03248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(133,52.83405);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(134,52.74634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(135,53.63076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(136,52.35307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(137,52.1281);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(138,52.40509);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(139,52.17221);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(140,51.79988);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(141,52.17212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(142,51.81959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(143,51.76439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(144,51.40927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(145,51.31855);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(146,51.32975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(147,51.22096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(148,51.09438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(149,50.79004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(150,50.55663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(151,51.44585);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(152,50.18373);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(153,49.72801);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(154,50.08746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(155,50.69828);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(156,49.7183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(157,49.81856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(158,49.48552);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(159,49.44347);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(160,49.55648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(161,48.94379);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(162,49.12614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(163,48.92929);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(164,48.77903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(165,49.06604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(166,48.45456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(167,48.38745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(168,48.81435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(169,48.23203);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(170,48.01874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(171,48.27508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(172,47.81323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(173,48.26165);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(174,47.3096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(175,47.44856);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(176,47.40447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(177,47.61474);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(178,47.00848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(179,46.88289);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(180,47.08378);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(181,46.53386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(182,46.88322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(183,46.4523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(184,46.69514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(185,46.2782);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(186,46.29334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(187,45.96303);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(188,45.72414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(189,45.84448);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(190,46.17009);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(191,45.78183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(192,45.59667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(193,45.95131);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(194,45.61297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(195,45.54418);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(196,45.12795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(197,45.42095);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(198,45.08655);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(199,45.56529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(200,44.83401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(201,44.50913);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(202,45.23307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(203,44.5592);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(204,44.3919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(205,44.42429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(206,44.58712);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(207,44.05609);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(208,45.2601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(209,43.60982);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(210,43.68625);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(211,43.97194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(212,43.60822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(213,43.47582);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(214,43.56622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(215,43.40975);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(216,43.46076);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(217,44.38873);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(218,42.80251);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(219,43.25798);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(220,43.03284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(221,43.31228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(222,43.12781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(223,43.23211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(224,50.08235);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(225,42.34579);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(226,42.2883);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(227,42.30126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(228,42.2253);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(229,41.84432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(230,41.93434);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(231,42.58069);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(232,41.91912);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(233,41.98216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(234,41.78535);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(235,41.9407);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(236,41.51698);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(237,41.37897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(238,41.40109);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(239,41.02601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(240,41.2326);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(241,41.21865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(242,40.84395);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(243,41.24014);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(244,40.57145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(245,40.55404);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(246,40.70104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(247,40.37147);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(248,41.17753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(249,40.36576);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(250,40.2249);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(251,40.41308);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(252,40.42208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(253,39.91837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(254,39.90708);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(255,40.43274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(256,39.85386);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(257,39.65933);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(258,39.81046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(259,39.34174);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(260,39.2107);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(261,39.63574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(262,39.03222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(263,39.64879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(264,39.04323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(265,39.1212);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(266,38.88213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(267,39.31636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(268,38.59955);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(269,38.5701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(270,38.36169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(271,38.18755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(272,38.40237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(273,38.4186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(274,43.922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(275,38.07532);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(276,37.95031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(277,38.10074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(278,37.80468);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(279,37.71334);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(280,38.58606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(281,37.81);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(282,37.24767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(283,38.00678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(284,37.50874);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(285,37.54415);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(286,37.11969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(287,37.21916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(288,36.84051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(289,37.13584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(290,37.04476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(291,36.46927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(292,36.92368);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(293,36.62545);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(294,36.5213);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(295,36.62498);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(296,35.98577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(297,36.23424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(298,36.33204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(299,35.73586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(300,35.98523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(301,35.85948);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(302,35.86094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(303,35.8602);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(304,35.98132);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(305,35.4254);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(306,35.7633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(307,35.67787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(308,35.27922);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(309,35.39126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(310,35.25441);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(311,34.90172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(312,34.52406);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(313,34.85022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(314,35.38478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(315,34.96924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(316,34.63);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(317,34.52769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(318,34.80508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(319,34.16701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(320,34.75261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(321,33.93539);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(322,33.90193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(323,33.82382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(324,34.24879);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(325,34.00795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(326,33.59514);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(327,33.85906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(328,33.60331);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(329,33.5991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(330,33.52839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(331,33.47622);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(332,33.40198);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(333,33.4529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(334,32.85937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(335,33.09413);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(336,32.5563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(337,33.34895);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(338,32.28621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(339,32.85526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(340,32.4302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(341,32.59135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(342,32.51191);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(343,32.37884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(344,32.3947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(345,32.38943);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(346,33.01286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(347,32.44201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(348,32.23206);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(349,32.22616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(350,31.49542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(351,32.26699);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(352,31.81266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(353,31.79578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(354,31.31291);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(355,31.2971);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(356,31.70446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(357,32.3198);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(358,31.36247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(359,31.33706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(360,30.95066);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(361,31.14562);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(362,31.78637);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(363,31.05115);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(364,31.044);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(365,30.99706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(366,30.53312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(367,30.47312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(368,30.6781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(369,30.73662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(370,30.41645);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(371,30.19701);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(372,29.97);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(373,30.23302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(374,30.42414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(375,30.11632);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(376,30.12419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(377,30.05179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(378,29.94369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(379,30.1223);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(380,29.69795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(381,29.74604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(382,29.89907);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(383,29.29422);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(384,29.435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(385,29.50476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(386,29.22032);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(387,29.22103);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(388,29.03763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(389,29.15408);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(390,28.80821);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(391,28.81129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(392,28.86546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(393,29.20272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(394,28.88479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(395,28.45556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(396,28.51848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(397,34.13669);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(398,28.23527);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(399,28.16443);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(400,27.8915);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(401,28.00488);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(402,28.09623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(403,28.12222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(404,27.96204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(405,27.64903);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(406,28.03525);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(407,28.18293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(408,27.68599);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(409,27.39787);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(410,27.25541);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(411,27.38058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(412,27.59398);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(413,27.76863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(414,27.46871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(415,27.42892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(416,27.11492);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(417,27.06583);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(418,27.08067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(419,26.96124);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(420,27.01175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(421,26.85284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(422,27.08572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(423,26.50478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(424,26.42633);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(425,26.52454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(426,26.35824);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(427,26.28476);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(428,26.43057);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(429,26.29256);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(430,25.65377);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(431,26.39359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(432,26.15236);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(433,25.68);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(434,25.92411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(435,26.09245);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(436,26.18167);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(437,25.72306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(438,26.54201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(439,25.58717);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(440,25.46795);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(441,25.17529);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(442,25.49148);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(443,25.25818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(444,25.31526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(445,25.42612);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(446,25.02093);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(447,25.24538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(448,25.19388);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(449,25.01697);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(450,24.92672);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(451,25.00976);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(452,24.96205);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(453,24.62555);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(454,24.40456);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(455,24.59887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(456,24.66247);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(457,24.60863);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(458,24.52022);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(459,24.07183);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(460,25.25646);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(461,23.96553);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(462,24.15403);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(463,24.26993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(464,24.17577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(465,23.98667);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(466,23.93959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(467,24.02036);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(468,23.70866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(469,23.81459);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(470,23.83568);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(471,23.65236);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(472,23.57661);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(473,23.5956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(474,42.61761);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(475,23.35359);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(476,24.44304);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(477,23.5785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(478,23.4169);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(479,23.30765);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(480,23.5563);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(481,23.34531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(482,23.06363);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(483,23.24447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(484,23.26202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(485,22.90979);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(486,23.04154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(487,22.59808);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(488,23.07624);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(489,22.48361);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(490,22.99269);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(491,22.48392);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(492,22.67958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(493,22.83769);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(494,22.64331);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(495,22.42469);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(496,22.09175);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(497,23.21137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(498,22.08965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(499,22.2439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(500,22.51004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(501,22.08751);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(502,22.26791);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(503,21.97286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(504,22.06108);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(505,21.65542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(506,21.8999);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(507,21.64683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(508,21.66294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(509,21.39935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(510,21.97282);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(511,21.79017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(512,21.21004);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(513,21.34012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(514,21.07045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(515,21.4166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(516,21.09383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(517,21.19958);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(518,20.79557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(519,20.84002);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(520,20.72899);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(521,21.97323);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(522,21.05689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(523,21.00884);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(524,20.65046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(525,20.43016);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(526,20.5503);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(527,20.86188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(528,20.32499);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(529,20.6252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(530,20.52439);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(531,20.35924);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(532,20.54234);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(533,20.55653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(534,20.23538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(535,20.11574);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(536,20.26401);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(537,20.41567);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(538,20.17838);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(539,20.53446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(540,19.94848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(541,19.92243);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(542,19.82916);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(543,20.18454);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(544,19.68037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(545,20.18372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(546,19.78694);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(547,19.90546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(548,20.46271);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(549,19.7101);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(550,19.40216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(551,19.40154);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(552,19.75043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(553,19.3774);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(554,19.43438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(555,18.92871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(556,19.00604);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(557,19.28659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(558,18.85226);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(559,19.33162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(560,19.27528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(561,19.24319);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(562,19.14019);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(563,18.93383);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(564,18.92665);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(565,18.87745);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(566,18.80464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(567,18.71584);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(568,18.59462);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(569,19.16078);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(570,18.87862);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(571,18.50662);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(572,18.71919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(573,18.63219);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(574,20.05172);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(575,18.42953);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(576,18.22446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(577,18.38146);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(578,18.26357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(579,18.31969);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(580,18.1674);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(581,18.20104);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(582,17.99239);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(583,18.20736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(584,17.8688);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(585,18.31927);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(586,18.26663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(587,17.89047);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(588,18.10628);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(589,18.01616);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(590,17.79152);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(591,17.51171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(592,18.3156);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(593,17.87188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(594,17.82473);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(595,17.58901);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(596,17.61307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(597,17.71163);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(598,17.28588);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(599,17.17482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(600,17.71348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(601,16.96138);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(602,17.27556);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(603,17.03486);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(604,17.23519);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(605,16.98011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(606,17.15589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(607,17.36941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(608,17.01091);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(609,16.97129);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(610,16.9286);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(611,16.78435);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(612,17.04726);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(613,16.92327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(614,16.93199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(615,17.5843);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(616,16.86343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(617,16.99962);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(618,16.77746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(619,16.53061);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(620,16.5371);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(621,16.36606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(622,16.42211);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(623,16.64096);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(624,16.16479);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(625,16.41128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(626,16.58128);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(627,16.43528);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(628,16.68472);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(629,15.89738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(630,16.25736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(631,16.1666);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(632,15.97207);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(633,16.30312);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(634,15.5685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(635,15.79482);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(636,16.04423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(637,15.99639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(638,15.78744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(639,16.01819);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(640,15.78566);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(641,15.67162);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(642,15.7438);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(643,15.74292);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(644,15.54031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(645,15.61783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(646,15.59506);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(647,15.71781);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(648,15.39597);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(649,15.24143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(650,15.55369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(651,15.52142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(652,15.40296);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(653,15.40328);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(654,15.30978);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(655,14.78262);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(656,15.0839);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(657,15.07365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(658,15.06631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(659,15.09515);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(660,15.60841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(661,15.07074);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(662,15.19534);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(663,15.26424);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(664,14.87613);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(665,14.59411);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(666,14.89608);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(667,14.74153);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(668,14.73166);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(669,15.28288);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(670,14.77639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(671,14.60755);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(672,14.54619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(673,14.73042);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(674,14.80199);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(675,14.71252);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(676,14.32306);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(677,14.88008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(678,14.15875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(679,14.4772);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(680,14.11723);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(681,14.17329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(682,14.09369);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(683,14.2151);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(684,14.31201);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(685,14.07423);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(686,14.26623);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(687,14.04993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(688,14.00643);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(689,14.21094);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(690,14.26302);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(691,14.12968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(692,13.83186);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(693,14.06836);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(694,13.83736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(695,13.85654);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(696,13.95327);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(697,14.12242);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(698,13.87055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(699,13.78348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(700,13.6208);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(701,13.41266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(702,13.82202);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(703,13.52848);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(704,13.58767);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(705,13.45508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(706,13.38536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(707,13.64432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(708,13.31841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(709,13.11118);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(710,13.453);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(711,13.73402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(712,13.09732);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(713,13.53941);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(714,13.5871);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(715,13.35746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(716,13.26685);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(717,13.12785);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(718,13.75037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(719,13.31343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(720,13.22102);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(721,13.17689);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(722,12.90231);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(723,13.0867);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(724,12.91037);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(725,13.14664);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(726,13.1511);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(727,12.89504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(728,12.95932);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(729,12.66994);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(730,12.97866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(731,12.70081);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(732,12.92218);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(733,12.39652);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(734,12.80426);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(735,12.80875);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(736,12.81204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(737,12.34589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(738,12.91012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(739,12.66648);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(740,12.66736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(741,12.56645);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(742,12.601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(743,12.12017);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(744,12.42045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(745,12.35593);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(746,12.23841);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(747,12.29126);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(748,11.97437);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(749,12.41859);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(750,12.55957);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(751,11.99601);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(752,12.58653);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(753,11.84177);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(754,12.28111);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(755,11.99762);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(756,12.11621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(757,12.15237);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(758,12.25753);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(759,12.00419);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(760,12.16006);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(761,11.97757);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(762,11.95229);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(763,11.76965);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(764,11.90396);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(765,11.64586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(766,11.74082);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(767,11.67963);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(768,11.68508);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(769,11.71193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(770,11.67997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(771,11.56179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(772,11.75272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(773,12.02329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(774,11.75158);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(775,11.7343);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(776,11.33046);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(777,11.5926);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(778,11.1414);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(779,11.81008);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(780,11.89194);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(781,11.50968);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(782,11.42478);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(783,11.87861);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(784,11.48989);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(785,11.41526);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(786,11.12671);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(787,10.76822);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(788,11.26603);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(789,11.30224);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(790,11.04558);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(791,11.09068);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(792,10.91736);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(793,10.91764);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(794,11.09117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(795,10.74248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(796,12.39248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(797,10.7053);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(798,11.03542);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(799,12.13193);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(800,10.89889);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(801,10.89365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(802,11.0179);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(803,11.0746);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(804,10.86216);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(805,10.95619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(806,10.8294);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(807,10.62919);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(808,10.91446);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(809,11.21227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(810,10.50906);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(811,10.54849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(812,10.88779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(813,10.47117);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(814,10.65336);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(815,10.30557);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(816,10.38228);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(817,10.64011);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(818,10.55123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(819,10.10085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(820,10.53432);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(821,10.67274);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(822,10.36214);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(823,10.24881);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(824,10.26818);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(825,10.49067);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(826,10.20301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(827,10.16947);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(828,10.37984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(829,10.24619);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(830,10.67338);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(831,10.28577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(832,10.44348);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(833,10.32402);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(834,10.07749);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(835,9.9337);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(836,10.01849);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(837,9.974273);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(838,10.17639);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(839,10.08055);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(840,10.06073);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(841,10.08984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(842,9.905464);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(843,10.01085);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(844,9.993868);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(845,10.36696);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(846,9.856325);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(847,9.925587);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(848,9.605991);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(849,9.868084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(850,9.707837);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(851,9.791961);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(852,9.51577);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(853,9.479451);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(854,9.91536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(855,9.890977);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(856,9.778533);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(857,9.531372);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(858,9.60984);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(859,9.443845);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(860,9.511683);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(861,9.907813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(862,9.432317);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(863,9.545116);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(864,9.174277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(865,9.403309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(866,9.516954);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(867,9.525384);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(868,9.114077);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(869,9.127677);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(870,9.38892);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(871,9.367634);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(872,9.264012);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(873,9.074197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(874,9.348586);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(875,9.12365);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(876,9.273189);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(877,9.039987);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(878,8.934357);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(879,9.184722);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(880,9.107578);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(881,9.185264);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(882,9.46847);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(883,9.188075);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(884,8.96744);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(885,9.122227);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(886,8.93098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(887,8.886857);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(888,9.247139);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(889,8.663248);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(890,8.732382);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(891,9.006887);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(892,8.699813);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(893,9.150806);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(894,8.735376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(895,8.951763);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(896,8.907197);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(897,8.97812);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(898,8.986397);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(899,8.305538);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(900,8.57043);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(901,8.634161);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(902,8.59775);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(903,8.774188);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(904,8.864322);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(905,8.746266);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(906,8.552145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(907,8.791007);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(908,8.632329);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(909,8.529589);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(910,8.322366);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(911,8.397333);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(912,8.403272);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(913,8.651738);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(914,8.686301);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(915,8.629031);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(916,8.471572);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(917,8.42204);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(918,8.679663);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(919,8.236173);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(920,8.583353);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(921,8.284261);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(922,8.217959);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(923,8.470536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(924,8.170058);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(925,7.908537);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(926,8.078084);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(927,8.517145);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(928,8.295376);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(929,8.53897);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(930,8.253307);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(931,8.246098);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(932,8.01019);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(933,8.347631);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(934,8.333536);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(935,8.170779);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(936,8.430222);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(937,8.264866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(938,8.090052);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(939,7.962137);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(940,7.906783);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(941,8.388706);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(942,7.758531);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(943,7.891045);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(944,7.952305);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(945,8.009477);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(946,8.110065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(947,7.874678);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(948,7.996484);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(949,8.019935);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(950,8.092866);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(951,7.886135);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(952,7.646449);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(953,7.790569);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(954,7.921079);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(955,7.56937);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(956,7.755521);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(957,7.765052);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(958,7.690123);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(959,8.458956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(960,7.703523);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(961,7.667187);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(962,7.703504);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(963,7.491703);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(964,7.5614);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(965,7.668725);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(966,7.641309);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(967,7.639429);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(968,7.438345);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(969,7.47284);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(970,7.413621);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(971,7.572134);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(972,7.470293);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(973,7.522606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(974,7.234142);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(975,7.463277);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(976,7.26615);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(977,7.296778);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(978,7.466815);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(979,6.905466);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(980,7.382501);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(981,7.781143);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(982,7.168065);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(983,7.238636);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(984,7.288546);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(985,7.373598);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(986,7.417606);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(987,7.198305);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(988,7.003447);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(989,7.05865);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(990,7.585051);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(991,7.199553);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(992,7.233956);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(993,7.371659);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(994,7.201295);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(995,7.008099);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(996,7.306171);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(997,6.750391);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(998,7.127993);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(999,7.218938);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1000,7.056297);
   VH_tagOnly_2b1c_H_mass_stack_1->SetBinError(1001,112.0997);
   VH_tagOnly_2b1c_H_mass_stack_1->SetEntries(4885736);

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
   
   TH1D *VH_tagOnly_H_mass__7 = new TH1D("VH_tagOnly_H_mass__7","",1000,0,2000);
   VH_tagOnly_H_mass__7->SetBinContent(1000,75);
   VH_tagOnly_H_mass__7->SetBinContent(1001,38939);
   VH_tagOnly_H_mass__7->SetEntries(2827694);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_mass__7->SetLineColor(ci);
   VH_tagOnly_H_mass__7->SetLineWidth(2);
   VH_tagOnly_H_mass__7->SetMarkerStyle(20);
   VH_tagOnly_H_mass__7->SetMarkerSize(1.2);
   VH_tagOnly_H_mass__7->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_H_mass__7->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__7->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__7->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__7->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__7->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__7->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_mass__7->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_mass__7->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_mass__7->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fx1007[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fy1007[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4255.312, 8856.065,
   8894.301, 9058.447, 8929.526, 8836.654, 9092.89, 9142.225, 9030.125, 9231.704, 9119.656, 9133.943, 9099.204, 9109.761, 9068.602, 9061.384, 9027.08, 9046.497,
   9108.778, 9135.895, 9137.662, 9111.064, 9012.544, 8947.655, 8893.886, 8918.594, 8995.345, 8978.318, 9010.442, 8850.375, 4400.753, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 51.18006 };
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fex1007[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_H_mass_fey1007[1000] = { 0, 0, 0, 0, 0.02619059, 0.350487, 0.02454911, 0.04155514, 0.1065896, 0.06076935, 0.6145919, 1.817099, 4.943327, 8.332229, 12.65326, 16.84194, 21.14313,
   25.33436, 29.94887, 34.3467, 38.03412, 41.84205, 45.94539, 48.72018, 51.56544, 54.67204, 56.52898, 58.74616, 60.91482, 62.40998, 63.63608, 64.86623, 67.25949,
   66.72767, 67.81968, 67.95028, 69.28494, 69.89737, 71.58937, 72.20357, 71.86763, 71.72806, 71.10495, 70.79988, 73.1078, 70.09991, 68.92761, 67.81774, 67.54513,
   67.3947, 66.89547, 65.81466, 65.63677, 65.90328, 65.51057, 65.00213, 66.21697, 65.70425, 64.77595, 65.00924, 64.96661, 64.95169, 64.21373, 64.29398, 63.94582,
   64.62503, 64.20358, 64.17184, 64.22108, 63.81941, 63.45218, 64.20087, 63.66936, 63.2667, 63.35032, 63.94518, 62.72704, 63.46395, 62.41508, 62.44627, 62.34001,
   62.47047, 61.99964, 61.88053, 61.38503, 61.79746, 61.41915, 61.85344, 60.923, 62.3001, 60.66017, 60.59025, 60.68002, 60.4041, 59.93661, 59.88403, 59.49827,
   59.43672, 59.72555, 59.14528, 59.09352, 58.53557, 58.13551, 58.32607, 58.44682, 57.96387, 57.6264, 57.44493, 57.27964, 56.85922, 56.82087, 57.36256, 56.40065,
   57.17601, 57.29886, 55.75253, 55.49042, 55.34525, 55.5375, 55.07792, 54.87845, 55.72094, 54.70703, 55.24634, 55.19816, 54.26199, 53.97738, 53.51263, 55.89633,
   53.35629, 53.42572, 53.03248, 52.83405, 52.74634, 53.63076, 52.35307, 52.1281, 52.40509, 52.17221, 51.79988, 52.17212, 51.81959, 51.76439, 51.40927, 51.31855,
   51.32975, 51.22096, 51.09438, 50.79004, 50.55663, 51.44585, 50.18373, 49.72801, 50.08746, 50.69828, 49.7183, 49.81856, 49.48552, 49.44347, 49.55648, 48.94379,
   49.12614, 48.92929, 48.77903, 49.06604, 48.45456, 48.38745, 48.81435, 48.23203, 48.01874, 48.27508, 47.81323, 48.26165, 47.3096, 47.44856, 47.40447, 47.61474,
   47.00848, 46.88289, 47.08378, 46.53386, 46.88322, 46.4523, 46.69514, 46.2782, 46.29334, 45.96303, 45.72414, 45.84448, 46.17009, 45.78183, 45.59667, 45.95131,
   45.61297, 45.54418, 45.12795, 45.42095, 45.08655, 45.56529, 44.83401, 44.50913, 45.23307, 44.5592, 44.3919, 44.42429, 44.58712, 44.05609, 45.2601, 43.60982,
   43.68625, 43.97194, 43.60822, 43.47582, 43.56622, 43.40975, 43.46076, 44.38873, 42.80251, 43.25798, 43.03284, 43.31228, 43.12781, 43.23211, 50.08235, 42.34579,
   42.2883, 42.30126, 42.2253, 41.84432, 41.93434, 42.58069, 41.91912, 41.98216, 41.78535, 41.9407, 41.51698, 41.37897, 41.40109, 41.02601, 41.2326, 41.21865,
   40.84395, 41.24014, 40.57145, 40.55404, 40.70104, 40.37147, 41.17753, 40.36576, 40.2249, 40.41308, 40.42208, 39.91837, 39.90708, 40.43274, 39.85386, 39.65933,
   39.81046, 39.34174, 39.2107, 39.63574, 39.03222, 39.64879, 39.04323, 39.1212, 38.88213, 39.31636, 38.59955, 38.5701, 38.36169, 38.18755, 38.40237, 38.4186,
   43.922, 38.07532, 37.95031, 38.10074, 37.80468, 37.71334, 38.58606, 37.81, 37.24767, 38.00678, 37.50874, 37.54415, 37.11969, 37.21916, 36.84051, 37.13584,
   37.04476, 36.46927, 36.92368, 36.62545, 36.5213, 36.62498, 35.98577, 36.23424, 36.33204, 35.73586, 35.98523, 35.85948, 35.86094, 35.8602, 35.98132, 35.4254,
   35.7633, 35.67787, 35.27922, 35.39126, 35.25441, 34.90172, 34.52406, 34.85022, 35.38478, 34.96924, 34.63, 34.52769, 34.80508, 34.16701, 34.75261, 33.93539,
   33.90193, 33.82382, 34.24879, 34.00795, 33.59514, 33.85906, 33.60331, 33.5991, 33.52839, 33.47622, 33.40198, 33.4529, 32.85937, 33.09413, 32.5563, 33.34895,
   32.28621, 32.85526, 32.4302, 32.59135, 32.51191, 32.37884, 32.3947, 32.38943, 33.01286, 32.44201, 32.23206, 32.22616, 31.49542, 32.26699, 31.81266, 31.79578,
   31.31291, 31.2971, 31.70446, 32.3198, 31.36247, 31.33706, 30.95066, 31.14562, 31.78637, 31.05115, 31.044, 30.99706, 30.53312, 30.47312, 30.6781, 30.73662,
   30.41645, 30.19701, 29.97, 30.23302, 30.42414, 30.11632, 30.12419, 30.05179, 29.94369, 30.1223, 29.69795, 29.74604, 29.89907, 29.29422, 29.435, 29.50476,
   29.22032, 29.22103, 29.03763, 29.15408, 28.80821, 28.81129, 28.86546, 29.20272, 28.88479, 28.45556, 28.51848, 34.13669, 28.23527, 28.16443, 27.8915, 28.00488,
   28.09623, 28.12222, 27.96204, 27.64903, 28.03525, 28.18293, 27.68599, 27.39787, 27.25541, 27.38058, 27.59398, 27.76863, 27.46871, 27.42892, 27.11492, 27.06583,
   27.08067, 26.96124, 27.01175, 26.85284, 27.08572, 26.50478, 26.42633, 26.52454, 26.35824, 26.28476, 26.43057, 26.29256, 25.65377, 26.39359, 26.15236, 25.68,
   25.92411, 26.09245, 26.18167, 25.72306, 26.54201, 25.58717, 25.46795, 25.17529, 25.49148, 25.25818, 25.31526, 25.42612, 25.02093, 25.24538, 25.19388, 25.01697,
   24.92672, 25.00976, 24.96205, 24.62555, 24.40456, 24.59887, 24.66247, 24.60863, 24.52022, 24.07183, 25.25646, 23.96553, 24.15403, 24.26993, 24.17577, 23.98667,
   23.93959, 24.02036, 23.70866, 23.81459, 23.83568, 23.65236, 23.57661, 23.5956, 42.61761, 23.35359, 24.44304, 23.5785, 23.4169, 23.30765, 23.5563, 23.34531,
   23.06363, 23.24447, 23.26202, 22.90979, 23.04154, 22.59808, 23.07624, 22.48361, 22.99269, 22.48392, 22.67958, 22.83769, 22.64331, 22.42469, 22.09175, 23.21137,
   22.08965, 22.2439, 22.51004, 22.08751, 22.26791, 21.97286, 22.06108, 21.65542, 21.8999, 21.64683, 21.66294, 21.39935, 21.97282, 21.79017, 21.21004, 21.34012,
   21.07045, 21.4166, 21.09383, 21.19958, 20.79557, 20.84002, 20.72899, 21.97323, 21.05689, 21.00884, 20.65046, 20.43016, 20.5503, 20.86188, 20.32499, 20.6252,
   20.52439, 20.35924, 20.54234, 20.55653, 20.23538, 20.11574, 20.26401, 20.41567, 20.17838, 20.53446, 19.94848, 19.92243, 19.82916, 20.18454, 19.68037, 20.18372,
   19.78694, 19.90546, 20.46271, 19.7101, 19.40216, 19.40154, 19.75043, 19.3774, 19.43438, 18.92871, 19.00604, 19.28659, 18.85226, 19.33162, 19.27528, 19.24319,
   19.14019, 18.93383, 18.92665, 18.87745, 18.80464, 18.71584, 18.59462, 19.16078, 18.87862, 18.50662, 18.71919, 18.63219, 20.05172, 18.42953, 18.22446, 18.38146,
   18.26357, 18.31969, 18.1674, 18.20104, 17.99239, 18.20736, 17.8688, 18.31927, 18.26663, 17.89047, 18.10628, 18.01616, 17.79152, 17.51171, 18.3156, 17.87188,
   17.82473, 17.58901, 17.61307, 17.71163, 17.28588, 17.17482, 17.71348, 16.96138, 17.27556, 17.03486, 17.23519, 16.98011, 17.15589, 17.36941, 17.01091, 16.97129,
   16.9286, 16.78435, 17.04726, 16.92327, 16.93199, 17.5843, 16.86343, 16.99962, 16.77746, 16.53061, 16.5371, 16.36606, 16.42211, 16.64096, 16.16479, 16.41128,
   16.58128, 16.43528, 16.68472, 15.89738, 16.25736, 16.1666, 15.97207, 16.30312, 15.5685, 15.79482, 16.04423, 15.99639, 15.78744, 16.01819, 15.78566, 15.67162,
   15.7438, 15.74292, 15.54031, 15.61783, 15.59506, 15.71781, 15.39597, 15.24143, 15.55369, 15.52142, 15.40296, 15.40328, 15.30978, 14.78262, 15.0839, 15.07365,
   15.06631, 15.09515, 15.60841, 15.07074, 15.19534, 15.26424, 14.87613, 14.59411, 14.89608, 14.74153, 14.73166, 15.28288, 14.77639, 14.60755, 14.54619, 14.73042,
   14.80199, 14.71252, 14.32306, 14.88008, 14.15875, 14.4772, 14.11723, 14.17329, 14.09369, 14.2151, 14.31201, 14.07423, 14.26623, 14.04993, 14.00643, 14.21094,
   14.26302, 14.12968, 13.83186, 14.06836, 13.83736, 13.85654, 13.95327, 14.12242, 13.87055, 13.78348, 13.6208, 13.41266, 13.82202, 13.52848, 13.58767, 13.45508,
   13.38536, 13.64432, 13.31841, 13.11118, 13.453, 13.73402, 13.09732, 13.53941, 13.5871, 13.35746, 13.26685, 13.12785, 13.75037, 13.31343, 13.22102, 13.17689,
   12.90231, 13.0867, 12.91037, 13.14664, 13.1511, 12.89504, 12.95932, 12.66994, 12.97866, 12.70081, 12.92218, 12.39652, 12.80426, 12.80875, 12.81204, 12.34589,
   12.91012, 12.66648, 12.66736, 12.56645, 12.601, 12.12017, 12.42045, 12.35593, 12.23841, 12.29126, 11.97437, 12.41859, 12.55957, 11.99601, 12.58653, 11.84177,
   12.28111, 11.99762, 12.11621, 12.15237, 12.25753, 12.00419, 12.16006, 11.97757, 11.95229, 11.76965, 11.90396, 11.64586, 11.74082, 11.67963, 11.68508, 11.71193,
   11.67997, 11.56179, 11.75272, 12.02329, 11.75158, 11.7343, 11.33046, 11.5926, 11.1414, 11.81008, 11.89194, 11.50968, 11.42478, 11.87861, 11.48989, 11.41526,
   11.12671, 10.76822, 11.26603, 11.30224, 11.04558, 11.09068, 10.91736, 10.91764, 11.09117, 10.74248, 12.39248, 10.7053, 11.03542, 12.13193, 10.89889, 10.89365,
   11.0179, 11.0746, 10.86216, 10.95619, 10.8294, 10.62919, 10.91446, 11.21227, 10.50906, 10.54849, 10.88779, 10.47117, 10.65336, 10.30557, 10.38228, 10.64011,
   10.55123, 10.10085, 10.53432, 10.67274, 10.36214, 10.24881, 10.26818, 10.49067, 10.20301, 10.16947, 10.37984, 10.24619, 10.67338, 10.28577, 10.44348, 10.32402,
   10.07749, 9.9337, 10.01849, 9.974273, 10.17639, 10.08055, 10.06073, 10.08984, 9.905464, 10.01085, 9.993868, 10.36696, 9.856325, 9.925587, 9.605991, 9.868084,
   9.707837, 9.791961, 9.51577, 9.479451, 9.91536, 9.890977, 9.778533, 9.531372, 9.60984, 9.443845, 9.511683, 9.907813, 9.432317, 9.545116, 9.174277, 9.403309,
   9.516954, 9.525384, 9.114077, 9.127677, 9.38892, 9.367634, 9.264012, 9.074197, 9.348586, 9.12365, 9.273189, 9.039987, 8.934357, 9.184722, 9.107578, 9.185264,
   9.46847, 9.188075, 8.96744, 9.122227, 8.93098, 8.886857, 9.247139, 8.663248, 8.732382, 9.006887, 8.699813, 9.150806, 8.735376, 8.951763, 8.907197, 8.97812,
   8.986397, 8.305538, 8.57043, 8.634161, 8.59775, 8.774188, 8.864322, 8.746266, 8.552145, 8.791007, 8.632329, 8.529589, 8.322366, 8.397333, 8.403272, 8.651738,
   8.686301, 8.629031, 8.471572, 8.42204, 8.679663, 8.236173, 8.583353, 8.284261, 8.217959, 8.470536, 8.170058, 7.908537, 8.078084, 8.517145, 8.295376, 8.53897,
   8.253307, 8.246098, 8.01019, 8.347631, 8.333536, 8.170779, 8.430222, 8.264866, 8.090052, 7.962137, 7.906783, 8.388706, 7.758531, 7.891045, 7.952305, 8.009477,
   8.110065, 7.874678, 7.996484, 8.019935, 8.092866, 7.886135, 7.646449, 7.790569, 7.921079, 7.56937, 7.755521, 7.765052, 7.690123, 8.458956, 7.703523, 7.667187,
   7.703504, 7.491703, 7.5614, 7.668725, 7.641309, 7.639429, 7.438345, 7.47284, 7.413621, 7.572134, 7.470293, 7.522606, 7.234142, 7.463277, 7.26615, 7.296778,
   7.466815, 6.905466, 7.382501, 7.781143, 7.168065, 7.238636, 7.288546, 7.373598, 7.417606, 7.198305, 7.003447, 7.05865, 7.585051, 7.199553, 7.233956, 7.371659,
   7.201295, 7.008099, 7.306171, 6.750391, 7.127993, 7.218938, 7.056297 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_H_mass_fx1007,Graph_from_VH_tagOnly_2b1c_H_mass_fy1007,Graph_from_VH_tagOnly_2b1c_H_mass_fex1007,Graph_from_VH_tagOnly_2b1c_H_mass_fey1007);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->SetMinimum(-1010.211);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->SetMaximum(10235.02);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_H_mass1007);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_H_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   H_mass_tagOnly_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__8 = new TH1D("data_mc_ratio__8","",1000,0,2000);
   data_mc_ratio__8->SetBinContent(1000,1.465415);
   data_mc_ratio__8->SetBinContent(1001,1.295449);
   data_mc_ratio__8->SetBinError(1000,0.1692115);
   data_mc_ratio__8->SetBinError(1001,0.00815101);
   data_mc_ratio__8->SetMinimum(0.4);
   data_mc_ratio__8->SetMaximum(1.6);
   data_mc_ratio__8->SetEntries(30.91952);
   data_mc_ratio__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__8->SetLineColor(ci);
   data_mc_ratio__8->SetLineWidth(2);
   data_mc_ratio__8->SetMarkerStyle(20);
   data_mc_ratio__8->SetMarkerSize(1.2);
   data_mc_ratio__8->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__8->GetXaxis()->SetRange(1,150);
   data_mc_ratio__8->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__8->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__8->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__8->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__8->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__8->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__8->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__8->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__8->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__8->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1008[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1008[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1008[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0159372, 0.007626992,
   0.00757729, 0.007384872, 0.007370454, 0.007427785, 0.007247781, 0.007165714, 0.007198365, 0.007172779, 0.007204686, 0.007091784, 0.007144497, 0.007131539, 0.00716226, 0.007086526, 0.007122346, 0.007068573,
   0.007094808, 0.007027618, 0.007022785, 0.007048692, 0.007081176, 0.007091488, 0.007218541, 0.007138945, 0.007033271, 0.007055923, 0.007096786, 0.007087501, 0.01442116, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.137872 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1008,Graph_from_mc_statistical_error_fy1008,Graph_from_mc_statistical_error_fex1008,Graph_from_mc_statistical_error_fey1008);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1008 = new TH1F("Graph_Graph_from_mc_statistical_error1008","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1008->SetMinimum(0.8345536);
   Graph_Graph_from_mc_statistical_error1008->SetMaximum(1.165446);
   Graph_Graph_from_mc_statistical_error1008->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1008->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1008);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_tagOnly_SR_18->cd();
   H_mass_tagOnly_SR_18->Modified();
   H_mass_tagOnly_SR_18->cd();
   H_mass_tagOnly_SR_18->SetSelected(H_mass_tagOnly_SR_18);
}
