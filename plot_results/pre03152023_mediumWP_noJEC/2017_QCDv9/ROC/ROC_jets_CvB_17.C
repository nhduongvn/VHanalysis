#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_17()
{
//=========Macro generated from canvas: ROC_jets_CvB_17/ROC_jets_CvB_17
//=========  (Thu Mar  9 13:38:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_17 = new TCanvas("ROC_jets_CvB_17", "ROC_jets_CvB_17",0,0,600,600);
   ROC_jets_CvB_17->SetHighLightColor(2);
   ROC_jets_CvB_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CvB_17->SetFillColor(0);
   ROC_jets_CvB_17->SetBorderMode(0);
   ROC_jets_CvB_17->SetBorderSize(2);
   ROC_jets_CvB_17->SetGridx();
   ROC_jets_CvB_17->SetGridy();
   ROC_jets_CvB_17->SetLeftMargin(0.15709);
   ROC_jets_CvB_17->SetRightMargin(0.1234783);
   ROC_jets_CvB_17->SetBottomMargin(0.12);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   ROC_jets_CvB_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx382[21] = {
   0,
   0.01961084,
   0.2578121,
   0.5908373,
   0.750641,
   0.8331062,
   0.8812905,
   0.910914,
   0.9308791,
   0.9443392,
   0.9539281,
   0.9609674,
   0.9660639,
   0.9699598,
   0.9731358,
   0.9758319,
   0.978188,
   0.9803199,
   0.9823889,
   0.9850928,
   1};
   Double_t Graph_fy382[21] = {
   0,
   0.05107833,
   0.2832088,
   0.4931324,
   0.6178247,
   0.6980602,
   0.7544769,
   0.7952693,
   0.8266218,
   0.8497449,
   0.8687746,
   0.8845644,
   0.8976771,
   0.9083447,
   0.9177643,
   0.9262205,
   0.934124,
   0.9412555,
   0.9480945,
   0.956676,
   1};
   TGraph *graph = new TGraph(21,Graph_fx382,Graph_fy382);
   graph->SetName("Graph");
   graph->SetTitle("CvB");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph382 = new TH1F("Graph_Graph382","CvB",100,0,1.1);
   Graph_Graph382->SetMinimum(0);
   Graph_Graph382->SetMaximum(1.1);
   Graph_Graph382->SetDirectory(0);
   Graph_Graph382->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph382->SetLineColor(ci);
   Graph_Graph382->GetXaxis()->SetLabelFont(42);
   Graph_Graph382->GetXaxis()->SetTitleOffset(1);
   Graph_Graph382->GetXaxis()->SetTitleFont(42);
   Graph_Graph382->GetYaxis()->SetLabelFont(42);
   Graph_Graph382->GetYaxis()->SetTitleFont(42);
   Graph_Graph382->GetZaxis()->SetLabelFont(42);
   Graph_Graph382->GetZaxis()->SetTitleOffset(1);
   Graph_Graph382->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph382);
   
   TLatex *   tex = new TLatex(0.2578121,0.3832088,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(383);
      tex = new TLatex(0.5908373,0.5931324,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(384);
      tex = new TLatex(0.750641,0.7178247,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(385);
      tex = new TLatex(0.8331062,0.7980602,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(386);
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
   ROC_jets_CvB_17->Modified();
   ROC_jets_CvB_17->cd();
   ROC_jets_CvB_17->SetSelected(ROC_jets_CvB_17);
}
