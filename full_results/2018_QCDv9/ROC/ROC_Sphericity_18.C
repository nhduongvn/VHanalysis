#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
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
   1.470051e-07,
   4.427763e-06,
   7.5934e-05,
   0.0002284056,
   0.001230626,
   0.003492515,
   0.008004235,
   0.01949635,
   0.03445697,
   0.0503504,
   0.07001933,
   0.09487441,
   0.1218752,
   0.1628205,
   0.2052004,
   0.2485858,
   0.3003715,
   0.3574283,
   0.4275332,
   0.5200979,
   0.6162588,
   0.732738,
   0.8558338,
   0.9556312,
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
   
   TLatex *   tex = new TLatex(0.1826181,0.4498023,"0.38");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(0.2212571,0.5140353,"0.34");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(0.270275,0.6061543,"0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.3130864,0.683363,"0.26");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.3714313,0.7546425,"0.22");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
      tex = new TLatex(0.5006583,0.8274677,"0.18");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(282);
      tex = new TLatex(0.5956214,0.8457429,"0.14");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(283);
      tex = new TLatex(0.7095252,0.9388689,"0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(284);
      tex = new TLatex(0.8223587,0.9982213,"0.06");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx286[26] = {
   0,
   0,
   2.181632e-06,
   1.804937e-05,
   7.474195e-05,
   0.0009426658,
   0.003771287,
   0.007347799,
   0.01440957,
   0.04050409,
   0.05769618,
   0.07541303,
   0.09892091,
   0.1257627,
   0.1485791,
   0.1826181,
   0.2212571,
   0.270275,
   0.3130864,
   0.3714313,
   0.5006583,
   0.5956214,
   0.7095252,
   0.8223587,
   0.943299,
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
   1.444852e-07,
   4.450156e-06,
   7.526725e-05,
   0.0002299425,
   0.001223091,
   0.003681093,
   0.008174112,
   0.01957654,
   0.03450586,
   0.05043787,
   0.07010014,
   0.09500302,
   0.1220331,
   0.1628141,
   0.2049867,
   0.2484718,
   0.3000415,
   0.3572457,
   0.4274118,
   0.5197817,
   0.6157888,
   0.7324408,
   0.8552706,
   0.9553991,
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
