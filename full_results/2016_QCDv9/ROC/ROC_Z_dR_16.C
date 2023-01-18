#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_16()
{
//=========Macro generated from canvas: ROC_Z_dR_16/ROC_Z_dR_16
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_16 = new TCanvas("ROC_Z_dR_16", "ROC_Z_dR_16",0,0,600,600);
   ROC_Z_dR_16->SetHighLightColor(2);
   ROC_Z_dR_16->Range(0,0,1,1);
   ROC_Z_dR_16->SetFillColor(0);
   ROC_Z_dR_16->SetBorderMode(0);
   ROC_Z_dR_16->SetBorderSize(2);
   ROC_Z_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx37[30] = {
   0,
   0,
   2.680206e-05,
   0.06291614,
   0.144069,
   0.2064909,
   0.2594928,
   0.3077868,
   0.3572251,
   0.4053372,
   0.4545398,
   0.5056494,
   0.5625293,
   0.6206911,
   0.6913319,
   0.76757,
   0.8475456,
   0.8978932,
   0.9320394,
   0.9545886,
   0.9678308,
   0.9805332,
   0.9880698,
   0.9941096,
   0.9974408,
   0.9988591,
   0.9998216,
   0.9999757,
   1,
   1};
   Double_t Graph_fy37[30] = {
   0,
   0,
   0,
   0.03810611,
   0.1052092,
   0.196683,
   0.2966079,
   0.3875519,
   0.4707196,
   0.5410505,
   0.5943701,
   0.6457307,
   0.7065343,
   0.7649158,
   0.8237842,
   0.8866242,
   0.9482346,
   0.9716051,
   0.9838048,
   0.9900883,
   0.9946341,
   0.9968667,
   0.998587,
   0.9989029,
   0.9993965,
   0.9997853,
   0.9999634,
   0.9999787,
   0.9999787,
   1};
   TGraph *graph = new TGraph(30,Graph_fx37,Graph_fy37);
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
   
   TH1F *Graph_Graph37 = new TH1F("Graph_Graph37","Tagging Only",100,0,1.1);
   Graph_Graph37->SetMinimum(0);
   Graph_Graph37->SetMaximum(1.1);
   Graph_Graph37->SetDirectory(0);
   Graph_Graph37->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph37->SetLineColor(ci);
   Graph_Graph37->GetXaxis()->SetLabelFont(42);
   Graph_Graph37->GetXaxis()->SetTitleOffset(1);
   Graph_Graph37->GetXaxis()->SetTitleFont(42);
   Graph_Graph37->GetYaxis()->SetLabelFont(42);
   Graph_Graph37->GetYaxis()->SetTitleFont(42);
   Graph_Graph37->GetZaxis()->SetLabelFont(42);
   Graph_Graph37->GetZaxis()->SetTitleOffset(1);
   Graph_Graph37->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph37);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx38[30] = {
   0,
   0,
   5.875374e-06,
   0.0869485,
   0.2093307,
   0.3089855,
   0.405403,
   0.4765205,
   0.5656227,
   0.6252588,
   0.6857603,
   0.730995,
   0.7781736,
   0.8106204,
   0.8585034,
   0.9022484,
   0.9396225,
   0.9583332,
   0.9714915,
   0.9820404,
   0.9918885,
   0.9946583,
   0.9984841,
   0.9993063,
   0.9996679,
   0.9999917,
   0.9999972,
   1,
   1,
   1};
   Double_t Graph_fy38[30] = {
   0,
   0,
   0,
   0.05167776,
   0.1097706,
   0.2507966,
   0.4156887,
   0.5622216,
   0.6869967,
   0.7692778,
   0.835467,
   0.8794155,
   0.9065202,
   0.9377679,
   0.9576622,
   0.9801009,
   0.9923601,
   0.9958304,
   0.9986059,
   0.9988087,
   0.9997095,
   0.9997955,
   0.9999019,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx38,Graph_fy38);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph38 = new TH1F("Graph_Graph38","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph38->SetMinimum(0);
   Graph_Graph38->SetMaximum(1.1);
   Graph_Graph38->SetDirectory(0);
   Graph_Graph38->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph38->SetLineColor(ci);
   Graph_Graph38->GetXaxis()->SetLabelFont(42);
   Graph_Graph38->GetXaxis()->SetTitleOffset(1);
   Graph_Graph38->GetXaxis()->SetTitleFont(42);
   Graph_Graph38->GetYaxis()->SetLabelFont(42);
   Graph_Graph38->GetYaxis()->SetTitleFont(42);
   Graph_Graph38->GetZaxis()->SetLabelFont(42);
   Graph_Graph38->GetZaxis()->SetTitleOffset(1);
   Graph_Graph38->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph38);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx39[30] = {
   0,
   0,
   2.614607e-05,
   0.0624551,
   0.1427313,
   0.2047827,
   0.2575322,
   0.3060179,
   0.3549579,
   0.4027057,
   0.4526211,
   0.5037581,
   0.5610926,
   0.6185426,
   0.6886608,
   0.7650176,
   0.8466133,
   0.8975965,
   0.9317649,
   0.954201,
   0.9677624,
   0.9803545,
   0.987842,
   0.9937736,
   0.997052,
   0.9988538,
   0.9997938,
   0.9999452,
   1,
   1};
   Double_t Graph_fy39[30] = {
   0,
   0,
   1.757472e-05,
   0.03988487,
   0.1082456,
   0.1987101,
   0.2952139,
   0.3840718,
   0.4632142,
   0.5313176,
   0.5862397,
   0.63934,
   0.7003975,
   0.7605421,
   0.8218223,
   0.8855034,
   0.9478389,
   0.9710827,
   0.9840738,
   0.9900587,
   0.994688,
   0.9967234,
   0.9986559,
   0.9990457,
   0.9994838,
   0.9998212,
   0.9999695,
   0.9999822,
   0.9999822,
   1};
   graph = new TGraph(30,Graph_fx39,Graph_fy39);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph39 = new TH1F("Graph_Graph39","Tagging Prioritized",100,0,1.1);
   Graph_Graph39->SetMinimum(0);
   Graph_Graph39->SetMaximum(1.1);
   Graph_Graph39->SetDirectory(0);
   Graph_Graph39->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph39->SetLineColor(ci);
   Graph_Graph39->GetXaxis()->SetLabelFont(42);
   Graph_Graph39->GetXaxis()->SetTitleOffset(1);
   Graph_Graph39->GetXaxis()->SetTitleFont(42);
   Graph_Graph39->GetYaxis()->SetLabelFont(42);
   Graph_Graph39->GetYaxis()->SetTitleFont(42);
   Graph_Graph39->GetZaxis()->SetLabelFont(42);
   Graph_Graph39->GetZaxis()->SetTitleOffset(1);
   Graph_Graph39->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph39);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.3508772,0.3,0.5608772,NULL,"brNDC");
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
   ROC_Z_dR_16->Modified();
   ROC_Z_dR_16->cd();
   ROC_Z_dR_16->SetSelected(ROC_Z_dR_16);
}
