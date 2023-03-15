#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_18/ROC_H_dR_Bj0_18
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_18 = new TCanvas("ROC_H_dR_Bj0_18", "ROC_H_dR_Bj0_18",0,0,600,600);
   ROC_H_dR_Bj0_18->SetHighLightColor(2);
   ROC_H_dR_Bj0_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj0_18->SetFillColor(0);
   ROC_H_dR_Bj0_18->SetBorderMode(0);
   ROC_H_dR_Bj0_18->SetBorderSize(2);
   ROC_H_dR_Bj0_18->SetGridx();
   ROC_H_dR_Bj0_18->SetGridy();
   ROC_H_dR_Bj0_18->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_18->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_18->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_18->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx58[30] = {
   0,
   0.03017901,
   0.1489882,
   0.2652564,
   0.3712151,
   0.4625764,
   0.5304572,
   0.5942615,
   0.6495456,
   0.6994158,
   0.744908,
   0.7833876,
   0.8161953,
   0.8495972,
   0.8757177,
   0.900426,
   0.9232074,
   0.9459033,
   0.9602181,
   0.9724168,
   0.9809281,
   0.9864711,
   0.9905238,
   0.9941095,
   0.9959913,
   0.9979294,
   0.9991551,
   0.999582,
   0.9998442,
   0.9999094};
   Double_t Graph_fy58[30] = {
   0,
   0.02664946,
   0.1627464,
   0.3340044,
   0.4902128,
   0.6016205,
   0.6868843,
   0.746808,
   0.7874133,
   0.8272224,
   0.8581123,
   0.882127,
   0.9040447,
   0.9250977,
   0.9427568,
   0.9604507,
   0.9731744,
   0.9825272,
   0.9885558,
   0.9920609,
   0.9946957,
   0.9961387,
   0.9973478,
   0.9983935,
   0.9985397,
   0.9996027,
   0.9997196,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx58,Graph_fy58);
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
   
   TH1F *Graph_Graph58 = new TH1F("Graph_Graph58","Tagging Only",100,0,1.0999);
   Graph_Graph58->SetMinimum(0);
   Graph_Graph58->SetMaximum(1.1);
   Graph_Graph58->SetDirectory(0);
   Graph_Graph58->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph58->SetLineColor(ci);
   Graph_Graph58->GetXaxis()->SetLabelFont(42);
   Graph_Graph58->GetXaxis()->SetTitleOffset(1);
   Graph_Graph58->GetXaxis()->SetTitleFont(42);
   Graph_Graph58->GetYaxis()->SetLabelFont(42);
   Graph_Graph58->GetYaxis()->SetTitleFont(42);
   Graph_Graph58->GetZaxis()->SetLabelFont(42);
   Graph_Graph58->GetZaxis()->SetTitleOffset(1);
   Graph_Graph58->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph58);
   
   TLatex *   tex = new TLatex(0.3381068,0.5454261,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(59);
      tex = new TLatex(0.5274172,0.8320818,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(60);
      tex = new TLatex(0.6903859,0.9321023,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(61);
      tex = new TLatex(0.7889348,0.9839413,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(62);
      tex = new TLatex(0.8479481,1.01043,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(63);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx64[30] = {
   0,
   0.09401913,
   0.3381068,
   0.5274172,
   0.6903859,
   0.7889348,
   0.8479481,
   0.8992914,
   0.9243524,
   0.9371172,
   0.9675669,
   0.9742634,
   0.9790794,
   0.9830955,
   0.986348,
   0.9905188,
   0.9930197,
   0.9964321,
   0.9969958,
   0.9984224,
   0.9985071,
   0.9996991,
   0.999937,
   0.9999429,
   0.9999745,
   0.999977,
   0.9999977,
   0.9999987,
   0.9999992,
   0.9999997};
   Double_t Graph_fy64[30] = {
   0,
   0.09526227,
   0.4454261,
   0.7320818,
   0.8921023,
   0.9439413,
   0.9704296,
   0.9815758,
   0.9887445,
   0.9917822,
   0.9944269,
   0.997246,
   0.9976833,
   0.997902,
   0.9980113,
   0.99823,
   0.99823,
   0.9990603,
   0.9990603,
   0.9990603,
   0.9990603,
   0.9998907,
   0.9998907,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx64,Graph_fy64);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph64 = new TH1F("Graph_Graph64","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph64->SetMinimum(0);
   Graph_Graph64->SetMaximum(1.1);
   Graph_Graph64->SetDirectory(0);
   Graph_Graph64->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph64->SetLineColor(ci);
   Graph_Graph64->GetXaxis()->SetLabelFont(42);
   Graph_Graph64->GetXaxis()->SetTitleOffset(1);
   Graph_Graph64->GetXaxis()->SetTitleFont(42);
   Graph_Graph64->GetYaxis()->SetLabelFont(42);
   Graph_Graph64->GetYaxis()->SetTitleFont(42);
   Graph_Graph64->GetZaxis()->SetLabelFont(42);
   Graph_Graph64->GetZaxis()->SetTitleOffset(1);
   Graph_Graph64->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph64);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx65[30] = {
   0,
   0.03017785,
   0.148765,
   0.2654639,
   0.3714922,
   0.4628088,
   0.5306967,
   0.5946646,
   0.6497964,
   0.6995353,
   0.7449937,
   0.783408,
   0.816074,
   0.8495118,
   0.8757757,
   0.9005647,
   0.923612,
   0.9462473,
   0.9606539,
   0.9727181,
   0.9810977,
   0.9865959,
   0.9906293,
   0.994171,
   0.9960685,
   0.9979565,
   0.9991654,
   0.9995846,
   0.9998426,
   0.9999097};
   Double_t Graph_fy65[30] = {
   0,
   0.02736306,
   0.1625457,
   0.3332794,
   0.4905216,
   0.6014934,
   0.6861876,
   0.7476416,
   0.787962,
   0.8270097,
   0.8579508,
   0.8814889,
   0.903029,
   0.9232863,
   0.9414481,
   0.9595294,
   0.9725789,
   0.9821811,
   0.9883076,
   0.9919893,
   0.9946864,
   0.9961867,
   0.9973718,
   0.9984254,
   0.9985686,
   0.9996106,
   0.9997252,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx65,Graph_fy65);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","Tagging Prioritized",100,0,1.099901);
   Graph_Graph65->SetMinimum(0);
   Graph_Graph65->SetMaximum(1.1);
   Graph_Graph65->SetDirectory(0);
   Graph_Graph65->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph65->SetLineColor(ci);
   Graph_Graph65->GetXaxis()->SetLabelFont(42);
   Graph_Graph65->GetXaxis()->SetTitleOffset(1);
   Graph_Graph65->GetXaxis()->SetTitleFont(42);
   Graph_Graph65->GetYaxis()->SetLabelFont(42);
   Graph_Graph65->GetYaxis()->SetTitleFont(42);
   Graph_Graph65->GetZaxis()->SetLabelFont(42);
   Graph_Graph65->GetZaxis()->SetTitleOffset(1);
   Graph_Graph65->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph65);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_H_dR_Bj0_18->Modified();
   ROC_H_dR_Bj0_18->cd();
   ROC_H_dR_Bj0_18->SetSelected(ROC_H_dR_Bj0_18);
}
