#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_18()
{
//=========Macro generated from canvas: ROC_Z_dR_18/ROC_Z_dR_18
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_18 = new TCanvas("ROC_Z_dR_18", "ROC_Z_dR_18",0,0,600,600);
   ROC_Z_dR_18->SetHighLightColor(2);
   ROC_Z_dR_18->Range(0,0,1,1);
   ROC_Z_dR_18->SetFillColor(0);
   ROC_Z_dR_18->SetBorderMode(0);
   ROC_Z_dR_18->SetBorderSize(2);
   ROC_Z_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx43[30] = {
   0,
   0,
   5.786848e-05,
   0.06731875,
   0.1472323,
   0.2068396,
   0.2604251,
   0.3076702,
   0.3556174,
   0.4029652,
   0.4575263,
   0.5065701,
   0.5615916,
   0.6268531,
   0.6936253,
   0.7717196,
   0.8546351,
   0.9011808,
   0.9336358,
   0.9572115,
   0.9735405,
   0.9817689,
   0.988599,
   0.9936194,
   0.9967167,
   0.9989172,
   0.9994944,
   0.9999279,
   0.999983,
   1};
   Double_t Graph_fy43[30] = {
   0,
   0,
   0,
   0.03428307,
   0.0979391,
   0.190977,
   0.2940778,
   0.3939988,
   0.4801392,
   0.5545916,
   0.6207745,
   0.6753037,
   0.729247,
   0.7824479,
   0.8351375,
   0.8990187,
   0.9556898,
   0.9772642,
   0.9870507,
   0.9922717,
   0.9953639,
   0.997317,
   0.9986103,
   0.9989792,
   0.9997856,
   0.999975,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx43,Graph_fy43);
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
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Tagging Only",100,0,1.1);
   Graph_Graph43->SetMinimum(0);
   Graph_Graph43->SetMaximum(1.1);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetTitleOffset(1);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetTitleOffset(1);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx44[30] = {
   0,
   0,
   0.000260377,
   0.103216,
   0.2245249,
   0.3263813,
   0.4180917,
   0.4864626,
   0.5553738,
   0.6231599,
   0.6884917,
   0.7312362,
   0.7809336,
   0.8228919,
   0.8682961,
   0.9106188,
   0.9520956,
   0.9676466,
   0.9785219,
   0.9849474,
   0.9965533,
   0.9984697,
   0.9992185,
   0.9994296,
   0.9996642,
   0.9997213,
   0.9999978,
   1,
   1,
   1};
   Double_t Graph_fy44[30] = {
   0,
   0,
   0,
   0.03865498,
   0.094254,
   0.2395241,
   0.4053951,
   0.5643964,
   0.689083,
   0.7777551,
   0.852926,
   0.9018774,
   0.9311876,
   0.9497221,
   0.9625546,
   0.9775514,
   0.9895192,
   0.9941537,
   0.9969337,
   0.9991197,
   0.9992097,
   0.9992097,
   0.9998829,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx44,Graph_fy44);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph44->SetMinimum(0);
   Graph_Graph44->SetMaximum(1.1);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph44->SetLineColor(ci);
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetTitleOffset(1);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetTitleOffset(1);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph44);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx45[30] = {
   0,
   0,
   5.64345e-05,
   0.06678511,
   0.1461736,
   0.205158,
   0.2585103,
   0.3057125,
   0.3532672,
   0.4005258,
   0.4552325,
   0.5048046,
   0.5594692,
   0.6245297,
   0.6920581,
   0.7702542,
   0.8526437,
   0.8999024,
   0.9323289,
   0.9570766,
   0.9732417,
   0.9816644,
   0.9884664,
   0.9934596,
   0.996503,
   0.9989372,
   0.9995104,
   0.9999295,
   0.9999835,
   1};
   Double_t Graph_fy45[30] = {
   0,
   0,
   0,
   0.03694396,
   0.1028996,
   0.195945,
   0.2981517,
   0.3946824,
   0.4784591,
   0.5522235,
   0.6156348,
   0.6698039,
   0.7227177,
   0.7750269,
   0.8298687,
   0.894571,
   0.9530773,
   0.9753323,
   0.9856771,
   0.9912057,
   0.9948165,
   0.9969448,
   0.9983194,
   0.9989117,
   0.9997571,
   0.9999685,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx45,Graph_fy45);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","Tagging Prioritized",100,0,1.1);
   Graph_Graph45->SetMinimum(0);
   Graph_Graph45->SetMaximum(1.1);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph45->SetLineColor(ci);
   Graph_Graph45->GetXaxis()->SetLabelFont(42);
   Graph_Graph45->GetXaxis()->SetTitleOffset(1);
   Graph_Graph45->GetXaxis()->SetTitleFont(42);
   Graph_Graph45->GetYaxis()->SetLabelFont(42);
   Graph_Graph45->GetYaxis()->SetTitleFont(42);
   Graph_Graph45->GetZaxis()->SetLabelFont(42);
   Graph_Graph45->GetZaxis()->SetTitleOffset(1);
   Graph_Graph45->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph45);
   
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
   ROC_Z_dR_18->Modified();
   ROC_Z_dR_18->cd();
   ROC_Z_dR_18->SetSelected(ROC_Z_dR_18);
}
