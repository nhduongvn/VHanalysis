#ifdef __CLING__
#pragma cling optimize(0)
#endif
void genWeight__18()
{
//=========Macro generated from canvas: genWeight__18/genWeight__18
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *genWeight__18 = new TCanvas("genWeight__18", "genWeight__18",0,0,600,600);
   genWeight__18->SetHighLightColor(2);
   genWeight__18->Range(0,0,1,1);
   genWeight__18->SetFillColor(0);
   genWeight__18->SetFillStyle(4000);
   genWeight__18->SetBorderMode(0);
   genWeight__18->SetBorderSize(2);
   genWeight__18->SetFrameFillStyle(1000);
   genWeight__18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-4.441994e+09,2.209678,4.437552e+12);
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
   st->SetMaximum(3.993353e+12);
   
   TH1F *st_stack_3 = new TH1F("st_stack_3","",500,-5,5);
   st_stack_3->SetMinimum(0.01);
   st_stack_3->SetMaximum(3.993353e+12);
   st_stack_3->SetDirectory(nullptr);
   st_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_3->SetLineColor(ci);
   st_stack_3->SetLineWidth(0);
   st_stack_3->GetXaxis()->SetRange(151,350);
   st_stack_3->GetXaxis()->SetLabelFont(42);
   st_stack_3->GetXaxis()->SetTitleOffset(1);
   st_stack_3->GetXaxis()->SetTitleFont(42);
   st_stack_3->GetYaxis()->SetTitle("Events/0.02");
   st_stack_3->GetYaxis()->SetLabelFont(42);
   st_stack_3->GetYaxis()->SetLabelSize(0.05);
   st_stack_3->GetYaxis()->SetTitleSize(0.057);
   st_stack_3->GetYaxis()->SetTitleOffset(1.2);
   st_stack_3->GetYaxis()->SetTitleFont(42);
   st_stack_3->GetZaxis()->SetLabelFont(42);
   st_stack_3->GetZaxis()->SetTitleOffset(1);
   st_stack_3->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_3);
   
   
   TH1D *genWeight_stack_1 = new TH1D("genWeight_stack_1","",500,-5,5);
   genWeight_stack_1->SetBinContent(301,1.796649e+12);
   genWeight_stack_1->SetBinError(301,1.830938e+08);
   genWeight_stack_1->SetEntries(3.284355e+08);

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
   genWeight_stack_2->SetBinContent(0,423292.4);
   genWeight_stack_2->SetBinContent(501,1.765978e+07);
   genWeight_stack_2->SetBinError(0,148.1144);
   genWeight_stack_2->SetBinError(501,1394.389);
   genWeight_stack_2->SetEntries(2.81531e+08);

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
   genWeight_stack_3->SetBinContent(0,202755.2);
   genWeight_stack_3->SetBinContent(501,4.998477e+07);
   genWeight_stack_3->SetBinError(0,106.6727);
   genWeight_stack_3->SetBinError(501,1674.907);
   genWeight_stack_3->SetEntries(9.43436e+08);

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
   genWeight_stack_4->SetBinContent(301,6.90576e+07);
   genWeight_stack_4->SetBinError(301,15617.75);
   genWeight_stack_4->SetEntries(5.027001e+07);

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
   genWeight_stack_5->SetBinContent(301,2.798024e+08);
   genWeight_stack_5->SetBinError(301,42242.19);
   genWeight_stack_5->SetEntries(1.797322e+08);

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
   genWeight_stack_6->SetBinContent(301,7087300);
   genWeight_stack_6->SetBinContent(302,18.53375);
   genWeight_stack_6->SetBinContent(303,18.08171);
   genWeight_stack_6->SetBinContent(304,22.15009);
   genWeight_stack_6->SetBinContent(305,18.08171);
   genWeight_stack_6->SetBinContent(306,18.08171);
   genWeight_stack_6->SetBinContent(307,19.88988);
   genWeight_stack_6->SetBinContent(308,15.36945);
   genWeight_stack_6->SetBinContent(309,16.27354);
   genWeight_stack_6->SetBinContent(310,19.88988);
   genWeight_stack_6->SetBinContent(311,8.588811);
   genWeight_stack_6->SetBinContent(312,10.84902);
   genWeight_stack_6->SetBinContent(313,10.39698);
   genWeight_stack_6->SetBinContent(314,13.56128);
   genWeight_stack_6->SetBinContent(315,9.040853);
   genWeight_stack_6->SetBinContent(316,6.78064);
   genWeight_stack_6->SetBinContent(317,8.136768);
   genWeight_stack_6->SetBinContent(318,9.040853);
   genWeight_stack_6->SetBinContent(319,3.164299);
   genWeight_stack_6->SetBinContent(320,3.616341);
   genWeight_stack_6->SetBinContent(321,3.616341);
   genWeight_stack_6->SetBinContent(322,4.520427);
   genWeight_stack_6->SetBinContent(323,2.260213);
   genWeight_stack_6->SetBinContent(324,1.356128);
   genWeight_stack_6->SetBinContent(325,3.616341);
   genWeight_stack_6->SetBinContent(326,1.808171);
   genWeight_stack_6->SetBinContent(327,3.616341);
   genWeight_stack_6->SetBinContent(328,1.356128);
   genWeight_stack_6->SetBinContent(329,1.356128);
   genWeight_stack_6->SetBinContent(330,1.356128);
   genWeight_stack_6->SetBinContent(331,1.356128);
   genWeight_stack_6->SetBinContent(334,0.4520427);
   genWeight_stack_6->SetBinContent(336,0.4520427);
   genWeight_stack_6->SetBinError(301,1789.906);
   genWeight_stack_6->SetBinError(302,2.894485);
   genWeight_stack_6->SetBinError(303,2.858969);
   genWeight_stack_6->SetBinError(304,3.164299);
   genWeight_stack_6->SetBinError(305,2.858969);
   genWeight_stack_6->SetBinError(306,2.858969);
   genWeight_stack_6->SetBinError(307,2.998512);
   genWeight_stack_6->SetBinError(308,2.635839);
   genWeight_stack_6->SetBinError(309,2.712256);
   genWeight_stack_6->SetBinError(310,2.998512);
   genWeight_stack_6->SetBinError(311,1.970408);
   genWeight_stack_6->SetBinError(312,2.214548);
   genWeight_stack_6->SetBinError(313,2.16792);
   genWeight_stack_6->SetBinError(314,2.47594);
   genWeight_stack_6->SetBinError(315,2.021596);
   genWeight_stack_6->SetBinError(316,1.750754);
   genWeight_stack_6->SetBinError(317,1.917855);
   genWeight_stack_6->SetBinError(318,2.021596);
   genWeight_stack_6->SetBinError(319,1.195992);
   genWeight_stack_6->SetBinError(320,1.27857);
   genWeight_stack_6->SetBinError(321,1.27857);
   genWeight_stack_6->SetBinError(322,1.429484);
   genWeight_stack_6->SetBinError(323,1.010798);
   genWeight_stack_6->SetBinError(324,0.7829609);
   genWeight_stack_6->SetBinError(325,1.27857);
   genWeight_stack_6->SetBinError(326,0.9040853);
   genWeight_stack_6->SetBinError(327,1.27857);
   genWeight_stack_6->SetBinError(328,0.7829609);
   genWeight_stack_6->SetBinError(329,0.7829609);
   genWeight_stack_6->SetBinError(330,0.7829609);
   genWeight_stack_6->SetBinError(331,0.7829609);
   genWeight_stack_6->SetBinError(334,0.4520427);
   genWeight_stack_6->SetBinError(336,0.4520427);
   genWeight_stack_6->SetEntries(1.5679e+07);

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
   genWeight_stack_7->SetBinContent(301,2812341);
   genWeight_stack_7->SetBinError(301,1153.432);
   genWeight_stack_7->SetEntries(5945000);

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
   genWeight_stack_8->SetBinContent(301,985215);
   genWeight_stack_8->SetBinError(301,524.6744);
   genWeight_stack_8->SetEntries(3526000);

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
   genWeight_stack_9->SetBinContent(221,686.4353);
   genWeight_stack_9->SetBinContent(280,22146.81);
   genWeight_stack_9->SetBinError(221,1.252613);
   genWeight_stack_9->SetBinError(280,7.114963);
   genWeight_stack_9->SetEntries(9989262);

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
   genWeight_stack_10->SetBinContent(253,2980.723);
   genWeight_stack_10->SetBinError(253,1.33302);
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
   genWeight_stack_11->SetBinContent(0,0.02503338);
   genWeight_stack_11->SetBinContent(6,0.004551524);
   genWeight_stack_11->SetBinContent(37,0.002275762);
   genWeight_stack_11->SetBinContent(88,0.002275762);
   genWeight_stack_11->SetBinContent(94,0.002275762);
   genWeight_stack_11->SetBinContent(106,0.002275762);
   genWeight_stack_11->SetBinContent(115,0.002275762);
   genWeight_stack_11->SetBinContent(116,0.002275762);
   genWeight_stack_11->SetBinContent(121,0.004551524);
   genWeight_stack_11->SetBinContent(127,0.002275762);
   genWeight_stack_11->SetBinContent(141,0.0182061);
   genWeight_stack_11->SetBinContent(143,0.002275762);
   genWeight_stack_11->SetBinContent(150,0.002275762);
   genWeight_stack_11->SetBinContent(155,0.006827286);
   genWeight_stack_11->SetBinContent(160,0.002275762);
   genWeight_stack_11->SetBinContent(174,0.002275762);
   genWeight_stack_11->SetBinContent(179,0.004551524);
   genWeight_stack_11->SetBinContent(185,0.004551524);
   genWeight_stack_11->SetBinContent(188,0.002275762);
   genWeight_stack_11->SetBinContent(190,0.002275762);
   genWeight_stack_11->SetBinContent(191,0.002275762);
   genWeight_stack_11->SetBinContent(193,0.002275762);
   genWeight_stack_11->SetBinContent(196,0.004551524);
   genWeight_stack_11->SetBinContent(198,0.009103048);
   genWeight_stack_11->SetBinContent(201,0.002275762);
   genWeight_stack_11->SetBinContent(204,0.006827286);
   genWeight_stack_11->SetBinContent(205,0.002275762);
   genWeight_stack_11->SetBinContent(206,0.009103048);
   genWeight_stack_11->SetBinContent(207,0.006827286);
   genWeight_stack_11->SetBinContent(208,0.01137881);
   genWeight_stack_11->SetBinContent(209,0.009103048);
   genWeight_stack_11->SetBinContent(210,0.02275762);
   genWeight_stack_11->SetBinContent(211,0.02275762);
   genWeight_stack_11->SetBinContent(212,0.02503338);
   genWeight_stack_11->SetBinContent(213,0.0182061);
   genWeight_stack_11->SetBinContent(214,0.03641219);
   genWeight_stack_11->SetBinContent(215,0.03868795);
   genWeight_stack_11->SetBinContent(216,0.04096371);
   genWeight_stack_11->SetBinContent(217,0.03413643);
   genWeight_stack_11->SetBinContent(218,0.09330624);
   genWeight_stack_11->SetBinContent(219,0.152476);
   genWeight_stack_11->SetBinContent(220,3.814177);
   genWeight_stack_11->SetBinContent(221,30.82975);
   genWeight_stack_11->SetBinContent(235,0.009103048);
   genWeight_stack_11->SetBinContent(240,0.006827286);
   genWeight_stack_11->SetBinContent(247,0.004551524);
   genWeight_stack_11->SetBinContent(250,0.07054862);
   genWeight_stack_11->SetBinContent(251,0.2070943);
   genWeight_stack_11->SetBinContent(254,0.04096371);
   genWeight_stack_11->SetBinContent(261,0.03868795);
   genWeight_stack_11->SetBinContent(266,0.03868795);
   genWeight_stack_11->SetBinContent(280,967.638);
   genWeight_stack_11->SetBinContent(281,115.8704);
   genWeight_stack_11->SetBinContent(282,5.245631);
   genWeight_stack_11->SetBinContent(283,2.353138);
   genWeight_stack_11->SetBinContent(284,1.024093);
   genWeight_stack_11->SetBinContent(285,0.8784441);
   genWeight_stack_11->SetBinContent(286,0.9262351);
   genWeight_stack_11->SetBinContent(287,0.659971);
   genWeight_stack_11->SetBinContent(288,0.4437736);
   genWeight_stack_11->SetBinContent(289,0.669074);
   genWeight_stack_11->SetBinContent(290,0.5279768);
   genWeight_stack_11->SetBinContent(291,0.3004006);
   genWeight_stack_11->SetBinContent(292,0.2230247);
   genWeight_stack_11->SetBinContent(293,0.2685399);
   genWeight_stack_11->SetBinContent(294,0.2230247);
   genWeight_stack_11->SetBinContent(295,0.1752337);
   genWeight_stack_11->SetBinContent(296,0.04323948);
   genWeight_stack_11->SetBinContent(297,0.1752337);
   genWeight_stack_11->SetBinContent(298,0.1365457);
   genWeight_stack_11->SetBinContent(300,0.13427);
   genWeight_stack_11->SetBinContent(302,0.09330624);
   genWeight_stack_11->SetBinContent(303,0.1274427);
   genWeight_stack_11->SetBinContent(304,0.04551524);
   genWeight_stack_11->SetBinContent(305,0.04096371);
   genWeight_stack_11->SetBinContent(308,0.04323948);
   genWeight_stack_11->SetBinContent(309,0.09103048);
   genWeight_stack_11->SetBinContent(310,0.04323948);
   genWeight_stack_11->SetBinContent(311,0.04323948);
   genWeight_stack_11->SetBinContent(312,0.09330624);
   genWeight_stack_11->SetBinContent(313,0.08875471);
   genWeight_stack_11->SetBinContent(316,0.08647895);
   genWeight_stack_11->SetBinContent(317,0.04551524);
   genWeight_stack_11->SetBinContent(321,0.04551524);
   genWeight_stack_11->SetBinContent(322,0.04323948);
   genWeight_stack_11->SetBinContent(323,0.04551524);
   genWeight_stack_11->SetBinContent(327,0.04323948);
   genWeight_stack_11->SetBinContent(329,0.047791);
   genWeight_stack_11->SetBinContent(331,0.047791);
   genWeight_stack_11->SetBinContent(335,0.04551524);
   genWeight_stack_11->SetBinContent(340,0.04551524);
   genWeight_stack_11->SetBinContent(341,0.04551524);
   genWeight_stack_11->SetBinContent(346,0.08420319);
   genWeight_stack_11->SetBinContent(351,0.04323948);
   genWeight_stack_11->SetBinContent(358,0.04551524);
   genWeight_stack_11->SetBinContent(360,0.02730914);
   genWeight_stack_11->SetBinContent(368,0.04551524);
   genWeight_stack_11->SetBinContent(374,0.04323948);
   genWeight_stack_11->SetBinContent(380,0.04096371);
   genWeight_stack_11->SetBinContent(384,0.04551524);
   genWeight_stack_11->SetBinContent(385,0.04323948);
   genWeight_stack_11->SetBinContent(386,0.04323948);
   genWeight_stack_11->SetBinContent(393,0.04551524);
   genWeight_stack_11->SetBinContent(394,0.04551524);
   genWeight_stack_11->SetBinContent(395,0.04323948);
   genWeight_stack_11->SetBinContent(399,0.04551524);
   genWeight_stack_11->SetBinContent(407,0.04323948);
   genWeight_stack_11->SetBinContent(409,0.047791);
   genWeight_stack_11->SetBinContent(413,0.04323948);
   genWeight_stack_11->SetBinContent(435,0.04551524);
   genWeight_stack_11->SetBinContent(461,0.04551524);
   genWeight_stack_11->SetBinContent(464,0.04323948);
   genWeight_stack_11->SetBinContent(495,0.04096371);
   genWeight_stack_11->SetBinContent(501,0.7623802);
   genWeight_stack_11->SetBinError(0,0.007547848);
   genWeight_stack_11->SetBinError(6,0.003218413);
   genWeight_stack_11->SetBinError(37,0.002275762);
   genWeight_stack_11->SetBinError(88,0.002275762);
   genWeight_stack_11->SetBinError(94,0.002275762);
   genWeight_stack_11->SetBinError(106,0.002275762);
   genWeight_stack_11->SetBinError(115,0.002275762);
   genWeight_stack_11->SetBinError(116,0.002275762);
   genWeight_stack_11->SetBinError(121,0.003218413);
   genWeight_stack_11->SetBinError(127,0.002275762);
   genWeight_stack_11->SetBinError(141,0.006436827);
   genWeight_stack_11->SetBinError(143,0.002275762);
   genWeight_stack_11->SetBinError(150,0.002275762);
   genWeight_stack_11->SetBinError(155,0.003941735);
   genWeight_stack_11->SetBinError(160,0.002275762);
   genWeight_stack_11->SetBinError(174,0.002275762);
   genWeight_stack_11->SetBinError(179,0.003218413);
   genWeight_stack_11->SetBinError(185,0.003218413);
   genWeight_stack_11->SetBinError(188,0.002275762);
   genWeight_stack_11->SetBinError(190,0.002275762);
   genWeight_stack_11->SetBinError(191,0.002275762);
   genWeight_stack_11->SetBinError(193,0.002275762);
   genWeight_stack_11->SetBinError(196,0.003218413);
   genWeight_stack_11->SetBinError(198,0.004551524);
   genWeight_stack_11->SetBinError(201,0.002275762);
   genWeight_stack_11->SetBinError(204,0.003941735);
   genWeight_stack_11->SetBinError(205,0.002275762);
   genWeight_stack_11->SetBinError(206,0.004551524);
   genWeight_stack_11->SetBinError(207,0.003941735);
   genWeight_stack_11->SetBinError(208,0.005088758);
   genWeight_stack_11->SetBinError(209,0.004551524);
   genWeight_stack_11->SetBinError(210,0.007196591);
   genWeight_stack_11->SetBinError(211,0.007196591);
   genWeight_stack_11->SetBinError(212,0.007547848);
   genWeight_stack_11->SetBinError(213,0.006436827);
   genWeight_stack_11->SetBinError(214,0.009103048);
   genWeight_stack_11->SetBinError(215,0.009383207);
   genWeight_stack_11->SetBinError(216,0.00965524);
   genWeight_stack_11->SetBinError(217,0.008813988);
   genWeight_stack_11->SetBinError(218,0.01457199);
   genWeight_stack_11->SetBinError(219,0.01862791);
   genWeight_stack_11->SetBinError(220,0.09316737);
   genWeight_stack_11->SetBinError(221,0.2648795);
   genWeight_stack_11->SetBinError(235,0.004551524);
   genWeight_stack_11->SetBinError(240,0.003941735);
   genWeight_stack_11->SetBinError(247,0.003218413);
   genWeight_stack_11->SetBinError(250,0.01267091);
   genWeight_stack_11->SetBinError(251,0.02170938);
   genWeight_stack_11->SetBinError(254,0.00965524);
   genWeight_stack_11->SetBinError(261,0.009383207);
   genWeight_stack_11->SetBinError(266,0.009383207);
   genWeight_stack_11->SetBinError(280,1.483952);
   genWeight_stack_11->SetBinError(281,0.5135109);
   genWeight_stack_11->SetBinError(282,0.1092603);
   genWeight_stack_11->SetBinError(283,0.0731791);
   genWeight_stack_11->SetBinError(284,0.0482762);
   genWeight_stack_11->SetBinError(285,0.04471163);
   genWeight_stack_11->SetBinError(286,0.04591177);
   genWeight_stack_11->SetBinError(287,0.03875483);
   genWeight_stack_11->SetBinError(288,0.03177929);
   genWeight_stack_11->SetBinError(289,0.03902119);
   genWeight_stack_11->SetBinError(290,0.03466337);
   genWeight_stack_11->SetBinError(291,0.02614651);
   genWeight_stack_11->SetBinError(292,0.02252889);
   genWeight_stack_11->SetBinError(293,0.0247211);
   genWeight_stack_11->SetBinError(294,0.02252889);
   genWeight_stack_11->SetBinError(295,0.01996973);
   genWeight_stack_11->SetBinError(296,0.009919816);
   genWeight_stack_11->SetBinError(297,0.01996973);
   genWeight_stack_11->SetBinError(298,0.01762798);
   genWeight_stack_11->SetBinError(300,0.01748046);
   genWeight_stack_11->SetBinError(302,0.01457199);
   genWeight_stack_11->SetBinError(303,0.01703024);
   genWeight_stack_11->SetBinError(304,0.01017752);
   genWeight_stack_11->SetBinError(305,0.00965524);
   genWeight_stack_11->SetBinError(308,0.009919816);
   genWeight_stack_11->SetBinError(309,0.01439318);
   genWeight_stack_11->SetBinError(310,0.009919816);
   genWeight_stack_11->SetBinError(311,0.009919816);
   genWeight_stack_11->SetBinError(312,0.01457199);
   genWeight_stack_11->SetBinError(313,0.01421213);
   genWeight_stack_11->SetBinError(316,0.01402874);
   genWeight_stack_11->SetBinError(317,0.01017752);
   genWeight_stack_11->SetBinError(321,0.01017752);
   genWeight_stack_11->SetBinError(322,0.009919816);
   genWeight_stack_11->SetBinError(323,0.01017752);
   genWeight_stack_11->SetBinError(327,0.009919816);
   genWeight_stack_11->SetBinError(329,0.01042885);
   genWeight_stack_11->SetBinError(331,0.01042885);
   genWeight_stack_11->SetBinError(335,0.01017752);
   genWeight_stack_11->SetBinError(340,0.01017752);
   genWeight_stack_11->SetBinError(341,0.01017752);
   genWeight_stack_11->SetBinError(346,0.01384292);
   genWeight_stack_11->SetBinError(351,0.009919816);
   genWeight_stack_11->SetBinError(358,0.01017752);
   genWeight_stack_11->SetBinError(360,0.00788347);
   genWeight_stack_11->SetBinError(368,0.01017752);
   genWeight_stack_11->SetBinError(374,0.009919816);
   genWeight_stack_11->SetBinError(380,0.00965524);
   genWeight_stack_11->SetBinError(384,0.01017752);
   genWeight_stack_11->SetBinError(385,0.009919816);
   genWeight_stack_11->SetBinError(386,0.009919816);
   genWeight_stack_11->SetBinError(393,0.01017752);
   genWeight_stack_11->SetBinError(394,0.01017752);
   genWeight_stack_11->SetBinError(395,0.009919816);
   genWeight_stack_11->SetBinError(399,0.01017752);
   genWeight_stack_11->SetBinError(407,0.009919816);
   genWeight_stack_11->SetBinError(409,0.01042885);
   genWeight_stack_11->SetBinError(413,0.009919816);
   genWeight_stack_11->SetBinError(435,0.01017752);
   genWeight_stack_11->SetBinError(461,0.01017752);
   genWeight_stack_11->SetBinError(464,0.009919816);
   genWeight_stack_11->SetBinError(495,0.00965524);
   genWeight_stack_11->SetBinError(501,0.04165328);
   genWeight_stack_11->SetEntries(499433);

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
   genWeight_stack_12->SetBinContent(251,0.1618147);
   genWeight_stack_12->SetBinContent(252,0.0485444);
   genWeight_stack_12->SetBinContent(253,146.9643);
   genWeight_stack_12->SetBinContent(254,0.03236293);
   genWeight_stack_12->SetBinContent(255,0.06472587);
   genWeight_stack_12->SetBinContent(256,0.01618147);
   genWeight_stack_12->SetBinContent(257,0.03236293);
   genWeight_stack_12->SetBinContent(260,0.01618147);
   genWeight_stack_12->SetBinContent(261,0.01618147);
   genWeight_stack_12->SetBinContent(262,0.01618147);
   genWeight_stack_12->SetBinContent(264,0.01618147);
   genWeight_stack_12->SetBinContent(268,0.01618147);
   genWeight_stack_12->SetBinContent(269,0.01618147);
   genWeight_stack_12->SetBinContent(270,0.03236293);
   genWeight_stack_12->SetBinContent(273,0.01618147);
   genWeight_stack_12->SetBinContent(281,0.01618147);
   genWeight_stack_12->SetBinContent(304,0.01618147);
   genWeight_stack_12->SetBinContent(305,0.01618147);
   genWeight_stack_12->SetBinContent(311,0.01618147);
   genWeight_stack_12->SetBinContent(320,0.01618147);
   genWeight_stack_12->SetBinContent(323,0.01618147);
   genWeight_stack_12->SetBinContent(408,0.01618147);
   genWeight_stack_12->SetBinContent(457,0.01618147);
   genWeight_stack_12->SetBinContent(501,0.485444);
   genWeight_stack_12->SetBinError(251,0.006963395);
   genWeight_stack_12->SetBinError(252,0.003814008);
   genWeight_stack_12->SetBinError(253,0.2098543);
   genWeight_stack_12->SetBinError(254,0.003114125);
   genWeight_stack_12->SetBinError(255,0.004404038);
   genWeight_stack_12->SetBinError(256,0.002202019);
   genWeight_stack_12->SetBinError(257,0.003114125);
   genWeight_stack_12->SetBinError(260,0.002202019);
   genWeight_stack_12->SetBinError(261,0.002202019);
   genWeight_stack_12->SetBinError(262,0.002202019);
   genWeight_stack_12->SetBinError(264,0.002202019);
   genWeight_stack_12->SetBinError(268,0.002202019);
   genWeight_stack_12->SetBinError(269,0.002202019);
   genWeight_stack_12->SetBinError(270,0.003114125);
   genWeight_stack_12->SetBinError(273,0.002202019);
   genWeight_stack_12->SetBinError(281,0.002202019);
   genWeight_stack_12->SetBinError(304,0.002202019);
   genWeight_stack_12->SetBinError(305,0.002202019);
   genWeight_stack_12->SetBinError(311,0.002202019);
   genWeight_stack_12->SetBinError(320,0.002202019);
   genWeight_stack_12->SetBinError(323,0.002202019);
   genWeight_stack_12->SetBinError(408,0.002202019);
   genWeight_stack_12->SetBinError(457,0.002202019);
   genWeight_stack_12->SetBinError(501,0.01206095);
   genWeight_stack_12->SetEntries(494168);

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
   
   TH1D *genWeight__5 = new TH1D("genWeight__5","",200,-2,2);
   genWeight__5->SetEntries(199);

   ci = TColor::GetColor("#000099");
   genWeight__5->SetLineColor(ci);
   genWeight__5->SetLineWidth(2);
   genWeight__5->SetMarkerStyle(20);
   genWeight__5->SetMarkerSize(1.2);
   genWeight__5->GetXaxis()->SetRange(1,200);
   genWeight__5->GetXaxis()->SetLabelFont(42);
   genWeight__5->GetXaxis()->SetTitleOffset(1);
   genWeight__5->GetXaxis()->SetTitleFont(42);
   genWeight__5->GetYaxis()->SetLabelFont(42);
   genWeight__5->GetYaxis()->SetTitleFont(42);
   genWeight__5->GetZaxis()->SetLabelFont(42);
   genWeight__5->GetZaxis()->SetTitleOffset(1);
   genWeight__5->GetZaxis()->SetTitleFont(42);
   genWeight__5->Draw("same E");
   
   Double_t Graph_from_genWeight_fx1005[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_genWeight_fy1005[500] = { 0, 0, 0, 0, 0, 0.004551524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0, 0,
   0, 0.002275762, 0.002275762, 0, 0, 0, 0, 0.004551524, 0, 0, 0, 0, 0, 0.002275762, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.0182061, 0, 0.002275762, 0, 0,
   0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0.006827286, 0, 0, 0, 0, 0.002275762, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0,
   0, 0.004551524, 0, 0, 0, 0, 0, 0.004551524, 0, 0, 0.002275762, 0, 0.002275762, 0.002275762, 0, 0.002275762,
   0, 0, 0.004551524, 0, 0.009103048, 0, 0, 0.002275762, 0, 0, 0.006827286, 0.002275762, 0.009103048, 0.006827286, 0.01137881, 0.009103048,
   0.02275762, 0.02275762, 0.02503338, 0.0182061, 0.03641219, 0.03868795, 0.04096371, 0.03413643, 0.09330624, 0.152476, 3.814177, 717.2651, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.009103048, 0, 0, 0, 0, 0.006827286, 0,
   0, 0, 0, 0, 0, 0.004551524, 0, 0, 0.07054862, 0.368909, 0.0485444, 3127.687, 0.07332665, 0.06472587, 0.01618147, 0.03236293,
   0, 0, 0.01618147, 0.05486942, 0.01618147, 0, 0.01618147, 0, 0.03868795, 0, 0.01618147, 0.01618147, 0.03236293, 0, 0, 0.01618147,
   0, 0, 0, 0, 0, 0, 23114.44, 115.8866, 5.245631, 2.353138, 1.024093, 0.8784441, 0.9262351, 0.659971, 0.4437736, 0.669074,
   0.5279768, 0.3004006, 0.2230247, 0.2685399, 0.2230247, 0.1752337, 0.04323948, 0.1752337, 0.1365457, 0, 0.13427, 1.797009e+12, 18.62706, 18.20915, 22.21179, 18.13885,
   18.08171, 19.88988, 15.41269, 16.36457, 19.93312, 8.648232, 10.94233, 10.48574, 13.56128, 9.040853, 6.867119, 8.182283, 9.040853, 3.164299, 3.632523, 3.661857,
   4.563666, 2.32191, 1.356128, 3.616341, 1.808171, 3.659581, 1.356128, 1.403919, 1.356128, 1.403919, 0, 0, 0.4520427, 0.04551524, 0.4520427, 0,
   0, 0, 0.04551524, 0.04551524, 0, 0, 0, 0, 0.08420319, 0, 0, 0, 0, 0.04323948, 0, 0,
   0, 0, 0, 0, 0.04551524, 0, 0.02730914, 0, 0, 0, 0, 0, 0, 0, 0.04551524, 0,
   0, 0, 0, 0, 0.04323948, 0, 0, 0, 0, 0, 0.04096371, 0, 0, 0, 0.04551524, 0.04323948,
   0.04323948, 0, 0, 0, 0, 0, 0, 0.04551524, 0.04551524, 0.04323948, 0, 0, 0, 0.04551524, 0, 0,
   0, 0, 0, 0, 0, 0.04323948, 0.01618147, 0.047791, 0, 0, 0, 0.04323948, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0.04551524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0.01618147, 0, 0, 0, 0.04551524, 0, 0, 0.04323948, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.04096371, 0, 0,
   0, 0, 0 };
   Double_t Graph_from_genWeight_fex1005[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_genWeight_fey1005[500] = { 0, 0, 0, 0, 0, 0.003218413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0, 0, 0,
   0, 0.002275762, 0.002275762, 0, 0, 0, 0, 0.003218413, 0, 0, 0, 0, 0, 0.002275762, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.006436827, 0, 0.002275762, 0, 0,
   0, 0, 0, 0, 0.002275762, 0, 0, 0, 0, 0.003941735, 0, 0, 0, 0, 0.002275762, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002275762, 0, 0, 0,
   0, 0.003218413, 0, 0, 0, 0, 0, 0.003218413, 0, 0, 0.002275762, 0, 0.002275762, 0.002275762, 0, 0.002275762,
   0, 0, 0.003218413, 0, 0.004551524, 0, 0, 0.002275762, 0, 0, 0.003941735, 0.002275762, 0.004551524, 0.003941735, 0.005088758, 0.004551524,
   0.007196591, 0.007196591, 0.007547848, 0.006436827, 0.009103048, 0.009383207, 0.00965524, 0.008813988, 0.01457199, 0.01862791, 0.09316737, 1.280313, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.004551524, 0, 0, 0, 0, 0.003941735, 0,
   0, 0, 0, 0, 0, 0.003218413, 0, 0, 0.01267091, 0.02279882, 0.003814008, 1.349437, 0.01014502, 0.004404038, 0.002202019, 0.003114125,
   0, 0, 0.002202019, 0.009638125, 0.002202019, 0, 0.002202019, 0, 0.009383207, 0, 0.002202019, 0.002202019, 0.003114125, 0, 0, 0.002202019,
   0, 0, 0, 0, 0, 0, 7.268068, 0.5135157, 0.1092603, 0.0731791, 0.0482762, 0.04471163, 0.04591177, 0.03875483, 0.03177929, 0.03902119,
   0.03466337, 0.02614651, 0.02252889, 0.0247211, 0.02252889, 0.01996973, 0.009919816, 0.01996973, 0.01762798, 0, 0.01748046, 1.830939e+08, 2.894522, 2.85902, 3.164316, 2.858986,
   2.858969, 2.998512, 2.635858, 2.712294, 2.998528, 1.970435, 2.214596, 2.167967, 2.47594, 2.021596, 1.75081, 1.917882, 2.021596, 1.195992, 1.278572, 1.27861,
   1.429519, 1.010852, 0.7829609, 1.27857, 0.9040853, 1.278608, 0.7829609, 0.7830303, 0.7829609, 0.7830303, 0, 0, 0.4520427, 0.01017752, 0.4520427, 0,
   0, 0, 0.01017752, 0.01017752, 0, 0, 0, 0, 0.01384292, 0, 0, 0, 0, 0.009919816, 0, 0,
   0, 0, 0, 0, 0.01017752, 0, 0.00788347, 0, 0, 0, 0, 0, 0, 0, 0.01017752, 0,
   0, 0, 0, 0, 0.009919816, 0, 0, 0, 0, 0, 0.00965524, 0, 0, 0, 0.01017752, 0.009919816,
   0.009919816, 0, 0, 0, 0, 0, 0, 0.01017752, 0.01017752, 0.009919816, 0, 0, 0, 0.01017752, 0, 0,
   0, 0, 0, 0, 0, 0.009919816, 0.002202019, 0.01042885, 0, 0, 0, 0.009919816, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0.01017752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0.002202019, 0, 0, 0, 0.01017752, 0, 0, 0.009919816, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.00965524, 0, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_genWeight_fx1005,Graph_from_genWeight_fy1005,Graph_from_genWeight_fex1005,Graph_from_genWeight_fey1005);
   gre->SetName("Graph_from_genWeight");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_genWeight1005 = new TH1F("Graph_Graph_from_genWeight1005","",500,-6,6);
   Graph_Graph_from_genWeight1005->SetMinimum(0);
   Graph_Graph_from_genWeight1005->SetMaximum(1.976911e+12);
   Graph_Graph_from_genWeight1005->SetDirectory(nullptr);
   Graph_Graph_from_genWeight1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_genWeight1005->SetLineColor(ci);
   Graph_Graph_from_genWeight1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_genWeight1005);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("genWeight","Data (JetHT, 2018)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   genWeight__18->cd();
  
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
   
   TH1D *data_mc_ratio__6 = new TH1D("data_mc_ratio__6","",200,-2,2);
   data_mc_ratio__6->SetMinimum(0.4);
   data_mc_ratio__6->SetMaximum(1.6);
   data_mc_ratio__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__6->SetLineColor(ci);
   data_mc_ratio__6->SetLineWidth(2);
   data_mc_ratio__6->SetMarkerStyle(20);
   data_mc_ratio__6->SetMarkerSize(1.2);
   data_mc_ratio__6->GetXaxis()->SetTitle("Generator Weight");
   data_mc_ratio__6->GetXaxis()->SetRange(1,200);
   data_mc_ratio__6->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__6->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__6->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__6->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__6->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__6->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__6->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__6->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__6->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__6->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1006[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1006[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1006[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1006[500] = { 0, 0, 0, 0, 0, 0.7071068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
   0, 1, 1, 0, 0, 0, 0, 0.7071068, 0, 0, 0, 0, 0, 1, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.3535534, 0, 1, 0, 0,
   0, 0, 0, 0, 1, 0, 0, 0, 0, 0.5773503, 0, 0, 0, 0, 1, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0.7071068, 0, 0, 0, 0, 0, 0.7071068, 0, 0, 1, 0, 1, 1, 0, 1,
   0, 0, 0.7071068, 0, 0.5, 0, 0, 1, 0, 0, 0.5773503, 1, 0.5, 0.5773503, 0.4472136, 0.5,
   0.3162278, 0.3162278, 0.3015113, 0.3535534, 0.25, 0.2425356, 0.2357023, 0.2581989, 0.1561738, 0.1221694, 0.0244266, 0.001784992, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.5, 0, 0, 0, 0, 0.5773503, 0,
   0, 0, 0, 0, 0, 0.7071068, 0, 0, 0.1796053, 0.06180066, 0.07856742, 0.0004314489, 0.1383538, 0.06804138, 0.1360828, 0.09622504,
   0, 0, 0.1360828, 0.1756557, 0.1360828, 0, 0.1360828, 0, 0.2425356, 0, 0.1360828, 0.1360828, 0.09622504, 0, 0, 0.1360828,
   0, 0, 0, 0, 0, 0, 0.0003144384, 0.004431191, 0.02082881, 0.03109852, 0.04714045, 0.05089866, 0.04956816, 0.05872202, 0.07161149, 0.05832118,
   0.06565322, 0.08703883, 0.1010153, 0.09205746, 0.1010153, 0.1139606, 0.2294157, 0.1139606, 0.1290994, 0, 0.1301889, 0.0001018881, 0.1553934, 0.1570101, 0.1424611, 0.1576167,
   0.1581139, 0.1507557, 0.1710187, 0.1657419, 0.1504295, 0.2278425, 0.2023879, 0.2067539, 0.1825742, 0.2236068, 0.2549555, 0.2343944, 0.2236068, 0.3779645, 0.351979, 0.3491699,
   0.3132391, 0.4353535, 0.5773503, 0.3535534, 0.5, 0.3493865, 0.5773503, 0.5577461, 0.5773503, 0.5577461, 0, 0, 1, 0.2236068, 1, 0,
   0, 0, 0.2236068, 0.2236068, 0, 0, 0, 0, 0.164399, 0, 0, 0, 0, 0.2294157, 0, 0,
   0, 0, 0, 0, 0.2236068, 0, 0.2886751, 0, 0, 0, 0, 0, 0, 0, 0.2236068, 0,
   0, 0, 0, 0, 0.2294157, 0, 0, 0, 0, 0, 0.2357023, 0, 0, 0, 0.2236068, 0.2294157,
   0.2294157, 0, 0, 0, 0, 0, 0, 0.2236068, 0.2236068, 0.2294157, 0, 0, 0, 0.2236068, 0, 0,
   0, 0, 0, 0, 0, 0.2294157, 0.1360828, 0.2182179, 0, 0, 0, 0.2294157, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0.2236068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0.1360828, 0, 0, 0, 0.2236068, 0, 0, 0.2294157, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2357023, 0, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1006,Graph_from_mc_statistical_error_fy1006,Graph_from_mc_statistical_error_fex1006,Graph_from_mc_statistical_error_fey1006);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1006 = new TH1F("Graph_Graph_from_mc_statistical_error1006","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1006->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1006->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1006->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1006->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1006);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   genWeight__18->cd();
   genWeight__18->Modified();
   genWeight__18->cd();
   genWeight__18->SetSelected(genWeight__18);
}
