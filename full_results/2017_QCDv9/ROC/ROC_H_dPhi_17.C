#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dPhi_17()
{
//=========Macro generated from canvas: ROC_H_dPhi_17/ROC_H_dPhi_17
//=========  (Tue Jan 24 15:01:28 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dPhi_17 = new TCanvas("ROC_H_dPhi_17", "ROC_H_dPhi_17",0,0,600,600);
   ROC_H_dPhi_17->SetHighLightColor(2);
   ROC_H_dPhi_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dPhi_17->SetFillColor(0);
   ROC_H_dPhi_17->SetBorderMode(0);
   ROC_H_dPhi_17->SetBorderSize(2);
   ROC_H_dPhi_17->SetGridx();
   ROC_H_dPhi_17->SetGridy();
   ROC_H_dPhi_17->SetLeftMargin(0.15709);
   ROC_H_dPhi_17->SetRightMargin(0.1234783);
   ROC_H_dPhi_17->SetBottomMargin(0.12);
   ROC_H_dPhi_17->SetFrameBorderMode(0);
   ROC_H_dPhi_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx612[120] = {
   0,
   0.006762992,
   0.0168182,
   0.02379595,
   0.02995709,
   0.03817404,
   0.0454058,
   0.05277832,
   0.0617989,
   0.07045883,
   0.07999056,
   0.08945801,
   0.1027349,
   0.1139055,
   0.1243908,
   0.1375146,
   0.1465889,
   0.1562528,
   0.1668612,
   0.1770016,
   0.1896491,
   0.2012067,
   0.2094777,
   0.2193461,
   0.2286215,
   0.2372469,
   0.2434808,
   0.2515625,
   0.2595419,
   0.2682754,
   0.2763788,
   0.2846106,
   0.2926871,
   0.2996234,
   0.3075439,
   0.3141125,
   0.3235556,
   0.3343439,
   0.3408461,
   0.3519964,
   0.3606552,
   0.3698414,
   0.3768382,
   0.3856504,
   0.39384,
   0.4013244,
   0.4111326,
   0.4201385,
   0.4296011,
   0.4391385,
   0.448473,
   0.4600223,
   0.4685225,
   0.4779876,
   0.4866258,
   0.4950642,
   0.504027,
   0.5120766,
   0.519592,
   0.5286881,
   0.539553,
   0.5494103,
   0.5595108,
   0.5696422,
   0.5773725,
   0.5875807,
   0.5963777,
   0.6074483,
   0.618399,
   0.6330802,
   0.6422851,
   0.6523578,
   0.6654808,
   0.6777545,
   0.6911014,
   0.7037062,
   0.7134807,
   0.7286424,
   0.7416341,
   0.7526418,
   0.7689649,
   0.7831011,
   0.7972136,
   0.8127775,
   0.8244587,
   0.8392565,
   0.8548533,
   0.8681092,
   0.8844978,
   0.9045876,
   0.9272287,
   0.9405875,
   0.9577203,
   0.9739664,
   0.9954012,
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
   Double_t Graph_fy612[120] = {
   0,
   0.005115013,
   0.01066407,
   0.01587648,
   0.02115329,
   0.02718781,
   0.03251863,
   0.03823687,
   0.04389618,
   0.05243819,
   0.05876622,
   0.06551412,
   0.07054301,
   0.07886534,
   0.08664973,
   0.09546961,
   0.102073,
   0.1112422,
   0.1213229,
   0.1301857,
   0.1396842,
   0.1474723,
   0.1559986,
   0.1639599,
   0.1734536,
   0.18313,
   0.1936897,
   0.2022255,
   0.2105829,
   0.2210578,
   0.2323881,
   0.2434303,
   0.2552439,
   0.2640932,
   0.2758394,
   0.2888287,
   0.2990518,
   0.3083665,
   0.3211357,
   0.3335614,
   0.3424298,
   0.3510794,
   0.3621046,
   0.3729813,
   0.3848419,
   0.3970866,
   0.4097577,
   0.4227253,
   0.432524,
   0.4459528,
   0.4558447,
   0.4691828,
   0.4789974,
   0.4912718,
   0.5033276,
   0.5143003,
   0.5272469,
   0.5380276,
   0.5469172,
   0.558589,
   0.5712152,
   0.5831773,
   0.5919709,
   0.6044447,
   0.6159122,
   0.6271738,
   0.6367519,
   0.645809,
   0.65774,
   0.6677159,
   0.6784378,
   0.6885198,
   0.7012386,
   0.712044,
   0.7234254,
   0.7359982,
   0.7462146,
   0.7546947,
   0.7651183,
   0.7770399,
   0.7895269,
   0.8031403,
   0.8180651,
   0.8353985,
   0.8503899,
   0.8627731,
   0.8772517,
   0.8935088,
   0.909222,
   0.9263907,
   0.9400219,
   0.9544399,
   0.969526,
   0.9836199,
   0.9971127,
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
   TGraph *graph = new TGraph(120,Graph_fx612,Graph_fy612);
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
   
   TH1F *Graph_Graph612 = new TH1F("Graph_Graph612","Tagging Only",120,0,1.1);
   Graph_Graph612->SetMinimum(0);
   Graph_Graph612->SetMaximum(1.1);
   Graph_Graph612->SetDirectory(0);
   Graph_Graph612->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph612->SetLineColor(ci);
   Graph_Graph612->GetXaxis()->SetLabelFont(42);
   Graph_Graph612->GetXaxis()->SetTitleOffset(1);
   Graph_Graph612->GetXaxis()->SetTitleFont(42);
   Graph_Graph612->GetYaxis()->SetLabelFont(42);
   Graph_Graph612->GetYaxis()->SetTitleFont(42);
   Graph_Graph612->GetZaxis()->SetLabelFont(42);
   Graph_Graph612->GetZaxis()->SetTitleOffset(1);
   Graph_Graph612->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph612);
   
   TLatex *   tex = new TLatex(0.05277832,0.09823687,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(613);
      tex = new TLatex(0.0617989,0.1038962,"0.283333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(614);
      tex = new TLatex(0.07045883,0.1124382,"0.316666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(615);
      tex = new TLatex(0.07999056,0.1187662,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(616);
      tex = new TLatex(0.08945801,0.1255141,"0.383333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(617);
      tex = new TLatex(0.1027349,0.130543,"0.416666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(618);
      tex = new TLatex(0.1139055,0.1388653,"0.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(619);
      tex = new TLatex(0.1243908,0.1466497,"0.483333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(620);
      tex = new TLatex(0.1375146,0.1554696,"0.516666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(621);
      tex = new TLatex(0.1465889,0.162073,"0.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(622);
      tex = new TLatex(0.1562528,0.1712422,"0.583333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(623);
      tex = new TLatex(0.1668612,0.1813229,"0.616666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(624);
      tex = new TLatex(0.1770016,0.1901857,"0.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(625);
      tex = new TLatex(0.1896491,0.1996842,"0.683333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(626);
      tex = new TLatex(0.2012067,0.2074723,"0.716666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(627);
      tex = new TLatex(0.2094777,0.2159986,"0.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(628);
      tex = new TLatex(0.2193461,0.2239599,"0.783333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(629);
      tex = new TLatex(0.2286215,0.2334536,"0.816666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(630);
      tex = new TLatex(0.2372469,0.24313,"0.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(631);
      tex = new TLatex(0.2434808,0.2536897,"0.883333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(632);
      tex = new TLatex(0.2515625,0.2622255,"0.916666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(633);
      tex = new TLatex(0.2595419,0.2705829,"0.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(634);
      tex = new TLatex(0.2682754,0.2810578,"0.983333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(635);
      tex = new TLatex(0.2763788,0.2923881,"1.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(636);
      tex = new TLatex(0.2846106,0.3034303,"1.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(637);
      tex = new TLatex(0.2926871,0.3152439,"1.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(638);
      tex = new TLatex(0.2996234,0.3240932,"1.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(639);
      tex = new TLatex(0.3075439,0.3358394,"1.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(640);
      tex = new TLatex(0.3141125,0.3488287,"1.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(641);
      tex = new TLatex(0.3235556,0.3590518,"1.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(642);
      tex = new TLatex(0.3343439,0.3683665,"1.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(643);
      tex = new TLatex(0.3408461,0.3811357,"1.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(644);
      tex = new TLatex(0.3519964,0.3935614,"1.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(645);
      tex = new TLatex(0.3606552,0.4024298,"1.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(646);
      tex = new TLatex(0.3698414,0.4110794,"1.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(647);
      tex = new TLatex(0.3768382,0.4221046,"1.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(648);
      tex = new TLatex(0.3856504,0.4329813,"1.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(649);
      tex = new TLatex(0.39384,0.4448419,"1.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(650);
      tex = new TLatex(0.4013244,0.4570866,"1.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(651);
      tex = new TLatex(0.4111326,0.4697577,"1.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(652);
      tex = new TLatex(0.4201385,0.4827253,"1.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(653);
      tex = new TLatex(0.4296011,0.492524,"1.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(654);
      tex = new TLatex(0.4391385,0.5059528,"1.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(655);
      tex = new TLatex(0.448473,0.5158447,"1.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(656);
      tex = new TLatex(0.4600223,0.5291828,"1.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(657);
      tex = new TLatex(0.4685225,0.5389974,"1.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(658);
      tex = new TLatex(0.4779876,0.5512718,"1.78333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(659);
      tex = new TLatex(0.4866258,0.5633276,"1.81666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(660);
      tex = new TLatex(0.4950642,0.5743003,"1.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(661);
      tex = new TLatex(0.504027,0.5872469,"1.88333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(662);
      tex = new TLatex(0.5120766,0.5980276,"1.91666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(663);
      tex = new TLatex(0.519592,0.6069172,"1.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(664);
      tex = new TLatex(0.5286881,0.618589,"1.98333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(665);
      tex = new TLatex(0.539553,0.6312152,"2.01666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(666);
      tex = new TLatex(0.5494103,0.6431773,"2.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(667);
      tex = new TLatex(0.5595108,0.6519709,"2.08333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(668);
      tex = new TLatex(0.5696422,0.6644447,"2.11666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(669);
      tex = new TLatex(0.5773725,0.6759122,"2.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(670);
      tex = new TLatex(0.5875807,0.6871738,"2.18333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(671);
      tex = new TLatex(0.5963777,0.6967519,"2.21666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(672);
      tex = new TLatex(0.6074483,0.705809,"2.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(673);
      tex = new TLatex(0.618399,0.71774,"2.28333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(674);
      tex = new TLatex(0.6330802,0.7277159,"2.31666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(675);
      tex = new TLatex(0.6422851,0.7384378,"2.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(676);
      tex = new TLatex(0.6523578,0.7485198,"2.38333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(677);
      tex = new TLatex(0.6654808,0.7612386,"2.41666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(678);
      tex = new TLatex(0.6777545,0.772044,"2.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(679);
      tex = new TLatex(0.6911014,0.7834254,"2.48333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(680);
      tex = new TLatex(0.7037062,0.7959982,"2.51666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(681);
      tex = new TLatex(0.7134807,0.8062146,"2.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(682);
      tex = new TLatex(0.7286424,0.8146947,"2.58333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(683);
      tex = new TLatex(0.7416341,0.8251183,"2.61666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(684);
      tex = new TLatex(0.7526418,0.8370399,"2.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(685);
      tex = new TLatex(0.7689649,0.8495269,"2.68333333333");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(686);
      tex = new TLatex(0.7831011,0.8631403,"2.71666666667");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(687);
      tex = new TLatex(0.7972136,0.8780651,"2.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(688);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx689[120] = {
   0,
   0.006236605,
   0.01888619,
   0.03046814,
   0.038093,
   0.04294358,
   0.04891223,
   0.06626569,
   0.07919874,
   0.09131807,
   0.09935892,
   0.1153301,
   0.1369903,
   0.1543627,
   0.1648933,
   0.1713335,
   0.1804618,
   0.1917593,
   0.2062537,
   0.2141282,
   0.2358464,
   0.249583,
   0.2600519,
   0.2729337,
   0.2819499,
   0.306399,
   0.3110223,
   0.3162104,
   0.3275871,
   0.3358616,
   0.3515576,
   0.3580942,
   0.3654428,
   0.3726349,
   0.3808584,
   0.3896281,
   0.3989928,
   0.4069466,
   0.4154253,
   0.4237899,
   0.437921,
   0.4464744,
   0.4498709,
   0.456059,
   0.4695332,
   0.474308,
   0.4804937,
   0.4924679,
   0.5030553,
   0.5169726,
   0.5223094,
   0.5364527,
   0.5454037,
   0.5576139,
   0.5683665,
   0.5721082,
   0.5870882,
   0.5960466,
   0.615593,
   0.6248544,
   0.6392434,
   0.6497475,
   0.6573848,
   0.6669626,
   0.6728418,
   0.6833339,
   0.690682,
   0.712535,
   0.7283218,
   0.7409561,
   0.7519338,
   0.7700292,
   0.7805925,
   0.7857803,
   0.7962031,
   0.8146953,
   0.8282725,
   0.8343789,
   0.8441598,
   0.8557703,
   0.8724667,
   0.8844161,
   0.8947699,
   0.9000376,
   0.9078811,
   0.9124302,
   0.9220564,
   0.9354386,
   0.9422236,
   0.9491332,
   0.9561807,
   0.9645548,
   0.9726984,
   0.9845594,
   0.9976098,
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
   Double_t Graph_fy689[120] = {
   0,
   0.009969218,
   0.01618472,
   0.02050231,
   0.0270258,
   0.03145901,
   0.03527094,
   0.04342982,
   0.04818415,
   0.05218411,
   0.05971296,
   0.0677722,
   0.07214683,
   0.07943653,
   0.0876455,
   0.09205885,
   0.1032361,
   0.1122114,
   0.1190698,
   0.1319156,
   0.1415196,
   0.1486356,
   0.158629,
   0.1710874,
   0.1794898,
   0.1919134,
   0.200914,
   0.2096474,
   0.2192214,
   0.2374759,
   0.2438513,
   0.2544412,
   0.2730348,
   0.2890367,
   0.3077088,
   0.323025,
   0.3422842,
   0.3581373,
   0.3776502,
   0.3956287,
   0.4114219,
   0.4262945,
   0.4472022,
   0.470359,
   0.4843414,
   0.5065784,
   0.5173673,
   0.5434519,
   0.5613255,
   0.5851344,
   0.5952802,
   0.615986,
   0.6328032,
   0.660996,
   0.6789109,
   0.695948,
   0.7081066,
   0.7144444,
   0.7307323,
   0.7410187,
   0.7556305,
   0.7685881,
   0.786505,
   0.8004403,
   0.8093131,
   0.8153517,
   0.8276692,
   0.8393141,
   0.8478686,
   0.8528537,
   0.8633368,
   0.8746678,
   0.8833238,
   0.8934489,
   0.9025253,
   0.9073229,
   0.9133443,
   0.9184852,
   0.9246761,
   0.9274471,
   0.9329209,
   0.9432962,
   0.9460736,
   0.9545613,
   0.9571457,
   0.9601342,
   0.9630905,
   0.9686846,
   0.9751277,
   0.9819165,
   0.9844774,
   0.9861443,
   0.9927508,
   0.9959526,
   0.9979691,
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
   graph = new TGraph(120,Graph_fx689,Graph_fy689);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph689 = new TH1F("Graph_Graph689","Mass-Matching Prioritized",120,0,1.1);
   Graph_Graph689->SetMinimum(0);
   Graph_Graph689->SetMaximum(1.1);
   Graph_Graph689->SetDirectory(0);
   Graph_Graph689->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph689->SetLineColor(ci);
   Graph_Graph689->GetXaxis()->SetLabelFont(42);
   Graph_Graph689->GetXaxis()->SetTitleOffset(1);
   Graph_Graph689->GetXaxis()->SetTitleFont(42);
   Graph_Graph689->GetYaxis()->SetLabelFont(42);
   Graph_Graph689->GetYaxis()->SetTitleFont(42);
   Graph_Graph689->GetZaxis()->SetLabelFont(42);
   Graph_Graph689->GetZaxis()->SetTitleOffset(1);
   Graph_Graph689->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph689);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx690[120] = {
   0,
   0.006843393,
   0.01683583,
   0.02389188,
   0.03002347,
   0.03822474,
   0.04537343,
   0.05275001,
   0.0621778,
   0.07159695,
   0.08101974,
   0.09040402,
   0.1035742,
   0.114619,
   0.12507,
   0.1380904,
   0.1473817,
   0.1570353,
   0.1677149,
   0.1778196,
   0.1903096,
   0.2018599,
   0.2102389,
   0.219931,
   0.2295184,
   0.2380849,
   0.2444019,
   0.2524532,
   0.2603897,
   0.269027,
   0.2770236,
   0.2852025,
   0.2932157,
   0.3001702,
   0.3079323,
   0.3145339,
   0.3242122,
   0.3348892,
   0.3418317,
   0.3528104,
   0.3613685,
   0.3704121,
   0.3774146,
   0.3861362,
   0.3936908,
   0.4010555,
   0.4107142,
   0.4200791,
   0.4299282,
   0.4393505,
   0.4485136,
   0.4600251,
   0.4684607,
   0.477853,
   0.4865401,
   0.4948486,
   0.5038224,
   0.5118581,
   0.5194194,
   0.5284344,
   0.5397282,
   0.5494832,
   0.5594606,
   0.5694764,
   0.5771398,
   0.5872935,
   0.5964589,
   0.6074228,
   0.6183292,
   0.6328188,
   0.6419902,
   0.652085,
   0.6652012,
   0.6774064,
   0.6904813,
   0.702949,
   0.7126827,
   0.7276505,
   0.740687,
   0.7517035,
   0.7677726,
   0.7818465,
   0.7965151,
   0.8124043,
   0.8240841,
   0.8392156,
   0.8547939,
   0.8679755,
   0.8843936,
   0.9042166,
   0.9265981,
   0.9399633,
   0.9572129,
   0.9738547,
   0.9954933,
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
   Double_t Graph_fy690[120] = {
   0,
   0.004912539,
   0.01084818,
   0.01579072,
   0.0213426,
   0.02719084,
   0.03238023,
   0.03874065,
   0.04485738,
   0.05339426,
   0.0601637,
   0.06717907,
   0.07211335,
   0.08064915,
   0.08846738,
   0.09787013,
   0.1045171,
   0.1135555,
   0.1228127,
   0.1324707,
   0.1415812,
   0.1491861,
   0.1578021,
   0.1662653,
   0.1756015,
   0.1850326,
   0.1955017,
   0.2041589,
   0.2117991,
   0.2217088,
   0.232329,
   0.2426974,
   0.2541904,
   0.2625246,
   0.274125,
   0.2860734,
   0.2965095,
   0.3060133,
   0.3190357,
   0.3319492,
   0.341831,
   0.3512638,
   0.3618778,
   0.3734692,
   0.3849414,
   0.3972142,
   0.4094455,
   0.4218587,
   0.4311467,
   0.4430662,
   0.4518813,
   0.4648302,
   0.4755764,
   0.486735,
   0.4981516,
   0.5082302,
   0.5215501,
   0.5321852,
   0.5406058,
   0.5524257,
   0.5649945,
   0.5769135,
   0.5855999,
   0.5983622,
   0.609891,
   0.6208859,
   0.6298552,
   0.6398173,
   0.6517742,
   0.6616679,
   0.673009,
   0.6843372,
   0.6968742,
   0.7078324,
   0.7188154,
   0.7323679,
   0.7434296,
   0.753099,
   0.7626042,
   0.7750046,
   0.7875531,
   0.8012251,
   0.8153793,
   0.8321948,
   0.8467673,
   0.8589974,
   0.8748926,
   0.8909401,
   0.9070926,
   0.9245292,
   0.9396052,
   0.9547832,
   0.9696789,
   0.983398,
   0.9964708,
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
   graph = new TGraph(120,Graph_fx690,Graph_fy690);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph690 = new TH1F("Graph_Graph690","Tagging Prioritized",120,0,1.1);
   Graph_Graph690->SetMinimum(0);
   Graph_Graph690->SetMaximum(1.1);
   Graph_Graph690->SetDirectory(0);
   Graph_Graph690->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph690->SetLineColor(ci);
   Graph_Graph690->GetXaxis()->SetLabelFont(42);
   Graph_Graph690->GetXaxis()->SetTitleOffset(1);
   Graph_Graph690->GetXaxis()->SetTitleFont(42);
   Graph_Graph690->GetYaxis()->SetLabelFont(42);
   Graph_Graph690->GetYaxis()->SetTitleFont(42);
   Graph_Graph690->GetZaxis()->SetLabelFont(42);
   Graph_Graph690->GetZaxis()->SetTitleOffset(1);
   Graph_Graph690->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph690);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dPhi_17->Modified();
   ROC_H_dPhi_17->cd();
   ROC_H_dPhi_17->SetSelected(ROC_H_dPhi_17);
}
