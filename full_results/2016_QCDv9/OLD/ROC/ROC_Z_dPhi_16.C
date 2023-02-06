#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dPhi_16()
{
//=========Macro generated from canvas: ROC_Z_dPhi_16/ROC_Z_dPhi_16
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dPhi_16 = new TCanvas("ROC_Z_dPhi_16", "ROC_Z_dPhi_16",0,0,600,600);
   ROC_Z_dPhi_16->SetHighLightColor(2);
   ROC_Z_dPhi_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dPhi_16->SetFillColor(0);
   ROC_Z_dPhi_16->SetBorderMode(0);
   ROC_Z_dPhi_16->SetBorderSize(2);
   ROC_Z_dPhi_16->SetGridx();
   ROC_Z_dPhi_16->SetGridy();
   ROC_Z_dPhi_16->SetLeftMargin(0.15709);
   ROC_Z_dPhi_16->SetRightMargin(0.1234783);
   ROC_Z_dPhi_16->SetBottomMargin(0.12);
   ROC_Z_dPhi_16->SetFrameBorderMode(0);
   ROC_Z_dPhi_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx285[120] = {
   0,
   0.01027288,
   0.02124135,
   0.02941646,
   0.03896724,
   0.04888124,
   0.05938086,
   0.06810802,
   0.07939427,
   0.08970909,
   0.09966296,
   0.109914,
   0.1251838,
   0.1384138,
   0.1545446,
   0.1694932,
   0.1841125,
   0.1987556,
   0.2121133,
   0.2240104,
   0.2401727,
   0.2518988,
   0.2650956,
   0.2749549,
   0.2851116,
   0.2952282,
   0.307151,
   0.3168783,
   0.3246191,
   0.3323871,
   0.3412659,
   0.3506145,
   0.3589695,
   0.3659888,
   0.376338,
   0.3849596,
   0.3922401,
   0.4001653,
   0.4093174,
   0.4154525,
   0.4227745,
   0.4316237,
   0.43758,
   0.445179,
   0.4530755,
   0.4618127,
   0.4707218,
   0.4820894,
   0.489613,
   0.4974038,
   0.5041026,
   0.5137357,
   0.524459,
   0.5347067,
   0.5427051,
   0.5493051,
   0.5584188,
   0.5715108,
   0.5819163,
   0.587232,
   0.5974121,
   0.6054376,
   0.6129141,
   0.6191492,
   0.6290371,
   0.6393167,
   0.649742,
   0.6587543,
   0.6684663,
   0.678607,
   0.6914481,
   0.7003093,
   0.7100208,
   0.7225854,
   0.733252,
   0.7422978,
   0.7506506,
   0.7628939,
   0.7745279,
   0.7846397,
   0.7982428,
   0.8089654,
   0.8225037,
   0.832648,
   0.8467112,
   0.8605117,
   0.8759776,
   0.8881942,
   0.9014787,
   0.9167993,
   0.9344293,
   0.9512827,
   0.967739,
   0.9831699,
   0.9977825,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy285[120] = {
   0,
   0.01194299,
   0.02135742,
   0.02866757,
   0.03810655,
   0.04915117,
   0.05887415,
   0.06787414,
   0.07606675,
   0.08406293,
   0.09264762,
   0.1043076,
   0.1124778,
   0.1226268,
   0.1338956,
   0.148491,
   0.1614031,
   0.1756684,
   0.1906941,
   0.2053244,
   0.222319,
   0.235705,
   0.2552398,
   0.2738136,
   0.2899426,
   0.3048302,
   0.321022,
   0.3341914,
   0.3461469,
   0.3607469,
   0.3776149,
   0.3890821,
   0.4007883,
   0.4140651,
   0.4291543,
   0.4423534,
   0.4520806,
   0.461848,
   0.4738937,
   0.485264,
   0.4961717,
   0.507542,
   0.516289,
   0.5281427,
   0.537455,
   0.550318,
   0.560591,
   0.567188,
   0.5741459,
   0.5843105,
   0.5928044,
   0.601794,
   0.6091555,
   0.6196196,
   0.6274483,
   0.6360971,
   0.6424231,
   0.651143,
   0.66067,
   0.6672671,
   0.6727054,
   0.6813842,
   0.6882658,
   0.6960314,
   0.7055877,
   0.7135221,
   0.7210457,
   0.7300471,
   0.7384652,
   0.7493144,
   0.7593999,
   0.7659318,
   0.7784726,
   0.7890883,
   0.7984424,
   0.8087358,
   0.8181844,
   0.8262453,
   0.8357426,
   0.8438714,
   0.853005,
   0.8620566,
   0.872262,
   0.8823619,
   0.8938302,
   0.9062301,
   0.9142949,
   0.9242127,
   0.9331227,
   0.9421298,
   0.9546727,
   0.9642195,
   0.9769256,
   0.9867275,
   0.9975125,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(120,Graph_fx285,Graph_fy285);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph285 = new TH1F("Graph_Graph285","Tagging Only",120,0,1.1);
   Graph_Graph285->SetMinimum(0);
   Graph_Graph285->SetMaximum(1.1);
   Graph_Graph285->SetDirectory(0);
   Graph_Graph285->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph285->SetLineColor(ci);
   Graph_Graph285->GetXaxis()->SetLabelFont(42);
   Graph_Graph285->GetXaxis()->SetTitleOffset(1);
   Graph_Graph285->GetXaxis()->SetTitleFont(42);
   Graph_Graph285->GetYaxis()->SetLabelFont(42);
   Graph_Graph285->GetYaxis()->SetTitleFont(42);
   Graph_Graph285->GetZaxis()->SetLabelFont(42);
   Graph_Graph285->GetZaxis()->SetTitleOffset(1);
   Graph_Graph285->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph285);
   
   TLatex *   tex = new TLatex(0.05938086,0.1188742,"0.216666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(286);
      tex = new TLatex(0.06810802,0.1278741,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(287);
      tex = new TLatex(0.07939427,0.1360667,"0.283333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(288);
      tex = new TLatex(0.08970909,0.1440629,"0.316666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(289);
      tex = new TLatex(0.09966296,0.1526476,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(290);
      tex = new TLatex(0.109914,0.1643076,"0.383333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(291);
      tex = new TLatex(0.1251838,0.1724778,"0.416666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(292);
      tex = new TLatex(0.1384138,0.1826268,"0.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(293);
      tex = new TLatex(0.1545446,0.1938956,"0.483333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(294);
      tex = new TLatex(0.1694932,0.208491,"0.516666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(295);
      tex = new TLatex(0.1841125,0.2214031,"0.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(296);
      tex = new TLatex(0.1987556,0.2356684,"0.583333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(297);
      tex = new TLatex(0.2121133,0.2506941,"0.616666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(298);
      tex = new TLatex(0.2240104,0.2653244,"0.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(299);
      tex = new TLatex(0.2401727,0.282319,"0.683333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(300);
      tex = new TLatex(0.2518988,0.295705,"0.716666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(301);
      tex = new TLatex(0.2650956,0.3152398,"0.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(302);
      tex = new TLatex(0.2749549,0.3338136,"0.783333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(303);
      tex = new TLatex(0.2851116,0.3499426,"0.816666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(304);
      tex = new TLatex(0.2952282,0.3648302,"0.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(305);
      tex = new TLatex(0.307151,0.381022,"0.883333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(306);
      tex = new TLatex(0.3168783,0.3941914,"0.916666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(307);
      tex = new TLatex(0.3246191,0.4061469,"0.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(308);
      tex = new TLatex(0.3323871,0.4207469,"0.983333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(309);
      tex = new TLatex(0.3412659,0.4376149,"1.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(310);
      tex = new TLatex(0.3506145,0.4490821,"1.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(311);
      tex = new TLatex(0.3589695,0.4607883,"1.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(312);
      tex = new TLatex(0.3659888,0.4740651,"1.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(313);
      tex = new TLatex(0.376338,0.4891543,"1.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(314);
      tex = new TLatex(0.3849596,0.5023534,"1.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(315);
      tex = new TLatex(0.3922401,0.5120806,"1.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(316);
      tex = new TLatex(0.4001653,0.521848,"1.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(317);
      tex = new TLatex(0.4093174,0.5338937,"1.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(318);
      tex = new TLatex(0.4154525,0.545264,"1.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(319);
      tex = new TLatex(0.4227745,0.5561717,"1.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(320);
      tex = new TLatex(0.4316237,0.567542,"1.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(321);
      tex = new TLatex(0.43758,0.576289,"1.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(322);
      tex = new TLatex(0.445179,0.5881427,"1.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(323);
      tex = new TLatex(0.4530755,0.597455,"1.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(324);
      tex = new TLatex(0.4618127,0.610318,"1.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(325);
      tex = new TLatex(0.4707218,0.620591,"1.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(326);
      tex = new TLatex(0.4820894,0.627188,"1.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(327);
      tex = new TLatex(0.489613,0.6341459,"1.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(328);
      tex = new TLatex(0.4974038,0.6443105,"1.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(329);
      tex = new TLatex(0.5041026,0.6528044,"1.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(330);
      tex = new TLatex(0.5137357,0.661794,"1.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(331);
      tex = new TLatex(0.524459,0.6691555,"1.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(332);
      tex = new TLatex(0.5347067,0.6796196,"1.78333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(333);
      tex = new TLatex(0.5427051,0.6874483,"1.81666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(334);
      tex = new TLatex(0.5493051,0.6960971,"1.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(335);
      tex = new TLatex(0.5584188,0.7024231,"1.88333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(336);
      tex = new TLatex(0.5715108,0.711143,"1.91666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(337);
      tex = new TLatex(0.5819163,0.72067,"1.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(338);
      tex = new TLatex(0.587232,0.7272671,"1.98333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(339);
      tex = new TLatex(0.5974121,0.7327054,"2.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(340);
      tex = new TLatex(0.6054376,0.7413842,"2.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(341);
      tex = new TLatex(0.6129141,0.7482658,"2.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(342);
      tex = new TLatex(0.6191492,0.7560314,"2.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(343);
      tex = new TLatex(0.6290371,0.7655877,"2.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(344);
      tex = new TLatex(0.6393167,0.7735221,"2.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(345);
      tex = new TLatex(0.649742,0.7810457,"2.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(346);
      tex = new TLatex(0.6587543,0.7900471,"2.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(347);
      tex = new TLatex(0.6684663,0.7984652,"2.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(348);
      tex = new TLatex(0.678607,0.8093144,"2.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(349);
      tex = new TLatex(0.6914481,0.8193999,"2.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(350);
      tex = new TLatex(0.7003093,0.8259318,"2.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(351);
      tex = new TLatex(0.7100208,0.8384726,"2.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(352);
      tex = new TLatex(0.7225854,0.8490883,"2.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(353);
      tex = new TLatex(0.733252,0.8584424,"2.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(354);
      tex = new TLatex(0.7422978,0.8687358,"2.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(355);
      tex = new TLatex(0.7506506,0.8781844,"2.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(356);
      tex = new TLatex(0.7628939,0.8862453,"2.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(357);
      tex = new TLatex(0.7745279,0.8957426,"2.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(358);
      tex = new TLatex(0.7846397,0.9038714,"2.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(359);
      tex = new TLatex(0.7982428,0.913005,"2.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(360);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx361[120] = {
   0,
   0.01200281,
   0.02226245,
   0.03878751,
   0.05495883,
   0.07345433,
   0.09844292,
   0.1201069,
   0.1327517,
   0.1662927,
   0.1873886,
   0.2065066,
   0.2241862,
   0.2635058,
   0.2894535,
   0.3026971,
   0.3208033,
   0.3398384,
   0.3573501,
   0.3795787,
   0.3943921,
   0.4069362,
   0.4379788,
   0.4536291,
   0.4673119,
   0.4803646,
   0.4891947,
   0.5021397,
   0.5143657,
   0.5228935,
   0.5332663,
   0.5480001,
   0.563288,
   0.5771789,
   0.5832563,
   0.5892542,
   0.6002978,
   0.6179524,
   0.6257358,
   0.642942,
   0.6481654,
   0.6545448,
   0.6608508,
   0.6698859,
   0.6751544,
   0.6801601,
   0.6977796,
   0.7142088,
   0.7172409,
   0.729206,
   0.7348166,
   0.7472804,
   0.7560392,
   0.7729822,
   0.7770956,
   0.7831511,
   0.7872678,
   0.7911066,
   0.7968652,
   0.8013259,
   0.8114526,
   0.8225405,
   0.827898,
   0.8390651,
   0.8440773,
   0.8474687,
   0.8509774,
   0.8564382,
   0.8610003,
   0.8638201,
   0.8662645,
   0.877405,
   0.8792776,
   0.8833103,
   0.8865845,
   0.8966646,
   0.8989759,
   0.9018487,
   0.9189074,
   0.9222786,
   0.9252246,
   0.9269377,
   0.9351798,
   0.9375483,
   0.954831,
   0.9641014,
   0.9669276,
   0.9688889,
   0.9718868,
   0.9735136,
   0.9748872,
   0.9769352,
   0.9860444,
   0.9956032,
   0.9986489,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy361[120] = {
   0,
   0.01806169,
   0.03138767,
   0.0455381,
   0.05841004,
   0.07225811,
   0.08866031,
   0.1089097,
   0.1179984,
   0.1259156,
   0.1473398,
   0.1588158,
   0.170658,
   0.1892551,
   0.2070519,
   0.2266281,
   0.2406293,
   0.25195,
   0.2674501,
   0.2873154,
   0.3108398,
   0.3250997,
   0.3485055,
   0.3705452,
   0.3957827,
   0.4148658,
   0.4327723,
   0.4658925,
   0.4864236,
   0.5024907,
   0.5243113,
   0.5437597,
   0.558397,
   0.5789451,
   0.5918774,
   0.6134413,
   0.6257924,
   0.6429274,
   0.6580205,
   0.6698607,
   0.6922983,
   0.7077862,
   0.7328707,
   0.7436886,
   0.7530316,
   0.7619961,
   0.7774606,
   0.7833546,
   0.7945018,
   0.8044128,
   0.8161459,
   0.8294984,
   0.8333915,
   0.8369551,
   0.8522877,
   0.8546741,
   0.8656314,
   0.8678732,
   0.8761745,
   0.8800992,
   0.8855372,
   0.8910465,
   0.8977719,
   0.9052389,
   0.9119252,
   0.9150565,
   0.9200811,
   0.9238968,
   0.9275157,
   0.9311063,
   0.9412555,
   0.9414169,
   0.9450028,
   0.9504684,
   0.9515766,
   0.9582654,
   0.963173,
   0.9671779,
   0.9673735,
   0.9705979,
   0.9724894,
   0.9745239,
   0.9762371,
   0.9764227,
   0.9783623,
   0.9834183,
   0.986417,
   0.9866279,
   0.9881967,
   0.9899489,
   0.9941177,
   0.9956592,
   0.9956592,
   0.9965522,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(120,Graph_fx361,Graph_fy361);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph361 = new TH1F("Graph_Graph361","Mass-Matching Prioritized",120,0,1.1);
   Graph_Graph361->SetMinimum(0);
   Graph_Graph361->SetMaximum(1.1);
   Graph_Graph361->SetDirectory(0);
   Graph_Graph361->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph361->SetLineColor(ci);
   Graph_Graph361->GetXaxis()->SetLabelFont(42);
   Graph_Graph361->GetXaxis()->SetTitleOffset(1);
   Graph_Graph361->GetXaxis()->SetTitleFont(42);
   Graph_Graph361->GetYaxis()->SetLabelFont(42);
   Graph_Graph361->GetYaxis()->SetTitleFont(42);
   Graph_Graph361->GetZaxis()->SetLabelFont(42);
   Graph_Graph361->GetZaxis()->SetTitleOffset(1);
   Graph_Graph361->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph361);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx362[120] = {
   0,
   0.01019277,
   0.0215601,
   0.02970643,
   0.03920385,
   0.04911115,
   0.05947368,
   0.06813515,
   0.07930176,
   0.08951448,
   0.09949561,
   0.1096955,
   0.1247369,
   0.1378213,
   0.1536655,
   0.1684716,
   0.1829358,
   0.1972872,
   0.2105166,
   0.2222609,
   0.2382692,
   0.2498702,
   0.2628308,
   0.2726237,
   0.2826407,
   0.2926615,
   0.3043348,
   0.3139869,
   0.3217773,
   0.3296068,
   0.3383411,
   0.3476433,
   0.3559566,
   0.3638868,
   0.3741436,
   0.3826677,
   0.3898929,
   0.3977741,
   0.407491,
   0.4143983,
   0.4217171,
   0.4308363,
   0.436695,
   0.4443187,
   0.4521044,
   0.4607475,
   0.4695752,
   0.4808382,
   0.4883593,
   0.4960349,
   0.502672,
   0.5128679,
   0.5235025,
   0.5335663,
   0.5414385,
   0.5488596,
   0.5578422,
   0.5708313,
   0.5810636,
   0.5863292,
   0.5964285,
   0.6044764,
   0.6118238,
   0.618067,
   0.6279397,
   0.6382485,
   0.6491469,
   0.657994,
   0.6676808,
   0.6783443,
   0.6911279,
   0.7006464,
   0.7095231,
   0.7225535,
   0.7330052,
   0.7419572,
   0.7503219,
   0.7624692,
   0.7739175,
   0.7840301,
   0.7974218,
   0.8080814,
   0.8214752,
   0.8317048,
   0.8456297,
   0.8592777,
   0.8754689,
   0.8877517,
   0.9010269,
   0.9161104,
   0.9335235,
   0.9510223,
   0.9680313,
   0.9832103,
   0.9978061,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy362[120] = {
   0,
   0.01173963,
   0.02195932,
   0.02952703,
   0.03901022,
   0.04928704,
   0.06023221,
   0.0692014,
   0.07722833,
   0.08609746,
   0.09497086,
   0.1062809,
   0.1148432,
   0.1259969,
   0.1366966,
   0.1500192,
   0.1634561,
   0.1776548,
   0.1921981,
   0.2060491,
   0.2216304,
   0.2364208,
   0.2560353,
   0.274212,
   0.2895763,
   0.3035318,
   0.3195884,
   0.3346882,
   0.3484006,
   0.3623404,
   0.3786883,
   0.3900205,
   0.4021588,
   0.4146524,
   0.4296763,
   0.4424606,
   0.4526279,
   0.4629919,
   0.4741527,
   0.4844439,
   0.4954302,
   0.5060235,
   0.5149591,
   0.5257989,
   0.5348915,
   0.5451276,
   0.5544692,
   0.5609887,
   0.5676644,
   0.577783,
   0.5854488,
   0.5938379,
   0.6009286,
   0.6112503,
   0.6195091,
   0.6291466,
   0.6354553,
   0.6440833,
   0.6536993,
   0.6605316,
   0.6666485,
   0.6760157,
   0.6841206,
   0.6916138,
   0.701563,
   0.710244,
   0.7183793,
   0.7276397,
   0.7365628,
   0.7472238,
   0.7571049,
   0.7644288,
   0.7766676,
   0.7866351,
   0.7961549,
   0.8063537,
   0.8152427,
   0.8248825,
   0.8333286,
   0.842762,
   0.8516681,
   0.8592419,
   0.87004,
   0.8814508,
   0.892093,
   0.9036474,
   0.913002,
   0.9247275,
   0.9340742,
   0.9429204,
   0.9557177,
   0.966029,
   0.978005,
   0.9875146,
   0.9974414,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(120,Graph_fx362,Graph_fy362);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph362 = new TH1F("Graph_Graph362","Tagging Prioritized",120,0,1.1);
   Graph_Graph362->SetMinimum(0);
   Graph_Graph362->SetMaximum(1.1);
   Graph_Graph362->SetDirectory(0);
   Graph_Graph362->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph362->SetLineColor(ci);
   Graph_Graph362->GetXaxis()->SetLabelFont(42);
   Graph_Graph362->GetXaxis()->SetTitleOffset(1);
   Graph_Graph362->GetXaxis()->SetTitleFont(42);
   Graph_Graph362->GetYaxis()->SetLabelFont(42);
   Graph_Graph362->GetYaxis()->SetTitleFont(42);
   Graph_Graph362->GetZaxis()->SetLabelFont(42);
   Graph_Graph362->GetZaxis()->SetTitleOffset(1);
   Graph_Graph362->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph362);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dPhi_16->Modified();
   ROC_Z_dPhi_16->cd();
   ROC_Z_dPhi_16->SetSelected(ROC_Z_dPhi_16);
}
