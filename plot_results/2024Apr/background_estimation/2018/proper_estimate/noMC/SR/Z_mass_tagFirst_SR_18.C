#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagFirst_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagFirst_SR_18/Z_mass_tagFirst_SR_18
//=========  (Mon Apr  8 13:43:44 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagFirst_SR_18 = new TCanvas("Z_mass_tagFirst_SR_18", "Z_mass_tagFirst_SR_18",0,0,600,600);
   Z_mass_tagFirst_SR_18->SetHighLightColor(2);
   Z_mass_tagFirst_SR_18->Range(0,0,1,1);
   Z_mass_tagFirst_SR_18->SetFillColor(0);
   Z_mass_tagFirst_SR_18->SetFillStyle(4000);
   Z_mass_tagFirst_SR_18->SetBorderMode(0);
   Z_mass_tagFirst_SR_18->SetBorderSize(2);
   Z_mass_tagFirst_SR_18->SetFrameFillStyle(1000);
   Z_mass_tagFirst_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-46.74748,315.7258,46710.73);
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
   st->SetMaximum(42034.98);
   
   TH1F *st_stack_140 = new TH1F("st_stack_140","",1000,0,2000);
   st_stack_140->SetMinimum(0.01);
   st_stack_140->SetMaximum(42034.98);
   st_stack_140->SetDirectory(nullptr);
   st_stack_140->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_140->SetLineColor(ci);
   st_stack_140->SetLineWidth(0);
   st_stack_140->GetXaxis()->SetRange(1,150);
   st_stack_140->GetXaxis()->SetLabelFont(42);
   st_stack_140->GetXaxis()->SetTitleOffset(1);
   st_stack_140->GetXaxis()->SetTitleFont(42);
   st_stack_140->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_140->GetYaxis()->SetLabelFont(42);
   st_stack_140->GetYaxis()->SetLabelSize(0.05);
   st_stack_140->GetYaxis()->SetTitleSize(0.057);
   st_stack_140->GetYaxis()->SetTitleOffset(1.2);
   st_stack_140->GetYaxis()->SetTitleFont(42);
   st_stack_140->GetZaxis()->SetLabelFont(42);
   st_stack_140->GetZaxis()->SetTitleOffset(1);
   st_stack_140->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_140);
   
   
   TH1D *VH_tagFirst_2b1c_Z_mass_stack_1 = new TH1D("VH_tagFirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(31,16969.22);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(32,17765.48);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(33,18352.09);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(34,18698.12);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(35,18781.43);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(36,18915.74);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(37,18646.34);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(38,18479.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(39,18154.52);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(40,17733.36);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(41,17118.35);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(42,16601.25);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(43,16121.04);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(44,15794.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(45,15356.39);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(46,15132.88);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(47,14950.15);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(48,15019.84);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(49,14964.81);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(50,14738.46);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(51,14673.52);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(52,14423.62);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(53,14166.79);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(54,14129.06);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(55,13921.47);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(56,13824.98);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(57,13766.99);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(58,13337.11);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(59,13351.78);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(60,13121.64);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1000,118.9554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinContent(1001,55661.92);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(5,0.03914219);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(8,0.06255593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(9,0.0612537);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(10,0.08315432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(11,0.0529876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(12,0.09835943);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(13,1.549424);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(14,4.102962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(15,8.827457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(16,14.4338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(17,20.44723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(18,27.34558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(19,34.31039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(20,41.51578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(21,48.66376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(22,56.84847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(23,62.34377);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(24,68.71807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(25,74.53926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(26,80.53006);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(27,84.45803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(28,88.51013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(29,92.15428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(30,95.60801);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(31,98.1341);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(32,99.93486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(33,101.8385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(34,103.1722);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(35,104.2934);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(36,105.1227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(37,106.0615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(38,106.1805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(39,106.7629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(40,107.2804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(41,107.7501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(42,109.5368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(43,107.7594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(44,107.5543);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(45,107.0661);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(46,109.5762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(47,105.0443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(48,104.5686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(49,102.9575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(50,101.1768);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(51,100.4022);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(52,99.21893);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(53,97.18841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(54,97.51009);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(55,95.59872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(56,94.85044);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(57,95.07599);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(58,93.43681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(59,92.60999);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(60,92.67545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(61,91.63814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(62,90.911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(63,90.9498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(64,91.45241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(65,90.2638);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(66,89.59966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(67,90.41154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(68,88.89322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(69,87.92957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(70,87.41199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(71,86.21432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(72,86.71783);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(73,90.67912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(74,85.95944);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(75,84.56295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(76,84.21812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(77,84.35683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(78,83.51188);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(79,84.1069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(80,83.06139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(81,83.06915);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(82,89.04379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(83,83.60133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(84,82.14898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(85,80.83645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(86,79.99158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(87,80.73746);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(88,79.34696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(89,78.92913);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(90,78.38592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(91,92.85901);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(92,77.57154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(93,77.86871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(94,77.075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(95,77.43615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(96,76.37877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(97,74.98495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(98,74.42616);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(99,75.11756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(100,74.1788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(101,73.77825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(102,73.36144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(103,73.08826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(104,72.84966);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(105,72.81192);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(106,71.78831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(107,71.79403);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(108,70.63443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(109,70.5683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(110,70.78568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(111,69.61467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(112,70.27896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(113,68.69409);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(114,68.60023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(115,68.48182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(116,67.88338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(117,67.97707);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(118,67.52857);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(119,66.8472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(120,66.4255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(121,66.78536);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(122,66.07777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(123,65.00506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(124,64.91898);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(125,65.14402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(126,63.94184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(127,64.57326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(128,63.63861);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(129,63.13224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(130,63.02321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(131,62.45957);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(132,62.65546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(133,61.9909);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(134,61.53643);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(135,60.85169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(136,60.82563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(137,61.49788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(138,60.30989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(139,60.41029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(140,59.93339);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(141,59.83764);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(142,58.80489);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(143,59.45496);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(144,59.19525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(145,58.57797);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(146,58.4795);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(147,57.88108);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(148,57.64076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(149,58.73785);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(150,57.49779);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(151,56.75379);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(152,56.82765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(153,56.29984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(154,57.57416);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(155,56.28129);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(156,55.81761);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(157,55.56502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(158,55.53229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(159,55.07678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(160,54.9878);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(161,55.16039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(162,54.22041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(163,54.80463);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(164,53.72351);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(165,54.15353);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(166,53.8087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(167,53.61612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(168,52.98735);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(169,52.90814);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(170,52.9071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(171,52.93937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(172,52.34995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(173,52.49838);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(174,51.65694);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(175,52.09578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(176,51.65608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(177,51.92971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(178,51.48012);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(179,51.33366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(180,51.36275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(181,50.93622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(182,51.42269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(183,51.37723);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(184,50.86008);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(185,50.01554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(186,50.46168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(187,50.59218);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(188,50.20194);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(189,50.10037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(190,49.94124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(191,49.62094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(192,49.75439);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(193,49.66227);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(194,49.38658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(195,48.70344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(196,49.09302);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(197,49.06751);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(198,48.97102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(199,48.35415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(200,48.63233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(201,48.54053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(202,48.55856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(203,48.33289);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(204,48.47565);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(205,48.39025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(206,49.28602);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(207,48.51319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(208,47.85639);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(209,48.37333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(210,47.90777);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(211,47.19301);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(212,47.25903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(213,47.08124);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(214,47.11115);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(215,47.51824);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(216,46.74003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(217,47.01276);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(218,46.36039);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(219,46.42074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(220,48.3552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(221,46.16023);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(222,46.14676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(223,46.15622);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(224,46.45373);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(225,45.71868);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(226,46.13127);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(227,48.76056);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(228,46.31738);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(229,45.69472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(230,45.63016);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(231,45.98175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(232,46.35907);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(233,45.33485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(234,45.03382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(235,46.01581);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(236,46.88718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(237,45.13883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(238,44.75946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(239,46.12096);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(240,44.75788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(241,45.35963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(242,44.55774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(243,44.56333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(244,44.40872);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(245,44.47414);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(246,43.99572);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(247,44.12381);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(248,44.24296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(249,44.35841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(250,43.83654);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(251,43.95928);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(252,44.33212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(253,44.4151);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(254,44.50566);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(255,43.62277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(256,44.25215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(257,43.3671);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(258,43.68481);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(259,43.55325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(260,43.51647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(261,43.44665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(262,43.49214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(263,43.11554);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(264,43.14841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(265,43.05368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(266,42.46018);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(267,43.22376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(268,42.76053);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(269,43.21645);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(270,42.5873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(271,42.26503);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(272,42.61092);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(273,42.44701);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(274,41.74608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(275,41.68091);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(276,41.8847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(277,42.12756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(278,41.80899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(279,42.66585);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(280,41.93918);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(281,44.02467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(282,42.00832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(283,43.21272);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(284,42.35433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(285,41.35175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(286,41.79938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(287,41.53324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(288,41.54592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(289,41.03628);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(290,41.85327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(291,41.37747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(292,42.01073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(293,41.61215);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(294,41.23826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(295,41.04217);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(296,40.70648);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(297,40.99197);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(298,41.1597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(299,40.82592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(300,40.68954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(301,41.08082);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(302,40.66324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(303,40.79165);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(304,41.3114);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(305,40.33333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(306,40.48062);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(307,40.42829);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(308,40.76209);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(309,40.21852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(310,40.44995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(311,40.44873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(312,40.06563);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(313,39.68555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(314,40.02393);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(315,40.45695);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(316,40.12236);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(317,41.76378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(318,41.08136);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(319,41.128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(320,39.27961);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(321,40.57854);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(322,38.96299);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(323,38.67787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(324,39.54724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(325,39.26904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(326,39.03842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(327,39.14164);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(328,39.56994);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(329,54.18322);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(330,38.74249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(331,39.16546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(332,38.97631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(333,38.88087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(334,38.60853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(335,38.43847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(336,38.64938);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(337,39.56921);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(338,38.68719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(339,38.32626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(340,38.34402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(341,38.52058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(342,37.86669);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(343,37.90233);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(344,38.3929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(345,37.85894);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(346,37.9522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(347,38.46321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(348,38.34501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(349,37.54134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(350,37.81879);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(351,37.9342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(352,38.97199);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(353,37.67905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(354,37.46002);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(355,37.39443);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(356,37.24656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(357,37.19355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(358,37.32103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(359,37.90784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(360,37.03074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(361,37.08781);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(362,37.13355);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(363,36.93212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(364,36.48615);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(365,37.18125);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(366,37.11005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(367,39.65147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(368,37.35806);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(369,36.91245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(370,36.93526);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(371,36.35319);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(372,36.51719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(373,36.44873);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(374,36.95972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(375,36.30509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(376,36.28475);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(377,36.09603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(378,36.57885);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(379,36.2826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(380,36.47864);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(381,36.08847);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(382,36.08979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(383,36.35368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(384,35.9433);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(385,36.9993);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(386,36.53969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(387,35.44144);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(388,35.47884);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(389,35.67255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(390,35.98912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(391,35.9655);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(392,35.39483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(393,35.32642);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(394,35.34371);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(395,35.24225);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(396,35.28178);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(397,35.51029);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(398,35.05794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(399,35.0486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(400,34.87865);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(401,34.70899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(402,34.69775);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(403,34.93458);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(404,34.64741);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(405,34.61434);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(406,34.6519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(407,34.53402);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(408,34.98077);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(409,37.17294);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(410,34.10065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(411,33.99596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(412,34.65958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(413,34.03117);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(414,35.50988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(415,34.05752);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(416,34.50525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(417,34.3595);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(418,33.95759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(419,34.04086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(420,35.04804);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(421,34.01047);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(422,34.15075);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(423,33.45747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(424,33.80668);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(425,33.62021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(426,32.97849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(427,33.45249);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(428,33.58926);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(429,33.61147);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(430,32.80457);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(431,33.15295);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(432,33.12936);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(433,32.88112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(434,32.94659);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(435,33.27204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(436,33.48366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(437,32.89888);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(438,32.67386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(439,32.83719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(440,32.67495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(441,32.84139);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(442,32.5636);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(443,32.31372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(444,32.55509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(445,32.12324);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(446,32.23708);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(447,32.80235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(448,32.48971);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(449,31.81774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(450,32.3497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(451,32.79328);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(452,31.83823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(453,32.32756);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(454,32.02896);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(455,31.88078);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(456,32.10025);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(457,31.67162);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(458,31.50281);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(459,31.29988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(460,31.40073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(461,31.72633);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(462,31.28839);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(463,31.61631);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(464,31.19587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(465,30.88597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(466,31.06866);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(467,31.15676);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(468,31.05732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(469,31.41651);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(470,31.78021);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(471,30.59058);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(472,30.60991);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(473,30.87619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(474,31.14411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(475,30.71946);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(476,30.52239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(477,30.62911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(478,30.37005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(479,30.04875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(480,30.30724);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(481,30.71558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(482,30.72578);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(483,29.99882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(484,30.18487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(485,29.74988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(486,31.55525);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(487,30.04237);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(488,31.82693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(489,29.73935);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(490,29.76048);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(491,30.14718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(492,29.70057);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(493,29.766);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(494,30.04997);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(495,29.55567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(496,30.13929);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(497,29.67037);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(498,29.34231);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(499,29.13663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(500,29.47749);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(501,29.85588);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(502,29.12504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(503,29.40753);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(504,29.38073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(505,28.5079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(506,28.97354);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(507,28.50653);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(508,28.94329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(509,28.59191);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(510,28.61134);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(511,28.57927);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(512,29.35972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(513,28.94386);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(514,28.94825);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(515,29.79304);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(516,28.36899);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(517,28.66702);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(518,28.325);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(519,28.13278);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(520,28.59031);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(521,27.95925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(522,27.74963);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(523,27.72851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(524,27.61089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(525,27.72964);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(526,27.98629);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(527,28.19774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(528,27.52206);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(529,27.74512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(530,27.46522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(531,27.75882);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(532,27.43342);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(533,27.57368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(534,27.31432);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(535,27.89104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(536,27.36736);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(537,27.38611);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(538,27.51323);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(539,27.42052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(540,27.16958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(541,27.04152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(542,27.1121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(543,26.72731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(544,27.15267);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(545,26.88307);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(546,26.70553);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(547,27.104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(548,27.24428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(549,27.05224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(550,27.24807);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(551,26.74759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(552,26.52666);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(553,26.46594);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(554,26.27273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(555,26.24467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(556,25.90955);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(557,26.94221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(558,26.51613);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(559,25.89558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(560,26.36275);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(561,25.91387);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(562,26.22235);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(563,26.27522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(564,26.03248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(565,26.82462);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(566,25.60255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(567,25.80428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(568,25.87326);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(569,26.00487);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(570,25.86523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(571,25.73758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(572,25.52248);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(573,25.33947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(574,25.69168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(575,25.39729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(576,25.19133);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(577,29.75168);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(578,25.08704);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(579,24.89174);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(580,25.26327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(581,25.34239);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(582,24.79378);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(583,25.24625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(584,24.89849);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(585,24.9656);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(586,25.10395);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(587,26.11507);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(588,24.81224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(589,24.39876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(590,24.68112);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(591,24.58568);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(592,25.55467);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(593,24.67822);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(594,24.37799);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(595,24.19545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(596,23.9428);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(597,24.74265);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(598,24.03094);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(599,23.96478);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(600,25.28202);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(601,24.5975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(602,24.1937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(603,24.42076);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(604,24.0455);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(605,24.16368);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(606,23.45051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(607,23.3273);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(608,23.18732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(609,24.20583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(610,23.95567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(611,24.22842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(612,23.41372);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(613,23.22065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(614,23.39731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(615,23.92344);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(616,23.92073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(617,23.80121);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(618,23.57912);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(619,23.47427);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(620,23.6573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(621,23.14546);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(622,23.03841);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(623,23.5321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(624,22.97413);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(625,23.47871);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(626,22.95625);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(627,22.70843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(628,22.71747);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(629,22.81519);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(630,22.90088);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(631,22.93557);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(632,22.46877);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(633,22.62033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(634,22.60571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(635,21.93619);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(636,22.94051);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(637,21.97979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(638,22.42389);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(639,23.0269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(640,22.32406);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(641,22.46241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(642,21.86663);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(643,22.35523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(644,22.17512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(645,22.30851);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(646,22.60226);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(647,21.35085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(648,21.41175);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(649,22.34911);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(650,22.3103);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(651,22.10035);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(652,22.14772);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(653,22.18834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(654,21.6612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(655,21.96821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(656,21.93073);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(657,21.69106);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(658,21.55603);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(659,21.19255);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(660,21.52731);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(661,21.23745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(662,21.89589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(663,21.29712);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(664,22.28953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(665,21.32185);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(666,21.45958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(667,20.98996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(668,21.07349);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(669,20.84071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(670,20.9677);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(671,20.80274);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(672,20.66832);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(673,20.47212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(674,20.96285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(675,20.87794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(676,20.7895);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(677,21.03347);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(678,21.0259);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(679,20.66471);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(680,20.59742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(681,20.85887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(682,20.29954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(683,20.72765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(684,20.40052);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(685,20.40596);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(686,19.85314);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(687,20.79163);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(688,21.12228);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(689,20.6436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(690,20.7823);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(691,20.79013);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(692,20.58212);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(693,20.11132);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(694,23.5391);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(695,20.26862);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(696,19.97099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(697,20.11079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(698,20.66417);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(699,19.71542);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(700,19.93411);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(701,20.216);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(702,20.13794);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(703,20.15158);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(704,19.40187);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(705,19.53705);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(706,19.7502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(707,19.80356);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(708,19.60363);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(709,19.71497);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(710,19.4981);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(711,19.52345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(712,19.21763);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(713,19.45366);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(714,19.34135);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(715,18.99383);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(716,19.14897);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(717,19.42401);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(718,19.42974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(719,19.16759);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(720,19.5883);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(721,19.00562);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(722,19.26592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(723,18.84679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(724,18.39359);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(725,18.86729);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(726,18.71484);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(727,19.04835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(728,18.68241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(729,18.89087);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(730,18.94442);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(731,18.70038);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(732,19.0875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(733,18.84969);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(734,19.00512);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(735,18.84937);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(736,18.87425);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(737,18.77069);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(738,18.77171);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(739,18.23887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(740,18.41584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(741,18.4958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(742,18.19284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(743,18.14608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(744,17.95089);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(745,18.13805);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(746,18.73436);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(747,18.30914);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(748,17.7071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(749,18.20974);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(750,17.95429);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(751,18.98842);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(752,17.91472);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(753,17.97988);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(754,17.71584);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(755,17.90589);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(756,17.56689);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(757,18.01834);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(758,17.57852);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(759,17.52502);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(760,17.679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(761,17.91869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(762,17.53788);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(763,17.67257);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(764,17.64501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(765,17.45476);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(766,18.08696);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(767,17.83534);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(768,17.75116);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(769,17.57827);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(770,17.59715);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(771,17.63102);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(772,17.08744);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(773,17.52182);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(774,17.55962);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(775,17.22498);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(776,17.78605);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(777,17.26311);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(778,17.50327);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(779,17.35518);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(780,16.75812);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(781,16.98422);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(782,16.58529);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(783,16.96213);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(784,17.24593);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(785,16.79996);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(786,16.86975);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(787,16.69456);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(788,16.87479);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(789,16.87843);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(790,20.79291);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(791,16.92608);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(792,17.16105);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(793,17.00338);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(794,16.43856);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(795,17.2904);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(796,16.24972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(797,16.509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(798,16.69321);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(799,15.88853);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(800,16.50976);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(801,16.00958);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(802,16.22803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(803,15.98965);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(804,16.3504);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(805,16.29245);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(806,16.25685);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(807,15.68382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(808,16.5686);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(809,16.63545);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(810,16.9156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(811,15.8362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(812,16.25821);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(813,15.64358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(814,16.19716);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(815,16.22345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(816,15.5947);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(817,15.85152);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(818,16.0097);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(819,16.01404);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(820,15.98683);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(821,15.59784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(822,15.53558);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(823,15.51385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(824,16.00362);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(825,15.55587);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(826,15.1523);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(827,15.52859);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(828,15.3376);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(829,15.80604);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(830,15.3024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(831,26.23922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(832,15.25027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(833,15.50995);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(834,15.70128);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(835,15.32632);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(836,15.01875);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(837,16.94277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(838,15.37954);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(839,15.33679);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(840,14.82998);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(841,14.99345);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(842,14.75876);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(843,15.40506);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(844,14.37444);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(845,15.10501);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(846,15.12597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(847,14.96922);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(848,15.10755);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(849,15.48658);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(850,14.54816);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(851,14.94612);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(852,15.21067);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(853,14.61567);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(854,14.92745);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(855,14.95555);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(856,14.78984);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(857,15.39229);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(858,14.44953);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(859,14.18903);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(860,14.4521);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(861,14.76495);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(862,14.55693);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(863,15.00266);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(864,14.2811);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(865,14.10156);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(866,14.7214);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(867,14.53889);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(868,14.25539);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(869,14.52548);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(870,14.11242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(871,14.62552);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(872,14.2765);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(873,13.96279);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(874,13.73285);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(875,14.45544);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(876,14.08005);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(877,13.69583);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(878,14.15415);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(879,13.91306);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(880,14.3485);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(881,14.21925);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(882,13.7104);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(883,14.19107);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(884,13.8333);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(885,14.10718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(886,13.96979);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(887,13.79474);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(888,13.6277);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(889,13.70665);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(890,13.85026);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(891,14.03564);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(892,13.6978);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(893,13.75358);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(894,13.85826);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(895,13.59774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(896,13.69968);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(897,12.98782);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(898,13.86571);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(899,13.49408);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(900,13.04221);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(901,13.59714);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(902,13.2917);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(903,13.68284);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(904,13.46664);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(905,13.31431);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(906,13.21697);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(907,13.08167);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(908,13.02486);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(909,13.71154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(910,13.28143);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(911,13.21003);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(912,13.19522);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(913,13.61036);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(914,13.04015);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(915,12.66681);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(916,13.53848);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(917,13.21831);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(918,13.49348);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(919,13.22672);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(920,13.28224);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(921,12.95033);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(922,12.7828);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(923,13.09762);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(924,13.30071);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(925,12.76592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(926,12.92063);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(927,12.61597);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(928,13.1591);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(929,12.98034);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(930,12.48483);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(931,12.34262);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(932,12.73887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(933,13.11573);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(934,12.62626);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(935,12.82027);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(936,12.36238);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(937,12.41592);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(938,12.62269);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(939,12.34041);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(940,12.6845);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(941,12.11646);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(942,12.58093);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(943,12.41241);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(944,12.74509);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(945,12.45719);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(946,12.44137);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(947,12.52684);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(948,12.24);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(949,12.07989);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(950,11.93184);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(951,12.23784);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(952,12.45329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(953,12.36923);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(954,11.73079);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(955,11.75024);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(956,12.56296);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(957,12.11085);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(958,12.23787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(959,11.97869);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(960,11.69399);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(961,12.03932);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(962,12.183);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(963,12.159);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(964,11.43758);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(965,11.47972);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(966,11.88242);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(967,11.95099);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(968,11.82803);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(969,11.71145);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(970,12.10727);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(971,11.94169);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(972,11.65959);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(973,11.9931);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(974,11.82905);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(975,11.63204);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(976,11.92647);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(977,11.64732);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(978,11.75742);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(979,11.91802);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(980,12.15887);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(981,11.85886);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(982,11.47774);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(983,11.77065);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(984,11.37835);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(985,11.81074);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(986,11.22329);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(987,11.54385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(988,11.35678);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(989,11.385);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(990,11.1945);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(991,10.78916);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(992,10.9054);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(993,11.43575);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(994,11.06815);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(995,11.42674);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(996,11.39154);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(997,11.58787);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(998,10.72382);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(999,11.27718);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1000,11.74086);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetBinError(1001,180.6776);
   VH_tagFirst_2b1c_Z_mass_stack_1->SetEntries(3988828);

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
   
   TH1D *VH_tagFirst_Z_mass__279 = new TH1D("VH_tagFirst_Z_mass__279","",1000,0,2000);
   VH_tagFirst_Z_mass__279->SetBinContent(1000,83);
   VH_tagFirst_Z_mass__279->SetBinContent(1001,43893);
   VH_tagFirst_Z_mass__279->SetEntries(3002745);

   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_mass__279->SetLineColor(ci);
   VH_tagFirst_Z_mass__279->SetLineWidth(2);
   VH_tagFirst_Z_mass__279->SetMarkerStyle(20);
   VH_tagFirst_Z_mass__279->SetMarkerSize(1.2);
   VH_tagFirst_Z_mass__279->GetXaxis()->SetRange(1,2000);
   VH_tagFirst_Z_mass__279->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__279->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__279->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__279->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__279->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__279->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_mass__279->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_mass__279->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_mass__279->Draw("same E");
   
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fx1279[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fy1279[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16969.22, 17765.48, 18352.09,
   18698.12, 18781.43, 18915.74, 18646.34, 18479.79, 18154.52, 17733.36, 17118.35, 16601.25, 16121.04, 15794.24, 15356.39, 15132.88, 14950.15, 15019.84, 14964.81,
   14738.46, 14673.52, 14423.62, 14166.79, 14129.06, 13921.47, 13824.98, 13766.99, 13337.11, 13351.78, 13121.64, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 118.9554 };
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fex1279[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagFirst_2b1c_Z_mass_fey1279[1000] = { 0, 0, 0, 0, 0.03914219, 0, 0, 0.06255593, 0.0612537, 0.08315432, 0.0529876, 0.09835943, 1.549424, 4.102962, 8.827457, 14.4338, 20.44723,
   27.34558, 34.31039, 41.51578, 48.66376, 56.84847, 62.34377, 68.71807, 74.53926, 80.53006, 84.45803, 88.51013, 92.15428, 95.60801, 98.1341, 99.93486, 101.8385,
   103.1722, 104.2934, 105.1227, 106.0615, 106.1805, 106.7629, 107.2804, 107.7501, 109.5368, 107.7594, 107.5543, 107.0661, 109.5762, 105.0443, 104.5686, 102.9575,
   101.1768, 100.4022, 99.21893, 97.18841, 97.51009, 95.59872, 94.85044, 95.07599, 93.43681, 92.60999, 92.67545, 91.63814, 90.911, 90.9498, 91.45241, 90.2638,
   89.59966, 90.41154, 88.89322, 87.92957, 87.41199, 86.21432, 86.71783, 90.67912, 85.95944, 84.56295, 84.21812, 84.35683, 83.51188, 84.1069, 83.06139, 83.06915,
   89.04379, 83.60133, 82.14898, 80.83645, 79.99158, 80.73746, 79.34696, 78.92913, 78.38592, 92.85901, 77.57154, 77.86871, 77.075, 77.43615, 76.37877, 74.98495,
   74.42616, 75.11756, 74.1788, 73.77825, 73.36144, 73.08826, 72.84966, 72.81192, 71.78831, 71.79403, 70.63443, 70.5683, 70.78568, 69.61467, 70.27896, 68.69409,
   68.60023, 68.48182, 67.88338, 67.97707, 67.52857, 66.8472, 66.4255, 66.78536, 66.07777, 65.00506, 64.91898, 65.14402, 63.94184, 64.57326, 63.63861, 63.13224,
   63.02321, 62.45957, 62.65546, 61.9909, 61.53643, 60.85169, 60.82563, 61.49788, 60.30989, 60.41029, 59.93339, 59.83764, 58.80489, 59.45496, 59.19525, 58.57797,
   58.4795, 57.88108, 57.64076, 58.73785, 57.49779, 56.75379, 56.82765, 56.29984, 57.57416, 56.28129, 55.81761, 55.56502, 55.53229, 55.07678, 54.9878, 55.16039,
   54.22041, 54.80463, 53.72351, 54.15353, 53.8087, 53.61612, 52.98735, 52.90814, 52.9071, 52.93937, 52.34995, 52.49838, 51.65694, 52.09578, 51.65608, 51.92971,
   51.48012, 51.33366, 51.36275, 50.93622, 51.42269, 51.37723, 50.86008, 50.01554, 50.46168, 50.59218, 50.20194, 50.10037, 49.94124, 49.62094, 49.75439, 49.66227,
   49.38658, 48.70344, 49.09302, 49.06751, 48.97102, 48.35415, 48.63233, 48.54053, 48.55856, 48.33289, 48.47565, 48.39025, 49.28602, 48.51319, 47.85639, 48.37333,
   47.90777, 47.19301, 47.25903, 47.08124, 47.11115, 47.51824, 46.74003, 47.01276, 46.36039, 46.42074, 48.3552, 46.16023, 46.14676, 46.15622, 46.45373, 45.71868,
   46.13127, 48.76056, 46.31738, 45.69472, 45.63016, 45.98175, 46.35907, 45.33485, 45.03382, 46.01581, 46.88718, 45.13883, 44.75946, 46.12096, 44.75788, 45.35963,
   44.55774, 44.56333, 44.40872, 44.47414, 43.99572, 44.12381, 44.24296, 44.35841, 43.83654, 43.95928, 44.33212, 44.4151, 44.50566, 43.62277, 44.25215, 43.3671,
   43.68481, 43.55325, 43.51647, 43.44665, 43.49214, 43.11554, 43.14841, 43.05368, 42.46018, 43.22376, 42.76053, 43.21645, 42.5873, 42.26503, 42.61092, 42.44701,
   41.74608, 41.68091, 41.8847, 42.12756, 41.80899, 42.66585, 41.93918, 44.02467, 42.00832, 43.21272, 42.35433, 41.35175, 41.79938, 41.53324, 41.54592, 41.03628,
   41.85327, 41.37747, 42.01073, 41.61215, 41.23826, 41.04217, 40.70648, 40.99197, 41.1597, 40.82592, 40.68954, 41.08082, 40.66324, 40.79165, 41.3114, 40.33333,
   40.48062, 40.42829, 40.76209, 40.21852, 40.44995, 40.44873, 40.06563, 39.68555, 40.02393, 40.45695, 40.12236, 41.76378, 41.08136, 41.128, 39.27961, 40.57854,
   38.96299, 38.67787, 39.54724, 39.26904, 39.03842, 39.14164, 39.56994, 54.18322, 38.74249, 39.16546, 38.97631, 38.88087, 38.60853, 38.43847, 38.64938, 39.56921,
   38.68719, 38.32626, 38.34402, 38.52058, 37.86669, 37.90233, 38.3929, 37.85894, 37.9522, 38.46321, 38.34501, 37.54134, 37.81879, 37.9342, 38.97199, 37.67905,
   37.46002, 37.39443, 37.24656, 37.19355, 37.32103, 37.90784, 37.03074, 37.08781, 37.13355, 36.93212, 36.48615, 37.18125, 37.11005, 39.65147, 37.35806, 36.91245,
   36.93526, 36.35319, 36.51719, 36.44873, 36.95972, 36.30509, 36.28475, 36.09603, 36.57885, 36.2826, 36.47864, 36.08847, 36.08979, 36.35368, 35.9433, 36.9993,
   36.53969, 35.44144, 35.47884, 35.67255, 35.98912, 35.9655, 35.39483, 35.32642, 35.34371, 35.24225, 35.28178, 35.51029, 35.05794, 35.0486, 34.87865, 34.70899,
   34.69775, 34.93458, 34.64741, 34.61434, 34.6519, 34.53402, 34.98077, 37.17294, 34.10065, 33.99596, 34.65958, 34.03117, 35.50988, 34.05752, 34.50525, 34.3595,
   33.95759, 34.04086, 35.04804, 34.01047, 34.15075, 33.45747, 33.80668, 33.62021, 32.97849, 33.45249, 33.58926, 33.61147, 32.80457, 33.15295, 33.12936, 32.88112,
   32.94659, 33.27204, 33.48366, 32.89888, 32.67386, 32.83719, 32.67495, 32.84139, 32.5636, 32.31372, 32.55509, 32.12324, 32.23708, 32.80235, 32.48971, 31.81774,
   32.3497, 32.79328, 31.83823, 32.32756, 32.02896, 31.88078, 32.10025, 31.67162, 31.50281, 31.29988, 31.40073, 31.72633, 31.28839, 31.61631, 31.19587, 30.88597,
   31.06866, 31.15676, 31.05732, 31.41651, 31.78021, 30.59058, 30.60991, 30.87619, 31.14411, 30.71946, 30.52239, 30.62911, 30.37005, 30.04875, 30.30724, 30.71558,
   30.72578, 29.99882, 30.18487, 29.74988, 31.55525, 30.04237, 31.82693, 29.73935, 29.76048, 30.14718, 29.70057, 29.766, 30.04997, 29.55567, 30.13929, 29.67037,
   29.34231, 29.13663, 29.47749, 29.85588, 29.12504, 29.40753, 29.38073, 28.5079, 28.97354, 28.50653, 28.94329, 28.59191, 28.61134, 28.57927, 29.35972, 28.94386,
   28.94825, 29.79304, 28.36899, 28.66702, 28.325, 28.13278, 28.59031, 27.95925, 27.74963, 27.72851, 27.61089, 27.72964, 27.98629, 28.19774, 27.52206, 27.74512,
   27.46522, 27.75882, 27.43342, 27.57368, 27.31432, 27.89104, 27.36736, 27.38611, 27.51323, 27.42052, 27.16958, 27.04152, 27.1121, 26.72731, 27.15267, 26.88307,
   26.70553, 27.104, 27.24428, 27.05224, 27.24807, 26.74759, 26.52666, 26.46594, 26.27273, 26.24467, 25.90955, 26.94221, 26.51613, 25.89558, 26.36275, 25.91387,
   26.22235, 26.27522, 26.03248, 26.82462, 25.60255, 25.80428, 25.87326, 26.00487, 25.86523, 25.73758, 25.52248, 25.33947, 25.69168, 25.39729, 25.19133, 29.75168,
   25.08704, 24.89174, 25.26327, 25.34239, 24.79378, 25.24625, 24.89849, 24.9656, 25.10395, 26.11507, 24.81224, 24.39876, 24.68112, 24.58568, 25.55467, 24.67822,
   24.37799, 24.19545, 23.9428, 24.74265, 24.03094, 23.96478, 25.28202, 24.5975, 24.1937, 24.42076, 24.0455, 24.16368, 23.45051, 23.3273, 23.18732, 24.20583,
   23.95567, 24.22842, 23.41372, 23.22065, 23.39731, 23.92344, 23.92073, 23.80121, 23.57912, 23.47427, 23.6573, 23.14546, 23.03841, 23.5321, 22.97413, 23.47871,
   22.95625, 22.70843, 22.71747, 22.81519, 22.90088, 22.93557, 22.46877, 22.62033, 22.60571, 21.93619, 22.94051, 21.97979, 22.42389, 23.0269, 22.32406, 22.46241,
   21.86663, 22.35523, 22.17512, 22.30851, 22.60226, 21.35085, 21.41175, 22.34911, 22.3103, 22.10035, 22.14772, 22.18834, 21.6612, 21.96821, 21.93073, 21.69106,
   21.55603, 21.19255, 21.52731, 21.23745, 21.89589, 21.29712, 22.28953, 21.32185, 21.45958, 20.98996, 21.07349, 20.84071, 20.9677, 20.80274, 20.66832, 20.47212,
   20.96285, 20.87794, 20.7895, 21.03347, 21.0259, 20.66471, 20.59742, 20.85887, 20.29954, 20.72765, 20.40052, 20.40596, 19.85314, 20.79163, 21.12228, 20.6436,
   20.7823, 20.79013, 20.58212, 20.11132, 23.5391, 20.26862, 19.97099, 20.11079, 20.66417, 19.71542, 19.93411, 20.216, 20.13794, 20.15158, 19.40187, 19.53705,
   19.7502, 19.80356, 19.60363, 19.71497, 19.4981, 19.52345, 19.21763, 19.45366, 19.34135, 18.99383, 19.14897, 19.42401, 19.42974, 19.16759, 19.5883, 19.00562,
   19.26592, 18.84679, 18.39359, 18.86729, 18.71484, 19.04835, 18.68241, 18.89087, 18.94442, 18.70038, 19.0875, 18.84969, 19.00512, 18.84937, 18.87425, 18.77069,
   18.77171, 18.23887, 18.41584, 18.4958, 18.19284, 18.14608, 17.95089, 18.13805, 18.73436, 18.30914, 17.7071, 18.20974, 17.95429, 18.98842, 17.91472, 17.97988,
   17.71584, 17.90589, 17.56689, 18.01834, 17.57852, 17.52502, 17.679, 17.91869, 17.53788, 17.67257, 17.64501, 17.45476, 18.08696, 17.83534, 17.75116, 17.57827,
   17.59715, 17.63102, 17.08744, 17.52182, 17.55962, 17.22498, 17.78605, 17.26311, 17.50327, 17.35518, 16.75812, 16.98422, 16.58529, 16.96213, 17.24593, 16.79996,
   16.86975, 16.69456, 16.87479, 16.87843, 20.79291, 16.92608, 17.16105, 17.00338, 16.43856, 17.2904, 16.24972, 16.509, 16.69321, 15.88853, 16.50976, 16.00958,
   16.22803, 15.98965, 16.3504, 16.29245, 16.25685, 15.68382, 16.5686, 16.63545, 16.9156, 15.8362, 16.25821, 15.64358, 16.19716, 16.22345, 15.5947, 15.85152,
   16.0097, 16.01404, 15.98683, 15.59784, 15.53558, 15.51385, 16.00362, 15.55587, 15.1523, 15.52859, 15.3376, 15.80604, 15.3024, 26.23922, 15.25027, 15.50995,
   15.70128, 15.32632, 15.01875, 16.94277, 15.37954, 15.33679, 14.82998, 14.99345, 14.75876, 15.40506, 14.37444, 15.10501, 15.12597, 14.96922, 15.10755, 15.48658,
   14.54816, 14.94612, 15.21067, 14.61567, 14.92745, 14.95555, 14.78984, 15.39229, 14.44953, 14.18903, 14.4521, 14.76495, 14.55693, 15.00266, 14.2811, 14.10156,
   14.7214, 14.53889, 14.25539, 14.52548, 14.11242, 14.62552, 14.2765, 13.96279, 13.73285, 14.45544, 14.08005, 13.69583, 14.15415, 13.91306, 14.3485, 14.21925,
   13.7104, 14.19107, 13.8333, 14.10718, 13.96979, 13.79474, 13.6277, 13.70665, 13.85026, 14.03564, 13.6978, 13.75358, 13.85826, 13.59774, 13.69968, 12.98782,
   13.86571, 13.49408, 13.04221, 13.59714, 13.2917, 13.68284, 13.46664, 13.31431, 13.21697, 13.08167, 13.02486, 13.71154, 13.28143, 13.21003, 13.19522, 13.61036,
   13.04015, 12.66681, 13.53848, 13.21831, 13.49348, 13.22672, 13.28224, 12.95033, 12.7828, 13.09762, 13.30071, 12.76592, 12.92063, 12.61597, 13.1591, 12.98034,
   12.48483, 12.34262, 12.73887, 13.11573, 12.62626, 12.82027, 12.36238, 12.41592, 12.62269, 12.34041, 12.6845, 12.11646, 12.58093, 12.41241, 12.74509, 12.45719,
   12.44137, 12.52684, 12.24, 12.07989, 11.93184, 12.23784, 12.45329, 12.36923, 11.73079, 11.75024, 12.56296, 12.11085, 12.23787, 11.97869, 11.69399, 12.03932,
   12.183, 12.159, 11.43758, 11.47972, 11.88242, 11.95099, 11.82803, 11.71145, 12.10727, 11.94169, 11.65959, 11.9931, 11.82905, 11.63204, 11.92647, 11.64732,
   11.75742, 11.91802, 12.15887, 11.85886, 11.47774, 11.77065, 11.37835, 11.81074, 11.22329, 11.54385, 11.35678, 11.385, 11.1945, 10.78916, 10.9054, 11.43575,
   11.06815, 11.42674, 11.39154, 11.58787, 10.72382, 11.27718, 11.74086 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagFirst_2b1c_Z_mass_fx1279,Graph_from_VH_tagFirst_2b1c_Z_mass_fy1279,Graph_from_VH_tagFirst_2b1c_Z_mass_fex1279,Graph_from_VH_tagFirst_2b1c_Z_mass_fey1279);
   gre->SetName("Graph_from_VH_tagFirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279 = new TH1F("Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279","",1000,0,2200);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->SetMinimum(-2007.255);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->SetMaximum(20932.51);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->SetLineColor(ci);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagFirst_2b1c_Z_mass1279);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagFirst_Z_mass","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagFirst_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__280 = new TH1D("data_mc_ratio__280","",1000,0,2000);
   data_mc_ratio__280->SetBinContent(1000,0.6977407);
   data_mc_ratio__280->SetBinContent(1001,0.7885643);
   data_mc_ratio__280->SetBinError(1000,0.076587);
   data_mc_ratio__280->SetBinError(1001,0.004551804);
   data_mc_ratio__280->SetMinimum(0.4);
   data_mc_ratio__280->SetMaximum(1.6);
   data_mc_ratio__280->SetEntries(45.89299);
   data_mc_ratio__280->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__280->SetLineColor(ci);
   data_mc_ratio__280->SetLineWidth(2);
   data_mc_ratio__280->SetMarkerStyle(20);
   data_mc_ratio__280->SetMarkerSize(1.2);
   data_mc_ratio__280->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__280->GetXaxis()->SetRange(1,150);
   data_mc_ratio__280->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__280->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__280->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__280->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__280->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__280->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__280->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__280->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__280->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__280->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1280[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1280[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1280[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1280[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005783067, 0.005625228, 0.005549151,
   0.005517783, 0.005553005, 0.005557422, 0.005688057, 0.005745767, 0.005880789, 0.006049637, 0.006294417, 0.006598109, 0.006684393, 0.006809719, 0.006972087, 0.007240936, 0.007026305, 0.00696203, 0.006879971,
   0.006864815, 0.006842411, 0.006878921, 0.006860299, 0.006901386, 0.006866998, 0.006860803, 0.006906085, 0.007005778, 0.006936155, 0.007062792, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.09869969 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1280,Graph_from_mc_statistical_error_fy1280,Graph_from_mc_statistical_error_fex1280,Graph_from_mc_statistical_error_fey1280);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1280 = new TH1F("Graph_Graph_from_mc_statistical_error1280","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1280->SetMinimum(0.8815604);
   Graph_Graph_from_mc_statistical_error1280->SetMaximum(1.11844);
   Graph_Graph_from_mc_statistical_error1280->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1280->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1280->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1280->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1280);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->Modified();
   Z_mass_tagFirst_SR_18->cd();
   Z_mass_tagFirst_SR_18->SetSelected(Z_mass_tagFirst_SR_18);
}
