#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_16()
{
//=========Macro generated from canvas: ROC_jets_nJet_16/ROC_jets_nJet_16
//=========  (Thu Mar  2 11:32:56 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_16 = new TCanvas("ROC_jets_nJet_16", "ROC_jets_nJet_16",0,0,600,600);
   ROC_jets_nJet_16->SetHighLightColor(2);
   ROC_jets_nJet_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx254[15] = {
   0,
   4.764724e-11,
   4.258722e-10,
   2.826596e-09,
   1.953817e-08,
   1.286827e-07,
   8.396252e-07,
   5.582197e-06,
   3.789666e-05,
   0.000267778,
   0.00211438,
   0.01555118,
   0.1798446,
   0.4690478,
   1};
   Double_t Graph_fy254[15] = {
   0,
   0,
   0,
   5.010127e-07,
   2.406159e-05,
   0.0001518537,
   0.0005581912,
   0.003027287,
   0.01262613,
   0.04869492,
   0.1657849,
   0.4014935,
   0.7055822,
   0.8828458,
   1};
   TGraph *graph = new TGraph(15,Graph_fx254,Graph_fy254);
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
   
   TH1F *Graph_Graph254 = new TH1F("Graph_Graph254","nJet",100,0,1.1);
   Graph_Graph254->SetMinimum(0);
   Graph_Graph254->SetMaximum(1.1);
   Graph_Graph254->SetDirectory(0);
   Graph_Graph254->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph254->SetLineColor(ci);
   Graph_Graph254->GetXaxis()->SetLabelFont(42);
   Graph_Graph254->GetXaxis()->SetTitleOffset(1);
   Graph_Graph254->GetXaxis()->SetTitleFont(42);
   Graph_Graph254->GetYaxis()->SetLabelFont(42);
   Graph_Graph254->GetYaxis()->SetTitleFont(42);
   Graph_Graph254->GetZaxis()->SetLabelFont(42);
   Graph_Graph254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph254);
   
   TLatex *   tex = new TLatex(0,0.1,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(4.764724e-11,0.1,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(4.258722e-10,0.1,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(2.826596e-09,0.1000005,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(1.953817e-08,0.1000241,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(1.286827e-07,0.1001519,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(8.396252e-07,0.1005582,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(5.582197e-06,0.1030273,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
      tex = new TLatex(3.789666e-05,0.1126261,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(263);
      tex = new TLatex(0.000267778,0.1486949,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(264);
      tex = new TLatex(0.00211438,0.2657849,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(265);
      tex = new TLatex(0.01555118,0.5014935,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.1798446,0.8055822,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.4690478,0.9228458,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(1,1.04,"-1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
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
   ROC_jets_nJet_16->Modified();
   ROC_jets_nJet_16->cd();
   ROC_jets_nJet_16->SetSelected(ROC_jets_nJet_16);
}
