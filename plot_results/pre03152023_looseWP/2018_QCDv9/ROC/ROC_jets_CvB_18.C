#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_18()
{
//=========Macro generated from canvas: ROC_jets_CvB_18/ROC_jets_CvB_18
//=========  (Fri Mar 10 12:27:37 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_18 = new TCanvas("ROC_jets_CvB_18", "ROC_jets_CvB_18",0,0,600,600);
   ROC_jets_CvB_18->SetHighLightColor(2);
   ROC_jets_CvB_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CvB_18->SetFillColor(0);
   ROC_jets_CvB_18->SetBorderMode(0);
   ROC_jets_CvB_18->SetBorderSize(2);
   ROC_jets_CvB_18->SetGridx();
   ROC_jets_CvB_18->SetGridy();
   ROC_jets_CvB_18->SetLeftMargin(0.15709);
   ROC_jets_CvB_18->SetRightMargin(0.1234783);
   ROC_jets_CvB_18->SetBottomMargin(0.12);
   ROC_jets_CvB_18->SetFrameBorderMode(0);
   ROC_jets_CvB_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx387[21] = {
   0,
   0.02071534,
   0.2677317,
   0.6041722,
   0.7619381,
   0.8421633,
   0.8881968,
   0.9160904,
   0.9347083,
   0.9471262,
   0.95597,
   0.9624475,
   0.96717,
   0.9707888,
   0.9737474,
   0.9762646,
   0.9784857,
   0.9805121,
   0.9824912,
   0.9851241,
   1};
   Double_t Graph_fy387[21] = {
   0,
   0.05288451,
   0.2934548,
   0.5063134,
   0.630127,
   0.7093098,
   0.7639443,
   0.803573,
   0.8334347,
   0.8556826,
   0.8735755,
   0.8888045,
   0.9013603,
   0.9114506,
   0.9202738,
   0.9283232,
   0.9356824,
   0.9424675,
   0.9489335,
   0.957245,
   1};
   TGraph *graph = new TGraph(21,Graph_fx387,Graph_fy387);
   graph->SetName("Graph");
   graph->SetTitle("CvB");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph387 = new TH1F("Graph_Graph387","CvB",100,0,1.1);
   Graph_Graph387->SetMinimum(0);
   Graph_Graph387->SetMaximum(1.1);
   Graph_Graph387->SetDirectory(0);
   Graph_Graph387->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph387->SetLineColor(ci);
   Graph_Graph387->GetXaxis()->SetLabelFont(42);
   Graph_Graph387->GetXaxis()->SetTitleOffset(1);
   Graph_Graph387->GetXaxis()->SetTitleFont(42);
   Graph_Graph387->GetYaxis()->SetLabelFont(42);
   Graph_Graph387->GetYaxis()->SetTitleFont(42);
   Graph_Graph387->GetZaxis()->SetLabelFont(42);
   Graph_Graph387->GetZaxis()->SetTitleOffset(1);
   Graph_Graph387->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph387);
   
   TLatex *   tex = new TLatex(0.2677317,0.3934548,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(388);
      tex = new TLatex(0.6041722,0.6063134,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(389);
      tex = new TLatex(0.7619381,0.730127,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(390);
      tex = new TLatex(0.8421633,0.8093098,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(391);
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
   ROC_jets_CvB_18->Modified();
   ROC_jets_CvB_18->cd();
   ROC_jets_CvB_18->SetSelected(ROC_jets_CvB_18);
}
