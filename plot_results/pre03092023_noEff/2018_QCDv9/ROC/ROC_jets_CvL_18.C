#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_18()
{
//=========Macro generated from canvas: ROC_jets_CvL_18/ROC_jets_CvL_18
//=========  (Thu Mar  2 11:32:56 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_18 = new TCanvas("ROC_jets_CvL_18", "ROC_jets_CvL_18",0,0,600,600);
   ROC_jets_CvL_18->SetHighLightColor(2);
   ROC_jets_CvL_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CvL_18->SetFillColor(0);
   ROC_jets_CvL_18->SetBorderMode(0);
   ROC_jets_CvL_18->SetBorderSize(2);
   ROC_jets_CvL_18->SetGridx();
   ROC_jets_CvL_18->SetGridy();
   ROC_jets_CvL_18->SetLeftMargin(0.15709);
   ROC_jets_CvL_18->SetRightMargin(0.1234783);
   ROC_jets_CvL_18->SetBottomMargin(0.12);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx374[21] = {
   0,
   0.01756414,
   0.0236391,
   0.02813325,
   0.03178655,
   0.03502511,
   0.03797918,
   0.04080136,
   0.04366159,
   0.04671676,
   0.05012692,
   0.05400025,
   0.05856288,
   0.06426982,
   0.07204942,
   0.08323949,
   0.1009027,
   0.1347365,
   0.2208502,
   0.5590214,
   1};
   Double_t Graph_fy374[21] = {
   0,
   0.107394,
   0.138127,
   0.1617395,
   0.1808612,
   0.1978155,
   0.2131802,
   0.2273326,
   0.2410781,
   0.2546501,
   0.2689222,
   0.2833823,
   0.2985535,
   0.3155009,
   0.3352285,
   0.3599453,
   0.3928221,
   0.4448678,
   0.545866,
   0.8042685,
   1};
   TGraph *graph = new TGraph(21,Graph_fx374,Graph_fy374);
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
   
   TH1F *Graph_Graph374 = new TH1F("Graph_Graph374","CvL",100,0,1.1);
   Graph_Graph374->SetMinimum(0);
   Graph_Graph374->SetMaximum(1.1);
   Graph_Graph374->SetDirectory(0);
   Graph_Graph374->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph374->SetLineColor(ci);
   Graph_Graph374->GetXaxis()->SetLabelFont(42);
   Graph_Graph374->GetXaxis()->SetTitleOffset(1);
   Graph_Graph374->GetXaxis()->SetTitleFont(42);
   Graph_Graph374->GetYaxis()->SetLabelFont(42);
   Graph_Graph374->GetYaxis()->SetTitleFont(42);
   Graph_Graph374->GetZaxis()->SetLabelFont(42);
   Graph_Graph374->GetZaxis()->SetTitleOffset(1);
   Graph_Graph374->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph374);
   
   TLatex *   tex = new TLatex(0.2208502,0.645866,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(375);
      tex = new TLatex(0.5590214,0.8442685,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(376);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvL_18->Modified();
   ROC_jets_CvL_18->cd();
   ROC_jets_CvL_18->SetSelected(ROC_jets_CvL_18);
}
