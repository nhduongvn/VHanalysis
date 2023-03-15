#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx276[26] = {
   0,
   1.492194e-07,
   4.375228e-06,
   7.397778e-05,
   0.0002261909,
   0.001198738,
   0.003518647,
   0.008268221,
   0.01764843,
   0.03227439,
   0.04813333,
   0.06764202,
   0.09270129,
   0.1202629,
   0.1616788,
   0.2042973,
   0.2474086,
   0.2990785,
   0.3555986,
   0.4268495,
   0.5202891,
   0.6161221,
   0.7322147,
   0.8554498,
   0.955686,
   1};
   Double_t Graph_fy276[26] = {
   0,
   0,
   0.0001957875,
   0.0002844087,
   0.001216857,
   0.003284939,
   0.009214565,
   0.01791622,
   0.03243695,
   0.05160856,
   0.08237883,
   0.1226999,
   0.1649082,
   0.2168439,
   0.2697951,
   0.3233202,
   0.3902097,
   0.465931,
   0.5396135,
   0.6188888,
   0.700749,
   0.7808915,
   0.8711324,
   0.9446926,
   0.9875523,
   1};
   TGraph *graph = new TGraph(26,Graph_fx276,Graph_fy276);
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
   
   TH1F *Graph_Graph276 = new TH1F("Graph_Graph276","Tagging Only",100,0,1.1);
   Graph_Graph276->SetMinimum(0);
   Graph_Graph276->SetMaximum(1.1);
   Graph_Graph276->SetDirectory(0);
   Graph_Graph276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph276->SetLineColor(ci);
   Graph_Graph276->GetXaxis()->SetLabelFont(42);
   Graph_Graph276->GetXaxis()->SetTitleOffset(1);
   Graph_Graph276->GetXaxis()->SetTitleFont(42);
   Graph_Graph276->GetYaxis()->SetLabelFont(42);
   Graph_Graph276->GetYaxis()->SetTitleFont(42);
   Graph_Graph276->GetZaxis()->SetLabelFont(42);
   Graph_Graph276->GetZaxis()->SetTitleOffset(1);
   Graph_Graph276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph276);
   
   TLatex *   tex = new TLatex(0.1843619,0.4498023,"0.38");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(0.2226454,0.5140353,"0.34");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(0.2713779,0.6061543,"0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.3136967,0.683363,"0.26");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.3748708,0.7546425,"0.22");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
      tex = new TLatex(0.5003023,0.8274677,"0.18");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(282);
      tex = new TLatex(0.5944677,0.8457429,"0.14");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(283);
      tex = new TLatex(0.7063569,0.9388689,"0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(284);
      tex = new TLatex(0.8192094,0.9982213,"0.06");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx286[26] = {
   0,
   0,
   2.17869e-06,
   1.7577e-05,
   7.363706e-05,
   0.0008927188,
   0.003739727,
   0.007136871,
   0.01492354,
   0.04052754,
   0.05675983,
   0.07537686,
   0.09920225,
   0.1264706,
   0.1498296,
   0.1843619,
   0.2226454,
   0.2713779,
   0.3136967,
   0.3748708,
   0.5003023,
   0.5944677,
   0.7063569,
   0.8192094,
   0.9434534,
   1};
   Double_t Graph_fy286[26] = {
   0,
   0,
   0,
   0,
   0.0006742217,
   0.002983019,
   0.005965028,
   0.01413195,
   0.03179191,
   0.05624641,
   0.08987809,
   0.1410976,
   0.1800014,
   0.2318292,
   0.2945987,
   0.3498023,
   0.4140353,
   0.5061543,
   0.583363,
   0.6546425,
   0.7274677,
   0.8057429,
   0.8988689,
   0.9582213,
   0.994072,
   1};
   graph = new TGraph(26,Graph_fx286,Graph_fy286);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph286 = new TH1F("Graph_Graph286","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph286->SetMinimum(0);
   Graph_Graph286->SetMaximum(1.1);
   Graph_Graph286->SetDirectory(0);
   Graph_Graph286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph286->SetLineColor(ci);
   Graph_Graph286->GetXaxis()->SetLabelFont(42);
   Graph_Graph286->GetXaxis()->SetTitleOffset(1);
   Graph_Graph286->GetXaxis()->SetTitleFont(42);
   Graph_Graph286->GetYaxis()->SetLabelFont(42);
   Graph_Graph286->GetYaxis()->SetTitleFont(42);
   Graph_Graph286->GetZaxis()->SetLabelFont(42);
   Graph_Graph286->GetZaxis()->SetTitleOffset(1);
   Graph_Graph286->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph286);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx287[26] = {
   0,
   1.466337e-07,
   4.397823e-06,
   7.331043e-05,
   0.0002276482,
   0.001191452,
   0.003684873,
   0.008443358,
   0.01776861,
   0.03236276,
   0.04828389,
   0.06777896,
   0.09290464,
   0.1204679,
   0.161804,
   0.2041924,
   0.2473798,
   0.2988514,
   0.3554904,
   0.4267467,
   0.5199164,
   0.6157166,
   0.7319193,
   0.8548457,
   0.9554337,
   1};
   Double_t Graph_fy287[26] = {
   0,
   0,
   0.0001918656,
   0.0002787116,
   0.001156375,
   0.003212272,
   0.009023119,
   0.01790453,
   0.03219001,
   0.0517005,
   0.0821464,
   0.1222818,
   0.1646332,
   0.2163952,
   0.2691266,
   0.3227908,
   0.3896622,
   0.4646685,
   0.5388365,
   0.6177474,
   0.6998226,
   0.7809206,
   0.8709731,
   0.9444126,
   0.9872929,
   1};
   graph = new TGraph(26,Graph_fx287,Graph_fy287);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph287 = new TH1F("Graph_Graph287","Tagging Prioritized",100,0,1.1);
   Graph_Graph287->SetMinimum(0);
   Graph_Graph287->SetMaximum(1.1);
   Graph_Graph287->SetDirectory(0);
   Graph_Graph287->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph287->SetLineColor(ci);
   Graph_Graph287->GetXaxis()->SetLabelFont(42);
   Graph_Graph287->GetXaxis()->SetTitleOffset(1);
   Graph_Graph287->GetXaxis()->SetTitleFont(42);
   Graph_Graph287->GetYaxis()->SetLabelFont(42);
   Graph_Graph287->GetYaxis()->SetTitleFont(42);
   Graph_Graph287->GetZaxis()->SetLabelFont(42);
   Graph_Graph287->GetZaxis()->SetTitleOffset(1);
   Graph_Graph287->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph287);
   
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
