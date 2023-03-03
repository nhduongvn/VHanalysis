#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_16()
{
//=========Macro generated from canvas: ROC_jets_CvL_16/ROC_jets_CvL_16
//=========  (Thu Mar  2 11:32:56 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_16 = new TCanvas("ROC_jets_CvL_16", "ROC_jets_CvL_16",0,0,600,600);
   ROC_jets_CvL_16->SetHighLightColor(2);
   ROC_jets_CvL_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_CvL_16->SetFillColor(0);
   ROC_jets_CvL_16->SetBorderMode(0);
   ROC_jets_CvL_16->SetBorderSize(2);
   ROC_jets_CvL_16->SetGridx();
   ROC_jets_CvL_16->SetGridy();
   ROC_jets_CvL_16->SetLeftMargin(0.15709);
   ROC_jets_CvL_16->SetRightMargin(0.1234783);
   ROC_jets_CvL_16->SetBottomMargin(0.12);
   ROC_jets_CvL_16->SetFrameBorderMode(0);
   ROC_jets_CvL_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx368[21] = {
   0,
   0.0101506,
   0.01494834,
   0.01875555,
   0.02191687,
   0.02477182,
   0.02742363,
   0.02998103,
   0.03258606,
   0.03535724,
   0.03849837,
   0.04212691,
   0.046462,
   0.05199338,
   0.05970394,
   0.07116247,
   0.08981573,
   0.1271153,
   0.2259064,
   0.6009664,
   1};
   Double_t Graph_fy368[21] = {
   0,
   0.06836048,
   0.09259311,
   0.1119184,
   0.1285055,
   0.1437712,
   0.1575955,
   0.1704631,
   0.1832612,
   0.1966474,
   0.2107428,
   0.2255975,
   0.2417901,
   0.2595859,
   0.2812616,
   0.3082688,
   0.3461464,
   0.4071062,
   0.5278795,
   0.8181931,
   1};
   TGraph *graph = new TGraph(21,Graph_fx368,Graph_fy368);
   graph->SetName("Graph");
   graph->SetTitle("CvL");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph368 = new TH1F("Graph_Graph368","CvL",100,0,1.1);
   Graph_Graph368->SetMinimum(0);
   Graph_Graph368->SetMaximum(1.1);
   Graph_Graph368->SetDirectory(0);
   Graph_Graph368->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph368->SetLineColor(ci);
   Graph_Graph368->GetXaxis()->SetLabelFont(42);
   Graph_Graph368->GetXaxis()->SetTitleOffset(1);
   Graph_Graph368->GetXaxis()->SetTitleFont(42);
   Graph_Graph368->GetYaxis()->SetLabelFont(42);
   Graph_Graph368->GetYaxis()->SetTitleFont(42);
   Graph_Graph368->GetZaxis()->SetLabelFont(42);
   Graph_Graph368->GetZaxis()->SetTitleOffset(1);
   Graph_Graph368->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph368);
   
   TLatex *   tex = new TLatex(0.2259064,0.6278795,"0.075");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(369);
      tex = new TLatex(0.6009664,0.8581931,"0.025");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(370);
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
   ROC_jets_CvL_16->Modified();
   ROC_jets_CvL_16->cd();
   ROC_jets_CvL_16->SetSelected(ROC_jets_CvL_16);
}
