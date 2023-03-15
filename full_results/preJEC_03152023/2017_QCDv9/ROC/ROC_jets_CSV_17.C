#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_17()
{
//=========Macro generated from canvas: ROC_jets_CSV_17/ROC_jets_CSV_17
//=========  (Thu Mar  9 13:38:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_17 = new TCanvas("ROC_jets_CSV_17", "ROC_jets_CSV_17",0,0,600,600);
   ROC_jets_CSV_17->SetHighLightColor(2);
   ROC_jets_CSV_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CSV_17->SetFillColor(0);
   ROC_jets_CSV_17->SetBorderMode(0);
   ROC_jets_CSV_17->SetBorderSize(2);
   ROC_jets_CSV_17->SetGridx();
   ROC_jets_CSV_17->SetGridy();
   ROC_jets_CSV_17->SetLeftMargin(0.15709);
   ROC_jets_CSV_17->SetRightMargin(0.1234783);
   ROC_jets_CSV_17->SetBottomMargin(0.12);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx324[21] = {
   0,
   0.01432128,
   0.01663882,
   0.01829694,
   0.01982992,
   0.021316,
   0.02276172,
   0.02425505,
   0.02584812,
   0.02764104,
   0.02965567,
   0.03190361,
   0.03452575,
   0.03774365,
   0.04174345,
   0.04688607,
   0.05396989,
   0.06484446,
   0.08434572,
   0.1351823,
   1};
   Double_t Graph_fy324[21] = {
   0,
   0.04164339,
   0.04924021,
   0.05507464,
   0.06075848,
   0.06671511,
   0.07260033,
   0.07904821,
   0.08578714,
   0.09365033,
   0.1026283,
   0.1123539,
   0.1234829,
   0.137075,
   0.1534511,
   0.1733757,
   0.1985135,
   0.2322442,
   0.2826181,
   0.3819321,
   1};
   TGraph *graph = new TGraph(21,Graph_fx324,Graph_fy324);
   graph->SetName("Graph");
   graph->SetTitle("CSV");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph324 = new TH1F("Graph_Graph324","CSV",100,0,1.1);
   Graph_Graph324->SetMinimum(0);
   Graph_Graph324->SetMaximum(1.1);
   Graph_Graph324->SetDirectory(0);
   Graph_Graph324->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph324->SetLineColor(ci);
   Graph_Graph324->GetXaxis()->SetLabelFont(42);
   Graph_Graph324->GetXaxis()->SetTitleOffset(1);
   Graph_Graph324->GetXaxis()->SetTitleFont(42);
   Graph_Graph324->GetYaxis()->SetLabelFont(42);
   Graph_Graph324->GetYaxis()->SetTitleFont(42);
   Graph_Graph324->GetZaxis()->SetLabelFont(42);
   Graph_Graph324->GetZaxis()->SetTitleOffset(1);
   Graph_Graph324->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph324);
   
   TLatex *   tex = new TLatex(0,0.1,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(325);
      tex = new TLatex(0.01432128,0.1416434,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(326);
      tex = new TLatex(0.01663882,0.1492402,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(327);
      tex = new TLatex(0.01829694,0.1550746,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(328);
      tex = new TLatex(0.01982992,0.1607585,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(329);
      tex = new TLatex(0.021316,0.1667151,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(330);
      tex = new TLatex(0.02276172,0.1726003,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(331);
      tex = new TLatex(0.02425505,0.1790482,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(332);
      tex = new TLatex(0.02584812,0.1857871,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(333);
      tex = new TLatex(0.02764104,0.1936503,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(334);
      tex = new TLatex(0.02965567,0.2026283,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(335);
      tex = new TLatex(0.03190361,0.2123539,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(336);
      tex = new TLatex(0.03452575,0.2234829,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(337);
      tex = new TLatex(0.03774365,0.237075,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(338);
      tex = new TLatex(0.04174345,0.2534511,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(339);
      tex = new TLatex(0.04688607,0.2733757,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(340);
      tex = new TLatex(0.05396989,0.2985135,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(341);
      tex = new TLatex(0.06484446,0.3322442,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(342);
      tex = new TLatex(0.08434572,0.3826181,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(343);
      tex = new TLatex(0.1351823,0.4819321,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(344);
      tex = new TLatex(1,1.04,"-0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(345);
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
   ROC_jets_CSV_17->Modified();
   ROC_jets_CSV_17->cd();
   ROC_jets_CSV_17->SetSelected(ROC_jets_CSV_17);
}
