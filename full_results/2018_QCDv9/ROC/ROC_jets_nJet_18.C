#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_18()
{
//=========Macro generated from canvas: ROC_jets_nJet_18/ROC_jets_nJet_18
//=========  (Thu Mar  9 13:38:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_18 = new TCanvas("ROC_jets_nJet_18", "ROC_jets_nJet_18",0,0,600,600);
   ROC_jets_nJet_18->SetHighLightColor(2);
   ROC_jets_nJet_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_nJet_18->SetFillColor(0);
   ROC_jets_nJet_18->SetBorderMode(0);
   ROC_jets_nJet_18->SetBorderSize(2);
   ROC_jets_nJet_18->SetGridx();
   ROC_jets_nJet_18->SetGridy();
   ROC_jets_nJet_18->SetLeftMargin(0.15709);
   ROC_jets_nJet_18->SetRightMargin(0.1234783);
   ROC_jets_nJet_18->SetBottomMargin(0.12);
   ROC_jets_nJet_18->SetFrameBorderMode(0);
   ROC_jets_nJet_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx286[15] = {
   0,
   4.613962e-11,
   4.063084e-10,
   2.676231e-09,
   1.854856e-08,
   1.199509e-07,
   7.788356e-07,
   5.272594e-06,
   3.605209e-05,
   0.0002555695,
   0.002042908,
   0.01538367,
   0.1799042,
   0.472417,
   1};
   Double_t Graph_fy286[15] = {
   0,
   0,
   4.615368e-06,
   4.818653e-06,
   2.702315e-05,
   0.0001238925,
   0.0006577788,
   0.002976808,
   0.01261424,
   0.04895812,
   0.1656215,
   0.4008371,
   0.7038009,
   0.8827441,
   1};
   TGraph *graph = new TGraph(15,Graph_fx286,Graph_fy286);
   graph->SetName("Graph");
   graph->SetTitle("nJet");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph286 = new TH1F("Graph_Graph286","nJet",100,0,1.1);
   Graph_Graph286->SetMinimum(0);
   Graph_Graph286->SetMaximum(1.1);
   Graph_Graph286->SetDirectory(0);
   Graph_Graph286->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph286->SetLineColor(ci);
   Graph_Graph286->GetXaxis()->SetLabelFont(42);
   Graph_Graph286->GetXaxis()->SetTitleOffset(1);
   Graph_Graph286->GetXaxis()->SetTitleFont(42);
   Graph_Graph286->GetYaxis()->SetLabelFont(42);
   Graph_Graph286->GetYaxis()->SetTitleFont(42);
   Graph_Graph286->GetZaxis()->SetLabelFont(42);
   Graph_Graph286->GetZaxis()->SetTitleOffset(1);
   Graph_Graph286->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph286);
   
   TLatex *   tex = new TLatex(0,0.1,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(287);
      tex = new TLatex(4.613962e-11,0.1,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(288);
      tex = new TLatex(4.063084e-10,0.1000046,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(289);
      tex = new TLatex(2.676231e-09,0.1000048,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(290);
      tex = new TLatex(1.854856e-08,0.100027,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(291);
      tex = new TLatex(1.199509e-07,0.1001239,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(292);
      tex = new TLatex(7.788356e-07,0.1006578,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(293);
      tex = new TLatex(5.272594e-06,0.1029768,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(294);
      tex = new TLatex(3.605209e-05,0.1126142,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(295);
      tex = new TLatex(0.0002555695,0.1489581,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(296);
      tex = new TLatex(0.002042908,0.2656215,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(297);
      tex = new TLatex(0.01538367,0.5008371,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(298);
      tex = new TLatex(0.1799042,0.8038009,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(299);
      tex = new TLatex(0.472417,0.9227441,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(300);
      tex = new TLatex(1,1.04,"-1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(301);
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
   ROC_jets_nJet_18->Modified();
   ROC_jets_nJet_18->cd();
   ROC_jets_nJet_18->SetSelected(ROC_jets_nJet_18);
}
