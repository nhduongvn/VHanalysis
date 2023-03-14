#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_18()
{
//=========Macro generated from canvas: ROC_jets_CSV_18/ROC_jets_CSV_18
//=========  (Fri Mar 10 12:27:37 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_18 = new TCanvas("ROC_jets_CSV_18", "ROC_jets_CSV_18",0,0,600,600);
   ROC_jets_CSV_18->SetHighLightColor(2);
   ROC_jets_CSV_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CSV_18->SetFillColor(0);
   ROC_jets_CSV_18->SetBorderMode(0);
   ROC_jets_CSV_18->SetBorderSize(2);
   ROC_jets_CSV_18->SetGridx();
   ROC_jets_CSV_18->SetGridy();
   ROC_jets_CSV_18->SetLeftMargin(0.15709);
   ROC_jets_CSV_18->SetRightMargin(0.1234783);
   ROC_jets_CSV_18->SetBottomMargin(0.12);
   ROC_jets_CSV_18->SetFrameBorderMode(0);
   ROC_jets_CSV_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx346[21] = {
   0,
   0.01430052,
   0.01657513,
   0.01817903,
   0.01964386,
   0.02106517,
   0.02243906,
   0.02386749,
   0.02537276,
   0.02706965,
   0.02895152,
   0.03104861,
   0.0334829,
   0.0364694,
   0.04018301,
   0.04495388,
   0.05150106,
   0.06155326,
   0.07966626,
   0.1273393,
   1};
   Double_t Graph_fy346[21] = {
   0,
   0.04107615,
   0.04842527,
   0.05388381,
   0.05934159,
   0.06497058,
   0.07059859,
   0.07657092,
   0.08309252,
   0.09065081,
   0.09922809,
   0.1084242,
   0.1190391,
   0.1317581,
   0.1475493,
   0.1668555,
   0.1910973,
   0.22376,
   0.272405,
   0.3702284,
   1};
   TGraph *graph = new TGraph(21,Graph_fx346,Graph_fy346);
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
   
   TH1F *Graph_Graph346 = new TH1F("Graph_Graph346","CSV",100,0,1.1);
   Graph_Graph346->SetMinimum(0);
   Graph_Graph346->SetMaximum(1.1);
   Graph_Graph346->SetDirectory(0);
   Graph_Graph346->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph346->SetLineColor(ci);
   Graph_Graph346->GetXaxis()->SetLabelFont(42);
   Graph_Graph346->GetXaxis()->SetTitleOffset(1);
   Graph_Graph346->GetXaxis()->SetTitleFont(42);
   Graph_Graph346->GetYaxis()->SetLabelFont(42);
   Graph_Graph346->GetYaxis()->SetTitleFont(42);
   Graph_Graph346->GetZaxis()->SetLabelFont(42);
   Graph_Graph346->GetZaxis()->SetTitleOffset(1);
   Graph_Graph346->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph346);
   
   TLatex *   tex = new TLatex(0,0.1,"0.975");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(347);
      tex = new TLatex(0.01430052,0.1410761,"0.925");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(348);
      tex = new TLatex(0.01657513,0.1484253,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(349);
      tex = new TLatex(0.01817903,0.1538838,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(350);
      tex = new TLatex(0.01964386,0.1593416,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(351);
      tex = new TLatex(0.02106517,0.1649706,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(352);
      tex = new TLatex(0.02243906,0.1705986,"0.675");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(353);
      tex = new TLatex(0.02386749,0.1765709,"0.625");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(354);
      tex = new TLatex(0.02537276,0.1830925,"0.575");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(355);
      tex = new TLatex(0.02706965,0.1906508,"0.525");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(356);
      tex = new TLatex(0.02895152,0.1992281,"0.475");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(357);
      tex = new TLatex(0.03104861,0.2084242,"0.425");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(358);
      tex = new TLatex(0.0334829,0.2190391,"0.375");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(359);
      tex = new TLatex(0.0364694,0.2317581,"0.325");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(360);
      tex = new TLatex(0.04018301,0.2475493,"0.275");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(361);
      tex = new TLatex(0.04495388,0.2668555,"0.225");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(362);
      tex = new TLatex(0.05150106,0.2910973,"0.175");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(363);
      tex = new TLatex(0.06155326,0.32376,"0.125");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(364);
      tex = new TLatex(0.07966626,0.372405,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(365);
      tex = new TLatex(0.1273393,0.4702284,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(366);
      tex = new TLatex(1,1.04,"-0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(367);
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
   ROC_jets_CSV_18->Modified();
   ROC_jets_CSV_18->cd();
   ROC_jets_CSV_18->SetSelected(ROC_jets_CSV_18);
}
