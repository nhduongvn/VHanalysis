#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_18()
{
//=========Macro generated from canvas: ROC_Z_mass_18/ROC_Z_mass_18
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_18 = new TCanvas("ROC_Z_mass_18", "ROC_Z_mass_18",0,0,600,600);
   ROC_Z_mass_18->SetHighLightColor(2);
   ROC_Z_mass_18->Range(-0.1896487,0.02318395,1.124223,1.114286);
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
   
   Double_t Graph_fx861[8] = {
   0.06451328,
   0.1894353,
   0.3121734,
   0.4337264,
   0.5551311,
   0.6743367,
   0.7463141,
   0.7812767};
   Double_t Graph_fy861[8] = {
   0.194475,
   0.4888082,
   0.6435509,
   0.7242258,
   0.7811716,
   0.8193648,
   0.8433292,
   0.861756};
   TGraph *graph = new TGraph(8,Graph_fx861,Graph_fy861);
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
   
   TH1F *Graph_Graph861 = new TH1F("Graph_Graph861","Tagging Only",100,0,0.852953);
   Graph_Graph861->SetMinimum(0.1277469);
   Graph_Graph861->SetMaximum(0.9284841);
   Graph_Graph861->SetDirectory(0);
   Graph_Graph861->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph861->SetLineColor(ci);
   Graph_Graph861->GetXaxis()->SetLabelFont(42);
   Graph_Graph861->GetXaxis()->SetTitleOffset(1);
   Graph_Graph861->GetXaxis()->SetTitleFont(42);
   Graph_Graph861->GetYaxis()->SetLabelFont(42);
   Graph_Graph861->GetYaxis()->SetTitleFont(42);
   Graph_Graph861->GetZaxis()->SetLabelFont(42);
   Graph_Graph861->GetZaxis()->SetTitleOffset(1);
   Graph_Graph861->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph861);
   
   TLatex *   tex = new TLatex(0.2296071,0.7577267,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(862);
      tex = new TLatex(0.3811271,0.8698704,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(863);
      tex = new TLatex(0.5362404,0.9456627,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(864);
      tex = new TLatex(0.6807794,0.9792484,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(865);
      tex = new TLatex(0.8099412,0.9942611,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(866);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx867[8] = {
   0.05971294,
   0.2296071,
   0.3811271,
   0.5362404,
   0.6807794,
   0.8099412,
   0.8985514,
   0.919023};
   Double_t Graph_fy867[8] = {
   0.2657756,
   0.6577267,
   0.8298704,
   0.9056627,
   0.9392484,
   0.9542611,
   0.9619051,
   0.9664912};
   graph = new TGraph(8,Graph_fx867,Graph_fy867);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph867 = new TH1F("Graph_Graph867","Mass-Matching Prioritized",100,0,1.004954);
   Graph_Graph867->SetMinimum(0.195704);
   Graph_Graph867->SetMaximum(1.036563);
   Graph_Graph867->SetDirectory(0);
   Graph_Graph867->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph867->SetLineColor(ci);
   Graph_Graph867->GetXaxis()->SetLabelFont(42);
   Graph_Graph867->GetXaxis()->SetTitleOffset(1);
   Graph_Graph867->GetXaxis()->SetTitleFont(42);
   Graph_Graph867->GetYaxis()->SetLabelFont(42);
   Graph_Graph867->GetYaxis()->SetTitleFont(42);
   Graph_Graph867->GetZaxis()->SetLabelFont(42);
   Graph_Graph867->GetZaxis()->SetTitleOffset(1);
   Graph_Graph867->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph867);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx868[8] = {
   0.06421475,
   0.1891393,
   0.3115312,
   0.4329449,
   0.5535215,
   0.6724004,
   0.7442919,
   0.7796904};
   Double_t Graph_fy868[8] = {
   0.1928007,
   0.487631,
   0.6419486,
   0.7219388,
   0.7788601,
   0.8170581,
   0.8413844,
   0.8596379};
   graph = new TGraph(8,Graph_fx868,Graph_fy868);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph868 = new TH1F("Graph_Graph868","Tagging Prioritized",100,0,0.851238);
   Graph_Graph868->SetMinimum(0.126117);
   Graph_Graph868->SetMaximum(0.9263216);
   Graph_Graph868->SetDirectory(0);
   Graph_Graph868->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph868->SetLineColor(ci);
   Graph_Graph868->GetXaxis()->SetLabelFont(42);
   Graph_Graph868->GetXaxis()->SetTitleOffset(1);
   Graph_Graph868->GetXaxis()->SetTitleFont(42);
   Graph_Graph868->GetYaxis()->SetLabelFont(42);
   Graph_Graph868->GetYaxis()->SetTitleFont(42);
   Graph_Graph868->GetZaxis()->SetLabelFont(42);
   Graph_Graph868->GetZaxis()->SetTitleOffset(1);
   Graph_Graph868->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph868);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.01674744, 0.9619885);
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
