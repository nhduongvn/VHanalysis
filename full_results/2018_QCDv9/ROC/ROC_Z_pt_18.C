#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(0,0,1,1);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx25[40] = {
   0,
   0.2727829,
   0.7153213,
   0.9011718,
   0.9587528,
   0.9809477,
   0.9901262,
   0.9948492,
   0.9969342,
   0.9981069,
   0.998789,
   0.9992185,
   0.9994781,
   0.9996441,
   0.9997557,
   0.9998295,
   0.9998773,
   0.9999113,
   0.9999357,
   0.9999532,
   0.9999653,
   0.9999744,
   0.9999807,
   0.9999856,
   0.9999892,
   0.9999919,
   0.9999938,
   0.9999953,
   0.9999966,
   0.9999975,
   0.9999981,
   0.9999986,
   0.9999989,
   0.9999992,
   0.9999994,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999,
   0.9999999};
   Double_t Graph_fy25[40] = {
   0,
   0.1761229,
   0.5065531,
   0.7483902,
   0.8703345,
   0.9300344,
   0.9621897,
   0.977936,
   0.987587,
   0.9927264,
   0.9953426,
   0.9970199,
   0.9978981,
   0.9988864,
   0.9993238,
   0.9993346,
   0.9995985,
   0.9996575,
   0.9997501,
   0.9997623,
   0.9997623,
   0.9999516,
   0.9999516,
   0.9999577,
   0.9999577,
   0.9999793,
   0.9999793,
   0.9999793,
   0.9999793,
   0.9999793,
   0.9999793,
   0.9999793,
   0.9999793,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(40,Graph_fx25,Graph_fy25);
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
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","Tagging Only",100,0,1.1);
   Graph_Graph25->SetMinimum(0);
   Graph_Graph25->SetMaximum(1.1);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetTitleOffset(1);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetTitleOffset(1);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx26[40] = {
   0,
   0.1790357,
   0.7019262,
   0.9053047,
   0.9610165,
   0.982042,
   0.9909287,
   0.9949509,
   0.9969858,
   0.9981918,
   0.998872,
   0.9992743,
   0.9995185,
   0.9996747,
   0.9997738,
   0.9998342,
   0.9998833,
   0.9999141,
   0.999937,
   0.9999544,
   0.9999657,
   0.9999744,
   0.9999802,
   0.9999848,
   0.9999886,
   0.9999912,
   0.9999932,
   0.9999949,
   0.9999964,
   0.9999974,
   0.9999979,
   0.9999984,
   0.9999987,
   0.9999989,
   0.9999993,
   0.9999995,
   0.9999996,
   0.9999997,
   0.9999999,
   0.9999999};
   Double_t Graph_fy26[40] = {
   0,
   0.07157056,
   0.4284592,
   0.7603368,
   0.8965198,
   0.9450171,
   0.9676724,
   0.984248,
   0.9933117,
   0.9956525,
   0.9979176,
   0.9987247,
   0.9992104,
   0.9992104,
   0.9995199,
   0.9996554,
   0.9997073,
   0.9997073,
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
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx26,Graph_fy26);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph26->SetMinimum(0);
   Graph_Graph26->SetMaximum(1.1);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetTitleOffset(1);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetTitleOffset(1);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx27[40] = {
   0,
   0.2738385,
   0.713548,
   0.9006016,
   0.9583302,
   0.9807005,
   0.9899738,
   0.9947364,
   0.996865,
   0.9980618,
   0.9987592,
   0.9991975,
   0.9994627,
   0.9996331,
   0.9997479,
   0.9998239,
   0.9998733,
   0.9999083,
   0.9999334,
   0.9999516,
   0.999964,
   0.9999734,
   0.99998,
   0.9999851,
   0.9999888,
   0.9999916,
   0.9999936,
   0.9999952,
   0.9999964,
   0.9999973,
   0.999998,
   0.9999985,
   0.9999989,
   0.9999991,
   0.9999994,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999,
   0.9999999};
   Double_t Graph_fy27[40] = {
   0,
   0.1738752,
   0.502176,
   0.7430814,
   0.86579,
   0.9275076,
   0.9607491,
   0.9766333,
   0.9867823,
   0.992373,
   0.9949563,
   0.9967168,
   0.997651,
   0.9986059,
   0.9990743,
   0.9991073,
   0.9993762,
   0.9994495,
   0.9995492,
   0.9996384,
   0.9996384,
   0.9998048,
   0.9998048,
   0.9998101,
   0.9999381,
   0.999957,
   0.999957,
   0.999957,
   0.999957,
   0.9999818,
   0.9999818,
   0.9999818,
   0.9999818,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx27,Graph_fy27);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Tagging Prioritized",100,0,1.1);
   Graph_Graph27->SetMinimum(0);
   Graph_Graph27->SetMaximum(1.1);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetTitleOffset(1);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
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
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
