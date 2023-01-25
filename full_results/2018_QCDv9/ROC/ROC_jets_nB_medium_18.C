#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nB_medium_18()
{
//=========Macro generated from canvas: ROC_jets_nB_medium_18/ROC_jets_nB_medium_18
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx710[10] = {
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
   Double_t Graph_fy710[10] = {
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
   TGraph *graph = new TGraph(10,Graph_fx710,Graph_fy710);
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
   
   TH1F *Graph_Graph710 = new TH1F("Graph_Graph710","",100,0,1.1);
   Graph_Graph710->SetMinimum(0);
   Graph_Graph710->SetMaximum(1.1);
   Graph_Graph710->SetDirectory(0);
   Graph_Graph710->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph710->SetLineColor(ci);
   Graph_Graph710->GetXaxis()->SetLabelFont(42);
   Graph_Graph710->GetXaxis()->SetTitleOffset(1);
   Graph_Graph710->GetXaxis()->SetTitleFont(42);
   Graph_Graph710->GetYaxis()->SetLabelFont(42);
   Graph_Graph710->GetYaxis()->SetTitleFont(42);
   Graph_Graph710->GetZaxis()->SetLabelFont(42);
   Graph_Graph710->GetZaxis()->SetTitleOffset(1);
   Graph_Graph710->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph710);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(711);
      tex = new TLatex(0.6147519,0.9983924,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(712);
      tex = new TLatex(0.8977228,1.056312,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(713);
      tex = new TLatex(0.9836074,1.059922,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(714);
      tex = new TLatex(0.9987194,1.059998,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(715);
      tex = new TLatex(0.9999511,1.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(716);
      tex = new TLatex(0.9999984,1.06,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(717);
      tex = new TLatex(1,1.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(718);
      tex = new TLatex(1,1.06,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(719);
      tex = new TLatex(1,1.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(720);
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
   ROC_jets_nB_medium_18->Modified();
   ROC_jets_nB_medium_18->cd();
   ROC_jets_nB_medium_18->SetSelected(ROC_jets_nB_medium_18);
}
