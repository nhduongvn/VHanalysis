#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_17()
{
//=========Macro generated from canvas: ROC_H_pt_17/ROC_H_pt_17
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_17 = new TCanvas("ROC_H_pt_17", "ROC_H_pt_17",0,0,600,600);
   ROC_H_pt_17->SetHighLightColor(2);
   ROC_H_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_17->SetFillColor(0);
   ROC_H_pt_17->SetBorderMode(0);
   ROC_H_pt_17->SetBorderSize(2);
   ROC_H_pt_17->SetGridx();
   ROC_H_pt_17->SetGridy();
   ROC_H_pt_17->SetLeftMargin(0.15709);
   ROC_H_pt_17->SetRightMargin(0.1234783);
   ROC_H_pt_17->SetBottomMargin(0.12);
   ROC_H_pt_17->SetFrameBorderMode(0);
   ROC_H_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx208[41] = {
   0,
   2.671119e-07,
   8.061978e-07,
   1.22143e-06,
   1.867861e-06,
   2.523235e-06,
   3.48307e-06,
   4.493214e-06,
   5.930203e-06,
   7.449911e-06,
   9.813556e-06,
   1.300434e-05,
   1.748219e-05,
   2.329254e-05,
   3.026221e-05,
   4.022244e-05,
   5.294994e-05,
   6.958014e-05,
   9.323749e-05,
   0.0001248905,
   0.0001683106,
   0.0002286772,
   0.0003132395,
   0.0004288075,
   0.0005870913,
   0.0008220237,
   0.001157258,
   0.00168431,
   0.002480695,
   0.003669623,
   0.005572808,
   0.008672669,
   0.01365927,
   0.02233266,
   0.03851854,
   0.07018541,
   0.1359265,
   0.2883368,
   0.5780878,
   0.8334631,
   1};
   Double_t Graph_fy208[41] = {
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
   0.0002641446,
   0.0002641446,
   0.0002641446,
   0.0002641446,
   0.0004079863,
   0.0006519189,
   0.0007825992,
   0.0007825992,
   0.001531335,
   0.001765445,
   0.00228259,
   0.003092702,
   0.003876197,
   0.006436018,
   0.01214198,
   0.02391789,
   0.04591088,
   0.08367422,
   0.1467726,
   0.2682292,
   0.4601343,
   0.7041859,
   0.900356,
   1};
   TGraph *graph = new TGraph(41,Graph_fx208,Graph_fy208);
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
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","Tagging Only",100,0,1.1);
   Graph_Graph208->SetMinimum(0);
   Graph_Graph208->SetMaximum(1.1);
   Graph_Graph208->SetDirectory(0);
   Graph_Graph208->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph208->SetLineColor(ci);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
   TLatex *   tex = new TLatex(0.1908925,0.511277,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(209);
      tex = new TLatex(0.449484,0.7558587,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(210);
      tex = new TLatex(0.7400285,0.9373271,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(211);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx212[41] = {
   0,
   3.711606e-07,
   1.050862e-06,
   1.428108e-06,
   1.789678e-06,
   2.771656e-06,
   3.867261e-06,
   4.936394e-06,
   7.548419e-06,
   9.376182e-06,
   1.216937e-05,
   1.675449e-05,
   2.228444e-05,
   2.84063e-05,
   3.929942e-05,
   5.231267e-05,
   6.786415e-05,
   8.453536e-05,
   0.0001123479,
   0.0001522737,
   0.0002064931,
   0.0002870938,
   0.0003891473,
   0.0005233417,
   0.0007149843,
   0.001013235,
   0.00140567,
   0.002032202,
   0.002955512,
   0.00438615,
   0.006801864,
   0.01085576,
   0.01739473,
   0.02914768,
   0.0519524,
   0.09630364,
   0.1908925,
   0.449484,
   0.7400285,
   0.9143731,
   1};
   Double_t Graph_fy212[41] = {
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
   0.002550411,
   0.004700909,
   0.006630393,
   0.007089039,
   0.01363384,
   0.03128811,
   0.06531387,
   0.1211446,
   0.2205958,
   0.411277,
   0.6558587,
   0.8973271,
   0.9864197,
   1};
   graph = new TGraph(41,Graph_fx212,Graph_fy212);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph212 = new TH1F("Graph_Graph212","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph212->SetMinimum(0);
   Graph_Graph212->SetMaximum(1.1);
   Graph_Graph212->SetDirectory(0);
   Graph_Graph212->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph212->SetLineColor(ci);
   Graph_Graph212->GetXaxis()->SetLabelFont(42);
   Graph_Graph212->GetXaxis()->SetTitleOffset(1);
   Graph_Graph212->GetXaxis()->SetTitleFont(42);
   Graph_Graph212->GetYaxis()->SetLabelFont(42);
   Graph_Graph212->GetYaxis()->SetTitleFont(42);
   Graph_Graph212->GetZaxis()->SetLabelFont(42);
   Graph_Graph212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph212->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph212);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx213[41] = {
   0,
   2.624766e-07,
   8.144977e-07,
   1.28586e-06,
   1.993896e-06,
   2.645667e-06,
   3.692663e-06,
   4.785028e-06,
   6.305035e-06,
   7.88711e-06,
   1.031596e-05,
   1.362696e-05,
   1.817358e-05,
   2.416833e-05,
   3.128975e-05,
   4.162142e-05,
   5.4917e-05,
   7.200016e-05,
   9.674306e-05,
   0.0001296588,
   0.0001744443,
   0.000236704,
   0.0003238463,
   0.0004424352,
   0.0006054579,
   0.0008481283,
   0.001190606,
   0.001729885,
   0.002545812,
   0.00375588,
   0.005690542,
   0.008834283,
   0.01388122,
   0.022672,
   0.0390107,
   0.07087627,
   0.1369582,
   0.2900232,
   0.5792606,
   0.8343787,
   1};
   Double_t Graph_fy213[41] = {
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
   0.0002587209,
   0.0002842561,
   0.0002842561,
   0.0002842561,
   0.0004251444,
   0.0006640682,
   0.0007920653,
   0.0007920653,
   0.001525427,
   0.00175473,
   0.002261257,
   0.003054735,
   0.004104793,
   0.006872042,
   0.01275775,
   0.02502609,
   0.04677733,
   0.08492393,
   0.1489217,
   0.272061,
   0.4638942,
   0.7057523,
   0.9015258,
   1};
   graph = new TGraph(41,Graph_fx213,Graph_fy213);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph213 = new TH1F("Graph_Graph213","Tagging Prioritized",100,0,1.1);
   Graph_Graph213->SetMinimum(0);
   Graph_Graph213->SetMaximum(1.1);
   Graph_Graph213->SetDirectory(0);
   Graph_Graph213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph213->SetLineColor(ci);
   Graph_Graph213->GetXaxis()->SetLabelFont(42);
   Graph_Graph213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph213->GetXaxis()->SetTitleFont(42);
   Graph_Graph213->GetYaxis()->SetLabelFont(42);
   Graph_Graph213->GetYaxis()->SetTitleFont(42);
   Graph_Graph213->GetZaxis()->SetLabelFont(42);
   Graph_Graph213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph213);
   
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
   ROC_H_pt_17->Modified();
   ROC_H_pt_17->cd();
   ROC_H_pt_17->SetSelected(ROC_H_pt_17);
}
