#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_DHZfirst_VR_16()
{
//=========Macro generated from canvas: Z_mass_DHZfirst_VR_16/Z_mass_DHZfirst_VR_16
//=========  (Mon Apr  8 13:43:40 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_DHZfirst_VR_16 = new TCanvas("Z_mass_DHZfirst_VR_16", "Z_mass_DHZfirst_VR_16",0,0,600,600);
   Z_mass_DHZfirst_VR_16->SetHighLightColor(2);
   Z_mass_DHZfirst_VR_16->Range(0,0,1,1);
   Z_mass_DHZfirst_VR_16->SetFillColor(0);
   Z_mass_DHZfirst_VR_16->SetFillStyle(4000);
   Z_mass_DHZfirst_VR_16->SetBorderMode(0);
   Z_mass_DHZfirst_VR_16->SetBorderSize(2);
   Z_mass_DHZfirst_VR_16->SetFrameFillStyle(1000);
   Z_mass_DHZfirst_VR_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-45.96762,-7.694847,315.7258,7697.151);
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
   st->SetMaximum(6926.667);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",1000,0,2000);
   st_stack_75->SetMinimum(0.01);
   st_stack_75->SetMaximum(6926.667);
   st_stack_75->SetDirectory(nullptr);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->SetLineWidth(0);
   st_stack_75->GetXaxis()->SetRange(1,150);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetTitleOffset(1);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/2.0 GeV");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetLabelSize(0.05);
   st_stack_75->GetYaxis()->SetTitleSize(0.057);
   st_stack_75->GetYaxis()->SetTitleOffset(1.2);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetTitleOffset(1);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *VH_DHZfirst_2b1c_Z_mass_stack_1 = new TH1D("VH_DHZfirst_2b1c_Z_mass_stack_1","",1000,0,2000);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(26,2177.379);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(27,2487.37);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(28,2688.008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(29,2911.864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(30,3021.842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(61,2323.738);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(62,2277.103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(63,2244.295);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(64,2247.495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(65,2242.641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1000,9.582959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinContent(1001,5611.768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(8,0.00550435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(11,0.008047678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(13,0.1986149);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(14,0.6568694);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(15,1.221003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(16,2.214897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(17,3.560426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(18,5.409157);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(19,7.69733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(20,9.279276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(21,11.53559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(22,13.84316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(23,15.73229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(24,17.7842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(25,19.47325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(26,20.99579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(27,22.48676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(28,23.35494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(29,24.38057);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(30,24.78598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(31,25.45242);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(32,25.60839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(33,25.89936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(34,26.0519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(35,26.07494);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(36,25.89039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(37,25.94469);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(38,25.90574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(39,25.8336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(40,25.62454);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(41,25.53464);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(42,25.44336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(43,25.31476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(44,25.18871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(45,25.01888);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(46,24.94165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(47,24.89564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(48,24.51245);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(49,24.54877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(50,24.33331);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(51,24.07473);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(52,24.08584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(53,23.83345);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(54,23.61119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(55,23.58314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(56,23.29335);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(57,23.0917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(58,23.06583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(59,22.79852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(60,22.57959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(61,22.58386);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(62,22.41919);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(63,22.21747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(64,22.22736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(65,22.25842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(66,21.76603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(67,21.77955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(68,21.76825);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(69,21.69344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(70,21.68895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(71,21.21979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(72,21.11265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(73,20.84116);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(74,20.79319);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(75,20.79716);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(76,20.3598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(77,20.37849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(78,20.0814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(79,19.9784);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(80,19.79445);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(81,19.62504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(82,19.44979);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(83,19.3273);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(84,19.29114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(85,19.02446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(86,18.88064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(87,18.70941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(88,18.54186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(89,18.44223);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(90,18.02987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(91,18.0047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(92,17.91777);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(93,17.68989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(94,17.54299);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(95,17.32313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(96,17.25229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(97,17.1106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(98,16.99166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(99,16.83252);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(100,16.7862);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(101,16.47885);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(102,16.43779);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(103,16.31938);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(104,16.07271);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(105,16.05723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(106,15.89925);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(107,15.7442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(108,15.57781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(109,15.48337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(110,15.28743);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(111,15.30097);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(112,15.17997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(113,15.01241);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(114,14.98658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(115,14.83103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(116,14.77038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(117,14.6196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(118,14.52038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(119,14.37964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(120,14.306);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(121,14.32798);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(122,13.95337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(123,13.9209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(124,14.04367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(125,13.7599);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(126,13.57121);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(127,13.45692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(128,13.42994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(129,13.35471);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(130,13.32246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(131,13.26653);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(132,13.32621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(133,13.06201);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(134,12.97666);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(135,12.66406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(136,12.65606);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(137,12.77077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(138,12.73393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(139,12.65297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(140,12.56256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(141,12.5419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(142,12.4171);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(143,12.30989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(144,12.20104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(145,12.15217);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(146,11.92619);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(147,11.96076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(148,12.01195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(149,11.91667);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(150,11.66961);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(151,11.77182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(152,11.33663);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(153,11.5479);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(154,11.64805);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(155,11.4114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(156,11.32252);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(157,11.27661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(158,11.26076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(159,11.2366);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(160,11.10608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(161,10.88608);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(162,10.90648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(163,10.84039);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(164,10.84501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(165,10.76435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(166,10.70416);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(167,10.64966);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(168,10.56429);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(169,10.32365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(170,10.65499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(171,10.49314);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(172,10.50579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(173,10.40971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(174,10.16989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(175,10.31875);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(176,10.13539);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(177,10.16946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(178,10.00362);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(179,10.17912);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(180,10.08828);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(181,9.652527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(182,9.646648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(183,9.990492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(184,9.6963);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(185,9.718115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(186,9.857589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(187,9.691234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(188,9.66311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(189,9.561968);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(190,9.593323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(191,9.472579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(192,9.411435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(193,9.359051);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(194,9.288955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(195,9.426739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(196,9.442839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(197,9.230194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(198,9.321435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(199,9.22633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(200,9.125719);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(201,9.085122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(202,9.079192);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(203,9.258756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(204,8.881414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(205,8.952559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(206,8.992552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(207,8.898778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(208,8.967159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(209,9.043091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(210,8.880766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(211,8.881818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(212,8.65168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(213,8.780601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(214,8.75678);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(215,8.885111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(216,8.545917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(217,8.55173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(218,8.479918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(219,8.579657);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(220,8.527603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(221,8.633458);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(222,8.493845);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(223,8.656344);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(224,8.301357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(225,8.442342);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(226,8.468487);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(227,8.306526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(228,8.379465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(229,8.352868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(230,8.262305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(231,8.250334);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(232,8.211988);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(233,8.244568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(234,8.155757);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(235,8.129185);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(236,8.287203);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(237,8.136712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(238,8.090986);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(239,8.06992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(240,8.010527);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(241,7.944255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(242,7.988633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(243,8.22248);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(244,8.053949);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(245,8.040644);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(246,8.061778);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(247,8.007841);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(248,7.920637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(249,7.903702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(250,7.905899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(251,7.922435);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(252,7.741849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(253,8.177932);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(254,7.769179);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(255,7.778374);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(256,7.918341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(257,7.850388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(258,7.88186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(259,7.575812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(260,7.704166);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(261,7.703432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(262,7.637053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(263,7.62864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(264,7.632747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(265,7.552077);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(266,7.573017);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(267,7.647064);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(268,7.433803);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(269,7.502315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(270,7.494504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(271,7.636987);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(272,7.604259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(273,7.610917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(274,7.420849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(275,7.489826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(276,7.403521);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(277,7.396243);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(278,7.494008);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(279,7.336442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(280,7.401394);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(281,7.299047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(282,7.498782);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(283,7.469807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(284,7.487287);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(285,7.425094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(286,7.361399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(287,7.332685);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(288,7.515755);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(289,7.314797);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(290,7.203232);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(291,7.258196);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(292,7.277168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(293,7.405614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(294,7.276461);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(295,7.321502);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(296,7.316263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(297,7.130338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(298,7.452846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(299,7.291492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(300,7.353824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(301,7.01769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(302,7.160603);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(303,7.095818);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(304,7.181509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(305,6.971108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(306,7.064724);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(307,7.128793);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(308,7.205516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(309,7.228072);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(310,7.113799);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(311,6.988216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(312,7.088213);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(313,7.068368);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(314,7.115274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(315,7.179498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(316,7.090584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(317,7.070056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(318,6.957466);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(319,6.921313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(320,6.979222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(321,6.984015);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(322,6.814277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(323,6.881581);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(324,7.099497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(325,6.991598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(326,6.920993);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(327,6.911056);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(328,6.996739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(329,6.693529);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(330,6.92791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(331,6.701291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(332,6.653259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(333,6.777352);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(334,6.716866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(335,6.818255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(336,6.500297);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(337,6.845801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(338,7.003385);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(339,6.866034);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(340,6.801899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(341,6.629929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(342,6.741348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(343,6.929967);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(344,6.853042);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(345,6.698383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(346,6.701901);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(347,6.715891);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(348,6.833977);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(349,6.722855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(350,6.770355);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(351,6.638348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(352,6.695682);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(353,6.729991);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(354,6.601122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(355,6.460162);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(356,6.645279);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(357,6.598069);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(358,6.739664);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(359,6.589746);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(360,6.636958);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(361,6.542294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(362,6.569621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(363,6.574265);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(364,6.584795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(365,6.608597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(366,6.802272);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(367,6.540733);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(368,6.458748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(369,6.530523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(370,6.51531);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(371,6.607455);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(372,6.49134);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(373,6.496748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(374,6.355526);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(375,6.377934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(376,6.467387);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(377,6.353004);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(378,6.271137);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(379,6.431496);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(380,6.482604);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(381,6.368934);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(382,6.378023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(383,6.387135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(384,6.437819);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(385,6.359768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(386,6.281254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(387,6.39167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(388,6.287392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(389,6.304971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(390,6.397363);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(391,6.379001);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(392,6.297144);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(393,6.258392);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(394,6.189426);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(395,6.403997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(396,6.226333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(397,6.256559);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(398,6.170135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(399,6.032747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(400,6.177414);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(401,6.318143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(402,6.117625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(403,6.167053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(404,6.198408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(405,6.174436);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(406,6.181505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(407,6.192311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(408,6.148868);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(409,6.267954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(410,6.125655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(411,6.244398);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(412,6.137769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(413,6.200814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(414,6.101322);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(415,5.899565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(416,6.192698);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(417,5.956786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(418,6.127596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(419,6.217595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(420,5.96615);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(421,6.059542);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(422,5.699065);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(423,6.170684);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(424,6.050801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(425,6.208261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(426,5.886584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(427,6.259194);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(428,5.920349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(429,6.117337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(430,5.804571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(431,5.832899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(432,6.046557);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(433,5.870189);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(434,5.859359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(435,5.827388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(436,5.833481);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(437,5.844697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(438,5.945957);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(439,5.753946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(440,5.812851);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(441,5.895497);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(442,5.844821);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(443,6.048846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(444,5.893483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(445,5.843729);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(446,5.780763);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(447,5.991377);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(448,5.91159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(449,5.801873);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(450,5.945595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(451,5.969354);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(452,5.671835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(453,5.649161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(454,5.593255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(455,5.614239);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(456,5.878936);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(457,5.786877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(458,5.552349);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(459,5.954229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(460,5.556525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(461,5.67554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(462,5.573405);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(463,5.812711);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(464,5.71992);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(465,5.656971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(466,5.680103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(467,5.608291);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(468,5.754162);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(469,5.873568);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(470,5.507169);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(471,5.642946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(472,5.641514);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(473,5.6674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(474,5.491586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(475,5.482541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(476,5.432127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(477,5.474325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(478,5.32971);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(479,5.517078);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(480,5.559132);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(481,5.376462);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(482,5.401024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(483,5.661216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(484,5.472483);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(485,5.493836);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(486,5.41476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(487,5.561339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(488,5.411756);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(489,5.459274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(490,5.32364);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(491,5.567339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(492,5.525618);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(493,5.417983);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(494,5.378009);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(495,5.400104);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(496,5.438256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(497,5.413598);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(498,5.497098);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(499,5.367676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(500,5.445106);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(501,5.393003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(502,5.162929);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(503,5.293058);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(504,5.194541);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(505,5.337924);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(506,5.184006);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(507,5.263883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(508,5.166399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(509,5.157976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(510,5.224783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(511,5.193811);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(512,5.397959);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(513,5.2476);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(514,5.136156);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(515,5.274209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(516,5.275012);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(517,5.252812);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(518,4.993883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(519,5.268931);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(520,5.112321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(521,5.092894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(522,5.051431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(523,5.193665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(524,4.851482);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(525,5.165357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(526,5.143492);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(527,5.189525);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(528,5.177351);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(529,5.051259);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(530,4.98813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(531,4.979216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(532,5.02258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(533,5.03338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(534,4.813509);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(535,5.024282);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(536,5.097655);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(537,4.772221);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(538,5.129941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(539,5.011003);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(540,5.34702);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(541,5.075047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(542,4.827972);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(543,4.809313);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(544,4.944205);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(545,5.085199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(546,5.064316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(547,4.966442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(548,4.970367);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(549,4.942413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(550,4.767043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(551,4.792612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(552,5.047093);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(553,4.742257);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(554,4.74037);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(555,4.864852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(556,4.82835);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(557,4.878631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(558,4.810565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(559,4.901699);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(560,4.859614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(561,4.835131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(562,4.818565);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(563,4.765126);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(564,4.852047);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(565,4.666122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(566,4.848796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(567,4.887369);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(568,4.697688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(569,4.695321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(570,4.748463);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(571,4.701605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(572,4.780254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(573,4.71895);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(574,4.687315);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(575,4.726995);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(576,4.824937);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(577,4.668826);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(578,4.743413);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(579,4.571501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(580,4.65947);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(581,4.945222);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(582,4.62186);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(583,4.621209);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(584,4.680631);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(585,4.640054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(586,4.518288);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(587,4.656579);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(588,4.533753);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(589,4.717206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(590,4.717748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(591,4.573288);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(592,4.599433);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(593,4.617117);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(594,4.437808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(595,4.378627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(596,4.502999);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(597,4.59552);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(598,4.560721);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(599,4.454011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(600,4.44376);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(601,4.604769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(602,4.508939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(603,4.452823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(604,4.510824);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(605,4.628632);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(606,4.353928);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(607,4.480561);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(608,4.482375);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(609,4.434548);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(610,4.512674);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(611,4.252131);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(612,4.495101);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(613,4.393145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(614,4.336758);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(615,4.489791);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(616,4.373399);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(617,4.535601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(618,4.2574);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(619,4.283589);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(620,4.262127);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(621,4.195522);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(622,4.449597);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(623,4.385431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(624,4.374263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(625,4.453487);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(626,4.216768);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(627,4.426673);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(628,4.405786);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(629,4.264125);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(630,4.084659);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(631,4.188119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(632,4.224869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(633,4.235625);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(634,4.2736);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(635,4.247658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(636,4.374948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(637,4.198917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(638,4.068591);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(639,4.225846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(640,4.219499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(641,4.010023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(642,4.167848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(643,4.218111);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(644,4.28061);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(645,4.020894);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(646,4.037904);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(647,4.034627);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(648,4.257964);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(649,4.232253);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(650,4.213749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(651,3.992451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(652,4.146749);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(653,4.042596);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(654,4.269446);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(655,4.076054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(656,3.880551);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(657,4.166614);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(658,4.063996);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(659,4.154658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(660,3.948593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(661,4.216168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(662,4.049308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(663,3.930361);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(664,3.981998);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(665,4.185648);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(666,4.049457);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(667,3.860448);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(668,3.914182);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(669,3.863485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(670,4.082076);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(671,4.00308);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(672,3.903256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(673,3.909122);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(674,3.939882);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(675,4.001943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(676,3.998276);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(677,3.993173);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(678,3.854737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(679,3.96855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(680,3.931136);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(681,3.931505);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(682,4.00801);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(683,3.98917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(684,3.86903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(685,4.006285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(686,4.100714);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(687,3.913575);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(688,3.939771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(689,3.869103);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(690,3.923905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(691,3.886465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(692,3.68583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(693,3.767584);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(694,3.95612);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(695,3.971143);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(696,3.883697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(697,3.700493);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(698,3.77027);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(699,3.708114);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(700,3.701045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(701,3.816091);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(702,3.701383);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(703,3.686942);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(704,3.868923);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(705,3.70866);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(706,3.775717);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(707,3.635513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(708,3.795654);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(709,3.886872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(710,3.938024);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(711,3.82877);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(712,3.535359);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(713,3.561897);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(714,3.740688);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(715,3.691451);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(716,3.810902);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(717,3.781513);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(718,3.770396);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(719,3.550234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(720,3.588737);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(721,3.603053);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(722,3.726365);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(723,3.678118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(724,3.564695);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(725,3.675227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(726,3.505021);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(727,3.441504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(728,3.500372);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(729,3.361712);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(730,3.609747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(731,3.459193);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(732,3.516516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(733,3.684823);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(734,3.391864);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(735,3.580788);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(736,3.460304);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(737,3.521594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(738,3.508914);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(739,3.492918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(740,3.631766);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(741,3.587119);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(742,3.487601);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(743,3.556233);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(744,3.399848);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(745,3.530997);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(746,3.255378);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(747,3.367341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(748,3.441547);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(749,3.436135);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(750,3.441739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(751,3.454087);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(752,3.521498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(753,3.388764);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(754,3.475075);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(755,3.373762);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(756,3.331255);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(757,3.344507);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(758,3.290298);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(759,3.3852);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(760,3.34943);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(761,3.374431);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(762,3.49145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(763,3.476917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(764,3.383634);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(765,3.364165);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(766,3.493465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(767,3.44829);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(768,3.373708);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(769,3.399234);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(770,3.343055);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(771,3.318752);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(772,3.0739);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(773,3.379516);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(774,3.378486);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(775,3.378244);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(776,3.207861);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(777,3.338796);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(778,3.300913);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(779,3.333089);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(780,3.107327);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(781,3.320994);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(782,3.363118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(783,3.272311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(784,3.237102);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(785,3.145293);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(786,3.009277);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(787,3.129905);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(788,3.169321);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(789,3.314495);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(790,3.390174);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(791,3.259689);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(792,3.076141);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(793,3.313206);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(794,3.246594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(795,3.394871);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(796,3.182523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(797,3.295474);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(798,3.062108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(799,3.260054);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(800,3.144337);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(801,3.277268);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(802,3.227406);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(803,3.179842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(804,3.143094);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(805,3.030523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(806,3.080456);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(807,3.218855);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(808,2.9879);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(809,3.217357);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(810,3.047649);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(811,3.116759);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(812,3.256872);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(813,3.030167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(814,2.932067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(815,2.936792);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(816,2.937096);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(817,3.103019);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(818,2.957813);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(819,2.814809);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(820,3.036547);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(821,2.913955);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(822,3.048178);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(823,3.153086);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(824,3.095665);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(825,2.9442);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(826,3.029893);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(827,2.923501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(828,2.962067);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(829,2.860613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(830,3.033948);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(831,2.895953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(832,2.870501);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(833,2.812656);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(834,3.098095);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(835,2.954419);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(836,2.889989);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(837,2.963918);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(838,2.840229);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(839,3.105029);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(840,2.686216);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(841,2.902227);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(842,2.810115);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(843,3.001946);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(844,2.876046);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(845,2.920814);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(846,3.01402);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(847,2.84026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(848,2.898941);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(849,2.887593);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(850,2.90348);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(851,2.921434);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(852,2.90336);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(853,2.771605);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(854,3.021903);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(855,2.73621);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(856,2.813899);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(857,2.807246);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(858,2.669443);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(859,2.748917);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(860,2.993594);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(861,2.853723);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(862,2.736159);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(863,2.861264);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(864,2.820896);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(865,2.785261);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(866,2.78617);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(867,2.646735);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(868,2.647954);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(869,2.729095);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(870,2.724274);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(871,2.706808);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(872,2.744108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(873,2.848769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(874,2.735661);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(875,2.566294);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(876,2.812007);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(877,2.848859);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(878,2.719515);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(879,2.720415);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(880,2.755554);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(881,2.798263);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(882,2.562397);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(883,2.518586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(884,2.669045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(885,2.727748);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(886,2.790145);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(887,2.662781);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(888,2.752633);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(889,2.640767);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(890,2.690389);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(891,2.677254);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(892,2.60199);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(893,2.602774);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(894,2.578693);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(895,2.647485);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(896,2.733393);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(897,2.555338);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(898,2.611869);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(899,2.578256);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(900,2.531795);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(901,2.667358);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(902,2.562856);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(903,2.512301);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(904,2.690423);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(905,2.616316);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(906,2.463408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(907,2.540658);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(908,2.436498);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(909,2.565571);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(910,2.532641);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(911,2.519915);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(912,2.435472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(913,2.559465);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(914,2.572195);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(915,2.477849);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(916,2.436595);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(917,2.36499);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(918,2.421108);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(919,2.547168);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(920,2.297068);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(921,2.477305);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(922,2.555504);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(923,2.389408);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(924,2.455303);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(925,2.338769);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(926,2.397939);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(927,2.484842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(928,2.430236);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(929,2.406613);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(930,2.494258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(931,2.501388);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(932,2.477092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(933,2.617133);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(934,2.357092);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(935,2.355839);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(936,2.421692);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(937,2.371048);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(938,2.420063);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(939,2.298842);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(940,2.252953);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(941,2.470043);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(942,2.446472);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(943,2.431586);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(944,2.245198);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(945,2.281437);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(946,2.253676);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(947,2.2533);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(948,2.211734);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(949,2.210807);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(950,2.484553);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(951,2.331038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(952,2.243356);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(953,2.174771);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(954,2.354325);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(955,2.209681);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(956,2.513563);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(957,2.253033);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(958,2.312296);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(959,2.321519);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(960,2.134783);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(961,2.118564);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(962,2.246118);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(963,2.303638);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(964,2.31311);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(965,2.406846);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(966,2.296583);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(967,2.338637);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(968,2.275285);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(969,2.072544);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(970,2.174567);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(971,2.17323);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(972,2.005197);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(973,2.181477);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(974,2.19976);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(975,2.321885);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(976,2.252622);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(977,2.201142);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(978,2.091011);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(979,2.270883);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(980,2.243747);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(981,2.080432);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(982,2.296023);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(983,2.062188);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(984,2.174339);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(985,2.217172);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(986,2.183202);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(987,2.172886);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(988,2.146424);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(989,2.246887);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(990,2.146038);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(991,2.146838);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(992,1.849258);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(993,2.338341);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(994,2.061952);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(995,2.090045);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(996,2.130026);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(997,2.190167);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(998,2.180523);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(999,2.109161);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1000,2.083333);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetBinError(1001,34.45697);
   VH_DHZfirst_2b1c_Z_mass_stack_1->SetEntries(1624254);

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
   
   TH1D *VH_DHZfirst_Z_mass__149 = new TH1D("VH_DHZfirst_Z_mass__149","",1000,0,2000);
   VH_DHZfirst_Z_mass__149->SetBinContent(26,2149);
   VH_DHZfirst_Z_mass__149->SetBinContent(27,2510);
   VH_DHZfirst_Z_mass__149->SetBinContent(28,2708);
   VH_DHZfirst_Z_mass__149->SetBinContent(29,2934);
   VH_DHZfirst_Z_mass__149->SetBinContent(30,3117);
   VH_DHZfirst_Z_mass__149->SetBinContent(61,2566);
   VH_DHZfirst_Z_mass__149->SetBinContent(62,2481);
   VH_DHZfirst_Z_mass__149->SetBinContent(63,2442);
   VH_DHZfirst_Z_mass__149->SetBinContent(64,2505);
   VH_DHZfirst_Z_mass__149->SetBinContent(65,2409);
   VH_DHZfirst_Z_mass__149->SetBinContent(1000,8);
   VH_DHZfirst_Z_mass__149->SetBinContent(1001,6332);
   VH_DHZfirst_Z_mass__149->SetEntries(376573);

   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__149->SetLineColor(ci);
   VH_DHZfirst_Z_mass__149->SetLineWidth(2);
   VH_DHZfirst_Z_mass__149->SetMarkerStyle(20);
   VH_DHZfirst_Z_mass__149->SetMarkerSize(1.2);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetRange(1,2000);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__149->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__149->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__149->Draw("same E");
   
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1149[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1149[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 2177.379, 2487.37, 2688.008, 2911.864, 3021.842, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2323.738, 2277.103, 2244.295, 2247.495, 2242.641,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 9.582959 };
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1149[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1149[1000] = { 0, 0, 0, 0, 0, 0, 0, 0.00550435, 0, 0, 0.008047678, 0, 0.1986149, 0.6568694, 1.221003, 2.214897, 3.560426,
   5.409157, 7.69733, 9.279276, 11.53559, 13.84316, 15.73229, 17.7842, 19.47325, 20.99579, 22.48676, 23.35494, 24.38057, 24.78598, 25.45242, 25.60839, 25.89936,
   26.0519, 26.07494, 25.89039, 25.94469, 25.90574, 25.8336, 25.62454, 25.53464, 25.44336, 25.31476, 25.18871, 25.01888, 24.94165, 24.89564, 24.51245, 24.54877,
   24.33331, 24.07473, 24.08584, 23.83345, 23.61119, 23.58314, 23.29335, 23.0917, 23.06583, 22.79852, 22.57959, 22.58386, 22.41919, 22.21747, 22.22736, 22.25842,
   21.76603, 21.77955, 21.76825, 21.69344, 21.68895, 21.21979, 21.11265, 20.84116, 20.79319, 20.79716, 20.3598, 20.37849, 20.0814, 19.9784, 19.79445, 19.62504,
   19.44979, 19.3273, 19.29114, 19.02446, 18.88064, 18.70941, 18.54186, 18.44223, 18.02987, 18.0047, 17.91777, 17.68989, 17.54299, 17.32313, 17.25229, 17.1106,
   16.99166, 16.83252, 16.7862, 16.47885, 16.43779, 16.31938, 16.07271, 16.05723, 15.89925, 15.7442, 15.57781, 15.48337, 15.28743, 15.30097, 15.17997, 15.01241,
   14.98658, 14.83103, 14.77038, 14.6196, 14.52038, 14.37964, 14.306, 14.32798, 13.95337, 13.9209, 14.04367, 13.7599, 13.57121, 13.45692, 13.42994, 13.35471,
   13.32246, 13.26653, 13.32621, 13.06201, 12.97666, 12.66406, 12.65606, 12.77077, 12.73393, 12.65297, 12.56256, 12.5419, 12.4171, 12.30989, 12.20104, 12.15217,
   11.92619, 11.96076, 12.01195, 11.91667, 11.66961, 11.77182, 11.33663, 11.5479, 11.64805, 11.4114, 11.32252, 11.27661, 11.26076, 11.2366, 11.10608, 10.88608,
   10.90648, 10.84039, 10.84501, 10.76435, 10.70416, 10.64966, 10.56429, 10.32365, 10.65499, 10.49314, 10.50579, 10.40971, 10.16989, 10.31875, 10.13539, 10.16946,
   10.00362, 10.17912, 10.08828, 9.652527, 9.646648, 9.990492, 9.6963, 9.718115, 9.857589, 9.691234, 9.66311, 9.561968, 9.593323, 9.472579, 9.411435, 9.359051,
   9.288955, 9.426739, 9.442839, 9.230194, 9.321435, 9.22633, 9.125719, 9.085122, 9.079192, 9.258756, 8.881414, 8.952559, 8.992552, 8.898778, 8.967159, 9.043091,
   8.880766, 8.881818, 8.65168, 8.780601, 8.75678, 8.885111, 8.545917, 8.55173, 8.479918, 8.579657, 8.527603, 8.633458, 8.493845, 8.656344, 8.301357, 8.442342,
   8.468487, 8.306526, 8.379465, 8.352868, 8.262305, 8.250334, 8.211988, 8.244568, 8.155757, 8.129185, 8.287203, 8.136712, 8.090986, 8.06992, 8.010527, 7.944255,
   7.988633, 8.22248, 8.053949, 8.040644, 8.061778, 8.007841, 7.920637, 7.903702, 7.905899, 7.922435, 7.741849, 8.177932, 7.769179, 7.778374, 7.918341, 7.850388,
   7.88186, 7.575812, 7.704166, 7.703432, 7.637053, 7.62864, 7.632747, 7.552077, 7.573017, 7.647064, 7.433803, 7.502315, 7.494504, 7.636987, 7.604259, 7.610917,
   7.420849, 7.489826, 7.403521, 7.396243, 7.494008, 7.336442, 7.401394, 7.299047, 7.498782, 7.469807, 7.487287, 7.425094, 7.361399, 7.332685, 7.515755, 7.314797,
   7.203232, 7.258196, 7.277168, 7.405614, 7.276461, 7.321502, 7.316263, 7.130338, 7.452846, 7.291492, 7.353824, 7.01769, 7.160603, 7.095818, 7.181509, 6.971108,
   7.064724, 7.128793, 7.205516, 7.228072, 7.113799, 6.988216, 7.088213, 7.068368, 7.115274, 7.179498, 7.090584, 7.070056, 6.957466, 6.921313, 6.979222, 6.984015,
   6.814277, 6.881581, 7.099497, 6.991598, 6.920993, 6.911056, 6.996739, 6.693529, 6.92791, 6.701291, 6.653259, 6.777352, 6.716866, 6.818255, 6.500297, 6.845801,
   7.003385, 6.866034, 6.801899, 6.629929, 6.741348, 6.929967, 6.853042, 6.698383, 6.701901, 6.715891, 6.833977, 6.722855, 6.770355, 6.638348, 6.695682, 6.729991,
   6.601122, 6.460162, 6.645279, 6.598069, 6.739664, 6.589746, 6.636958, 6.542294, 6.569621, 6.574265, 6.584795, 6.608597, 6.802272, 6.540733, 6.458748, 6.530523,
   6.51531, 6.607455, 6.49134, 6.496748, 6.355526, 6.377934, 6.467387, 6.353004, 6.271137, 6.431496, 6.482604, 6.368934, 6.378023, 6.387135, 6.437819, 6.359768,
   6.281254, 6.39167, 6.287392, 6.304971, 6.397363, 6.379001, 6.297144, 6.258392, 6.189426, 6.403997, 6.226333, 6.256559, 6.170135, 6.032747, 6.177414, 6.318143,
   6.117625, 6.167053, 6.198408, 6.174436, 6.181505, 6.192311, 6.148868, 6.267954, 6.125655, 6.244398, 6.137769, 6.200814, 6.101322, 5.899565, 6.192698, 5.956786,
   6.127596, 6.217595, 5.96615, 6.059542, 5.699065, 6.170684, 6.050801, 6.208261, 5.886584, 6.259194, 5.920349, 6.117337, 5.804571, 5.832899, 6.046557, 5.870189,
   5.859359, 5.827388, 5.833481, 5.844697, 5.945957, 5.753946, 5.812851, 5.895497, 5.844821, 6.048846, 5.893483, 5.843729, 5.780763, 5.991377, 5.91159, 5.801873,
   5.945595, 5.969354, 5.671835, 5.649161, 5.593255, 5.614239, 5.878936, 5.786877, 5.552349, 5.954229, 5.556525, 5.67554, 5.573405, 5.812711, 5.71992, 5.656971,
   5.680103, 5.608291, 5.754162, 5.873568, 5.507169, 5.642946, 5.641514, 5.6674, 5.491586, 5.482541, 5.432127, 5.474325, 5.32971, 5.517078, 5.559132, 5.376462,
   5.401024, 5.661216, 5.472483, 5.493836, 5.41476, 5.561339, 5.411756, 5.459274, 5.32364, 5.567339, 5.525618, 5.417983, 5.378009, 5.400104, 5.438256, 5.413598,
   5.497098, 5.367676, 5.445106, 5.393003, 5.162929, 5.293058, 5.194541, 5.337924, 5.184006, 5.263883, 5.166399, 5.157976, 5.224783, 5.193811, 5.397959, 5.2476,
   5.136156, 5.274209, 5.275012, 5.252812, 4.993883, 5.268931, 5.112321, 5.092894, 5.051431, 5.193665, 4.851482, 5.165357, 5.143492, 5.189525, 5.177351, 5.051259,
   4.98813, 4.979216, 5.02258, 5.03338, 4.813509, 5.024282, 5.097655, 4.772221, 5.129941, 5.011003, 5.34702, 5.075047, 4.827972, 4.809313, 4.944205, 5.085199,
   5.064316, 4.966442, 4.970367, 4.942413, 4.767043, 4.792612, 5.047093, 4.742257, 4.74037, 4.864852, 4.82835, 4.878631, 4.810565, 4.901699, 4.859614, 4.835131,
   4.818565, 4.765126, 4.852047, 4.666122, 4.848796, 4.887369, 4.697688, 4.695321, 4.748463, 4.701605, 4.780254, 4.71895, 4.687315, 4.726995, 4.824937, 4.668826,
   4.743413, 4.571501, 4.65947, 4.945222, 4.62186, 4.621209, 4.680631, 4.640054, 4.518288, 4.656579, 4.533753, 4.717206, 4.717748, 4.573288, 4.599433, 4.617117,
   4.437808, 4.378627, 4.502999, 4.59552, 4.560721, 4.454011, 4.44376, 4.604769, 4.508939, 4.452823, 4.510824, 4.628632, 4.353928, 4.480561, 4.482375, 4.434548,
   4.512674, 4.252131, 4.495101, 4.393145, 4.336758, 4.489791, 4.373399, 4.535601, 4.2574, 4.283589, 4.262127, 4.195522, 4.449597, 4.385431, 4.374263, 4.453487,
   4.216768, 4.426673, 4.405786, 4.264125, 4.084659, 4.188119, 4.224869, 4.235625, 4.2736, 4.247658, 4.374948, 4.198917, 4.068591, 4.225846, 4.219499, 4.010023,
   4.167848, 4.218111, 4.28061, 4.020894, 4.037904, 4.034627, 4.257964, 4.232253, 4.213749, 3.992451, 4.146749, 4.042596, 4.269446, 4.076054, 3.880551, 4.166614,
   4.063996, 4.154658, 3.948593, 4.216168, 4.049308, 3.930361, 3.981998, 4.185648, 4.049457, 3.860448, 3.914182, 3.863485, 4.082076, 4.00308, 3.903256, 3.909122,
   3.939882, 4.001943, 3.998276, 3.993173, 3.854737, 3.96855, 3.931136, 3.931505, 4.00801, 3.98917, 3.86903, 4.006285, 4.100714, 3.913575, 3.939771, 3.869103,
   3.923905, 3.886465, 3.68583, 3.767584, 3.95612, 3.971143, 3.883697, 3.700493, 3.77027, 3.708114, 3.701045, 3.816091, 3.701383, 3.686942, 3.868923, 3.70866,
   3.775717, 3.635513, 3.795654, 3.886872, 3.938024, 3.82877, 3.535359, 3.561897, 3.740688, 3.691451, 3.810902, 3.781513, 3.770396, 3.550234, 3.588737, 3.603053,
   3.726365, 3.678118, 3.564695, 3.675227, 3.505021, 3.441504, 3.500372, 3.361712, 3.609747, 3.459193, 3.516516, 3.684823, 3.391864, 3.580788, 3.460304, 3.521594,
   3.508914, 3.492918, 3.631766, 3.587119, 3.487601, 3.556233, 3.399848, 3.530997, 3.255378, 3.367341, 3.441547, 3.436135, 3.441739, 3.454087, 3.521498, 3.388764,
   3.475075, 3.373762, 3.331255, 3.344507, 3.290298, 3.3852, 3.34943, 3.374431, 3.49145, 3.476917, 3.383634, 3.364165, 3.493465, 3.44829, 3.373708, 3.399234,
   3.343055, 3.318752, 3.0739, 3.379516, 3.378486, 3.378244, 3.207861, 3.338796, 3.300913, 3.333089, 3.107327, 3.320994, 3.363118, 3.272311, 3.237102, 3.145293,
   3.009277, 3.129905, 3.169321, 3.314495, 3.390174, 3.259689, 3.076141, 3.313206, 3.246594, 3.394871, 3.182523, 3.295474, 3.062108, 3.260054, 3.144337, 3.277268,
   3.227406, 3.179842, 3.143094, 3.030523, 3.080456, 3.218855, 2.9879, 3.217357, 3.047649, 3.116759, 3.256872, 3.030167, 2.932067, 2.936792, 2.937096, 3.103019,
   2.957813, 2.814809, 3.036547, 2.913955, 3.048178, 3.153086, 3.095665, 2.9442, 3.029893, 2.923501, 2.962067, 2.860613, 3.033948, 2.895953, 2.870501, 2.812656,
   3.098095, 2.954419, 2.889989, 2.963918, 2.840229, 3.105029, 2.686216, 2.902227, 2.810115, 3.001946, 2.876046, 2.920814, 3.01402, 2.84026, 2.898941, 2.887593,
   2.90348, 2.921434, 2.90336, 2.771605, 3.021903, 2.73621, 2.813899, 2.807246, 2.669443, 2.748917, 2.993594, 2.853723, 2.736159, 2.861264, 2.820896, 2.785261,
   2.78617, 2.646735, 2.647954, 2.729095, 2.724274, 2.706808, 2.744108, 2.848769, 2.735661, 2.566294, 2.812007, 2.848859, 2.719515, 2.720415, 2.755554, 2.798263,
   2.562397, 2.518586, 2.669045, 2.727748, 2.790145, 2.662781, 2.752633, 2.640767, 2.690389, 2.677254, 2.60199, 2.602774, 2.578693, 2.647485, 2.733393, 2.555338,
   2.611869, 2.578256, 2.531795, 2.667358, 2.562856, 2.512301, 2.690423, 2.616316, 2.463408, 2.540658, 2.436498, 2.565571, 2.532641, 2.519915, 2.435472, 2.559465,
   2.572195, 2.477849, 2.436595, 2.36499, 2.421108, 2.547168, 2.297068, 2.477305, 2.555504, 2.389408, 2.455303, 2.338769, 2.397939, 2.484842, 2.430236, 2.406613,
   2.494258, 2.501388, 2.477092, 2.617133, 2.357092, 2.355839, 2.421692, 2.371048, 2.420063, 2.298842, 2.252953, 2.470043, 2.446472, 2.431586, 2.245198, 2.281437,
   2.253676, 2.2533, 2.211734, 2.210807, 2.484553, 2.331038, 2.243356, 2.174771, 2.354325, 2.209681, 2.513563, 2.253033, 2.312296, 2.321519, 2.134783, 2.118564,
   2.246118, 2.303638, 2.31311, 2.406846, 2.296583, 2.338637, 2.275285, 2.072544, 2.174567, 2.17323, 2.005197, 2.181477, 2.19976, 2.321885, 2.252622, 2.201142,
   2.091011, 2.270883, 2.243747, 2.080432, 2.296023, 2.062188, 2.174339, 2.217172, 2.183202, 2.172886, 2.146424, 2.246887, 2.146038, 2.146838, 1.849258, 2.338341,
   2.061952, 2.090045, 2.130026, 2.190167, 2.180523, 2.109161, 2.083333 };
   TGraphErrors *gre = new TGraphErrors(1000,Graph_from_VH_DHZfirst_2b1c_Z_mass_fx1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fy1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fex1149,Graph_from_VH_DHZfirst_2b1c_Z_mass_fey1149);
   gre->SetName("Graph_from_VH_DHZfirst_2b1c_Z_mass");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149 = new TH1F("Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149","",1000,0,2200);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetMinimum(-333.3452);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetMaximum(3353.898);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetDirectory(nullptr);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->SetLineColor(ci);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_VH_DHZfirst_2b1c_Z_mass1149);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VH_DHZfirst_Z_mass","Data (BTagCSV, 2016)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Z_mass_DHZfirst_VR_16->cd();
  
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
   
   TH1D *data_mc_ratio__150 = new TH1D("data_mc_ratio__150","",1000,0,2000);
   data_mc_ratio__150->SetBinContent(26,0.9869666);
   data_mc_ratio__150->SetBinContent(27,1.009098);
   data_mc_ratio__150->SetBinContent(28,1.007437);
   data_mc_ratio__150->SetBinContent(29,1.007602);
   data_mc_ratio__150->SetBinContent(30,1.03149);
   data_mc_ratio__150->SetBinContent(61,1.104255);
   data_mc_ratio__150->SetBinContent(62,1.089542);
   data_mc_ratio__150->SetBinContent(63,1.088092);
   data_mc_ratio__150->SetBinContent(64,1.114574);
   data_mc_ratio__150->SetBinContent(65,1.07418);
   data_mc_ratio__150->SetBinContent(1000,0.8348152);
   data_mc_ratio__150->SetBinContent(1001,1.128343);
   data_mc_ratio__150->SetBinError(26,0.02129042);
   data_mc_ratio__150->SetBinError(27,0.02014171);
   data_mc_ratio__150->SetBinError(28,0.01935948);
   data_mc_ratio__150->SetBinError(29,0.01860197);
   data_mc_ratio__150->SetBinError(30,0.01847552);
   data_mc_ratio__150->SetBinError(61,0.02179923);
   data_mc_ratio__150->SetBinError(62,0.02187413);
   data_mc_ratio__150->SetBinError(63,0.02201876);
   data_mc_ratio__150->SetBinError(64,0.02226923);
   data_mc_ratio__150->SetBinError(65,0.02188561);
   data_mc_ratio__150->SetBinError(1000,0.2951517);
   data_mc_ratio__150->SetBinError(1001,0.01578185);
   data_mc_ratio__150->SetMinimum(0.4);
   data_mc_ratio__150->SetMaximum(1.6);
   data_mc_ratio__150->SetEntries(1027.253);
   data_mc_ratio__150->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__150->SetLineColor(ci);
   data_mc_ratio__150->SetLineWidth(2);
   data_mc_ratio__150->SetMarkerStyle(20);
   data_mc_ratio__150->SetMarkerSize(1.2);
   data_mc_ratio__150->GetXaxis()->SetTitle("M_{Z} [GeV]");
   data_mc_ratio__150->GetXaxis()->SetRange(1,150);
   data_mc_ratio__150->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__150->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__150->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__150->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__150->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__150->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__150->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1150[1000] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33,
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
   Double_t Graph_from_mc_statistical_error_fy1150[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1150[1000] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fey1150[1000] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.009642692, 0.009040376, 0.008688567, 0.008372841, 0.008202277, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009718763, 0.009845487, 0.00989953, 0.00988984, 0.009925089,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.2173997 };
   gre = new TGraphErrors(1000,Graph_from_mc_statistical_error_fx1150,Graph_from_mc_statistical_error_fy1150,Graph_from_mc_statistical_error_fex1150,Graph_from_mc_statistical_error_fey1150);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1150 = new TH1F("Graph_Graph_from_mc_statistical_error1150","",1000,0,2200);
   Graph_Graph_from_mc_statistical_error1150->SetMinimum(0.7391203);
   Graph_Graph_from_mc_statistical_error1150->SetMaximum(1.26088);
   Graph_Graph_from_mc_statistical_error1150->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1150->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1150);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,300,1);
   line->Draw();
   bottomPad->Modified();
   Z_mass_DHZfirst_VR_16->cd();
   Z_mass_DHZfirst_VR_16->Modified();
   Z_mass_DHZfirst_VR_16->cd();
   Z_mass_DHZfirst_VR_16->SetSelected(Z_mass_DHZfirst_VR_16);
}
