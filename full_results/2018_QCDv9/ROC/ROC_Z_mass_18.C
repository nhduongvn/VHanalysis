#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_18()
{
//=========Macro generated from canvas: ROC_Z_mass_18/ROC_Z_mass_18
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_18 = new TCanvas("ROC_Z_mass_18", "ROC_Z_mass_18",0,0,600,600);
   ROC_Z_mass_18->SetHighLightColor(2);
   ROC_Z_mass_18->Range(-0.1780571,0.01382539,1.124983,1.11752);
   ROC_Z_mass_18->SetFillColor(0);
   ROC_Z_mass_18->SetBorderMode(0);
   ROC_Z_mass_18->SetBorderSize(2);
   ROC_Z_mass_18->SetGridx();
   ROC_Z_mass_18->SetGridy();
   ROC_Z_mass_18->SetLeftMargin(0.15709);
   ROC_Z_mass_18->SetRightMargin(0.1234783);
   ROC_Z_mass_18->SetBottomMargin(0.12);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx243[8] = {
   0.07020734,
   0.2136331,
   0.3439618,
   0.4577233,
   0.5771868,
   0.6880799,
   0.7595085,
   0.7910679};
   Double_t Graph_fy243[8] = {
   0.1910839,
   0.4894418,
   0.6435653,
   0.7199189,
   0.7766988,
   0.8205261,
   0.8468579,
   0.8670663};
   TGraph *graph = new TGraph(8,Graph_fx243,Graph_fy243);
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
   
   TH1F *Graph_Graph243 = new TH1F("Graph_Graph243","Tagging Only",100,0,0.863154);
   Graph_Graph243->SetMinimum(0.1234857);
   Graph_Graph243->SetMaximum(0.9346645);
   Graph_Graph243->SetDirectory(0);
   Graph_Graph243->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph243->SetLineColor(ci);
   Graph_Graph243->GetXaxis()->SetLabelFont(42);
   Graph_Graph243->GetXaxis()->SetTitleOffset(1);
   Graph_Graph243->GetXaxis()->SetTitleFont(42);
   Graph_Graph243->GetYaxis()->SetLabelFont(42);
   Graph_Graph243->GetYaxis()->SetTitleFont(42);
   Graph_Graph243->GetZaxis()->SetLabelFont(42);
   Graph_Graph243->GetZaxis()->SetTitleOffset(1);
   Graph_Graph243->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph243);
   
   TLatex *   tex = new TLatex(0.2374241,0.7244368,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(244);
      tex = new TLatex(0.3990098,0.8560993,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(245);
      tex = new TLatex(0.5315278,0.930751,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(246);
      tex = new TLatex(0.6812387,0.9740134,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(247);
      tex = new TLatex(0.8321121,0.9919219,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(248);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx249[8] = {
   0.06924884,
   0.2374241,
   0.3990098,
   0.5315278,
   0.6812387,
   0.8321121,
   0.8998784,
   0.9214748};
   Double_t Graph_fy249[8] = {
   0.2523408,
   0.6244368,
   0.8160993,
   0.890751,
   0.9340134,
   0.9519219,
   0.9625961,
   0.9680196};
   graph = new TGraph(8,Graph_fx249,Graph_fy249);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph249 = new TH1F("Graph_Graph249","Mass-Matching Prioritized",100,0,1.006697);
   Graph_Graph249->SetMinimum(0.180773);
   Graph_Graph249->SetMaximum(1.039587);
   Graph_Graph249->SetDirectory(0);
   Graph_Graph249->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph249->SetLineColor(ci);
   Graph_Graph249->GetXaxis()->SetLabelFont(42);
   Graph_Graph249->GetXaxis()->SetTitleOffset(1);
   Graph_Graph249->GetXaxis()->SetTitleFont(42);
   Graph_Graph249->GetYaxis()->SetLabelFont(42);
   Graph_Graph249->GetYaxis()->SetTitleFont(42);
   Graph_Graph249->GetZaxis()->SetLabelFont(42);
   Graph_Graph249->GetZaxis()->SetTitleOffset(1);
   Graph_Graph249->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph249);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx250[8] = {
   0.07030012,
   0.2118429,
   0.3425091,
   0.456477,
   0.5764436,
   0.6860444,
   0.7572757,
   0.7894777};
   Double_t Graph_fy250[8] = {
   0.1853997,
   0.4763137,
   0.6295023,
   0.7069688,
   0.7650851,
   0.8085385,
   0.83616,
   0.8576833};
   graph = new TGraph(8,Graph_fx250,Graph_fy250);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph250 = new TH1F("Graph_Graph250","Tagging Prioritized",100,0,0.8613955);
   Graph_Graph250->SetMinimum(0.1181714);
   Graph_Graph250->SetMaximum(0.9249117);
   Graph_Graph250->SetDirectory(0);
   Graph_Graph250->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph250->SetLineColor(ci);
   Graph_Graph250->GetXaxis()->SetLabelFont(42);
   Graph_Graph250->GetXaxis()->SetTitleOffset(1);
   Graph_Graph250->GetXaxis()->SetTitleFont(42);
   Graph_Graph250->GetYaxis()->SetLabelFont(42);
   Graph_Graph250->GetYaxis()->SetTitleFont(42);
   Graph_Graph250->GetZaxis()->SetLabelFont(42);
   Graph_Graph250->GetZaxis()->SetTitleOffset(1);
   Graph_Graph250->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph250);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02663755, 0.9640861);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 85.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_18->Modified();
   ROC_Z_mass_18->cd();
   ROC_Z_mass_18->SetSelected(ROC_Z_mass_18);
}
