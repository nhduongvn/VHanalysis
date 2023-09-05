#ifdef __CLING__
#pragma cling optimize(0)
#endif
void l1preW__17()
{
//=========Macro generated from canvas: l1preW__17/l1preW__17
//=========  (Tue Sep  5 11:44:26 2023) by ROOT version 6.28/04
   TCanvas *l1preW__17 = new TCanvas("l1preW__17", "l1preW__17",0,0,600,600);
   l1preW__17->SetHighLightColor(2);
   l1preW__17->Range(0,0,1,1);
   l1preW__17->SetFillColor(0);
   l1preW__17->SetFillStyle(4000);
   l1preW__17->SetBorderMode(0);
   l1preW__17->SetBorderSize(2);
   l1preW__17->SetFrameFillStyle(1000);
   l1preW__17->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-2.612902,-1.942216e+09,2.209678,1.940274e+12);
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
   st->SetMaximum(1.746052e+12);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",500,-5,5);
   st_stack_8->SetMinimum(0.01);
   st_stack_8->SetMaximum(1.746052e+12);
   st_stack_8->SetDirectory(nullptr);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->SetLineWidth(0);
   st_stack_8->GetXaxis()->SetRange(151,350);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Events/0.02");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetLabelSize(0.05);
   st_stack_8->GetYaxis()->SetTitleSize(0.057);
   st_stack_8->GetYaxis()->SetTitleOffset(1.2);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *l1preW_stack_1 = new TH1D("l1preW_stack_1","",500,-5,5);
   l1preW_stack_1->SetBinContent(251,14834);
   l1preW_stack_1->SetBinContent(252,35712.09);
   l1preW_stack_1->SetBinContent(253,149706.9);
   l1preW_stack_1->SetBinContent(254,1253227);
   l1preW_stack_1->SetBinContent(255,412283.3);
   l1preW_stack_1->SetBinContent(256,1533447);
   l1preW_stack_1->SetBinContent(257,3.138346e+07);
   l1preW_stack_1->SetBinContent(258,1797200);
   l1preW_stack_1->SetBinContent(259,1179515);
   l1preW_stack_1->SetBinContent(260,6146809);
   l1preW_stack_1->SetBinContent(261,1.021717e+07);
   l1preW_stack_1->SetBinContent(262,8.787193e+07);
   l1preW_stack_1->SetBinContent(263,2.843091e+07);
   l1preW_stack_1->SetBinContent(264,6501794);
   l1preW_stack_1->SetBinContent(265,8357693);
   l1preW_stack_1->SetBinContent(266,1.425796e+07);
   l1preW_stack_1->SetBinContent(267,1.339428e+08);
   l1preW_stack_1->SetBinContent(268,5210578);
   l1preW_stack_1->SetBinContent(269,9574356);
   l1preW_stack_1->SetBinContent(270,1.203016e+07);
   l1preW_stack_1->SetBinContent(271,2.031466e+07);
   l1preW_stack_1->SetBinContent(272,7.304123e+07);
   l1preW_stack_1->SetBinContent(273,3.235601e+08);
   l1preW_stack_1->SetBinContent(274,1.319529e+09);
   l1preW_stack_1->SetBinContent(275,7.834058e+07);
   l1preW_stack_1->SetBinContent(276,1.709621e+07);
   l1preW_stack_1->SetBinContent(277,1.950181e+07);
   l1preW_stack_1->SetBinContent(278,7.118333e+07);
   l1preW_stack_1->SetBinContent(279,5.778607e+08);
   l1preW_stack_1->SetBinContent(280,3.30284e+07);
   l1preW_stack_1->SetBinContent(281,4.814655e+08);
   l1preW_stack_1->SetBinContent(282,4.774273e+08);
   l1preW_stack_1->SetBinContent(283,5.991792e+08);
   l1preW_stack_1->SetBinContent(284,1.843158e+08);
   l1preW_stack_1->SetBinContent(285,1.054798e+09);
   l1preW_stack_1->SetBinContent(286,6.786832e+08);
   l1preW_stack_1->SetBinContent(287,6.123704e+08);
   l1preW_stack_1->SetBinContent(288,1.548268e+09);
   l1preW_stack_1->SetBinContent(289,2.30152e+08);
   l1preW_stack_1->SetBinContent(290,9.854355e+08);
   l1preW_stack_1->SetBinContent(291,1.568822e+09);
   l1preW_stack_1->SetBinContent(292,1.002796e+09);
   l1preW_stack_1->SetBinContent(293,2.344752e+09);
   l1preW_stack_1->SetBinContent(294,3.225609e+09);
   l1preW_stack_1->SetBinContent(295,4.457571e+09);
   l1preW_stack_1->SetBinContent(296,1.804458e+09);
   l1preW_stack_1->SetBinContent(297,8.160708e+09);
   l1preW_stack_1->SetBinContent(298,1.202683e+10);
   l1preW_stack_1->SetBinContent(299,4.70173e+10);
   l1preW_stack_1->SetBinContent(300,3.726358e+11);
   l1preW_stack_1->SetBinContent(301,7.855998e+11);
   l1preW_stack_1->SetBinError(251,2370.688);
   l1preW_stack_1->SetBinError(252,3184.275);
   l1preW_stack_1->SetBinError(253,8416.024);
   l1preW_stack_1->SetBinError(254,15033.17);
   l1preW_stack_1->SetBinError(255,12118.4);
   l1preW_stack_1->SetBinError(256,35395.46);
   l1preW_stack_1->SetBinError(257,153582.3);
   l1preW_stack_1->SetBinError(258,69218.52);
   l1preW_stack_1->SetBinError(259,50394.59);
   l1preW_stack_1->SetBinError(260,93904.19);
   l1preW_stack_1->SetBinError(261,188804.5);
   l1preW_stack_1->SetBinError(262,627730.8);
   l1preW_stack_1->SetBinError(263,149166.5);
   l1preW_stack_1->SetBinError(264,96298.73);
   l1preW_stack_1->SetBinError(265,139757.5);
   l1preW_stack_1->SetBinError(266,202061.2);
   l1preW_stack_1->SetBinError(267,651202.3);
   l1preW_stack_1->SetBinError(268,150865.5);
   l1preW_stack_1->SetBinError(269,170467);
   l1preW_stack_1->SetBinError(270,215379);
   l1preW_stack_1->SetBinError(271,293550.7);
   l1preW_stack_1->SetBinError(272,452905.9);
   l1preW_stack_1->SetBinError(273,1813358);
   l1preW_stack_1->SetBinError(274,3868447);
   l1preW_stack_1->SetBinError(275,245839.4);
   l1preW_stack_1->SetBinError(276,244089.5);
   l1preW_stack_1->SetBinError(277,286374.6);
   l1preW_stack_1->SetBinError(278,605813);
   l1preW_stack_1->SetBinError(279,2157559);
   l1preW_stack_1->SetBinError(280,519724.6);
   l1preW_stack_1->SetBinError(281,2476507);
   l1preW_stack_1->SetBinError(282,2284975);
   l1preW_stack_1->SetBinError(283,2722878);
   l1preW_stack_1->SetBinError(284,810675.3);
   l1preW_stack_1->SetBinError(285,3138257);
   l1preW_stack_1->SetBinError(286,2836589);
   l1preW_stack_1->SetBinError(287,2471638);
   l1preW_stack_1->SetBinError(288,4231957);
   l1preW_stack_1->SetBinError(289,1435518);
   l1preW_stack_1->SetBinError(290,3259507);
   l1preW_stack_1->SetBinError(291,4224037);
   l1preW_stack_1->SetBinError(292,2391053);
   l1preW_stack_1->SetBinError(293,5306492);
   l1preW_stack_1->SetBinError(294,4942773);
   l1preW_stack_1->SetBinError(295,7022393);
   l1preW_stack_1->SetBinError(296,3446549);
   l1preW_stack_1->SetBinError(297,9893662);
   l1preW_stack_1->SetBinError(298,1.22045e+07);
   l1preW_stack_1->SetBinError(299,2.432022e+07);
   l1preW_stack_1->SetBinError(300,7.283997e+07);
   l1preW_stack_1->SetBinError(301,1.0597e+08);
   l1preW_stack_1->SetEntries(3.106442e+08);

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
   l1preW_stack_2->SetBinContent(251,1.406492);
   l1preW_stack_2->SetBinContent(252,5.830026);
   l1preW_stack_2->SetBinContent(253,26.27414);
   l1preW_stack_2->SetBinContent(254,378.5074);
   l1preW_stack_2->SetBinContent(255,68.29788);
   l1preW_stack_2->SetBinContent(256,221.3759);
   l1preW_stack_2->SetBinContent(257,4460.492);
   l1preW_stack_2->SetBinContent(258,231.7235);
   l1preW_stack_2->SetBinContent(259,193.2223);
   l1preW_stack_2->SetBinContent(260,1055.96);
   l1preW_stack_2->SetBinContent(261,991.7574);
   l1preW_stack_2->SetBinContent(262,6339.354);
   l1preW_stack_2->SetBinContent(263,4373.554);
   l1preW_stack_2->SetBinContent(264,2504.806);
   l1preW_stack_2->SetBinContent(265,1315.621);
   l1preW_stack_2->SetBinContent(266,1659.255);
   l1preW_stack_2->SetBinContent(267,12350.6);
   l1preW_stack_2->SetBinContent(268,608.9775);
   l1preW_stack_2->SetBinContent(269,2125.445);
   l1preW_stack_2->SetBinContent(270,1328.204);
   l1preW_stack_2->SetBinContent(271,1886.797);
   l1preW_stack_2->SetBinContent(272,8762.048);
   l1preW_stack_2->SetBinContent(273,13907.08);
   l1preW_stack_2->SetBinContent(274,43318.77);
   l1preW_stack_2->SetBinContent(275,16253.72);
   l1preW_stack_2->SetBinContent(276,1737.46);
   l1preW_stack_2->SetBinContent(277,2791.531);
   l1preW_stack_2->SetBinContent(278,7037.104);
   l1preW_stack_2->SetBinContent(279,35217.67);
   l1preW_stack_2->SetBinContent(280,2807.469);
   l1preW_stack_2->SetBinContent(281,12264.18);
   l1preW_stack_2->SetBinContent(282,20413.29);
   l1preW_stack_2->SetBinContent(283,17953.99);
   l1preW_stack_2->SetBinContent(284,21218.57);
   l1preW_stack_2->SetBinContent(285,59647.96);
   l1preW_stack_2->SetBinContent(286,24880.91);
   l1preW_stack_2->SetBinContent(287,27266.89);
   l1preW_stack_2->SetBinContent(288,50388.38);
   l1preW_stack_2->SetBinContent(289,14729.41);
   l1preW_stack_2->SetBinContent(290,36516.62);
   l1preW_stack_2->SetBinContent(291,55411.48);
   l1preW_stack_2->SetBinContent(292,63185.02);
   l1preW_stack_2->SetBinContent(293,71932.75);
   l1preW_stack_2->SetBinContent(294,153011.3);
   l1preW_stack_2->SetBinContent(295,125315.8);
   l1preW_stack_2->SetBinContent(296,99845.11);
   l1preW_stack_2->SetBinContent(297,215059.1);
   l1preW_stack_2->SetBinContent(298,276439.6);
   l1preW_stack_2->SetBinContent(299,898842);
   l1preW_stack_2->SetBinContent(300,5320400);
   l1preW_stack_2->SetBinContent(301,4838377);
   l1preW_stack_2->SetBinError(251,0.2612522);
   l1preW_stack_2->SetBinError(252,0.6313639);
   l1preW_stack_2->SetBinError(253,1.477445);
   l1preW_stack_2->SetBinError(254,5.424734);
   l1preW_stack_2->SetBinError(255,2.505429);
   l1preW_stack_2->SetBinError(256,4.615283);
   l1preW_stack_2->SetBinError(257,18.49378);
   l1preW_stack_2->SetBinError(258,4.801599);
   l1preW_stack_2->SetBinError(259,4.244073);
   l1preW_stack_2->SetBinError(260,9.591218);
   l1preW_stack_2->SetBinError(261,9.582216);
   l1preW_stack_2->SetBinError(262,22.58107);
   l1preW_stack_2->SetBinError(263,18.30743);
   l1preW_stack_2->SetBinError(264,14.61756);
   l1preW_stack_2->SetBinError(265,10.82053);
   l1preW_stack_2->SetBinError(266,12.81663);
   l1preW_stack_2->SetBinError(267,31.88938);
   l1preW_stack_2->SetBinError(268,7.619543);
   l1preW_stack_2->SetBinError(269,13.69396);
   l1preW_stack_2->SetBinError(270,11.20596);
   l1preW_stack_2->SetBinError(271,13.71425);
   l1preW_stack_2->SetBinError(272,27.87274);
   l1preW_stack_2->SetBinError(273,34.5593);
   l1preW_stack_2->SetBinError(274,60.11875);
   l1preW_stack_2->SetBinError(275,34.82404);
   l1preW_stack_2->SetBinError(276,13.29953);
   l1preW_stack_2->SetBinError(277,16.48852);
   l1preW_stack_2->SetBinError(278,26.37173);
   l1preW_stack_2->SetBinError(279,54.82329);
   l1preW_stack_2->SetBinError(280,16.45806);
   l1preW_stack_2->SetBinError(281,33.09389);
   l1preW_stack_2->SetBinError(282,40.03968);
   l1preW_stack_2->SetBinError(283,40.60407);
   l1preW_stack_2->SetBinError(284,42.41826);
   l1preW_stack_2->SetBinError(285,72.92336);
   l1preW_stack_2->SetBinError(286,47.86392);
   l1preW_stack_2->SetBinError(287,49.61248);
   l1preW_stack_2->SetBinError(288,67.18685);
   l1preW_stack_2->SetBinError(289,38.16053);
   l1preW_stack_2->SetBinError(290,59.07994);
   l1preW_stack_2->SetBinError(291,70.77611);
   l1preW_stack_2->SetBinError(292,71.45961);
   l1preW_stack_2->SetBinError(293,81.41964);
   l1preW_stack_2->SetBinError(294,115.6613);
   l1preW_stack_2->SetBinError(295,107.0484);
   l1preW_stack_2->SetBinError(296,96.25772);
   l1preW_stack_2->SetBinError(297,143.1582);
   l1preW_stack_2->SetBinError(298,161.1227);
   l1preW_stack_2->SetBinError(299,286.1311);
   l1preW_stack_2->SetBinError(300,746.0926);
   l1preW_stack_2->SetBinError(301,694.3615);
   l1preW_stack_2->SetEntries(2.05456e+08);

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
   l1preW_stack_3->SetBinContent(251,6.253003);
   l1preW_stack_3->SetBinContent(252,21.5731);
   l1preW_stack_3->SetBinContent(253,110.4135);
   l1preW_stack_3->SetBinContent(254,939.218);
   l1preW_stack_3->SetBinContent(255,272.9028);
   l1preW_stack_3->SetBinContent(256,864.9453);
   l1preW_stack_3->SetBinContent(257,10009.97);
   l1preW_stack_3->SetBinContent(258,1009.6);
   l1preW_stack_3->SetBinContent(259,878.0388);
   l1preW_stack_3->SetBinContent(260,3510.15);
   l1preW_stack_3->SetBinContent(261,4299.586);
   l1preW_stack_3->SetBinContent(262,14617.14);
   l1preW_stack_3->SetBinContent(263,9647.551);
   l1preW_stack_3->SetBinContent(264,7748.589);
   l1preW_stack_3->SetBinContent(265,4720.931);
   l1preW_stack_3->SetBinContent(266,7560.133);
   l1preW_stack_3->SetBinContent(267,29887.77);
   l1preW_stack_3->SetBinContent(268,2776.498);
   l1preW_stack_3->SetBinContent(269,7536.903);
   l1preW_stack_3->SetBinContent(270,6182.732);
   l1preW_stack_3->SetBinContent(271,8625.644);
   l1preW_stack_3->SetBinContent(272,27914.36);
   l1preW_stack_3->SetBinContent(273,38577.65);
   l1preW_stack_3->SetBinContent(274,106241.2);
   l1preW_stack_3->SetBinContent(275,34719.12);
   l1preW_stack_3->SetBinContent(276,8291.945);
   l1preW_stack_3->SetBinContent(277,12059.01);
   l1preW_stack_3->SetBinContent(278,31234.7);
   l1preW_stack_3->SetBinContent(279,92509.38);
   l1preW_stack_3->SetBinContent(280,12472.95);
   l1preW_stack_3->SetBinContent(281,37984.3);
   l1preW_stack_3->SetBinContent(282,48485.48);
   l1preW_stack_3->SetBinContent(283,56927.31);
   l1preW_stack_3->SetBinContent(284,67024.96);
   l1preW_stack_3->SetBinContent(285,173037.9);
   l1preW_stack_3->SetBinContent(286,80071.36);
   l1preW_stack_3->SetBinContent(287,86915.81);
   l1preW_stack_3->SetBinContent(288,138916.5);
   l1preW_stack_3->SetBinContent(289,63234.59);
   l1preW_stack_3->SetBinContent(290,126477.8);
   l1preW_stack_3->SetBinContent(291,171293);
   l1preW_stack_3->SetBinContent(292,166103.5);
   l1preW_stack_3->SetBinContent(293,235135.1);
   l1preW_stack_3->SetBinContent(294,453905.8);
   l1preW_stack_3->SetBinContent(295,387495.9);
   l1preW_stack_3->SetBinContent(296,339736.1);
   l1preW_stack_3->SetBinContent(297,695489.4);
   l1preW_stack_3->SetBinContent(298,914952);
   l1preW_stack_3->SetBinContent(299,2631747);
   l1preW_stack_3->SetBinContent(300,1.689574e+07);
   l1preW_stack_3->SetBinContent(301,1.065011e+07);
   l1preW_stack_3->SetBinError(251,0.5704524);
   l1preW_stack_3->SetBinError(252,1.066593);
   l1preW_stack_3->SetBinError(253,2.427484);
   l1preW_stack_3->SetBinError(254,7.15008);
   l1preW_stack_3->SetBinError(255,3.82661);
   l1preW_stack_3->SetBinError(256,6.789545);
   l1preW_stack_3->SetBinError(257,23.17295);
   l1preW_stack_3->SetBinError(258,7.306948);
   l1preW_stack_3->SetBinError(259,6.884599);
   l1preW_stack_3->SetBinError(260,13.82597);
   l1preW_stack_3->SetBinError(261,15.24893);
   l1preW_stack_3->SetBinError(262,27.84546);
   l1preW_stack_3->SetBinError(263,22.76943);
   l1preW_stack_3->SetBinError(264,20.64274);
   l1preW_stack_3->SetBinError(265,16.01247);
   l1preW_stack_3->SetBinError(266,20.25613);
   l1preW_stack_3->SetBinError(267,39.80669);
   l1preW_stack_3->SetBinError(268,12.24218);
   l1preW_stack_3->SetBinError(269,20.34449);
   l1preW_stack_3->SetBinError(270,18.39134);
   l1preW_stack_3->SetBinError(271,21.70984);
   l1preW_stack_3->SetBinError(272,38.78336);
   l1preW_stack_3->SetBinError(273,45.6123);
   l1preW_stack_3->SetBinError(274,75.30709);
   l1preW_stack_3->SetBinError(275,43.95528);
   l1preW_stack_3->SetBinError(276,21.33329);
   l1preW_stack_3->SetBinError(277,25.74448);
   l1preW_stack_3->SetBinError(278,41.2928);
   l1preW_stack_3->SetBinError(279,70.57238);
   l1preW_stack_3->SetBinError(280,26.38097);
   l1preW_stack_3->SetBinError(281,45.65159);
   l1preW_stack_3->SetBinError(282,51.64325);
   l1preW_stack_3->SetBinError(283,55.44257);
   l1preW_stack_3->SetBinError(284,61.06606);
   l1preW_stack_3->SetBinError(285,96.95137);
   l1preW_stack_3->SetBinError(286,65.76864);
   l1preW_stack_3->SetBinError(287,69.05315);
   l1preW_stack_3->SetBinError(288,86.62812);
   l1preW_stack_3->SetBinError(289,59.12068);
   l1preW_stack_3->SetBinError(290,83.27666);
   l1preW_stack_3->SetBinError(291,97.34383);
   l1preW_stack_3->SetBinError(292,96.57756);
   l1preW_stack_3->SetBinError(293,113.8194);
   l1preW_stack_3->SetBinError(294,159.4001);
   l1preW_stack_3->SetBinError(295,147.0273);
   l1preW_stack_3->SetBinError(296,137.9329);
   l1preW_stack_3->SetBinError(297,196.4465);
   l1preW_stack_3->SetBinError(298,227.5996);
   l1preW_stack_3->SetBinError(299,384.8801);
   l1preW_stack_3->SetBinError(300,947.4059);
   l1preW_stack_3->SetBinError(301,787.2352);
   l1preW_stack_3->SetEntries(6.76188e+08);

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
   l1preW_stack_4->SetBinContent(251,23.13415);
   l1preW_stack_4->SetBinContent(252,45.68097);
   l1preW_stack_4->SetBinContent(253,244.1471);
   l1preW_stack_4->SetBinContent(254,1229.884);
   l1preW_stack_4->SetBinContent(255,511.9317);
   l1preW_stack_4->SetBinContent(256,2003.335);
   l1preW_stack_4->SetBinContent(257,16346.12);
   l1preW_stack_4->SetBinContent(258,2057.584);
   l1preW_stack_4->SetBinContent(259,1574.974);
   l1preW_stack_4->SetBinContent(260,6090.926);
   l1preW_stack_4->SetBinContent(261,8481.942);
   l1preW_stack_4->SetBinContent(262,31147.38);
   l1preW_stack_4->SetBinContent(263,14738.63);
   l1preW_stack_4->SetBinContent(264,9286.511);
   l1preW_stack_4->SetBinContent(265,8234.995);
   l1preW_stack_4->SetBinContent(266,13008.69);
   l1preW_stack_4->SetBinContent(267,55209.33);
   l1preW_stack_4->SetBinContent(268,4603.172);
   l1preW_stack_4->SetBinContent(269,9459.05);
   l1preW_stack_4->SetBinContent(270,11916.18);
   l1preW_stack_4->SetBinContent(271,15956.87);
   l1preW_stack_4->SetBinContent(272,44446.19);
   l1preW_stack_4->SetBinContent(273,73886.85);
   l1preW_stack_4->SetBinContent(274,200824.3);
   l1preW_stack_4->SetBinContent(275,50090.49);
   l1preW_stack_4->SetBinContent(276,14493.69);
   l1preW_stack_4->SetBinContent(277,17564.78);
   l1preW_stack_4->SetBinContent(278,50163.34);
   l1preW_stack_4->SetBinContent(279,164504);
   l1preW_stack_4->SetBinContent(280,17721.33);
   l1preW_stack_4->SetBinContent(281,66778.76);
   l1preW_stack_4->SetBinContent(282,82168.99);
   l1preW_stack_4->SetBinContent(283,82487.36);
   l1preW_stack_4->SetBinContent(284,110363.7);
   l1preW_stack_4->SetBinContent(285,268016);
   l1preW_stack_4->SetBinContent(286,119406.7);
   l1preW_stack_4->SetBinContent(287,152094);
   l1preW_stack_4->SetBinContent(288,225542.8);
   l1preW_stack_4->SetBinContent(289,98783.96);
   l1preW_stack_4->SetBinContent(290,211796.4);
   l1preW_stack_4->SetBinContent(291,266307.6);
   l1preW_stack_4->SetBinContent(292,344543.1);
   l1preW_stack_4->SetBinContent(293,376140);
   l1preW_stack_4->SetBinContent(294,877143.3);
   l1preW_stack_4->SetBinContent(295,682981.7);
   l1preW_stack_4->SetBinContent(296,604070.4);
   l1preW_stack_4->SetBinContent(297,1068540);
   l1preW_stack_4->SetBinContent(298,1483421);
   l1preW_stack_4->SetBinContent(299,4552527);
   l1preW_stack_4->SetBinContent(300,1.371315e+07);
   l1preW_stack_4->SetBinContent(301,2.179824e+07);
   l1preW_stack_4->SetBinError(251,5.101157);
   l1preW_stack_4->SetBinError(252,4.737736);
   l1preW_stack_4->SetBinError(253,16.25562);
   l1preW_stack_4->SetBinError(254,25.55857);
   l1preW_stack_4->SetBinError(255,23.23187);
   l1preW_stack_4->SetBinError(256,54.19597);
   l1preW_stack_4->SetBinError(257,155.9392);
   l1preW_stack_4->SetBinError(258,55.12551);
   l1preW_stack_4->SetBinError(259,43.33531);
   l1preW_stack_4->SetBinError(260,93.98394);
   l1preW_stack_4->SetBinError(261,128.3436);
   l1preW_stack_4->SetBinError(262,260.3635);
   l1preW_stack_4->SetBinError(263,145.6528);
   l1preW_stack_4->SetBinError(264,78.18627);
   l1preW_stack_4->SetBinError(265,110.6472);
   l1preW_stack_4->SetBinError(266,148.5831);
   l1preW_stack_4->SetBinError(267,325.9024);
   l1preW_stack_4->SetBinError(268,81.03548);
   l1preW_stack_4->SetBinError(269,95.98065);
   l1preW_stack_4->SetBinError(270,141.1737);
   l1preW_stack_4->SetBinError(271,173.7329);
   l1preW_stack_4->SetBinError(272,268.3026);
   l1preW_stack_4->SetBinError(273,412.3678);
   l1preW_stack_4->SetBinError(274,679.826);
   l1preW_stack_4->SetBinError(275,168.6179);
   l1preW_stack_4->SetBinError(276,159.3286);
   l1preW_stack_4->SetBinError(277,164.0881);
   l1preW_stack_4->SetBinError(278,320.1179);
   l1preW_stack_4->SetBinError(279,563.1705);
   l1preW_stack_4->SetBinError(280,179.1227);
   l1preW_stack_4->SetBinError(281,376.0392);
   l1preW_stack_4->SetBinError(282,387.0586);
   l1preW_stack_4->SetBinError(283,393.0935);
   l1preW_stack_4->SetBinError(284,438.9346);
   l1preW_stack_4->SetBinError(285,704.7038);
   l1preW_stack_4->SetBinError(286,506.4071);
   l1preW_stack_4->SetBinError(287,579.5452);
   l1preW_stack_4->SetBinError(288,702.9611);
   l1preW_stack_4->SetBinError(289,463.2347);
   l1preW_stack_4->SetBinError(290,686.3837);
   l1preW_stack_4->SetBinError(291,708.2265);
   l1preW_stack_4->SetBinError(292,860.9993);
   l1preW_stack_4->SetBinError(293,938.1335);
   l1preW_stack_4->SetBinError(294,1418.496);
   l1preW_stack_4->SetBinError(295,1230.317);
   l1preW_stack_4->SetBinError(296,1174.176);
   l1preW_stack_4->SetBinError(297,1568.97);
   l1preW_stack_4->SetBinError(298,1872.016);
   l1preW_stack_4->SetBinError(299,3328.963);
   l1preW_stack_4->SetBinError(300,5809.185);
   l1preW_stack_4->SetBinError(301,7271.072);
   l1preW_stack_4->SetEntries(4.611831e+07);

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
   l1preW_stack_5->SetBinContent(251,139.1872);
   l1preW_stack_5->SetBinContent(252,244.943);
   l1preW_stack_5->SetBinContent(253,1342.421);
   l1preW_stack_5->SetBinContent(254,6288.617);
   l1preW_stack_5->SetBinContent(255,2780.496);
   l1preW_stack_5->SetBinContent(256,9919.186);
   l1preW_stack_5->SetBinContent(257,89251.55);
   l1preW_stack_5->SetBinContent(258,10501.32);
   l1preW_stack_5->SetBinContent(259,7244.833);
   l1preW_stack_5->SetBinContent(260,27289.53);
   l1preW_stack_5->SetBinContent(261,38458.64);
   l1preW_stack_5->SetBinContent(262,158268.8);
   l1preW_stack_5->SetBinContent(263,79736.78);
   l1preW_stack_5->SetBinContent(264,39035.21);
   l1preW_stack_5->SetBinContent(265,37959.89);
   l1preW_stack_5->SetBinContent(266,58477.86);
   l1preW_stack_5->SetBinContent(267,290849.9);
   l1preW_stack_5->SetBinContent(268,20073.62);
   l1preW_stack_5->SetBinContent(269,40156.05);
   l1preW_stack_5->SetBinContent(270,49267.79);
   l1preW_stack_5->SetBinContent(271,69273.28);
   l1preW_stack_5->SetBinContent(272,216675.1);
   l1preW_stack_5->SetBinContent(273,344880.2);
   l1preW_stack_5->SetBinContent(274,974640.3);
   l1preW_stack_5->SetBinContent(275,203441.3);
   l1preW_stack_5->SetBinContent(276,59968.1);
   l1preW_stack_5->SetBinContent(277,73414.18);
   l1preW_stack_5->SetBinContent(278,206678.9);
   l1preW_stack_5->SetBinContent(279,770070.3);
   l1preW_stack_5->SetBinContent(280,71764.2);
   l1preW_stack_5->SetBinContent(281,283160.9);
   l1preW_stack_5->SetBinContent(282,358875.9);
   l1preW_stack_5->SetBinContent(283,397901.4);
   l1preW_stack_5->SetBinContent(284,426876.3);
   l1preW_stack_5->SetBinContent(285,1200784);
   l1preW_stack_5->SetBinContent(286,535378.1);
   l1preW_stack_5->SetBinContent(287,650707.7);
   l1preW_stack_5->SetBinContent(288,1045506);
   l1preW_stack_5->SetBinContent(289,376570.1);
   l1preW_stack_5->SetBinContent(290,927333.4);
   l1preW_stack_5->SetBinContent(291,1134195);
   l1preW_stack_5->SetBinContent(292,1315749);
   l1preW_stack_5->SetBinContent(293,1547309);
   l1preW_stack_5->SetBinContent(294,3398244);
   l1preW_stack_5->SetBinContent(295,2709843);
   l1preW_stack_5->SetBinContent(296,2344024);
   l1preW_stack_5->SetBinContent(297,4346544);
   l1preW_stack_5->SetBinContent(298,5415218);
   l1preW_stack_5->SetBinContent(299,1.709595e+07);
   l1preW_stack_5->SetBinContent(300,6.214599e+07);
   l1preW_stack_5->SetBinContent(301,8.299156e+07);
   l1preW_stack_5->SetBinError(251,13.87315);
   l1preW_stack_5->SetBinError(252,14.46299);
   l1preW_stack_5->SetBinError(253,51.59721);
   l1preW_stack_5->SetBinError(254,81.60321);
   l1preW_stack_5->SetBinError(255,74.74749);
   l1preW_stack_5->SetBinError(256,160.9707);
   l1preW_stack_5->SetBinError(257,476.7881);
   l1preW_stack_5->SetBinError(258,166.7395);
   l1preW_stack_5->SetBinError(259,124.6132);
   l1preW_stack_5->SetBinError(260,270.3468);
   l1preW_stack_5->SetBinError(261,366.8492);
   l1preW_stack_5->SetBinError(262,751.3244);
   l1preW_stack_5->SetBinError(263,444.0489);
   l1preW_stack_5->SetBinError(264,233.1881);
   l1preW_stack_5->SetBinError(265,319.9187);
   l1preW_stack_5->SetBinError(266,430.1933);
   l1preW_stack_5->SetBinError(267,961.9323);
   l1preW_stack_5->SetBinError(268,236.3426);
   l1preW_stack_5->SetBinError(269,281.5472);
   l1preW_stack_5->SetBinError(270,398.4026);
   l1preW_stack_5->SetBinError(271,504.0649);
   l1preW_stack_5->SetBinError(272,785.7932);
   l1preW_stack_5->SetBinError(273,1170.365);
   l1preW_stack_5->SetBinError(274,1924.314);
   l1preW_stack_5->SetBinError(275,513.5787);
   l1preW_stack_5->SetBinError(276,460.6489);
   l1preW_stack_5->SetBinError(277,464.8892);
   l1preW_stack_5->SetBinError(278,905.0443);
   l1preW_stack_5->SetBinError(279,1601.308);
   l1preW_stack_5->SetBinError(280,507.4041);
   l1preW_stack_5->SetBinError(281,1048.748);
   l1preW_stack_5->SetBinError(282,1108.787);
   l1preW_stack_5->SetBinError(283,1127.531);
   l1preW_stack_5->SetBinError(284,1231.661);
   l1preW_stack_5->SetBinError(285,1997.415);
   l1preW_stack_5->SetBinError(286,1419.005);
   l1preW_stack_5->SetBinError(287,1622.405);
   l1preW_stack_5->SetBinError(288,1987.094);
   l1preW_stack_5->SetBinError(289,1279.147);
   l1preW_stack_5->SetBinError(290,1933.375);
   l1preW_stack_5->SetBinError(291,1993.149);
   l1preW_stack_5->SetBinError(292,2384.906);
   l1preW_stack_5->SetBinError(293,2603.454);
   l1preW_stack_5->SetBinError(294,3905.175);
   l1preW_stack_5->SetBinError(295,3377.372);
   l1preW_stack_5->SetBinError(296,3222.291);
   l1preW_stack_5->SetBinError(297,4294.922);
   l1preW_stack_5->SetBinError(298,5046.31);
   l1preW_stack_5->SetBinError(299,8974.671);
   l1preW_stack_5->SetBinError(300,15364.34);
   l1preW_stack_5->SetBinError(301,19237.32);
   l1preW_stack_5->SetEntries(1.626053e+08);

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
   l1preW_stack_6->SetBinContent(251,0.6306118);
   l1preW_stack_6->SetBinContent(252,0.6306118);
   l1preW_stack_6->SetBinContent(253,12.29693);
   l1preW_stack_6->SetBinContent(254,47.61119);
   l1preW_stack_6->SetBinContent(255,17.97244);
   l1preW_stack_6->SetBinContent(256,77.88056);
   l1preW_stack_6->SetBinContent(257,789.526);
   l1preW_stack_6->SetBinContent(258,89.54687);
   l1preW_stack_6->SetBinContent(259,59.90812);
   l1preW_stack_6->SetBinContent(260,209.0478);
   l1preW_stack_6->SetBinContent(261,327.9181);
   l1preW_stack_6->SetBinContent(262,1885.529);
   l1preW_stack_6->SetBinContent(263,726.1495);
   l1preW_stack_6->SetBinContent(264,267.3794);
   l1preW_stack_6->SetBinContent(265,297.6488);
   l1preW_stack_6->SetBinContent(266,503.8588);
   l1preW_stack_6->SetBinContent(267,3122.159);
   l1preW_stack_6->SetBinContent(268,192.6519);
   l1preW_stack_6->SetBinContent(269,330.1253);
   l1preW_stack_6->SetBinContent(270,407.6905);
   l1preW_stack_6->SetBinContent(271,615.1618);
   l1preW_stack_6->SetBinContent(272,2044.443);
   l1preW_stack_6->SetBinContent(273,5396.145);
   l1preW_stack_6->SetBinContent(274,17801.54);
   l1preW_stack_6->SetBinContent(275,1265.953);
   l1preW_stack_6->SetBinContent(276,484.6252);
   l1preW_stack_6->SetBinContent(277,724.8882);
   l1preW_stack_6->SetBinContent(278,2011.336);
   l1preW_stack_6->SetBinContent(279,10670.9);
   l1preW_stack_6->SetBinContent(280,767.7698);
   l1preW_stack_6->SetBinContent(281,5339.39);
   l1preW_stack_6->SetBinContent(282,5043.002);
   l1preW_stack_6->SetBinContent(283,6793.581);
   l1preW_stack_6->SetBinContent(284,3548.137);
   l1preW_stack_6->SetBinContent(285,17224.21);
   l1preW_stack_6->SetBinContent(286,9686.197);
   l1preW_stack_6->SetBinContent(287,9626.604);
   l1preW_stack_6->SetBinContent(288,19299.24);
   l1preW_stack_6->SetBinContent(289,4850.666);
   l1preW_stack_6->SetBinContent(290,14077.15);
   l1preW_stack_6->SetBinContent(291,17023.05);
   l1preW_stack_6->SetBinContent(292,11487.85);
   l1preW_stack_6->SetBinContent(293,27297.29);
   l1preW_stack_6->SetBinContent(294,37286.5);
   l1preW_stack_6->SetBinContent(295,38431.06);
   l1preW_stack_6->SetBinContent(296,24159.37);
   l1preW_stack_6->SetBinContent(297,77730.78);
   l1preW_stack_6->SetBinContent(298,83236.66);
   l1preW_stack_6->SetBinContent(299,272216.5);
   l1preW_stack_6->SetBinContent(300,1957090);
   l1preW_stack_6->SetBinContent(301,2236896);
   l1preW_stack_6->SetBinError(251,0.4459099);
   l1preW_stack_6->SetBinError(252,0.4459099);
   l1preW_stack_6->SetBinError(253,1.969085);
   l1preW_stack_6->SetBinError(254,3.874544);
   l1preW_stack_6->SetBinError(255,2.380507);
   l1preW_stack_6->SetBinError(256,4.955421);
   l1preW_stack_6->SetBinError(257,15.7779);
   l1preW_stack_6->SetBinError(258,5.313629);
   l1preW_stack_6->SetBinError(259,4.346192);
   l1preW_stack_6->SetBinError(260,8.118744);
   l1preW_stack_6->SetBinError(261,10.16831);
   l1preW_stack_6->SetBinError(262,24.38275);
   l1preW_stack_6->SetBinError(263,15.1314);
   l1preW_stack_6->SetBinError(264,9.181846);
   l1preW_stack_6->SetBinError(265,9.687642);
   l1preW_stack_6->SetBinError(266,12.60435);
   l1preW_stack_6->SetBinError(267,31.37571);
   l1preW_stack_6->SetBinError(268,7.793862);
   l1preW_stack_6->SetBinError(269,10.20247);
   l1preW_stack_6->SetBinError(270,11.33787);
   l1preW_stack_6->SetBinError(271,13.9271);
   l1preW_stack_6->SetBinError(272,25.38947);
   l1preW_stack_6->SetBinError(273,41.24847);
   l1preW_stack_6->SetBinError(274,74.91949);
   l1preW_stack_6->SetBinError(275,19.97905);
   l1preW_stack_6->SetBinError(276,12.36144);
   l1preW_stack_6->SetBinError(277,15.11825);
   l1preW_stack_6->SetBinError(278,25.18305);
   l1preW_stack_6->SetBinError(279,58.00514);
   l1preW_stack_6->SetBinError(280,15.559);
   l1preW_stack_6->SetBinError(281,41.03098);
   l1preW_stack_6->SetBinError(282,39.87591);
   l1preW_stack_6->SetBinError(283,46.28235);
   l1preW_stack_6->SetBinError(284,33.4477);
   l1preW_stack_6->SetBinError(285,73.69462);
   l1preW_stack_6->SetBinError(286,55.26405);
   l1preW_stack_6->SetBinError(287,55.09378);
   l1preW_stack_6->SetBinError(288,78.00747);
   l1preW_stack_6->SetBinError(289,39.1081);
   l1preW_stack_6->SetBinError(290,66.62287);
   l1preW_stack_6->SetBinError(291,73.263);
   l1preW_stack_6->SetBinError(292,60.18462);
   l1preW_stack_6->SetBinError(293,92.7739);
   l1preW_stack_6->SetBinError(294,108.4281);
   l1preW_stack_6->SetBinError(295,110.0797);
   l1preW_stack_6->SetBinError(296,87.27881);
   l1preW_stack_6->SetBinError(297,156.5534);
   l1preW_stack_6->SetBinError(298,162.0031);
   l1preW_stack_6->SetBinError(299,292.9701);
   l1preW_stack_6->SetBinError(300,785.5457);
   l1preW_stack_6->SetBinError(301,839.8253);
   l1preW_stack_6->SetEntries(1.5634e+07);

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
   l1preW_stack_7->SetBinContent(252,0.9917687);
   l1preW_stack_7->SetBinContent(253,3.223248);
   l1preW_stack_7->SetBinContent(254,20.33126);
   l1preW_stack_7->SetBinContent(255,8.677976);
   l1preW_stack_7->SetBinContent(256,32.23248);
   l1preW_stack_7->SetBinContent(257,326.044);
   l1preW_stack_7->SetBinContent(258,39.17487);
   l1preW_stack_7->SetBinContent(259,27.76952);
   l1preW_stack_7->SetBinContent(260,98.43305);
   l1preW_stack_7->SetBinContent(261,146.0379);
   l1preW_stack_7->SetBinContent(262,738.3718);
   l1preW_stack_7->SetBinContent(263,303.7292);
   l1preW_stack_7->SetBinContent(264,129.9217);
   l1preW_stack_7->SetBinContent(265,133.6408);
   l1preW_stack_7->SetBinContent(266,237.5286);
   l1preW_stack_7->SetBinContent(267,1340.623);
   l1preW_stack_7->SetBinContent(268,96.20157);
   l1preW_stack_7->SetBinContent(269,177.7745);
   l1preW_stack_7->SetBinContent(270,190.4196);
   l1preW_stack_7->SetBinContent(271,293.8115);
   l1preW_stack_7->SetBinContent(272,867.7976);
   l1preW_stack_7->SetBinContent(273,2038.829);
   l1preW_stack_7->SetBinContent(274,6581.625);
   l1preW_stack_7->SetBinContent(275,654.5674);
   l1preW_stack_7->SetBinContent(276,187.1963);
   l1preW_stack_7->SetBinContent(277,336.4575);
   l1preW_stack_7->SetBinContent(278,754.984);
   l1preW_stack_7->SetBinContent(279,4029.556);
   l1preW_stack_7->SetBinContent(280,319.5975);
   l1preW_stack_7->SetBinContent(281,1968.661);
   l1preW_stack_7->SetBinContent(282,1987.009);
   l1preW_stack_7->SetBinContent(283,2575.623);
   l1preW_stack_7->SetBinContent(284,1479.223);
   l1preW_stack_7->SetBinContent(285,6515.425);
   l1preW_stack_7->SetBinContent(286,3522.515);
   l1preW_stack_7->SetBinContent(287,3591.938);
   l1preW_stack_7->SetBinContent(288,7127.842);
   l1preW_stack_7->SetBinContent(289,1649.807);
   l1preW_stack_7->SetBinContent(290,5255.383);
   l1preW_stack_7->SetBinContent(291,6563.278);
   l1preW_stack_7->SetBinContent(292,4905.288);
   l1preW_stack_7->SetBinContent(293,10069.43);
   l1preW_stack_7->SetBinContent(294,15294.56);
   l1preW_stack_7->SetBinContent(295,15126.7);
   l1preW_stack_7->SetBinContent(296,9672.225);
   l1preW_stack_7->SetBinContent(297,29512.06);
   l1preW_stack_7->SetBinContent(298,33802.45);
   l1preW_stack_7->SetBinContent(299,113505.7);
   l1preW_stack_7->SetBinContent(300,739917);
   l1preW_stack_7->SetBinContent(301,921858.2);
   l1preW_stack_7->SetBinError(252,0.4958844);
   l1preW_stack_7->SetBinError(253,0.8939683);
   l1preW_stack_7->SetBinError(254,2.245212);
   l1preW_stack_7->SetBinError(255,1.466846);
   l1preW_stack_7->SetBinError(256,2.826976);
   l1preW_stack_7->SetBinError(257,8.99111);
   l1preW_stack_7->SetBinError(258,3.116585);
   l1preW_stack_7->SetBinError(259,2.623973);
   l1preW_stack_7->SetBinError(260,4.940213);
   l1preW_stack_7->SetBinError(261,6.017389);
   l1preW_stack_7->SetBinError(262,13.53047);
   l1preW_stack_7->SetBinError(263,8.677976);
   l1preW_stack_7->SetBinError(264,5.675656);
   l1preW_stack_7->SetBinError(265,5.756318);
   l1preW_stack_7->SetBinError(266,7.674201);
   l1preW_stack_7->SetBinError(267,18.23176);
   l1preW_stack_7->SetBinError(268,4.883895);
   l1preW_stack_7->SetBinError(269,6.639112);
   l1preW_stack_7->SetBinError(270,6.871175);
   l1preW_stack_7->SetBinError(271,8.535119);
   l1preW_stack_7->SetBinError(272,14.66846);
   l1preW_stack_7->SetBinError(273,22.48359);
   l1preW_stack_7->SetBinError(274,40.39632);
   l1preW_stack_7->SetBinError(275,12.7395);
   l1preW_stack_7->SetBinError(276,6.812773);
   l1preW_stack_7->SetBinError(277,9.133566);
   l1preW_stack_7->SetBinError(278,13.68183);
   l1preW_stack_7->SetBinError(279,31.6085);
   l1preW_stack_7->SetBinError(280,8.901781);
   l1preW_stack_7->SetBinError(281,22.0933);
   l1preW_stack_7->SetBinError(282,22.19602);
   l1preW_stack_7->SetBinError(283,25.27065);
   l1preW_stack_7->SetBinError(284,19.15103);
   l1preW_stack_7->SetBinError(285,40.19264);
   l1preW_stack_7->SetBinError(286,29.553);
   l1preW_stack_7->SetBinError(287,29.84281);
   l1preW_stack_7->SetBinError(288,42.03918);
   l1preW_stack_7->SetBinError(289,20.22515);
   l1preW_stack_7->SetBinError(290,36.09752);
   l1preW_stack_7->SetBinError(291,40.33997);
   l1preW_stack_7->SetBinError(292,34.87446);
   l1preW_stack_7->SetBinError(293,49.96635);
   l1preW_stack_7->SetBinError(294,61.58057);
   l1preW_stack_7->SetBinError(295,61.24172);
   l1preW_stack_7->SetBinError(296,48.97094);
   l1preW_stack_7->SetBinError(297,85.54113);
   l1preW_stack_7->SetBinError(298,91.5481);
   l1preW_stack_7->SetBinError(299,167.7583);
   l1preW_stack_7->SetBinError(300,428.3184);
   l1preW_stack_7->SetBinError(301,478.0874);
   l1preW_stack_7->SetEntries(7889000);

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
   l1preW_stack_8->SetBinContent(251,0.2532256);
   l1preW_stack_8->SetBinContent(252,0.7596768);
   l1preW_stack_8->SetBinContent(253,2.532256);
   l1preW_stack_8->SetBinContent(254,6.583866);
   l1preW_stack_8->SetBinContent(255,2.785482);
   l1preW_stack_8->SetBinContent(256,15.44676);
   l1preW_stack_8->SetBinContent(257,110.4064);
   l1preW_stack_8->SetBinContent(258,26.33546);
   l1preW_stack_8->SetBinContent(259,15.44676);
   l1preW_stack_8->SetBinContent(260,40.26287);
   l1preW_stack_8->SetBinContent(261,68.11769);
   l1preW_stack_8->SetBinContent(262,207.8982);
   l1preW_stack_8->SetBinContent(263,102.8096);
   l1preW_stack_8->SetBinContent(264,50.89835);
   l1preW_stack_8->SetBinContent(265,67.61124);
   l1preW_stack_8->SetBinContent(266,109.6467);
   l1preW_stack_8->SetBinContent(267,403.1352);
   l1preW_stack_8->SetBinContent(268,56.72254);
   l1preW_stack_8->SetBinContent(269,77.23381);
   l1preW_stack_8->SetBinContent(270,105.5951);
   l1preW_stack_8->SetBinContent(271,147.8838);
   l1preW_stack_8->SetBinContent(272,325.1417);
   l1preW_stack_8->SetBinContent(273,651.5495);
   l1preW_stack_8->SetBinContent(274,1837.152);
   l1preW_stack_8->SetBinContent(275,219.0402);
   l1preW_stack_8->SetBinContent(276,100.7838);
   l1preW_stack_8->SetBinContent(277,166.3692);
   l1preW_stack_8->SetBinContent(278,310.4546);
   l1preW_stack_8->SetBinContent(279,1165.851);
   l1preW_stack_8->SetBinContent(280,140.7934);
   l1preW_stack_8->SetBinContent(281,631.0382);
   l1preW_stack_8->SetBinContent(282,618.1237);
   l1preW_stack_8->SetBinContent(283,820.451);
   l1preW_stack_8->SetBinContent(284,538.6109);
   l1preW_stack_8->SetBinContent(285,2026.058);
   l1preW_stack_8->SetBinContent(286,1053.925);
   l1preW_stack_8->SetBinContent(287,1168.636);
   l1preW_stack_8->SetBinContent(288,2104.811);
   l1preW_stack_8->SetBinContent(289,624.4544);
   l1preW_stack_8->SetBinContent(290,1687.242);
   l1preW_stack_8->SetBinContent(291,1955.408);
   l1preW_stack_8->SetBinContent(292,1695.599);
   l1preW_stack_8->SetBinContent(293,3038.961);
   l1preW_stack_8->SetBinContent(294,4987.278);
   l1preW_stack_8->SetBinContent(295,4757.603);
   l1preW_stack_8->SetBinContent(296,3440.576);
   l1preW_stack_8->SetBinContent(297,9302.496);
   l1preW_stack_8->SetBinContent(298,11666.36);
   l1preW_stack_8->SetBinContent(299,37928.64);
   l1preW_stack_8->SetBinContent(300,234102.3);
   l1preW_stack_8->SetBinContent(301,354544.5);
   l1preW_stack_8->SetBinError(251,0.2532256);
   l1preW_stack_8->SetBinError(252,0.4385996);
   l1preW_stack_8->SetBinError(253,0.8007697);
   l1preW_stack_8->SetBinError(254,1.291202);
   l1preW_stack_8->SetBinError(255,0.8398543);
   l1preW_stack_8->SetBinError(256,1.977755);
   l1preW_stack_8->SetBinError(257,5.287506);
   l1preW_stack_8->SetBinError(258,2.582405);
   l1preW_stack_8->SetBinError(259,1.977755);
   l1preW_stack_8->SetBinError(260,3.193053);
   l1preW_stack_8->SetBinError(261,4.153209);
   l1preW_stack_8->SetBinError(262,7.255698);
   l1preW_stack_8->SetBinError(263,5.102355);
   l1preW_stack_8->SetBinError(264,3.590093);
   l1preW_stack_8->SetBinError(265,4.137741);
   l1preW_stack_8->SetBinError(266,5.269284);
   l1preW_stack_8->SetBinError(267,10.10367);
   l1preW_stack_8->SetBinError(268,3.789934);
   l1preW_stack_8->SetBinError(269,4.422395);
   l1preW_stack_8->SetBinError(270,5.171013);
   l1preW_stack_8->SetBinError(271,6.119473);
   l1preW_stack_8->SetBinError(272,9.07382);
   l1preW_stack_8->SetBinError(273,12.84481);
   l1preW_stack_8->SetBinError(274,21.56882);
   l1preW_stack_8->SetBinError(275,7.447589);
   l1preW_stack_8->SetBinError(276,5.051835);
   l1preW_stack_8->SetBinError(277,6.490682);
   l1preW_stack_8->SetBinError(278,8.866513);
   l1preW_stack_8->SetBinError(279,17.18206);
   l1preW_stack_8->SetBinError(280,5.970972);
   l1preW_stack_8->SetBinError(281,12.64101);
   l1preW_stack_8->SetBinError(282,12.51099);
   l1preW_stack_8->SetBinError(283,14.41385);
   l1preW_stack_8->SetBinError(284,11.67862);
   l1preW_stack_8->SetBinError(285,22.6506);
   l1preW_stack_8->SetBinError(286,16.33649);
   l1preW_stack_8->SetBinError(287,17.20258);
   l1preW_stack_8->SetBinError(288,23.08662);
   l1preW_stack_8->SetBinError(289,12.57489);
   l1preW_stack_8->SetBinError(290,20.6701);
   l1preW_stack_8->SetBinError(291,22.25218);
   l1preW_stack_8->SetBinError(292,20.72122);
   l1preW_stack_8->SetBinError(293,27.74063);
   l1preW_stack_8->SetBinError(294,35.5374);
   l1preW_stack_8->SetBinError(295,34.70946);
   l1preW_stack_8->SetBinError(296,29.51681);
   l1preW_stack_8->SetBinError(297,48.53484);
   l1preW_stack_8->SetBinError(298,54.35274);
   l1preW_stack_8->SetBinError(299,98.00256);
   l1preW_stack_8->SetBinError(300,243.4763);
   l1preW_stack_8->SetBinError(301,299.6327);
   l1preW_stack_8->SetEntries(2706000);

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
   l1preW_stack_9->SetBinContent(251,0.001615117);
   l1preW_stack_9->SetBinContent(252,0.008075584);
   l1preW_stack_9->SetBinContent(253,0.07268026);
   l1preW_stack_9->SetBinContent(254,0.1841233);
   l1preW_stack_9->SetBinContent(255,0.1615117);
   l1preW_stack_9->SetBinContent(256,0.5313735);
   l1preW_stack_9->SetBinContent(257,2.572881);
   l1preW_stack_9->SetBinContent(258,0.6202049);
   l1preW_stack_9->SetBinContent(259,0.4635385);
   l1preW_stack_9->SetBinContent(260,1.395461);
   l1preW_stack_9->SetBinContent(261,2.232092);
   l1preW_stack_9->SetBinContent(262,5.210367);
   l1preW_stack_9->SetBinContent(263,2.177178);
   l1preW_stack_9->SetBinContent(264,1.886457);
   l1preW_stack_9->SetBinContent(265,2.106112);
   l1preW_stack_9->SetBinContent(266,3.769683);
   l1preW_stack_9->SetBinContent(267,8.975204);
   l1preW_stack_9->SetBinContent(268,1.468141);
   l1preW_stack_9->SetBinContent(269,2.4146);
   l1preW_stack_9->SetBinContent(270,3.66147);
   l1preW_stack_9->SetBinContent(271,4.879268);
   l1preW_stack_9->SetBinContent(272,10.0864);
   l1preW_stack_9->SetBinContent(273,18.30412);
   l1preW_stack_9->SetBinContent(274,43.29967);
   l1preW_stack_9->SetBinContent(275,7.759021);
   l1preW_stack_9->SetBinContent(276,4.637001);
   l1preW_stack_9->SetBinContent(277,5.420332);
   l1preW_stack_9->SetBinContent(278,14.83162);
   l1preW_stack_9->SetBinContent(279,30.6097);
   l1preW_stack_9->SetBinContent(280,6.676893);
   l1preW_stack_9->SetBinContent(281,21.33085);
   l1preW_stack_9->SetBinContent(282,18.89202);
   l1preW_stack_9->SetBinContent(283,22.93627);
   l1preW_stack_9->SetBinContent(284,27.16465);
   l1preW_stack_9->SetBinContent(285,59.90953);
   l1preW_stack_9->SetBinContent(286,33.9433);
   l1preW_stack_9->SetBinContent(287,39.41693);
   l1preW_stack_9->SetBinContent(288,53.29886);
   l1preW_stack_9->SetBinContent(289,33.61381);
   l1preW_stack_9->SetBinContent(290,56.99263);
   l1preW_stack_9->SetBinContent(291,66.49275);
   l1preW_stack_9->SetBinContent(292,75.43726);
   l1preW_stack_9->SetBinContent(293,110.1154);
   l1preW_stack_9->SetBinContent(294,191.9502);
   l1preW_stack_9->SetBinContent(295,161.7023);
   l1preW_stack_9->SetBinContent(296,149.8182);
   l1preW_stack_9->SetBinContent(297,298.9436);
   l1preW_stack_9->SetBinContent(298,468.6052);
   l1preW_stack_9->SetBinContent(299,1286.108);
   l1preW_stack_9->SetBinContent(300,6285.906);
   l1preW_stack_9->SetBinContent(301,6230.128);
   l1preW_stack_9->SetBinError(251,0.001615117);
   l1preW_stack_9->SetBinError(252,0.003611511);
   l1preW_stack_9->SetBinError(253,0.01083453);
   l1preW_stack_9->SetBinError(254,0.01724473);
   l1preW_stack_9->SetBinError(255,0.01615117);
   l1preW_stack_9->SetBinError(256,0.02929557);
   l1preW_stack_9->SetBinError(257,0.0644632);
   l1preW_stack_9->SetBinError(258,0.0316497);
   l1preW_stack_9->SetBinError(259,0.02736182);
   l1preW_stack_9->SetBinError(260,0.04747455);
   l1preW_stack_9->SetBinError(261,0.06004239);
   l1preW_stack_9->SetBinError(262,0.09173523);
   l1preW_stack_9->SetBinError(263,0.05929921);
   l1preW_stack_9->SetBinError(264,0.05519826);
   l1preW_stack_9->SetBinError(265,0.05832339);
   l1preW_stack_9->SetBinError(266,0.0780287);
   l1preW_stack_9->SetBinError(267,0.1203994);
   l1preW_stack_9->SetBinError(268,0.04869517);
   l1preW_stack_9->SetBinError(269,0.06244887);
   l1preW_stack_9->SetBinError(270,0.0769006);
   l1preW_stack_9->SetBinError(271,0.08877268);
   l1preW_stack_9->SetBinError(272,0.1276351);
   l1preW_stack_9->SetBinError(273,0.1719398);
   l1preW_stack_9->SetBinError(274,0.2644504);
   l1preW_stack_9->SetBinError(275,0.1119452);
   l1preW_stack_9->SetBinError(276,0.08654073);
   l1preW_stack_9->SetBinError(277,0.09356533);
   l1preW_stack_9->SetBinError(278,0.1547734);
   l1preW_stack_9->SetBinError(279,0.2223471);
   l1preW_stack_9->SetBinError(280,0.1038459);
   l1preW_stack_9->SetBinError(281,0.185612);
   l1preW_stack_9->SetBinError(282,0.1746792);
   l1preW_stack_9->SetBinError(283,0.1924702);
   l1preW_stack_9->SetBinError(284,0.2094614);
   l1preW_stack_9->SetBinError(285,0.3110641);
   l1preW_stack_9->SetBinError(286,0.2341418);
   l1preW_stack_9->SetBinError(287,0.2523152);
   l1preW_stack_9->SetBinError(288,0.2934006);
   l1preW_stack_9->SetBinError(289,0.2330027);
   l1preW_stack_9->SetBinError(290,0.303397);
   l1preW_stack_9->SetBinError(291,0.3277096);
   l1preW_stack_9->SetBinError(292,0.3490559);
   l1preW_stack_9->SetBinError(293,0.4217218);
   l1preW_stack_9->SetBinError(294,0.5567962);
   l1preW_stack_9->SetBinError(295,0.5110461);
   l1preW_stack_9->SetBinError(296,0.4919085);
   l1preW_stack_9->SetBinError(297,0.6948589);
   l1preW_stack_9->SetBinError(298,0.8699725);
   l1preW_stack_9->SetBinError(299,1.441255);
   l1preW_stack_9->SetBinError(300,3.186294);
   l1preW_stack_9->SetBinError(301,3.172126);
   l1preW_stack_9->SetEntries(9831562);

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
   l1preW_stack_10->SetBinContent(254,0.0004146255);
   l1preW_stack_10->SetBinContent(255,0.001243877);
   l1preW_stack_10->SetBinContent(256,0.003317004);
   l1preW_stack_10->SetBinContent(257,0.004146255);
   l1preW_stack_10->SetBinContent(258,0.004560881);
   l1preW_stack_10->SetBinContent(259,0.009536387);
   l1preW_stack_10->SetBinContent(260,0.05390132);
   l1preW_stack_10->SetBinContent(261,0.03648705);
   l1preW_stack_10->SetBinContent(262,0.07048634);
   l1preW_stack_10->SetBinContent(263,0.1102904);
   l1preW_stack_10->SetBinContent(264,0.2985304);
   l1preW_stack_10->SetBinContent(265,0.08416898);
   l1preW_stack_10->SetBinContent(266,0.3470416);
   l1preW_stack_10->SetBinContent(267,0.09163224);
   l1preW_stack_10->SetBinContent(268,0.1322655);
   l1preW_stack_10->SetBinContent(269,0.3267249);
   l1preW_stack_10->SetBinContent(270,0.2350927);
   l1preW_stack_10->SetBinContent(271,0.655523);
   l1preW_stack_10->SetBinContent(272,1.057295);
   l1preW_stack_10->SetBinContent(273,0.9154932);
   l1preW_stack_10->SetBinContent(274,0.5145503);
   l1preW_stack_10->SetBinContent(275,0.2811161);
   l1preW_stack_10->SetBinContent(276,0.8790061);
   l1preW_stack_10->SetBinContent(277,1.194122);
   l1preW_stack_10->SetBinContent(278,0.483868);
   l1preW_stack_10->SetBinContent(279,1.635698);
   l1preW_stack_10->SetBinContent(280,1.14561);
   l1preW_stack_10->SetBinContent(281,2.092615);
   l1preW_stack_10->SetBinContent(282,1.991446);
   l1preW_stack_10->SetBinContent(283,1.741842);
   l1preW_stack_10->SetBinContent(284,1.113684);
   l1preW_stack_10->SetBinContent(285,2.239807);
   l1preW_stack_10->SetBinContent(286,3.052059);
   l1preW_stack_10->SetBinContent(287,2.810747);
   l1preW_stack_10->SetBinContent(288,3.775995);
   l1preW_stack_10->SetBinContent(289,6.148067);
   l1preW_stack_10->SetBinContent(290,4.0965);
   l1preW_stack_10->SetBinContent(291,6.129409);
   l1preW_stack_10->SetBinContent(292,7.674719);
   l1preW_stack_10->SetBinContent(293,10.14589);
   l1preW_stack_10->SetBinContent(294,11.80812);
   l1preW_stack_10->SetBinContent(295,19.08936);
   l1preW_stack_10->SetBinContent(296,18.64281);
   l1preW_stack_10->SetBinContent(297,28.97611);
   l1preW_stack_10->SetBinContent(298,69.14544);
   l1preW_stack_10->SetBinContent(299,209.4116);
   l1preW_stack_10->SetBinContent(300,797.0993);
   l1preW_stack_10->SetBinContent(301,855.37);
   l1preW_stack_10->SetBinError(254,0.0004146255);
   l1preW_stack_10->SetBinError(255,0.0007181525);
   l1preW_stack_10->SetBinError(256,0.001172738);
   l1preW_stack_10->SetBinError(257,0.001311161);
   l1preW_stack_10->SetBinError(258,0.001375157);
   l1preW_stack_10->SetBinError(259,0.001988474);
   l1preW_stack_10->SetBinError(260,0.004727458);
   l1preW_stack_10->SetBinError(261,0.003889532);
   l1preW_stack_10->SetBinError(262,0.005406056);
   l1preW_stack_10->SetBinError(263,0.006762338);
   l1preW_stack_10->SetBinError(264,0.01112557);
   l1preW_stack_10->SetBinError(265,0.005907505);
   l1preW_stack_10->SetBinError(266,0.01199551);
   l1preW_stack_10->SetBinError(267,0.006163852);
   l1preW_stack_10->SetBinError(268,0.007405449);
   l1preW_stack_10->SetBinError(269,0.01163909);
   l1preW_stack_10->SetBinError(270,0.009872964);
   l1preW_stack_10->SetBinError(271,0.01648625);
   l1preW_stack_10->SetBinError(272,0.02093756);
   l1preW_stack_10->SetBinError(273,0.01948299);
   l1preW_stack_10->SetBinError(274,0.01460636);
   l1preW_stack_10->SetBinError(275,0.0107962);
   l1preW_stack_10->SetBinError(276,0.01909079);
   l1preW_stack_10->SetBinError(277,0.02225114);
   l1preW_stack_10->SetBinError(278,0.01416418);
   l1preW_stack_10->SetBinError(279,0.02604231);
   l1preW_stack_10->SetBinError(280,0.02179448);
   l1preW_stack_10->SetBinError(281,0.02945593);
   l1preW_stack_10->SetBinError(282,0.02873508);
   l1preW_stack_10->SetBinError(283,0.026874);
   l1preW_stack_10->SetBinError(284,0.02148865);
   l1preW_stack_10->SetBinError(285,0.03047427);
   l1preW_stack_10->SetBinError(286,0.03557332);
   l1preW_stack_10->SetBinError(287,0.03413806);
   l1preW_stack_10->SetBinError(288,0.03956796);
   l1preW_stack_10->SetBinError(289,0.05048907);
   l1preW_stack_10->SetBinError(290,0.04121303);
   l1preW_stack_10->SetBinError(291,0.0504124);
   l1preW_stack_10->SetBinError(292,0.05641041);
   l1preW_stack_10->SetBinError(293,0.06485942);
   l1preW_stack_10->SetBinError(294,0.06997105);
   l1preW_stack_10->SetBinError(295,0.08896593);
   l1preW_stack_10->SetBinError(296,0.08791919);
   l1preW_stack_10->SetBinError(297,0.1096095);
   l1preW_stack_10->SetBinError(298,0.1693206);
   l1preW_stack_10->SetBinError(299,0.2946649);
   l1preW_stack_10->SetBinError(300,0.5748893);
   l1preW_stack_10->SetBinError(301,0.5955319);
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
   l1preW_stack_11->SetBinContent(251,0.001580251);
   l1preW_stack_11->SetBinContent(252,0.001580251);
   l1preW_stack_11->SetBinContent(253,0.003160502);
   l1preW_stack_11->SetBinContent(254,0.01106176);
   l1preW_stack_11->SetBinContent(255,0.01106176);
   l1preW_stack_11->SetBinContent(256,0.03634578);
   l1preW_stack_11->SetBinContent(257,0.1090373);
   l1preW_stack_11->SetBinContent(258,0.02054326);
   l1preW_stack_11->SetBinContent(259,0.01422226);
   l1preW_stack_11->SetBinContent(260,0.0711113);
   l1preW_stack_11->SetBinContent(261,0.1343213);
   l1preW_stack_11->SetBinContent(262,0.2544204);
   l1preW_stack_11->SetBinContent(263,0.1121978);
   l1preW_stack_11->SetBinContent(264,0.09481507);
   l1preW_stack_11->SetBinContent(265,0.1327411);
   l1preW_stack_11->SetBinContent(266,0.2022721);
   l1preW_stack_11->SetBinContent(267,0.4677543);
   l1preW_stack_11->SetBinContent(268,0.07901256);
   l1preW_stack_11->SetBinContent(269,0.1343213);
   l1preW_stack_11->SetBinContent(270,0.2149142);
   l1preW_stack_11->SetBinContent(271,0.2512599);
   l1preW_stack_11->SetBinContent(272,0.5973349);
   l1preW_stack_11->SetBinContent(273,0.9607927);
   l1preW_stack_11->SetBinContent(274,2.354574);
   l1preW_stack_11->SetBinContent(275,0.4740753);
   l1preW_stack_11->SetBinContent(276,0.2417784);
   l1preW_stack_11->SetBinContent(277,0.2939267);
   l1preW_stack_11->SetBinContent(278,0.7774836);
   l1preW_stack_11->SetBinContent(279,1.566029);
   l1preW_stack_11->SetBinContent(280,0.3950628);
   l1preW_stack_11->SetBinContent(281,1.205732);
   l1preW_stack_11->SetBinContent(282,0.9497309);
   l1preW_stack_11->SetBinContent(283,1.166225);
   l1preW_stack_11->SetBinContent(284,1.556547);
   l1preW_stack_11->SetBinContent(285,3.201589);
   l1preW_stack_11->SetBinContent(286,1.804647);
   l1preW_stack_11->SetBinContent(287,2.215512);
   l1preW_stack_11->SetBinContent(288,2.89344);
   l1preW_stack_11->SetBinContent(289,1.874178);
   l1preW_stack_11->SetBinContent(290,3.073588);
   l1preW_stack_11->SetBinContent(291,3.617195);
   l1preW_stack_11->SetBinContent(292,4.102332);
   l1preW_stack_11->SetBinContent(293,5.990732);
   l1preW_stack_11->SetBinContent(294,10.41069);
   l1preW_stack_11->SetBinContent(295,8.571282);
   l1preW_stack_11->SetBinContent(296,8.045059);
   l1preW_stack_11->SetBinContent(297,15.635);
   l1preW_stack_11->SetBinContent(298,24.34219);
   l1preW_stack_11->SetBinContent(299,66.37687);
   l1preW_stack_11->SetBinContent(300,270.0317);
   l1preW_stack_11->SetBinContent(301,342.4357);
   l1preW_stack_11->SetBinError(251,0.001580251);
   l1preW_stack_11->SetBinError(252,0.001580251);
   l1preW_stack_11->SetBinError(253,0.002234813);
   l1preW_stack_11->SetBinError(254,0.004180952);
   l1preW_stack_11->SetBinError(255,0.004180952);
   l1preW_stack_11->SetBinError(256,0.007578618);
   l1preW_stack_11->SetBinError(257,0.01312655);
   l1preW_stack_11->SetBinError(258,0.005697677);
   l1preW_stack_11->SetBinError(259,0.004740753);
   l1preW_stack_11->SetBinError(260,0.01060065);
   l1preW_stack_11->SetBinError(261,0.0145692);
   l1preW_stack_11->SetBinError(262,0.02005114);
   l1preW_stack_11->SetBinError(263,0.01331543);
   l1preW_stack_11->SetBinError(264,0.01224057);
   l1preW_stack_11->SetBinError(265,0.01448324);
   l1preW_stack_11->SetBinError(266,0.0178785);
   l1preW_stack_11->SetBinError(267,0.02718767);
   l1preW_stack_11->SetBinError(268,0.01117406);
   l1preW_stack_11->SetBinError(269,0.0145692);
   l1preW_stack_11->SetBinError(270,0.01842874);
   l1preW_stack_11->SetBinError(271,0.01992621);
   l1preW_stack_11->SetBinError(272,0.03072359);
   l1preW_stack_11->SetBinError(273,0.03896529);
   l1preW_stack_11->SetBinError(274,0.06099851);
   l1preW_stack_11->SetBinError(275,0.02737075);
   l1preW_stack_11->SetBinError(276,0.01954663);
   l1preW_stack_11->SetBinError(277,0.02155175);
   l1preW_stack_11->SetBinError(278,0.03505167);
   l1preW_stack_11->SetBinError(279,0.04974655);
   l1preW_stack_11->SetBinError(280,0.02498596);
   l1preW_stack_11->SetBinError(281,0.04365042);
   l1preW_stack_11->SetBinError(282,0.03874033);
   l1preW_stack_11->SetBinError(283,0.04292935);
   l1preW_stack_11->SetBinError(284,0.04959572);
   l1preW_stack_11->SetBinError(285,0.07112886);
   l1preW_stack_11->SetBinError(286,0.0534022);
   l1preW_stack_11->SetBinError(287,0.0591698);
   l1preW_stack_11->SetBinError(288,0.06761924);
   l1preW_stack_11->SetBinError(289,0.05442124);
   l1preW_stack_11->SetBinError(290,0.06969248);
   l1preW_stack_11->SetBinError(291,0.07560474);
   l1preW_stack_11->SetBinError(292,0.08051531);
   l1preW_stack_11->SetBinError(293,0.0972978);
   l1preW_stack_11->SetBinError(294,0.1282634);
   l1preW_stack_11->SetBinError(295,0.116382);
   l1preW_stack_11->SetBinError(296,0.1127529);
   l1preW_stack_11->SetBinError(297,0.1571853);
   l1preW_stack_11->SetBinError(298,0.1961295);
   l1preW_stack_11->SetBinError(299,0.3238705);
   l1preW_stack_11->SetBinError(300,0.6532365);
   l1preW_stack_11->SetBinError(301,0.7356184);
   l1preW_stack_11->SetEntries(499616);

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
   l1preW_stack_12->SetBinContent(254,0.003944507);
   l1preW_stack_12->SetBinContent(255,0.001245634);
   l1preW_stack_12->SetBinContent(256,0.003736902);
   l1preW_stack_12->SetBinContent(257,0.03425493);
   l1preW_stack_12->SetBinContent(258,0.003114085);
   l1preW_stack_12->SetBinContent(259,0.003114085);
   l1preW_stack_12->SetBinContent(260,0.01536282);
   l1preW_stack_12->SetBinContent(261,0.01432479);
   l1preW_stack_12->SetBinContent(262,0.03965268);
   l1preW_stack_12->SetBinContent(263,0.03716141);
   l1preW_stack_12->SetBinContent(264,0.03695381);
   l1preW_stack_12->SetBinContent(265,0.02262902);
   l1preW_stack_12->SetBinContent(266,0.02408226);
   l1preW_stack_12->SetBinContent(267,0.09653663);
   l1preW_stack_12->SetBinContent(268,0.007681409);
   l1preW_stack_12->SetBinContent(269,0.03633099);
   l1preW_stack_12->SetBinContent(270,0.01909972);
   l1preW_stack_12->SetBinContent(271,0.02657352);
   l1preW_stack_12->SetBinContent(272,0.09134649);
   l1preW_stack_12->SetBinContent(273,0.09861269);
   l1preW_stack_12->SetBinContent(274,0.2626212);
   l1preW_stack_12->SetBinContent(275,0.1741811);
   l1preW_stack_12->SetBinContent(276,0.02698874);
   l1preW_stack_12->SetBinContent(277,0.04359719);
   l1preW_stack_12->SetBinContent(278,0.08677916);
   l1preW_stack_12->SetBinContent(279,0.316391);
   l1preW_stack_12->SetBinContent(280,0.03882226);
   l1preW_stack_12->SetBinContent(281,0.09944311);
   l1preW_stack_12->SetBinContent(282,0.1654617);
   l1preW_stack_12->SetBinContent(283,0.1627628);
   l1preW_stack_12->SetBinContent(284,0.2294042);
   l1preW_stack_12->SetBinContent(285,0.5412279);
   l1preW_stack_12->SetBinContent(286,0.2100969);
   l1preW_stack_12->SetBinContent(287,0.2514104);
   l1preW_stack_12->SetBinContent(288,0.3952812);
   l1preW_stack_12->SetBinContent(289,0.1592335);
   l1preW_stack_12->SetBinContent(290,0.3475319);
   l1preW_stack_12->SetBinContent(291,0.5621961);
   l1preW_stack_12->SetBinContent(292,0.5576288);
   l1preW_stack_12->SetBinContent(293,0.6136823);
   l1preW_stack_12->SetBinContent(294,1.420438);
   l1preW_stack_12->SetBinContent(295,1.276775);
   l1preW_stack_12->SetBinContent(296,1.018513);
   l1preW_stack_12->SetBinContent(297,1.946511);
   l1preW_stack_12->SetBinContent(298,2.504347);
   l1preW_stack_12->SetBinContent(299,7.429168);
   l1preW_stack_12->SetBinContent(300,34.475);
   l1preW_stack_12->SetBinContent(301,47.06067);
   l1preW_stack_12->SetBinError(254,0.0009049321);
   l1preW_stack_12->SetBinError(255,0.0005085279);
   l1preW_stack_12->SetBinError(256,0.0008807962);
   l1preW_stack_12->SetBinError(257,0.002666743);
   l1preW_stack_12->SetBinError(258,0.0008040532);
   l1preW_stack_12->SetBinError(259,0.0008040532);
   l1preW_stack_12->SetBinError(260,0.001785891);
   l1preW_stack_12->SetBinError(261,0.001724502);
   l1preW_stack_12->SetBinError(262,0.002869167);
   l1preW_stack_12->SetBinError(263,0.002777574);
   l1preW_stack_12->SetBinError(264,0.002769805);
   l1preW_stack_12->SetBinError(265,0.002167467);
   l1preW_stack_12->SetBinError(266,0.002235981);
   l1preW_stack_12->SetBinError(267,0.004476779);
   l1preW_stack_12->SetBinError(268,0.001262816);
   l1preW_stack_12->SetBinError(269,0.002746365);
   l1preW_stack_12->SetBinError(270,0.001991283);
   l1preW_stack_12->SetBinError(271,0.00234879);
   l1preW_stack_12->SetBinError(272,0.004354773);
   l1preW_stack_12->SetBinError(273,0.00452466);
   l1preW_stack_12->SetBinError(274,0.007383877);
   l1preW_stack_12->SetBinError(275,0.006013401);
   l1preW_stack_12->SetBinError(276,0.002367069);
   l1preW_stack_12->SetBinError(277,0.003008492);
   l1preW_stack_12->SetBinError(278,0.004244508);
   l1preW_stack_12->SetBinError(279,0.008104601);
   l1preW_stack_12->SetBinError(280,0.002838965);
   l1preW_stack_12->SetBinError(281,0.004543672);
   l1preW_stack_12->SetBinError(282,0.005860954);
   l1preW_stack_12->SetBinError(283,0.005812958);
   l1preW_stack_12->SetBinError(284,0.006901132);
   l1preW_stack_12->SetBinError(285,0.01060009);
   l1preW_stack_12->SetBinError(286,0.00660434);
   l1preW_stack_12->SetBinError(287,0.007224557);
   l1preW_stack_12->SetBinError(288,0.009058841);
   l1preW_stack_12->SetBinError(289,0.00574959);
   l1preW_stack_12->SetBinError(290,0.008494091);
   l1preW_stack_12->SetBinError(291,0.01080348);
   l1preW_stack_12->SetBinError(292,0.0107595);
   l1preW_stack_12->SetBinError(293,0.01128733);
   l1preW_stack_12->SetBinError(294,0.01717239);
   l1preW_stack_12->SetBinError(295,0.01628084);
   l1preW_stack_12->SetBinError(296,0.01454129);
   l1preW_stack_12->SetBinError(297,0.0201024);
   l1preW_stack_12->SetBinError(298,0.02280168);
   l1preW_stack_12->SetBinError(299,0.0392726);
   l1preW_stack_12->SetBinError(300,0.08460026);
   l1preW_stack_12->SetBinError(301,0.09884362);
   l1preW_stack_12->SetEntries(496094);

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
   
   TH1D *l1preW__15 = new TH1D("l1preW__15","",200,-2,2);
   l1preW__15->SetEntries(199);

   ci = TColor::GetColor("#000099");
   l1preW__15->SetLineColor(ci);
   l1preW__15->SetLineWidth(2);
   l1preW__15->SetMarkerStyle(20);
   l1preW__15->SetMarkerSize(1.2);
   l1preW__15->GetXaxis()->SetRange(1,200);
   l1preW__15->GetXaxis()->SetLabelFont(42);
   l1preW__15->GetXaxis()->SetTitleOffset(1);
   l1preW__15->GetXaxis()->SetTitleFont(42);
   l1preW__15->GetYaxis()->SetLabelFont(42);
   l1preW__15->GetYaxis()->SetTitleFont(42);
   l1preW__15->GetZaxis()->SetLabelFont(42);
   l1preW__15->GetZaxis()->SetTitleOffset(1);
   l1preW__15->GetZaxis()->SetTitleFont(42);
   l1preW__15->Draw("same E");
   
   Double_t Graph_from_l1preW_fx1015[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_l1preW_fy1015[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 15004.86, 36032.51, 151448.3, 1262138, 415946.6, 1546582, 3.150476e+07,
   1811155, 1189509, 6185105, 1.026994e+07, 8.808514e+07, 2.854055e+07, 6560819, 8410426, 1.433953e+07, 1.34336e+08, 5238988, 9634222, 1.209956e+07, 2.041147e+07, 7.334228e+07, 3.240394e+08,
   1.32088e+09, 7.864723e+07, 1.718148e+07, 1.960887e+07, 7.148153e+07, 5.789389e+08, 3.31344e+07, 4.818736e+08, 4.779449e+08, 5.997447e+08, 1.849469e+08, 1.056525e+09, 6.794573e+08, 6.133018e+08, 1.549757e+09, 2.307125e+08,
   9.867587e+08, 1.570475e+09, 1.004704e+09, 2.347023e+09, 3.230549e+09, 4.461535e+09, 1.807883e+09, 8.167151e+09, 1.203505e+10, 4.70429e+10, 3.727369e+11, 7.857236e+11, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   Double_t Graph_from_l1preW_fex1015[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_l1preW_fey1015[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 2370.734, 3184.312, 8416.199, 15033.42, 12118.65, 35395.86, 153583.1,
   69218.74, 50394.77, 93904.63, 188804.9, 627731.3, 149167.2, 96299.05, 139757.9, 202061.7, 651203.1, 150865.7, 170467.2, 215379.4, 293551.2, 452906.6, 1813359,
   3868448, 245840, 244090, 286375.1, 605813.7, 2157559, 519724.9, 2476507, 2284975, 2722878, 810676.4, 3138257, 2836590, 2471638, 4231958, 1435519,
   3259507, 4224037, 2391054, 5306492, 4942775, 7022394, 3446550, 9893663, 1.22045e+07, 2.432022e+07, 7.283997e+07, 1.0597e+08, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   TGraphErrors *gre = new TGraphErrors(500,Graph_from_l1preW_fx1015,Graph_from_l1preW_fy1015,Graph_from_l1preW_fex1015,Graph_from_l1preW_fey1015);
   gre->SetName("Graph_from_l1preW");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_l1preW1015 = new TH1F("Graph_Graph_from_l1preW1015","",500,-6,6);
   Graph_Graph_from_l1preW1015->SetMinimum(0);
   Graph_Graph_from_l1preW1015->SetMaximum(8.644125e+11);
   Graph_Graph_from_l1preW1015->SetDirectory(nullptr);
   Graph_Graph_from_l1preW1015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_l1preW1015->SetLineColor(ci);
   Graph_Graph_from_l1preW1015->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1015->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1015->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1015->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_l1preW1015->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_l1preW1015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_l1preW1015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_l1preW1015);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.42,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("l1preW","Data (JetHT, 2017)","p");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   l1preW__17->cd();
  
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
   
   TH1D *data_mc_ratio__16 = new TH1D("data_mc_ratio__16","",200,-2,2);
   data_mc_ratio__16->SetMinimum(0.4);
   data_mc_ratio__16->SetMaximum(1.6);
   data_mc_ratio__16->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__16->SetLineColor(ci);
   data_mc_ratio__16->SetLineWidth(2);
   data_mc_ratio__16->SetMarkerStyle(20);
   data_mc_ratio__16->SetMarkerSize(1.2);
   data_mc_ratio__16->GetXaxis()->SetTitle("L1 Pre-Firing Scale");
   data_mc_ratio__16->GetXaxis()->SetRange(1,200);
   data_mc_ratio__16->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__16->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__16->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__16->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__16->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__16->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__16->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__16->GetZaxis()->SetTitleOffset(1);
   data_mc_ratio__16->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__16->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1016[500] = { -4.99, -4.97, -4.95, -4.93, -4.91, -4.89, -4.87, -4.85, -4.83, -4.81, -4.79, -4.77, -4.75, -4.73, -4.71, -4.69, -4.67,
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
   Double_t Graph_from_mc_statistical_error_fy1016[500] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
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
   Double_t Graph_from_mc_statistical_error_fex1016[500] = { 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01, 0.01,
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
   Double_t Graph_from_mc_statistical_error_fey1016[500] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0.1579977, 0.08837329, 0.05557144, 0.01191107, 0.02913512, 0.02288651, 0.004874917,
   0.038218, 0.04236602, 0.01518238, 0.01838422, 0.007126415, 0.005226502, 0.0146779, 0.01661722, 0.01409124, 0.004847571, 0.02879673, 0.01769393, 0.0178006, 0.01438168, 0.006175246, 0.005596106,
   0.002928689, 0.003125857, 0.01420658, 0.01460436, 0.008475108, 0.003726748, 0.01568536, 0.005139328, 0.004780833, 0.004540062, 0.004383292, 0.002970358, 0.004174788, 0.004030052, 0.002730723, 0.006222111,
   0.003303247, 0.002689656, 0.00237986, 0.002260946, 0.001530011, 0.001573986, 0.001906401, 0.001211397, 0.00101408, 0.0005169796, 0.0001954193, 0.0001348693, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
   gre = new TGraphErrors(500,Graph_from_mc_statistical_error_fx1016,Graph_from_mc_statistical_error_fy1016,Graph_from_mc_statistical_error_fex1016,Graph_from_mc_statistical_error_fey1016);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1016 = new TH1F("Graph_Graph_from_mc_statistical_error1016","",500,-6,6);
   Graph_Graph_from_mc_statistical_error1016->SetMinimum(0.8104027);
   Graph_Graph_from_mc_statistical_error1016->SetMaximum(1.189597);
   Graph_Graph_from_mc_statistical_error1016->SetDirectory(nullptr);
   Graph_Graph_from_mc_statistical_error1016->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1016->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_from_mc_statistical_error1016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1016);
   
   gre->Draw("e2");
   TLine *line = new TLine(-2,1,2,1);
   line->Draw();
   bottomPad->Modified();
   l1preW__17->cd();
   l1preW__17->Modified();
   l1preW__17->cd();
   l1preW__17->SetSelected(l1preW__17);
}
