#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_18 = new TCanvas("ROC_Sphericity_18", "ROC_Sphericity_18",0,0,600,600);
   ROC_Sphericity_18->SetHighLightColor(2);
   ROC_Sphericity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_18->SetFillColor(0);
   ROC_Sphericity_18->SetBorderMode(0);
   ROC_Sphericity_18->SetBorderSize(2);
   ROC_Sphericity_18->SetGridx();
   ROC_Sphericity_18->SetGridy();
   ROC_Sphericity_18->SetLeftMargin(0.15709);
   ROC_Sphericity_18->SetRightMargin(0.1234783);
   ROC_Sphericity_18->SetBottomMargin(0.12);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx284[51] = {
   0,
   6.937943e-10,
   5.811914e-08,
   3.750819e-07,
   1.559703e-06,
   3.299602e-05,
   4.330667e-05,
   8.226946e-05,
   0.000429662,
   0.0006122841,
   0.001226007,
   0.002181251,
   0.003459297,
   0.006199292,
   0.008216237,
   0.01173926,
   0.01707806,
   0.02205228,
   0.02840286,
   0.03619517,
   0.04194785,
   0.05141414,
   0.06173047,
   0.07497218,
   0.08788796,
   0.1012383,
   0.1159118,
   0.1299432,
   0.1470202,
   0.165567,
   0.1863784,
   0.2069788,
   0.2325932,
   0.2554084,
   0.2854157,
   0.3170931,
   0.3491887,
   0.3834844,
   0.4216917,
   0.461431,
   0.5076127,
   0.55577,
   0.6088908,
   0.6666824,
   0.7236746,
   0.7828731,
   0.8450282,
   0.903786,
   0.9536457,
   0.9886617,
   1};
   Double_t Graph_fy284[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0003117608,
   0.0009588119,
   0.001665387,
   0.003041452,
   0.00589997,
   0.0089872,
   0.01463543,
   0.02108995,
   0.02660077,
   0.03606373,
   0.04908198,
   0.06224552,
   0.07738008,
   0.09097324,
   0.1078689,
   0.1270204,
   0.1472148,
   0.1703313,
   0.1944509,
   0.2214724,
   0.2474504,
   0.2718121,
   0.301461,
   0.3324092,
   0.3607534,
   0.392312,
   0.4249035,
   0.4594892,
   0.4994213,
   0.5372569,
   0.5717153,
   0.6089218,
   0.6438104,
   0.6872677,
   0.7327409,
   0.7730324,
   0.8150073,
   0.8571388,
   0.9001881,
   0.9369631,
   0.9630445,
   0.9841896,
   0.9969063,
   1};
   TGraph *graph = new TGraph(51,Graph_fx284,Graph_fy284);
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
   
   TH1F *Graph_Graph284 = new TH1F("Graph_Graph284","Tagging Only",100,0,1.1);
   Graph_Graph284->SetMinimum(0);
   Graph_Graph284->SetMaximum(1.1);
   Graph_Graph284->SetDirectory(0);
   Graph_Graph284->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph284->SetLineColor(ci);
   Graph_Graph284->GetXaxis()->SetLabelFont(42);
   Graph_Graph284->GetXaxis()->SetTitleOffset(1);
   Graph_Graph284->GetXaxis()->SetTitleFont(42);
   Graph_Graph284->GetYaxis()->SetLabelFont(42);
   Graph_Graph284->GetYaxis()->SetTitleFont(42);
   Graph_Graph284->GetZaxis()->SetLabelFont(42);
   Graph_Graph284->GetZaxis()->SetTitleOffset(1);
   Graph_Graph284->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph284);
   
   TLatex *   tex = new TLatex(0.1598572,0.4603815,"0.39");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
      tex = new TLatex(0.1751942,0.4891372,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(286);
      tex = new TLatex(0.1943683,0.5240375,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(287);
      tex = new TLatex(0.2165173,0.5564962,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(288);
      tex = new TLatex(0.2472587,0.5920009,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(289);
      tex = new TLatex(0.2760757,0.6391939,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(290);
      tex = new TLatex(0.3115078,0.6749956,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(291);
      tex = new TLatex(0.3511803,0.7106279,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(292);
      tex = new TLatex(0.3910515,0.7580503,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(293);
      tex = new TLatex(0.4220786,0.793579,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(294);
      tex = new TLatex(0.4665819,0.8297156,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(295);
      tex = new TLatex(0.5105915,0.8686674,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(296);
      tex = new TLatex(0.5723756,0.8439955,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(297);
      tex = new TLatex(0.6212258,0.8806443,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(298);
      tex = new TLatex(0.6729517,0.9268354,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(299);
      tex = new TLatex(0.7439499,0.9674121,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(300);
      tex = new TLatex(0.8128981,0.9978404,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(301);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx302[51] = {
   0,
   0,
   0,
   2.227439e-07,
   6.742863e-07,
   0.0002233481,
   0.0002261368,
   0.0003343063,
   0.0003446621,
   0.0004320572,
   0.0005312522,
   0.0009298448,
   0.001422383,
   0.003928102,
   0.005079904,
   0.006827803,
   0.00857776,
   0.01071518,
   0.01653393,
   0.02812893,
   0.0353152,
   0.04911154,
   0.05910414,
   0.07078753,
   0.08034237,
   0.08879104,
   0.09721738,
   0.110729,
   0.1294988,
   0.1449911,
   0.1598572,
   0.1751942,
   0.1943683,
   0.2165173,
   0.2472587,
   0.2760757,
   0.3115078,
   0.3511803,
   0.3910515,
   0.4220786,
   0.4665819,
   0.5105915,
   0.5723756,
   0.6212258,
   0.6729517,
   0.7439499,
   0.8128981,
   0.8859631,
   0.9448555,
   0.9883251,
   1};
   Double_t Graph_fy302[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.172057e-05,
   0.0001400308,
   0.0009117401,
   0.001006575,
   0.003524824,
   0.007086467,
   0.01280606,
   0.02293573,
   0.02821557,
   0.03658651,
   0.05232382,
   0.06489239,
   0.07880153,
   0.09598986,
   0.1141699,
   0.1380635,
   0.1578774,
   0.1775251,
   0.1988052,
   0.2313271,
   0.263969,
   0.2936342,
   0.3263212,
   0.3603815,
   0.3891372,
   0.4240375,
   0.4564962,
   0.4920009,
   0.5391939,
   0.5749956,
   0.6106279,
   0.6580503,
   0.693579,
   0.7297156,
   0.7686674,
   0.8039955,
   0.8406443,
   0.8868354,
   0.9274121,
   0.9578404,
   0.9787842,
   0.9934004,
   1,
   1};
   graph = new TGraph(51,Graph_fx302,Graph_fy302);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph302 = new TH1F("Graph_Graph302","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph302->SetMinimum(0);
   Graph_Graph302->SetMaximum(1.1);
   Graph_Graph302->SetDirectory(0);
   Graph_Graph302->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph302->SetLineColor(ci);
   Graph_Graph302->GetXaxis()->SetLabelFont(42);
   Graph_Graph302->GetXaxis()->SetTitleOffset(1);
   Graph_Graph302->GetXaxis()->SetTitleFont(42);
   Graph_Graph302->GetYaxis()->SetLabelFont(42);
   Graph_Graph302->GetYaxis()->SetTitleFont(42);
   Graph_Graph302->GetZaxis()->SetLabelFont(42);
   Graph_Graph302->GetZaxis()->SetTitleOffset(1);
   Graph_Graph302->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph302);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx303[51] = {
   0,
   6.759544e-10,
   5.662469e-08,
   3.793218e-07,
   1.577298e-06,
   3.248037e-05,
   4.321003e-05,
   8.199169e-05,
   0.0004222662,
   0.0006023721,
   0.001203468,
   0.002139342,
   0.003393071,
   0.006078955,
   0.008078291,
   0.01158211,
   0.01692524,
   0.02185252,
   0.02817722,
   0.03589564,
   0.04166709,
   0.05107399,
   0.0614642,
   0.074588,
   0.08754741,
   0.1008116,
   0.1156721,
   0.1296377,
   0.1465704,
   0.1650223,
   0.1855996,
   0.2060581,
   0.231661,
   0.254532,
   0.2851403,
   0.3167971,
   0.3486041,
   0.3825652,
   0.4212696,
   0.4619443,
   0.5076067,
   0.5561543,
   0.6093724,
   0.6674078,
   0.7243125,
   0.7834343,
   0.845604,
   0.9039814,
   0.953664,
   0.9886343,
   1};
   Double_t Graph_fy303[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002924562,
   0.0008793184,
   0.00151879,
   0.002738555,
   0.005293864,
   0.008339879,
   0.01395364,
   0.02073524,
   0.02625678,
   0.03556167,
   0.04778746,
   0.06108672,
   0.0761299,
   0.08975147,
   0.1064977,
   0.1250889,
   0.1457308,
   0.1685775,
   0.19249,
   0.2193225,
   0.2439954,
   0.2688441,
   0.2971748,
   0.3273751,
   0.3562563,
   0.3874928,
   0.4202757,
   0.4557291,
   0.4954199,
   0.534273,
   0.5692697,
   0.6054681,
   0.6412433,
   0.6839072,
   0.7289698,
   0.7686541,
   0.8102158,
   0.8525494,
   0.8947471,
   0.9327043,
   0.9602973,
   0.9827859,
   0.996469,
   1};
   graph = new TGraph(51,Graph_fx303,Graph_fy303);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph303 = new TH1F("Graph_Graph303","Tagging Prioritized",100,0,1.1);
   Graph_Graph303->SetMinimum(0);
   Graph_Graph303->SetMaximum(1.1);
   Graph_Graph303->SetDirectory(0);
   Graph_Graph303->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph303->SetLineColor(ci);
   Graph_Graph303->GetXaxis()->SetLabelFont(42);
   Graph_Graph303->GetXaxis()->SetTitleOffset(1);
   Graph_Graph303->GetXaxis()->SetTitleFont(42);
   Graph_Graph303->GetYaxis()->SetLabelFont(42);
   Graph_Graph303->GetYaxis()->SetTitleFont(42);
   Graph_Graph303->GetZaxis()->SetLabelFont(42);
   Graph_Graph303->GetZaxis()->SetTitleOffset(1);
   Graph_Graph303->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph303);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Sphericity_18->Modified();
   ROC_Sphericity_18->cd();
   ROC_Sphericity_18->SetSelected(ROC_Sphericity_18);
}
