#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_DHZfirst_SR_17()
{
//=========Macro generated from canvas: H_mass_DHZfirst_SR_17/H_mass_DHZfirst_SR_17
//=========  (Sat Dec  9 13:50:14 2023) by ROOT version 6.28/10
   TCanvas *H_mass_DHZfirst_SR_17 = new TCanvas("H_mass_DHZfirst_SR_17", "H_mass_DHZfirst_SR_17",0,0,600,600);
   H_mass_DHZfirst_SR_17->SetHighLightColor(2);
   H_mass_DHZfirst_SR_17->Range(0,0,1,1);
   H_mass_DHZfirst_SR_17->SetFillColor(0);
   H_mass_DHZfirst_SR_17->SetFillStyle(4000);
   H_mass_DHZfirst_SR_17->SetBorderMode(0);
   H_mass_DHZfirst_SR_17->SetBorderSize(2);
   H_mass_DHZfirst_SR_17->SetFrameFillStyle(1000);
   H_mass_DHZfirst_SR_17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-1.944516,315.7258,1952.572);
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
   st->SetMaximum(1757.12);
   
   TH1F *st_stack_52 = new TH1F("st_stack_52","",1000,0,2000);
   st_stack_52->SetMinimum(0.01);
   st_stack_52->SetMaximum(1757.12);
   st_stack_52->SetDirectory(nullptr);
   st_stack_52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_52->SetLineColor(ci);
   st_stack_52->SetLineWidth(0);
   st_stack_52->GetXaxis()->SetRange(1,150);
   st_stack_52->GetXaxis()->SetLabelFont(42);
   st_stack_52->GetXaxis()->SetTitleOffset(1);
   st_stack_52->GetXaxis()->SetTitleFont(42);
   st_stack_52->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_52->GetYaxis()->SetLabelFont(42);
   st_stack_52->GetYaxis()->SetLabelSize(0.05);
   st_stack_52->GetYaxis()->SetTitleSize(0.057);
   st_stack_52->GetYaxis()->SetTitleOffset(1.2);
   st_stack_52->GetYaxis()->SetTitleFont(42);
   st_stack_52->GetZaxis()->SetLabelFont(42);
   st_stack_52->GetZaxis()->SetTitleOffset(1);
   st_stack_52->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_52);
   
   
   TH1D *VH_DHZfirst_2b1c_H_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_H_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(48,412.284);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(49,781.32);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(50,790.704);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(51,790.5);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(52,778.872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(53,788.46);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(54,781.728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(55,779.484);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(56,765.816);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(57,765.204);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(58,727.872);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(59,758.676);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(60,738.888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(61,730.728);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(62,749.292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(63,733.788);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(64,733.992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(65,734.808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(66,712.368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(67,711.552);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(68,681.36);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(69,695.436);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(70,680.544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(71,689.112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(72,673.2);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(73,643.824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(74,650.352);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(75,649.74);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(76,630.564);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(77,627.912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(78,310.08);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1000,2.856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinContent(1001,1198.5);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(13,0.2884996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(14,0.5769991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(15,0.7900886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(16,1.322071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(17,2.334887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(18,3.066792);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(19,4.013152);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(20,5.030162);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(21,6.12);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(22,7.037261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(23,8.005538);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(24,8.915524);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(25,9.787749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(26,10.35187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(27,10.86384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(28,11.41124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(29,11.89164);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(30,12.28751);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(31,12.49573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(32,12.79521);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(33,12.84228);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(34,13.08307);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(35,13.1069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(36,12.97927);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(37,13.30699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(38,13.12752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(39,13.22071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(40,13.21441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(41,13.25058);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(42,13.11642);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(43,13.29917);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(44,13.21914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(45,13.06874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(46,13.0049);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(47,12.77894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(48,12.87303);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(49,12.62495);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(50,12.70054);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(51,12.6989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(52,12.60515);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(53,12.6825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(54,12.62824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(55,12.6101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(56,12.49906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(57,12.49406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(58,12.18548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(59,12.44066);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(60,12.27734);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(61,12.20936);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(62,12.36348);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(63,12.2349);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(64,12.2366);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(65,12.2434);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(66,12.055);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(67,12.0481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(68,11.78972);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(69,11.91088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(70,11.78266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(71,11.8566);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(72,11.71891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(73,11.46037);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(74,11.51832);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(75,11.5129);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(76,11.34174);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(77,11.31786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(78,11.18099);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(79,11.02544);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(80,11.19215);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(81,10.96678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(82,11.0443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(83,10.86575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(84,10.93257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(85,10.63543);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(86,10.92496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(87,10.53122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(88,10.56279);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(89,10.56476);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(90,10.34181);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(91,10.2529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(92,10.26507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(93,10.03547);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(94,10.16117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(95,10.10161);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(96,9.962638);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(97,9.832292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(98,9.842868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(99,9.755808);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(100,9.832292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(101,9.648575);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(102,9.605346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(103,9.710914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(104,9.500795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(105,9.626985);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(106,9.370686);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(107,9.406148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(108,9.200377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(109,9.3618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(110,9.109462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(111,9.116312);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(112,9.008396);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(113,8.982952);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(114,8.934175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(115,9.109462);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(116,9.054475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(117,9.001464);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(118,8.698154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(119,8.94116);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(120,8.924854);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(121,8.722044);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(122,8.681393);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(123,8.642958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(124,8.882789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(125,8.504623);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(126,8.54368);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(127,8.492381);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(128,8.401234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(129,8.403711);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(130,8.4703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(131,8.580134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(132,8.246244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(133,8.131902);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(134,8.16255);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(135,8.243721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(136,8.306583);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(137,8.193083);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(138,8.095999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(139,8.070257);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(140,7.997737);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(141,7.840079);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(142,7.940292);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(143,7.995135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(144,7.871863);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(145,8.116534);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(146,7.963842);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(147,7.794829);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(148,7.826797);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(149,7.924553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(150,7.866574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(151,7.855987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(152,7.727804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(153,7.908783);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(154,7.643878);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(155,7.874506);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(156,7.627527);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(157,7.556266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(158,7.456472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(159,7.59198);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(160,7.487106);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(161,7.567273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(162,7.605672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(163,7.436912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(164,7.575517);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(165,7.481545);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(166,7.425712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(167,7.514846);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(168,7.459262);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(169,7.422909);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(170,7.32414);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(171,7.358153);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(172,7.375101);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(173,7.148738);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(174,7.122493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(175,7.134169);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(176,7.072654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(177,7.066767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(178,7.122493);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(179,7.119571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(180,7.052029);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(181,7.151648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(182,7.206717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(183,6.778205);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(184,7.093218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(185,7.060876);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(186,7.049078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(187,6.784342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(188,6.971907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(189,7.00466);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(190,6.890853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(191,6.814944);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(192,6.772063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(193,6.722721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(194,6.950984);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(195,6.899906);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(196,6.741266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(197,6.697914);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(198,6.790473);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(199,6.781274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(200,6.765915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(201,6.732);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(202,6.890853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(203,6.543918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(204,6.691698);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(205,6.597752);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(206,6.673014);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(207,6.81189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(208,6.550274);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(209,6.382951);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(210,6.50245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(211,6.632353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(212,6.559798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(213,6.431664);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(214,6.402481);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(215,6.310825);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(216,6.444592);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(217,6.682362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(218,6.50245);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(219,6.363361);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(220,6.441363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(221,6.395977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(222,6.190988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(223,6.28108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(224,6.350268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(225,6.534372);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(226,6.113196);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(227,6.211122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(228,6.251194);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(229,6.17416);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(230,6.123399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(231,6.274451);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(232,6.136976);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(233,6.170789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(234,6.079063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(235,5.978975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(236,5.908961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(237,6.201063);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(238,5.978975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(239,5.919516);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(240,5.975494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(241,5.82026);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(242,6.133585);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(243,5.985932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(244,5.830975);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(245,5.99288);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(246,5.926542);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(247,6.061924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(248,5.93356);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(249,5.787994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(250,5.612781);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(251,5.898388);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(252,5.769991);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(253,5.845232);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(254,5.813105);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(255,5.668117);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(256,5.827406);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(257,5.686443);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(258,5.777199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(259,5.519322);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(260,5.646048);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(261,5.500439);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(262,5.755548);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(263,5.51555);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(264,5.908961);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(265,5.594214);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(266,5.787994);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(267,5.597932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(268,5.504221);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(269,5.605362);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(270,5.777199);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(271,5.730185);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(272,5.492868);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(273,5.564378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(274,5.623892);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(275,5.511776);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(276,5.454855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(277,5.451039);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(278,5.104078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(279,5.378022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(280,5.280409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(281,5.35087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(282,5.462479);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(283,5.343087);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(284,5.280409);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(285,5.168895);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(286,5.408886);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(287,5.458668);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(288,5.240855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(289,5.156804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(290,5.212988);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(291,5.370278);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(292,5.192992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(293,5.192992);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(294,5.152767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(295,5.196998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(296,5.12848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(297,5.292218);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(298,5.1);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(299,5.034297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(300,4.929883);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(301,5.296148);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(302,5.021882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(303,5.204999);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(304,5.063147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(305,5.042556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(306,4.942529);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(307,5.104078);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(308,5.083654);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(309,5.148727);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(310,5.079559);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(311,4.823209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(312,5.021882);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(313,5.034297);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(314,4.971912);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(315,5.042556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(316,4.766795);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(317,5.042556);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(318,4.792915);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(319,4.870433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(320,4.980275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(321,5.12848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(322,4.656387);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(323,4.771158);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(324,4.836134);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(325,4.758057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(326,4.547873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(327,4.900248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(328,4.788571);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(329,4.575243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(330,4.891748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(331,4.570693);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(332,4.709706);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(333,4.633989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(334,4.633989);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(335,4.547873);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(336,4.687563);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(337,4.58433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(338,4.678677);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(339,4.575243);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(340,4.611483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(341,4.823209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(342,4.588867);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(343,4.501888);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(344,4.647441);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(345,4.638477);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(346,4.506507);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(347,4.58433);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(348,4.460095);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(349,4.669773);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(350,4.370554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(351,4.497263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(352,4.394294);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(353,4.611483);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(354,4.557015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(355,4.492634);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(356,4.389557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(357,4.24006);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(358,4.274275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(359,4.538713);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(360,4.450755);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(361,4.561579);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(362,4.375313);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(363,4.18573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(364,4.399027);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(365,4.361022);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(366,4.249864);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(367,4.511122);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(368,4.520338);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(369,4.14577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(370,4.244965);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(371,4.180756);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(372,4.120598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(373,4.200617);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(374,4.365791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(375,4.14577);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(376,4.205568);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(377,4.210513);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(378,4.165798);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(379,4.274275);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(380,4.110486);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(381,4.090187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(382,4.155796);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(383,4.389557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(384,4.120598);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(385,3.881365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(386,4.105421);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(387,3.992359);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(388,4.130685);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(389,4.140748);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(390,4.069787);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(391,4.230234);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(392,4.069787);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(393,3.913399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(394,3.897415);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(395,4.033839);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(396,3.886722);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(397,3.913399);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(398,3.939894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(399,4.090187);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(400,3.971456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(401,3.918712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(402,3.924018);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(403,3.945172);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(404,3.971456);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(405,3.918712);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(406,3.750494);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(407,3.821939);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(408,3.717057);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(409,3.705844);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(410,3.939894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(411,3.626383);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(412,3.881365);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(413,3.739382);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(414,4.13572);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(415,3.981921);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(416,3.865248);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(417,3.733813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(418,3.509749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(419,3.551007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(420,3.609128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(421,3.733813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(422,3.789132);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(423,3.756038);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(424,3.783636);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(425,3.700225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(426,3.728236);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(427,3.811035);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(428,3.683316);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(429,3.643557);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(430,3.591791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(431,3.733813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(432,3.733813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(433,3.485954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(434,3.711455);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(435,3.65496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(436,3.609128);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(437,3.778133);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(438,3.545142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(439,3.744942);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(440,3.382957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(441,3.603358);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(442,3.591791);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(443,3.562707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(444,3.539268);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(445,3.660649);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(446,3.700225);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(447,3.503815);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(448,3.562707);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(449,3.437869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(450,3.276725);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(451,3.485954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(452,3.407472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(453,3.437869);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(454,3.413573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(455,3.515672);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(456,3.40136);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(457,3.425743);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(458,3.376801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(459,3.473995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(460,3.320879);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(461,3.389103);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(462,3.289401);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(463,3.52749);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(464,3.302028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(465,3.395237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(466,3.407472);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(467,3.08708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(468,3.376801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(469,3.295721);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(470,3.370633);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(471,3.113925);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(472,3.206112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(473,3.206112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(474,3.327139);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(475,3.339624);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(476,3.180045);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(477,3.166932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(478,3.231968);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(479,3.039532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(480,3.053192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(481,3.206112);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(482,3.382957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(483,3.133907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(484,3.283069);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(485,3.244819);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(486,3.2384);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(487,3.160354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(488,3.166932);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(489,3.376801);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(490,2.963271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(491,3.212595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(492,3.04637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(493,3.127261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(494,3.005108);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(495,2.998175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(496,3.032678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(497,3.100532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(498,2.977282);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(499,3.06);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(500,3.053192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(501,3.093813);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(502,3.04637);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(503,2.906553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(504,3.107235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(505,2.920835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(506,2.899385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(507,3.032678);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(508,2.984263);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(509,3.107235);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(510,3.018924);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(511,2.920835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(512,3.1206);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(513,2.991227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(514,2.998175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(515,2.94213);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(516,2.834059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(517,2.963271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(518,3.012024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(519,2.884996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(520,2.963271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(521,3.039532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(522,2.698666);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(523,3.012024);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(524,2.877774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(525,3.133907);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(526,2.963271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(527,2.834059);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(528,2.920835);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(529,2.644142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(530,2.899385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(531,2.899385);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(532,2.819336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(533,2.963271);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(534,2.906553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(535,2.819336);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(536,2.884996);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(537,2.863276);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(538,2.856);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(539,2.759661);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(540,2.729334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(541,2.913703);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(542,2.906553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(543,2.448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(544,2.744539);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(545,2.782189);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(546,2.767191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(547,2.767191);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(548,2.523341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(549,2.652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(550,2.789658);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(551,2.714043);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(552,2.729334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(553,2.690945);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(554,2.906553);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(555,2.53978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(556,2.523341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(557,2.804536);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(558,2.604498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(559,2.523341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(560,2.556113);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(561,2.644142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(562,2.49848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(563,2.580419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(564,2.596496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(565,2.531573);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(566,2.644142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(567,2.644142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(568,2.612475);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(569,2.456485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(570,2.405125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(571,2.683201);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(572,2.58847);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(573,2.596496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(574,2.49848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(575,2.396457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(576,2.729334);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(577,2.481767);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(578,2.379028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(579,2.53978);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(580,2.464941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(581,2.515081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(582,2.396457);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(583,2.473369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(584,2.636261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(585,2.271648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(586,2.596496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(587,2.56424);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(588,2.580419);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(589,2.439485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(590,2.515081);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(591,2.405125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(592,2.316995);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(593,2.652);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(594,2.456485);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(595,2.49848);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(596,2.636261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(597,2.343782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(598,2.572342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(599,2.370266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(600,2.636261);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(601,2.271648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(602,2.405125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(603,2.379028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(604,2.361471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(605,2.361471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(606,2.343782);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(607,2.572342);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(608,2.197147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(609,2.361471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(610,2.206597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(611,2.334887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(612,2.271648);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(613,2.289894);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(614,2.325958);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(615,2.490137);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(616,2.361471);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(617,2.405125);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(618,2.352643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(619,2.370266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(620,2.523341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(621,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(622,2.523341);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(623,2.379028);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(624,2.234708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(625,2.334887);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(626,2.100309);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(627,2.206597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(628,2.16855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(629,2.370266);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(630,2.280789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(631,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(632,2.253254);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(633,2.262469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(634,2.149273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(635,2.448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(636,2.298963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(637,2.430941);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(638,2.187656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(639,2.187656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(640,2.197147);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(641,2.187656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(642,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(643,2.352643);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(644,2.234708);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(645,2.206597);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(646,2.298963);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(647,2.050175);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(648,2.244);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(649,2.13957);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(650,2.307997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(651,2.0804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(652,2.216007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(653,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(654,2.307997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(655,2.178124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(656,2.0804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(657,2.070374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(658,2.149273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(659,2.129823);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(660,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(661,2.280789);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(662,2.225377);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(663,2.149273);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(664,1.967305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(665,1.956699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(666,2.04);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(667,2.262469);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(668,2.16855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(669,2.029774);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(670,2.090378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(671,2.090378);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(672,2.158933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(673,1.847299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(674,2.187656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(675,1.977853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(676,2.16855);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(677,2.178124);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(678,1.967305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(679,2.216007);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(680,2.019497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(681,2.0804);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(682,1.977853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(683,2.019497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(684,2.009167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(685,1.977853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(686,1.988346);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(687,2.060299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(688,2.158933);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(689,1.956699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(690,2.070374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(691,1.924532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(692,2.12003);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(693,2.009167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(694,2.060299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(695,2.04);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(696,1.91369);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(697,2.070374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(698,1.956699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(699,2.187656);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(700,2.019497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(701,1.967305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(702,1.956699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(703,2.019497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(704,1.869691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(705,1.998784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(706,1.836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(707,1.869691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(708,1.836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(709,1.858528);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(710,1.891818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(711,2.019497);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(712,1.824631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(713,2.070374);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(714,1.847299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(715,1.998784);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(716,2.009167);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(717,1.694551);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(718,1.778431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(719,1.824631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(720,1.924532);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(721,1.869691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(722,1.880787);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(723,1.778431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(724,1.813192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(725,1.766692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(726,1.824631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(727,1.754874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(728,1.935314);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(729,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(730,1.754874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(731,1.813192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(732,1.967305);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(733,1.813192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(734,1.836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(735,1.847299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(736,1.790093);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(737,1.836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(738,1.778431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(739,1.742977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(740,1.880787);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(741,1.669812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(742,1.766692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(743,1.682227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(744,1.824631);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(745,1.977853);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(746,1.754874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(747,1.682227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(748,1.553618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(749,1.847299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(750,1.706786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(751,1.956699);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(752,1.718935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(753,1.836);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(754,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(755,1.718935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(756,1.813192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(757,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(758,1.754874);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(759,1.847299);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(760,1.778431);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(761,1.766692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(762,1.657304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(763,1.718935);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(764,1.682227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(765,1.891818);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(766,1.682227);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(767,1.858528);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(768,1.580177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(769,1.657304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(770,1.730997);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(771,1.512904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(772,1.657304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(773,1.766692);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(774,1.706786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(775,1.669812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(776,1.471065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(777,1.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(778,1.644701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(779,1.632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(780,1.456851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(781,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(782,1.742977);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(783,1.644701);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(784,1.669812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(785,1.706786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(786,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(787,1.706786);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(788,1.869691);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(789,1.593291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(790,1.632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(791,1.485142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(792,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(793,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(794,1.632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(795,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(796,1.657304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(797,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(798,1.632);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(799,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(800,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(801,1.553618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(802,1.606298);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(803,1.566954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(804,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(805,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(806,1.553618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(807,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(808,1.593291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(809,1.499088);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(810,1.471065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(811,1.593291);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(812,1.485142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(813,1.512904);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(814,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(815,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(816,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(817,1.368474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(818,1.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(819,1.553618);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(820,1.6192);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(821,1.485142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(822,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(823,1.25754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(824,1.566954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(825,1.471065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(826,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(827,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(828,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(829,1.580177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(830,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(831,1.566954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(832,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(833,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(834,1.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(835,1.471065);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(836,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(837,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(838,1.485142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(839,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(840,1.580177);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(841,1.540166);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(842,1.669812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(843,1.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(844,1.398554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(845,1.456851);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(846,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(847,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(848,1.428);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(849,1.398554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(850,1.669812);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(851,1.290209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(852,1.657304);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(853,1.526596);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(854,1.368474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(855,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(856,1.566954);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(857,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(858,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(859,1.442498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(860,1.27398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(861,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(862,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(863,1.398554);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(864,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(865,1.485142);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(866,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(867,1.383595);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(868,1.290209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(869,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(870,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(871,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(872,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(873,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(874,1.322071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(875,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(876,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(877,1.322071);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(878,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(879,1.25754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(880,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(881,1.368474);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(882,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(883,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(884,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(885,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(886,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(887,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(888,1.27398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(889,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(890,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(891,1.25754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(892,1.442498);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(893,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(894,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(895,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(896,1.413353);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(897,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(898,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(899,1.117354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(900,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(901,1.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(902,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(903,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(904,1.0402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(905,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(906,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(907,1.337717);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(908,1.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(909,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(910,1.290209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(911,1.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(912,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(913,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(914,1.117354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(915,1.25754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(916,1.079467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(917,1.02);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(918,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(919,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(920,1.079467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(921,1.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(922,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(923,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(924,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(925,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(926,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(927,1.290209);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(928,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(929,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(930,1.0402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(931,1.27398);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(932,1.353183);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(933,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(934,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(935,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(936,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(937,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(938,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(939,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(940,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(941,1.153998);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(942,0.9568448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(943,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(944,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(945,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(946,1.25754);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(947,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(948,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(949,1.240884);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(950,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(951,1.306237);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(952,1.02);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(953,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(954,0.9123157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(955,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(956,1.0402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(957,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(958,0.9783496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(959,0.9568448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(960,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(961,1.189514);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(962,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(963,1.079467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(964,0.9568448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(965,1.02);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(966,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(967,1.135824);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(968,0.9783496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(969,1.171891);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(970,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(971,1.224);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(972,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(973,0.9123157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(974,1.079467);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(975,0.9783496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(976,0.9783496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(977,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(978,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(979,1.117354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(980,0.9568448);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(981,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(982,1.117354);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(983,0.9783496);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(984,1.098574);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(985,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(986,1.20688);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(987,0.8654987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(988,1.0402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(989,0.9348454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(990,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(991,0.9123157);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(992,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(993,0.8411135);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(994,0.8654987);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(995,0.9348454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(996,0.8892154);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(997,0.9993918);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(998,0.9348454);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(999,1.060015);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1000,1.0402);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetBinError(1001,15.6363);
   VH_DHZfirst_2b1c_H_mass_stack_1->SetEntries(630713);

   ci = TColor::GetColor("#ff6600");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_mass_stack_1->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_mass_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VH_DHZfirst_2b1c_H_mass_stack_1,"");
   st->Draw("hist");
   
   TH1D *VH_DHZfirst_H_mass__103 = new TH1D("VH_DHZfirst_H_mass__103","",1000,0,2000);
   VH_DHZfirst_H_mass__103->SetBinContent(1000,2);
   VH_DHZfirst_H_mass__103->SetBinContent(1001,1213);
   VH_DHZfirst_H_mass__103->SetEntries(125775);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__103->SetLineColor(ci);
   VH_DHZfirst_H_mass__103->SetLineWidth(2);
   VH_DHZfirst_H_mass__103->SetMarkerStyle(20);
   VH_DHZfirst_H_mass__103->SetMarkerSize(1.2);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__103->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__103->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__103->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fx1103[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fy1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412.284, 781.32,
   790.704, 790.5, 778.872, 788.46, 781.728, 779.484, 765.816, 765.204, 727.872, 758.676, 738.888, 730.728, 749.292, 733.788, 733.992, 734.808,
   712.368, 711.552, 681.36, 695.436, 680.544, 689.112, 673.2, 643.824, 650.352, 649.74, 630.564, 627.912, 310.08, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 2.856 };
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fex1103[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_H_mass_fey1103[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2884996, 0.5769991, 0.7900886, 1.322071, 2.334887,
   3.066792, 4.013152, 5.030162, 6.12, 7.037261, 8.005538, 8.915524, 9.787749, 10.35187, 10.86384, 11.41124, 11.89164, 12.28751, 12.49573, 12.79521, 12.84228,
   13.08307, 13.1069, 12.97927, 13.30699, 13.12752, 13.22071, 13.21441, 13.25058, 13.11642, 13.29917, 13.21914, 13.06874, 13.0049, 12.77894, 12.87303, 12.62495,
   12.70054, 12.6989, 12.60515, 12.6825, 12.62824, 12.6101, 12.49906, 12.49406, 12.18548, 12.44066, 12.27734, 12.20936, 12.36348, 12.2349, 12.2366, 12.2434,
   12.055, 12.0481, 11.78972, 11.91088, 11.78266, 11.8566, 11.71891, 11.46037, 11.51832, 11.5129, 11.34174, 11.31786, 11.18099, 11.02544, 11.19215, 10.96678,
   11.0443, 10.86575, 10.93257, 10.63543, 10.92496, 10.53122, 10.56279, 10.56476, 10.34181, 10.2529, 10.26507, 10.03547, 10.16117, 10.10161, 9.962638, 9.832292,
   9.842868, 9.755808, 9.832292, 9.648575, 9.605346, 9.710914, 9.500795, 9.626985, 9.370686, 9.406148, 9.200377, 9.3618, 9.109462, 9.116312, 9.008396, 8.982952,
   8.934175, 9.109462, 9.054475, 9.001464, 8.698154, 8.94116, 8.924854, 8.722044, 8.681393, 8.642958, 8.882789, 8.504623, 8.54368, 8.492381, 8.401234, 8.403711,
   8.4703, 8.580134, 8.246244, 8.131902, 8.16255, 8.243721, 8.306583, 8.193083, 8.095999, 8.070257, 7.997737, 7.840079, 7.940292, 7.995135, 7.871863, 8.116534,
   7.963842, 7.794829, 7.826797, 7.924553, 7.866574, 7.855987, 7.727804, 7.908783, 7.643878, 7.874506, 7.627527, 7.556266, 7.456472, 7.59198, 7.487106, 7.567273,
   7.605672, 7.436912, 7.575517, 7.481545, 7.425712, 7.514846, 7.459262, 7.422909, 7.32414, 7.358153, 7.375101, 7.148738, 7.122493, 7.134169, 7.072654, 7.066767,
   7.122493, 7.119571, 7.052029, 7.151648, 7.206717, 6.778205, 7.093218, 7.060876, 7.049078, 6.784342, 6.971907, 7.00466, 6.890853, 6.814944, 6.772063, 6.722721,
   6.950984, 6.899906, 6.741266, 6.697914, 6.790473, 6.781274, 6.765915, 6.732, 6.890853, 6.543918, 6.691698, 6.597752, 6.673014, 6.81189, 6.550274, 6.382951,
   6.50245, 6.632353, 6.559798, 6.431664, 6.402481, 6.310825, 6.444592, 6.682362, 6.50245, 6.363361, 6.441363, 6.395977, 6.190988, 6.28108, 6.350268, 6.534372,
   6.113196, 6.211122, 6.251194, 6.17416, 6.123399, 6.274451, 6.136976, 6.170789, 6.079063, 5.978975, 5.908961, 6.201063, 5.978975, 5.919516, 5.975494, 5.82026,
   6.133585, 5.985932, 5.830975, 5.99288, 5.926542, 6.061924, 5.93356, 5.787994, 5.612781, 5.898388, 5.769991, 5.845232, 5.813105, 5.668117, 5.827406, 5.686443,
   5.777199, 5.519322, 5.646048, 5.500439, 5.755548, 5.51555, 5.908961, 5.594214, 5.787994, 5.597932, 5.504221, 5.605362, 5.777199, 5.730185, 5.492868, 5.564378,
   5.623892, 5.511776, 5.454855, 5.451039, 5.104078, 5.378022, 5.280409, 5.35087, 5.462479, 5.343087, 5.280409, 5.168895, 5.408886, 5.458668, 5.240855, 5.156804,
   5.212988, 5.370278, 5.192992, 5.192992, 5.152767, 5.196998, 5.12848, 5.292218, 5.1, 5.034297, 4.929883, 5.296148, 5.021882, 5.204999, 5.063147, 5.042556,
   4.942529, 5.104078, 5.083654, 5.148727, 5.079559, 4.823209, 5.021882, 5.034297, 4.971912, 5.042556, 4.766795, 5.042556, 4.792915, 4.870433, 4.980275, 5.12848,
   4.656387, 4.771158, 4.836134, 4.758057, 4.547873, 4.900248, 4.788571, 4.575243, 4.891748, 4.570693, 4.709706, 4.633989, 4.633989, 4.547873, 4.687563, 4.58433,
   4.678677, 4.575243, 4.611483, 4.823209, 4.588867, 4.501888, 4.647441, 4.638477, 4.506507, 4.58433, 4.460095, 4.669773, 4.370554, 4.497263, 4.394294, 4.611483,
   4.557015, 4.492634, 4.389557, 4.24006, 4.274275, 4.538713, 4.450755, 4.561579, 4.375313, 4.18573, 4.399027, 4.361022, 4.249864, 4.511122, 4.520338, 4.14577,
   4.244965, 4.180756, 4.120598, 4.200617, 4.365791, 4.14577, 4.205568, 4.210513, 4.165798, 4.274275, 4.110486, 4.090187, 4.155796, 4.389557, 4.120598, 3.881365,
   4.105421, 3.992359, 4.130685, 4.140748, 4.069787, 4.230234, 4.069787, 3.913399, 3.897415, 4.033839, 3.886722, 3.913399, 3.939894, 4.090187, 3.971456, 3.918712,
   3.924018, 3.945172, 3.971456, 3.918712, 3.750494, 3.821939, 3.717057, 3.705844, 3.939894, 3.626383, 3.881365, 3.739382, 4.13572, 3.981921, 3.865248, 3.733813,
   3.509749, 3.551007, 3.609128, 3.733813, 3.789132, 3.756038, 3.783636, 3.700225, 3.728236, 3.811035, 3.683316, 3.643557, 3.591791, 3.733813, 3.733813, 3.485954,
   3.711455, 3.65496, 3.609128, 3.778133, 3.545142, 3.744942, 3.382957, 3.603358, 3.591791, 3.562707, 3.539268, 3.660649, 3.700225, 3.503815, 3.562707, 3.437869,
   3.276725, 3.485954, 3.407472, 3.437869, 3.413573, 3.515672, 3.40136, 3.425743, 3.376801, 3.473995, 3.320879, 3.389103, 3.289401, 3.52749, 3.302028, 3.395237,
   3.407472, 3.08708, 3.376801, 3.295721, 3.370633, 3.113925, 3.206112, 3.206112, 3.327139, 3.339624, 3.180045, 3.166932, 3.231968, 3.039532, 3.053192, 3.206112,
   3.382957, 3.133907, 3.283069, 3.244819, 3.2384, 3.160354, 3.166932, 3.376801, 2.963271, 3.212595, 3.04637, 3.127261, 3.005108, 2.998175, 3.032678, 3.100532,
   2.977282, 3.06, 3.053192, 3.093813, 3.04637, 2.906553, 3.107235, 2.920835, 2.899385, 3.032678, 2.984263, 3.107235, 3.018924, 2.920835, 3.1206, 2.991227,
   2.998175, 2.94213, 2.834059, 2.963271, 3.012024, 2.884996, 2.963271, 3.039532, 2.698666, 3.012024, 2.877774, 3.133907, 2.963271, 2.834059, 2.920835, 2.644142,
   2.899385, 2.899385, 2.819336, 2.963271, 2.906553, 2.819336, 2.884996, 2.863276, 2.856, 2.759661, 2.729334, 2.913703, 2.906553, 2.448, 2.744539, 2.782189,
   2.767191, 2.767191, 2.523341, 2.652, 2.789658, 2.714043, 2.729334, 2.690945, 2.906553, 2.53978, 2.523341, 2.804536, 2.604498, 2.523341, 2.556113, 2.644142,
   2.49848, 2.580419, 2.596496, 2.531573, 2.644142, 2.644142, 2.612475, 2.456485, 2.405125, 2.683201, 2.58847, 2.596496, 2.49848, 2.396457, 2.729334, 2.481767,
   2.379028, 2.53978, 2.464941, 2.515081, 2.396457, 2.473369, 2.636261, 2.271648, 2.596496, 2.56424, 2.580419, 2.439485, 2.515081, 2.405125, 2.316995, 2.652,
   2.456485, 2.49848, 2.636261, 2.343782, 2.572342, 2.370266, 2.636261, 2.271648, 2.405125, 2.379028, 2.361471, 2.361471, 2.343782, 2.572342, 2.197147, 2.361471,
   2.206597, 2.334887, 2.271648, 2.289894, 2.325958, 2.490137, 2.361471, 2.405125, 2.352643, 2.370266, 2.523341, 2.225377, 2.523341, 2.379028, 2.234708, 2.334887,
   2.100309, 2.206597, 2.16855, 2.370266, 2.280789, 2.225377, 2.253254, 2.262469, 2.149273, 2.448, 2.298963, 2.430941, 2.187656, 2.187656, 2.197147, 2.187656,
   2.225377, 2.352643, 2.234708, 2.206597, 2.298963, 2.050175, 2.244, 2.13957, 2.307997, 2.0804, 2.216007, 2.225377, 2.307997, 2.178124, 2.0804, 2.070374,
   2.149273, 2.129823, 2.225377, 2.280789, 2.225377, 2.149273, 1.967305, 1.956699, 2.04, 2.262469, 2.16855, 2.029774, 2.090378, 2.090378, 2.158933, 1.847299,
   2.187656, 1.977853, 2.16855, 2.178124, 1.967305, 2.216007, 2.019497, 2.0804, 1.977853, 2.019497, 2.009167, 1.977853, 1.988346, 2.060299, 2.158933, 1.956699,
   2.070374, 1.924532, 2.12003, 2.009167, 2.060299, 2.04, 1.91369, 2.070374, 1.956699, 2.187656, 2.019497, 1.967305, 1.956699, 2.019497, 1.869691, 1.998784,
   1.836, 1.869691, 1.836, 1.858528, 1.891818, 2.019497, 1.824631, 2.070374, 1.847299, 1.998784, 2.009167, 1.694551, 1.778431, 1.824631, 1.924532, 1.869691,
   1.880787, 1.778431, 1.813192, 1.766692, 1.824631, 1.754874, 1.935314, 1.6192, 1.754874, 1.813192, 1.967305, 1.813192, 1.836, 1.847299, 1.790093, 1.836,
   1.778431, 1.742977, 1.880787, 1.669812, 1.766692, 1.682227, 1.824631, 1.977853, 1.754874, 1.682227, 1.553618, 1.847299, 1.706786, 1.956699, 1.718935, 1.836,
   1.526596, 1.718935, 1.813192, 1.540166, 1.754874, 1.847299, 1.778431, 1.766692, 1.657304, 1.718935, 1.682227, 1.891818, 1.682227, 1.858528, 1.580177, 1.657304,
   1.730997, 1.512904, 1.657304, 1.766692, 1.706786, 1.669812, 1.471065, 1.428, 1.644701, 1.632, 1.456851, 1.540166, 1.742977, 1.644701, 1.669812, 1.706786,
   1.6192, 1.706786, 1.869691, 1.593291, 1.632, 1.485142, 1.383595, 1.526596, 1.632, 1.413353, 1.657304, 1.353183, 1.632, 1.6192, 1.526596, 1.553618,
   1.606298, 1.566954, 1.383595, 1.526596, 1.553618, 1.337717, 1.593291, 1.499088, 1.471065, 1.593291, 1.485142, 1.512904, 1.6192, 1.337717, 1.6192, 1.368474,
   1.428, 1.553618, 1.6192, 1.485142, 1.413353, 1.25754, 1.566954, 1.471065, 1.337717, 1.540166, 1.413353, 1.580177, 1.540166, 1.566954, 1.526596, 1.383595,
   1.428, 1.471065, 1.383595, 1.526596, 1.485142, 1.540166, 1.580177, 1.540166, 1.669812, 1.428, 1.398554, 1.456851, 1.337717, 1.383595, 1.428, 1.398554,
   1.669812, 1.290209, 1.657304, 1.526596, 1.368474, 1.224, 1.566954, 1.224, 1.171891, 1.442498, 1.27398, 1.224, 1.353183, 1.398554, 1.337717, 1.485142,
   1.306237, 1.383595, 1.290209, 1.353183, 1.337717, 1.189514, 1.353183, 1.413353, 1.322071, 1.153998, 1.224, 1.322071, 1.337717, 1.25754, 1.353183, 1.368474,
   1.189514, 1.189514, 1.20688, 1.153998, 1.189514, 1.413353, 1.27398, 1.306237, 1.337717, 1.25754, 1.442498, 1.306237, 1.153998, 1.240884, 1.413353, 1.171891,
   1.171891, 1.117354, 1.153998, 1.135824, 1.224, 1.171891, 1.0402, 1.240884, 1.153998, 1.337717, 1.135824, 1.153998, 1.290209, 1.135824, 1.171891, 1.224,
   1.117354, 1.25754, 1.079467, 1.02, 1.153998, 1.20688, 1.079467, 1.135824, 1.153998, 1.306237, 1.306237, 1.20688, 1.240884, 1.290209, 1.189514, 1.240884,
   1.0402, 1.27398, 1.353183, 1.060015, 1.098574, 1.240884, 0.9993918, 1.20688, 1.20688, 1.060015, 1.153998, 1.153998, 0.9568448, 1.240884, 1.224, 0.9993918,
   1.25754, 1.20688, 1.240884, 1.240884, 1.060015, 1.306237, 1.02, 1.189514, 0.9123157, 1.098574, 1.0402, 1.098574, 0.9783496, 0.9568448, 1.189514, 1.189514,
   1.224, 1.079467, 0.9568448, 1.02, 1.098574, 1.135824, 0.9783496, 1.171891, 1.098574, 1.224, 1.20688, 0.9123157, 1.079467, 0.9783496, 0.9783496, 1.060015,
   0.9993918, 1.117354, 0.9568448, 1.060015, 1.117354, 0.9783496, 1.098574, 1.20688, 1.20688, 0.8654987, 1.0402, 0.9348454, 0.9993918, 0.9123157, 0.9993918, 0.8411135,
   0.8654987, 0.9348454, 0.8892154, 0.9993918, 0.9348454, 1.060015, 1.0402 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_H_mass_fx1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fy1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fex1103,Graph_from_VH_DHZfirst_2b1c_H_mass_fey1103);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_H_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetMinimum(-94.97815);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetMaximum(885.0757);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_H_mass1103);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_H_mass","Data (BTagCSV, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VH_DHZfirst_2b1c_H_mass","Data-driven Bckg","F");

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
   entry=leg->AddEntry("Graph_from_VH_DHZfirst_2b1c_H_mass","MC unc. (stat.)","fl");

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
   H_mass_DHZfirst_SR_17->cd();
  
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
   
   TH1D *data_mc_ratio__104 = new TH1D("data_mc_ratio__104","",1000,0,2000);
   data_mc_ratio__104->SetBinContent(1000,0.7002801);
   data_mc_ratio__104->SetBinContent(1001,1.012098);
   data_mc_ratio__104->SetBinError(1000,0.4951728);
   data_mc_ratio__104->SetBinError(1001,0.03191907);
   data_mc_ratio__104->SetMinimum(0.4);
   data_mc_ratio__104->SetMaximum(1.6);
   data_mc_ratio__104->SetEntries(1.580645);
   data_mc_ratio__104->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__104->SetLineColor(ci);
   data_mc_ratio__104->SetLineWidth(2);
   data_mc_ratio__104->SetMarkerStyle(20);
   data_mc_ratio__104->SetMarkerSize(1.2);
   data_mc_ratio__104->GetXaxis()->SetTitle("M_{H} [GeV]");
   data_mc_ratio__104->GetXaxis()->SetRange(1,150);
   data_mc_ratio__104->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__104->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__104->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__104->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__104->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__104->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__104->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__104->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__104->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__104->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1104[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1104[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1104[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0312237, 0.01615848,
   0.01606231, 0.01606439, 0.01618386, 0.01608516, 0.01615427, 0.0161775, 0.01632123, 0.01632775, 0.01674124, 0.01639785, 0.01661597, 0.01670849, 0.01650021, 0.01667362, 0.0166713, 0.01666204,
   0.01692244, 0.01693214, 0.01730321, 0.01712721, 0.01731358, 0.01720561, 0.01740777, 0.01780047, 0.01771091, 0.01771925, 0.01798666, 0.0180246, 0.03605839, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.3642157 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1104,Graph_from_mc_statistical_error_fy1104,Graph_from_mc_statistical_error_fex1104,Graph_from_mc_statistical_error_fey1104);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1104 = new TH1F("Graph_Graph_from_mc_statistical_error1104","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1104->SetMinimum(0.5629412);
   Graph_Graph_from_mc_statistical_error1104->SetMaximum(1.437059);
   Graph_Graph_from_mc_statistical_error1104->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1104->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1104);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   H_mass_DHZfirst_SR_17->cd();
   H_mass_DHZfirst_SR_17->Modified();
   H_mass_DHZfirst_SR_17->cd();
   H_mass_DHZfirst_SR_17->SetSelected(H_mass_DHZfirst_SR_17);
}
