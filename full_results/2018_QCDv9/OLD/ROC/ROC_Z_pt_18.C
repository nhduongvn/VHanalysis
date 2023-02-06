#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetGridx();
   ROC_Z_pt_18->SetGridy();
   ROC_Z_pt_18->SetLeftMargin(0.15709);
   ROC_Z_pt_18->SetRightMargin(0.1234783);
   ROC_Z_pt_18->SetBottomMargin(0.12);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx139[40] = {
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
   Double_t Graph_fy139[40] = {
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
   TGraph *graph = new TGraph(40,Graph_fx139,Graph_fy139);
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
   
   TH1F *Graph_Graph139 = new TH1F("Graph_Graph139","Tagging Only",100,0,1.1);
   Graph_Graph139->SetMinimum(0);
   Graph_Graph139->SetMaximum(1.1);
   Graph_Graph139->SetDirectory(0);
   Graph_Graph139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph139->SetLineColor(ci);
   Graph_Graph139->GetXaxis()->SetLabelFont(42);
   Graph_Graph139->GetXaxis()->SetTitleOffset(1);
   Graph_Graph139->GetXaxis()->SetTitleFont(42);
   Graph_Graph139->GetYaxis()->SetLabelFont(42);
   Graph_Graph139->GetYaxis()->SetTitleFont(42);
   Graph_Graph139->GetZaxis()->SetLabelFont(42);
   Graph_Graph139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph139->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph139);
   
   TLatex *   tex = new TLatex(0.2727829,0.2361229,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(140);
      tex = new TLatex(0.7153213,0.5665531,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(141);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx142[40] = {
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
   Double_t Graph_fy142[40] = {
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
   graph = new TGraph(40,Graph_fx142,Graph_fy142);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph142 = new TH1F("Graph_Graph142","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph142->SetMinimum(0);
   Graph_Graph142->SetMaximum(1.1);
   Graph_Graph142->SetDirectory(0);
   Graph_Graph142->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph142->SetLineColor(ci);
   Graph_Graph142->GetXaxis()->SetLabelFont(42);
   Graph_Graph142->GetXaxis()->SetTitleOffset(1);
   Graph_Graph142->GetXaxis()->SetTitleFont(42);
   Graph_Graph142->GetYaxis()->SetLabelFont(42);
   Graph_Graph142->GetYaxis()->SetTitleFont(42);
   Graph_Graph142->GetZaxis()->SetLabelFont(42);
   Graph_Graph142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph142->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph142);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx143[40] = {
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
   Double_t Graph_fy143[40] = {
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
   graph = new TGraph(40,Graph_fx143,Graph_fy143);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph143 = new TH1F("Graph_Graph143","Tagging Prioritized",100,0,1.1);
   Graph_Graph143->SetMinimum(0);
   Graph_Graph143->SetMaximum(1.1);
   Graph_Graph143->SetDirectory(0);
   Graph_Graph143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph143->SetLineColor(ci);
   Graph_Graph143->GetXaxis()->SetLabelFont(42);
   Graph_Graph143->GetXaxis()->SetTitleOffset(1);
   Graph_Graph143->GetXaxis()->SetTitleFont(42);
   Graph_Graph143->GetYaxis()->SetLabelFont(42);
   Graph_Graph143->GetYaxis()->SetTitleFont(42);
   Graph_Graph143->GetZaxis()->SetLabelFont(42);
   Graph_Graph143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph143->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph143);
   
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
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
