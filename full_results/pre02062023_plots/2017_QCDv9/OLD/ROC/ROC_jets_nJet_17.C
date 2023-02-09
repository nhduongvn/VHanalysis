#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_17()
{
//=========Macro generated from canvas: ROC_jets_nJet_17/ROC_jets_nJet_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_17 = new TCanvas("ROC_jets_nJet_17", "ROC_jets_nJet_17",0,0,600,600);
   ROC_jets_nJet_17->SetHighLightColor(2);
   ROC_jets_nJet_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nJet_17->SetFillColor(0);
   ROC_jets_nJet_17->SetBorderMode(0);
   ROC_jets_nJet_17->SetBorderSize(2);
   ROC_jets_nJet_17->SetGridx();
   ROC_jets_nJet_17->SetGridy();
   ROC_jets_nJet_17->SetLeftMargin(0.15709);
   ROC_jets_nJet_17->SetRightMargin(0.1234783);
   ROC_jets_nJet_17->SetBottomMargin(0.12);
   ROC_jets_nJet_17->SetFrameBorderMode(0);
   ROC_jets_nJet_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx469[14] = {
   0,
   0.03404741,
   0.1227822,
   0.3207645,
   0.6121447,
   0.8500127,
   0.9509105,
   0.9855506,
   0.9962314,
   0.9990867,
   0.9997575,
   0.9999482,
   0.9999874,
   1};
   Double_t Graph_fy469[14] = {
   0,
   0.1554173,
   0.5409504,
   0.9096741,
   0.9848137,
   0.9976479,
   0.999619,
   0.9999363,
   0.9999889,
   0.999998,
   0.9999996,
   0.9999999,
   1,
   1};
   TGraph *graph = new TGraph(14,Graph_fx469,Graph_fy469);
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
   
   TH1F *Graph_Graph469 = new TH1F("Graph_Graph469","",100,0,1.1);
   Graph_Graph469->SetMinimum(0);
   Graph_Graph469->SetMaximum(1.1);
   Graph_Graph469->SetDirectory(0);
   Graph_Graph469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph469->SetLineColor(ci);
   Graph_Graph469->GetXaxis()->SetLabelFont(42);
   Graph_Graph469->GetXaxis()->SetTitleOffset(1);
   Graph_Graph469->GetXaxis()->SetTitleFont(42);
   Graph_Graph469->GetYaxis()->SetLabelFont(42);
   Graph_Graph469->GetYaxis()->SetTitleFont(42);
   Graph_Graph469->GetZaxis()->SetLabelFont(42);
   Graph_Graph469->GetZaxis()->SetTitleOffset(1);
   Graph_Graph469->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph469);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(470);
      tex = new TLatex(0.03404741,0.2154173,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(471);
      tex = new TLatex(0.1227822,0.6009504,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(472);
      tex = new TLatex(0.3207645,0.9696741,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(473);
      tex = new TLatex(0.6121447,1.044814,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(474);
      tex = new TLatex(0.8500127,1.057648,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(475);
      tex = new TLatex(0.9509105,1.059619,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(476);
      tex = new TLatex(0.9855506,1.059936,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(477);
      tex = new TLatex(0.9962314,1.059989,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(478);
      tex = new TLatex(0.9990867,1.059998,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(479);
      tex = new TLatex(0.9997575,1.06,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(480);
      tex = new TLatex(0.9999482,1.06,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(481);
      tex = new TLatex(0.9999874,1.06,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(482);
      tex = new TLatex(1,1.06,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(483);
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
   ROC_jets_nJet_17->Modified();
   ROC_jets_nJet_17->cd();
   ROC_jets_nJet_17->SetSelected(ROC_jets_nJet_17);
}
