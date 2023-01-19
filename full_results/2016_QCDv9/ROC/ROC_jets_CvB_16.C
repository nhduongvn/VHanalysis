#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_16()
{
//=========Macro generated from canvas: ROC_jets_CvB_16/ROC_jets_CvB_16
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_16 = new TCanvas("ROC_jets_CvB_16", "ROC_jets_CvB_16",0,0,600,600);
   ROC_jets_CvB_16->SetHighLightColor(2);
   ROC_jets_CvB_16->Range(-0.2786267,-0.1600396,1.189441,1.173624);
   ROC_jets_CvB_16->SetFillColor(0);
   ROC_jets_CvB_16->SetBorderMode(0);
   ROC_jets_CvB_16->SetBorderSize(2);
   ROC_jets_CvB_16->SetGridx();
   ROC_jets_CvB_16->SetGridy();
   ROC_jets_CvB_16->SetLeftMargin(0.15709);
   ROC_jets_CvB_16->SetRightMargin(0.1234783);
   ROC_jets_CvB_16->SetBottomMargin(0.12);
   ROC_jets_CvB_16->SetFrameBorderMode(0);
   ROC_jets_CvB_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx13[20] = {
   0,
   0.05570508,
   0.07566816,
   0.0887046,
   0.1035828,
   0.1235479,
   0.1412847,
   0.1628289,
   0.1876602,
   0.2147495,
   0.2614224,
   0.3017477,
   0.3528793,
   0.4049294,
   0.4649093,
   0.5398049,
   0.6232529,
   0.7224917,
   0.8409945,
   0.9601588};
   Double_t Graph_fy13[20] = {
   0,
   0.0116072,
   0.014345,
   0.01649221,
   0.01869304,
   0.02129314,
   0.0244776,
   0.02843846,
   0.03350311,
   0.04031688,
   0.05060642,
   0.06524129,
   0.08605373,
   0.1163064,
   0.1603095,
   0.2313451,
   0.3478261,
   0.5454106,
   0.8397195,
   0.9907213};
   TGraph *graph = new TGraph(20,Graph_fx13,Graph_fy13);
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
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,0,1.056175);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(1.089793);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04800794, 1.008167);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CvB_16->Modified();
   ROC_jets_CvB_16->cd();
   ROC_jets_CvB_16->SetSelected(ROC_jets_CvB_16);
}
