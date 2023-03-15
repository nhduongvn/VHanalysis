#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_nJet_18()
{
//=========Macro generated from canvas: ROC_jets_nJet_18/ROC_jets_nJet_18
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_nJet_18 = new TCanvas("ROC_jets_nJet_18", "ROC_jets_nJet_18",0,0,600,600);
   ROC_jets_nJet_18->SetHighLightColor(2);
   ROC_jets_nJet_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx484[14] = {
   0,
   0.03457277,
   0.1259431,
   0.3246741,
   0.6128773,
   0.8483555,
   0.9497821,
   0.9851131,
   0.9957812,
   0.998918,
   0.9997475,
   0.9999406,
   0.9999864,
   0.9999997};
   Double_t Graph_fy484[14] = {
   0,
   0.1577912,
   0.5466562,
   0.9131274,
   0.9855875,
   0.9977821,
   0.9996415,
   0.9999393,
   0.9999893,
   0.9999981,
   0.9999997,
   0.9999999,
   1,
   1};
   TGraph *graph = new TGraph(14,Graph_fx484,Graph_fy484);
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
   
   TH1F *Graph_Graph484 = new TH1F("Graph_Graph484","",100,0,1.1);
   Graph_Graph484->SetMinimum(0);
   Graph_Graph484->SetMaximum(1.1);
   Graph_Graph484->SetDirectory(0);
   Graph_Graph484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph484->SetLineColor(ci);
   Graph_Graph484->GetXaxis()->SetLabelFont(42);
   Graph_Graph484->GetXaxis()->SetTitleOffset(1);
   Graph_Graph484->GetXaxis()->SetTitleFont(42);
   Graph_Graph484->GetYaxis()->SetLabelFont(42);
   Graph_Graph484->GetYaxis()->SetTitleFont(42);
   Graph_Graph484->GetZaxis()->SetLabelFont(42);
   Graph_Graph484->GetZaxis()->SetTitleOffset(1);
   Graph_Graph484->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph484);
   
   TLatex *   tex = new TLatex(0,0.06,"0.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(485);
      tex = new TLatex(0.03457277,0.2177912,"1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(486);
      tex = new TLatex(0.1259431,0.6066562,"2.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(487);
      tex = new TLatex(0.3246741,0.9731274,"3.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(488);
      tex = new TLatex(0.6128773,1.045588,"4.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(489);
      tex = new TLatex(0.8483555,1.057782,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(490);
      tex = new TLatex(0.9497821,1.059641,"6.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(491);
      tex = new TLatex(0.9851131,1.059939,"7.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(492);
      tex = new TLatex(0.9957812,1.059989,"8.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(493);
      tex = new TLatex(0.998918,1.059998,"9.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(494);
      tex = new TLatex(0.9997475,1.06,"10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(495);
      tex = new TLatex(0.9999406,1.06,"11.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(496);
      tex = new TLatex(0.9999864,1.06,"12.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(497);
      tex = new TLatex(0.9999997,1.06,"13.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(498);
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
