#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_16()
{
//=========Macro generated from canvas: ROC_jets_CSV_16/ROC_jets_CSV_16
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_16 = new TCanvas("ROC_jets_CSV_16", "ROC_jets_CSV_16",0,0,600,600);
   ROC_jets_CSV_16->SetHighLightColor(2);
   ROC_jets_CSV_16->Range(-0.2801129,-0.1597835,1.195786,1.171745);
   ROC_jets_CSV_16->SetFillColor(0);
   ROC_jets_CSV_16->SetBorderMode(0);
   ROC_jets_CSV_16->SetBorderSize(2);
   ROC_jets_CSV_16->SetGridx();
   ROC_jets_CSV_16->SetGridy();
   ROC_jets_CSV_16->SetLeftMargin(0.15709);
   ROC_jets_CSV_16->SetRightMargin(0.1234783);
   ROC_jets_CSV_16->SetBottomMargin(0.12);
   ROC_jets_CSV_16->SetFrameBorderMode(0);
   ROC_jets_CSV_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx7[20] = {
   0,
   0.6268841,
   0.7317533,
   0.7817078,
   0.8136863,
   0.8374289,
   0.8562286,
   0.8717916,
   0.8848005,
   0.8956709,
   0.905203,
   0.9138778,
   0.921638,
   0.9284528,
   0.9347115,
   0.9406257,
   0.9463509,
   0.9519424,
   0.9576892,
   0.9652803};
   Double_t Graph_fy7[20] = {
   0,
   0.8444093,
   0.9135062,
   0.9371882,
   0.9494266,
   0.9571688,
   0.9625805,
   0.9666823,
   0.9699009,
   0.9724852,
   0.974659,
   0.9765742,
   0.9782595,
   0.9797698,
   0.9811795,
   0.9825332,
   0.9839337,
   0.9853461,
   0.9869368,
   0.9891357};
   TGraph *graph = new TGraph(20,Graph_fx7,Graph_fy7);
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
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0,1.061808);
   Graph_Graph7->SetMinimum(0);
   Graph_Graph7->SetMaximum(1.088049);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04826402, 1.013544);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CSV_16->Modified();
   ROC_jets_CSV_16->cd();
   ROC_jets_CSV_16->SetSelected(ROC_jets_CSV_16);
}
