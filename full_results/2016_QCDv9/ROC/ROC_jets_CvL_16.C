#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_CvL_16()
{
//=========Macro generated from canvas: ROC_jets_CvL_16/ROC_jets_CvL_16
//=========  (Thu Jan 19 11:07:05 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_CvL_16 = new TCanvas("ROC_jets_CvL_16", "ROC_jets_CvL_16",0,0,600,600);
   ROC_jets_CvL_16->SetHighLightColor(2);
   ROC_jets_CvL_16->Range(-0.2895962,-0.160105,1.236269,1.174103);
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
   
   Double_t Graph_fx10[20] = {
   0,
   0.2100595,
   0.5359566,
   0.6774235,
   0.7486392,
   0.795063,
   0.8280726,
   0.8536486,
   0.8742998,
   0.8926609,
   0.9086157,
   0.9226688,
   0.9348113,
   0.9463257,
   0.9566638,
   0.9659973,
   0.9745634,
   0.9825893,
   0.9903817,
   0.9979601};
   Double_t Graph_fy10[20] = {
   0,
   0.3414398,
   0.7581588,
   0.8718359,
   0.9116754,
   0.9311771,
   0.943016,
   0.9508673,
   0.9564316,
   0.9607647,
   0.9643546,
   0.9674241,
   0.9701127,
   0.9726186,
   0.9750596,
   0.9775529,
   0.9802244,
   0.9831729,
   0.9867094,
   0.9911262};
   TGraph *graph = new TGraph(20,Graph_fx10,Graph_fy10);
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
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,0,1.097756);
   Graph_Graph10->SetMinimum(0);
   Graph_Graph10->SetMaximum(1.090239);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04989801, 1.047858);
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
   ROC_jets_CvL_16->Modified();
   ROC_jets_CvL_16->cd();
   ROC_jets_CvL_16->SetSelected(ROC_jets_CvL_16);
}
