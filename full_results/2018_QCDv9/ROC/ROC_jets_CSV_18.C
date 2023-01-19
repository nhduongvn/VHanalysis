#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_18()
{
//=========Macro generated from canvas: ROC_jets_CSV_18/ROC_jets_CSV_18
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_18 = new TCanvas("ROC_jets_CSV_18", "ROC_jets_CSV_18",0,0,600,600);
   ROC_jets_CSV_18->SetHighLightColor(2);
   ROC_jets_CSV_18->Range(-0.2788013,-0.1594625,1.190186,1.169392);
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
   
   Double_t Graph_fx9[20] = {
   0,
   0.6351902,
   0.7315816,
   0.7793072,
   0.8107723,
   0.834272,
   0.8531792,
   0.868679,
   0.8818181,
   0.8923922,
   0.9018864,
   0.9104951,
   0.9181205,
   0.9247022,
   0.9307313,
   0.936399,
   0.9421891,
   0.9476099,
   0.9531983,
   0.9607603};
   Double_t Graph_fy9[20] = {
   0,
   0.8493498,
   0.9101418,
   0.9321474,
   0.9442135,
   0.9520361,
   0.9576709,
   0.9620407,
   0.965543,
   0.9683842,
   0.9708062,
   0.9729835,
   0.9749059,
   0.9766193,
   0.9782336,
   0.9797815,
   0.9813748,
   0.9829799,
   0.9847344,
   0.9871491};
   TGraph *graph = new TGraph(20,Graph_fx9,Graph_fy9);
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
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0,1.056836);
   Graph_Graph9->SetMinimum(0);
   Graph_Graph9->SetMaximum(1.085864);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04803801, 1.008798);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CSV_18->Modified();
   ROC_jets_CSV_18->cd();
   ROC_jets_CSV_18->SetSelected(ROC_jets_CSV_18);
}
