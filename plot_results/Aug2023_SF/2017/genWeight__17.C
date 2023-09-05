#ifdef __CLING__
#pragma cling optimize(0)
#endif
void genWeight__17()
{
//=========Macro generated from canvas: genWeight__17/genWeight__17
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *genWeight__17 = new TCanvas("genWeight__17", "genWeight__17",0,0,600,600);
   genWeight__17->SetHighLightColor(2);
   genWeight__17->Range(0,0,1,1);
   genWeight__17->SetFillColor(0);
   genWeight__17->SetFillStyle(4000);
   genWeight__17->SetBorderMode(0);
   genWeight__17->SetBorderSize(2);
   genWeight__17->SetFrameFillStyle(1000);
   genWeight__17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-3.089459e+09,2.209678,3.086369e+12);
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
   st->SetMaximum(2.777423e+12);
   
   TH1F *st_stack_2 = new TH1F("st_stack_2","",500,-5,5);
   st_stack_2->SetMinimum(0.01);
   st_stack_2->SetMaximum(2.777423e+12);
   st_stack_2->SetDirectory(nullptr);
   st_stack_2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_2->SetLineColor(ci);
   st_stack_2->SetLineWidth(0);
   st_stack_2->GetXaxis()->SetRange(151,350);
   st_stack_2->GetXaxis()->SetLabelFont(42);
   st_stack_2->GetXaxis()->SetTitleOffset(1);
   st_stack_2->GetXaxis()->SetTitleFont(42);
   st_stack_2->GetYaxis()->SetTitle("Events/0.02");
   st_stack_2->GetYaxis()->SetLabelFont(42);
   st_stack_2->GetYaxis()->SetLabelSize(0.05);
   st_stack_2->GetYaxis()->SetTitleSize(0.057);
   st_stack_2->GetYaxis()->SetTitleOffset(1.2);
   st_stack_2->GetYaxis()->SetTitleFont(42);
   st_stack_2->GetZaxis()->SetLabelFont(42);
   st_stack_2->GetZaxis()->SetTitleOffset(1);
   st_stack_2->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_2);
   
   
   TH1D *genWeight_stack_1 = new TH1D("genWeight_stack_1","",500,-5,5);
   genWeight_stack_1->SetBinContent(301,1.24959e+12);
   genWeight_stack_1->SetBinError(301,1.32703e+08);
   genWeight_stack_1->SetEntries(3.106442e+08);

   ci = TColor::GetColor("#ff6600");
   genWeight_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_1->SetLineColor(ci);
   genWeight_stack_1->GetXaxis()->SetRange(1,500);
   genWeight_stack_1->GetXaxis()->SetLabelFont(42);
   genWeight_stack_1->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_1->GetXaxis()->SetTitleFont(42);
   genWeight_stack_1->GetYaxis()->SetLabelFont(42);
   genWeight_stack_1->GetYaxis()->SetTitleFont(42);
   genWeight_stack_1->GetZaxis()->SetLabelFont(42);
   genWeight_stack_1->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_1,"");
   
   TH1D *genWeight_stack_2 = new TH1D("genWeight_stack_2","",500,-5,5);
   genWeight_stack_2->SetBinContent(0,294441.8);
   genWeight_stack_2->SetBinContent(501,1.228262e+07);
   genWeight_stack_2->SetBinError(0,120.735);
   genWeight_stack_2->SetBinError(501,1115.27);
   genWeight_stack_2->SetEntries(2.05456e+08);

   ci = TColor::GetColor("#660066");
   genWeight_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_2->SetLineColor(ci);
   genWeight_stack_2->GetXaxis()->SetRange(1,500);
   genWeight_stack_2->GetXaxis()->SetLabelFont(42);
   genWeight_stack_2->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_2->GetXaxis()->SetTitleFont(42);
   genWeight_stack_2->GetYaxis()->SetLabelFont(42);
   genWeight_stack_2->GetYaxis()->SetTitleFont(42);
   genWeight_stack_2->GetZaxis()->SetLabelFont(42);
   genWeight_stack_2->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_2,"");
   
   TH1D *genWeight_stack_3 = new TH1D("genWeight_stack_3","",500,-5,5);
   genWeight_stack_3->SetBinContent(0,141026.2);
   genWeight_stack_3->SetBinContent(501,3.4765e+07);
   genWeight_stack_3->SetBinError(0,88.25443);
   genWeight_stack_3->SetBinError(501,1385.661);
   genWeight_stack_3->SetEntries(6.76188e+08);

   ci = TColor::GetColor("#cc00cc");
   genWeight_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_3->SetLineColor(ci);
   genWeight_stack_3->GetXaxis()->SetRange(1,500);
   genWeight_stack_3->GetXaxis()->SetLabelFont(42);
   genWeight_stack_3->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_3->GetXaxis()->SetTitleFont(42);
   genWeight_stack_3->GetYaxis()->SetLabelFont(42);
   genWeight_stack_3->GetYaxis()->SetTitleFont(42);
   genWeight_stack_3->GetZaxis()->SetLabelFont(42);
   genWeight_stack_3->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_3,"");
   
   TH1D *genWeight_stack_4 = new TH1D("genWeight_stack_4","",500,-5,5);
   genWeight_stack_4->SetBinContent(301,4.803036e+07);
   genWeight_stack_4->SetBinError(301,10732.9);
   genWeight_stack_4->SetEntries(4.611831e+07);

   ci = TColor::GetColor("#00cccc");
   genWeight_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_4->SetLineColor(ci);
   genWeight_stack_4->GetXaxis()->SetRange(1,500);
   genWeight_stack_4->GetXaxis()->SetLabelFont(42);
   genWeight_stack_4->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_4->GetXaxis()->SetTitleFont(42);
   genWeight_stack_4->GetYaxis()->SetLabelFont(42);
   genWeight_stack_4->GetYaxis()->SetTitleFont(42);
   genWeight_stack_4->GetZaxis()->SetLabelFont(42);
   genWeight_stack_4->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_4,"");
   
   TH1D *genWeight_stack_5 = new TH1D("genWeight_stack_5","",500,-5,5);
   genWeight_stack_5->SetBinContent(301,1.946058e+08);
   genWeight_stack_5->SetBinError(301,28640.31);
   genWeight_stack_5->SetEntries(1.626053e+08);

   ci = TColor::GetColor("#ff99cc");
   genWeight_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_5->SetLineColor(ci);
   genWeight_stack_5->GetXaxis()->SetRange(1,500);
   genWeight_stack_5->GetXaxis()->SetLabelFont(42);
   genWeight_stack_5->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_5->GetXaxis()->SetTitleFont(42);
   genWeight_stack_5->GetYaxis()->SetLabelFont(42);
   genWeight_stack_5->GetYaxis()->SetTitleFont(42);
   genWeight_stack_5->GetZaxis()->SetLabelFont(42);
   genWeight_stack_5->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_5,"");
   
   TH1D *genWeight_stack_6 = new TH1D("genWeight_stack_6","",500,-5,5);
   genWeight_stack_6->SetBinContent(301,4929309);
   genWeight_stack_6->SetBinContent(302,14.81938);
   genWeight_stack_6->SetBinContent(303,15.76529);
   genWeight_stack_6->SetBinContent(304,11.98162);
   genWeight_stack_6->SetBinContent(305,11.98162);
   genWeight_stack_6->SetBinContent(306,12.92754);
   genWeight_stack_6->SetBinContent(307,15.76529);
   genWeight_stack_6->SetBinContent(308,9.459177);
   genWeight_stack_6->SetBinContent(309,7.567341);
   genWeight_stack_6->SetBinContent(310,8.197953);
   genWeight_stack_6->SetBinContent(311,8.828565);
   genWeight_stack_6->SetBinContent(312,5.990812);
   genWeight_stack_6->SetBinContent(313,5.675506);
   genWeight_stack_6->SetBinContent(314,5.044894);
   genWeight_stack_6->SetBinContent(315,6.306118);
   genWeight_stack_6->SetBinContent(316,6.306118);
   genWeight_stack_6->SetBinContent(317,4.098977);
   genWeight_stack_6->SetBinContent(318,5.990812);
   genWeight_stack_6->SetBinContent(319,4.729588);
   genWeight_stack_6->SetBinContent(320,4.098977);
   genWeight_stack_6->SetBinContent(321,2.207141);
   genWeight_stack_6->SetBinContent(322,1.891835);
   genWeight_stack_6->SetBinContent(323,2.207141);
   genWeight_stack_6->SetBinContent(324,2.207141);
   genWeight_stack_6->SetBinContent(325,1.891835);
   genWeight_stack_6->SetBinContent(326,1.261224);
   genWeight_stack_6->SetBinContent(327,0.6306118);
   genWeight_stack_6->SetBinContent(328,1.891835);
   genWeight_stack_6->SetBinContent(329,1.576529);
   genWeight_stack_6->SetBinContent(330,0.3153059);
   genWeight_stack_6->SetBinContent(331,0.3153059);
   genWeight_stack_6->SetBinContent(333,0.9459177);
   genWeight_stack_6->SetBinContent(335,0.6306118);
   genWeight_stack_6->SetBinError(301,1246.692);
   genWeight_stack_6->SetBinError(302,2.161628);
   genWeight_stack_6->SetBinError(303,2.229549);
   genWeight_stack_6->SetBinError(304,1.943676);
   genWeight_stack_6->SetBinError(305,1.943676);
   genWeight_stack_6->SetBinError(306,2.018943);
   genWeight_stack_6->SetBinError(307,2.229549);
   genWeight_stack_6->SetBinError(308,1.727001);
   genWeight_stack_6->SetBinError(309,1.544677);
   genWeight_stack_6->SetBinError(310,1.607751);
   genWeight_stack_6->SetBinError(311,1.668442);
   genWeight_stack_6->SetBinError(312,1.374387);
   genWeight_stack_6->SetBinError(313,1.33773);
   genWeight_stack_6->SetBinError(314,1.261224);
   genWeight_stack_6->SetBinError(315,1.410091);
   genWeight_stack_6->SetBinError(316,1.410091);
   genWeight_stack_6->SetBinError(317,1.136852);
   genWeight_stack_6->SetBinError(318,1.374387);
   genWeight_stack_6->SetBinError(319,1.221174);
   genWeight_stack_6->SetBinError(320,1.136852);
   genWeight_stack_6->SetBinError(321,0.834221);
   genWeight_stack_6->SetBinError(322,0.7723385);
   genWeight_stack_6->SetBinError(323,0.834221);
   genWeight_stack_6->SetBinError(324,0.834221);
   genWeight_stack_6->SetBinError(325,0.7723385);
   genWeight_stack_6->SetBinError(326,0.6306118);
   genWeight_stack_6->SetBinError(327,0.4459099);
   genWeight_stack_6->SetBinError(328,0.7723385);
   genWeight_stack_6->SetBinError(329,0.7050454);
   genWeight_stack_6->SetBinError(330,0.3153059);
   genWeight_stack_6->SetBinError(331,0.3153059);
   genWeight_stack_6->SetBinError(333,0.5461258);
   genWeight_stack_6->SetBinError(335,0.4459099);
   genWeight_stack_6->SetEntries(1.5634e+07);

   ci = TColor::GetColor("#9933ff");
   genWeight_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_6->SetLineColor(ci);
   genWeight_stack_6->GetXaxis()->SetRange(1,500);
   genWeight_stack_6->GetXaxis()->SetLabelFont(42);
   genWeight_stack_6->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_6->GetXaxis()->SetTitleFont(42);
   genWeight_stack_6->GetYaxis()->SetLabelFont(42);
   genWeight_stack_6->GetYaxis()->SetTitleFont(42);
   genWeight_stack_6->GetZaxis()->SetLabelFont(42);
   genWeight_stack_6->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_6,"");
   
   TH1D *genWeight_stack_7 = new TH1D("genWeight_stack_7","",500,-5,5);
   genWeight_stack_7->SetBinContent(301,1956016);
   genWeight_stack_7->SetBinError(301,696.4042);
   genWeight_stack_7->SetEntries(7889000);

   ci = TColor::GetColor("#3399ff");
   genWeight_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_7->SetLineColor(ci);
   genWeight_stack_7->GetXaxis()->SetRange(1,500);
   genWeight_stack_7->GetXaxis()->SetLabelFont(42);
   genWeight_stack_7->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_7->GetXaxis()->SetTitleFont(42);
   genWeight_stack_7->GetYaxis()->SetLabelFont(42);
   genWeight_stack_7->GetYaxis()->SetTitleFont(42);
   genWeight_stack_7->GetZaxis()->SetLabelFont(42);
   genWeight_stack_7->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_7,"");
   
   TH1D *genWeight_stack_8 = new TH1D("genWeight_stack_8","",500,-5,5);
   genWeight_stack_8->SetBinContent(301,685228.5);
   genWeight_stack_8->SetBinError(301,416.5542);
   genWeight_stack_8->SetEntries(2706000);

   ci = TColor::GetColor("#33ff99");
   genWeight_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_8->SetLineColor(ci);
   genWeight_stack_8->GetXaxis()->SetRange(1,500);
   genWeight_stack_8->GetXaxis()->SetLabelFont(42);
   genWeight_stack_8->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_8->GetXaxis()->SetTitleFont(42);
   genWeight_stack_8->GetYaxis()->SetLabelFont(42);
   genWeight_stack_8->GetYaxis()->SetTitleFont(42);
   genWeight_stack_8->GetZaxis()->SetLabelFont(42);
   genWeight_stack_8->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_8,"");
   
   TH1D *genWeight_stack_9 = new TH1D("genWeight_stack_9","",500,-5,5);
   genWeight_stack_9->SetBinContent(221,476.5919);
   genWeight_stack_9->SetBinContent(280,15402.53);
   genWeight_stack_9->SetBinError(221,0.8773549);
   genWeight_stack_9->SetBinError(280,4.987673);
   genWeight_stack_9->SetEntries(9831562);

   ci = TColor::GetColor("#cccc00");
   genWeight_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_9->SetLineColor(ci);
   genWeight_stack_9->GetXaxis()->SetRange(1,500);
   genWeight_stack_9->GetXaxis()->SetLabelFont(42);
   genWeight_stack_9->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_9->GetXaxis()->SetTitleFont(42);
   genWeight_stack_9->GetYaxis()->SetLabelFont(42);
   genWeight_stack_9->GetYaxis()->SetTitleFont(42);
   genWeight_stack_9->GetZaxis()->SetLabelFont(42);
   genWeight_stack_9->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_9,"");
   
   TH1D *genWeight_stack_10 = new TH1D("genWeight_stack_10","",500,-5,5);
   genWeight_stack_10->SetBinContent(253,2073.128);
   genWeight_stack_10->SetBinError(253,0.9271309);
   genWeight_stack_10->SetEntries(5000000);

   ci = TColor::GetColor("#0000cc");
   genWeight_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_10->SetLineColor(ci);
   genWeight_stack_10->GetXaxis()->SetRange(1,500);
   genWeight_stack_10->GetXaxis()->SetLabelFont(42);
   genWeight_stack_10->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_10->GetXaxis()->SetTitleFont(42);
   genWeight_stack_10->GetYaxis()->SetLabelFont(42);
   genWeight_stack_10->GetYaxis()->SetTitleFont(42);
   genWeight_stack_10->GetZaxis()->SetLabelFont(42);
   genWeight_stack_10->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_10,"");
   
   TH1D *genWeight_stack_11 = new TH1D("genWeight_stack_11","",500,-5,5);
   genWeight_stack_11->SetBinContent(0,0.02370377);
   genWeight_stack_11->SetBinContent(47,0.001580251);
   genWeight_stack_11->SetBinContent(73,0.001580251);
   genWeight_stack_11->SetBinContent(120,0.004740753);
   genWeight_stack_11->SetBinContent(140,0.001580251);
   genWeight_stack_11->SetBinContent(141,0.001580251);
   genWeight_stack_11->SetBinContent(146,0.001580251);
   genWeight_stack_11->SetBinContent(149,0.001580251);
   genWeight_stack_11->SetBinContent(154,0.001580251);
   genWeight_stack_11->SetBinContent(156,0.001580251);
   genWeight_stack_11->SetBinContent(161,0.001580251);
   genWeight_stack_11->SetBinContent(174,0.001580251);
   genWeight_stack_11->SetBinContent(177,0.001580251);
   genWeight_stack_11->SetBinContent(182,0.003160502);
   genWeight_stack_11->SetBinContent(183,0.003160502);
   genWeight_stack_11->SetBinContent(184,0.001580251);
   genWeight_stack_11->SetBinContent(189,0.006321005);
   genWeight_stack_11->SetBinContent(193,0.001580251);
   genWeight_stack_11->SetBinContent(194,0.004740753);
   genWeight_stack_11->SetBinContent(195,0.001580251);
   genWeight_stack_11->SetBinContent(196,0.003160502);
   genWeight_stack_11->SetBinContent(197,0.001580251);
   genWeight_stack_11->SetBinContent(198,0.003160502);
   genWeight_stack_11->SetBinContent(200,0.004740753);
   genWeight_stack_11->SetBinContent(201,0.003160502);
   genWeight_stack_11->SetBinContent(203,0.004740753);
   genWeight_stack_11->SetBinContent(205,0.006321005);
   genWeight_stack_11->SetBinContent(207,0.006321005);
   genWeight_stack_11->SetBinContent(208,0.001580251);
   genWeight_stack_11->SetBinContent(209,0.007901256);
   genWeight_stack_11->SetBinContent(210,0.02370377);
   genWeight_stack_11->SetBinContent(211,0.007901256);
   genWeight_stack_11->SetBinContent(212,0.01580251);
   genWeight_stack_11->SetBinContent(213,0.01106176);
   genWeight_stack_11->SetBinContent(214,0.01896301);
   genWeight_stack_11->SetBinContent(215,0.01896301);
   genWeight_stack_11->SetBinContent(216,0.02844452);
   genWeight_stack_11->SetBinContent(217,0.01896301);
   genWeight_stack_11->SetBinContent(218,0.05056804);
   genWeight_stack_11->SetBinContent(219,0.1264201);
   genWeight_stack_11->SetBinContent(220,2.39092);
   genWeight_stack_11->SetBinContent(221,21.24964);
   genWeight_stack_11->SetBinContent(236,0.004740753);
   genWeight_stack_11->SetBinContent(250,0.03634578);
   genWeight_stack_11->SetBinContent(251,0.1532844);
   genWeight_stack_11->SetBinContent(265,0.03318527);
   genWeight_stack_11->SetBinContent(280,676.6778);
   genWeight_stack_11->SetBinContent(281,76.87448);
   genWeight_stack_11->SetBinContent(282,3.514479);
   genWeight_stack_11->SetBinContent(283,1.466473);
   genWeight_stack_11->SetBinContent(284,0.8154096);
   genWeight_stack_11->SetBinContent(285,0.5783719);
   genWeight_stack_11->SetBinContent(286,0.5499274);
   genWeight_stack_11->SetBinContent(287,0.4361493);
   genWeight_stack_11->SetBinContent(288,0.1785684);
   genWeight_stack_11->SetBinContent(289,0.1359016);
   genWeight_stack_11->SetBinContent(290,0.409285);
   genWeight_stack_11->SetBinContent(291,0.3934825);
   genWeight_stack_11->SetBinContent(292,0.1438029);
   genWeight_stack_11->SetBinContent(293,0.1501239);
   genWeight_stack_11->SetBinContent(294,0.2591612);
   genWeight_stack_11->SetBinContent(296,0.1074571);
   genWeight_stack_11->SetBinContent(298,0.0711113);
   genWeight_stack_11->SetBinContent(300,0.03476553);
   genWeight_stack_11->SetBinContent(301,0.0711113);
   genWeight_stack_11->SetBinContent(302,0.03792603);
   genWeight_stack_11->SetBinContent(303,0.03476553);
   genWeight_stack_11->SetBinContent(304,0.03634578);
   genWeight_stack_11->SetBinContent(305,0.1864696);
   genWeight_stack_11->SetBinContent(306,0.03634578);
   genWeight_stack_11->SetBinContent(307,0.1090373);
   genWeight_stack_11->SetBinContent(308,0.03634578);
   genWeight_stack_11->SetBinContent(309,0.03792603);
   genWeight_stack_11->SetBinContent(312,0.06953105);
   genWeight_stack_11->SetBinContent(316,0.03792603);
   genWeight_stack_11->SetBinContent(317,0.03634578);
   genWeight_stack_11->SetBinContent(318,0.03476553);
   genWeight_stack_11->SetBinContent(319,0.03476553);
   genWeight_stack_11->SetBinContent(321,0.03792603);
   genWeight_stack_11->SetBinContent(323,0.03792603);
   genWeight_stack_11->SetBinContent(324,0.1121978);
   genWeight_stack_11->SetBinContent(325,0.03792603);
   genWeight_stack_11->SetBinContent(326,0.03792603);
   genWeight_stack_11->SetBinContent(327,0.03634578);
   genWeight_stack_11->SetBinContent(335,0.03792603);
   genWeight_stack_11->SetBinContent(336,0.03792603);
   genWeight_stack_11->SetBinContent(340,0.03634578);
   genWeight_stack_11->SetBinContent(345,0.03634578);
   genWeight_stack_11->SetBinContent(347,0.03634578);
   genWeight_stack_11->SetBinContent(350,0.03792603);
   genWeight_stack_11->SetBinContent(352,0.03634578);
   genWeight_stack_11->SetBinContent(355,0.03634578);
   genWeight_stack_11->SetBinContent(359,0.03792603);
   genWeight_stack_11->SetBinContent(360,0.03634578);
   genWeight_stack_11->SetBinContent(361,0.03634578);
   genWeight_stack_11->SetBinContent(363,0.03792603);
   genWeight_stack_11->SetBinContent(381,0.03318527);
   genWeight_stack_11->SetBinContent(384,0.03792603);
   genWeight_stack_11->SetBinContent(385,0.03792603);
   genWeight_stack_11->SetBinContent(428,0.03634578);
   genWeight_stack_11->SetBinContent(443,0.03792603);
   genWeight_stack_11->SetBinContent(454,0.03634578);
   genWeight_stack_11->SetBinContent(465,0.03792603);
   genWeight_stack_11->SetBinContent(501,0.6210387);
   genWeight_stack_11->SetBinError(0,0.006120286);
   genWeight_stack_11->SetBinError(47,0.001580251);
   genWeight_stack_11->SetBinError(73,0.001580251);
   genWeight_stack_11->SetBinError(120,0.002737075);
   genWeight_stack_11->SetBinError(140,0.001580251);
   genWeight_stack_11->SetBinError(141,0.001580251);
   genWeight_stack_11->SetBinError(146,0.001580251);
   genWeight_stack_11->SetBinError(149,0.001580251);
   genWeight_stack_11->SetBinError(154,0.001580251);
   genWeight_stack_11->SetBinError(156,0.001580251);
   genWeight_stack_11->SetBinError(161,0.001580251);
   genWeight_stack_11->SetBinError(174,0.001580251);
   genWeight_stack_11->SetBinError(177,0.001580251);
   genWeight_stack_11->SetBinError(182,0.002234813);
   genWeight_stack_11->SetBinError(183,0.002234813);
   genWeight_stack_11->SetBinError(184,0.001580251);
   genWeight_stack_11->SetBinError(189,0.003160502);
   genWeight_stack_11->SetBinError(193,0.001580251);
   genWeight_stack_11->SetBinError(194,0.002737075);
   genWeight_stack_11->SetBinError(195,0.001580251);
   genWeight_stack_11->SetBinError(196,0.002234813);
   genWeight_stack_11->SetBinError(197,0.001580251);
   genWeight_stack_11->SetBinError(198,0.002234813);
   genWeight_stack_11->SetBinError(200,0.002737075);
   genWeight_stack_11->SetBinError(201,0.002234813);
   genWeight_stack_11->SetBinError(203,0.002737075);
   genWeight_stack_11->SetBinError(205,0.003160502);
   genWeight_stack_11->SetBinError(207,0.003160502);
   genWeight_stack_11->SetBinError(208,0.001580251);
   genWeight_stack_11->SetBinError(209,0.003533549);
   genWeight_stack_11->SetBinError(210,0.006120286);
   genWeight_stack_11->SetBinError(211,0.003533549);
   genWeight_stack_11->SetBinError(212,0.004997193);
   genWeight_stack_11->SetBinError(213,0.004180952);
   genWeight_stack_11->SetBinError(214,0.005474151);
   genWeight_stack_11->SetBinError(215,0.005474151);
   genWeight_stack_11->SetBinError(216,0.006704438);
   genWeight_stack_11->SetBinError(217,0.005474151);
   genWeight_stack_11->SetBinError(218,0.00893925);
   genWeight_stack_11->SetBinError(219,0.0141342);
   genWeight_stack_11->SetBinError(220,0.0614675);
   genWeight_stack_11->SetBinError(221,0.1832478);
   genWeight_stack_11->SetBinError(236,0.002737075);
   genWeight_stack_11->SetBinError(250,0.007578618);
   genWeight_stack_11->SetBinError(251,0.01556367);
   genWeight_stack_11->SetBinError(265,0.00724162);
   genWeight_stack_11->SetBinError(280,1.03408);
   genWeight_stack_11->SetBinError(281,0.3485412);
   genWeight_stack_11->SetBinError(282,0.07452354);
   genWeight_stack_11->SetBinError(283,0.04813934);
   genWeight_stack_11->SetBinError(284,0.03589641);
   genWeight_stack_11->SetBinError(285,0.03023198);
   genWeight_stack_11->SetBinError(286,0.0294792);
   genWeight_stack_11->SetBinError(287,0.0262531);
   genWeight_stack_11->SetBinError(288,0.0167983);
   genWeight_stack_11->SetBinError(289,0.01465465);
   genWeight_stack_11->SetBinError(290,0.02543174);
   genWeight_stack_11->SetBinError(291,0.02493594);
   genWeight_stack_11->SetBinError(292,0.01507464);
   genWeight_stack_11->SetBinError(293,0.01540238);
   genWeight_stack_11->SetBinError(294,0.02023709);
   genWeight_stack_11->SetBinError(296,0.01303108);
   genWeight_stack_11->SetBinError(298,0.01060065);
   genWeight_stack_11->SetBinError(300,0.007412035);
   genWeight_stack_11->SetBinError(301,0.01060065);
   genWeight_stack_11->SetBinError(302,0.007741618);
   genWeight_stack_11->SetBinError(303,0.007412035);
   genWeight_stack_11->SetBinError(304,0.007578618);
   genWeight_stack_11->SetBinError(305,0.01716592);
   genWeight_stack_11->SetBinError(306,0.007578618);
   genWeight_stack_11->SetBinError(307,0.01312655);
   genWeight_stack_11->SetBinError(308,0.007578618);
   genWeight_stack_11->SetBinError(309,0.007741618);
   genWeight_stack_11->SetBinError(312,0.0104822);
   genWeight_stack_11->SetBinError(316,0.007741618);
   genWeight_stack_11->SetBinError(317,0.007578618);
   genWeight_stack_11->SetBinError(318,0.007412035);
   genWeight_stack_11->SetBinError(319,0.007412035);
   genWeight_stack_11->SetBinError(321,0.007741618);
   genWeight_stack_11->SetBinError(323,0.007741618);
   genWeight_stack_11->SetBinError(324,0.01331543);
   genWeight_stack_11->SetBinError(325,0.007741618);
   genWeight_stack_11->SetBinError(326,0.007741618);
   genWeight_stack_11->SetBinError(327,0.007578618);
   genWeight_stack_11->SetBinError(335,0.007741618);
   genWeight_stack_11->SetBinError(336,0.007741618);
   genWeight_stack_11->SetBinError(340,0.007578618);
   genWeight_stack_11->SetBinError(345,0.007578618);
   genWeight_stack_11->SetBinError(347,0.007578618);
   genWeight_stack_11->SetBinError(350,0.007741618);
   genWeight_stack_11->SetBinError(352,0.007578618);
   genWeight_stack_11->SetBinError(355,0.007578618);
   genWeight_stack_11->SetBinError(359,0.007741618);
   genWeight_stack_11->SetBinError(360,0.007578618);
   genWeight_stack_11->SetBinError(361,0.007578618);
   genWeight_stack_11->SetBinError(363,0.007741618);
   genWeight_stack_11->SetBinError(381,0.00724162);
   genWeight_stack_11->SetBinError(384,0.007741618);
   genWeight_stack_11->SetBinError(385,0.007741618);
   genWeight_stack_11->SetBinError(428,0.007578618);
   genWeight_stack_11->SetBinError(443,0.007741618);
   genWeight_stack_11->SetBinError(454,0.007578618);
   genWeight_stack_11->SetBinError(465,0.007741618);
   genWeight_stack_11->SetBinError(501,0.03132726);
   genWeight_stack_11->SetEntries(499616);

   ci = TColor::GetColor("#cc0000");
   genWeight_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_11->SetLineColor(ci);
   genWeight_stack_11->GetXaxis()->SetRange(1,500);
   genWeight_stack_11->GetXaxis()->SetLabelFont(42);
   genWeight_stack_11->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_11->GetXaxis()->SetTitleFont(42);
   genWeight_stack_11->GetYaxis()->SetLabelFont(42);
   genWeight_stack_11->GetYaxis()->SetTitleFont(42);
   genWeight_stack_11->GetZaxis()->SetLabelFont(42);
   genWeight_stack_11->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_11,"");
   
   TH1D *genWeight_stack_12 = new TH1D("genWeight_stack_12","",500,-5,5);
   genWeight_stack_12->SetBinContent(251,0.04525803);
   genWeight_stack_12->SetBinContent(252,0.09030846);
   genWeight_stack_12->SetBinContent(253,102.1364);
   genWeight_stack_12->SetBinContent(254,0.06747184);
   genWeight_stack_12->SetBinContent(255,0.03363212);
   genWeight_stack_12->SetBinContent(256,0.02242141);
   genWeight_stack_12->SetBinContent(257,0.03383972);
   genWeight_stack_12->SetBinContent(259,0.02262902);
   genWeight_stack_12->SetBinContent(261,0.02242141);
   genWeight_stack_12->SetBinContent(265,0.01121071);
   genWeight_stack_12->SetBinContent(268,0.01141831);
   genWeight_stack_12->SetBinContent(271,0.01141831);
   genWeight_stack_12->SetBinContent(282,0.01121071);
   genWeight_stack_12->SetBinContent(298,0.01121071);
   genWeight_stack_12->SetBinContent(299,0.01121071);
   genWeight_stack_12->SetBinContent(318,0.01141831);
   genWeight_stack_12->SetBinContent(322,0.01121071);
   genWeight_stack_12->SetBinContent(339,0.01121071);
   genWeight_stack_12->SetBinContent(344,0.01121071);
   genWeight_stack_12->SetBinContent(357,0.01121071);
   genWeight_stack_12->SetBinContent(360,0.01121071);
   genWeight_stack_12->SetBinContent(365,0.01121071);
   genWeight_stack_12->SetBinContent(367,0.01121071);
   genWeight_stack_12->SetBinContent(439,0.01121071);
   genWeight_stack_12->SetBinContent(476,0.01121071);
   genWeight_stack_12->SetBinContent(480,0.01141831);
   genWeight_stack_12->SetBinContent(501,0.3261485);
   genWeight_stack_12->SetBinError(251,0.003065261);
   genWeight_stack_12->SetBinError(252,0.004329959);
   genWeight_stack_12->SetBinError(253,0.1456162);
   genWeight_stack_12->SetBinError(254,0.003742664);
   genWeight_stack_12->SetBinError(255,0.002642389);
   genWeight_stack_12->SetBinError(256,0.002157501);
   genWeight_stack_12->SetBinError(257,0.002650532);
   genWeight_stack_12->SetBinError(259,0.002167467);
   genWeight_stack_12->SetBinError(261,0.002157501);
   genWeight_stack_12->SetBinError(265,0.001525584);
   genWeight_stack_12->SetBinError(268,0.001539645);
   genWeight_stack_12->SetBinError(271,0.001539645);
   genWeight_stack_12->SetBinError(282,0.001525584);
   genWeight_stack_12->SetBinError(298,0.001525584);
   genWeight_stack_12->SetBinError(299,0.001525584);
   genWeight_stack_12->SetBinError(318,0.001539645);
   genWeight_stack_12->SetBinError(322,0.001525584);
   genWeight_stack_12->SetBinError(339,0.001525584);
   genWeight_stack_12->SetBinError(344,0.001525584);
   genWeight_stack_12->SetBinError(357,0.001525584);
   genWeight_stack_12->SetBinError(360,0.001525584);
   genWeight_stack_12->SetBinError(365,0.001525584);
   genWeight_stack_12->SetBinError(367,0.001525584);
   genWeight_stack_12->SetBinError(439,0.001525584);
   genWeight_stack_12->SetBinError(476,0.001525584);
   genWeight_stack_12->SetBinError(480,0.001539645);
   genWeight_stack_12->SetBinError(501,0.008228625);
   genWeight_stack_12->SetEntries(496094);

   ci = TColor::GetColor("#00cc00");
   genWeight_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   genWeight_stack_12->SetLineColor(ci);
   genWeight_stack_12->GetXaxis()->SetRange(1,500);
   genWeight_stack_12->GetXaxis()->SetLabelFont(42);
   genWeight_stack_12->GetXaxis()->SetTitleOffset(1);
   genWeight_stack_12->GetXaxis()->SetTitleFont(42);
   genWeight_stack_12->GetYaxis()->SetLabelFont(42);
   genWeight_stack_12->GetYaxis()->SetTitleFont(42);
   genWeight_stack_12->GetZaxis()->SetLabelFont(42);
   genWeight_stack_12->GetZaxis()->SetTitleOffset(1);
   genWeight_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(genWeight_stack_12,"");
   st->Draw("hist");
   
   TH1D *genWeight__3 = new TH1D("genWeight__3","",200,-2,2);
   genWeight__3->SetEntries(199);

   ci = TColor::GetColor("#000099");
   genWeight__3->SetLineColor(ci);
   genWeight__3->SetLineWidth(2);
   genWeight__3->SetMarkerStyle(20);
   genWeight__3->SetMarkerSize(1.2);
   genWeight__3->GetXaxis()->SetRange(1,200);
   genWeight__3->GetXaxis()->SetLabelFont(42);
   genWeight__3->GetXaxis()->SetTitleOffset(1);
   genWeight__3->GetXaxis()->SetTitleFont(42);
   genWeight__3->GetYaxis()->SetLabelFont(42);
   genWeight__3->GetYaxis()->SetTitleFont(42);
   genWeight__3->GetZaxis()->SetLabelFont(42);
   genWeight__3->GetZaxis()->SetTitleOffset(1);
   genWeight__3->GetZaxis()->SetTitleFont(42);
   genWeight__3->Draw("same E");
   
   Double_t Graph_from_genWeight_fx1003[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_genWeight_fy1003[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.004740753, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0.001580251, 0, 0, 0, 0,
   0.001580251, 0, 0, 0.001580251, 0, 0, 0, 0, 0.001580251, 0, 0.001580251, 0, 0, 0, 0, 0.001580251,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0, 0.001580251,
   0, 0, 0, 0, 0.003160502, 0.003160502, 0.001580251, 0, 0, 0, 0, 0.006321005, 0, 0, 0, 0.001580251,
   0.004740753, 0.001580251, 0.003160502, 0.001580251, 0.003160502, 0, 0.004740753, 0.003160502, 0, 0.004740753, 0, 0.006321005, 0, 0.006321005, 0.001580251, 0.007901256,
   0.02370377, 0.007901256, 0.01580251, 0.01106176, 0.01896301, 0.01896301, 0.02844452, 0.01896301, 0.05056804, 0.1264201, 2.39092, 497.8416, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004740753, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.03634578, 0.1985424, 0.09030846, 2175.264, 0.06747184, 0.03363212, 0.02242141, 0.03383972,
   0, 0.02262902, 0, 0.02242141, 0, 0, 0, 0.04439598, 0, 0, 0.01141831, 0, 0, 0.01141831, 0, 0,
   0, 0, 0, 0, 0, 0, 16079.21, 76.87448, 3.525689, 1.466473, 0.8154096, 0.5783719, 0.5499274, 0.4361493, 0.1785684, 0.1359016,
   0.409285, 0.3934825, 0.1438029, 0.1501239, 0.2591612, 0, 0.1074571, 0, 0.08232201, 0.01121071, 0.03476553, 1.249841e+12, 14.8573, 15.80006, 12.01797, 12.16809,
   12.96389, 15.87433, 9.495523, 7.605267, 8.197953, 8.828565, 6.060343, 5.675506, 5.044894, 6.306118, 6.344044, 4.135322, 6.036996, 4.764354, 4.098977, 2.245067,
   1.903046, 2.245067, 2.319339, 1.929761, 1.29915, 0.6669576, 1.891835, 1.576529, 0.3153059, 0.3153059, 0, 0.9459177, 0, 0.6685378, 0.03792603, 0,
   0, 0.01121071, 0.03634578, 0, 0, 0, 0.01121071, 0.03634578, 0, 0.03634578, 0, 0, 0.03792603, 0, 0.03634578, 0,
   0, 0.03634578, 0, 0.01121071, 0, 0.03792603, 0.04755648, 0.03634578, 0, 0.03792603, 0, 0.01121071, 0, 0.01121071, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03318527, 0, 0, 0.03792603, 0.03792603,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03634578, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0.01121071, 0, 0, 0, 0.03792603, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0.03634578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.03792603,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01121071, 0, 0, 0, 0.01141831, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   Double_t Graph_from_genWeight_fex1003[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_genWeight_fey1003[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.002737075, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0.001580251, 0, 0, 0, 0,
   0.001580251, 0, 0, 0.001580251, 0, 0, 0, 0, 0.001580251, 0, 0.001580251, 0, 0, 0, 0, 0.001580251,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001580251, 0, 0, 0.001580251,
   0, 0, 0, 0, 0.002234813, 0.002234813, 0.001580251, 0, 0, 0, 0, 0.003160502, 0, 0, 0, 0.001580251,
   0.002737075, 0.001580251, 0.002234813, 0.001580251, 0.002234813, 0, 0.002737075, 0.002234813, 0, 0.002737075, 0, 0.003160502, 0, 0.003160502, 0.001580251, 0.003533549,
   0.006120286, 0.003533549, 0.004997193, 0.004180952, 0.005474151, 0.005474151, 0.006704438, 0.005474151, 0.00893925, 0.0141342, 0.0614675, 0.8962876, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002737075, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.007578618, 0.01586265, 0.004329959, 0.9384965, 0.003742664, 0.002642389, 0.002157501, 0.002650532,
   0, 0.002167467, 0, 0.002157501, 0, 0, 0, 0.007400572, 0, 0, 0.001539645, 0, 0, 0.001539645, 0, 0,
   0, 0, 0, 0, 0, 0, 5.093742, 0.3485412, 0.07453916, 0.04813934, 0.03589641, 0.03023198, 0.0294792, 0.0262531, 0.0167983, 0.01465465,
   0.02543174, 0.02493594, 0.01507464, 0.01540238, 0.02023709, 0, 0.01303108, 0, 0.01070986, 0.001525584, 0.007412035, 1.32703e+08, 2.161642, 2.229562, 1.943691, 1.943752,
   2.018957, 2.229588, 1.727018, 1.544696, 1.607751, 1.668442, 1.374426, 1.33773, 1.261224, 1.410091, 1.410112, 1.136877, 1.374407, 1.221197, 1.136852, 0.8342569,
   0.7723401, 0.8342569, 0.8343272, 0.7723773, 0.6306593, 0.4459743, 0.7723385, 0.7050454, 0.3153059, 0.3153059, 0, 0.5461258, 0, 0.4459771, 0.007741618, 0,
   0, 0.001525584, 0.007578618, 0, 0, 0, 0.001525584, 0.007578618, 0, 0.007578618, 0, 0, 0.007741618, 0, 0.007578618, 0,
   0, 0.007578618, 0, 0.001525584, 0, 0.007741618, 0.007730644, 0.007578618, 0, 0.007741618, 0, 0.001525584, 0, 0.001525584, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.00724162, 0, 0, 0.007741618, 0.007741618,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007578618, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0.001525584, 0, 0, 0, 0.007741618, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0.007578618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.007741618,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.001525584, 0, 0, 0, 0.001539645, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_genWeight_fx1003,Graph_from_genWeight_fy1003,Graph_from_genWeight_fex1003,Graph_from_genWeight_fey1003);
   gre->SetName("Graph_from_genWeight");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_genWeight1003 = new TH1F("Graph_Graph_from_genWeight1003","",500,-6,6);
   Graph_Graph_from_genWeight1003->SetMinimum(0);
   Graph_Graph_from_genWeight1003->SetMaximum(1.374971e+12);
   Graph_Graph_from_genWeight1003->SetDirectory(nullptr);
   Graph_Graph_from_genWeight1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_genWeight1003->SetLineColor(ci);
   Graph_Graph_from_genWeight1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_genWeight1003);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("genWeight","Data (JetHT, 2017)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("genWeight","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("genWeight","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   entry=leg->AddEntry("genWeight","ggZHbb","F");

   ci = TColor::GetColor("#0000cc");
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
   entry=leg->AddEntry("genWeight","ZHbb","F");

   ci = TColor::GetColor("#cccc00");
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
   entry=leg->AddEntry("genWeight","ZZ","F");

   ci = TColor::GetColor("#33ff99");
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
   entry=leg->AddEntry("genWeight","WZ","F");

   ci = TColor::GetColor("#3399ff");
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
   entry=leg->AddEntry("genWeight","WW","F");

   ci = TColor::GetColor("#9933ff");
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
   entry=leg->AddEntry("genWeight","W + jets","F");

   ci = TColor::GetColor("#ff99cc");
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
   entry=leg->AddEntry("genWeight","Z + jets","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("genWeight","t#bar{t}","F");

   ci = TColor::GetColor("#cc00cc");
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
   entry=leg->AddEntry("genWeight","Single top","F");

   ci = TColor::GetColor("#660066");
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
   entry=leg->AddEntry("genWeight","QCD","F");

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
   entry=leg->AddEntry("Graph_from_genWeight","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   genWeight__17->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-2.612902,-0.2774193,2.209678,1.658065);
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
   
   TH1D *data_mc_ratio__4 = new TH1D("data_mc_ratio__4","",200,-2,2);
   data_mc_ratio__4->SetMinimum(0.4);
   data_mc_ratio__4->SetMaximum(1.6);
   data_mc_ratio__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__4->SetLineColor(ci);
   data_mc_ratio__4->SetLineWidth(2);
   data_mc_ratio__4->SetMarkerStyle(20);
   data_mc_ratio__4->SetMarkerSize(1.2);
   data_mc_ratio__4->GetXaxis()->SetTitle("Generator Weight");
   data_mc_ratio__4->GetXaxis()->SetRange(1,200);
   data_mc_ratio__4->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__4->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__4->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__4->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__4->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__4->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__4->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__4->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__4->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__4->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1004[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
   -4.65, -4.63, -4.61, -4.59, -4.57, -4.55, -4.53, -4.51, -4.49, -4.47, -4.45, -4.43, -4.41, -4.39, -4.37, -4.35,
   -4.33, -4.31, -4.29, -4.27, -4.25, -4.23, -4.21, -4.19, -4.17, -4.15, -4.13, -4.11, -4.09, -4.07, -4.05, -4.03,
   -4.01, -3.99, -3.97, -3.95, -3.93, -3.91, -3.89, -3.87, -3.85, -3.83, -3.81, -3.79, -3.77, -3.75, -3.73, -3.71,
   -3.69, -3.67, -3.65, -3.63, -3.61, -3.59, -3.57, -3.55, -3.53, -3.51, -3.49, -3.47, -3.45, -3.43, -3.41, -3.39,
   -3.37, -3.35, -3.33, -3.31, -3.29, -3.27, -3.25, -3.23, -3.21, -3.19, -3.17, -3.15, -3.13, -3.11, -3.09, -3.07,
   -3.05, -3.03, -3.01, -2.99, -2.97, -2.95, -2.93, -2.91, -2.89, -2.87, -2.85, -2.83, -2.81, -2.79, -2.77, -2.75,
   -2.73, -2.71, -2.69, -2.67, -2.65, -2.63, -2.61, -2.59, -2.57, -2.55, -2.53, -2.51, -2.49, -2.47, -2.45, -2.43,
   -2.41, -2.39, -2.37, -2.35, -2.33, -2.31, -2.29, -2.27, -2.25, -2.23, -2.21, -2.19, -2.17, -2.15, -2.13, -2.11,
   -2.09, -2.07, -2.05, -2.03, -2.01, -1.99, -1.97, -1.95, -1.93, -1.91, -1.89, -1.87, -1.85, -1.83, -1.81, -1.79,
   -1.77, -1.75, -1.73, -1.71, -1.69, -1.67, -1.65, -1.63, -1.61, -1.59, -1.57, -1.55, -1.53, -1.51, -1.49, -1.47,
   -1.45, -1.43, -1.41, -1.39, -1.37, -1.35, -1.33, -1.31, -1.29, -1.27, -1.25, -1.23, -1.21, -1.19, -1.17, -1.15,
   -1.13, -1.11, -1.09, -1.07, -1.05, -1.03, -1.01, -0.99, -0.97, -0.95, -0.93, -0.91, -0.89, -0.87, -0.85, -0.83,
   -0.81, -0.79, -0.77, -0.75, -0.73, -0.71, -0.69, -0.67, -0.65, -0.63, -0.61, -0.59, -0.57, -0.55, -0.53, -0.51,
   -0.49, -0.47, -0.45, -0.43, -0.41, -0.39, -0.37, -0.35, -0.33, -0.31, -0.29, -0.27, -0.25, -0.23, -0.21, -0.19,
   -0.17, -0.15, -0.13, -0.11, -0.09, -0.07, -0.05, -0.03, -0.01, 0.01, 0.03, 0.05, 0.07, 0.09, 0.11, 0.13,
   0.15, 0.17, 0.19, 0.21, 0.23, 0.25, 0.27, 0.29, 0.31, 0.33, 0.35, 0.37, 0.39, 0.41, 0.43, 0.45,
   0.47, 0.49, 0.51, 0.53, 0.55, 0.57, 0.59, 0.61, 0.63, 0.65, 0.67, 0.69, 0.71, 0.73, 0.75, 0.77,
   0.79, 0.81, 0.83, 0.85, 0.87, 0.89, 0.91, 0.93, 0.95, 0.97, 0.99, 1.01, 1.03, 1.05, 1.07, 1.09,
   1.11, 1.13, 1.15, 1.17, 1.19, 1.21, 1.23, 1.25, 1.27, 1.29, 1.31, 1.33, 1.35, 1.37, 1.39, 1.41,
   1.43, 1.45, 1.47, 1.49, 1.51, 1.53, 1.55, 1.57, 1.59, 1.61, 1.63, 1.65, 1.67, 1.69, 1.71, 1.73,
   1.75, 1.77, 1.79, 1.81, 1.83, 1.85, 1.87, 1.89, 1.91, 1.93, 1.95, 1.97, 1.99, 2.01, 2.03, 2.05,
   2.07, 2.09, 2.11, 2.13, 2.15, 2.17, 2.19, 2.21, 2.23, 2.25, 2.27, 2.29, 2.31, 2.33, 2.35, 2.37,
   2.39, 2.41, 2.43, 2.45, 2.47, 2.49, 2.51, 2.53, 2.55, 2.57, 2.59, 2.61, 2.63, 2.65, 2.67, 2.69,
   2.71, 2.73, 2.75, 2.77, 2.79, 2.81, 2.83, 2.85, 2.87, 2.89, 2.91, 2.93, 2.95, 2.97, 2.99, 3.01,
   3.03, 3.05, 3.07, 3.09, 3.11, 3.13, 3.15, 3.17, 3.19, 3.21, 3.23, 3.25, 3.27, 3.29, 3.31, 3.33,
   3.35, 3.37, 3.39, 3.41, 3.43, 3.45, 3.47, 3.49, 3.51, 3.53, 3.55, 3.57, 3.59, 3.61, 3.63, 3.65,
   3.67, 3.69, 3.71, 3.73, 3.75, 3.77, 3.79, 3.81, 3.83, 3.85, 3.87, 3.89, 3.91, 3.93, 3.95, 3.97,
   3.99, 4.01, 4.03, 4.05, 4.07, 4.09, 4.11, 4.13, 4.15, 4.17, 4.19, 4.21, 4.23, 4.25, 4.27, 4.29,
   4.31, 4.33, 4.35, 4.37, 4.39, 4.41, 4.43, 4.45, 4.47, 4.49, 4.51, 4.53, 4.55, 4.57, 4.59, 4.61,
   4.63, 4.65, 4.67, 4.69, 4.71, 4.73, 4.75, 4.77, 4.79, 4.81, 4.83, 4.85, 4.87, 4.89, 4.91, 4.93,
   4.95, 4.97, 4.99 };
   Double_t Graph_from_mc_statistical_error_fy1004[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1 };
   Double_t Graph_from_mc_statistical_error_fex1004[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
   0.01, 0.01, 0.01 };
   Double_t Graph_from_mc_statistical_error_fey1004[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.5773503, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
   1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1,
   0, 0, 0, 0, 0.7071068, 0.7071068, 1, 0, 0, 0, 0, 0.5, 0, 0, 0, 1,
   0.5773503, 1, 0.7071068, 1, 0.7071068, 0, 0.5773503, 0.7071068, 0, 0.5773503, 0, 0.5, 0, 0.5, 1, 0.4472136,
   0.2581989, 0.4472136, 0.3162278, 0.3779645, 0.2886751, 0.2886751, 0.2357023, 0.2886751, 0.1767767, 0.1118034, 0.02570872, 0.001800347, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5773503, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.2085144, 0.07989552, 0.04794633, 0.0004314403, 0.05547002, 0.07856742, 0.09622504, 0.07832604,
   0, 0.09578263, 0, 0.09622504, 0, 0, 0, 0.1666947, 0, 0, 0.13484, 0, 0, 0.13484, 0, 0,
   0, 0, 0, 0, 0, 0, 0.0003167906, 0.0045339, 0.02114173, 0.03282661, 0.04402255, 0.05227084, 0.05360563, 0.06019293, 0.09407209, 0.1078328,
   0.06213698, 0.06337243, 0.1048285, 0.1025978, 0.07808688, 0, 0.1212678, 0, 0.1300972, 0.1360828, 0.2132007, 0.000106176, 0.1454936, 0.141111, 0.161732, 0.1597417,
   0.155737, 0.1404524, 0.1818771, 0.2031088, 0.1961161, 0.1889822, 0.2267902, 0.2357023, 0.25, 0.2236068, 0.2222734, 0.2749185, 0.2276641, 0.2563195, 0.2773501, 0.3715955,
   0.4058441, 0.3715955, 0.3597263, 0.400245, 0.4854401, 0.6686696, 0.4082483, 0.4472136, 1, 1, 0, 0.5773503, 0, 0.6670933, 0.2041241, 0,
   0, 0.1360828, 0.2085144, 0, 0, 0, 0.1360828, 0.2085144, 0, 0.2085144, 0, 0, 0.2041241, 0, 0.2085144, 0,
   0, 0.2085144, 0, 0.1360828, 0, 0.2041241, 0.1625571, 0.2085144, 0, 0.2041241, 0, 0.1360828, 0, 0.1360828, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2182179, 0, 0, 0.2041241, 0.2041241,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2085144, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0.1360828, 0, 0, 0, 0.2041241, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0.2085144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2041241,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.1360828, 0, 0, 0, 0.13484, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1004,Graph_from_mc_statistical_error_fy1004,Graph_from_mc_statistical_error_fex1004,Graph_from_mc_statistical_error_fey1004);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1004 = new TH1F("Graph_Graph_from_mc_statistical_error1004","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1004->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1004->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1004->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1004->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1004);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   genWeight__17->cd();
   genWeight__17->Modified();
   genWeight__17->cd();
   genWeight__17->SetSelected(genWeight__17);
}
