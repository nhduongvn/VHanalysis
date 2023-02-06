#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_16()
{
//=========Macro generated from canvas: ROC_Aplanarity_16/ROC_Aplanarity_16
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_16 = new TCanvas("ROC_Aplanarity_16", "ROC_Aplanarity_16",0,0,600,600);
   ROC_Aplanarity_16->SetHighLightColor(2);
   ROC_Aplanarity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_16->SetFillColor(0);
   ROC_Aplanarity_16->SetBorderMode(0);
   ROC_Aplanarity_16->SetBorderSize(2);
   ROC_Aplanarity_16->SetGridx();
   ROC_Aplanarity_16->SetGridy();
   ROC_Aplanarity_16->SetLeftMargin(0.15709);
   ROC_Aplanarity_16->SetRightMargin(0.1234783);
   ROC_Aplanarity_16->SetBottomMargin(0.12);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx228[51] = {
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
   3.251679e-09,
   4.340313e-08,
   3.624796e-07,
   1.383941e-06,
   5.238954e-06,
   2.035276e-05,
   7.989785e-05,
   0.0001633283,
   0.0003396585,
   0.000635587,
   0.001029614,
   0.001701304,
   0.003398113,
   0.00578798,
   0.009577187,
   0.01482646,
   0.02231296,
   0.03261536,
   0.04761935,
   0.07318346,
   0.1120213,
   0.1759933,
   0.2887792,
   0.5121697,
   1};
   Double_t Graph_fy228[51] = {
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
   0,
   0,
   1.042786e-05,
   1.042786e-05,
   0.000349682,
   0.0007639488,
   0.001045432,
   0.002103052,
   0.002994962,
   0.004666572,
   0.007636852,
   0.01311381,
   0.01877632,
   0.03102472,
   0.04518211,
   0.06394088,
   0.09119497,
   0.1273899,
   0.1831691,
   0.2535181,
   0.3629203,
   0.5045919,
   0.7055371,
   1};
   TGraph *graph = new TGraph(51,Graph_fx228,Graph_fy228);
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
   
   TH1F *Graph_Graph228 = new TH1F("Graph_Graph228","Tagging Only",100,0,1.1);
   Graph_Graph228->SetMinimum(0);
   Graph_Graph228->SetMaximum(1.1);
   Graph_Graph228->SetDirectory(0);
   Graph_Graph228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph228->SetLineColor(ci);
   Graph_Graph228->GetXaxis()->SetLabelFont(42);
   Graph_Graph228->GetXaxis()->SetTitleOffset(1);
   Graph_Graph228->GetXaxis()->SetTitleFont(42);
   Graph_Graph228->GetYaxis()->SetLabelFont(42);
   Graph_Graph228->GetYaxis()->SetTitleFont(42);
   Graph_Graph228->GetZaxis()->SetLabelFont(42);
   Graph_Graph228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph228->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph228);
   
   TLatex *   tex = new TLatex(0.162209,0.4970341,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(229);
      tex = new TLatex(0.2676177,0.6553916,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(230);
      tex = new TLatex(0.4852327,0.8490697,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(231);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx232[51] = {
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
   4.124236e-08,
   1.790862e-07,
   6.37054e-07,
   1.686084e-06,
   6.097327e-05,
   6.620789e-05,
   7.644848e-05,
   0.00015627,
   0.000192672,
   0.0005920564,
   0.000857447,
   0.001367843,
   0.002542512,
   0.006806669,
   0.0125525,
   0.01804154,
   0.02806593,
   0.03952525,
   0.06224637,
   0.1058892,
   0.162209,
   0.2676177,
   0.4852327,
   1};
   Double_t Graph_fy232[51] = {
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
   0,
   0,
   0,
   0,
   0.0008909688,
   0.0009825492,
   0.001084231,
   0.003644333,
   0.004568985,
   0.006468273,
   0.01186518,
   0.01757459,
   0.02567343,
   0.0347217,
   0.05415383,
   0.07604096,
   0.1034022,
   0.1443735,
   0.2104554,
   0.2826988,
   0.3970341,
   0.5553916,
   0.7490697,
   1};
   graph = new TGraph(51,Graph_fx232,Graph_fy232);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph232 = new TH1F("Graph_Graph232","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph232->SetMinimum(0);
   Graph_Graph232->SetMaximum(1.1);
   Graph_Graph232->SetDirectory(0);
   Graph_Graph232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph232->SetLineColor(ci);
   Graph_Graph232->GetXaxis()->SetLabelFont(42);
   Graph_Graph232->GetXaxis()->SetTitleOffset(1);
   Graph_Graph232->GetXaxis()->SetTitleFont(42);
   Graph_Graph232->GetYaxis()->SetLabelFont(42);
   Graph_Graph232->GetYaxis()->SetTitleFont(42);
   Graph_Graph232->GetZaxis()->SetLabelFont(42);
   Graph_Graph232->GetZaxis()->SetTitleOffset(1);
   Graph_Graph232->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph232);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx233[51] = {
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
   3.16567e-09,
   4.576472e-08,
   3.710825e-07,
   1.402395e-06,
   5.49177e-06,
   2.0647e-05,
   7.925648e-05,
   0.0001615749,
   0.0003352196,
   0.0006973195,
   0.001085022,
   0.001754491,
   0.003424673,
   0.005784485,
   0.009545854,
   0.01477988,
   0.02221228,
   0.03235801,
   0.04733556,
   0.07274744,
   0.1117487,
   0.1757978,
   0.2890699,
   0.5131054,
   1};
   Double_t Graph_fy233[51] = {
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
   0,
   0,
   8.681808e-06,
   8.681808e-06,
   0.0002911308,
   0.0006360322,
   0.0008703831,
   0.001750914,
   0.002531044,
   0.00417636,
   0.00684902,
   0.01186851,
   0.01701516,
   0.02881555,
   0.04212214,
   0.06125868,
   0.08712669,
   0.122789,
   0.1773953,
   0.2458483,
   0.3524264,
   0.4944609,
   0.6957749,
   1};
   graph = new TGraph(51,Graph_fx233,Graph_fy233);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph233 = new TH1F("Graph_Graph233","Tagging Prioritized",100,0,1.1);
   Graph_Graph233->SetMinimum(0);
   Graph_Graph233->SetMaximum(1.1);
   Graph_Graph233->SetDirectory(0);
   Graph_Graph233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph233->SetLineColor(ci);
   Graph_Graph233->GetXaxis()->SetLabelFont(42);
   Graph_Graph233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph233->GetXaxis()->SetTitleFont(42);
   Graph_Graph233->GetYaxis()->SetLabelFont(42);
   Graph_Graph233->GetYaxis()->SetTitleFont(42);
   Graph_Graph233->GetZaxis()->SetLabelFont(42);
   Graph_Graph233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph233->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph233);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Aplanarity_16->Modified();
   ROC_Aplanarity_16->cd();
   ROC_Aplanarity_16->SetSelected(ROC_Aplanarity_16);
}
