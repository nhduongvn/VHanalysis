#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvB_16()
{
//=========Macro generated from canvas: ROC_jets_CvB_16/ROC_jets_CvB_16
//=========  (Fri Mar 10 12:27:37 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvB_16 = new TCanvas("ROC_jets_CvB_16", "ROC_jets_CvB_16",0,0,600,600);
   ROC_jets_CvB_16->SetHighLightColor(2);
   ROC_jets_CvB_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx377[21] = {
   0,
   0.01753219,
   0.2293498,
   0.5555087,
   0.7294544,
   0.8222965,
   0.8764934,
   0.9092417,
   0.9310221,
   0.9456288,
   0.9560891,
   0.9635468,
   0.9687561,
   0.9727012,
   0.9758862,
   0.9785414,
   0.9807961,
   0.982788,
   0.9847619,
   0.9873364,
   1};
   Double_t Graph_fy377[21] = {
   0,
   0.04280051,
   0.2648313,
   0.4777118,
   0.6107738,
   0.6981514,
   0.758664,
   0.8009263,
   0.8334998,
   0.8573628,
   0.8770824,
   0.8933356,
   0.9064376,
   0.9170077,
   0.9261016,
   0.9341535,
   0.9415048,
   0.9482734,
   0.9546549,
   0.9627905,
   1};
   TGraph *graph = new TGraph(21,Graph_fx377,Graph_fy377);
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
   
   TH1F *Graph_Graph377 = new TH1F("Graph_Graph377","CvB",100,0,1.1);
   Graph_Graph377->SetMinimum(0);
   Graph_Graph377->SetMaximum(1.1);
   Graph_Graph377->SetDirectory(0);
   Graph_Graph377->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph377->SetLineColor(ci);
   Graph_Graph377->GetXaxis()->SetLabelFont(42);
   Graph_Graph377->GetXaxis()->SetTitleOffset(1);
   Graph_Graph377->GetXaxis()->SetTitleFont(42);
   Graph_Graph377->GetYaxis()->SetLabelFont(42);
   Graph_Graph377->GetYaxis()->SetTitleFont(42);
   Graph_Graph377->GetZaxis()->SetLabelFont(42);
   Graph_Graph377->GetZaxis()->SetTitleOffset(1);
   Graph_Graph377->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph377);
   
   TLatex *   tex = new TLatex(0.2293498,0.3648313,"0.875");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(378);
      tex = new TLatex(0.5555087,0.5777118,"0.825");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(379);
      tex = new TLatex(0.7294544,0.7107738,"0.775");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(380);
      tex = new TLatex(0.8222965,0.7981514,"0.725");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(381);
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
   ROC_jets_CvB_16->Modified();
   ROC_jets_CvB_16->cd();
   ROC_jets_CvB_16->SetSelected(ROC_jets_CvB_16);
}
