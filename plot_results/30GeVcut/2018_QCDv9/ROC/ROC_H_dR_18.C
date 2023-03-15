#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_18()
{
//=========Macro generated from canvas: ROC_H_dR_18/ROC_H_dR_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_18 = new TCanvas("ROC_H_dR_18", "ROC_H_dR_18",0,0,600,600);
   ROC_H_dR_18->SetHighLightColor(2);
   ROC_H_dR_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_18->SetFillColor(0);
   ROC_H_dR_18->SetBorderMode(0);
   ROC_H_dR_18->SetBorderSize(2);
   ROC_H_dR_18->SetGridx();
   ROC_H_dR_18->SetGridy();
   ROC_H_dR_18->SetLeftMargin(0.15709);
   ROC_H_dR_18->SetRightMargin(0.1234783);
   ROC_H_dR_18->SetBottomMargin(0.12);
   ROC_H_dR_18->SetFrameBorderMode(0);
   ROC_H_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx29[30] = {
   0,
   0,
   1.101111e-05,
   0.04343435,
   0.09459853,
   0.1342666,
   0.1741425,
   0.216301,
   0.256797,
   0.3010941,
   0.3495248,
   0.4068074,
   0.4670095,
   0.5281884,
   0.6057216,
   0.6887443,
   0.77697,
   0.8366027,
   0.8792331,
   0.9124451,
   0.936094,
   0.9580362,
   0.9709905,
   0.9830882,
   0.9901472,
   0.9943785,
   0.9989923,
   0.9997504,
   0.9999794,
   1};
   Double_t Graph_fy29[30] = {
   0,
   0,
   0,
   0.01948686,
   0.0570801,
   0.1050816,
   0.17422,
   0.2530729,
   0.3295704,
   0.4061414,
   0.481381,
   0.551102,
   0.624811,
   0.6974229,
   0.7737851,
   0.8489655,
   0.9277711,
   0.9592001,
   0.9741553,
   0.9840483,
   0.9893805,
   0.9931398,
   0.9959538,
   0.9978333,
   0.9992248,
   0.9997772,
   0.9998934,
   0.9999437,
   0.9999912,
   1};
   TGraph *graph = new TGraph(30,Graph_fx29,Graph_fy29);
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
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","Tagging Only",100,0,1.1);
   Graph_Graph29->SetMinimum(0);
   Graph_Graph29->SetMaximum(1.1);
   Graph_Graph29->SetDirectory(0);
   Graph_Graph29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph29->SetLineColor(ci);
   Graph_Graph29->GetXaxis()->SetLabelFont(42);
   Graph_Graph29->GetXaxis()->SetTitleOffset(1);
   Graph_Graph29->GetXaxis()->SetTitleFont(42);
   Graph_Graph29->GetYaxis()->SetLabelFont(42);
   Graph_Graph29->GetYaxis()->SetTitleFont(42);
   Graph_Graph29->GetZaxis()->SetLabelFont(42);
   Graph_Graph29->GetZaxis()->SetTitleOffset(1);
   Graph_Graph29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph29);
   
   TLatex *   tex = new TLatex(0.1783864,0.2168476,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(30);
      tex = new TLatex(0.2319324,0.3268259,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(31);
      tex = new TLatex(0.2892638,0.4471461,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(32);
      tex = new TLatex(0.3394574,0.5658439,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(33);
      tex = new TLatex(0.4081742,0.6901011,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(34);
      tex = new TLatex(0.482095,0.7956132,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(35);
      tex = new TLatex(0.549598,0.8768338,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(36);
      tex = new TLatex(0.6095219,0.8865201,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(37);
      tex = new TLatex(0.6817808,0.9420842,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(38);
      tex = new TLatex(0.7694113,0.9789338,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(39);
      tex = new TLatex(0.8430076,1.000346,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(40);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx41[30] = {
   0,
   0,
   2.236436e-07,
   0.04944407,
   0.1252483,
   0.1783864,
   0.2319324,
   0.2892638,
   0.3394574,
   0.4081742,
   0.482095,
   0.549598,
   0.6095219,
   0.6817808,
   0.7694113,
   0.8430076,
   0.8959952,
   0.9374765,
   0.9625086,
   0.9793775,
   0.9921089,
   0.9962641,
   0.9977869,
   0.9988861,
   0.9997093,
   0.9998412,
   0.9999479,
   0.9999999,
   1,
   1};
   Double_t Graph_fy41[30] = {
   0,
   0,
   0,
   0.01529429,
   0.05740852,
   0.1168476,
   0.2268259,
   0.3471461,
   0.4658439,
   0.5901011,
   0.6956132,
   0.7768338,
   0.8465201,
   0.9020842,
   0.9389338,
   0.9603459,
   0.9829012,
   0.9913424,
   0.996984,
   0.9985101,
   0.9993697,
   0.9995504,
   0.9995983,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx41,Graph_fy41);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph41->SetMinimum(0);
   Graph_Graph41->SetMaximum(1.1);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph41);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx42[30] = {
   0,
   0,
   1.083761e-05,
   0.04323688,
   0.09422834,
   0.1340488,
   0.1738757,
   0.2163904,
   0.2568811,
   0.3017524,
   0.3502256,
   0.4073597,
   0.4677963,
   0.5290857,
   0.6062755,
   0.6893276,
   0.777875,
   0.8373229,
   0.8795259,
   0.9129833,
   0.9365775,
   0.9583969,
   0.9712127,
   0.9832668,
   0.9902996,
   0.9945034,
   0.9990017,
   0.9997531,
   0.9999798,
   1};
   Double_t Graph_fy42[30] = {
   0,
   0,
   0,
   0.01959585,
   0.05723529,
   0.1052867,
   0.1746897,
   0.2535045,
   0.3310979,
   0.4082733,
   0.4840182,
   0.5535288,
   0.6277695,
   0.6997577,
   0.7749848,
   0.8498224,
   0.9272579,
   0.9590531,
   0.9740723,
   0.9840415,
   0.989545,
   0.9933846,
   0.9960296,
   0.9977975,
   0.9992304,
   0.9997696,
   0.9998829,
   0.9999451,
   0.9999914,
   1};
   graph = new TGraph(30,Graph_fx42,Graph_fy42);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Tagging Prioritized",100,0,1.1);
   Graph_Graph42->SetMinimum(0);
   Graph_Graph42->SetMaximum(1.1);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetTitleOffset(1);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetTitleOffset(1);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_18->Modified();
   ROC_H_dR_18->cd();
   ROC_H_dR_18->SetSelected(ROC_H_dR_18);
}
