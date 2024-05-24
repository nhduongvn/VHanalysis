#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_SR_18()
{
//=========Macro generated from canvas: Z_mass_tagOnly_SR_18/Z_mass_tagOnly_SR_18
//=========  (Fri May 24 11:23:54 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_SR_18 = new TCanvas("Z_mass_tagOnly_SR_18", "Z_mass_tagOnly_SR_18",0,0,600,600);
   Z_mass_tagOnly_SR_18->SetHighLightColor(2);
   Z_mass_tagOnly_SR_18->Range(0,0,1,1);
   Z_mass_tagOnly_SR_18->SetFillColor(0);
   Z_mass_tagOnly_SR_18->SetFillStyle(4000);
   Z_mass_tagOnly_SR_18->SetBorderMode(0);
   Z_mass_tagOnly_SR_18->SetBorderSize(2);
   Z_mass_tagOnly_SR_18->SetFrameFillStyle(1000);
   Z_mass_tagOnly_SR_18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-53.01556,315.7258,52972.54);
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
   st->SetMaximum(47669.98);
   
   TH1F *st_stack_44 = new TH1F("st_stack_44","",1000,0,2000);
   st_stack_44->SetMinimum(0.01);
   st_stack_44->SetMaximum(47669.98);
   st_stack_44->SetDirectory(nullptr);
   st_stack_44->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_44->SetLineColor(ci);
   st_stack_44->SetLineWidth(0);
   st_stack_44->GetXaxis()->SetRange(1,150);
   st_stack_44->GetXaxis()->SetLabelFont(42);
   st_stack_44->GetXaxis()->SetTitleOffset(1);
   st_stack_44->GetXaxis()->SetTitleFont(42);
   st_stack_44->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_44->GetYaxis()->SetLabelFont(42);
   st_stack_44->GetYaxis()->SetLabelSize(0.05);
   st_stack_44->GetYaxis()->SetTitleSize(0.057);
   st_stack_44->GetYaxis()->SetTitleOffset(1.2);
   st_stack_44->GetYaxis()->SetTitleFont(42);
   st_stack_44->GetZaxis()->SetLabelFont(42);
   st_stack_44->GetZaxis()->SetTitleOffset(1);
   st_stack_44->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_44);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(31,20433.47);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(32,20904.36);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(33,21344.83);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(34,21451.49);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(35,21300.83);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(36,21172.78);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(37,20943.96);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(38,20653.46);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(39,20464.33);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(40,19958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(41,19614.12);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(42,18938.21);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(43,18571.28);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(44,18203.43);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(45,17724.63);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(46,17351.33);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(47,16757.52);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(48,16492.62);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(49,16210.11);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(50,15665.7);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(51,15483.49);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(52,15069.87);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(53,14714.13);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(54,14412.13);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(55,13964.64);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(56,13982.68);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(57,13580.36);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(58,13319.1);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(59,13038.01);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(60,12986.38);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,76.69298);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,36914.29);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(5,0.03025586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(7,0.02179663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(8,0.0452862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(9,0.03025535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(10,0.06190361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(11,0.04695568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.5222223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,1.608074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,3.899734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,9.207849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,15.02538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,22.35493);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,28.62394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,36.42144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,43.69199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,51.23797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,58.20643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,63.54456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,68.91172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,74.43303);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,78.26664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,81.47653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,84.44618);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,87.11546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,89.088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,90.26411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,91.34953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,92.22329);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,92.73934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,92.57702);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,92.41567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,92.01258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,91.8456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,91.75593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,90.97038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,90.94586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,89.60558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,89.66735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,88.68256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,88.06985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,87.11337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,85.92752);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,85.50599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,84.98564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,84.10569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,83.22318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,82.55503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,81.42478);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,80.28737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,79.36665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,79.34864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,78.14011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,77.46727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,76.68711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,76.77056);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,75.74084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,75.47889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,74.90535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,74.26192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,73.55622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,73.30071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,72.50234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,72.52434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,71.71739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,71.34893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,70.30865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,70.21277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,72.77703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,69.30007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,68.95026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,68.53223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,68.44712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,67.12113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,68.62025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,66.61635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,66.79987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,69.96718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,66.29373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,65.92809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,64.52719);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,63.90061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,63.96373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,63.22221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,63.12874);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,62.92505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,72.99896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,62.4848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,61.63827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,61.3479);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,61.35686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,60.44555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,59.67984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,59.36198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,59.46853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,59.1864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,59.15056);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,58.29972);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,58.16881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,57.97788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,57.7216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,57.14667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,57.06914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,56.02177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,56.18052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,56.27606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,55.5368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,55.9006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,54.76372);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,54.78809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,54.3844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,53.50461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,54.3707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,53.9099);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,53.22978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,53.00022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,52.89921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,53.43043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,52.2801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,52.9089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,53.38277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,51.98313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,51.6053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,55.99799);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,51.77697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,51.18788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,50.59108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,50.59454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,50.16807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,50.10821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,49.66584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,49.96058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,49.25101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,51.03345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,49.99304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,48.79703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,49.06308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,48.91087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,48.54682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,48.45361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,48.207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,48.03866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,47.92528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,47.53702);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,48.48483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,47.60862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,47.88837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,47.60515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,46.58935);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,47.70318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,46.59855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,46.6524);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,46.44177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,46.36278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,47.01188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,46.28951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,46.07465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,46.07119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,46.64793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,45.03907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,45.56087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,45.69127);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,45.2104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,44.68264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,45.21717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,45.03234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,44.63241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,44.28304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,44.14931);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,44.20776);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,44.41512);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,44.1865);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,44.03013);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,43.78789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,43.7897);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,43.79445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,44.23588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,44.31936);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,44.47122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,43.7708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,43.16749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,43.4738);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,43.04809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,43.36547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,42.83177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,43.29398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,42.56789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,43.02549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,42.93567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,42.64825);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,42.19043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,42.30834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,42.32394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,42.16452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,41.60652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,41.84265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,42.17029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,41.99941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,42.09431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,42.03817);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,41.46475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,41.33959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,41.48134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,41.35984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,40.66365);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,41.3725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,40.74515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,40.82477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,40.95104);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,40.75241);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,40.93881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,40.82492);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,40.62554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,40.25734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,40.04394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,40.45232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,40.26465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,40.32977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,39.82344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,39.86872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,39.89812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,40.0978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,41.2602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,39.84953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,39.92192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,40.09547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,39.87221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,39.92401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,39.61929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,39.28469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,38.88617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,39.29298);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,39.02433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,38.98867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,39.48257);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,38.3218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,39.05085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,38.54358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,40.0506);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,38.20982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,38.40647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,38.42908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,38.19904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,38.24709);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,38.84475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,37.79463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,37.89171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,38.00845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,37.33712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,37.64314);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,38.14166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,37.4613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,37.6141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,37.43718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,37.61346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,37.10743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,37.44023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,37.32756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,36.95373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,37.05075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,36.91404);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,36.62026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,36.61086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,36.61022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,36.98431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,36.29796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,36.39149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,36.29675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,36.29388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,36.04454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,35.66739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,36.10246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,35.55033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,35.75805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,35.80494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,35.8485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,36.44943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,35.98217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,36.60345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,35.64578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,35.12944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,35.49535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,35.25875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,35.17744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,35.26834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,34.90089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,35.08504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,35.67264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,35.05256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,34.79878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,34.56126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,34.54845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,34.64102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,34.29527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,34.6658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,34.53794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,34.52394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,34.10927);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,34.10955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,36.06503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,33.93982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,34.10732);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,33.9149);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,33.72527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,33.68601);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,33.75221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,34.44981);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,33.66819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,33.32774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,33.2848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,33.49928);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,33.6043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,33.53781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,34.13553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,33.90128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,32.93596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,33.13694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,32.74863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,32.64824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,32.64832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,32.92569);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,32.94155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,32.45553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,32.23197);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,42.91787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,32.27436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,32.26884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,32.14984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,32.06387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,31.75203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,32.07138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,31.79693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,31.91485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,31.78125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,31.67276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,31.72338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,31.56994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,31.63994);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,31.32121);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,31.35362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,31.32926);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,31.30613);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,31.20463);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,31.14574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,30.76668);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,30.87853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,30.9028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,31.3788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,31.1483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,30.8222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,30.43218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,30.43825);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,30.61954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,30.52797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,30.59026);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,30.55695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,30.65413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,30.11229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,30.08201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,29.83745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,30.98952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,29.74057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,31.84019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,29.64394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,29.84967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,29.88841);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,29.83124);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,30.2312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,29.8324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,29.85534);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,29.49902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,29.05285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,29.0793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,29.49272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,29.12669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,28.88186);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,28.87982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,28.87362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,28.79133);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,28.64638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,29.97281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,28.92293);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,28.31664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,28.36019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,28.29671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,28.35019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,29.05051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,28.04886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,28.48046);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,28.27234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,28.17356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,27.80617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,28.45049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,27.85315);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,27.84394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,27.38136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,27.7087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,27.26641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,27.86022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,27.63325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,27.55785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,27.32422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,27.22808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,27.47869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,27.21287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,27.1079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,27.26929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,26.83564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,27.05435);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,27.81474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,26.66533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,27.25403);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,26.84765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,29.70999);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,26.99436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,27.369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,26.74221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,26.98748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,26.36207);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,26.68439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,26.04777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,26.22914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,26.13477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,26.20725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,26.33903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,25.82507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,26.24712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,25.94491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,25.35853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,25.92117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,25.53721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,26.10216);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,25.62371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,25.38622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,25.43033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,25.45815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,25.51151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,25.09529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,25.0903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,25.02358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,25.23263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,25.1399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,25.1452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,25.25248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,25.00148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,25.31044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,25.15049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,24.44685);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,24.98904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,24.68905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,24.48416);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,24.68658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,24.52282);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,24.46056);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,24.42905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,25.62676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,24.35753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,24.21945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,24.17269);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,24.27332);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,23.94579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,24.18737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,23.63579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,23.48727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,24.32069);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,23.62032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,23.80716);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,23.47401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,24.02863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,23.81231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,23.42708);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,23.28014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,23.50153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,23.81949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,23.1693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,23.11791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,23.11731);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,23.48502);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,23.0113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,22.74504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,23.07722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,23.86247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,22.61454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,22.71084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,22.72829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,22.52614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,22.87779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,22.5842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,22.63536);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,22.70599);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,22.49361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,22.75755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,22.14337);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,21.93258);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,22.15378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,22.55428);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,22.16637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,22.03137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,22.12066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,21.95176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,22.10065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,21.95958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,21.61854);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,21.68529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,21.74385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,21.50393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,21.37846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,21.95276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,21.57749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,21.64155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,21.56506);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,21.32507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,21.4788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,21.456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,21.23527);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,21.26122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,21.29217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,20.90864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,20.75355);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,20.6739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,20.83757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,20.93733);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,21.04449);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,20.74359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,20.75371);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,20.85918);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,20.54381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,20.69667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,20.89244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,20.70778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,20.34328);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,20.57834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,20.36687);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,20.49634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,21.11037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,20.48892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,20.54648);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,20.08607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,19.97859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,20.49369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,20.04701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,19.75313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,20.47003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,19.76201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,20.05166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,20.02087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,19.85201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,19.56074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,19.71937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,19.72122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,19.3843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,19.42018);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,20.65396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,19.4592);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,19.21257);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,19.38367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,19.43917);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,19.1378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,19.14017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,19.27368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,19.13048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,19.36649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,18.96852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,19.18214);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,19.02035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,19.05795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,18.85244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,18.99346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,18.70302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,18.72367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,18.44999);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,19.0521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,21.67387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,18.436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,18.65614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,18.5624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,18.38833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,18.34589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,18.79643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,18.56963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,18.77126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,18.44483);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,18.15819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,18.01285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,17.91249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,18.17436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,17.91441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,18.77562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,17.74082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,18.26162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,17.65278);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,17.74554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,24.65414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,17.8156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,17.64008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,17.84444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,17.48737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,17.56265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,17.90657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,17.59393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,17.39464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,17.155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,17.43387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,17.32212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,17.50516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,17.38338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,17.73385);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,17.13896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,17.138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,17.00164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,17.48933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,17.34863);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,16.93058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,17.19993);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,17.15661);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,16.65555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,16.85354);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,16.80684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,16.58256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,16.59172);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,17.13933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,16.74109);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,16.6547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,16.78427);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,16.4912);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,16.95824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,16.64919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,16.5856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,16.69699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,16.65132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,16.13219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,16.56369);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,16.16804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,16.48852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,16.32989);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,16.57359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,16.09861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,16.03195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,16.1602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,16.43467);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,16.53476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,16.29531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,15.91705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,16.04025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,15.85163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,16.11135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,16.04957);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,15.86049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,16.12119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,15.69352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,15.98379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,16.01367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,15.92788);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,15.80597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,15.30891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,15.52676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,15.62508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,15.9053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,15.55902);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,15.66556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,15.5622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,15.4497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,15.36023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,15.37838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,15.22166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,15.39359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,15.28689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,15.24821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,15.01079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,15.37639);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,15.06185);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,14.91165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,14.83452);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,14.86559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,15.35388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,15.02558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,14.91497);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,14.66645);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,15.15002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,15.11736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,14.83867);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,14.42364);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,15.16375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,14.68908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,14.78281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,14.77983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,14.85388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,14.82715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,14.60959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,16.97976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,14.72914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,14.64794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,14.50934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,14.87505);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,14.26075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,14.61477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,14.73961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,14.85834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,14.54754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,14.37294);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,14.36628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,14.01886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,14.304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,14.33904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,14.17062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,14.12546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,13.95114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,13.58698);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,14.33579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,13.79779);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,13.91061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,13.42688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,14.15344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,14.17526);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,13.83875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,14.35235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,13.58201);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,13.90475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,13.57232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,13.72022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,13.4747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,13.61969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,13.6443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,13.57529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,13.82541);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,12.95248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,13.37171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,13.45374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,14.22693);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,13.59407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,13.32408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,13.44184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,13.58433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,13.35237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,13.33832);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,13.2737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,13.49515);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,13.35858);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,13.04461);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,12.89049);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,13.15377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,13.23368);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,12.85514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,12.89514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,13.05718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,13.05081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,13.79311);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,13.01325);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,13.01893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,12.81147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,12.85058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,12.81873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,13.36953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,12.54778);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,12.85182);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,12.8664);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,13.03408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,12.6958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,12.51951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,12.4533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,12.6905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,13.09875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,12.71231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,12.54363);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,12.33621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,12.70884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,12.54175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,12.28878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,12.33559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,12.27273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,12.42985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,12.51182);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,12.24717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,12.37593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,12.45154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,12.16941);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,12.52712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,12.04422);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,12.14498);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,12.32822);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,12.17523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,12.05352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,11.96784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,11.93019);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,12.08638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,15.17777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,11.98489);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,11.85245);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,11.97622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,11.94864);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,11.61438);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,11.66654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,12.01538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,12.08756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,11.4448);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,11.46485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,11.75237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,12.26959);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,11.46384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,11.60723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,11.52177);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,11.62757);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,11.42184);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,11.75669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,11.62257);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,11.5816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,11.45813);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,11.25963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,11.56575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,11.50246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,11.52395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,11.39853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,11.50753);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,11.25759);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,11.44002);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,11.45135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,11.5624);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,10.8004);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,11.09158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,11.33466);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,11.33829);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,10.94227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,11.14786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,10.96173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,11.32409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,11.03747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,19.42921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,11.04247);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,11.08573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,11.36078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,10.69703);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,10.71554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,10.74803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,10.75029);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,10.93408);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,10.72399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,10.60079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,10.75835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,10.88027);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,10.3185);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,10.88549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,10.66178);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,10.46431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,10.579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,10.63496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,10.34574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,10.48349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,10.59875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,10.07771);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,10.9538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,10.68558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,10.52236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,10.84072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,10.34543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,10.29236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,10.61609);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,10.68036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,10.68695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,10.85954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,10.33986);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,10.3235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,10.29958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,10.19848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,10.57288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,10.5414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,9.893549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,10.04375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,10.47711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,10.13798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,9.988014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,10.12634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,9.660777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,10.01544);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,9.838586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,9.83444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,10.01183);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,9.925175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,10.03353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,10.18798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,9.922242);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,9.714996);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,9.696006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,9.849691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,9.615861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,10.12899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,9.967529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,10.07234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,9.633357);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,9.850093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,9.675431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,9.797228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,9.829895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,9.517801);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,9.840407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,9.406286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,9.207884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,9.643969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,9.468252);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,9.661901);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,9.520038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,9.636148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,9.350466);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,9.209022);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,9.362898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,9.495644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,9.347439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,9.555903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,9.503838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,12.51246);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,9.401014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,8.915969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,9.559532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,9.596088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,9.499113);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,9.580232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,9.241966);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,9.511249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,9.257339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,8.891139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,9.140285);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,8.9062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,9.312096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,9.162342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,9.053112);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,8.913842);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,8.657645);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,8.667602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,9.084136);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,9.382169);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,8.881391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,8.89878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,8.607737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,8.979494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,8.83586);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,8.684358);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,9.016469);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,8.582567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,8.879039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,8.97617);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,8.854543);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,8.630234);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,8.911367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,8.592212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,8.712576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,8.54749);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,8.729754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,9.017356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,8.777123);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,8.771754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,8.285424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,8.213477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,8.833114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,8.625406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,8.697434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,8.41198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,7.902721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,8.410092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,8.463209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,8.565424);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,8.094786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,8.049843);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,8.506511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,8.294303);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,8.256447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,8.274584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,8.655165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,8.324869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,8.320644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,8.604904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,8.309975);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,8.306691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,8.358182);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,8.065423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,8.146079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,8.142961);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,8.106107);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,8.070675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,8.457951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,8.139231);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,8.014545);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,8.040078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,7.97276);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,8.191098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,8.093943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,8.076331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,7.725286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,7.933062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,7.797802);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,7.861683);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,7.91215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,8.003165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,7.845054);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,8.237523);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,7.663024);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,7.872162);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,7.932171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,124.3098);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(4870323);

   ci = TColor::GetColor("#ff6600");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Z_mass_stack_1->SetLineColor(ci);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Z_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_tagOnly_2b1c_Z_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_tagOnly_Z_mass__87 = new TH1D("VH_tagOnly_Z_mass__87","",1000,0,2000);
   VH_tagOnly_Z_mass__87->SetBinContent(1000,83);
   VH_tagOnly_Z_mass__87->SetBinContent(1001,41179);
   VH_tagOnly_Z_mass__87->SetEntries(2827694);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__87->SetLineColor(ci);
   VH_tagOnly_Z_mass__87->SetLineWidth(2);
   VH_tagOnly_Z_mass__87->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__87->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__87->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__87->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__87->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__87->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__87->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__87->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__87->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__87->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__87->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__87->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1087[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1087[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20433.47, 20904.36, 21344.83,
   21451.49, 21300.83, 21172.78, 20943.96, 20653.46, 20464.33, 19958, 19614.12, 18938.21, 18571.28, 18203.43, 17724.63, 17351.33, 16757.52, 16492.62, 16210.11,
   15665.7, 15483.49, 15069.87, 14714.13, 14412.13, 13964.64, 13982.68, 13580.36, 13319.1, 13038.01, 12986.38, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 76.69298 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1087[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1087[1000] = { 0, 0, 0, 0, 0.03025586, 0, 0.02179663, 0.0452862, 0.03025535, 0.06190361, 0.04695568, 0.5222223, 1.608074, 3.899734, 9.207849, 15.02538, 22.35493,
   28.62394, 36.42144, 43.69199, 51.23797, 58.20643, 63.54456, 68.91172, 74.43303, 78.26664, 81.47653, 84.44618, 87.11546, 89.088, 90.26411, 91.34953, 92.22329,
   92.73934, 92.57702, 92.41567, 92.01258, 91.8456, 91.75593, 90.97038, 90.94586, 89.60558, 89.66735, 88.68256, 88.06985, 87.11337, 85.92752, 85.50599, 84.98564,
   84.10569, 83.22318, 82.55503, 81.42478, 80.28737, 79.36665, 79.34864, 78.14011, 77.46727, 76.68711, 76.77056, 75.74084, 75.47889, 74.90535, 74.26192, 73.55622,
   73.30071, 72.50234, 72.52434, 71.71739, 71.34893, 70.30865, 70.21277, 72.77703, 69.30007, 68.95026, 68.53223, 68.44712, 67.12113, 68.62025, 66.61635, 66.79987,
   69.96718, 66.29373, 65.92809, 64.52719, 63.90061, 63.96373, 63.22221, 63.12874, 62.92505, 72.99896, 62.4848, 61.63827, 61.3479, 61.35686, 60.44555, 59.67984,
   59.36198, 59.46853, 59.1864, 59.15056, 58.29972, 58.16881, 57.97788, 57.7216, 57.14667, 57.06914, 56.02177, 56.18052, 56.27606, 55.5368, 55.9006, 54.76372,
   54.78809, 54.3844, 53.50461, 54.3707, 53.9099, 53.22978, 53.00022, 52.89921, 53.43043, 52.2801, 52.9089, 53.38277, 51.98313, 51.6053, 55.99799, 51.77697,
   51.18788, 50.59108, 50.59454, 50.16807, 50.10821, 49.66584, 49.96058, 49.25101, 51.03345, 49.99304, 48.79703, 49.06308, 48.91087, 48.54682, 48.45361, 48.207,
   48.03866, 47.92528, 47.53702, 48.48483, 47.60862, 47.88837, 47.60515, 46.58935, 47.70318, 46.59855, 46.6524, 46.44177, 46.36278, 47.01188, 46.28951, 46.07465,
   46.07119, 46.64793, 45.03907, 45.56087, 45.69127, 45.2104, 44.68264, 45.21717, 45.03234, 44.63241, 44.28304, 44.14931, 44.20776, 44.41512, 44.1865, 44.03013,
   43.78789, 43.7897, 43.79445, 44.23588, 44.31936, 44.47122, 43.7708, 43.16749, 43.4738, 43.04809, 43.36547, 42.83177, 43.29398, 42.56789, 43.02549, 42.93567,
   42.64825, 42.19043, 42.30834, 42.32394, 42.16452, 41.60652, 41.84265, 42.17029, 41.99941, 42.09431, 42.03817, 41.46475, 41.33959, 41.48134, 41.35984, 40.66365,
   41.3725, 40.74515, 40.82477, 40.95104, 40.75241, 40.93881, 40.82492, 40.62554, 40.25734, 40.04394, 40.45232, 40.26465, 40.32977, 39.82344, 39.86872, 39.89812,
   40.0978, 41.2602, 39.84953, 39.92192, 40.09547, 39.87221, 39.92401, 39.61929, 39.28469, 38.88617, 39.29298, 39.02433, 38.98867, 39.48257, 38.3218, 39.05085,
   38.54358, 40.0506, 38.20982, 38.40647, 38.42908, 38.19904, 38.24709, 38.84475, 37.79463, 37.89171, 38.00845, 37.33712, 37.64314, 38.14166, 37.4613, 37.6141,
   37.43718, 37.61346, 37.10743, 37.44023, 37.32756, 36.95373, 37.05075, 36.91404, 36.62026, 36.61086, 36.61022, 36.98431, 36.29796, 36.39149, 36.29675, 36.29388,
   36.04454, 35.66739, 36.10246, 35.55033, 35.75805, 35.80494, 35.8485, 36.44943, 35.98217, 36.60345, 35.64578, 35.12944, 35.49535, 35.25875, 35.17744, 35.26834,
   34.90089, 35.08504, 35.67264, 35.05256, 34.79878, 34.56126, 34.54845, 34.64102, 34.29527, 34.6658, 34.53794, 34.52394, 34.10927, 34.10955, 36.06503, 33.93982,
   34.10732, 33.9149, 33.72527, 33.68601, 33.75221, 34.44981, 33.66819, 33.32774, 33.2848, 33.49928, 33.6043, 33.53781, 34.13553, 33.90128, 32.93596, 33.13694,
   32.74863, 32.64824, 32.64832, 32.92569, 32.94155, 32.45553, 32.23197, 42.91787, 32.27436, 32.26884, 32.14984, 32.06387, 31.75203, 32.07138, 31.79693, 31.91485,
   31.78125, 31.67276, 31.72338, 31.56994, 31.63994, 31.32121, 31.35362, 31.32926, 31.30613, 31.20463, 31.14574, 30.76668, 30.87853, 30.9028, 31.3788, 31.1483,
   30.8222, 30.43218, 30.43825, 30.61954, 30.52797, 30.59026, 30.55695, 30.65413, 30.11229, 30.08201, 29.83745, 30.98952, 29.74057, 31.84019, 29.64394, 29.84967,
   29.88841, 29.83124, 30.2312, 29.8324, 29.85534, 29.49902, 29.05285, 29.0793, 29.49272, 29.12669, 28.88186, 28.87982, 28.87362, 28.79133, 28.64638, 29.97281,
   28.92293, 28.31664, 28.36019, 28.29671, 28.35019, 29.05051, 28.04886, 28.48046, 28.27234, 28.17356, 27.80617, 28.45049, 27.85315, 27.84394, 27.38136, 27.7087,
   27.26641, 27.86022, 27.63325, 27.55785, 27.32422, 27.22808, 27.47869, 27.21287, 27.1079, 27.26929, 26.83564, 27.05435, 27.81474, 26.66533, 27.25403, 26.84765,
   29.70999, 26.99436, 27.369, 26.74221, 26.98748, 26.36207, 26.68439, 26.04777, 26.22914, 26.13477, 26.20725, 26.33903, 25.82507, 26.24712, 25.94491, 25.35853,
   25.92117, 25.53721, 26.10216, 25.62371, 25.38622, 25.43033, 25.45815, 25.51151, 25.09529, 25.0903, 25.02358, 25.23263, 25.1399, 25.1452, 25.25248, 25.00148,
   25.31044, 25.15049, 24.44685, 24.98904, 24.68905, 24.48416, 24.68658, 24.52282, 24.46056, 24.42905, 25.62676, 24.35753, 24.21945, 24.17269, 24.27332, 23.94579,
   24.18737, 23.63579, 23.48727, 24.32069, 23.62032, 23.80716, 23.47401, 24.02863, 23.81231, 23.42708, 23.28014, 23.50153, 23.81949, 23.1693, 23.11791, 23.11731,
   23.48502, 23.0113, 22.74504, 23.07722, 23.86247, 22.61454, 22.71084, 22.72829, 22.52614, 22.87779, 22.5842, 22.63536, 22.70599, 22.49361, 22.75755, 22.14337,
   21.93258, 22.15378, 22.55428, 22.16637, 22.03137, 22.12066, 21.95176, 22.10065, 21.95958, 21.61854, 21.68529, 21.74385, 21.50393, 21.37846, 21.95276, 21.57749,
   21.64155, 21.56506, 21.32507, 21.4788, 21.456, 21.23527, 21.26122, 21.29217, 20.90864, 20.75355, 20.6739, 20.83757, 20.93733, 21.04449, 20.74359, 20.75371,
   20.85918, 20.54381, 20.69667, 20.89244, 20.70778, 20.34328, 20.57834, 20.36687, 20.49634, 21.11037, 20.48892, 20.54648, 20.08607, 19.97859, 20.49369, 20.04701,
   19.75313, 20.47003, 19.76201, 20.05166, 20.02087, 19.85201, 19.56074, 19.71937, 19.72122, 19.3843, 19.42018, 20.65396, 19.4592, 19.21257, 19.38367, 19.43917,
   19.1378, 19.14017, 19.27368, 19.13048, 19.36649, 18.96852, 19.18214, 19.02035, 19.05795, 18.85244, 18.99346, 18.70302, 18.72367, 18.44999, 19.0521, 21.67387,
   18.436, 18.65614, 18.5624, 18.38833, 18.34589, 18.79643, 18.56963, 18.77126, 18.44483, 18.15819, 18.01285, 17.91249, 18.17436, 17.91441, 18.77562, 17.74082,
   18.26162, 17.65278, 17.74554, 24.65414, 17.8156, 17.64008, 17.84444, 17.48737, 17.56265, 17.90657, 17.59393, 17.39464, 17.155, 17.43387, 17.32212, 17.50516,
   17.38338, 17.73385, 17.13896, 17.138, 17.00164, 17.48933, 17.34863, 16.93058, 17.19993, 17.15661, 16.65555, 16.85354, 16.80684, 16.58256, 16.59172, 17.13933,
   16.74109, 16.6547, 16.78427, 16.4912, 16.95824, 16.64919, 16.5856, 16.69699, 16.65132, 16.13219, 16.56369, 16.16804, 16.48852, 16.32989, 16.57359, 16.09861,
   16.03195, 16.1602, 16.43467, 16.53476, 16.29531, 15.91705, 16.04025, 15.85163, 16.11135, 16.04957, 15.86049, 16.12119, 15.69352, 15.98379, 16.01367, 15.92788,
   15.80597, 15.30891, 15.52676, 15.62508, 15.9053, 15.55902, 15.66556, 15.5622, 15.4497, 15.36023, 15.37838, 15.22166, 15.39359, 15.28689, 15.24821, 15.01079,
   15.37639, 15.06185, 14.91165, 14.83452, 14.86559, 15.35388, 15.02558, 14.91497, 14.66645, 15.15002, 15.11736, 14.83867, 14.42364, 15.16375, 14.68908, 14.78281,
   14.77983, 14.85388, 14.82715, 14.60959, 16.97976, 14.72914, 14.64794, 14.50934, 14.87505, 14.26075, 14.61477, 14.73961, 14.85834, 14.54754, 14.37294, 14.36628,
   14.01886, 14.304, 14.33904, 14.17062, 14.12546, 13.95114, 13.58698, 14.33579, 13.79779, 13.91061, 13.42688, 14.15344, 14.17526, 13.83875, 14.35235, 13.58201,
   13.90475, 13.57232, 13.72022, 13.4747, 13.61969, 13.6443, 13.57529, 13.82541, 12.95248, 13.37171, 13.45374, 14.22693, 13.59407, 13.32408, 13.44184, 13.58433,
   13.35237, 13.33832, 13.2737, 13.49515, 13.35858, 13.04461, 12.89049, 13.15377, 13.23368, 12.85514, 12.89514, 13.05718, 13.05081, 13.79311, 13.01325, 13.01893,
   12.81147, 12.85058, 12.81873, 13.36953, 12.54778, 12.85182, 12.8664, 13.03408, 12.6958, 12.51951, 12.4533, 12.6905, 13.09875, 12.71231, 12.54363, 12.33621,
   12.70884, 12.54175, 12.28878, 12.33559, 12.27273, 12.42985, 12.51182, 12.24717, 12.37593, 12.45154, 12.16941, 12.52712, 12.04422, 12.14498, 12.32822, 12.17523,
   12.05352, 11.96784, 11.93019, 12.08638, 15.17777, 11.98489, 11.85245, 11.97622, 11.94864, 11.61438, 11.66654, 12.01538, 12.08756, 11.4448, 11.46485, 11.75237,
   12.26959, 11.46384, 11.60723, 11.52177, 11.62757, 11.42184, 11.75669, 11.62257, 11.5816, 11.45813, 11.25963, 11.56575, 11.50246, 11.52395, 11.39853, 11.50753,
   11.25759, 11.44002, 11.45135, 11.5624, 10.8004, 11.09158, 11.33466, 11.33829, 10.94227, 11.14786, 10.96173, 11.32409, 11.03747, 19.42921, 11.04247, 11.08573,
   11.36078, 10.69703, 10.71554, 10.74803, 10.75029, 10.93408, 10.72399, 10.60079, 10.75835, 10.88027, 10.3185, 10.88549, 10.66178, 10.46431, 10.579, 10.63496,
   10.34574, 10.48349, 10.59875, 10.07771, 10.9538, 10.68558, 10.52236, 10.84072, 10.34543, 10.29236, 10.61609, 10.68036, 10.68695, 10.85954, 10.33986, 10.3235,
   10.29958, 10.19848, 10.57288, 10.5414, 9.893549, 10.04375, 10.47711, 10.13798, 9.988014, 10.12634, 9.660777, 10.01544, 9.838586, 9.83444, 10.01183, 9.925175,
   10.03353, 10.18798, 9.922242, 9.714996, 9.696006, 9.849691, 9.615861, 10.12899, 9.967529, 10.07234, 9.633357, 9.850093, 9.675431, 9.797228, 9.829895, 9.517801,
   9.840407, 9.406286, 9.207884, 9.643969, 9.468252, 9.661901, 9.520038, 9.636148, 9.350466, 9.209022, 9.362898, 9.495644, 9.347439, 9.555903, 9.503838, 12.51246,
   9.401014, 8.915969, 9.559532, 9.596088, 9.499113, 9.580232, 9.241966, 9.511249, 9.257339, 8.891139, 9.140285, 8.9062, 9.312096, 9.162342, 9.053112, 8.913842,
   8.657645, 8.667602, 9.084136, 9.382169, 8.881391, 8.89878, 8.607737, 8.979494, 8.83586, 8.684358, 9.016469, 8.582567, 8.879039, 8.97617, 8.854543, 8.630234,
   8.911367, 8.592212, 8.712576, 8.54749, 8.729754, 9.017356, 8.777123, 8.771754, 8.285424, 8.213477, 8.833114, 8.625406, 8.697434, 8.41198, 7.902721, 8.410092,
   8.463209, 8.565424, 8.094786, 8.049843, 8.506511, 8.294303, 8.256447, 8.274584, 8.655165, 8.324869, 8.320644, 8.604904, 8.309975, 8.306691, 8.358182, 8.065423,
   8.146079, 8.142961, 8.106107, 8.070675, 8.457951, 8.139231, 8.014545, 8.040078, 7.97276, 8.191098, 8.093943, 8.076331, 7.725286, 7.933062, 7.797802, 7.861683,
   7.91215, 8.003165, 7.845054, 8.237523, 7.663024, 7.872162, 7.932171 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1087,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1087,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1087,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1087);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->SetMinimum(-2252.42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->SetMaximum(23707.56);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1087);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_tagOnly_2b1c_Z_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_tagOnly_2b1c_Z_mass","MC unc. (stat.)","fl");

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
   Z_mass_tagOnly_SR_18->cd();
  
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
   
   TH1D *data_mc_ratio__88 = new TH1D("data_mc_ratio__88","",1000,0,2000);
   data_mc_ratio__88->SetBinContent(1000,1.082237);
   data_mc_ratio__88->SetBinContent(1001,1.11553);
   data_mc_ratio__88->SetBinError(1000,0.118791);
   data_mc_ratio__88->SetBinError(1001,0.006658177);
   data_mc_ratio__88->SetMinimum(0.4);
   data_mc_ratio__88->SetMaximum(1.6);
   data_mc_ratio__88->SetEntries(43.96482);
   data_mc_ratio__88->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__88->SetLineColor(ci);
   data_mc_ratio__88->SetLineWidth(2);
   data_mc_ratio__88->SetMarkerStyle(20);
   data_mc_ratio__88->SetMarkerSize(1.2);
   data_mc_ratio__88->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__88->GetXaxis()->SetRange(1,150);
   data_mc_ratio__88->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__88->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__88->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__88->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__88->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__88->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__88->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__88->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__88->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__88->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1088[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1088[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1088[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1088[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004417463, 0.00436988, 0.004320637,
   0.004323212, 0.004346169, 0.004364835, 0.004393276, 0.004446984, 0.004483701, 0.004558092, 0.004636754, 0.004731472, 0.004828281, 0.004871751, 0.004968784, 0.005020558, 0.0051277, 0.005184501, 0.005242756,
   0.005368778, 0.005374962, 0.005478153, 0.005533781, 0.005570817, 0.005683403, 0.005674781, 0.005753904, 0.005816252, 0.005881813, 0.005911622, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1034276 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1088,Graph_from_mc_statistical_error_fy1088,Graph_from_mc_statistical_error_fex1088,Graph_from_mc_statistical_error_fey1088);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1088 = new TH1F("Graph_Graph_from_mc_statistical_error1088","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1088->SetMinimum(0.8758869);
   Graph_Graph_from_mc_statistical_error1088->SetMaximum(1.124113);
   Graph_Graph_from_mc_statistical_error1088->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1088->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1088->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1088->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1088->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1088);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_SR_18->cd();
   Z_mass_tagOnly_SR_18->Modified();
   Z_mass_tagOnly_SR_18->cd();
   Z_mass_tagOnly_SR_18->SetSelected(Z_mass_tagOnly_SR_18);
}
