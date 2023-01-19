#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_17()
{
//=========Macro generated from canvas: ROC_jets_CvB_17/ROC_jets_CvB_17
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_17 = new TCanvas("ROC_jets_CvB_17", "ROC_jets_CvB_17",0,0,600,600);
   ROC_jets_CvB_17->SetHighLightColor(2);
   ROC_jets_CvB_17->Range(-0.2670655,-0.1598399,1.140087,1.172159);
   ROC_jets_CvB_17->SetFillColor(0);
   ROC_jets_CvB_17->SetBorderMode(0);
   ROC_jets_CvB_17->SetBorderSize(2);
   ROC_jets_CvB_17->SetGridx();
   ROC_jets_CvB_17->SetGridy();
   ROC_jets_CvB_17->SetLeftMargin(0.15709);
   ROC_jets_CvB_17->SetRightMargin(0.1234783);
   ROC_jets_CvB_17->SetBottomMargin(0.12);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx14[20] = {
   0,
   0.09440584,
   0.1092694,
   0.1247615,
   0.1384947,
   0.1545403,
   0.1708927,
   0.1890297,
   0.2068815,
   0.2329063,
   0.2691024,
   0.3047036,
   0.3464706,
   0.3995721,
   0.4530329,
   0.5210912,
   0.5917252,
   0.6802897,
   0.7857944,
   0.9203184};
   Double_t Graph_fy14[20] = {
   0,
   0.01346684,
   0.01643332,
   0.0187738,
   0.02121161,
   0.02401526,
   0.0273289,
   0.03136177,
   0.03643815,
   0.04314505,
   0.05285408,
   0.06638822,
   0.08574218,
   0.1138433,
   0.1540619,
   0.2172917,
   0.3212111,
   0.5055045,
   0.8164854,
   0.989485};
   TGraph *graph = new TGraph(20,Graph_fx14,Graph_fy14);
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
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,0,1.01235);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(1.088433);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04601592, 0.9663343);
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
   ROC_jets_CvB_17->Modified();
   ROC_jets_CvB_17->cd();
   ROC_jets_CvB_17->SetSelected(ROC_jets_CvB_17);
}
