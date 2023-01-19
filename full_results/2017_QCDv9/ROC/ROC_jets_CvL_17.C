#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_17()
{
//=========Macro generated from canvas: ROC_jets_CvL_17/ROC_jets_CvL_17
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_17 = new TCanvas("ROC_jets_CvL_17", "ROC_jets_CvL_17",0,0,600,600);
   ROC_jets_CvL_17->SetHighLightColor(2);
   ROC_jets_CvL_17->Range(-0.2888384,-0.1589539,1.233034,1.165662);
   ROC_jets_CvL_17->SetFillColor(0);
   ROC_jets_CvL_17->SetBorderMode(0);
   ROC_jets_CvL_17->SetBorderSize(2);
   ROC_jets_CvL_17->SetGridx();
   ROC_jets_CvL_17->SetGridy();
   ROC_jets_CvL_17->SetLeftMargin(0.15709);
   ROC_jets_CvL_17->SetRightMargin(0.1234783);
   ROC_jets_CvL_17->SetBottomMargin(0.12);
   ROC_jets_CvL_17->SetFrameBorderMode(0);
   ROC_jets_CvL_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx11[20] = {
   0,
   0.2357771,
   0.5176822,
   0.6330603,
   0.6946152,
   0.7374263,
   0.7698463,
   0.7966024,
   0.8193019,
   0.8405107,
   0.8597805,
   0.8775503,
   0.8933094,
   0.9092137,
   0.9240728,
   0.9382834,
   0.9519445,
   0.9659107,
   0.9802584,
   0.9953486};
   Double_t Graph_fy11[20] = {
   0,
   0.3805346,
   0.7548124,
   0.8571731,
   0.894998,
   0.9147745,
   0.9274021,
   0.9361632,
   0.9425232,
   0.9475772,
   0.9518218,
   0.9554805,
   0.9586966,
   0.9616629,
   0.9645229,
   0.9674417,
   0.9705707,
   0.974029,
   0.9782712,
   0.9840001};
   TGraph *graph = new TGraph(20,Graph_fx11,Graph_fy11);
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
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,0,1.094883);
   Graph_Graph11->SetMinimum(0);
   Graph_Graph11->SetMaximum(1.0824);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04976743, 1.045116);
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
   ROC_jets_CvL_17->Modified();
   ROC_jets_CvL_17->cd();
   ROC_jets_CvL_17->SetSelected(ROC_jets_CvL_17);
}
