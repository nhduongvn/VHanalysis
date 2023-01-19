#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nC_medium_17()
{
//=========Macro generated from canvas: ROC_jets_nC_medium_17/ROC_jets_nC_medium_17
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nC_medium_17 = new TCanvas("ROC_jets_nC_medium_17", "ROC_jets_nC_medium_17",0,0,600,600);
   ROC_jets_nC_medium_17->SetHighLightColor(2);
   ROC_jets_nC_medium_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nC_medium_17->SetFillColor(0);
   ROC_jets_nC_medium_17->SetBorderMode(0);
   ROC_jets_nC_medium_17->SetBorderSize(2);
   ROC_jets_nC_medium_17->SetGridx();
   ROC_jets_nC_medium_17->SetGridy();
   ROC_jets_nC_medium_17->SetLeftMargin(0.15709);
   ROC_jets_nC_medium_17->SetRightMargin(0.1234783);
   ROC_jets_nC_medium_17->SetBottomMargin(0.12);
   ROC_jets_nC_medium_17->SetFrameBorderMode(0);
   ROC_jets_nC_medium_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx20[10] = {
   0,
   0.263957,
   0.666673,
   0.9183788,
   0.9898137,
   0.999461,
   0.999981,
   0.9999976,
   1,
   1};
   Double_t Graph_fy20[10] = {
   0,
   0.7251053,
   0.9679668,
   0.9980868,
   0.9998927,
   0.9999938,
   0.9999996,
   1,
   1,
   1};
   TGraph *graph = new TGraph(10,Graph_fx20,Graph_fy20);
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
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","",100,0,1.1);
   Graph_Graph20->SetMinimum(0);
   Graph_Graph20->SetMaximum(1.1);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetTitleOffset(1);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetTitleOffset(1);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_nC_medium_17->Modified();
   ROC_jets_nC_medium_17->cd();
   ROC_jets_nC_medium_17->SetSelected(ROC_jets_nC_medium_17);
}
