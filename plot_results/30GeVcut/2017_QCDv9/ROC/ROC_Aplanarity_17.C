#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_17()
{
//=========Macro generated from canvas: ROC_Aplanarity_17/ROC_Aplanarity_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_17 = new TCanvas("ROC_Aplanarity_17", "ROC_Aplanarity_17",0,0,600,600);
   ROC_Aplanarity_17->SetHighLightColor(2);
   ROC_Aplanarity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_17->SetFillColor(0);
   ROC_Aplanarity_17->SetBorderMode(0);
   ROC_Aplanarity_17->SetBorderSize(2);
   ROC_Aplanarity_17->SetGridx();
   ROC_Aplanarity_17->SetGridy();
   ROC_Aplanarity_17->SetLeftMargin(0.15709);
   ROC_Aplanarity_17->SetRightMargin(0.1234783);
   ROC_Aplanarity_17->SetBottomMargin(0.12);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   
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
   1.405056e-09,
   6.974719e-08,
   4.383467e-07,
   1.903323e-06,
   6.358478e-06,
   5.139716e-05,
   0.0001123197,
   0.0002470806,
   0.0006522191,
   0.001217475,
   0.001771678,
   0.002681248,
   0.004249901,
   0.006623206,
   0.009858633,
   0.01459095,
   0.02299169,
   0.03347086,
   0.05180123,
   0.07831145,
   0.117511,
   0.1852488,
   0.3037606,
   0.5290713,
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
   5.891167e-05,
   8.034789e-05,
   0.0002641654,
   0.0006309121,
   0.001057247,
   0.002018702,
   0.002976958,
   0.005624597,
   0.008953426,
   0.01375666,
   0.02076184,
   0.03121025,
   0.04575196,
   0.06440785,
   0.09118138,
   0.1265812,
   0.1798318,
   0.2495175,
   0.3501122,
   0.4940822,
   0.7018151,
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
   
   TLatex *   tex = new TLatex(0.1546527,0.4827672,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(229);
      tex = new TLatex(0.2597188,0.6340446,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(230);
      tex = new TLatex(0.4994161,0.8441943,"0.01");
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
   1.762677e-08,
   1.620002e-07,
   6.467602e-07,
   2.196037e-06,
   5.552652e-06,
   6.054286e-05,
   7.347837e-05,
   0.0001011297,
   0.002080644,
   0.00244152,
   0.003056083,
   0.003642686,
   0.005023086,
   0.00633218,
   0.008766077,
   0.01313081,
   0.01814079,
   0.0384716,
   0.06621451,
   0.1003574,
   0.1546527,
   0.2597188,
   0.4994161,
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
   0,
   0.000489139,
   0.0005363737,
   0.001392089,
   0.001977801,
   0.00483332,
   0.009577191,
   0.01541419,
   0.02340789,
   0.03698858,
   0.05505347,
   0.0763259,
   0.1077565,
   0.1456526,
   0.1993573,
   0.2738148,
   0.3827672,
   0.5340446,
   0.7441943,
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
   1.375569e-09,
   7.136238e-08,
   4.440973e-07,
   1.920571e-06,
   6.580936e-06,
   5.088726e-05,
   0.0001112025,
   0.0002452689,
   0.0006442439,
   0.001200419,
   0.001759621,
   0.002656413,
   0.004202169,
   0.00657732,
   0.00981484,
   0.01498077,
   0.02336025,
   0.0338832,
   0.05220585,
   0.07890398,
   0.1180281,
   0.1859212,
   0.3048255,
   0.5294556,
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
   5.746907e-05,
   7.838037e-05,
   0.0002576967,
   0.000715603,
   0.001131498,
   0.002165734,
   0.003100525,
   0.005760265,
   0.009110677,
   0.01384308,
   0.0208959,
   0.0312503,
   0.04562233,
   0.06405139,
   0.09042968,
   0.1254501,
   0.1788174,
   0.2484704,
   0.3487024,
   0.4916472,
   0.6992695,
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Aplanarity_17->Modified();
   ROC_Aplanarity_17->cd();
   ROC_Aplanarity_17->SetSelected(ROC_Aplanarity_17);
}
