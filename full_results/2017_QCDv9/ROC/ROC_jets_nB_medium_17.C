#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nB_medium_17()
{
//=========Macro generated from canvas: ROC_jets_nB_medium_17/ROC_jets_nB_medium_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nB_medium_17 = new TCanvas("ROC_jets_nB_medium_17", "ROC_jets_nB_medium_17",0,0,600,600);
   ROC_jets_nB_medium_17->SetHighLightColor(2);
   ROC_jets_nB_medium_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nB_medium_17->SetFillColor(0);
   ROC_jets_nB_medium_17->SetBorderMode(0);
   ROC_jets_nB_medium_17->SetBorderSize(2);
   ROC_jets_nB_medium_17->SetGridx();
   ROC_jets_nB_medium_17->SetGridy();
   ROC_jets_nB_medium_17->SetLeftMargin(0.15709);
   ROC_jets_nB_medium_17->SetRightMargin(0.1234783);
   ROC_jets_nB_medium_17->SetBottomMargin(0.12);
   ROC_jets_nB_medium_17->SetFrameBorderMode(0);
   ROC_jets_nB_medium_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx699[10] = {
   0,
   0.5951932,
   0.8884665,
   0.9809755,
   0.9983952,
   0.9999452,
   0.999994,
   1,
   1,
   1};
   Double_t Graph_fy699[10] = {
   0,
   0.9351127,
   0.9960786,
   0.999911,
   0.9999974,
   0.9999999,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(10,Graph_fx699,Graph_fy699);
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
   
   TH1F *Graph_Graph699 = new TH1F("Graph_Graph699","",100,0,1.1);
   Graph_Graph699->SetMinimum(0);
   Graph_Graph699->SetMaximum(1.1);
   Graph_Graph699->SetDirectory(0);
   Graph_Graph699->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph699->SetLineColor(ci);
   Graph_Graph699->GetXaxis()->SetLabelFont(42);
   Graph_Graph699->GetXaxis()->SetTitleOffset(1);
   Graph_Graph699->GetXaxis()->SetTitleFont(42);
   Graph_Graph699->GetYaxis()->SetLabelFont(42);
   Graph_Graph699->GetYaxis()->SetTitleFont(42);
   Graph_Graph699->GetZaxis()->SetLabelFont(42);
   Graph_Graph699->GetZaxis()->SetTitleOffset(1);
   Graph_Graph699->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph699);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(700);
      tex = new TLatex(0.5951932,0.9951127,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(701);
      tex = new TLatex(0.8884665,1.056079,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(702);
      tex = new TLatex(0.9809755,1.059911,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(703);
      tex = new TLatex(0.9983952,1.059997,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(704);
      tex = new TLatex(0.9999452,1.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(705);
      tex = new TLatex(0.999994,1.06,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(706);
      tex = new TLatex(1,1.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(707);
      tex = new TLatex(1,1.06,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(708);
      tex = new TLatex(1,1.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(709);
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
   ROC_jets_nB_medium_17->Modified();
   ROC_jets_nB_medium_17->cd();
   ROC_jets_nB_medium_17->SetSelected(ROC_jets_nB_medium_17);
}
