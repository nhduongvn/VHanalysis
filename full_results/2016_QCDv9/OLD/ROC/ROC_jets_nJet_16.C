#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_16()
{
//=========Macro generated from canvas: ROC_jets_nJet_16/ROC_jets_nJet_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_16 = new TCanvas("ROC_jets_nJet_16", "ROC_jets_nJet_16",0,0,600,600);
   ROC_jets_nJet_16->SetHighLightColor(2);
   ROC_jets_nJet_16->Range(-0.2901873,-0.1615385,1.238793,1.184615);
   ROC_jets_nJet_16->SetFillColor(0);
   ROC_jets_nJet_16->SetBorderMode(0);
   ROC_jets_nJet_16->SetBorderSize(2);
   ROC_jets_nJet_16->SetGridx();
   ROC_jets_nJet_16->SetGridy();
   ROC_jets_nJet_16->SetLeftMargin(0.15709);
   ROC_jets_nJet_16->SetRightMargin(0.1234783);
   ROC_jets_nJet_16->SetBottomMargin(0.12);
   ROC_jets_nJet_16->SetFrameBorderMode(0);
   ROC_jets_nJet_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx454[14] = {
   0,
   0.03589835,
   0.1279187,
   0.3272372,
   0.613787,
   0.8434437,
   0.9449904,
   0.9824887,
   0.9948095,
   0.9985871,
   0.9996165,
   0.9999255,
   0.9999865,
   0.9999969};
   Double_t Graph_fy454[14] = {
   0,
   0.1569829,
   0.5449593,
   0.9142997,
   0.9857523,
   0.997784,
   0.9996357,
   0.9999379,
   0.9999892,
   0.9999981,
   0.9999997,
   0.9999999,
   1,
   1};
   TGraph *graph = new TGraph(14,Graph_fx454,Graph_fy454);
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
   
   TH1F *Graph_Graph454 = new TH1F("Graph_Graph454","",100,0,1.099997);
   Graph_Graph454->SetMinimum(0);
   Graph_Graph454->SetMaximum(1.1);
   Graph_Graph454->SetDirectory(0);
   Graph_Graph454->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph454->SetLineColor(ci);
   Graph_Graph454->GetXaxis()->SetLabelFont(42);
   Graph_Graph454->GetXaxis()->SetTitleOffset(1);
   Graph_Graph454->GetXaxis()->SetTitleFont(42);
   Graph_Graph454->GetYaxis()->SetLabelFont(42);
   Graph_Graph454->GetYaxis()->SetTitleFont(42);
   Graph_Graph454->GetZaxis()->SetLabelFont(42);
   Graph_Graph454->GetZaxis()->SetTitleOffset(1);
   Graph_Graph454->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph454);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(455);
      tex = new TLatex(0.03589835,0.2169829,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(456);
      tex = new TLatex(0.1279187,0.6049593,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(457);
      tex = new TLatex(0.3272372,0.9742997,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(458);
      tex = new TLatex(0.613787,1.045752,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(459);
      tex = new TLatex(0.8434437,1.057784,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(460);
      tex = new TLatex(0.9449904,1.059636,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(461);
      tex = new TLatex(0.9824887,1.059938,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(462);
      tex = new TLatex(0.9948095,1.059989,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(463);
      tex = new TLatex(0.9985871,1.059998,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(464);
      tex = new TLatex(0.9996165,1.06,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(465);
      tex = new TLatex(0.9999255,1.06,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(466);
      tex = new TLatex(0.9999865,1.06,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(467);
      tex = new TLatex(0.9999969,1.06,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(468);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999985, 1.049997);
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
   ROC_jets_nJet_16->Modified();
   ROC_jets_nJet_16->cd();
   ROC_jets_nJet_16->SetSelected(ROC_jets_nJet_16);
}
