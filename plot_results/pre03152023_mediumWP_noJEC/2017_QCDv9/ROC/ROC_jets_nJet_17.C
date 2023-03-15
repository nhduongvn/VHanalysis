#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_17()
{
//=========Macro generated from canvas: ROC_jets_nJet_17/ROC_jets_nJet_17
//=========  (Thu Mar  9 13:38:57 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx270[15] = {
   0,
   4.312463e-11,
   4.066454e-10,
   2.673195e-09,
   1.784621e-08,
   1.21053e-07,
   7.799357e-07,
   5.202316e-06,
   3.551577e-05,
   0.0002554057,
   0.002043858,
   0.01547922,
   0.1803428,
   0.4720719,
   1};
   Double_t Graph_fy270[15] = {
   0,
   0,
   0,
   5.678759e-06,
   1.494183e-05,
   0.0001115943,
   0.0005601915,
   0.002827184,
   0.01244657,
   0.04887934,
   0.1674553,
   0.4033497,
   0.7072822,
   0.8831872,
   1};
   TGraph *graph = new TGraph(15,Graph_fx270,Graph_fy270);
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
   
   TH1F *Graph_Graph270 = new TH1F("Graph_Graph270","nJet",100,0,1.1);
   Graph_Graph270->SetMinimum(0);
   Graph_Graph270->SetMaximum(1.1);
   Graph_Graph270->SetDirectory(0);
   Graph_Graph270->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph270->SetLineColor(ci);
   Graph_Graph270->GetXaxis()->SetLabelFont(42);
   Graph_Graph270->GetXaxis()->SetTitleOffset(1);
   Graph_Graph270->GetXaxis()->SetTitleFont(42);
   Graph_Graph270->GetYaxis()->SetLabelFont(42);
   Graph_Graph270->GetYaxis()->SetTitleFont(42);
   Graph_Graph270->GetZaxis()->SetLabelFont(42);
   Graph_Graph270->GetZaxis()->SetTitleOffset(1);
   Graph_Graph270->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph270);
   
   TLatex *   tex = new TLatex(0,0.1,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(4.312463e-11,0.1,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(4.066454e-10,0.1,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
      tex = new TLatex(2.673195e-09,0.1000057,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(1.784621e-08,0.1000149,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
      tex = new TLatex(1.21053e-07,0.1001116,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(276);
      tex = new TLatex(7.799357e-07,0.1005602,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(5.202316e-06,0.1028272,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(3.551577e-05,0.1124466,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.0002554057,0.1488793,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.002043858,0.2674553,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
      tex = new TLatex(0.01547922,0.5033497,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(282);
      tex = new TLatex(0.1803428,0.8072822,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(283);
      tex = new TLatex(0.4720719,0.9231872,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(284);
      tex = new TLatex(1,1.04,"-1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
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
