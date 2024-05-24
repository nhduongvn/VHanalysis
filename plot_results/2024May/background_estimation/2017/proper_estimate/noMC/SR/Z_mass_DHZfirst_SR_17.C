#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_SR_17()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_SR_17/Z_mass_DHZfirst_SR_17
//=========  (Fri May 24 11:23:56 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_SR_17 = new TCanvas("Z_mass_DHZfirst_SR_17", "Z_mass_DHZfirst_SR_17",0,0,600,600);
   Z_mass_DHZfirst_SR_17->SetHighLightColor(2);
   Z_mass_DHZfirst_SR_17->Range(0,0,1,1);
   Z_mass_DHZfirst_SR_17->SetFillColor(0);
   Z_mass_DHZfirst_SR_17->SetFillStyle(4000);
   Z_mass_DHZfirst_SR_17->SetBorderMode(0);
   Z_mass_DHZfirst_SR_17->SetBorderSize(2);
   Z_mass_DHZfirst_SR_17->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-3.557656,315.7258,3564.098);
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
   st->SetMaximum(3207.332);
   
   TH1F *st_stack_84 = new TH1F("st_stack_84","",1000,0,2000);
   st_stack_84->SetMinimum(0.01);
   st_stack_84->SetMaximum(3207.332);
   st_stack_84->SetDirectory(nullptr);
   st_stack_84->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_84->SetLineColor(ci);
   st_stack_84->SetLineWidth(0);
   st_stack_84->GetXaxis()->SetRange(1,150);
   st_stack_84->GetXaxis()->SetLabelFont(42);
   st_stack_84->GetXaxis()->SetTitleOffset(1);
   st_stack_84->GetXaxis()->SetTitleFont(42);
   st_stack_84->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_84->GetYaxis()->SetLabelFont(42);
   st_stack_84->GetYaxis()->SetLabelSize(0.05);
   st_stack_84->GetYaxis()->SetTitleSize(0.057);
   st_stack_84->GetYaxis()->SetTitleOffset(1.2);
   st_stack_84->GetYaxis()->SetTitleFont(42);
   st_stack_84->GetZaxis()->SetLabelFont(42);
   st_stack_84->GetZaxis()->SetTitleOffset(1);
   st_stack_84->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_84);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(31,1368.01);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(32,1398.241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(33,1412.891);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(34,1443.3);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(35,1420.156);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(36,1409.344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(37,1414.388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(38,1411.393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(39,1353.279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(40,1356.088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(41,1307.762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(42,1383.905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(43,1285.902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(44,1259.623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(45,1241.832);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(46,1230.532);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(47,1208.316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(48,1170.158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(49,1174.917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(50,1141.269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(51,1123.688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(52,1097.788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(53,1095.273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(54,1051.075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(55,1062.551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(56,1050.116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(57,1050.467);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(58,1000.797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(59,993.7676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(60,963.7765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,4.192103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,2221.27);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.01142171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,0.2074085);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,0.6212126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,0.9478658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,1.931493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,3.076064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,4.572733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,5.579674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,7.140016);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,8.606212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,10.11622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,11.8995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,12.70182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,13.91132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,14.90472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,15.61758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,16.20514);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,16.98653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,17.17469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,17.35139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,17.4775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,17.70191);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,17.65784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,17.58093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,17.66669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,17.65617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,17.39718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,17.47006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,17.21791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,17.77968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,17.20786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,17.211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,17.12768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,17.11483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,16.9489);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,16.78903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,16.79111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,16.53804);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,16.44606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,16.23474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,16.25303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,15.98527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,16.08209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,15.87824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,15.90466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,15.63586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,15.61413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,15.38425);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,15.40394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,15.22967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,15.20437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,15.08368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,15.31915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,15.05552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,15.0949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,14.88803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,14.93109);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,14.86113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,14.71098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,14.74418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,14.55801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,14.5795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,14.44915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,14.38634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,14.2606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,14.16536);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,13.87598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,13.7982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,13.82596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,13.61803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,13.72041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,13.55062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,13.29907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,13.25435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,13.07797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,13.11747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,12.94138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,12.76162);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,12.73651);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,12.56518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,12.49412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,12.37504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,12.37261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,12.44628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,11.85786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,11.90307);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,11.82623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,11.64079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,11.60147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,11.45159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,11.56696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,11.44292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,11.13856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,11.38148);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,11.03864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,11.00188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,10.90901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,10.76943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,10.79255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,10.4914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,10.40655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,10.45072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,10.42477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,10.17303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,10.18393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,9.97542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,10.2813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,9.811144);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,9.598122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,9.645526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,9.737093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,9.513671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,9.370038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,9.371537);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,9.342859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,9.36038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,9.079132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,9.057909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,8.907793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,8.994448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,9.059662);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,8.627402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,8.711914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,8.344849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,8.612866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,8.50188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,8.31242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,8.47991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,8.391144);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,8.416685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,8.3017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,8.194138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,8.233591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,7.998565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,8.037864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,7.908868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,7.937506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,7.787749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,7.73731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,7.6623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,8.009685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,7.565506);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,7.524901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,7.518092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,7.539625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,7.334789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,7.266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,7.108922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,7.461512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,7.441911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,7.067912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,7.148926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,6.968875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,7.041373);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,6.951971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,6.820574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,6.866048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,6.602269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,6.703198);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,6.50702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,6.498839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,6.581195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,6.553136);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,6.353066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,6.405933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,6.49757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,6.388181);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,6.192874);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,6.176826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,6.39377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,6.225751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,6.273569);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,6.055245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,6.278925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,6.099147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,5.966008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,5.831218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,5.808933);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,6.085957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,6.036853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,5.883959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,5.612691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,5.670409);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,5.876083);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,5.767104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,5.552626);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,5.716668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,5.789231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,5.514667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,5.590041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,5.693131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,5.48538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,5.44925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,5.343909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,5.426242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,5.366296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,5.219396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,5.083634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,5.176396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,5.272751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,5.250142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,5.024385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,4.959289);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,5.097982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,5.074151);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,4.998939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,5.009848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,5.044914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,5.064258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,5.095406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,4.961196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,4.862974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,4.903159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,4.752362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,4.801728);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,4.902007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,4.721178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,4.92752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,4.692036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,4.747648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,4.852263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,4.651813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,4.638323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,4.571671);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,4.676704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,4.658407);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,4.683959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,4.609405);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,4.72036);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,4.538343);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,4.528958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,4.35299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,4.705857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,4.540224);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,4.518622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,4.446424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,4.525158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,4.249042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,4.696622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,4.535051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,4.276331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,4.475605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,4.213599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,4.328343);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,4.377823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,4.327232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,4.201868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,4.35779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,4.228018);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,4.13655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,4.27779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,4.275066);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,4.21612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,4.206589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,4.185907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,4.106794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,4.176839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,4.275609);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,4.111124);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,4.135805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,4.361551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,4.138832);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,4.007954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,4.070197);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,3.869928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,4.230558);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,4.179046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,3.874672);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,3.959881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,4.08026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,3.758503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,4.015458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,4.022153);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,4.087292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,3.937509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,3.896818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,3.971986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,4.073051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,4.001842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,3.810762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,3.798837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,3.953453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,4.024936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,3.840625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,3.945543);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,3.880281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,3.633846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,3.822926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,3.711288);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,3.74863);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,3.787327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,3.798545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,3.727472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,3.778299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,3.69556);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,3.681426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,3.598139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,3.640791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,3.908437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,3.772668);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,3.65677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,3.537117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,3.671364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,3.527373);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,3.581765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,3.577689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,3.763239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,3.664447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,3.550302);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,3.699647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,3.537078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,3.757585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,3.615164);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,3.542381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,3.335135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,3.4786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,3.382873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,3.634789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,3.676899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,3.677641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,3.566984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,3.514693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,3.498531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,3.597528);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,3.515732);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,3.460277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,3.650138);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,3.625982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,3.537719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,3.609258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,3.505974);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,3.489814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,3.551615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,3.562841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,3.710473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,3.423396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,3.624819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,3.455381);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,3.347591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,3.502221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,3.587655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,3.504123);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,3.434755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,3.39128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,3.414026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,3.482049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,3.587503);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,3.437456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,3.317781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,3.387048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,3.53299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,3.363063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,3.449971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,3.376988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,3.192966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,3.305598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,3.31691);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,3.18877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,3.432041);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,3.25463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,3.306929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,3.269642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,3.369683);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,3.495127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,3.308109);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,3.309413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,3.2597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,3.228045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,3.242397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,3.266898);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,3.373992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,3.281618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,3.069726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,3.346934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,3.153495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,3.414865);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,3.142027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,3.136583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,3.244349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,3.262529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,3.19142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,3.222809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,3.249913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,3.262173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,3.161997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,3.258315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,3.382463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,3.289945);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,3.069075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,3.066841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,3.161773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,3.321629);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,3.369439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,3.008357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,3.121202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,3.181344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,3.19491);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,2.928796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,3.127061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,3.174357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,3.047987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,3.172943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,3.165756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,3.200957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,3.162619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,3.252483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,3.204749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,3.009461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,3.207656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,3.129746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,3.092519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,3.174605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,3.117006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,3.076698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,3.195285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,2.84296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,3.053377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,2.879012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,3.220787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,3.069809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,2.902382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,2.96877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,3.285149);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,3.068208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,2.951796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,3.010269);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,3.131076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,2.971308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,2.989301);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,3.207605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,2.982843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,3.091159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,2.883743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,2.964531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,2.980502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,3.108364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,2.945266);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,2.934849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,3.112661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,2.918499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,2.966457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,2.898568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,2.816929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,3.064685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,2.869362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,2.858062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,2.937345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,2.815144);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,2.972344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,3.010007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,2.802297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,2.958846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,2.924695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,2.977106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,2.891507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,2.890453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,2.74085);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,2.862813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,2.809208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,2.835128);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,2.890042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,2.747591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,2.849914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,2.998376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,2.671294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,2.843699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,2.763739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,2.989678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,2.873744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,2.842167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,2.830476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,2.85798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,2.934872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,2.746091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,2.769352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,2.736766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,2.93329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,2.839474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,3.062647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,2.512341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,2.8997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,2.761375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,2.737522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,2.836587);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,2.780822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,2.751718);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,2.999667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,2.730585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,2.747019);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,2.765477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,2.80395);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,2.627171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,2.874758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,2.802979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,2.670562);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,2.853877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,2.758637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,2.811318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,2.832054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,3.107447);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,2.752414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,2.774115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,2.6337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,2.740644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,2.831695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,2.851707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,2.842147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,2.932385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,2.608189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,2.794366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,2.958796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,2.63306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,2.653623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,2.77911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,2.841104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,2.590011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,2.860361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,2.693455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,3.002063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,2.772347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,2.777273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,2.650267);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,2.626387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,2.647084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,2.513063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,2.680577);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,2.647255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,2.642222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,2.5893);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,2.865949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,2.802135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,2.650473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,2.757436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,2.671664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,2.573186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,2.652007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,2.80743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,2.730377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,2.774724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,2.750989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,2.698449);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,2.787872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,2.465194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,2.697634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,2.63208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,2.818669);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,2.605984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,2.676443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,2.62583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,2.661402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,2.727112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,2.460367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,2.790247);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,2.74299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,2.527382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,2.668911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,2.347786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,2.726427);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,2.667106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,2.476724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,2.566397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,2.53292);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,2.635707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,2.699746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,2.556225);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,2.536894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,2.570359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,2.420524);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,2.727443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,2.374476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,2.578189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,2.683598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,2.454212);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,2.600453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,2.531782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,2.529391);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,2.582286);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,2.399785);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,2.427023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,2.424965);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,2.662042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,2.578303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,2.694707);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,2.497194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,2.740725);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,2.64882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,2.55062);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,2.513281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,2.347497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,2.577002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,2.460911);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,2.370909);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,2.700677);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,2.395023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,2.359461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,2.552263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,2.519748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,2.420719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,2.468717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,2.545512);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,2.505767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,2.527158);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,2.320628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,2.474996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,2.511441);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,2.524278);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,2.379931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,2.733938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,2.328551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,2.539365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,2.247303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,2.372313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,2.509523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,2.444143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,2.344884);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,2.585473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,2.43318);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,2.318954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,2.350744);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,2.406475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,2.433152);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,2.500376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,2.411287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,2.328035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,2.453007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,2.29959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,2.316046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,2.225025);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,2.518842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,2.553866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,2.400347);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,2.335806);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,2.59886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,2.471489);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,2.54471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,2.611111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,2.324309);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,2.577308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,2.169952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,2.452953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,2.344443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,2.228583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,2.250736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,2.541084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,2.313402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,2.439332);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,2.258665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,2.324267);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,2.404112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,2.305812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,2.249507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,2.352059);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,2.275203);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,2.269067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,2.397981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,2.196437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,2.40932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,2.356219);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,2.27715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,2.161205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,2.46958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,2.395376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,2.221453);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,2.256654);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,2.314998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,2.308883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,2.40811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,2.343664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,2.304315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,2.361072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,2.221924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,2.279419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,2.164379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,2.304741);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,2.336843);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,2.247283);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,2.21526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,2.342638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,2.060877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,2.249416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,2.334121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,2.402799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,2.332295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,2.318193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,2.217907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,2.202731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,2.332376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,2.32004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,2.194993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,2.383452);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,2.243943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,2.227472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,2.295696);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,2.167666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,2.087375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,2.132213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,2.266033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,2.146304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,2.293845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,2.147695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,2.158731);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,2.201906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,2.184049);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,2.053329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,2.105515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,2.10949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,2.393496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,2.229538);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,2.334329);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,2.131053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,1.98086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,2.247469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,2.257154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,2.199122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,2.227178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,2.156519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,2.154444);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,2.15961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,2.285029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,2.274414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,2.129551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,2.375401);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,2.213755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,2.15104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,2.163475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,2.082623);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,2.132534);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,2.028818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,2.103053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,2.13079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,2.134688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,2.100765);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,2.092097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,2.260619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,2.159631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,2.304322);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,2.263597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,2.079981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,2.054522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,2.027328);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,2.079872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,2.075239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,1.95547);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,1.98585);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,1.840455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,2.082084);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,2.087781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,2.123458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,2.092715);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,1.916768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,2.185242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,1.978081);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,1.903341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,2.087895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,1.868663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,1.967113);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,1.912752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,1.908304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,2.027982);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,2.008281);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,2.079101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,1.95551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,1.910822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,2.060594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,1.988015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,1.843521);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,1.902515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,1.807981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,2.032376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,1.818013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,1.889914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,1.939727);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,1.887313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,2.060097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,1.77096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,1.953247);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,1.962871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,1.943235);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,1.816412);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,2.016367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,1.769029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,1.82643);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,1.947285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,1.919645);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,1.830801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,2.010859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,1.781794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,1.815922);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,2.013768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,1.840809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,2.070406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,2.049986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,1.795112);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,1.852375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,1.828076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,2.186821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,1.812108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,1.895208);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,1.884139);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,1.917666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,2.07566);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,1.798433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,1.841852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,1.735958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,2.035637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,1.863163);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,1.910252);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,1.840745);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,1.97193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,1.984881);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,1.720282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,1.839807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,1.701981);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,1.874384);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,1.89789);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,1.862628);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,1.872939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,1.645127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,1.865306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,1.745647);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,1.91386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,1.771545);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,1.810908);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,1.836211);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,1.619717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,1.861738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,1.663457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,1.538928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,1.84938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,1.83722);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,1.755878);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,1.71946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,1.623185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,1.759642);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,1.69824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,1.647097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,1.767863);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,1.506868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,1.620183);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,1.611184);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,1.747265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,1.749419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,1.618431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,1.615335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,1.581794);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,1.74926);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,1.742011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,1.731253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,1.607372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,1.610743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,1.816726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,1.632811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,1.791853);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,1.841231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,1.793133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,1.718663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,1.614523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,1.706575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,1.480481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,1.754092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,1.579262);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,1.578866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,1.578631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,1.549389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,1.429231);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,1.854508);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,1.615924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,1.680195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,1.645035);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,1.506176);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,1.827525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,1.705298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,1.718799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,1.522032);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,1.591178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,1.739013);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,1.67079);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,1.400324);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,1.574389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,1.58835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,1.623431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,1.657618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,1.643598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,1.704345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,1.681616);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,1.713154);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,1.662297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,1.495002);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,1.533964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,1.648859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,1.837518);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,1.67953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,1.747802);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,1.487218);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,1.467644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,1.404899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,1.719814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,1.61837);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,1.537552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,1.535906);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,1.522439);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,1.533474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,1.626984);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,1.742575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,1.448672);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,1.580322);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,1.569523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,1.498775);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,1.463382);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,1.371641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,1.605594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,1.653912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,1.393398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,1.510857);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,1.459067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,1.568291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,1.43478);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,1.450787);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,1.704063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,1.5773);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,1.663601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,1.422964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,1.508435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,1.548818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,1.547001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,1.476589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,1.375791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,1.550839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,1.482064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,1.426739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,1.359358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,1.506365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,1.562362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,1.547847);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,1.58832);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,1.573958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,1.35986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,1.591015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,1.445548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,1.604217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,1.433594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,1.561088);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,1.535142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,1.460418);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,1.326147);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,1.517205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,1.416072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,1.358949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,1.192402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,1.662689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,1.717751);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,1.53999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,1.43582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,1.434268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,1.433904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,1.35948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,1.462535);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,1.225851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,1.577413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,1.257438);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,1.311519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,1.640704);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,1.423169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,1.478263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,1.371376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,1.459894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,1.211719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,1.507699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,1.309475);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,1.438661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,1.329082);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,1.405817);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,1.548907);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,1.492582);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,1.388378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,1.260993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,1.405803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,1.411276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,1.433546);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.33988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,1.274958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,1.340458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,1.276822);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,1.435625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,1.306929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,1.208417);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,1.432726);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,1.356105);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,22.87446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(552168.7);

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
   
   TH1D *VH_DHZfirst_Z_mass__167 = new TH1D("VH_DHZfirst_Z_mass__167","",1000,0,2000);
   VH_DHZfirst_Z_mass__167->SetBinContent(1000,3);
   VH_DHZfirst_Z_mass__167->SetBinContent(1001,2438);
   VH_DHZfirst_Z_mass__167->SetEntries(145453);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__167->SetLineColor(ci);
   VH_DHZfirst_Z_mass__167->SetLineWidth(2);
   VH_DHZfirst_Z_mass__167->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__167->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__167->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__167->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__167->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__167->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__167->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__167->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__167->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__167->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__167->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__167->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1167[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1167[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1368.01, 1398.241, 1412.891,
   1443.3, 1420.156, 1409.344, 1414.388, 1411.393, 1353.279, 1356.088, 1307.762, 1383.905, 1285.902, 1259.623, 1241.832, 1230.532, 1208.316, 1170.158, 1174.917,
   1141.269, 1123.688, 1097.788, 1095.273, 1051.075, 1062.551, 1050.116, 1050.467, 1000.797, 993.7676, 963.7765, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 4.192103 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1167[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1167[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01142171, 0.2074085, 0.6212126, 0.9478658, 1.931493,
   3.076064, 4.572733, 5.579674, 7.140016, 8.606212, 10.11622, 11.8995, 12.70182, 13.91132, 14.90472, 15.61758, 16.20514, 16.98653, 17.17469, 17.35139, 17.4775,
   17.70191, 17.65784, 17.58093, 17.66669, 17.65617, 17.39718, 17.47006, 17.21791, 17.77968, 17.20786, 17.211, 17.12768, 17.11483, 16.9489, 16.78903, 16.79111,
   16.53804, 16.44606, 16.23474, 16.25303, 15.98527, 16.08209, 15.87824, 15.90466, 15.63586, 15.61413, 15.38425, 15.40394, 15.22967, 15.20437, 15.08368, 15.31915,
   15.05552, 15.0949, 14.88803, 14.93109, 14.86113, 14.71098, 14.74418, 14.55801, 14.5795, 14.44915, 14.38634, 14.2606, 14.16536, 13.87598, 13.7982, 13.82596,
   13.61803, 13.72041, 13.55062, 13.29907, 13.25435, 13.07797, 13.11747, 12.94138, 12.76162, 12.73651, 12.56518, 12.49412, 12.37504, 12.37261, 12.44628, 11.85786,
   11.90307, 11.82623, 11.64079, 11.60147, 11.45159, 11.56696, 11.44292, 11.13856, 11.38148, 11.03864, 11.00188, 10.90901, 10.76943, 10.79255, 10.4914, 10.40655,
   10.45072, 10.42477, 10.17303, 10.18393, 9.97542, 10.2813, 9.811144, 9.598122, 9.645526, 9.737093, 9.513671, 9.370038, 9.371537, 9.342859, 9.36038, 9.079132,
   9.057909, 8.907793, 8.994448, 9.059662, 8.627402, 8.711914, 8.344849, 8.612866, 8.50188, 8.31242, 8.47991, 8.391144, 8.416685, 8.3017, 8.194138, 8.233591,
   7.998565, 8.037864, 7.908868, 7.937506, 7.787749, 7.73731, 7.6623, 8.009685, 7.565506, 7.524901, 7.518092, 7.539625, 7.334789, 7.266, 7.108922, 7.461512,
   7.441911, 7.067912, 7.148926, 6.968875, 7.041373, 6.951971, 6.820574, 6.866048, 6.602269, 6.703198, 6.50702, 6.498839, 6.581195, 6.553136, 6.353066, 6.405933,
   6.49757, 6.388181, 6.192874, 6.176826, 6.39377, 6.225751, 6.273569, 6.055245, 6.278925, 6.099147, 5.966008, 5.831218, 5.808933, 6.085957, 6.036853, 5.883959,
   5.612691, 5.670409, 5.876083, 5.767104, 5.552626, 5.716668, 5.789231, 5.514667, 5.590041, 5.693131, 5.48538, 5.44925, 5.343909, 5.426242, 5.366296, 5.219396,
   5.083634, 5.176396, 5.272751, 5.250142, 5.024385, 4.959289, 5.097982, 5.074151, 4.998939, 5.009848, 5.044914, 5.064258, 5.095406, 4.961196, 4.862974, 4.903159,
   4.752362, 4.801728, 4.902007, 4.721178, 4.92752, 4.692036, 4.747648, 4.852263, 4.651813, 4.638323, 4.571671, 4.676704, 4.658407, 4.683959, 4.609405, 4.72036,
   4.538343, 4.528958, 4.35299, 4.705857, 4.540224, 4.518622, 4.446424, 4.525158, 4.249042, 4.696622, 4.535051, 4.276331, 4.475605, 4.213599, 4.328343, 4.377823,
   4.327232, 4.201868, 4.35779, 4.228018, 4.13655, 4.27779, 4.275066, 4.21612, 4.206589, 4.185907, 4.106794, 4.176839, 4.275609, 4.111124, 4.135805, 4.361551,
   4.138832, 4.007954, 4.070197, 3.869928, 4.230558, 4.179046, 3.874672, 3.959881, 4.08026, 3.758503, 4.015458, 4.022153, 4.087292, 3.937509, 3.896818, 3.971986,
   4.073051, 4.001842, 3.810762, 3.798837, 3.953453, 4.024936, 3.840625, 3.945543, 3.880281, 3.633846, 3.822926, 3.711288, 3.74863, 3.787327, 3.798545, 3.727472,
   3.778299, 3.69556, 3.681426, 3.598139, 3.640791, 3.908437, 3.772668, 3.65677, 3.537117, 3.671364, 3.527373, 3.581765, 3.577689, 3.763239, 3.664447, 3.550302,
   3.699647, 3.537078, 3.757585, 3.615164, 3.542381, 3.335135, 3.4786, 3.382873, 3.634789, 3.676899, 3.677641, 3.566984, 3.514693, 3.498531, 3.597528, 3.515732,
   3.460277, 3.650138, 3.625982, 3.537719, 3.609258, 3.505974, 3.489814, 3.551615, 3.562841, 3.710473, 3.423396, 3.624819, 3.455381, 3.347591, 3.502221, 3.587655,
   3.504123, 3.434755, 3.39128, 3.414026, 3.482049, 3.587503, 3.437456, 3.317781, 3.387048, 3.53299, 3.363063, 3.449971, 3.376988, 3.192966, 3.305598, 3.31691,
   3.18877, 3.432041, 3.25463, 3.306929, 3.269642, 3.369683, 3.495127, 3.308109, 3.309413, 3.2597, 3.228045, 3.242397, 3.266898, 3.373992, 3.281618, 3.069726,
   3.346934, 3.153495, 3.414865, 3.142027, 3.136583, 3.244349, 3.262529, 3.19142, 3.222809, 3.249913, 3.262173, 3.161997, 3.258315, 3.382463, 3.289945, 3.069075,
   3.066841, 3.161773, 3.321629, 3.369439, 3.008357, 3.121202, 3.181344, 3.19491, 2.928796, 3.127061, 3.174357, 3.047987, 3.172943, 3.165756, 3.200957, 3.162619,
   3.252483, 3.204749, 3.009461, 3.207656, 3.129746, 3.092519, 3.174605, 3.117006, 3.076698, 3.195285, 2.84296, 3.053377, 2.879012, 3.220787, 3.069809, 2.902382,
   2.96877, 3.285149, 3.068208, 2.951796, 3.010269, 3.131076, 2.971308, 2.989301, 3.207605, 2.982843, 3.091159, 2.883743, 2.964531, 2.980502, 3.108364, 2.945266,
   2.934849, 3.112661, 2.918499, 2.966457, 2.898568, 2.816929, 3.064685, 2.869362, 2.858062, 2.937345, 2.815144, 2.972344, 3.010007, 2.802297, 2.958846, 2.924695,
   2.977106, 2.891507, 2.890453, 2.74085, 2.862813, 2.809208, 2.835128, 2.890042, 2.747591, 2.849914, 2.998376, 2.671294, 2.843699, 2.763739, 2.989678, 2.873744,
   2.842167, 2.830476, 2.85798, 2.934872, 2.746091, 2.769352, 2.736766, 2.93329, 2.839474, 3.062647, 2.512341, 2.8997, 2.761375, 2.737522, 2.836587, 2.780822,
   2.751718, 2.999667, 2.730585, 2.747019, 2.765477, 2.80395, 2.627171, 2.874758, 2.802979, 2.670562, 2.853877, 2.758637, 2.811318, 2.832054, 3.107447, 2.752414,
   2.774115, 2.6337, 2.740644, 2.831695, 2.851707, 2.842147, 2.932385, 2.608189, 2.794366, 2.958796, 2.63306, 2.653623, 2.77911, 2.841104, 2.590011, 2.860361,
   2.693455, 3.002063, 2.772347, 2.777273, 2.650267, 2.626387, 2.647084, 2.513063, 2.680577, 2.647255, 2.642222, 2.5893, 2.865949, 2.802135, 2.650473, 2.757436,
   2.671664, 2.573186, 2.652007, 2.80743, 2.730377, 2.774724, 2.750989, 2.698449, 2.787872, 2.465194, 2.697634, 2.63208, 2.818669, 2.605984, 2.676443, 2.62583,
   2.661402, 2.727112, 2.460367, 2.790247, 2.74299, 2.527382, 2.668911, 2.347786, 2.726427, 2.667106, 2.476724, 2.566397, 2.53292, 2.635707, 2.699746, 2.556225,
   2.536894, 2.570359, 2.420524, 2.727443, 2.374476, 2.578189, 2.683598, 2.454212, 2.600453, 2.531782, 2.529391, 2.582286, 2.399785, 2.427023, 2.424965, 2.662042,
   2.578303, 2.694707, 2.497194, 2.740725, 2.64882, 2.55062, 2.513281, 2.347497, 2.577002, 2.460911, 2.370909, 2.700677, 2.395023, 2.359461, 2.552263, 2.519748,
   2.420719, 2.468717, 2.545512, 2.505767, 2.527158, 2.320628, 2.474996, 2.511441, 2.524278, 2.379931, 2.733938, 2.328551, 2.539365, 2.247303, 2.372313, 2.509523,
   2.444143, 2.344884, 2.585473, 2.43318, 2.318954, 2.350744, 2.406475, 2.433152, 2.500376, 2.411287, 2.328035, 2.453007, 2.29959, 2.316046, 2.225025, 2.518842,
   2.553866, 2.400347, 2.335806, 2.59886, 2.471489, 2.54471, 2.611111, 2.324309, 2.577308, 2.169952, 2.452953, 2.344443, 2.228583, 2.250736, 2.541084, 2.313402,
   2.439332, 2.258665, 2.324267, 2.404112, 2.305812, 2.249507, 2.352059, 2.275203, 2.269067, 2.397981, 2.196437, 2.40932, 2.356219, 2.27715, 2.161205, 2.46958,
   2.395376, 2.221453, 2.256654, 2.314998, 2.308883, 2.40811, 2.343664, 2.304315, 2.361072, 2.221924, 2.279419, 2.164379, 2.304741, 2.336843, 2.247283, 2.21526,
   2.342638, 2.060877, 2.249416, 2.334121, 2.402799, 2.332295, 2.318193, 2.217907, 2.202731, 2.332376, 2.32004, 2.194993, 2.383452, 2.243943, 2.227472, 2.295696,
   2.167666, 2.087375, 2.132213, 2.266033, 2.146304, 2.293845, 2.147695, 2.158731, 2.201906, 2.184049, 2.053329, 2.105515, 2.10949, 2.393496, 2.229538, 2.334329,
   2.131053, 1.98086, 2.247469, 2.257154, 2.199122, 2.227178, 2.156519, 2.154444, 2.15961, 2.285029, 2.274414, 2.129551, 2.375401, 2.213755, 2.15104, 2.163475,
   2.082623, 2.132534, 2.028818, 2.103053, 2.13079, 2.134688, 2.100765, 2.092097, 2.260619, 2.159631, 2.304322, 2.263597, 2.079981, 2.054522, 2.027328, 2.079872,
   2.075239, 1.95547, 1.98585, 1.840455, 2.082084, 2.087781, 2.123458, 2.092715, 1.916768, 2.185242, 1.978081, 1.903341, 2.087895, 1.868663, 1.967113, 1.912752,
   1.908304, 2.027982, 2.008281, 2.079101, 1.95551, 1.910822, 2.060594, 1.988015, 1.843521, 1.902515, 1.807981, 2.032376, 1.818013, 1.889914, 1.939727, 1.887313,
   2.060097, 1.77096, 1.953247, 1.962871, 1.943235, 1.816412, 2.016367, 1.769029, 1.82643, 1.947285, 1.919645, 1.830801, 2.010859, 1.781794, 1.815922, 2.013768,
   1.840809, 2.070406, 2.049986, 1.795112, 1.852375, 1.828076, 2.186821, 1.812108, 1.895208, 1.884139, 1.917666, 2.07566, 1.798433, 1.841852, 1.735958, 2.035637,
   1.863163, 1.910252, 1.840745, 1.97193, 1.984881, 1.720282, 1.839807, 1.701981, 1.874384, 1.89789, 1.862628, 1.872939, 1.645127, 1.865306, 1.745647, 1.91386,
   1.771545, 1.810908, 1.836211, 1.619717, 1.861738, 1.663457, 1.538928, 1.84938, 1.83722, 1.755878, 1.71946, 1.623185, 1.759642, 1.69824, 1.647097, 1.767863,
   1.506868, 1.620183, 1.611184, 1.747265, 1.749419, 1.618431, 1.615335, 1.581794, 1.74926, 1.742011, 1.731253, 1.607372, 1.610743, 1.816726, 1.632811, 1.791853,
   1.841231, 1.793133, 1.718663, 1.614523, 1.706575, 1.480481, 1.754092, 1.579262, 1.578866, 1.578631, 1.549389, 1.429231, 1.854508, 1.615924, 1.680195, 1.645035,
   1.506176, 1.827525, 1.705298, 1.718799, 1.522032, 1.591178, 1.739013, 1.67079, 1.400324, 1.574389, 1.58835, 1.623431, 1.657618, 1.643598, 1.704345, 1.681616,
   1.713154, 1.662297, 1.495002, 1.533964, 1.648859, 1.837518, 1.67953, 1.747802, 1.487218, 1.467644, 1.404899, 1.719814, 1.61837, 1.537552, 1.535906, 1.522439,
   1.533474, 1.626984, 1.742575, 1.448672, 1.580322, 1.569523, 1.498775, 1.463382, 1.371641, 1.605594, 1.653912, 1.393398, 1.510857, 1.459067, 1.568291, 1.43478,
   1.450787, 1.704063, 1.5773, 1.663601, 1.422964, 1.508435, 1.548818, 1.547001, 1.476589, 1.375791, 1.550839, 1.482064, 1.426739, 1.359358, 1.506365, 1.562362,
   1.547847, 1.58832, 1.573958, 1.35986, 1.591015, 1.445548, 1.604217, 1.433594, 1.561088, 1.535142, 1.460418, 1.326147, 1.517205, 1.416072, 1.358949, 1.192402,
   1.662689, 1.717751, 1.53999, 1.43582, 1.434268, 1.433904, 1.35948, 1.462535, 1.225851, 1.577413, 1.257438, 1.311519, 1.640704, 1.423169, 1.478263, 1.371376,
   1.459894, 1.211719, 1.507699, 1.309475, 1.438661, 1.329082, 1.405817, 1.548907, 1.492582, 1.388378, 1.260993, 1.405803, 1.411276, 1.433546, 1.33988, 1.274958,
   1.340458, 1.276822, 1.435625, 1.306929, 1.208417, 1.432726, 1.356105 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1167,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1167,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1167,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1167);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->SetMinimum(-164.7853);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->SetMaximum(1608.8);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1167);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_DHZfirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__168 = new TH1D("data_mc_ratio__168","",1000,0,2000);
   data_mc_ratio__168->SetBinContent(1000,0.7156313);
   data_mc_ratio__168->SetBinContent(1001,1.097571);
   data_mc_ratio__168->SetBinError(1000,0.4131699);
   data_mc_ratio__168->SetBinError(1001,0.02493731);
   data_mc_ratio__168->SetMinimum(0.4);
   data_mc_ratio__168->SetMaximum(1.6);
   data_mc_ratio__168->SetEntries(2.283213);
   data_mc_ratio__168->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__168->SetLineColor(ci);
   data_mc_ratio__168->SetLineWidth(2);
   data_mc_ratio__168->SetMarkerStyle(20);
   data_mc_ratio__168->SetMarkerSize(1.2);
   data_mc_ratio__168->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__168->GetXaxis()->SetRange(1,150);
   data_mc_ratio__168->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__168->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__168->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__168->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__168->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__168->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__168->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__168->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__168->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__168->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__168->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__168->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__168->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__168->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__168->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__168->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1168[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1168[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1168[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1168[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0125545, 0.01240944, 0.01237003,
   0.01226489, 0.01243373, 0.01247455, 0.0124907, 0.01250974, 0.01285558, 0.01288269, 0.01316593, 0.01284748, 0.01338194, 0.01366361, 0.01379227, 0.01390849, 0.01402688, 0.01434766, 0.01429132,
   0.01449092, 0.01463579, 0.0147886, 0.01483924, 0.0152085, 0.01513536, 0.01512046, 0.01514056, 0.0156234, 0.01571205, 0.01596247, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3234903 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1168,Graph_from_mc_statistical_error_fy1168,Graph_from_mc_statistical_error_fex1168,Graph_from_mc_statistical_error_fey1168);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1168 = new TH1F("Graph_Graph_from_mc_statistical_error1168","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1168->SetMinimum(0.6118117);
   Graph_Graph_from_mc_statistical_error1168->SetMaximum(1.388188);
   Graph_Graph_from_mc_statistical_error1168->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1168->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1168->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1168->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1168->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1168->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1168->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1168->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1168->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1168);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_SR_17->cd();
   Z_mass_DHZfirst_SR_17->Modified();
   Z_mass_DHZfirst_SR_17->cd();
   Z_mass_DHZfirst_SR_17->SetSelected(Z_mass_DHZfirst_SR_17);
}
