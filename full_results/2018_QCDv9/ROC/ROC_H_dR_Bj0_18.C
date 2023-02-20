#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_18/ROC_H_dR_Bj0_18
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
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
   0.02987648,
   0.1490328,
   0.2641192,
   0.3688741,
   0.4605779,
   0.5275343,
   0.5908288,
   0.6459687,
   0.6955448,
   0.7415507,
   0.7802254,
   0.8131958,
   0.8487836,
   0.874794,
   0.8995242,
   0.9221211,
   0.9452081,
   0.9594514,
   0.9716401,
   0.9803739,
   0.9860162,
   0.9901739,
   0.9939076,
   0.9958161,
   0.9978796,
   0.9991535,
   0.9995611,
   0.9998346,
   0.9999035};
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
   
   TH1F *Graph_Graph58 = new TH1F("Graph_Graph58","Tagging Only",100,0,1.099894);
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
   
   TLatex *   tex = new TLatex(0.3358696,0.5454261,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(59);
      tex = new TLatex(0.5270792,0.8320818,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(60);
      tex = new TLatex(0.6862087,0.9321023,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(61);
      tex = new TLatex(0.7873457,0.9839413,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(62);
      tex = new TLatex(0.8450362,1.01043,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(63);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx64[30] = {
   0,
   0.09277117,
   0.3358696,
   0.5270792,
   0.6862087,
   0.7873457,
   0.8450362,
   0.894466,
   0.9209496,
   0.9341158,
   0.9660261,
   0.9724894,
   0.9774364,
   0.981789,
   0.9853295,
   0.9899173,
   0.9923833,
   0.996109,
   0.9967062,
   0.9982767,
   0.9983624,
   0.9996821,
   0.9999365,
   0.9999424,
   0.9999744,
   0.9999769,
   0.9999977,
   0.9999988,
   0.9999993,
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
   0.02988695,
   0.1487269,
   0.2643307,
   0.369192,
   0.4608623,
   0.5276767,
   0.5912531,
   0.646242,
   0.6956557,
   0.7416546,
   0.7802408,
   0.8130857,
   0.8487023,
   0.8748789,
   0.899598,
   0.9225029,
   0.9455402,
   0.9598952,
   0.9719491,
   0.9805433,
   0.9861431,
   0.9902815,
   0.9939697,
   0.9958964,
   0.997906,
   0.9991636,
   0.9995639,
   0.9998331,
   0.9999038};
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
   
   TH1F *Graph_Graph65 = new TH1F("Graph_Graph65","Tagging Prioritized",100,0,1.099894);
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
