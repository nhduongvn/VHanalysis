#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_17()
{
//=========Macro generated from canvas: ROC_Z_pt_17/ROC_Z_pt_17
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_17 = new TCanvas("ROC_Z_pt_17", "ROC_Z_pt_17",0,0,600,600);
   ROC_Z_pt_17->SetHighLightColor(2);
   ROC_Z_pt_17->Range(0,0,1,1);
   ROC_Z_pt_17->SetFillColor(0);
   ROC_Z_pt_17->SetBorderMode(0);
   ROC_Z_pt_17->SetBorderSize(2);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx22[40] = {
   0,
   0.2895709,
   0.731232,
   0.9090614,
   0.963284,
   0.9836883,
   0.9915944,
   0.995132,
   0.9974381,
   0.9984016,
   0.998968,
   0.9993239,
   0.9995387,
   0.9996762,
   0.9997687,
   0.9998566,
   0.9998982,
   0.9999263,
   0.9999466,
   0.9999611,
   0.9999712,
   0.9999787,
   0.999984,
   0.999988,
   0.999991,
   0.9999933,
   0.9999949,
   0.9999962,
   0.9999972,
   0.9999979,
   0.9999984,
   0.9999988,
   0.9999991,
   0.9999993,
   0.9999995,
   0.9999997,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   Double_t Graph_fy22[40] = {
   0,
   0.1959461,
   0.5390169,
   0.7774378,
   0.8941683,
   0.9455137,
   0.9715693,
   0.985364,
   0.9923857,
   0.9963439,
   0.9978441,
   0.9993398,
   0.9993974,
   0.9997458,
   0.9999771,
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(40,Graph_fx22,Graph_fy22);
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
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Tagging Only",100,0,1.1);
   Graph_Graph22->SetMinimum(0);
   Graph_Graph22->SetMaximum(1.1);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx23[40] = {
   0,
   0.1946899,
   0.7228344,
   0.9111392,
   0.966572,
   0.9847902,
   0.9924423,
   0.9958757,
   0.9975656,
   0.9985216,
   0.9990776,
   0.9994066,
   0.9996059,
   0.9997341,
   0.9998151,
   0.9998646,
   0.9999047,
   0.99993,
   0.9999487,
   0.9999627,
   0.9999719,
   0.9999792,
   0.9999838,
   0.9999877,
   0.9999907,
   0.9999928,
   0.9999945,
   0.9999958,
   0.9999971,
   0.9999979,
   0.9999983,
   0.9999987,
   0.9999989,
   0.9999991,
   0.9999994,
   0.9999996,
   0.9999997,
   0.9999997,
   0.9999999,
   0.9999999};
   Double_t Graph_fy23[40] = {
   0,
   0.07700936,
   0.4332585,
   0.7519351,
   0.8979074,
   0.9471106,
   0.97155,
   0.9858509,
   0.9941065,
   0.9969206,
   0.9981084,
   0.99885,
   0.9994167,
   0.9999972,
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx23,Graph_fy23);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph23->SetMinimum(0);
   Graph_Graph23->SetMaximum(1.1);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetTitleOffset(1);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetTitleOffset(1);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx24[40] = {
   0,
   0.2900714,
   0.7308825,
   0.907943,
   0.9623802,
   0.9831602,
   0.9911565,
   0.99499,
   0.997387,
   0.9983658,
   0.9989446,
   0.9993075,
   0.9995267,
   0.999668,
   0.9997631,
   0.9998521,
   0.9998949,
   0.9999239,
   0.9999447,
   0.9999597,
   0.9999701,
   0.9999779,
   0.9999834,
   0.9999876,
   0.9999907,
   0.999993,
   0.9999947,
   0.999996,
   0.999997,
   0.9999978,
   0.9999983,
   0.9999987,
   0.9999991,
   0.9999993,
   0.9999995,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   Double_t Graph_fy24[40] = {
   0,
   0.1903365,
   0.5357861,
   0.7719049,
   0.8898471,
   0.9438443,
   0.9706782,
   0.9847793,
   0.9918821,
   0.9962143,
   0.9976227,
   0.9991514,
   0.9993448,
   0.9996674,
   0.9998659,
   0.9999004,
   0.9999007,
   0.9999115,
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
   1,
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx24,Graph_fy24);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","Tagging Prioritized",100,0,1.1);
   Graph_Graph24->SetMinimum(0);
   Graph_Graph24->SetMaximum(1.1);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetTitleOffset(1);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetTitleOffset(1);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.2807018,0.3,0.4907018,NULL,"brNDC");
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
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ROC_Z_pt_17->Modified();
   ROC_Z_pt_17->cd();
   ROC_Z_pt_17->SetSelected(ROC_Z_pt_17);
}
