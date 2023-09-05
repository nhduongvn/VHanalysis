#ifdef __CLING__
#pragma cling optimize(0)
#endif
void l1preW__18()
{
//=========Macro generated from canvas: l1preW__18/l1preW__18
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *l1preW__18 = new TCanvas("l1preW__18", "l1preW__18",0,0,600,600);
   l1preW__18->SetHighLightColor(2);
   l1preW__18->Range(0,0,1,1);
   l1preW__18->SetFillColor(0);
   l1preW__18->SetFillStyle(4000);
   l1preW__18->SetBorderMode(0);
   l1preW__18->SetBorderSize(2);
   l1preW__18->SetFrameFillStyle(1000);
   l1preW__18->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-633493.3,2.209678,6.328597e+08);
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
   st->SetMaximum(5.695104e+08);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",500,-5,5);
   st_stack_9->SetMinimum(0.01);
   st_stack_9->SetMaximum(5.695104e+08);
   st_stack_9->SetDirectory(nullptr);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->SetLineWidth(0);
   st_stack_9->GetXaxis()->SetRange(151,350);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/0.02");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetLabelSize(0.05);
   st_stack_9->GetYaxis()->SetTitleSize(0.057);
   st_stack_9->GetYaxis()->SetTitleOffset(1.2);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *l1preW_stack_1 = new TH1D("l1preW_stack_1","",500,-5,5);
   l1preW_stack_1->SetBinContent(252,42.66332);
   l1preW_stack_1->SetBinContent(253,774.6349);
   l1preW_stack_1->SetBinContent(254,2376.499);
   l1preW_stack_1->SetBinContent(255,6986.743);
   l1preW_stack_1->SetBinContent(256,13126.61);
   l1preW_stack_1->SetBinContent(257,22133.18);
   l1preW_stack_1->SetBinContent(258,36473.51);
   l1preW_stack_1->SetBinContent(259,51207.34);
   l1preW_stack_1->SetBinContent(260,356359.3);
   l1preW_stack_1->SetBinContent(261,57521.41);
   l1preW_stack_1->SetBinContent(262,103750.9);
   l1preW_stack_1->SetBinContent(263,270727.9);
   l1preW_stack_1->SetBinContent(264,640193.7);
   l1preW_stack_1->SetBinContent(265,216414);
   l1preW_stack_1->SetBinContent(266,1158332);
   l1preW_stack_1->SetBinContent(267,407822.3);
   l1preW_stack_1->SetBinContent(268,1038563);
   l1preW_stack_1->SetBinContent(269,3472119);
   l1preW_stack_1->SetBinContent(270,596147.6);
   l1preW_stack_1->SetBinContent(271,2797048);
   l1preW_stack_1->SetBinContent(272,3782298);
   l1preW_stack_1->SetBinContent(273,503170.9);
   l1preW_stack_1->SetBinContent(274,741250.9);
   l1preW_stack_1->SetBinContent(275,421870.5);
   l1preW_stack_1->SetBinContent(276,1904247);
   l1preW_stack_1->SetBinContent(277,1421275);
   l1preW_stack_1->SetBinContent(278,332976.2);
   l1preW_stack_1->SetBinContent(279,756624.4);
   l1preW_stack_1->SetBinContent(280,1081464);
   l1preW_stack_1->SetBinContent(281,3226197);
   l1preW_stack_1->SetBinContent(282,3355581);
   l1preW_stack_1->SetBinContent(283,7201812);
   l1preW_stack_1->SetBinContent(284,996014.3);
   l1preW_stack_1->SetBinContent(285,842289.1);
   l1preW_stack_1->SetBinContent(286,1619830);
   l1preW_stack_1->SetBinContent(287,1829769);
   l1preW_stack_1->SetBinContent(288,2284407);
   l1preW_stack_1->SetBinContent(289,5385023);
   l1preW_stack_1->SetBinContent(290,1098797);
   l1preW_stack_1->SetBinContent(291,8052971);
   l1preW_stack_1->SetBinContent(292,3262842);
   l1preW_stack_1->SetBinContent(293,2437136);
   l1preW_stack_1->SetBinContent(294,3704501);
   l1preW_stack_1->SetBinContent(295,7234010);
   l1preW_stack_1->SetBinContent(296,6613178);
   l1preW_stack_1->SetBinContent(297,1.576069e+07);
   l1preW_stack_1->SetBinContent(298,1.157804e+07);
   l1preW_stack_1->SetBinContent(299,3.843362e+07);
   l1preW_stack_1->SetBinContent(300,8.522683e+07);
   l1preW_stack_1->SetBinContent(301,2.562785e+08);
   l1preW_stack_1->SetBinError(252,19.518);
   l1preW_stack_1->SetBinError(253,85.89976);
   l1preW_stack_1->SetBinError(254,150.6305);
   l1preW_stack_1->SetBinError(255,257.6765);
   l1preW_stack_1->SetBinError(256,354.0053);
   l1preW_stack_1->SetBinError(257,462.6547);
   l1preW_stack_1->SetBinError(258,589.9931);
   l1preW_stack_1->SetBinError(259,700.6576);
   l1preW_stack_1->SetBinError(260,1858.565);
   l1preW_stack_1->SetBinError(261,743.4122);
   l1preW_stack_1->SetBinError(262,997.9966);
   l1preW_stack_1->SetBinError(263,1615.574);
   l1preW_stack_1->SetBinError(264,2483.504);
   l1preW_stack_1->SetBinError(265,1441.128);
   l1preW_stack_1->SetBinError(266,3335.14);
   l1preW_stack_1->SetBinError(267,1975.56);
   l1preW_stack_1->SetBinError(268,3152.267);
   l1preW_stack_1->SetBinError(269,5767.346);
   l1preW_stack_1->SetBinError(270,2392.179);
   l1preW_stack_1->SetBinError(271,5190.781);
   l1preW_stack_1->SetBinError(272,6022.902);
   l1preW_stack_1->SetBinError(273,2200.685);
   l1preW_stack_1->SetBinError(274,2668.132);
   l1preW_stack_1->SetBinError(275,2021.956);
   l1preW_stack_1->SetBinError(276,4297.228);
   l1preW_stack_1->SetBinError(277,3698.888);
   l1preW_stack_1->SetBinError(278,1794.645);
   l1preW_stack_1->SetBinError(279,2686.873);
   l1preW_stack_1->SetBinError(280,3227.284);
   l1preW_stack_1->SetBinError(281,5583.221);
   l1preW_stack_1->SetBinError(282,5673.705);
   l1preW_stack_1->SetBinError(283,8247.874);
   l1preW_stack_1->SetBinError(284,3088.884);
   l1preW_stack_1->SetBinError(285,2840.082);
   l1preW_stack_1->SetBinError(286,3939.653);
   l1preW_stack_1->SetBinError(287,4184.784);
   l1preW_stack_1->SetBinError(288,4686.815);
   l1preW_stack_1->SetBinError(289,7192.086);
   l1preW_stack_1->SetBinError(290,3229.998);
   l1preW_stack_1->SetBinError(291,8720.045);
   l1preW_stack_1->SetBinError(292,5578.936);
   l1preW_stack_1->SetBinError(293,4812.862);
   l1preW_stack_1->SetBinError(294,5952.123);
   l1preW_stack_1->SetBinError(295,8301.335);
   l1preW_stack_1->SetBinError(296,7889.087);
   l1preW_stack_1->SetBinError(297,12168.07);
   l1preW_stack_1->SetBinError(298,10484.38);
   l1preW_stack_1->SetBinError(299,18978.37);
   l1preW_stack_1->SetBinError(300,28047.62);
   l1preW_stack_1->SetBinError(301,48684.68);
   l1preW_stack_1->SetEntries(6.636865e+07);

   ci = TColor::GetColor("#ff6600");
   l1preW_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_1->SetLineColor(ci);
   l1preW_stack_1->GetXaxis()->SetRange(1,500);
   l1preW_stack_1->GetXaxis()->SetLabelFont(42);
   l1preW_stack_1->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_1->GetXaxis()->SetTitleFont(42);
   l1preW_stack_1->GetYaxis()->SetLabelFont(42);
   l1preW_stack_1->GetYaxis()->SetTitleFont(42);
   l1preW_stack_1->GetZaxis()->SetLabelFont(42);
   l1preW_stack_1->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_1,"");
   
   TH1D *l1preW_stack_2 = new TH1D("l1preW_stack_2","",500,-5,5);

   ci = TColor::GetColor("#660066");
   l1preW_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_2->SetLineColor(ci);
   l1preW_stack_2->GetXaxis()->SetRange(1,500);
   l1preW_stack_2->GetXaxis()->SetLabelFont(42);
   l1preW_stack_2->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_2->GetXaxis()->SetTitleFont(42);
   l1preW_stack_2->GetYaxis()->SetLabelFont(42);
   l1preW_stack_2->GetYaxis()->SetTitleFont(42);
   l1preW_stack_2->GetZaxis()->SetLabelFont(42);
   l1preW_stack_2->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_2,"");
   
   TH1D *l1preW_stack_3 = new TH1D("l1preW_stack_3","",500,-5,5);

   ci = TColor::GetColor("#cc00cc");
   l1preW_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_3->SetLineColor(ci);
   l1preW_stack_3->GetXaxis()->SetRange(1,500);
   l1preW_stack_3->GetXaxis()->SetLabelFont(42);
   l1preW_stack_3->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_3->GetXaxis()->SetTitleFont(42);
   l1preW_stack_3->GetYaxis()->SetLabelFont(42);
   l1preW_stack_3->GetYaxis()->SetTitleFont(42);
   l1preW_stack_3->GetZaxis()->SetLabelFont(42);
   l1preW_stack_3->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_3,"");
   
   TH1D *l1preW_stack_4 = new TH1D("l1preW_stack_4","",500,-5,5);

   ci = TColor::GetColor("#00cccc");
   l1preW_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_4->SetLineColor(ci);
   l1preW_stack_4->GetXaxis()->SetRange(1,500);
   l1preW_stack_4->GetXaxis()->SetLabelFont(42);
   l1preW_stack_4->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_4->GetXaxis()->SetTitleFont(42);
   l1preW_stack_4->GetYaxis()->SetLabelFont(42);
   l1preW_stack_4->GetYaxis()->SetTitleFont(42);
   l1preW_stack_4->GetZaxis()->SetLabelFont(42);
   l1preW_stack_4->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_4,"");
   
   TH1D *l1preW_stack_5 = new TH1D("l1preW_stack_5","",500,-5,5);

   ci = TColor::GetColor("#ff99cc");
   l1preW_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_5->SetLineColor(ci);
   l1preW_stack_5->GetXaxis()->SetRange(1,500);
   l1preW_stack_5->GetXaxis()->SetLabelFont(42);
   l1preW_stack_5->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_5->GetXaxis()->SetTitleFont(42);
   l1preW_stack_5->GetYaxis()->SetLabelFont(42);
   l1preW_stack_5->GetYaxis()->SetTitleFont(42);
   l1preW_stack_5->GetZaxis()->SetLabelFont(42);
   l1preW_stack_5->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_5,"");
   
   TH1D *l1preW_stack_6 = new TH1D("l1preW_stack_6","",500,-5,5);

   ci = TColor::GetColor("#9933ff");
   l1preW_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_6->SetLineColor(ci);
   l1preW_stack_6->GetXaxis()->SetRange(1,500);
   l1preW_stack_6->GetXaxis()->SetLabelFont(42);
   l1preW_stack_6->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_6->GetXaxis()->SetTitleFont(42);
   l1preW_stack_6->GetYaxis()->SetLabelFont(42);
   l1preW_stack_6->GetYaxis()->SetTitleFont(42);
   l1preW_stack_6->GetZaxis()->SetLabelFont(42);
   l1preW_stack_6->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_6,"");
   
   TH1D *l1preW_stack_7 = new TH1D("l1preW_stack_7","",500,-5,5);

   ci = TColor::GetColor("#3399ff");
   l1preW_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_7->SetLineColor(ci);
   l1preW_stack_7->GetXaxis()->SetRange(1,500);
   l1preW_stack_7->GetXaxis()->SetLabelFont(42);
   l1preW_stack_7->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_7->GetXaxis()->SetTitleFont(42);
   l1preW_stack_7->GetYaxis()->SetLabelFont(42);
   l1preW_stack_7->GetYaxis()->SetTitleFont(42);
   l1preW_stack_7->GetZaxis()->SetLabelFont(42);
   l1preW_stack_7->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_7->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_7,"");
   
   TH1D *l1preW_stack_8 = new TH1D("l1preW_stack_8","",500,-5,5);

   ci = TColor::GetColor("#33ff99");
   l1preW_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_8->SetLineColor(ci);
   l1preW_stack_8->GetXaxis()->SetRange(1,500);
   l1preW_stack_8->GetXaxis()->SetLabelFont(42);
   l1preW_stack_8->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_8->GetXaxis()->SetTitleFont(42);
   l1preW_stack_8->GetYaxis()->SetLabelFont(42);
   l1preW_stack_8->GetYaxis()->SetTitleFont(42);
   l1preW_stack_8->GetZaxis()->SetLabelFont(42);
   l1preW_stack_8->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_8->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_8,"");
   
   TH1D *l1preW_stack_9 = new TH1D("l1preW_stack_9","",500,-5,5);

   ci = TColor::GetColor("#cccc00");
   l1preW_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_9->SetLineColor(ci);
   l1preW_stack_9->GetXaxis()->SetRange(1,500);
   l1preW_stack_9->GetXaxis()->SetLabelFont(42);
   l1preW_stack_9->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_9->GetXaxis()->SetTitleFont(42);
   l1preW_stack_9->GetYaxis()->SetLabelFont(42);
   l1preW_stack_9->GetYaxis()->SetTitleFont(42);
   l1preW_stack_9->GetZaxis()->SetLabelFont(42);
   l1preW_stack_9->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_9->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_9,"");
   
   TH1D *l1preW_stack_10 = new TH1D("l1preW_stack_10","",500,-5,5);
   l1preW_stack_10->SetBinContent(254,0.0005961446);
   l1preW_stack_10->SetBinContent(255,0.001788434);
   l1preW_stack_10->SetBinContent(256,0.004769157);
   l1preW_stack_10->SetBinContent(257,0.005961446);
   l1preW_stack_10->SetBinContent(258,0.006557591);
   l1preW_stack_10->SetBinContent(259,0.01371133);
   l1preW_stack_10->SetBinContent(260,0.0774988);
   l1preW_stack_10->SetBinContent(261,0.05246073);
   l1preW_stack_10->SetBinContent(262,0.1013446);
   l1preW_stack_10->SetBinContent(263,0.1585745);
   l1preW_stack_10->SetBinContent(264,0.4292241);
   l1preW_stack_10->SetBinContent(265,0.1210174);
   l1preW_stack_10->SetBinContent(266,0.4989731);
   l1preW_stack_10->SetBinContent(267,0.131748);
   l1preW_stack_10->SetBinContent(268,0.1901701);
   l1preW_stack_10->SetBinContent(269,0.469762);
   l1preW_stack_10->SetBinContent(270,0.338014);
   l1preW_stack_10->SetBinContent(271,0.9425047);
   l1preW_stack_10->SetBinContent(272,1.520169);
   l1preW_stack_10->SetBinContent(273,1.316287);
   l1preW_stack_10->SetBinContent(274,0.7398155);
   l1preW_stack_10->SetBinContent(275,0.4041861);
   l1preW_stack_10->SetBinContent(276,1.263827);
   l1preW_stack_10->SetBinContent(277,1.716897);
   l1preW_stack_10->SetBinContent(278,0.6957008);
   l1preW_stack_10->SetBinContent(279,2.351791);
   l1preW_stack_10->SetBinContent(280,1.647148);
   l1preW_stack_10->SetBinContent(281,3.008742);
   l1preW_stack_10->SetBinContent(282,2.863283);
   l1preW_stack_10->SetBinContent(283,2.504404);
   l1preW_stack_10->SetBinContent(284,1.601245);
   l1preW_stack_10->SetBinContent(285,3.220373);
   l1preW_stack_10->SetBinContent(286,4.388221);
   l1preW_stack_10->SetBinContent(287,4.041265);
   l1preW_stack_10->SetBinContent(288,5.429089);
   l1preW_stack_10->SetBinContent(289,8.839633);
   l1preW_stack_10->SetBinContent(290,5.889909);
   l1preW_stack_10->SetBinContent(291,8.812806);
   l1preW_stack_10->SetBinContent(292,11.03464);
   l1preW_stack_10->SetBinContent(293,14.58766);
   l1preW_stack_10->SetBinContent(294,16.9776);
   l1preW_stack_10->SetBinContent(295,27.4465);
   l1preW_stack_10->SetBinContent(296,26.80445);
   l1preW_stack_10->SetBinContent(297,41.66157);
   l1preW_stack_10->SetBinContent(298,99.41666);
   l1preW_stack_10->SetBinContent(299,301.09);
   l1preW_stack_10->SetBinContent(300,1146.062);
   l1preW_stack_10->SetBinContent(301,1229.843);
   l1preW_stack_10->SetBinError(254,0.0005961446);
   l1preW_stack_10->SetBinError(255,0.001032553);
   l1preW_stack_10->SetBinError(256,0.001686152);
   l1preW_stack_10->SetBinError(257,0.001885175);
   l1preW_stack_10->SetBinError(258,0.001977188);
   l1preW_stack_10->SetBinError(259,0.002859009);
   l1preW_stack_10->SetBinError(260,0.006797095);
   l1preW_stack_10->SetBinError(261,0.005592332);
   l1preW_stack_10->SetBinError(262,0.007772775);
   l1preW_stack_10->SetBinError(263,0.009722825);
   l1preW_stack_10->SetBinError(264,0.01599624);
   l1preW_stack_10->SetBinError(265,0.008493754);
   l1preW_stack_10->SetBinError(266,0.01724703);
   l1preW_stack_10->SetBinError(267,0.008862327);
   l1preW_stack_10->SetBinError(268,0.01064748);
   l1preW_stack_10->SetBinError(269,0.01673458);
   l1preW_stack_10->SetBinError(270,0.01419525);
   l1preW_stack_10->SetBinError(271,0.02370378);
   l1preW_stack_10->SetBinError(272,0.03010383);
   l1preW_stack_10->SetBinError(273,0.02801246);
   l1preW_stack_10->SetBinError(274,0.02100088);
   l1preW_stack_10->SetBinError(275,0.01552267);
   l1preW_stack_10->SetBinError(276,0.02744856);
   l1preW_stack_10->SetBinError(277,0.03199248);
   l1preW_stack_10->SetBinError(278,0.02036512);
   l1preW_stack_10->SetBinError(279,0.03744339);
   l1preW_stack_10->SetBinError(280,0.03133589);
   l1preW_stack_10->SetBinError(281,0.04235145);
   l1preW_stack_10->SetBinError(282,0.04131502);
   l1preW_stack_10->SetBinError(283,0.03863919);
   l1preW_stack_10->SetBinError(284,0.03089617);
   l1preW_stack_10->SetBinError(285,0.04381562);
   l1preW_stack_10->SetBinError(286,0.05114699);
   l1preW_stack_10->SetBinError(287,0.04908338);
   l1preW_stack_10->SetBinError(288,0.05689044);
   l1preW_stack_10->SetBinError(289,0.0725927);
   l1preW_stack_10->SetBinError(290,0.0592557);
   l1preW_stack_10->SetBinError(291,0.07248246);
   l1preW_stack_10->SetBinError(292,0.08110635);
   l1preW_stack_10->SetBinError(293,0.09325425);
   l1preW_stack_10->SetBinError(294,0.1006037);
   l1preW_stack_10->SetBinError(295,0.1279144);
   l1preW_stack_10->SetBinError(296,0.1264094);
   l1preW_stack_10->SetBinError(297,0.1575954);
   l1preW_stack_10->SetBinError(298,0.2434475);
   l1preW_stack_10->SetBinError(299,0.4236664);
   l1preW_stack_10->SetBinError(300,0.8265704);
   l1preW_stack_10->SetBinError(301,0.8562501);
   l1preW_stack_10->SetEntries(5000000);

   ci = TColor::GetColor("#0000cc");
   l1preW_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_10->SetLineColor(ci);
   l1preW_stack_10->GetXaxis()->SetRange(1,500);
   l1preW_stack_10->GetXaxis()->SetLabelFont(42);
   l1preW_stack_10->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_10->GetXaxis()->SetTitleFont(42);
   l1preW_stack_10->GetYaxis()->SetLabelFont(42);
   l1preW_stack_10->GetYaxis()->SetTitleFont(42);
   l1preW_stack_10->GetZaxis()->SetLabelFont(42);
   l1preW_stack_10->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_10->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_10,"");
   
   TH1D *l1preW_stack_11 = new TH1D("l1preW_stack_11","",500,-5,5);

   ci = TColor::GetColor("#cc0000");
   l1preW_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_11->SetLineColor(ci);
   l1preW_stack_11->GetXaxis()->SetRange(1,500);
   l1preW_stack_11->GetXaxis()->SetLabelFont(42);
   l1preW_stack_11->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_11->GetXaxis()->SetTitleFont(42);
   l1preW_stack_11->GetYaxis()->SetLabelFont(42);
   l1preW_stack_11->GetYaxis()->SetTitleFont(42);
   l1preW_stack_11->GetZaxis()->SetLabelFont(42);
   l1preW_stack_11->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_11->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_11,"");
   
   TH1D *l1preW_stack_12 = new TH1D("l1preW_stack_12","",500,-5,5);

   ci = TColor::GetColor("#00cc00");
   l1preW_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   l1preW_stack_12->SetLineColor(ci);
   l1preW_stack_12->GetXaxis()->SetRange(1,500);
   l1preW_stack_12->GetXaxis()->SetLabelFont(42);
   l1preW_stack_12->GetXaxis()->SetTitleOffset(1);
   l1preW_stack_12->GetXaxis()->SetTitleFont(42);
   l1preW_stack_12->GetYaxis()->SetLabelFont(42);
   l1preW_stack_12->GetYaxis()->SetTitleFont(42);
   l1preW_stack_12->GetZaxis()->SetLabelFont(42);
   l1preW_stack_12->GetZaxis()->SetTitleOffset(1);
   l1preW_stack_12->GetZaxis()->SetTitleFont(42);
   st->Add(l1preW_stack_12,"");
   st->Draw("hist");
   
   TH1D *l1preW__17 = new TH1D("l1preW__17","",200,-2,2);
   l1preW__17->SetEntries(199);

   ci = TColor::GetColor("#000099");
   l1preW__17->SetLineColor(ci);
   l1preW__17->SetLineWidth(2);
   l1preW__17->SetMarkerStyle(20);
   l1preW__17->SetMarkerSize(1.2);
   l1preW__17->GetXaxis()->SetRange(1,200);
   l1preW__17->GetXaxis()->SetLabelFont(42);
   l1preW__17->GetXaxis()->SetTitleOffset(1);
   l1preW__17->GetXaxis()->SetTitleFont(42);
   l1preW__17->GetYaxis()->SetLabelFont(42);
   l1preW__17->GetYaxis()->SetTitleFont(42);
   l1preW__17->GetZaxis()->SetLabelFont(42);
   l1preW__17->GetZaxis()->SetTitleOffset(1);
   l1preW__17->GetZaxis()->SetTitleFont(42);
   l1preW__17->Draw("same E");
   
   Double_t Graph_from_l1preW_fx1017[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_l1preW_fy1017[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42.66332, 774.6349, 2376.499, 6986.745, 13126.61, 22133.19,
   36473.52, 51207.35, 356359.4, 57521.47, 103751, 270728.1, 640194.2, 216414.1, 1158333, 407822.4, 1038563, 3472120, 596147.9, 2797049, 3782299, 503172.2,
   741251.6, 421870.9, 1904248, 1421277, 332976.9, 756626.7, 1081465, 3226200, 3355584, 7201815, 996015.9, 842292.3, 1619834, 1829773, 2284413, 5385032,
   1098803, 8052980, 3262853, 2437151, 3704518, 7234038, 6613204, 1.576073e+07, 1.157813e+07, 3.843392e+07, 8.522797e+07, 2.562797e+08, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   Double_t Graph_from_l1preW_fex1017[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_l1preW_fey1017[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19.518, 85.89976, 150.6305, 257.6765, 354.0053, 462.6547,
   589.9931, 700.6576, 1858.565, 743.4122, 997.9966, 1615.574, 2483.504, 1441.128, 3335.14, 1975.56, 3152.267, 5767.346, 2392.179, 5190.781, 6022.902, 2200.685,
   2668.132, 2021.956, 4297.228, 3698.888, 1794.645, 2686.873, 3227.284, 5583.221, 5673.705, 8247.874, 3088.884, 2840.082, 3939.653, 4184.784, 4686.815, 7192.086,
   3229.998, 8720.045, 5578.936, 4812.862, 5952.123, 8301.335, 7889.087, 12168.07, 10484.38, 18978.37, 28047.62, 48684.68, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_l1preW_fx1017,Graph_from_l1preW_fy1017,Graph_from_l1preW_fex1017,Graph_from_l1preW_fey1017);
   gre->SetName("Graph_from_l1preW");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_l1preW1017 = new TH1F("Graph_Graph_from_l1preW1017","",500,-6,6);
   Graph_Graph_from_l1preW1017->SetMinimum(0);
   Graph_Graph_from_l1preW1017->SetMaximum(2.819612e+08);
   Graph_Graph_from_l1preW1017->SetDirectory(nullptr);
   Graph_Graph_from_l1preW1017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_l1preW1017->SetLineColor(ci);
   Graph_Graph_from_l1preW1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1017->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_l1preW1017);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("l1preW","Data (JetHT, 2018)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("l1preW","ggZHcc","F");

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
   entry=leg->AddEntry("l1preW","ZHcc","F");

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
   entry=leg->AddEntry("l1preW","ggZHbb","F");

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
   entry=leg->AddEntry("l1preW","ZHbb","F");

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
   entry=leg->AddEntry("l1preW","ZZ","F");

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
   entry=leg->AddEntry("l1preW","WZ","F");

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
   entry=leg->AddEntry("l1preW","WW","F");

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
   entry=leg->AddEntry("l1preW","W + jets","F");

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
   entry=leg->AddEntry("l1preW","Z + jets","F");

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
   entry=leg->AddEntry("l1preW","t#bar{t}","F");

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
   entry=leg->AddEntry("l1preW","Single top","F");

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
   entry=leg->AddEntry("l1preW","QCD","F");

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
   entry=leg->AddEntry("Graph_from_l1preW","MC unc. (stat.)","fl");

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
   l1preW__18->cd();
  
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
   
   TH1D *data_mc_ratio__18 = new TH1D("data_mc_ratio__18","",200,-2,2);
   data_mc_ratio__18->SetMinimum(0.4);
   data_mc_ratio__18->SetMaximum(1.6);
   data_mc_ratio__18->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__18->SetLineColor(ci);
   data_mc_ratio__18->SetLineWidth(2);
   data_mc_ratio__18->SetMarkerStyle(20);
   data_mc_ratio__18->SetMarkerSize(1.2);
   data_mc_ratio__18->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   data_mc_ratio__18->GetXaxis()->SetRange(1,200);
   data_mc_ratio__18->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__18->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__18->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__18->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__18->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__18->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__18->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__18->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__18->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__18->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1018[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1018[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1018[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1018[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.4574891, 0.1108906, 0.06338337, 0.03688077, 0.02696852, 0.02090321,
   0.01617593, 0.01368276, 0.005215422, 0.01292408, 0.009619148, 0.005967517, 0.003879298, 0.00665912, 0.002879259, 0.004844167, 0.003035219, 0.001661045, 0.004012727, 0.001855806, 0.001592392, 0.004373621,
   0.003599496, 0.004792831, 0.002256653, 0.002602511, 0.005389699, 0.003551121, 0.002984177, 0.001730587, 0.001690825, 0.001145249, 0.003101239, 0.003371848, 0.002432134, 0.002287051, 0.00205165, 0.00133557,
   0.00293956, 0.001082835, 0.001709834, 0.00197479, 0.00160672, 0.001147538, 0.00119293, 0.0007720497, 0.0009055325, 0.0004937922, 0.0003290894, 0.000189967, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0 };
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1018,Graph_from_mc_statistical_error_fy1018,Graph_from_mc_statistical_error_fex1018,Graph_from_mc_statistical_error_fey1018);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1018 = new TH1F("Graph_Graph_from_mc_statistical_error1018","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1018->SetMinimum(0.4510131);
   Graph_Graph_from_mc_statistical_error1018->SetMaximum(1.548987);
   Graph_Graph_from_mc_statistical_error1018->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1018->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1018);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   l1preW__18->cd();
   l1preW__18->Modified();
   l1preW__18->cd();
   l1preW__18->SetSelected(l1preW__18);
}
