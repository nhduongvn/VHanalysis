#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_18()
{
//=========Macro generated from canvas: ROC_Aplanarity_18/ROC_Aplanarity_18
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_18 = new TCanvas("ROC_Aplanarity_18", "ROC_Aplanarity_18",0,0,600,600);
   ROC_Aplanarity_18->SetHighLightColor(2);
   ROC_Aplanarity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_18->SetFillColor(0);
   ROC_Aplanarity_18->SetBorderMode(0);
   ROC_Aplanarity_18->SetBorderSize(2);
   ROC_Aplanarity_18->SetGridx();
   ROC_Aplanarity_18->SetGridy();
   ROC_Aplanarity_18->SetLeftMargin(0.15709);
   ROC_Aplanarity_18->SetRightMargin(0.1234783);
   ROC_Aplanarity_18->SetBottomMargin(0.12);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx240[51] = {
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
   6.937943e-10,
   5.123022e-08,
   3.504874e-07,
   1.546766e-06,
   3.182998e-05,
   6.596809e-05,
   0.0004269018,
   0.000501359,
   0.0009286979,
   0.001452454,
   0.002206446,
   0.003486368,
   0.00525649,
   0.007626631,
   0.01221336,
   0.01670903,
   0.0240098,
   0.03636635,
   0.05544399,
   0.08199509,
   0.1229079,
   0.1945725,
   0.3137736,
   0.5488492,
   1};
   Double_t Graph_fy240[51] = {
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
   0.0001504783,
   0.000466679,
   0.0004870294,
   0.0009567937,
   0.001588489,
   0.003375397,
   0.005278746,
   0.008931903,
   0.01502588,
   0.02284486,
   0.03406213,
   0.04629224,
   0.06488232,
   0.09094557,
   0.1314006,
   0.182021,
   0.2519978,
   0.3478179,
   0.4965903,
   0.7056877,
   1};
   TGraph *graph = new TGraph(51,Graph_fx240,Graph_fy240);
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
   
   TH1F *Graph_Graph240 = new TH1F("Graph_Graph240","Tagging Only",100,0,1.1);
   Graph_Graph240->SetMinimum(0);
   Graph_Graph240->SetMaximum(1.1);
   Graph_Graph240->SetDirectory(0);
   Graph_Graph240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph240->SetLineColor(ci);
   Graph_Graph240->GetXaxis()->SetLabelFont(42);
   Graph_Graph240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph240->GetXaxis()->SetTitleFont(42);
   Graph_Graph240->GetYaxis()->SetLabelFont(42);
   Graph_Graph240->GetYaxis()->SetTitleFont(42);
   Graph_Graph240->GetZaxis()->SetLabelFont(42);
   Graph_Graph240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph240->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph240);
   
   TLatex *   tex = new TLatex(0.1741598,0.4960637,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(241);
      tex = new TLatex(0.2938943,0.6580354,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(242);
      tex = new TLatex(0.5186027,0.8526247,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(243);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx244[51] = {
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
   6.35065e-09,
   1.95093e-07,
   7.523266e-07,
   2.069266e-06,
   5.185548e-06,
   0.0001128898,
   0.0003475208,
   0.0003659408,
   0.0006020148,
   0.001145844,
   0.002262627,
   0.004485003,
   0.007387819,
   0.008314184,
   0.01007379,
   0.01304683,
   0.02894741,
   0.04789684,
   0.07227188,
   0.1091545,
   0.1741598,
   0.2938943,
   0.5186027,
   1};
   Double_t Graph_fy244[51] = {
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
   0,
   0.0001769297,
   0.0003753911,
   0.00157443,
   0.003941762,
   0.005302571,
   0.007491161,
   0.0132372,
   0.02537666,
   0.03751488,
   0.05053006,
   0.07019499,
   0.09910562,
   0.1498069,
   0.2064598,
   0.2857028,
   0.3960637,
   0.5580354,
   0.7526247,
   1};
   graph = new TGraph(51,Graph_fx244,Graph_fy244);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph244 = new TH1F("Graph_Graph244","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph244->SetMinimum(0);
   Graph_Graph244->SetMaximum(1.1);
   Graph_Graph244->SetDirectory(0);
   Graph_Graph244->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph244->SetLineColor(ci);
   Graph_Graph244->GetXaxis()->SetLabelFont(42);
   Graph_Graph244->GetXaxis()->SetTitleOffset(1);
   Graph_Graph244->GetXaxis()->SetTitleFont(42);
   Graph_Graph244->GetYaxis()->SetLabelFont(42);
   Graph_Graph244->GetYaxis()->SetTitleFont(42);
   Graph_Graph244->GetZaxis()->SetLabelFont(42);
   Graph_Graph244->GetZaxis()->SetTitleOffset(1);
   Graph_Graph244->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph244);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx245[51] = {
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
   6.759544e-10,
   5.189514e-08,
   3.545524e-07,
   1.560848e-06,
   3.133583e-05,
   6.500443e-05,
   0.0004173319,
   0.0004912164,
   0.0009099164,
   0.001423441,
   0.002162836,
   0.003442651,
   0.005188215,
   0.007524563,
   0.01206722,
   0.01652231,
   0.02380569,
   0.03608093,
   0.05500421,
   0.08133358,
   0.1225251,
   0.1950314,
   0.3137611,
   0.5485489,
   1};
   Double_t Graph_fy245[51] = {
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
   0.0001322129,
   0.0004100323,
   0.0004465748,
   0.0008593179,
   0.001429647,
   0.003014965,
   0.005144635,
   0.008396756,
   0.01412102,
   0.0217791,
   0.03218838,
   0.04441673,
   0.06232847,
   0.0872203,
   0.1259198,
   0.1761373,
   0.243967,
   0.3381792,
   0.4875282,
   0.6985769,
   1};
   graph = new TGraph(51,Graph_fx245,Graph_fy245);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph245 = new TH1F("Graph_Graph245","Tagging Prioritized",100,0,1.1);
   Graph_Graph245->SetMinimum(0);
   Graph_Graph245->SetMaximum(1.1);
   Graph_Graph245->SetDirectory(0);
   Graph_Graph245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph245->SetLineColor(ci);
   Graph_Graph245->GetXaxis()->SetLabelFont(42);
   Graph_Graph245->GetXaxis()->SetTitleOffset(1);
   Graph_Graph245->GetXaxis()->SetTitleFont(42);
   Graph_Graph245->GetYaxis()->SetLabelFont(42);
   Graph_Graph245->GetYaxis()->SetTitleFont(42);
   Graph_Graph245->GetZaxis()->SetLabelFont(42);
   Graph_Graph245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph245->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph245);
   
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
   ROC_Aplanarity_18->Modified();
   ROC_Aplanarity_18->cd();
   ROC_Aplanarity_18->SetSelected(ROC_Aplanarity_18);
}
