#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_18()
{
//=========Macro generated from canvas: ROC_H_pt_18/ROC_H_pt_18
//=========  (Thu Jan 19 10:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_18 = new TCanvas("ROC_H_pt_18", "ROC_H_pt_18",0,0,600,600);
   ROC_H_pt_18->SetHighLightColor(2);
   ROC_H_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_18->SetFillColor(0);
   ROC_H_pt_18->SetBorderMode(0);
   ROC_H_pt_18->SetBorderSize(2);
   ROC_H_pt_18->SetGridx();
   ROC_H_pt_18->SetGridy();
   ROC_H_pt_18->SetLeftMargin(0.15709);
   ROC_H_pt_18->SetRightMargin(0.1234783);
   ROC_H_pt_18->SetBottomMargin(0.12);
   ROC_H_pt_18->SetFrameBorderMode(0);
   ROC_H_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx34[40] = {
   0,
   0.1826928,
   0.5122883,
   0.7475847,
   0.8705812,
   0.9276673,
   0.9570906,
   0.9755486,
   0.9854149,
   0.9906631,
   0.9940755,
   0.9960948,
   0.9974989,
   0.9979723,
   0.9986889,
   0.9989673,
   0.9990974,
   0.9993187,
   0.9995158,
   0.9998491,
   0.9998491,
   0.9998697,
   0.9998963,
   0.9999228,
   0.9999444,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   0.999979,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy34[40] = {
   0,
   0.3187367,
   0.7438445,
   0.9083001,
   0.9604316,
   0.9808514,
   0.9900478,
   0.9943998,
   0.9966627,
   0.9979266,
   0.9986869,
   0.9991458,
   0.9994321,
   0.999615,
   0.9997377,
   0.9998158,
   0.9998695,
   0.9999056,
   0.9999316,
   0.99995,
   0.9999636,
   0.9999729,
   0.9999799,
   0.999985,
   0.9999886,
   0.9999914,
   0.9999935,
   0.9999951,
   0.9999963,
   0.9999972,
   0.9999979,
   0.9999985,
   0.9999988,
   0.9999991,
   0.9999994,
   0.9999995,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   TGraph *graph = new TGraph(40,Graph_fx34,Graph_fy34);
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
   
   TH1F *Graph_Graph34 = new TH1F("Graph_Graph34","Tagging Only",100,0,1.1);
   Graph_Graph34->SetMinimum(0);
   Graph_Graph34->SetMaximum(1.1);
   Graph_Graph34->SetDirectory(0);
   Graph_Graph34->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph34->SetLineColor(ci);
   Graph_Graph34->GetXaxis()->SetLabelFont(42);
   Graph_Graph34->GetXaxis()->SetTitleOffset(1);
   Graph_Graph34->GetXaxis()->SetTitleFont(42);
   Graph_Graph34->GetYaxis()->SetLabelFont(42);
   Graph_Graph34->GetYaxis()->SetTitleFont(42);
   Graph_Graph34->GetZaxis()->SetLabelFont(42);
   Graph_Graph34->GetZaxis()->SetTitleOffset(1);
   Graph_Graph34->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph34);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx35[40] = {
   0,
   0.04806557,
   0.3421244,
   0.6528993,
   0.8382274,
   0.9113305,
   0.9445399,
   0.9710381,
   0.9867793,
   0.9919829,
   0.9939754,
   0.9979579,
   0.9990642,
   0.999379,
   0.9993981,
   0.999566,
   0.9996554,
   0.9997133,
   0.9997652,
   0.9998781,
   0.9998781,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy35[40] = {
   0,
   0.1414446,
   0.5663492,
   0.8538133,
   0.9394608,
   0.9725547,
   0.9861962,
   0.992554,
   0.9956586,
   0.9973512,
   0.9983516,
   0.9989603,
   0.9993117,
   0.9995364,
   0.9996822,
   0.9997743,
   0.9998404,
   0.9998822,
   0.9999139,
   0.9999375,
   0.9999546,
   0.9999667,
   0.9999753,
   0.9999812,
   0.9999852,
   0.9999887,
   0.9999914,
   0.9999937,
   0.9999951,
   0.9999964,
   0.9999975,
   0.9999981,
   0.9999985,
   0.9999989,
   0.9999991,
   0.9999994,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999};
   graph = new TGraph(40,Graph_fx35,Graph_fy35);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph35 = new TH1F("Graph_Graph35","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph35->SetMinimum(0);
   Graph_Graph35->SetMaximum(1.1);
   Graph_Graph35->SetDirectory(0);
   Graph_Graph35->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph35->SetLineColor(ci);
   Graph_Graph35->GetXaxis()->SetLabelFont(42);
   Graph_Graph35->GetXaxis()->SetTitleOffset(1);
   Graph_Graph35->GetXaxis()->SetTitleFont(42);
   Graph_Graph35->GetYaxis()->SetLabelFont(42);
   Graph_Graph35->GetYaxis()->SetTitleFont(42);
   Graph_Graph35->GetZaxis()->SetLabelFont(42);
   Graph_Graph35->GetZaxis()->SetTitleOffset(1);
   Graph_Graph35->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph35);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx36[40] = {
   0,
   0.1793274,
   0.5109186,
   0.7440754,
   0.8666625,
   0.923699,
   0.9545026,
   0.9740053,
   0.9841547,
   0.9895822,
   0.9929523,
   0.9954198,
   0.9969722,
   0.9975803,
   0.9984349,
   0.9987636,
   0.9989477,
   0.9991607,
   0.9993529,
   0.9996456,
   0.9996709,
   0.9997143,
   0.9997376,
   0.9997794,
   0.9997984,
   0.9999567,
   0.9999567,
   0.9999815,
   0.9999815,
   0.9999815,
   0.9999815,
   0.9999815,
   0.9999815,
   0.9999815,
   0.9999815,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy36[40] = {
   0,
   0.3183525,
   0.7420512,
   0.9071866,
   0.9600404,
   0.9806029,
   0.9898721,
   0.9942853,
   0.9965828,
   0.9978729,
   0.9986499,
   0.9991191,
   0.9994125,
   0.9996011,
   0.9997277,
   0.9998082,
   0.9998641,
   0.9999016,
   0.9999285,
   0.9999479,
   0.9999619,
   0.9999716,
   0.999979,
   0.9999843,
   0.999988,
   0.9999909,
   0.9999932,
   0.9999948,
   0.9999961,
   0.999997,
   0.9999977,
   0.9999983,
   0.9999987,
   0.999999,
   0.9999993,
   0.9999995,
   0.9999996,
   0.9999998,
   0.9999999,
   0.9999999};
   graph = new TGraph(40,Graph_fx36,Graph_fy36);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph36 = new TH1F("Graph_Graph36","Tagging Prioritized",100,0,1.1);
   Graph_Graph36->SetMinimum(0);
   Graph_Graph36->SetMaximum(1.1);
   Graph_Graph36->SetDirectory(0);
   Graph_Graph36->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph36->SetLineColor(ci);
   Graph_Graph36->GetXaxis()->SetLabelFont(42);
   Graph_Graph36->GetXaxis()->SetTitleOffset(1);
   Graph_Graph36->GetXaxis()->SetTitleFont(42);
   Graph_Graph36->GetYaxis()->SetLabelFont(42);
   Graph_Graph36->GetYaxis()->SetTitleFont(42);
   Graph_Graph36->GetZaxis()->SetLabelFont(42);
   Graph_Graph36->GetZaxis()->SetTitleOffset(1);
   Graph_Graph36->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph36);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_pt_18->Modified();
   ROC_H_pt_18->cd();
   ROC_H_pt_18->SetSelected(ROC_H_pt_18);
}
