#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_18()
{
//=========Macro generated from canvas: ROC_jets_CvL_18/ROC_jets_CvL_18
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_18 = new TCanvas("ROC_jets_CvL_18", "ROC_jets_CvL_18",0,0,600,600);
   ROC_jets_CvL_18->SetHighLightColor(2);
   ROC_jets_CvL_18->Range(-0.289217,-0.1590224,1.23465,1.166165);
   ROC_jets_CvL_18->SetFillColor(0);
   ROC_jets_CvL_18->SetBorderMode(0);
   ROC_jets_CvL_18->SetBorderSize(2);
   ROC_jets_CvL_18->SetGridx();
   ROC_jets_CvL_18->SetGridy();
   ROC_jets_CvL_18->SetLeftMargin(0.15709);
   ROC_jets_CvL_18->SetRightMargin(0.1234783);
   ROC_jets_CvL_18->SetBottomMargin(0.12);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   ROC_jets_CvL_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx12[20] = {
   0,
   0.2386192,
   0.5395696,
   0.6600479,
   0.722451,
   0.764563,
   0.7959797,
   0.8213517,
   0.8426587,
   0.8623639,
   0.8800522,
   0.8963042,
   0.9107382,
   0.9249737,
   0.9379262,
   0.9503446,
   0.9618894,
   0.9734199,
   0.9849327,
   0.9966532};
   Double_t Graph_fy12[20] = {
   0,
   0.3883001,
   0.7641733,
   0.8630536,
   0.8993982,
   0.9181849,
   0.9300867,
   0.9383051,
   0.9442908,
   0.9490548,
   0.953055,
   0.9565247,
   0.9595963,
   0.9624524,
   0.9652295,
   0.9680723,
   0.9711351,
   0.9745528,
   0.9787605,
   0.9844246};
   TGraph *graph = new TGraph(20,Graph_fx12,Graph_fy12);
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
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","",100,0,1.096319);
   Graph_Graph12->SetMinimum(0);
   Graph_Graph12->SetMaximum(1.082867);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04983266, 1.046486);
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
   ROC_jets_CvL_18->Modified();
   ROC_jets_CvL_18->cd();
   ROC_jets_CvL_18->SetSelected(ROC_jets_CvL_18);
}
