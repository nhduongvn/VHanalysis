#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nC_medium_17()
{
//=========Macro generated from canvas: ROC_jets_nC_medium_17/ROC_jets_nC_medium_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx732[10] = {
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
   Double_t Graph_fy732[10] = {
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
   TGraph *graph = new TGraph(10,Graph_fx732,Graph_fy732);
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
   
   TH1F *Graph_Graph732 = new TH1F("Graph_Graph732","",100,0,1.1);
   Graph_Graph732->SetMinimum(0);
   Graph_Graph732->SetMaximum(1.1);
   Graph_Graph732->SetDirectory(0);
   Graph_Graph732->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph732->SetLineColor(ci);
   Graph_Graph732->GetXaxis()->SetLabelFont(42);
   Graph_Graph732->GetXaxis()->SetTitleOffset(1);
   Graph_Graph732->GetXaxis()->SetTitleFont(42);
   Graph_Graph732->GetYaxis()->SetLabelFont(42);
   Graph_Graph732->GetYaxis()->SetTitleFont(42);
   Graph_Graph732->GetZaxis()->SetLabelFont(42);
   Graph_Graph732->GetZaxis()->SetTitleOffset(1);
   Graph_Graph732->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph732);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(733);
      tex = new TLatex(0.263957,0.7851053,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(734);
      tex = new TLatex(0.666673,1.027967,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(735);
      tex = new TLatex(0.9183788,1.058087,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(736);
      tex = new TLatex(0.9898137,1.059893,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(737);
      tex = new TLatex(0.999461,1.059994,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(738);
      tex = new TLatex(0.999981,1.06,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(739);
      tex = new TLatex(0.9999976,1.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(740);
      tex = new TLatex(1,1.06,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(741);
      tex = new TLatex(1,1.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(742);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_nC_medium_17->Modified();
   ROC_jets_nC_medium_17->cd();
   ROC_jets_nC_medium_17->SetSelected(ROC_jets_nC_medium_17);
}
