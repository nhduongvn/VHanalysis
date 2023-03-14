#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_17()
{
//=========Macro generated from canvas: ROC_jets_CvL_17/ROC_jets_CvL_17
//=========  (Thu Mar  9 13:38:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_17 = new TCanvas("ROC_jets_CvL_17", "ROC_jets_CvL_17",0,0,600,600);
   ROC_jets_CvL_17->SetHighLightColor(2);
   ROC_jets_CvL_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx371[21] = {
   0,
   0.01806276,
   0.02422569,
   0.02878938,
   0.03248808,
   0.03579274,
   0.03883529,
   0.04175501,
   0.04473983,
   0.04795582,
   0.05155713,
   0.05567553,
   0.06054184,
   0.06663352,
   0.07496789,
   0.08689006,
   0.105479,
   0.140721,
   0.2293633,
   0.5677244,
   1};
   Double_t Graph_fy371[21] = {
   0,
   0.1111994,
   0.1425818,
   0.1665639,
   0.1862342,
   0.2035891,
   0.2189823,
   0.2334268,
   0.2474698,
   0.2615714,
   0.2759878,
   0.2907179,
   0.3062189,
   0.3234138,
   0.3436026,
   0.3687232,
   0.4017731,
   0.4539838,
   0.5553238,
   0.8099852,
   1};
   TGraph *graph = new TGraph(21,Graph_fx371,Graph_fy371);
   graph->SetName("Graph");
   graph->SetTitle("CvL");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph371 = new TH1F("Graph_Graph371","CvL",100,0,1.1);
   Graph_Graph371->SetMinimum(0);
   Graph_Graph371->SetMaximum(1.1);
   Graph_Graph371->SetDirectory(0);
   Graph_Graph371->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph371->SetLineColor(ci);
   Graph_Graph371->GetXaxis()->SetLabelFont(42);
   Graph_Graph371->GetXaxis()->SetTitleOffset(1);
   Graph_Graph371->GetXaxis()->SetTitleFont(42);
   Graph_Graph371->GetYaxis()->SetLabelFont(42);
   Graph_Graph371->GetYaxis()->SetTitleFont(42);
   Graph_Graph371->GetZaxis()->SetLabelFont(42);
   Graph_Graph371->GetZaxis()->SetTitleOffset(1);
   Graph_Graph371->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph371);
   
   TLatex *   tex = new TLatex(0.2293633,0.6553238,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(372);
      tex = new TLatex(0.5677244,0.8499852,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(373);
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
   ROC_jets_CvL_17->Modified();
   ROC_jets_CvL_17->cd();
   ROC_jets_CvL_17->SetSelected(ROC_jets_CvL_17);
}
