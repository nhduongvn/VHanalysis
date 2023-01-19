#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_18()
{
//=========Macro generated from canvas: ROC_jets_nJet_18/ROC_jets_nJet_18
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_18 = new TCanvas("ROC_jets_nJet_18", "ROC_jets_nJet_18",0,0,600,600);
   ROC_jets_nJet_18->SetHighLightColor(2);
   ROC_jets_nJet_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_jets_nJet_18->SetFillColor(0);
   ROC_jets_nJet_18->SetBorderMode(0);
   ROC_jets_nJet_18->SetBorderSize(2);
   ROC_jets_nJet_18->SetGridx();
   ROC_jets_nJet_18->SetGridy();
   ROC_jets_nJet_18->SetLeftMargin(0.15709);
   ROC_jets_nJet_18->SetRightMargin(0.1234783);
   ROC_jets_nJet_18->SetBottomMargin(0.12);
   ROC_jets_nJet_18->SetFrameBorderMode(0);
   ROC_jets_nJet_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx6[14] = {
   0,
   0.03457277,
   0.1259431,
   0.3246741,
   0.6128773,
   0.8483555,
   0.9497821,
   0.9851131,
   0.9957812,
   0.998918,
   0.9997475,
   0.9999406,
   0.9999864,
   0.9999997};
   Double_t Graph_fy6[14] = {
   0,
   0.1577912,
   0.5466562,
   0.9131274,
   0.9855875,
   0.9977821,
   0.9996415,
   0.9999393,
   0.9999893,
   0.9999981,
   0.9999997,
   0.9999999,
   1,
   1};
   TGraph *graph = new TGraph(14,Graph_fx6,Graph_fy6);
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
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,0,1.1);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(1.1);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
   ROC_jets_nJet_18->Modified();
   ROC_jets_nJet_18->cd();
   ROC_jets_nJet_18->SetSelected(ROC_jets_nJet_18);
}
