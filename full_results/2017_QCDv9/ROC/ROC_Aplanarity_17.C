#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_17()
{
//=========Macro generated from canvas: ROC_Aplanarity_17/ROC_Aplanarity_17
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_17 = new TCanvas("ROC_Aplanarity_17", "ROC_Aplanarity_17",0,0,600,600);
   ROC_Aplanarity_17->SetHighLightColor(2);
   ROC_Aplanarity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_17->SetFillColor(0);
   ROC_Aplanarity_17->SetBorderMode(0);
   ROC_Aplanarity_17->SetBorderSize(2);
   ROC_Aplanarity_17->SetGridx();
   ROC_Aplanarity_17->SetGridy();
   ROC_Aplanarity_17->SetLeftMargin(0.15709);
   ROC_Aplanarity_17->SetRightMargin(0.1234783);
   ROC_Aplanarity_17->SetBottomMargin(0.12);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx234[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.590396e-10,
   4.835277e-08,
   3.052421e-07,
   1.320575e-06,
   9.509889e-06,
   3.984047e-05,
   8.038019e-05,
   0.0001760658,
   0.0004579737,
   0.001281016,
   0.001729336,
   0.002639329,
   0.004318265,
   0.006542931,
   0.0110309,
   0.01575422,
   0.023347,
   0.03363103,
   0.05262202,
   0.07764906,
   0.1162684,
   0.1851284,
   0.3133719,
   0.5427963,
   1};
   Double_t Graph_fy234[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0004567991,
   0.0007423205,
   0.001540319,
   0.002253949,
   0.003386833,
   0.006793828,
   0.01037707,
   0.01560652,
   0.0234288,
   0.03401836,
   0.04883456,
   0.06978462,
   0.1014833,
   0.1403541,
   0.1948181,
   0.2665291,
   0.3700491,
   0.5147899,
   0.7262102,
   1};
   TGraph *graph = new TGraph(51,Graph_fx234,Graph_fy234);
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
   
   TH1F *Graph_Graph234 = new TH1F("Graph_Graph234","Tagging Only",100,0,1.1);
   Graph_Graph234->SetMinimum(0);
   Graph_Graph234->SetMaximum(1.1);
   Graph_Graph234->SetDirectory(0);
   Graph_Graph234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph234->SetLineColor(ci);
   Graph_Graph234->GetXaxis()->SetLabelFont(42);
   Graph_Graph234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph234->GetXaxis()->SetTitleFont(42);
   Graph_Graph234->GetYaxis()->SetLabelFont(42);
   Graph_Graph234->GetYaxis()->SetTitleFont(42);
   Graph_Graph234->GetZaxis()->SetLabelFont(42);
   Graph_Graph234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph234->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph234);
   
   TLatex *   tex = new TLatex(0.1698046,0.5078927,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(235);
      tex = new TLatex(0.283639,0.658746,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(236);
      tex = new TLatex(0.5145008,0.8628923,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(237);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx238[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.269345e-08,
   1.26493e-07,
   5.116741e-07,
   4.200384e-05,
   4.439583e-05,
   8.421458e-05,
   0.0001303109,
   0.0001486396,
   0.002973519,
   0.003229525,
   0.003863513,
   0.006179393,
   0.007158514,
   0.009999002,
   0.01395538,
   0.02155076,
   0.02722171,
   0.04913084,
   0.07462206,
   0.1131923,
   0.1698046,
   0.283639,
   0.5145008,
   1};
   Double_t Graph_fy238[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000659165,
   0.001815376,
   0.001882573,
   0.003235204,
   0.004888798,
   0.008392723,
   0.01339312,
   0.01728064,
   0.0247593,
   0.03995774,
   0.05759178,
   0.08084017,
   0.117707,
   0.1650435,
   0.2287222,
   0.3016835,
   0.4078927,
   0.558746,
   0.7628923,
   1};
   graph = new TGraph(51,Graph_fx238,Graph_fy238);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph238->SetMinimum(0);
   Graph_Graph238->SetMaximum(1.1);
   Graph_Graph238->SetDirectory(0);
   Graph_Graph238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph238->SetLineColor(ci);
   Graph_Graph238->GetXaxis()->SetLabelFont(42);
   Graph_Graph238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph238->GetXaxis()->SetTitleFont(42);
   Graph_Graph238->GetYaxis()->SetLabelFont(42);
   Graph_Graph238->GetYaxis()->SetTitleFont(42);
   Graph_Graph238->GetZaxis()->SetLabelFont(42);
   Graph_Graph238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph238->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph238);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx239[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.336017e-10,
   4.915992e-08,
   3.093407e-07,
   1.334573e-06,
   9.54953e-06,
   3.942169e-05,
   7.945066e-05,
   0.000174104,
   0.0004505614,
   0.001254374,
   0.001703196,
   0.002594722,
   0.00424971,
   0.006491018,
   0.01095749,
   0.01592933,
   0.0234903,
   0.03373191,
   0.05269436,
   0.07796646,
   0.1167065,
   0.1853093,
   0.3137961,
   0.5426451,
   1};
   Double_t Graph_fy239[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0005835875,
   0.0008286382,
   0.001547614,
   0.002281323,
   0.003685367,
   0.007064077,
   0.01026262,
   0.01536287,
   0.02295031,
   0.03311972,
   0.04748946,
   0.06703277,
   0.09760442,
   0.1349735,
   0.1886034,
   0.2577222,
   0.3604285,
   0.5034974,
   0.7154996,
   1};
   graph = new TGraph(51,Graph_fx239,Graph_fy239);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph239 = new TH1F("Graph_Graph239","Tagging Prioritized",100,0,1.1);
   Graph_Graph239->SetMinimum(0);
   Graph_Graph239->SetMaximum(1.1);
   Graph_Graph239->SetDirectory(0);
   Graph_Graph239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph239->SetLineColor(ci);
   Graph_Graph239->GetXaxis()->SetLabelFont(42);
   Graph_Graph239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph239->GetXaxis()->SetTitleFont(42);
   Graph_Graph239->GetYaxis()->SetLabelFont(42);
   Graph_Graph239->GetYaxis()->SetTitleFont(42);
   Graph_Graph239->GetZaxis()->SetLabelFont(42);
   Graph_Graph239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph239->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph239);
   
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
   ROC_Aplanarity_17->Modified();
   ROC_Aplanarity_17->cd();
   ROC_Aplanarity_17->SetSelected(ROC_Aplanarity_17);
}
