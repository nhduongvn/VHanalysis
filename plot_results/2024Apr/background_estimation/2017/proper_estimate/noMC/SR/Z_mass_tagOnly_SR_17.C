#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_tagOnly_SR_17()
{
//=========Macro generated from canvas: Z_mass_tagOnly_SR_17/Z_mass_tagOnly_SR_17
//=========  (Mon Apr  8 13:43:38 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_tagOnly_SR_17 = new TCanvas("Z_mass_tagOnly_SR_17", "Z_mass_tagOnly_SR_17",0,0,600,600);
   Z_mass_tagOnly_SR_17->SetHighLightColor(2);
   Z_mass_tagOnly_SR_17->Range(0,0,1,1);
   Z_mass_tagOnly_SR_17->SetFillColor(0);
   Z_mass_tagOnly_SR_17->SetFillStyle(4000);
   Z_mass_tagOnly_SR_17->SetBorderMode(0);
   Z_mass_tagOnly_SR_17->SetBorderSize(2);
   Z_mass_tagOnly_SR_17->SetFrameFillStyle(1000);
   Z_mass_tagOnly_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-24.63882,315.7258,24624.18);
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
   st->SetMaximum(22159.29);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",1000,0,2000);
   st_stack_36->SetMinimum(0.01);
   st_stack_36->SetMaximum(22159.29);
   st_stack_36->SetDirectory(nullptr);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->SetLineWidth(0);
   st_stack_36->GetXaxis()->SetRange(1,150);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetTitleOffset(1);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetLabelSize(0.05);
   st_stack_36->GetYaxis()->SetTitleSize(0.057);
   st_stack_36->GetYaxis()->SetTitleOffset(1.2);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetTitleOffset(1);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *VH_tagOnly_2b1c_Z_mass_stack_1 = new TH1D("VH_tagOnly_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(31,9849.704);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(32,9971.682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(33,9969.5);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(34,9881.762);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(35,9798.229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(36,9764.047);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(37,9575.714);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(38,9423.953);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(39,9118.356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(40,8955.065);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(41,8738.845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(42,8589.851);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(43,8221.744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(44,8083.715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(45,7856.341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(46,7755.68);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(47,7435.341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(48,7356.737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(49,7112.908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(50,7003.808);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(51,6827.012);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(52,6638.777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(53,6618.274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(54,6321.196);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(55,6242.462);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(56,6269.401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(57,6132.352);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(58,5823.68);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(59,5788.426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(60,5661.692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1000,22.99756);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinContent(1001,12364.04);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(6,0.04027635);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(7,0.0149691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(8,0.01989125);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(9,0.01149919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(10,0.008866909);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(11,0.01912375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(12,0.6603849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(13,0.7422533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(14,2.563273);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(15,5.874857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(16,9.668126);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(17,13.9984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(18,18.85105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(19,24.1005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(20,28.835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(21,33.486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(22,38.0823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(23,42.23221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(24,46.24555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(25,49.29381);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(26,51.74443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(27,53.82421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(28,55.87923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(29,57.24665);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(30,58.7175);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(31,58.80287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(32,59.24035);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(33,59.37715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(34,59.09593);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(35,59.05293);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(36,58.99859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(37,58.59331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(38,58.25088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(39,57.37562);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(40,57.17558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(41,56.65889);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(42,56.44508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(43,55.81974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(44,55.2078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(45,54.73146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(46,54.54978);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(47,53.54235);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(48,53.5459);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(49,52.66514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(50,52.23876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(51,51.88477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(52,51.11859);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(53,50.85474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(54,49.951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(55,49.67893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(56,49.64688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(57,49.06187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(58,48.02373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(59,47.98397);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(60,47.34014);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(61,47.05898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(62,46.91626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(63,46.31143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(64,46.28334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(65,46.15767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(66,45.62861);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(67,45.33653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(68,44.93477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(69,44.63563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(70,44.68794);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(71,44.07287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(72,43.80135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(73,43.56785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(74,43.42393);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(75,42.95814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(76,42.96826);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(77,42.66881);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(78,41.92087);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(79,41.87781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(80,42.10991);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(81,41.62222);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(82,41.63421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(83,41.20458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(84,40.45338);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(85,40.40443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(86,40.12387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(87,39.97717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(88,39.79814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(89,39.43037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(90,39.20731);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(91,38.81528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(92,38.53701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(93,38.41375);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(94,38.56938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(95,37.97057);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(96,37.90421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(97,37.64691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(98,37.32656);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(99,37.37761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(100,36.97052);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(101,36.78942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(102,36.45041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(103,36.25074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(104,36.15485);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(105,35.80618);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(106,35.87066);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(107,35.56755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(108,35.65038);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(109,35.25256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(110,34.65649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(111,34.93289);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(112,35.20869);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(113,34.25189);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(114,34.482);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(115,34.18394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(116,34.02717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(117,33.76144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(118,33.30556);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(119,33.60164);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(120,33.37974);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(121,33.3429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(122,33.18517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(123,33.33777);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(124,33.041);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(125,32.65871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(126,32.79396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(127,32.48227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(128,32.46559);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(129,32.23379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(130,32.66933);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(131,32.13827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(132,31.76574);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(133,31.57287);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(134,31.53529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(135,31.5721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(136,31.36265);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(137,31.63413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(138,31.54119);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(139,31.21621);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(140,30.84374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(141,31.2923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(142,30.9671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(143,30.7351);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(144,30.71156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(145,30.77059);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(146,30.70549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(147,30.49406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(148,30.27649);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(149,30.22316);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(150,30.16221);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(151,30.18075);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(152,29.91128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(153,30.34674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(154,29.95173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(155,29.69079);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(156,30.0446);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(157,29.54988);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(158,29.40855);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(159,29.4302);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(160,29.20967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(161,29.22715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(162,29.46878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(163,29.05735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(164,29.0821);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(165,29.16202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(166,29.2454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(167,28.89747);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(168,28.93705);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(169,28.61641);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(170,28.59248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(171,28.46141);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(172,28.27971);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(173,28.5546);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(174,28.30904);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(175,28.37228);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(176,27.81464);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(177,28.43444);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(178,27.97011);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(179,28.21755);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(180,28.18651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(181,27.90744);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(182,28.39837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(183,27.89533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(184,27.46638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(185,27.52528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(186,27.24906);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(187,27.30924);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(188,27.4051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(189,27.33016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(190,27.08419);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(191,27.15223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(192,27.01318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(193,26.944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(194,26.85581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(195,27.29003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(196,26.9657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(197,26.88384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(198,26.91037);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(199,26.62958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(200,26.54322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(201,26.41494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(202,26.68907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(203,26.41494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(204,26.39313);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(205,26.53142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(206,26.22739);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(207,26.1476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(208,26.06531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(209,26.24827);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(210,26.25431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(211,25.85912);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(212,26.15181);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(213,25.89008);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(214,25.876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(215,25.62934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(216,25.85198);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(217,25.69765);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(218,25.66623);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(219,25.5096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(220,25.51686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(221,25.4692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(222,25.62063);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(223,25.33272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(224,25.24761);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(225,25.51576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(226,25.11823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(227,24.88398);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(228,25.49785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(229,24.87106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(230,24.97088);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(231,25.03454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(232,24.8614);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(233,24.86213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(234,24.96387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(235,24.58722);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(236,24.65549);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(237,24.43718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(238,24.71032);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(239,24.97144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(240,24.66582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(241,24.40838);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(242,24.21662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(243,24.72447);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(244,24.2632);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(245,24.08023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(246,23.94158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(247,24.29822);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(248,23.87392);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(249,23.96564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(250,23.78766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(251,23.68637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(252,23.60824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(253,23.58887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(254,23.52737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(255,23.64205);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(256,23.47253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(257,23.2946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(258,23.15073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(259,23.38251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(260,23.10647);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(261,23.20081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(262,23.11108);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(263,23.25095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(264,23.71658);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(265,22.7669);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(266,22.81809);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(267,22.99654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(268,23.08081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(269,23.12061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(270,22.78844);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(271,22.6721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(272,22.90521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(273,22.62571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(274,22.5249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(275,22.38064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(276,22.78101);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(277,22.24062);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(278,22.3948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(279,22.40044);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(280,22.21517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(281,22.14227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(282,22.25878);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(283,22.15145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(284,22.16056);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(285,22.12942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(286,21.56848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(287,21.6117);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(288,21.94475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(289,22.1597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(290,21.72277);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(291,21.84333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(292,21.58203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(293,21.53784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(294,21.42734);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(295,21.3106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(296,21.26868);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(297,21.30294);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(298,21.38051);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(299,21.20948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(300,20.87238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(301,21.0532);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(302,20.7237);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(303,21.2367);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(304,20.82846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(305,21.58145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(306,21.01219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(307,20.79892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(308,21.07283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(309,20.73061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(310,20.88542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(311,20.66441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(312,20.84092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(313,20.60248);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(314,20.55657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(315,20.41589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(316,20.56211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(317,20.40815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(318,20.25053);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(319,20.17516);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(320,20.36684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(321,20.33528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(322,21.21876);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(323,20.19625);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(324,20.3812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(325,20.03898);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(326,20.03627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(327,19.89406);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(328,19.92631);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(329,19.90118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(330,19.70784);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(331,19.85812);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(332,19.87156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(333,19.85707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(334,19.98577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(335,19.61998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(336,19.43451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(337,19.41454);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(338,19.46388);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(339,19.24307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(340,19.30684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(341,19.21984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(342,19.29329);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(343,19.0942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(344,19.14402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(345,18.98946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(346,19.20192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(347,18.97349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(348,18.75106);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(349,19.02507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(350,18.67166);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(351,18.65951);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(352,18.93089);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(353,18.77001);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(354,18.746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(355,18.70199);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(356,18.94264);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(357,18.56548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(358,18.32738);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(359,18.46504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(360,18.50139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(361,18.49654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(362,18.35349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(363,18.39212);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(364,18.2129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(365,18.26797);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(366,18.1699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(367,18.03137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(368,17.87603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(369,18.01646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(370,18.01083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(371,17.65636);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(372,17.93322);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(373,17.73401);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(374,17.637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(375,17.95835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(376,17.73298);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(377,17.75507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(378,18.08825);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(379,17.61642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(380,17.28174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(381,17.69154);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(382,17.40377);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(383,17.5006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(384,17.299);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(385,17.2642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(386,17.08168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(387,17.17781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(388,17.01118);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(389,16.88455);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(390,16.72856);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(391,16.91283);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(392,16.73608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(393,16.96652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(394,16.96833);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(395,16.7849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(396,16.75976);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(397,16.50274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(398,16.39899);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(399,17.14934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(400,17.01914);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(401,16.54589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(402,16.51146);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(403,16.28236);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(404,16.70637);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(405,16.3383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(406,16.48871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(407,16.51907);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(408,16.20286);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(409,16.41804);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(410,16.15659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(411,16.53577);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(412,16.2023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(413,15.87105);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(414,16.44814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(415,16.25139);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(416,16.15997);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(417,16.14073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(418,15.97825);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(419,15.80982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(420,16.01165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(421,16.22432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(422,15.90937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(423,16.00923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(424,15.57792);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(425,15.73866);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(426,15.74999);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(427,15.36384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(428,15.74682);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(429,15.47987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(430,15.36439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(431,15.60083);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(432,15.3436);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(433,15.38834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(434,15.29511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(435,15.49503);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(436,15.30006);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(437,15.22009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(438,15.091);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(439,14.82103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(440,15.31507);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(441,15.09786);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(442,14.89362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(443,15.03789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(444,15.10005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(445,14.74853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(446,14.93081);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(447,14.87092);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(448,14.77551);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(449,14.65985);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(450,14.7806);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(451,14.68837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(452,14.64538);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(453,14.52171);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(454,14.68103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(455,14.53579);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(456,14.44854);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(457,14.57475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(458,14.37848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(459,14.36533);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(460,14.56735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(461,14.45143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(462,14.53903);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(463,14.06787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(464,14.31568);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(465,13.91423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(466,14.33145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(467,14.17814);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(468,14.22964);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(469,13.90604);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(470,14.05789);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(471,13.946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(472,13.77945);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(473,13.91501);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(474,13.77584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(475,14.37142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(476,13.97288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(477,13.8132);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(478,13.6005);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(479,13.82553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(480,13.66319);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(481,13.57215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(482,13.64663);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(483,13.51751);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(484,13.39025);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(485,13.54563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(486,13.66839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(487,13.40396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(488,13.23272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(489,13.7588);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(490,13.41745);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(491,13.37219);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(492,13.15341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(493,13.14908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(494,13.2413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(495,13.09958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(496,13.31875);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(497,12.82552);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(498,13.07672);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(499,13.15686);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(500,13.08746);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(501,12.95542);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(502,13.22084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(503,13.11168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(504,12.92432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(505,12.766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(506,12.98033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(507,12.69766);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(508,13.00934);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(509,12.94576);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(510,12.7643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(511,12.53608);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(512,13.02638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(513,12.77911);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(514,12.72965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(515,12.56211);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(516,12.29297);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(517,12.49987);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(518,12.61657);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(519,12.49078);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(520,12.35525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(521,12.15764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(522,12.5694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(523,12.49301);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(524,12.40209);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(525,12.22938);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(526,12.0517);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(527,12.89203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(528,12.05232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(529,12.24402);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(530,12.15128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(531,12.15412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(532,12.44475);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(533,12.06453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(534,12.38361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(535,11.82892);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(536,12.0662);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(537,12.17674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(538,11.86583);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(539,11.98815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(540,11.66952);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(541,11.78626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(542,12.05489);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(543,11.93651);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(544,11.6674);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(545,11.90063);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(546,11.90362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(547,11.42575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(548,11.46589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(549,11.56227);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(550,11.65921);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(551,11.49215);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(552,11.54407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(553,11.6165);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(554,11.28691);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(555,11.35263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(556,11.45373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(557,11.46085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(558,11.60307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(559,11.2707);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(560,10.99442);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(561,11.35445);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(562,11.19095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(563,11.21803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(564,11.8963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(565,11.0042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(566,11.29723);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(567,11.0418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(568,11.05418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(569,10.74476);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(570,11.18721);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(571,11.09324);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(572,11.09715);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(573,10.87074);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(574,11.36764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(575,10.94591);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(576,10.9796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(577,10.95288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(578,10.8361);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(579,10.91514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(580,10.49754);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(581,10.99239);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(582,10.67653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(583,10.57043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(584,10.77688);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(585,10.65414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(586,10.3346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(587,10.65033);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(588,10.79399);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(589,10.54803);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(590,10.46531);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(591,10.90955);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(592,10.4255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(593,10.39887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(594,10.80274);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(595,10.38785);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(596,10.44743);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(597,10.34585);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(598,10.66453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(599,10.12857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(600,10.23977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(601,10.14849);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(602,10.3995);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(603,10.44009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(604,10.49321);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(605,10.36642);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(606,10.21058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(607,10.09706);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(608,9.842606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(609,10.17558);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(610,9.902443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(611,10.03725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(612,9.908525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(613,10.13781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(614,10.11948);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(615,9.924073);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(616,9.762884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(617,10.34043);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(618,10.11659);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(619,9.796288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(620,10.03712);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(621,9.746718);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(622,10.08887);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(623,9.903143);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(624,9.947905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(625,9.986225);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(626,9.77102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(627,9.724128);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(628,9.664837);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(629,9.732791);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(630,9.866308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(631,9.690692);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(632,9.484346);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(633,9.691103);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(634,9.578725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(635,9.459016);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(636,9.345628);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(637,9.754391);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(638,9.468232);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(639,9.508733);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(640,9.381725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(641,9.48519);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(642,9.510048);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(643,9.439441);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(644,9.131508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(645,9.604793);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(646,9.443173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(647,9.465806);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(648,9.316805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(649,9.102423);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(650,9.591514);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(651,8.979249);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(652,9.63535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(653,9.24798);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(654,9.876958);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(655,8.982432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(656,9.158084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(657,9.205553);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(658,9.073638);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(659,9.162374);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(660,9.0414);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(661,9.042176);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(662,9.078269);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(663,8.676622);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(664,9.156028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(665,9.031137);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(666,8.853076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(667,8.865453);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(668,8.854122);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(669,8.734028);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(670,8.901256);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(671,9.154954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(672,8.660003);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(673,9.16839);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(674,9.003173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(675,8.663306);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(676,8.669142);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(677,8.5433);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(678,8.862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(679,8.529009);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(680,8.642701);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(681,8.736254);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(682,9.092737);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(683,8.503335);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(684,8.81341);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(685,8.44174);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(686,8.639923);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(687,8.698187);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(688,8.453529);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(689,8.424229);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(690,8.486017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(691,8.318835);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(692,8.394147);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(693,8.384521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(694,8.500872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(695,8.424339);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(696,8.30192);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(697,8.627378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(698,7.916696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(699,8.453262);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(700,8.393148);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(701,8.309857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(702,8.201384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(703,8.224616);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(704,8.380575);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(705,8.464173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(706,8.134161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(707,8.093578);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(708,8.045584);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(709,8.17023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(710,8.155696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(711,8.188115);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(712,8.226253);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(713,8.081157);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(714,8.014711);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(715,8.331548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(716,7.639816);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(717,7.719675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(718,7.72061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(719,7.787555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(720,8.273267);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(721,7.858932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(722,8.047382);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(723,7.85787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(724,7.599468);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(725,7.911932);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(726,7.817671);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(727,7.770318);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(728,7.923017);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(729,7.785421);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(730,7.7654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(731,7.827039);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(732,7.712944);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(733,7.720824);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(734,7.618156);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(735,7.64992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(736,7.610767);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(737,7.611323);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(738,8.005699);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(739,7.765983);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(740,7.497378);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(741,7.57202);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(742,7.612056);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(743,7.791893);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(744,7.363831);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(745,7.529145);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(746,7.628158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(747,7.591504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(748,7.354884);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(749,7.775595);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(750,7.710582);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(751,8.503603);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(752,7.635173);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(753,7.437566);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(754,8.348282);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(755,7.247218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(756,7.052471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(757,7.105288);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(758,7.129998);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(759,7.15359);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(760,7.291153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(761,7.481597);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(762,7.336307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(763,7.357594);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(764,7.190251);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(765,7.392905);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(766,7.021713);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(767,7.354697);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(768,7.382072);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(769,7.13494);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(770,7.042188);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(771,6.973853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(772,6.925627);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(773,7.27547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(774,7.211908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(775,6.964853);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(776,7.237477);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(777,6.984334);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(778,6.872965);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(779,6.865942);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(780,6.989326);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(781,7.355096);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(782,6.967602);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(783,7.072307);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(784,6.918349);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(785,7.024439);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(786,6.675395);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(787,6.69443);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(788,6.840387);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(789,6.776676);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(790,6.807654);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(791,6.923082);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(792,6.872386);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(793,6.480919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(794,6.723218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(795,6.673418);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(796,6.780781);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(797,6.822384);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(798,6.477223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(799,6.515596);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(800,6.73834);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(801,6.537458);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(802,6.516486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(803,6.59857);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(804,6.733823);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(805,6.6486);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(806,6.495331);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(807,6.668407);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(808,6.776218);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(809,6.314451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(810,6.448309);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(811,6.500554);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(812,6.458563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(813,6.564163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(814,6.73206);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(815,6.454129);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(816,6.268989);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(817,6.229134);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(818,6.314138);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(819,6.456255);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(820,6.375992);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(821,6.341896);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(822,6.337345);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(823,6.642927);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(824,6.481913);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(825,6.288292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(826,6.423425);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(827,6.726504);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(828,6.075984);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(829,6.226085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(830,6.078982);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(831,6.112496);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(832,6.250394);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(833,6.449819);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(834,5.920076);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(835,6.273094);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(836,6.317456);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(837,5.600774);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(838,6.112954);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(839,6.248102);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(840,6.149969);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(841,6.213949);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(842,6.096023);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(843,6.28412);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(844,6.01161);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(845,6.085036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(846,6.033263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(847,5.957168);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(848,5.928815);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(849,6.048342);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(850,6.144573);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(851,5.894223);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(852,5.82571);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(853,5.894521);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(854,5.802653);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(855,5.903629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(856,5.959645);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(857,5.889727);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(858,5.979589);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(859,5.956581);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(860,5.718652);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(861,5.848432);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(862,5.667736);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(863,5.953724);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(864,5.69735);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(865,5.677606);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(866,5.884163);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(867,5.846471);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(868,5.793634);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(869,5.881787);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(870,5.650873);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(871,5.586417);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(872,5.599085);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(873,5.794195);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(874,5.645064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(875,5.298563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(876,5.600095);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(877,5.723807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(878,5.80093);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(879,5.811805);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(880,5.832373);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(881,5.453308);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(882,5.541413);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(883,5.435036);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(884,5.090203);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(885,5.666429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(886,5.290086);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(887,5.586807);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(888,5.453217);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(889,5.755409);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(890,5.195943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(891,5.426695);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(892,5.413491);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(893,5.38629);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(894,5.531304);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(895,5.349916);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(896,5.319114);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(897,5.29946);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(898,5.143826);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(899,5.194811);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(900,5.382281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(901,4.97525);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(902,5.435748);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(903,5.260312);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(904,5.372344);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(905,5.672071);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(906,5.266852);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(907,5.50487);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(908,5.285058);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(909,5.579563);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(910,5.118919);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(911,5.123263);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(912,5.139967);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(913,5.181644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(914,5.100963);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(915,5.16764);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(916,5.321179);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(917,5.120769);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(918,5.291564);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(919,4.967872);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(920,4.946548);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(921,5.013877);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(922,5.356416);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(923,4.99396);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(924,5.21061);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(925,5.230244);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(926,5.184144);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(927,4.933208);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(928,5.161675);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(929,5.09281);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(930,4.82694);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(931,5.327275);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(932,4.949684);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(933,4.917508);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(934,4.794644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(935,4.886333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(936,4.908796);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(937,4.936153);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(938,4.949725);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(939,4.89644);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(940,5.12064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(941,5.043845);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(942,4.907696);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(943,4.598646);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(944,4.879135);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(945,4.769795);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(946,4.90848);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(947,5.008611);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(948,5.013488);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(949,4.610937);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(950,4.749383);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(951,4.612353);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(952,4.942524);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(953,4.831768);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(954,4.880451);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(955,4.67084);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(956,4.951862);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(957,4.394528);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(958,4.83151);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(959,4.897238);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(960,4.660272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(961,4.601643);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(962,4.776567);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(963,4.976908);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(964,4.91474);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(965,4.495434);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(966,4.575555);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(967,4.588362);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(968,4.458064);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(969,4.884379);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(970,4.250825);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(971,4.614667);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(972,4.387272);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(973,4.704891);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(974,4.970333);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(975,4.612717);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(976,4.428871);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(977,4.568429);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(978,4.601619);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(979,4.29886);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(980,4.622465);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(981,4.564292);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(982,4.51943);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(983,4.194411);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(984,4.446431);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(985,4.405158);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(986,4.438895);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(987,4.38626);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(988,4.221607);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(989,4.384155);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(990,4.62356);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(991,4.387213);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(992,4.278977);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(993,4.361547);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(994,4.501535);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(995,4.070426);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(996,4.242929);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(997,4.363042);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(998,4.192689);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(999,4.295846);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1000,4.16007);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetBinError(1001,68.5511);
   VH_tagOnly_2b1c_Z_mass_stack_1->SetEntries(2501254);

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
   
   TH1D *VH_tagOnly_Z_mass__71 = new TH1D("VH_tagOnly_Z_mass__71","",1000,0,2000);
   VH_tagOnly_Z_mass__71->SetBinContent(1000,28);
   VH_tagOnly_Z_mass__71->SetBinContent(1001,15650);
   VH_tagOnly_Z_mass__71->SetEntries(1321982);

   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_mass__71->SetLineColor(ci);
   VH_tagOnly_Z_mass__71->SetLineWidth(2);
   VH_tagOnly_Z_mass__71->SetMarkerStyle(20);
   VH_tagOnly_Z_mass__71->SetMarkerSize(1.2);
   VH_tagOnly_Z_mass__71->GetXaxis()->SetRange(1,2000);
   VH_tagOnly_Z_mass__71->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__71->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__71->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__71->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__71->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__71->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_mass__71->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_mass__71->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_mass__71->Draw("same E");
   
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fx1071[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fy1071[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9849.704, 9971.682, 9969.5,
   9881.762, 9798.229, 9764.047, 9575.714, 9423.953, 9118.356, 8955.065, 8738.845, 8589.851, 8221.744, 8083.715, 7856.341, 7755.68, 7435.341, 7356.737, 7112.908,
   7003.808, 6827.012, 6638.777, 6618.274, 6321.196, 6242.462, 6269.401, 6132.352, 5823.68, 5788.426, 5661.692, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 22.99756 };
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fex1071[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_tagOnly_2b1c_Z_mass_fey1071[1000] = { 0, 0, 0, 0, 0, 0.04027635, 0.0149691, 0.01989125, 0.01149919, 0.008866909, 0.01912375, 0.6603849, 0.7422533, 2.563273, 5.874857, 9.668126, 13.9984,
   18.85105, 24.1005, 28.835, 33.486, 38.0823, 42.23221, 46.24555, 49.29381, 51.74443, 53.82421, 55.87923, 57.24665, 58.7175, 58.80287, 59.24035, 59.37715,
   59.09593, 59.05293, 58.99859, 58.59331, 58.25088, 57.37562, 57.17558, 56.65889, 56.44508, 55.81974, 55.2078, 54.73146, 54.54978, 53.54235, 53.5459, 52.66514,
   52.23876, 51.88477, 51.11859, 50.85474, 49.951, 49.67893, 49.64688, 49.06187, 48.02373, 47.98397, 47.34014, 47.05898, 46.91626, 46.31143, 46.28334, 46.15767,
   45.62861, 45.33653, 44.93477, 44.63563, 44.68794, 44.07287, 43.80135, 43.56785, 43.42393, 42.95814, 42.96826, 42.66881, 41.92087, 41.87781, 42.10991, 41.62222,
   41.63421, 41.20458, 40.45338, 40.40443, 40.12387, 39.97717, 39.79814, 39.43037, 39.20731, 38.81528, 38.53701, 38.41375, 38.56938, 37.97057, 37.90421, 37.64691,
   37.32656, 37.37761, 36.97052, 36.78942, 36.45041, 36.25074, 36.15485, 35.80618, 35.87066, 35.56755, 35.65038, 35.25256, 34.65649, 34.93289, 35.20869, 34.25189,
   34.482, 34.18394, 34.02717, 33.76144, 33.30556, 33.60164, 33.37974, 33.3429, 33.18517, 33.33777, 33.041, 32.65871, 32.79396, 32.48227, 32.46559, 32.23379,
   32.66933, 32.13827, 31.76574, 31.57287, 31.53529, 31.5721, 31.36265, 31.63413, 31.54119, 31.21621, 30.84374, 31.2923, 30.9671, 30.7351, 30.71156, 30.77059,
   30.70549, 30.49406, 30.27649, 30.22316, 30.16221, 30.18075, 29.91128, 30.34674, 29.95173, 29.69079, 30.0446, 29.54988, 29.40855, 29.4302, 29.20967, 29.22715,
   29.46878, 29.05735, 29.0821, 29.16202, 29.2454, 28.89747, 28.93705, 28.61641, 28.59248, 28.46141, 28.27971, 28.5546, 28.30904, 28.37228, 27.81464, 28.43444,
   27.97011, 28.21755, 28.18651, 27.90744, 28.39837, 27.89533, 27.46638, 27.52528, 27.24906, 27.30924, 27.4051, 27.33016, 27.08419, 27.15223, 27.01318, 26.944,
   26.85581, 27.29003, 26.9657, 26.88384, 26.91037, 26.62958, 26.54322, 26.41494, 26.68907, 26.41494, 26.39313, 26.53142, 26.22739, 26.1476, 26.06531, 26.24827,
   26.25431, 25.85912, 26.15181, 25.89008, 25.876, 25.62934, 25.85198, 25.69765, 25.66623, 25.5096, 25.51686, 25.4692, 25.62063, 25.33272, 25.24761, 25.51576,
   25.11823, 24.88398, 25.49785, 24.87106, 24.97088, 25.03454, 24.8614, 24.86213, 24.96387, 24.58722, 24.65549, 24.43718, 24.71032, 24.97144, 24.66582, 24.40838,
   24.21662, 24.72447, 24.2632, 24.08023, 23.94158, 24.29822, 23.87392, 23.96564, 23.78766, 23.68637, 23.60824, 23.58887, 23.52737, 23.64205, 23.47253, 23.2946,
   23.15073, 23.38251, 23.10647, 23.20081, 23.11108, 23.25095, 23.71658, 22.7669, 22.81809, 22.99654, 23.08081, 23.12061, 22.78844, 22.6721, 22.90521, 22.62571,
   22.5249, 22.38064, 22.78101, 22.24062, 22.3948, 22.40044, 22.21517, 22.14227, 22.25878, 22.15145, 22.16056, 22.12942, 21.56848, 21.6117, 21.94475, 22.1597,
   21.72277, 21.84333, 21.58203, 21.53784, 21.42734, 21.3106, 21.26868, 21.30294, 21.38051, 21.20948, 20.87238, 21.0532, 20.7237, 21.2367, 20.82846, 21.58145,
   21.01219, 20.79892, 21.07283, 20.73061, 20.88542, 20.66441, 20.84092, 20.60248, 20.55657, 20.41589, 20.56211, 20.40815, 20.25053, 20.17516, 20.36684, 20.33528,
   21.21876, 20.19625, 20.3812, 20.03898, 20.03627, 19.89406, 19.92631, 19.90118, 19.70784, 19.85812, 19.87156, 19.85707, 19.98577, 19.61998, 19.43451, 19.41454,
   19.46388, 19.24307, 19.30684, 19.21984, 19.29329, 19.0942, 19.14402, 18.98946, 19.20192, 18.97349, 18.75106, 19.02507, 18.67166, 18.65951, 18.93089, 18.77001,
   18.746, 18.70199, 18.94264, 18.56548, 18.32738, 18.46504, 18.50139, 18.49654, 18.35349, 18.39212, 18.2129, 18.26797, 18.1699, 18.03137, 17.87603, 18.01646,
   18.01083, 17.65636, 17.93322, 17.73401, 17.637, 17.95835, 17.73298, 17.75507, 18.08825, 17.61642, 17.28174, 17.69154, 17.40377, 17.5006, 17.299, 17.2642,
   17.08168, 17.17781, 17.01118, 16.88455, 16.72856, 16.91283, 16.73608, 16.96652, 16.96833, 16.7849, 16.75976, 16.50274, 16.39899, 17.14934, 17.01914, 16.54589,
   16.51146, 16.28236, 16.70637, 16.3383, 16.48871, 16.51907, 16.20286, 16.41804, 16.15659, 16.53577, 16.2023, 15.87105, 16.44814, 16.25139, 16.15997, 16.14073,
   15.97825, 15.80982, 16.01165, 16.22432, 15.90937, 16.00923, 15.57792, 15.73866, 15.74999, 15.36384, 15.74682, 15.47987, 15.36439, 15.60083, 15.3436, 15.38834,
   15.29511, 15.49503, 15.30006, 15.22009, 15.091, 14.82103, 15.31507, 15.09786, 14.89362, 15.03789, 15.10005, 14.74853, 14.93081, 14.87092, 14.77551, 14.65985,
   14.7806, 14.68837, 14.64538, 14.52171, 14.68103, 14.53579, 14.44854, 14.57475, 14.37848, 14.36533, 14.56735, 14.45143, 14.53903, 14.06787, 14.31568, 13.91423,
   14.33145, 14.17814, 14.22964, 13.90604, 14.05789, 13.946, 13.77945, 13.91501, 13.77584, 14.37142, 13.97288, 13.8132, 13.6005, 13.82553, 13.66319, 13.57215,
   13.64663, 13.51751, 13.39025, 13.54563, 13.66839, 13.40396, 13.23272, 13.7588, 13.41745, 13.37219, 13.15341, 13.14908, 13.2413, 13.09958, 13.31875, 12.82552,
   13.07672, 13.15686, 13.08746, 12.95542, 13.22084, 13.11168, 12.92432, 12.766, 12.98033, 12.69766, 13.00934, 12.94576, 12.7643, 12.53608, 13.02638, 12.77911,
   12.72965, 12.56211, 12.29297, 12.49987, 12.61657, 12.49078, 12.35525, 12.15764, 12.5694, 12.49301, 12.40209, 12.22938, 12.0517, 12.89203, 12.05232, 12.24402,
   12.15128, 12.15412, 12.44475, 12.06453, 12.38361, 11.82892, 12.0662, 12.17674, 11.86583, 11.98815, 11.66952, 11.78626, 12.05489, 11.93651, 11.6674, 11.90063,
   11.90362, 11.42575, 11.46589, 11.56227, 11.65921, 11.49215, 11.54407, 11.6165, 11.28691, 11.35263, 11.45373, 11.46085, 11.60307, 11.2707, 10.99442, 11.35445,
   11.19095, 11.21803, 11.8963, 11.0042, 11.29723, 11.0418, 11.05418, 10.74476, 11.18721, 11.09324, 11.09715, 10.87074, 11.36764, 10.94591, 10.9796, 10.95288,
   10.8361, 10.91514, 10.49754, 10.99239, 10.67653, 10.57043, 10.77688, 10.65414, 10.3346, 10.65033, 10.79399, 10.54803, 10.46531, 10.90955, 10.4255, 10.39887,
   10.80274, 10.38785, 10.44743, 10.34585, 10.66453, 10.12857, 10.23977, 10.14849, 10.3995, 10.44009, 10.49321, 10.36642, 10.21058, 10.09706, 9.842606, 10.17558,
   9.902443, 10.03725, 9.908525, 10.13781, 10.11948, 9.924073, 9.762884, 10.34043, 10.11659, 9.796288, 10.03712, 9.746718, 10.08887, 9.903143, 9.947905, 9.986225,
   9.77102, 9.724128, 9.664837, 9.732791, 9.866308, 9.690692, 9.484346, 9.691103, 9.578725, 9.459016, 9.345628, 9.754391, 9.468232, 9.508733, 9.381725, 9.48519,
   9.510048, 9.439441, 9.131508, 9.604793, 9.443173, 9.465806, 9.316805, 9.102423, 9.591514, 8.979249, 9.63535, 9.24798, 9.876958, 8.982432, 9.158084, 9.205553,
   9.073638, 9.162374, 9.0414, 9.042176, 9.078269, 8.676622, 9.156028, 9.031137, 8.853076, 8.865453, 8.854122, 8.734028, 8.901256, 9.154954, 8.660003, 9.16839,
   9.003173, 8.663306, 8.669142, 8.5433, 8.862, 8.529009, 8.642701, 8.736254, 9.092737, 8.503335, 8.81341, 8.44174, 8.639923, 8.698187, 8.453529, 8.424229,
   8.486017, 8.318835, 8.394147, 8.384521, 8.500872, 8.424339, 8.30192, 8.627378, 7.916696, 8.453262, 8.393148, 8.309857, 8.201384, 8.224616, 8.380575, 8.464173,
   8.134161, 8.093578, 8.045584, 8.17023, 8.155696, 8.188115, 8.226253, 8.081157, 8.014711, 8.331548, 7.639816, 7.719675, 7.72061, 7.787555, 8.273267, 7.858932,
   8.047382, 7.85787, 7.599468, 7.911932, 7.817671, 7.770318, 7.923017, 7.785421, 7.7654, 7.827039, 7.712944, 7.720824, 7.618156, 7.64992, 7.610767, 7.611323,
   8.005699, 7.765983, 7.497378, 7.57202, 7.612056, 7.791893, 7.363831, 7.529145, 7.628158, 7.591504, 7.354884, 7.775595, 7.710582, 8.503603, 7.635173, 7.437566,
   8.348282, 7.247218, 7.052471, 7.105288, 7.129998, 7.15359, 7.291153, 7.481597, 7.336307, 7.357594, 7.190251, 7.392905, 7.021713, 7.354697, 7.382072, 7.13494,
   7.042188, 6.973853, 6.925627, 7.27547, 7.211908, 6.964853, 7.237477, 6.984334, 6.872965, 6.865942, 6.989326, 7.355096, 6.967602, 7.072307, 6.918349, 7.024439,
   6.675395, 6.69443, 6.840387, 6.776676, 6.807654, 6.923082, 6.872386, 6.480919, 6.723218, 6.673418, 6.780781, 6.822384, 6.477223, 6.515596, 6.73834, 6.537458,
   6.516486, 6.59857, 6.733823, 6.6486, 6.495331, 6.668407, 6.776218, 6.314451, 6.448309, 6.500554, 6.458563, 6.564163, 6.73206, 6.454129, 6.268989, 6.229134,
   6.314138, 6.456255, 6.375992, 6.341896, 6.337345, 6.642927, 6.481913, 6.288292, 6.423425, 6.726504, 6.075984, 6.226085, 6.078982, 6.112496, 6.250394, 6.449819,
   5.920076, 6.273094, 6.317456, 5.600774, 6.112954, 6.248102, 6.149969, 6.213949, 6.096023, 6.28412, 6.01161, 6.085036, 6.033263, 5.957168, 5.928815, 6.048342,
   6.144573, 5.894223, 5.82571, 5.894521, 5.802653, 5.903629, 5.959645, 5.889727, 5.979589, 5.956581, 5.718652, 5.848432, 5.667736, 5.953724, 5.69735, 5.677606,
   5.884163, 5.846471, 5.793634, 5.881787, 5.650873, 5.586417, 5.599085, 5.794195, 5.645064, 5.298563, 5.600095, 5.723807, 5.80093, 5.811805, 5.832373, 5.453308,
   5.541413, 5.435036, 5.090203, 5.666429, 5.290086, 5.586807, 5.453217, 5.755409, 5.195943, 5.426695, 5.413491, 5.38629, 5.531304, 5.349916, 5.319114, 5.29946,
   5.143826, 5.194811, 5.382281, 4.97525, 5.435748, 5.260312, 5.372344, 5.672071, 5.266852, 5.50487, 5.285058, 5.579563, 5.118919, 5.123263, 5.139967, 5.181644,
   5.100963, 5.16764, 5.321179, 5.120769, 5.291564, 4.967872, 4.946548, 5.013877, 5.356416, 4.99396, 5.21061, 5.230244, 5.184144, 4.933208, 5.161675, 5.09281,
   4.82694, 5.327275, 4.949684, 4.917508, 4.794644, 4.886333, 4.908796, 4.936153, 4.949725, 4.89644, 5.12064, 5.043845, 4.907696, 4.598646, 4.879135, 4.769795,
   4.90848, 5.008611, 5.013488, 4.610937, 4.749383, 4.612353, 4.942524, 4.831768, 4.880451, 4.67084, 4.951862, 4.394528, 4.83151, 4.897238, 4.660272, 4.601643,
   4.776567, 4.976908, 4.91474, 4.495434, 4.575555, 4.588362, 4.458064, 4.884379, 4.250825, 4.614667, 4.387272, 4.704891, 4.970333, 4.612717, 4.428871, 4.568429,
   4.601619, 4.29886, 4.622465, 4.564292, 4.51943, 4.194411, 4.446431, 4.405158, 4.438895, 4.38626, 4.221607, 4.384155, 4.62356, 4.387213, 4.278977, 4.361547,
   4.501535, 4.070426, 4.242929, 4.363042, 4.192689, 4.295846, 4.16007 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_tagOnly_2b1c_Z_mass_fx1071,Graph_from_VH_tagOnly_2b1c_Z_mass_fy1071,Graph_from_VH_tagOnly_2b1c_Z_mass_fex1071,Graph_from_VH_tagOnly_2b1c_Z_mass_fey1071);
   gre->SetName("Graph_from_VH_tagOnly_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071 = new TH1F("Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071","",1000,0,2200);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->SetMinimum(-1067.682);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->SetMaximum(11039.89);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->SetDirectory(nullptr);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->SetLineColor(ci);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_tagOnly_2b1c_Z_mass1071);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_tagOnly_Z_mass","Data (BTagCSV, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_tagOnly_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__72 = new TH1D("data_mc_ratio__72","",1000,0,2000);
   data_mc_ratio__72->SetBinContent(1000,1.217521);
   data_mc_ratio__72->SetBinContent(1001,1.265767);
   data_mc_ratio__72->SetBinError(1000,0.2300898);
   data_mc_ratio__72->SetBinError(1001,0.01231365);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(14.61216);
   data_mc_ratio__72->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__72->SetLineColor(ci);
   data_mc_ratio__72->SetLineWidth(2);
   data_mc_ratio__72->SetMarkerStyle(20);
   data_mc_ratio__72->SetMarkerSize(1.2);
   data_mc_ratio__72->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__72->GetXaxis()->SetRange(1,150);
   data_mc_ratio__72->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__72->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__72->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__72->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__72->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__72->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__72->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1072[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1072[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1072[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1072[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.005970014, 0.005940858, 0.005955881,
   0.005980303, 0.006026898, 0.006042432, 0.006118949, 0.006181151, 0.00629232, 0.00638472, 0.006483567, 0.006571136, 0.006789283, 0.006829508, 0.006966533, 0.007033527, 0.007201062, 0.007278486, 0.007404164,
   0.007458623, 0.007599924, 0.007700001, 0.007683989, 0.007902144, 0.007958228, 0.007918919, 0.008000499, 0.008246285, 0.008289639, 0.008361481, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.1808918 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0.7829298);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(1.21707);
   Graph_Graph_from_mc_statistical_error1072->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1072->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1072);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_tagOnly_SR_17->cd();
   Z_mass_tagOnly_SR_17->Modified();
   Z_mass_tagOnly_SR_17->cd();
   Z_mass_tagOnly_SR_17->SetSelected(Z_mass_tagOnly_SR_17);
}
