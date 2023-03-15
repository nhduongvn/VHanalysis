#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_17()
{
//=========Macro generated from canvas: ROC_Z_pt_17/ROC_Z_pt_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_17 = new TCanvas("ROC_Z_pt_17", "ROC_Z_pt_17",0,0,600,600);
   ROC_Z_pt_17->SetHighLightColor(2);
   ROC_Z_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_17->SetFillColor(0);
   ROC_Z_pt_17->SetBorderMode(0);
   ROC_Z_pt_17->SetBorderSize(2);
   ROC_Z_pt_17->SetGridx();
   ROC_Z_pt_17->SetGridy();
   ROC_Z_pt_17->SetLeftMargin(0.15709);
   ROC_Z_pt_17->SetRightMargin(0.1234783);
   ROC_Z_pt_17->SetBottomMargin(0.12);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx214[41] = {
   0,
   5.445134e-08,
   1.178554e-07,
   2.197448e-07,
   3.30202e-07,
   4.4145e-07,
   6.645251e-07,
   9.195354e-07,
   1.240973e-06,
   1.667063e-06,
   2.241569e-06,
   2.956006e-06,
   3.998526e-06,
   5.403592e-06,
   7.132626e-06,
   9.260963e-06,
   1.238319e-05,
   1.65203e-05,
   2.207635e-05,
   2.942474e-05,
   3.987725e-05,
   5.394319e-05,
   7.402733e-05,
   0.0001014886,
   0.0001405949,
   0.0001987931,
   0.0003163146,
   0.000445528,
   0.0006359513,
   0.000935687,
   0.001430845,
   0.002222783,
   0.003559526,
   0.006554307,
   0.01141985,
   0.0219014,
   0.04803355,
   0.1163541,
   0.3343558,
   0.7737597,
   1};
   Double_t Graph_fy214[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.228294e-05,
   0.0001829799,
   0.0001829799,
   0.0001829799,
   0.0001829799,
   0.0001829799,
   0.0001936887,
   0.0001936887,
   0.0001936887,
   0.0002802666,
   0.0004448159,
   0.0005364274,
   0.0008371073,
   0.001191775,
   0.001621977,
   0.002204866,
   0.003318703,
   0.005715889,
   0.01085348,
   0.0231932,
   0.04276087,
   0.07990278,
   0.1547059,
   0.2882306,
   0.5269919,
   0.8436986,
   1};
   TGraph *graph = new TGraph(41,Graph_fx214,Graph_fy214);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Only");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph214 = new TH1F("Graph_Graph214","Tagging Only",100,0,1.1);
   Graph_Graph214->SetMinimum(0);
   Graph_Graph214->SetMaximum(1.1);
   Graph_Graph214->SetDirectory(0);
   Graph_Graph214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph214->SetLineColor(ci);
   Graph_Graph214->GetXaxis()->SetLabelFont(42);
   Graph_Graph214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph214->GetXaxis()->SetTitleFont(42);
   Graph_Graph214->GetYaxis()->SetLabelFont(42);
   Graph_Graph214->GetYaxis()->SetTitleFont(42);
   Graph_Graph214->GetZaxis()->SetLabelFont(42);
   Graph_Graph214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph214->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph214);
   
   TLatex *   tex = new TLatex(0.3398598,0.7410137,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(215);
      tex = new TLatex(0.8441615,0.9795548,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(216);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx217[41] = {
   0,
   8.752456e-08,
   1.455062e-07,
   3.302138e-07,
   3.862311e-07,
   5.464455e-07,
   7.785368e-07,
   1.18687e-06,
   1.490886e-06,
   1.868231e-06,
   2.368548e-06,
   3.13448e-06,
   4.175543e-06,
   5.815043e-06,
   7.606374e-06,
   9.872615e-06,
   1.262562e-05,
   1.640652e-05,
   2.151576e-05,
   2.76169e-05,
   3.776054e-05,
   5.054401e-05,
   6.99394e-05,
   9.530131e-05,
   0.0001294131,
   0.0001834987,
   0.0002501315,
   0.0003618405,
   0.0005321426,
   0.000793965,
   0.001245601,
   0.00200978,
   0.003294126,
   0.005524852,
   0.01016391,
   0.01997971,
   0.04318865,
   0.1120724,
   0.3398598,
   0.8441615,
   1};
   Double_t Graph_fy217[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0003895018,
   0.0007589277,
   0.001653212,
   0.002588552,
   0.003919072,
   0.0085986,
   0.02435865,
   0.04389149,
   0.09071263,
   0.1836633,
   0.3456377,
   0.6410137,
   0.9395548,
   1};
   graph = new TGraph(41,Graph_fx217,Graph_fy217);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph217->SetMinimum(0);
   Graph_Graph217->SetMaximum(1.1);
   Graph_Graph217->SetDirectory(0);
   Graph_Graph217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph217->SetLineColor(ci);
   Graph_Graph217->GetXaxis()->SetLabelFont(42);
   Graph_Graph217->GetXaxis()->SetTitleOffset(1);
   Graph_Graph217->GetXaxis()->SetTitleFont(42);
   Graph_Graph217->GetYaxis()->SetLabelFont(42);
   Graph_Graph217->GetYaxis()->SetTitleFont(42);
   Graph_Graph217->GetZaxis()->SetLabelFont(42);
   Graph_Graph217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph217->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph217);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx218[41] = {
   0,
   5.716771e-08,
   1.207868e-07,
   2.243966e-07,
   3.48241e-07,
   4.661584e-07,
   7.031022e-07,
   9.636719e-07,
   1.289259e-06,
   1.729437e-06,
   2.323505e-06,
   3.047911e-06,
   4.123557e-06,
   5.558818e-06,
   7.33458e-06,
   9.547943e-06,
   1.275724e-05,
   1.704489e-05,
   2.280788e-05,
   3.034097e-05,
   4.11068e-05,
   5.562485e-05,
   7.632166e-05,
   0.0001042704,
   0.0001442997,
   0.0002037393,
   0.0003226567,
   0.0004550068,
   0.0006501676,
   0.0009546514,
   0.001456562,
   0.002263688,
   0.003615036,
   0.006657578,
   0.01157724,
   0.02217733,
   0.04850641,
   0.1171736,
   0.3347047,
   0.7746116,
   1};
   Double_t Graph_fy218[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.026803e-05,
   0.0001784992,
   0.0001784992,
   0.0001784992,
   0.0001784992,
   0.0001784992,
   0.0001889458,
   0.0001889458,
   0.0001889458,
   0.0002734035,
   0.0004339234,
   0.0005232916,
   0.0008166086,
   0.001169768,
   0.001581215,
   0.002312497,
   0.003508848,
   0.005970245,
   0.01123372,
   0.02386468,
   0.04360821,
   0.08062825,
   0.155974,
   0.2893196,
   0.5291277,
   0.8451932,
   1};
   graph = new TGraph(41,Graph_fx218,Graph_fy218);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph218 = new TH1F("Graph_Graph218","Tagging Prioritized",100,0,1.1);
   Graph_Graph218->SetMinimum(0);
   Graph_Graph218->SetMaximum(1.1);
   Graph_Graph218->SetDirectory(0);
   Graph_Graph218->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph218->SetLineColor(ci);
   Graph_Graph218->GetXaxis()->SetLabelFont(42);
   Graph_Graph218->GetXaxis()->SetTitleOffset(1);
   Graph_Graph218->GetXaxis()->SetTitleFont(42);
   Graph_Graph218->GetYaxis()->SetLabelFont(42);
   Graph_Graph218->GetYaxis()->SetTitleFont(42);
   Graph_Graph218->GetZaxis()->SetLabelFont(42);
   Graph_Graph218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph218->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph218);
   
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
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph","Tagging Only","lpf");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_pt_17->Modified();
   ROC_Z_pt_17->cd();
   ROC_Z_pt_17->SetSelected(ROC_Z_pt_17);
}
