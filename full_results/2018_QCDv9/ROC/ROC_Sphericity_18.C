#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx292[51] = {
   0,
   5.206158e-09,
   1.470051e-07,
   9.80506e-07,
   4.427763e-06,
   1.573845e-05,
   7.5934e-05,
   0.000139659,
   0.0002284056,
   0.000661646,
   0.001230626,
   0.002010463,
   0.003492515,
   0.005474246,
   0.008004235,
   0.01400709,
   0.01949635,
   0.02731864,
   0.03445697,
   0.04277271,
   0.0503504,
   0.05976586,
   0.07001933,
   0.08128943,
   0.09487441,
   0.1088862,
   0.1218752,
   0.1452482,
   0.1628205,
   0.1844984,
   0.2052004,
   0.2266586,
   0.2485858,
   0.2723998,
   0.3003715,
   0.3257355,
   0.3574283,
   0.3898506,
   0.4275332,
   0.4686189,
   0.5200979,
   0.5660265,
   0.6162588,
   0.6745718,
   0.732738,
   0.7971586,
   0.8558338,
   0.9104612,
   0.9556312,
   0.9895093,
   1};
   Double_t Graph_fy292[51] = {
   0,
   0,
   0,
   0,
   0.0001957875,
   0.0002343,
   0.0002844087,
   0.0005717089,
   0.001216857,
   0.001889135,
   0.003284939,
   0.005273121,
   0.009214565,
   0.01267734,
   0.01791622,
   0.02521803,
   0.03243695,
   0.04146897,
   0.05160856,
   0.06665608,
   0.08237883,
   0.09899129,
   0.1226999,
   0.1410061,
   0.1649082,
   0.1911768,
   0.2168439,
   0.2427725,
   0.2697951,
   0.2962869,
   0.3233202,
   0.3528952,
   0.3902097,
   0.4305402,
   0.465931,
   0.5033255,
   0.5396135,
   0.5763851,
   0.6188888,
   0.6568506,
   0.700749,
   0.7377472,
   0.7808915,
   0.8248968,
   0.8711324,
   0.9151946,
   0.9446926,
   0.9690644,
   0.9875523,
   0.9976656,
   1};
   TGraph *graph = new TGraph(51,Graph_fx292,Graph_fy292);
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
   
   TH1F *Graph_Graph292 = new TH1F("Graph_Graph292","Tagging Only",100,0,1.1);
   Graph_Graph292->SetMinimum(0);
   Graph_Graph292->SetMaximum(1.1);
   Graph_Graph292->SetDirectory(0);
   Graph_Graph292->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph292->SetLineColor(ci);
   Graph_Graph292->GetXaxis()->SetLabelFont(42);
   Graph_Graph292->GetXaxis()->SetTitleOffset(1);
   Graph_Graph292->GetXaxis()->SetTitleFont(42);
   Graph_Graph292->GetYaxis()->SetLabelFont(42);
   Graph_Graph292->GetYaxis()->SetTitleFont(42);
   Graph_Graph292->GetZaxis()->SetLabelFont(42);
   Graph_Graph292->GetZaxis()->SetTitleOffset(1);
   Graph_Graph292->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph292);
   
   TLatex *   tex = new TLatex(0.1657839,0.4234598,"0.41");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(293);
      tex = new TLatex(0.1826181,0.4498023,"0.39");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(294);
      tex = new TLatex(0.1984946,0.473808,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(295);
      tex = new TLatex(0.2212571,0.5140353,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(296);
      tex = new TLatex(0.2447788,0.5620727,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(297);
      tex = new TLatex(0.270275,0.6061543,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(298);
      tex = new TLatex(0.288735,0.6465614,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(299);
      tex = new TLatex(0.3130864,0.683363,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(300);
      tex = new TLatex(0.3427319,0.7195763,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(301);
      tex = new TLatex(0.3714313,0.7546425,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(302);
      tex = new TLatex(0.4049777,0.7841078,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(303);
      tex = new TLatex(0.5006583,0.8274677,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(304);
      tex = new TLatex(0.5361367,0.870985,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(305);
      tex = new TLatex(0.5956214,0.8457429,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(306);
      tex = new TLatex(0.6559585,0.8830052,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(307);
      tex = new TLatex(0.7095252,0.9388689,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(308);
      tex = new TLatex(0.766939,0.9737054,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(309);
      tex = new TLatex(0.8223587,0.9982213,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(310);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx311[51] = {
   0,
   0,
   0,
   5.876501e-07,
   2.181632e-06,
   7.569889e-06,
   1.804937e-05,
   4.091226e-05,
   7.474195e-05,
   0.0006056121,
   0.0009426658,
   0.001367215,
   0.003771287,
   0.005402456,
   0.007347799,
   0.01140377,
   0.01440957,
   0.03387493,
   0.04050409,
   0.05099464,
   0.05769618,
   0.06691437,
   0.07541303,
   0.08562916,
   0.09892091,
   0.114639,
   0.1257627,
   0.1372889,
   0.1485791,
   0.1657839,
   0.1826181,
   0.1984946,
   0.2212571,
   0.2447788,
   0.270275,
   0.288735,
   0.3130864,
   0.3427319,
   0.3714313,
   0.4049777,
   0.5006583,
   0.5361367,
   0.5956214,
   0.6559585,
   0.7095252,
   0.766939,
   0.8223587,
   0.890463,
   0.943299,
   0.9862963,
   1};
   Double_t Graph_fy311[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0006742217,
   0.0006742217,
   0.002983019,
   0.004084105,
   0.005965028,
   0.008062254,
   0.01413195,
   0.02245658,
   0.03179191,
   0.04308801,
   0.05624641,
   0.07281616,
   0.08987809,
   0.1079971,
   0.1410976,
   0.1591291,
   0.1800014,
   0.2037105,
   0.2318292,
   0.2619815,
   0.2945987,
   0.3234598,
   0.3498023,
   0.373808,
   0.4140353,
   0.4620727,
   0.5061543,
   0.5465614,
   0.583363,
   0.6195763,
   0.6546425,
   0.6841078,
   0.7274677,
   0.770985,
   0.8057429,
   0.8430052,
   0.8988689,
   0.9337054,
   0.9582213,
   0.9773896,
   0.994072,
   0.9984966,
   1};
   graph = new TGraph(51,Graph_fx311,Graph_fy311);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph311 = new TH1F("Graph_Graph311","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph311->SetMinimum(0);
   Graph_Graph311->SetMaximum(1.1);
   Graph_Graph311->SetDirectory(0);
   Graph_Graph311->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph311->SetLineColor(ci);
   Graph_Graph311->GetXaxis()->SetLabelFont(42);
   Graph_Graph311->GetXaxis()->SetTitleOffset(1);
   Graph_Graph311->GetXaxis()->SetTitleFont(42);
   Graph_Graph311->GetYaxis()->SetLabelFont(42);
   Graph_Graph311->GetYaxis()->SetTitleFont(42);
   Graph_Graph311->GetZaxis()->SetLabelFont(42);
   Graph_Graph311->GetZaxis()->SetTitleOffset(1);
   Graph_Graph311->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph311);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx312[51] = {
   0,
   5.116916e-09,
   1.444852e-07,
   9.917313e-07,
   4.450156e-06,
   1.57439e-05,
   7.526725e-05,
   0.0001386227,
   0.0002299425,
   0.0006592825,
   0.001223091,
   0.001997288,
   0.003681093,
   0.005658051,
   0.008174112,
   0.01413439,
   0.01957654,
   0.02741215,
   0.03450586,
   0.04277978,
   0.05043787,
   0.05989801,
   0.07010014,
   0.081443,
   0.09500302,
   0.1089878,
   0.1220331,
   0.1452297,
   0.1628141,
   0.1843696,
   0.2049867,
   0.22656,
   0.2484718,
   0.2721986,
   0.3000415,
   0.325496,
   0.3572457,
   0.3898554,
   0.4274118,
   0.4685162,
   0.5197817,
   0.5657124,
   0.6157888,
   0.674305,
   0.7324408,
   0.7965634,
   0.8552706,
   0.9099812,
   0.9553991,
   0.9894391,
   1};
   Double_t Graph_fy312[51] = {
   0,
   0,
   0,
   0,
   0.0001918656,
   0.0002296067,
   0.0002787116,
   0.0005602568,
   0.001156375,
   0.001844427,
   0.003212272,
   0.005160628,
   0.009023119,
   0.01244458,
   0.01790453,
   0.02506008,
   0.03219001,
   0.04136225,
   0.0517005,
   0.066669,
   0.0821464,
   0.09891481,
   0.1222818,
   0.1410872,
   0.1646332,
   0.190761,
   0.2163952,
   0.2419203,
   0.2691266,
   0.2953941,
   0.3227908,
   0.3519225,
   0.3896622,
   0.4297049,
   0.4646685,
   0.5023426,
   0.5388365,
   0.575923,
   0.6177474,
   0.655528,
   0.6998226,
   0.7367493,
   0.7809206,
   0.8249645,
   0.8709731,
   0.9151976,
   0.9444126,
   0.9688295,
   0.9872929,
   0.9977123,
   1};
   graph = new TGraph(51,Graph_fx312,Graph_fy312);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph312 = new TH1F("Graph_Graph312","Tagging Prioritized",100,0,1.1);
   Graph_Graph312->SetMinimum(0);
   Graph_Graph312->SetMaximum(1.1);
   Graph_Graph312->SetDirectory(0);
   Graph_Graph312->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph312->SetLineColor(ci);
   Graph_Graph312->GetXaxis()->SetLabelFont(42);
   Graph_Graph312->GetXaxis()->SetTitleOffset(1);
   Graph_Graph312->GetXaxis()->SetTitleFont(42);
   Graph_Graph312->GetYaxis()->SetLabelFont(42);
   Graph_Graph312->GetYaxis()->SetTitleFont(42);
   Graph_Graph312->GetZaxis()->SetLabelFont(42);
   Graph_Graph312->GetZaxis()->SetTitleOffset(1);
   Graph_Graph312->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph312);
   
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
