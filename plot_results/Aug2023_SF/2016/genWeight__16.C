#ifdef __CLING__
#pragma cling optimize(0)
#endif
void genWeight__16()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(0,0,1,1);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetFillStyle(4000);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetFrameFillStyle(1000);
   genWeight__16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-2.667875e+09,2.209678,2.665207e+12);
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
   st->SetMaximum(2.398419e+12);
   
   TH1F *st_stack_1 = new TH1F("st_stack_1","",500,-5,5);
   st_stack_1->SetMinimum(0.01);
   st_stack_1->SetMaximum(2.398419e+12);
   st_stack_1->SetDirectory(nullptr);
   st_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_1->SetLineColor(ci);
   st_stack_1->SetLineWidth(0);
   st_stack_1->GetXaxis()->SetRange(151,350);
   st_stack_1->GetXaxis()->SetLabelFont(42);
   st_stack_1->GetXaxis()->SetTitleOffset(1);
   st_stack_1->GetXaxis()->SetTitleFont(42);
   st_stack_1->GetYaxis()->SetTitle("Events/0.02");
   st_stack_1->GetYaxis()->SetLabelFont(42);
   st_stack_1->GetYaxis()->SetLabelSize(0.05);
   st_stack_1->GetYaxis()->SetTitleSize(0.057);
   st_stack_1->GetYaxis()->SetTitleOffset(1.2);
   st_stack_1->GetYaxis()->SetTitleFont(42);
   st_stack_1->GetZaxis()->SetLabelFont(42);
   st_stack_1->GetZaxis()->SetTitleOffset(1);
   st_stack_1->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_1);
   
   
   TH1D *genWeight_stack_1 = new TH1D("genWeight_stack_1","",500,-5,5);
   genWeight_stack_1->SetBinContent(301,1.079073e+12);
   genWeight_stack_1->SetBinError(301,1.442537e+08);
   genWeight_stack_1->SetEntries(2.561203e+08);

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
   genWeight_stack_2->SetBinContent(0,254404.2);
   genWeight_stack_2->SetBinContent(501,1.060669e+07);
   genWeight_stack_2->SetBinError(0,109.1539);
   genWeight_stack_2->SetBinError(501,1030.827);
   genWeight_stack_2->SetEntries(1.87656e+08);

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
   genWeight_stack_3->SetBinContent(0,121854.3);
   genWeight_stack_3->SetBinContent(501,3.002108e+07);
   genWeight_stack_3->SetBinError(0,83.19694);
   genWeight_stack_3->SetBinError(501,1305.864);
   genWeight_stack_3->SetEntries(5.5215e+08);

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
   genWeight_stack_4->SetBinContent(301,4.14762e+07);
   genWeight_stack_4->SetBinError(301,9879.709);
   genWeight_stack_4->SetEntries(4.770593e+07);

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
   genWeight_stack_5->SetBinContent(301,1.680501e+08);
   genWeight_stack_5->SetBinError(301,25040.71);
   genWeight_stack_5->SetEntries(1.558885e+08);

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
   genWeight_stack_6->SetBinContent(301,4256644);
   genWeight_stack_6->SetBinContent(302,13.16819);
   genWeight_stack_6->SetBinContent(303,14.64625);
   genWeight_stack_6->SetBinContent(304,12.22761);
   genWeight_stack_6->SetBinContent(305,10.48081);
   genWeight_stack_6->SetBinContent(306,13.5713);
   genWeight_stack_6->SetBinContent(307,9.137112);
   genWeight_stack_6->SetBinContent(308,10.48081);
   genWeight_stack_6->SetBinContent(309,6.449726);
   genWeight_stack_6->SetBinContent(310,10.21207);
   genWeight_stack_6->SetBinContent(311,8.196527);
   genWeight_stack_6->SetBinContent(312,8.196527);
   genWeight_stack_6->SetBinContent(313,6.852834);
   genWeight_stack_6->SetBinContent(314,5.77788);
   genWeight_stack_6->SetBinContent(315,4.568556);
   genWeight_stack_6->SetBinContent(316,4.434187);
   genWeight_stack_6->SetBinContent(317,4.568556);
   genWeight_stack_6->SetBinContent(318,4.031079);
   genWeight_stack_6->SetBinContent(319,4.568556);
   genWeight_stack_6->SetBinContent(320,2.956125);
   genWeight_stack_6->SetBinContent(321,1.88117);
   genWeight_stack_6->SetBinContent(322,3.090494);
   genWeight_stack_6->SetBinContent(323,2.687386);
   genWeight_stack_6->SetBinContent(324,2.687386);
   genWeight_stack_6->SetBinContent(325,1.074954);
   genWeight_stack_6->SetBinContent(326,2.149909);
   genWeight_stack_6->SetBinContent(327,1.746801);
   genWeight_stack_6->SetBinContent(328,0.4031079);
   genWeight_stack_6->SetBinContent(329,0.8062158);
   genWeight_stack_6->SetBinContent(330,1.074954);
   genWeight_stack_6->SetBinContent(331,1.074954);
   genWeight_stack_6->SetBinContent(332,0.8062158);
   genWeight_stack_6->SetBinContent(333,0.2687386);
   genWeight_stack_6->SetBinContent(334,0.2687386);
   genWeight_stack_6->SetBinContent(335,0.1343693);
   genWeight_stack_6->SetBinContent(336,0.4031079);
   genWeight_stack_6->SetBinError(301,756.2819);
   genWeight_stack_6->SetBinError(302,1.330188);
   genWeight_stack_6->SetBinError(303,1.402857);
   genWeight_stack_6->SetBinError(304,1.281801);
   genWeight_stack_6->SetBinError(305,1.186718);
   genWeight_stack_6->SetBinError(306,1.350395);
   genWeight_stack_6->SetBinError(307,1.108038);
   genWeight_stack_6->SetBinError(308,1.186718);
   genWeight_stack_6->SetBinError(309,0.9309378);
   genWeight_stack_6->SetBinError(310,1.171404);
   genWeight_stack_6->SetBinError(311,1.049458);
   genWeight_stack_6->SetBinError(312,1.049458);
   genWeight_stack_6->SetBinError(313,0.9595887);
   genWeight_stack_6->SetBinError(314,0.8811184);
   genWeight_stack_6->SetBinError(315,0.7835009);
   genWeight_stack_6->SetBinError(316,0.7718929);
   genWeight_stack_6->SetBinError(317,0.7835009);
   genWeight_stack_6->SetBinError(318,0.735971);
   genWeight_stack_6->SetBinError(319,0.7835009);
   genWeight_stack_6->SetBinError(320,0.6302479);
   genWeight_stack_6->SetBinError(321,0.5027639);
   genWeight_stack_6->SetBinError(322,0.6444125);
   genWeight_stack_6->SetBinError(323,0.6009178);
   genWeight_stack_6->SetBinError(324,0.6009178);
   genWeight_stack_6->SetBinError(325,0.3800538);
   genWeight_stack_6->SetBinError(326,0.5374772);
   genWeight_stack_6->SetBinError(327,0.4844754);
   genWeight_stack_6->SetBinError(328,0.2327345);
   genWeight_stack_6->SetBinError(329,0.3291362);
   genWeight_stack_6->SetBinError(330,0.3800538);
   genWeight_stack_6->SetBinError(331,0.3800538);
   genWeight_stack_6->SetBinError(332,0.3291362);
   genWeight_stack_6->SetBinError(333,0.1900269);
   genWeight_stack_6->SetBinError(334,0.1900269);
   genWeight_stack_6->SetBinError(335,0.1343693);
   genWeight_stack_6->SetBinError(336,0.2327345);
   genWeight_stack_6->SetEntries(3.168e+07);

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
   genWeight_stack_7->SetBinContent(301,1689100);
   genWeight_stack_7->SetBinError(301,429.1981);
   genWeight_stack_7->SetEntries(1.5488e+07);

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
   genWeight_stack_8->SetBinContent(301,591723);
   genWeight_stack_8->SetBinError(301,379.3564);
   genWeight_stack_8->SetEntries(2433000);

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
   genWeight_stack_9->SetBinContent(221,410.7181);
   genWeight_stack_9->SetBinContent(280,13299.88);
   genWeight_stack_9->SetBinError(221,0.7526881);
   genWeight_stack_9->SetBinError(280,4.283186);
   genWeight_stack_9->SetEntries(9939628);

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
   genWeight_stack_10->SetBinContent(253,1790.231);
   genWeight_stack_10->SetBinError(253,0.8006157);
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
   genWeight_stack_11->SetBinContent(0,0.01641004);
   genWeight_stack_11->SetBinContent(94,0.002735007);
   genWeight_stack_11->SetBinContent(124,0.002735007);
   genWeight_stack_11->SetBinContent(130,0.005470015);
   genWeight_stack_11->SetBinContent(131,0.005470015);
   genWeight_stack_11->SetBinContent(149,0.002735007);
   genWeight_stack_11->SetBinContent(155,0.002735007);
   genWeight_stack_11->SetBinContent(168,0.005470015);
   genWeight_stack_11->SetBinContent(172,0.002735007);
   genWeight_stack_11->SetBinContent(176,0.008205022);
   genWeight_stack_11->SetBinContent(178,0.002735007);
   genWeight_stack_11->SetBinContent(179,0.005470015);
   genWeight_stack_11->SetBinContent(180,0.002735007);
   genWeight_stack_11->SetBinContent(186,0.002735007);
   genWeight_stack_11->SetBinContent(187,0.002735007);
   genWeight_stack_11->SetBinContent(194,0.002735007);
   genWeight_stack_11->SetBinContent(197,0.002735007);
   genWeight_stack_11->SetBinContent(199,0.002735007);
   genWeight_stack_11->SetBinContent(206,0.005470015);
   genWeight_stack_11->SetBinContent(207,0.005470015);
   genWeight_stack_11->SetBinContent(208,0.01367504);
   genWeight_stack_11->SetBinContent(209,0.005470015);
   genWeight_stack_11->SetBinContent(210,0.02188006);
   genWeight_stack_11->SetBinContent(211,0.02735007);
   genWeight_stack_11->SetBinContent(212,0.03008508);
   genWeight_stack_11->SetBinContent(213,0.01094003);
   genWeight_stack_11->SetBinContent(214,0.002735007);
   genWeight_stack_11->SetBinContent(215,0.01367504);
   genWeight_stack_11->SetBinContent(216,0.01367504);
   genWeight_stack_11->SetBinContent(217,0.04923013);
   genWeight_stack_11->SetBinContent(218,0.06290517);
   genWeight_stack_11->SetBinContent(219,0.1011953);
   genWeight_stack_11->SetBinContent(220,2.114161);
   genWeight_stack_11->SetBinContent(221,18.13583);
   genWeight_stack_11->SetBinContent(241,0.002735007);
   genWeight_stack_11->SetBinContent(246,0.01367504);
   genWeight_stack_11->SetBinContent(255,0.0382901);
   genWeight_stack_11->SetBinContent(260,0.04923013);
   genWeight_stack_11->SetBinContent(280,580.8554);
   genWeight_stack_11->SetBinContent(281,68.90851);
   genWeight_stack_11->SetBinContent(282,3.48987);
   genWeight_stack_11->SetBinContent(283,1.236223);
   genWeight_stack_11->SetBinContent(284,0.8013572);
   genWeight_stack_11->SetBinContent(285,0.3911061);
   genWeight_stack_11->SetBinContent(286,0.3883711);
   genWeight_stack_11->SetBinContent(287,0.1941855);
   genWeight_stack_11->SetBinContent(288,0.2844408);
   genWeight_stack_11->SetBinContent(289,0.369226);
   genWeight_stack_11->SetBinContent(290,0.5196514);
   genWeight_stack_11->SetBinContent(291,0.3254659);
   genWeight_stack_11->SetBinContent(292,0.2434157);
   genWeight_stack_11->SetBinContent(293,0.1859805);
   genWeight_stack_11->SetBinContent(294,0.04376012);
   genWeight_stack_11->SetBinContent(295,0.04649513);
   genWeight_stack_11->SetBinContent(298,0.09846027);
   genWeight_stack_11->SetBinContent(299,0.04923013);
   genWeight_stack_11->SetBinContent(302,0.04649513);
   genWeight_stack_11->SetBinContent(303,0.04923013);
   genWeight_stack_11->SetBinContent(304,0.09572526);
   genWeight_stack_11->SetBinContent(307,0.04923013);
   genWeight_stack_11->SetBinContent(310,0.04923013);
   genWeight_stack_11->SetBinContent(314,0.09572526);
   genWeight_stack_11->SetBinContent(315,0.09846027);
   genWeight_stack_11->SetBinContent(321,0.04649513);
   genWeight_stack_11->SetBinContent(322,0.04649513);
   genWeight_stack_11->SetBinContent(323,0.09846027);
   genWeight_stack_11->SetBinContent(325,0.09025525);
   genWeight_stack_11->SetBinContent(326,0.05196514);
   genWeight_stack_11->SetBinContent(329,0.04649513);
   genWeight_stack_11->SetBinContent(330,0.05196514);
   genWeight_stack_11->SetBinContent(333,0.09299025);
   genWeight_stack_11->SetBinContent(337,0.05196514);
   genWeight_stack_11->SetBinContent(339,0.04923013);
   genWeight_stack_11->SetBinContent(346,0.04923013);
   genWeight_stack_11->SetBinContent(352,0.04649513);
   genWeight_stack_11->SetBinContent(357,0.05196514);
   genWeight_stack_11->SetBinContent(361,0.04923013);
   genWeight_stack_11->SetBinContent(370,0.04649513);
   genWeight_stack_11->SetBinContent(371,0.04649513);
   genWeight_stack_11->SetBinContent(377,0.04649513);
   genWeight_stack_11->SetBinContent(386,0.09846027);
   genWeight_stack_11->SetBinContent(398,0.04923013);
   genWeight_stack_11->SetBinContent(407,0.09846027);
   genWeight_stack_11->SetBinContent(410,0.05196514);
   genWeight_stack_11->SetBinContent(485,0.04923013);
   genWeight_stack_11->SetBinContent(501,0.5333265);
   genWeight_stack_11->SetBinError(0,0.006699373);
   genWeight_stack_11->SetBinError(94,0.002735007);
   genWeight_stack_11->SetBinError(124,0.002735007);
   genWeight_stack_11->SetBinError(130,0.003867885);
   genWeight_stack_11->SetBinError(131,0.003867885);
   genWeight_stack_11->SetBinError(149,0.002735007);
   genWeight_stack_11->SetBinError(155,0.002735007);
   genWeight_stack_11->SetBinError(168,0.003867885);
   genWeight_stack_11->SetBinError(172,0.002735007);
   genWeight_stack_11->SetBinError(176,0.004737172);
   genWeight_stack_11->SetBinError(178,0.002735007);
   genWeight_stack_11->SetBinError(179,0.003867885);
   genWeight_stack_11->SetBinError(180,0.002735007);
   genWeight_stack_11->SetBinError(186,0.002735007);
   genWeight_stack_11->SetBinError(187,0.002735007);
   genWeight_stack_11->SetBinError(194,0.002735007);
   genWeight_stack_11->SetBinError(197,0.002735007);
   genWeight_stack_11->SetBinError(199,0.002735007);
   genWeight_stack_11->SetBinError(206,0.003867885);
   genWeight_stack_11->SetBinError(207,0.003867885);
   genWeight_stack_11->SetBinError(208,0.006115663);
   genWeight_stack_11->SetBinError(209,0.003867885);
   genWeight_stack_11->SetBinError(210,0.007735769);
   genWeight_stack_11->SetBinError(211,0.008648853);
   genWeight_stack_11->SetBinError(212,0.009070994);
   genWeight_stack_11->SetBinError(213,0.005470015);
   genWeight_stack_11->SetBinError(214,0.002735007);
   genWeight_stack_11->SetBinError(215,0.006115663);
   genWeight_stack_11->SetBinError(216,0.006115663);
   genWeight_stack_11->SetBinError(217,0.01160365);
   genWeight_stack_11->SetBinError(218,0.01311663);
   genWeight_stack_11->SetBinError(219,0.0166364);
   genWeight_stack_11->SetBinError(220,0.07604108);
   genWeight_stack_11->SetBinError(221,0.2227143);
   genWeight_stack_11->SetBinError(241,0.002735007);
   genWeight_stack_11->SetBinError(246,0.006115663);
   genWeight_stack_11->SetBinError(255,0.01023346);
   genWeight_stack_11->SetBinError(260,0.01160365);
   genWeight_stack_11->SetBinError(280,1.260414);
   genWeight_stack_11->SetBinError(281,0.4341259);
   genWeight_stack_11->SetBinError(282,0.09769759);
   genWeight_stack_11->SetBinError(283,0.05814706);
   genWeight_stack_11->SetBinError(284,0.04681579);
   genWeight_stack_11->SetBinError(285,0.03270593);
   genWeight_stack_11->SetBinError(286,0.03259138);
   genWeight_stack_11->SetBinError(287,0.02304558);
   genWeight_stack_11->SetBinError(288,0.02789171);
   genWeight_stack_11->SetBinError(289,0.03177791);
   genWeight_stack_11->SetBinError(290,0.03769948);
   genWeight_stack_11->SetBinError(291,0.02983541);
   genWeight_stack_11->SetBinError(292,0.02580201);
   genWeight_stack_11->SetBinError(293,0.02255345);
   genWeight_stack_11->SetBinError(294,0.01094003);
   genWeight_stack_11->SetBinError(295,0.01127672);
   genWeight_stack_11->SetBinError(298,0.01641004);
   genWeight_stack_11->SetBinError(299,0.01160365);
   genWeight_stack_11->SetBinError(302,0.01127672);
   genWeight_stack_11->SetBinError(303,0.01160365);
   genWeight_stack_11->SetBinError(304,0.01618052);
   genWeight_stack_11->SetBinError(307,0.01160365);
   genWeight_stack_11->SetBinError(310,0.01160365);
   genWeight_stack_11->SetBinError(314,0.01618052);
   genWeight_stack_11->SetBinError(315,0.01641004);
   genWeight_stack_11->SetBinError(321,0.01127672);
   genWeight_stack_11->SetBinError(322,0.01127672);
   genWeight_stack_11->SetBinError(323,0.01641004);
   genWeight_stack_11->SetBinError(325,0.01571142);
   genWeight_stack_11->SetBinError(326,0.01192162);
   genWeight_stack_11->SetBinError(329,0.01127672);
   genWeight_stack_11->SetBinError(330,0.01192162);
   genWeight_stack_11->SetBinError(333,0.0159477);
   genWeight_stack_11->SetBinError(337,0.01192162);
   genWeight_stack_11->SetBinError(339,0.01160365);
   genWeight_stack_11->SetBinError(346,0.01160365);
   genWeight_stack_11->SetBinError(352,0.01127672);
   genWeight_stack_11->SetBinError(357,0.01192162);
   genWeight_stack_11->SetBinError(361,0.01160365);
   genWeight_stack_11->SetBinError(370,0.01127672);
   genWeight_stack_11->SetBinError(371,0.01127672);
   genWeight_stack_11->SetBinError(377,0.01127672);
   genWeight_stack_11->SetBinError(386,0.01641004);
   genWeight_stack_11->SetBinError(398,0.01160365);
   genWeight_stack_11->SetBinError(407,0.01641004);
   genWeight_stack_11->SetBinError(410,0.01192162);
   genWeight_stack_11->SetBinError(485,0.01160365);
   genWeight_stack_11->SetBinError(501,0.0381923);
   genWeight_stack_11->SetEntries(249197);

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
   genWeight_stack_12->SetBinContent(251,0.04715909);
   genWeight_stack_12->SetBinContent(252,0.04787362);
   genWeight_stack_12->SetBinContent(253,88.36864);
   genWeight_stack_12->SetBinContent(261,0.02357955);
   genWeight_stack_12->SetBinContent(267,0.02357955);
   genWeight_stack_12->SetBinContent(271,0.02357955);
   genWeight_stack_12->SetBinContent(275,0.02357955);
   genWeight_stack_12->SetBinContent(294,0.02393681);
   genWeight_stack_12->SetBinContent(296,0.02357955);
   genWeight_stack_12->SetBinContent(350,0.02393681);
   genWeight_stack_12->SetBinContent(501,0.3083204);
   genWeight_stack_12->SetBinError(251,0.004104672);
   genWeight_stack_12->SetBinError(252,0.004135651);
   genWeight_stack_12->SetBinError(253,0.1776826);
   genWeight_stack_12->SetBinError(261,0.002902441);
   genWeight_stack_12->SetBinError(267,0.002902441);
   genWeight_stack_12->SetBinError(271,0.002902441);
   genWeight_stack_12->SetBinError(275,0.002902441);
   genWeight_stack_12->SetBinError(294,0.002924347);
   genWeight_stack_12->SetBinError(296,0.002902441);
   genWeight_stack_12->SetBinError(350,0.002924347);
   genWeight_stack_12->SetBinError(501,0.01049535);
   genWeight_stack_12->SetEntries(248940);

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
   
   TH1D *genWeight__1 = new TH1D("genWeight__1","",200,-2,2);
   genWeight__1->SetEntries(199);

   ci = TColor::GetColor("#000099");
   genWeight__1->SetLineColor(ci);
   genWeight__1->SetLineWidth(2);
   genWeight__1->SetMarkerStyle(20);
   genWeight__1->SetMarkerSize(1.2);
   genWeight__1->GetXaxis()->SetRange(1,200);
   genWeight__1->GetXaxis()->SetLabelFont(42);
   genWeight__1->GetXaxis()->SetTitleOffset(1);
   genWeight__1->GetXaxis()->SetTitleFont(42);
   genWeight__1->GetYaxis()->SetLabelFont(42);
   genWeight__1->GetYaxis()->SetTitleFont(42);
   genWeight__1->GetZaxis()->SetLabelFont(42);
   genWeight__1->GetZaxis()->SetTitleOffset(1);
   genWeight__1->GetZaxis()->SetTitleFont(42);
   genWeight__1->Draw("same E");
   
   Double_t Graph_from_genWeight_fx1001[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_genWeight_fy1001[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0, 0, 0,
   0.005470015, 0.005470015, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.002735007, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.005470015, 0, 0, 0, 0.002735007, 0, 0, 0, 0.008205022, 0,
   0.002735007, 0.005470015, 0.002735007, 0, 0, 0, 0, 0, 0.002735007, 0.002735007, 0, 0, 0, 0, 0, 0,
   0.002735007, 0, 0, 0.002735007, 0, 0.002735007, 0, 0, 0, 0, 0, 0, 0.005470015, 0.005470015, 0.01367504, 0.005470015,
   0.02188006, 0.02735007, 0.03008508, 0.01094003, 0.002735007, 0.01367504, 0.01367504, 0.04923013, 0.06290517, 0.1011953, 2.114161, 428.854, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007,
   0, 0, 0, 0, 0.01367504, 0, 0, 0, 0, 0.04715909, 0.04787362, 1878.6, 0, 0.0382901, 0, 0,
   0, 0, 0.04923013, 0.02357955, 0, 0, 0, 0, 0, 0.02357955, 0, 0, 0, 0.02357955, 0, 0,
   0, 0.02357955, 0, 0, 0, 0, 13880.73, 68.90851, 3.48987, 1.236223, 0.8013572, 0.3911061, 0.3883711, 0.1941855, 0.2844408, 0.369226,
   0.5196514, 0.3254659, 0.2434157, 0.1859805, 0.06769693, 0.04649513, 0.02357955, 0, 0.09846027, 0.04923013, 0, 1.079289e+12, 13.21469, 14.69548, 12.32333, 10.48081,
   13.5713, 9.186342, 10.48081, 6.449726, 10.2613, 8.196527, 8.196527, 6.852834, 5.873605, 4.667016, 4.434187, 4.568556, 4.031079, 4.568556, 2.956125, 1.927665,
   3.136989, 2.785846, 2.687386, 1.16521, 2.201874, 1.746801, 0.4031079, 0.8527109, 1.12692, 1.074954, 0.8062158, 0.3617289, 0.2687386, 0.1343693, 0.4031079, 0.05196514,
   0, 0.04923013, 0, 0, 0, 0, 0, 0, 0.04923013, 0, 0, 0, 0.02393681, 0, 0.04649513, 0,
   0, 0, 0, 0.05196514, 0, 0, 0, 0.04923013, 0, 0, 0, 0, 0, 0, 0, 0,
   0.04649513, 0.04649513, 0, 0, 0, 0, 0, 0.04649513, 0, 0, 0, 0, 0, 0, 0, 0,
   0.09846027, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.04923013, 0, 0, 0,
   0, 0, 0, 0, 0, 0.09846027, 0, 0, 0.05196514, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.04923013, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   Double_t Graph_from_genWeight_fex1001[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_genWeight_fey1001[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0, 0, 0,
   0.003867885, 0.003867885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.002735007, 0, 0, 0, 0, 0, 0.002735007, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.003867885, 0, 0, 0, 0.002735007, 0, 0, 0, 0.004737172, 0,
   0.002735007, 0.003867885, 0.002735007, 0, 0, 0, 0, 0, 0.002735007, 0.002735007, 0, 0, 0, 0, 0, 0,
   0.002735007, 0, 0, 0.002735007, 0, 0.002735007, 0, 0, 0, 0, 0, 0, 0.003867885, 0.003867885, 0.006115663, 0.003867885,
   0.007735769, 0.008648853, 0.009070994, 0.005470015, 0.002735007, 0.006115663, 0.006115663, 0.01160365, 0.01311663, 0.0166364, 0.07604108, 0.7849465, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.002735007,
   0, 0, 0, 0, 0.006115663, 0, 0, 0, 0, 0.004104672, 0.004135651, 0.8200954, 0, 0.01023346, 0, 0,
   0, 0, 0.01160365, 0.002902441, 0, 0, 0, 0, 0, 0.002902441, 0, 0, 0, 0.002902441, 0, 0,
   0, 0.002902441, 0, 0, 0, 0, 4.464788, 0.4341259, 0.09769759, 0.05814706, 0.04681579, 0.03270593, 0.03259138, 0.02304558, 0.02789171, 0.03177791,
   0.03769948, 0.02983541, 0.02580201, 0.02255345, 0.01132414, 0.01127672, 0.002902441, 0, 0.01641004, 0.01160365, 0, 1.442537e+08, 1.330236, 1.402905, 1.281904, 1.186718,
   1.350395, 1.108098, 1.186718, 0.9309378, 1.171462, 1.049458, 1.049458, 0.9595887, 0.881267, 0.7836728, 0.7718929, 0.7835009, 0.735971, 0.7835009, 0.6302479, 0.5028903,
   0.6445112, 0.6011418, 0.6009178, 0.3803784, 0.5376094, 0.4844754, 0.2327345, 0.3293293, 0.3802407, 0.3800538, 0.3291362, 0.1906949, 0.1900269, 0.1343693, 0.2327345, 0.01192162,
   0, 0.01160365, 0, 0, 0, 0, 0, 0, 0.01160365, 0, 0, 0, 0.002924347, 0, 0.01127672, 0,
   0, 0, 0, 0.01192162, 0, 0, 0, 0.01160365, 0, 0, 0, 0, 0, 0, 0, 0,
   0.01127672, 0.01127672, 0, 0, 0, 0, 0, 0.01127672, 0, 0, 0, 0, 0, 0, 0, 0,
   0.01641004, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.01160365, 0, 0, 0,
   0, 0, 0, 0, 0, 0.01641004, 0, 0, 0.01192162, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.01160365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_genWeight_fx1001,Graph_from_genWeight_fy1001,Graph_from_genWeight_fex1001,Graph_from_genWeight_fey1001);
   gre->SetName("Graph_from_genWeight");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_genWeight1001 = new TH1F("Graph_Graph_from_genWeight1001","",500,-6,6);
   Graph_Graph_from_genWeight1001->SetMinimum(0);
   Graph_Graph_from_genWeight1001->SetMaximum(1.187376e+12);
   Graph_Graph_from_genWeight1001->SetDirectory(nullptr);
   Graph_Graph_from_genWeight1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_genWeight1001->SetLineColor(ci);
   Graph_Graph_from_genWeight1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_genWeight1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_genWeight1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_genWeight1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_genWeight1001);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("genWeight","Data (JetHT, 2016)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   genWeight__16->cd();
  
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
   
   TH1D *data_mc_ratio__2 = new TH1D("data_mc_ratio__2","",200,-2,2);
   data_mc_ratio__2->SetMinimum(0.4);
   data_mc_ratio__2->SetMaximum(1.6);
   data_mc_ratio__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__2->SetLineColor(ci);
   data_mc_ratio__2->SetLineWidth(2);
   data_mc_ratio__2->SetMarkerStyle(20);
   data_mc_ratio__2->SetMarkerSize(1.2);
   data_mc_ratio__2->GetXaxis()->SetTitle("Generator Weight");
   data_mc_ratio__2->GetXaxis()->SetRange(1,200);
   data_mc_ratio__2->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__2->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__2->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__2->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__2->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__2->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__2->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__2->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__2->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__2->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1002[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1002[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1002[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1002[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
   0.7071068, 0.7071068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0.7071068, 0, 0, 0, 1, 0, 0, 0, 0.5773503, 0,
   1, 0.7071068, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0,
   1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0.7071068, 0.7071068, 0.4472136, 0.7071068,
   0.3535534, 0.3162278, 0.3015113, 0.5, 1, 0.4472136, 0.4472136, 0.2357023, 0.2085144, 0.164399, 0.0359675, 0.001830335, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
   0, 0, 0, 0, 0.4472136, 0, 0, 0, 0, 0.08703883, 0.08638684, 0.0004365461, 0, 0.2672612, 0, 0,
   0, 0, 0.2357023, 0.1230915, 0, 0, 0, 0, 0, 0.1230915, 0, 0, 0, 0.1230915, 0, 0,
   0, 0.1230915, 0, 0, 0, 0, 0.0003216536, 0.006300033, 0.02799463, 0.04703604, 0.05842062, 0.0836242, 0.08391814, 0.1186782, 0.09805807, 0.0860663,
   0.07254763, 0.09166985, 0.1059998, 0.1212678, 0.1672769, 0.2425356, 0.1230915, 0, 0.1666667, 0.2357023, 0, 0.0001336563, 0.1006635, 0.09546502, 0.1040225, 0.1132277,
   0.09950372, 0.1206245, 0.1132277, 0.1443376, 0.1141631, 0.1280369, 0.1280369, 0.140028, 0.1500385, 0.1679173, 0.1740777, 0.1714986, 0.1825742, 0.1714986, 0.2132007, 0.2608805,
   0.2054554, 0.2157843, 0.2236068, 0.3264463, 0.2441599, 0.2773501, 0.5773503, 0.3862145, 0.337416, 0.3535534, 0.4082483, 0.5271764, 0.7071068, 1, 0.5773503, 0.2294157,
   0, 0.2357023, 0, 0, 0, 0, 0, 0, 0.2357023, 0, 0, 0, 0.1221694, 0, 0.2425356, 0,
   0, 0, 0, 0.2294157, 0, 0, 0, 0.2357023, 0, 0, 0, 0, 0, 0, 0, 0,
   0.2425356, 0.2425356, 0, 0, 0, 0, 0, 0.2425356, 0, 0, 0, 0, 0, 0, 0, 0,
   0.1666667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.2357023, 0, 0, 0,
   0, 0, 0, 0, 0, 0.1666667, 0, 0, 0.2294157, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0.2357023, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1002,Graph_from_mc_statistical_error_fy1002,Graph_from_mc_statistical_error_fex1002,Graph_from_mc_statistical_error_fey1002);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1002 = new TH1F("Graph_Graph_from_mc_statistical_error1002","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1002->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1002->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1002->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1002->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1002);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   genWeight__16->cd();
   genWeight__16->Modified();
   genWeight__16->cd();
   genWeight__16->SetSelected(genWeight__16);
}
