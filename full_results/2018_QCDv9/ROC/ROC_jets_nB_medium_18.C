#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nB_medium_18()
{
//=========Macro generated from canvas: ROC_jets_nB_medium_18/ROC_jets_nB_medium_18
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nB_medium_18 = new TCanvas("ROC_jets_nB_medium_18", "ROC_jets_nB_medium_18",0,0,600,600);
   ROC_jets_nB_medium_18->SetHighLightColor(2);
   ROC_jets_nB_medium_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nB_medium_18->SetFillColor(0);
   ROC_jets_nB_medium_18->SetBorderMode(0);
   ROC_jets_nB_medium_18->SetBorderSize(2);
   ROC_jets_nB_medium_18->SetGridx();
   ROC_jets_nB_medium_18->SetGridy();
   ROC_jets_nB_medium_18->SetLeftMargin(0.15709);
   ROC_jets_nB_medium_18->SetRightMargin(0.1234783);
   ROC_jets_nB_medium_18->SetBottomMargin(0.12);
   ROC_jets_nB_medium_18->SetFrameBorderMode(0);
   ROC_jets_nB_medium_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx18[10] = {
   0,
   0.6147519,
   0.8977228,
   0.9836074,
   0.9987194,
   0.9999511,
   0.9999984,
   1,
   1,
   1};
   Double_t Graph_fy18[10] = {
   0,
   0.9383924,
   0.9963118,
   0.9999215,
   0.9999979,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(10,Graph_fx18,Graph_fy18);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","",100,0,1.1);
   Graph_Graph18->SetMinimum(0);
   Graph_Graph18->SetMaximum(1.1);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetTitleOffset(1);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetTitleOffset(1);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_nB_medium_18->Modified();
   ROC_jets_nB_medium_18->cd();
   ROC_jets_nB_medium_18->SetSelected(ROC_jets_nB_medium_18);
}
