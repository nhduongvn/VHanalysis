#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CSV_17()
{
//=========Macro generated from canvas: ROC_jets_CSV_17/ROC_jets_CSV_17
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CSV_17 = new TCanvas("ROC_jets_CSV_17", "ROC_jets_CSV_17",0,0,600,600);
   ROC_jets_CSV_17->SetHighLightColor(2);
   ROC_jets_CSV_17->Range(-0.278384,-0.1594674,1.188405,1.169428);
   ROC_jets_CSV_17->SetFillColor(0);
   ROC_jets_CSV_17->SetBorderMode(0);
   ROC_jets_CSV_17->SetBorderSize(2);
   ROC_jets_CSV_17->SetGridx();
   ROC_jets_CSV_17->SetGridy();
   ROC_jets_CSV_17->SetLeftMargin(0.15709);
   ROC_jets_CSV_17->SetRightMargin(0.1234783);
   ROC_jets_CSV_17->SetBottomMargin(0.12);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   ROC_jets_CSV_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx8[20] = {
   0,
   0.61221,
   0.713248,
   0.7643644,
   0.7985054,
   0.8240135,
   0.8444999,
   0.8613142,
   0.875464,
   0.8869326,
   0.8970933,
   0.9063167,
   0.9143604,
   0.9213774,
   0.9279334,
   0.9339197,
   0.9398336,
   0.9456087,
   0.9516448,
   0.9593222};
   Double_t Graph_fy8[20] = {
   0,
   0.8395668,
   0.9047184,
   0.9284061,
   0.9414169,
   0.94986,
   0.9559295,
   0.9606453,
   0.9644151,
   0.9674762,
   0.9700771,
   0.9723959,
   0.9744413,
   0.9762637,
   0.977957,
   0.9795802,
   0.9812406,
   0.9829114,
   0.9847189,
   0.9871794};
   TGraph *graph = new TGraph(20,Graph_fx8,Graph_fy8);
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
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,0,1.055254);
   Graph_Graph8->SetMinimum(0);
   Graph_Graph8->SetMaximum(1.085897);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04796611, 1.007288);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_CSV_17->Modified();
   ROC_jets_CSV_17->cd();
   ROC_jets_CSV_17->SetSelected(ROC_jets_CSV_17);
}
