#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_17()
{
//=========Macro generated from canvas: ROC_Z_dR_17/ROC_Z_dR_17
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_17 = new TCanvas("ROC_Z_dR_17", "ROC_Z_dR_17",0,0,600,600);
   ROC_Z_dR_17->SetHighLightColor(2);
   ROC_Z_dR_17->Range(0,0,1,1);
   ROC_Z_dR_17->SetFillColor(0);
   ROC_Z_dR_17->SetBorderMode(0);
   ROC_Z_dR_17->SetBorderSize(2);
   ROC_Z_dR_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx40[30] = {
   0,
   0,
   2.716768e-05,
   0.05962005,
   0.1351277,
   0.1940947,
   0.2479483,
   0.2976492,
   0.3496959,
   0.397141,
   0.4485449,
   0.4999516,
   0.5546475,
   0.6169786,
   0.6839559,
   0.7578578,
   0.8406742,
   0.8940549,
   0.926271,
   0.9495277,
   0.9664357,
   0.9794853,
   0.9871557,
   0.9937563,
   0.996458,
   0.9981301,
   0.9991762,
   0.9996689,
   0.9999998,
   1};
   Double_t Graph_fy40[30] = {
   0,
   0,
   0,
   0.03097228,
   0.08873427,
   0.1788678,
   0.2826942,
   0.3755598,
   0.4590426,
   0.5328124,
   0.5978481,
   0.6613126,
   0.716991,
   0.7744343,
   0.834818,
   0.8920341,
   0.9503629,
   0.9741589,
   0.985637,
   0.9907289,
   0.9946958,
   0.9962427,
   0.9978237,
   0.9989239,
   0.9995161,
   0.9999787,
   0.9999787,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx40,Graph_fy40);
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
   
   TH1F *Graph_Graph40 = new TH1F("Graph_Graph40","Tagging Only",100,0,1.1);
   Graph_Graph40->SetMinimum(0);
   Graph_Graph40->SetMaximum(1.1);
   Graph_Graph40->SetDirectory(0);
   Graph_Graph40->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph40->SetLineColor(ci);
   Graph_Graph40->GetXaxis()->SetLabelFont(42);
   Graph_Graph40->GetXaxis()->SetTitleOffset(1);
   Graph_Graph40->GetXaxis()->SetTitleFont(42);
   Graph_Graph40->GetYaxis()->SetLabelFont(42);
   Graph_Graph40->GetYaxis()->SetTitleFont(42);
   Graph_Graph40->GetZaxis()->SetLabelFont(42);
   Graph_Graph40->GetZaxis()->SetTitleOffset(1);
   Graph_Graph40->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph40);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx41[30] = {
   0,
   0,
   1.082018e-05,
   0.08616166,
   0.2084576,
   0.2996315,
   0.3723279,
   0.4454223,
   0.5278753,
   0.5865917,
   0.6508428,
   0.7116619,
   0.7678222,
   0.8103015,
   0.8676944,
   0.9087305,
   0.9436288,
   0.9685024,
   0.9837435,
   0.9945154,
   0.9972002,
   0.9986459,
   0.9995702,
   0.9998323,
   0.999952,
   0.9999932,
   0.9999982,
   1,
   1,
   1};
   Double_t Graph_fy41[30] = {
   0,
   0,
   0,
   0.0395571,
   0.1071507,
   0.2433116,
   0.4111855,
   0.5563586,
   0.6724121,
   0.7644103,
   0.8385513,
   0.8889509,
   0.9211105,
   0.941327,
   0.961738,
   0.976867,
   0.9898388,
   0.9953809,
   0.9981137,
   0.998495,
   0.9991838,
   0.9999069,
   0.9999995,
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
   graph->SetMarkerStyle(21);
   
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
   3.276313e-05,
   0.05917159,
   0.1343349,
   0.1926721,
   0.2464861,
   0.2964847,
   0.348091,
   0.3968023,
   0.4482364,
   0.4993134,
   0.553756,
   0.6160712,
   0.6829201,
   0.7575016,
   0.840474,
   0.8942343,
   0.9265989,
   0.949666,
   0.9664172,
   0.9793294,
   0.9869515,
   0.9935422,
   0.9964526,
   0.9981249,
   0.999175,
   0.9996553,
   0.9999998,
   1};
   Double_t Graph_fy42[30] = {
   0,
   0,
   0,
   0.03300856,
   0.09298301,
   0.1817316,
   0.2837083,
   0.3741384,
   0.4555219,
   0.5292885,
   0.5932521,
   0.6558379,
   0.7123084,
   0.7695547,
   0.831585,
   0.890346,
   0.9491255,
   0.9742976,
   0.9856217,
   0.9909793,
   0.9948162,
   0.9965486,
   0.9979767,
   0.999022,
   0.999551,
   0.9999651,
   0.9999817,
   1,
   1,
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
   graph->SetMarkerStyle(21);
   
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
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.3684211,0.3,0.5784211,NULL,"brNDC");
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
   ROC_Z_dR_17->Modified();
   ROC_Z_dR_17->cd();
   ROC_Z_dR_17->SetSelected(ROC_Z_dR_17);
}
