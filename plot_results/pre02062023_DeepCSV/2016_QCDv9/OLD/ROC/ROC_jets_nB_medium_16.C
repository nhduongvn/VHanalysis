#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nB_medium_16()
{
//=========Macro generated from canvas: ROC_jets_nB_medium_16/ROC_jets_nB_medium_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nB_medium_16 = new TCanvas("ROC_jets_nB_medium_16", "ROC_jets_nB_medium_16",0,0,600,600);
   ROC_jets_nB_medium_16->SetHighLightColor(2);
   ROC_jets_nB_medium_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nB_medium_16->SetFillColor(0);
   ROC_jets_nB_medium_16->SetBorderMode(0);
   ROC_jets_nB_medium_16->SetBorderSize(2);
   ROC_jets_nB_medium_16->SetGridx();
   ROC_jets_nB_medium_16->SetGridy();
   ROC_jets_nB_medium_16->SetLeftMargin(0.15709);
   ROC_jets_nB_medium_16->SetRightMargin(0.1234783);
   ROC_jets_nB_medium_16->SetBottomMargin(0.12);
   ROC_jets_nB_medium_16->SetFrameBorderMode(0);
   ROC_jets_nB_medium_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx688[10] = {
   0,
   0.6196601,
   0.901731,
   0.98366,
   0.9985845,
   0.9999235,
   0.9999938,
   0.9999997,
   0.9999997,
   1};
   Double_t Graph_fy688[10] = {
   0,
   0.9447881,
   0.9969641,
   0.9999434,
   0.9999984,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(10,Graph_fx688,Graph_fy688);
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
   
   TH1F *Graph_Graph688 = new TH1F("Graph_Graph688","",100,0,1.1);
   Graph_Graph688->SetMinimum(0);
   Graph_Graph688->SetMaximum(1.1);
   Graph_Graph688->SetDirectory(0);
   Graph_Graph688->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph688->SetLineColor(ci);
   Graph_Graph688->GetXaxis()->SetLabelFont(42);
   Graph_Graph688->GetXaxis()->SetTitleOffset(1);
   Graph_Graph688->GetXaxis()->SetTitleFont(42);
   Graph_Graph688->GetYaxis()->SetLabelFont(42);
   Graph_Graph688->GetYaxis()->SetTitleFont(42);
   Graph_Graph688->GetZaxis()->SetLabelFont(42);
   Graph_Graph688->GetZaxis()->SetTitleOffset(1);
   Graph_Graph688->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph688);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(689);
      tex = new TLatex(0.6196601,1.004788,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(690);
      tex = new TLatex(0.901731,1.056964,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(691);
      tex = new TLatex(0.98366,1.059943,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(692);
      tex = new TLatex(0.9985845,1.059998,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(693);
      tex = new TLatex(0.9999235,1.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(694);
      tex = new TLatex(0.9999938,1.06,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(695);
      tex = new TLatex(0.9999997,1.06,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(696);
      tex = new TLatex(0.9999997,1.06,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(697);
      tex = new TLatex(1,1.06,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(698);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_nB_medium_16->Modified();
   ROC_jets_nB_medium_16->cd();
   ROC_jets_nB_medium_16->SetSelected(ROC_jets_nB_medium_16);
}
