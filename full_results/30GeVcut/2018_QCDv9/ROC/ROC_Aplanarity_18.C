#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_18()
{
//=========Macro generated from canvas: ROC_Aplanarity_18/ROC_Aplanarity_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_18 = new TCanvas("ROC_Aplanarity_18", "ROC_Aplanarity_18",0,0,600,600);
   ROC_Aplanarity_18->SetHighLightColor(2);
   ROC_Aplanarity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_18->SetFillColor(0);
   ROC_Aplanarity_18->SetBorderMode(0);
   ROC_Aplanarity_18->SetBorderSize(2);
   ROC_Aplanarity_18->SetGridx();
   ROC_Aplanarity_18->SetGridy();
   ROC_Aplanarity_18->SetLeftMargin(0.15709);
   ROC_Aplanarity_18->SetRightMargin(0.1234783);
   ROC_Aplanarity_18->SetBottomMargin(0.12);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx234[51] = {
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
   2.427287e-09,
   7.288688e-08,
   4.725172e-07,
   2.081196e-06,
   5.120371e-05,
   0.0001040229,
   0.0001633561,
   0.000273994,
   0.0008205031,
   0.001185472,
   0.002223511,
   0.00300245,
   0.004413596,
   0.006841144,
   0.01008,
   0.0165798,
   0.02564183,
   0.0371031,
   0.05424169,
   0.07952087,
   0.1170225,
   0.1806426,
   0.2981716,
   0.5190945,
   1};
   Double_t Graph_fy234[51] = {
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
   6.667085e-05,
   0.0001643794,
   0.0004316862,
   0.0007798557,
   0.001472339,
   0.00183483,
   0.003014762,
   0.004410774,
   0.008447872,
   0.0138736,
   0.02165867,
   0.03068434,
   0.04321157,
   0.06097355,
   0.08693711,
   0.1213274,
   0.1718175,
   0.2437818,
   0.3435913,
   0.485571,
   0.6988721,
   1};
   TGraph *graph = new TGraph(51,Graph_fx234,Graph_fy234);
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
   
   TH1F *Graph_Graph234 = new TH1F("Graph_Graph234","Tagging Only",100,0,1.1);
   Graph_Graph234->SetMinimum(0);
   Graph_Graph234->SetMaximum(1.1);
   Graph_Graph234->SetDirectory(0);
   Graph_Graph234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph234->SetLineColor(ci);
   Graph_Graph234->GetXaxis()->SetLabelFont(42);
   Graph_Graph234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph234->GetXaxis()->SetTitleFont(42);
   Graph_Graph234->GetYaxis()->SetLabelFont(42);
   Graph_Graph234->GetYaxis()->SetTitleFont(42);
   Graph_Graph234->GetZaxis()->SetLabelFont(42);
   Graph_Graph234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph234->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph234);
   
   TLatex *   tex = new TLatex(0.1584862,0.4509702,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(235);
      tex = new TLatex(0.2667529,0.6091761,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(236);
      tex = new TLatex(0.4652364,0.8346651,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(237);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx238[51] = {
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
   1.921207e-07,
   8.748742e-07,
   2.408386e-06,
   6.173557e-06,
   0.0001656367,
   0.0005135886,
   0.0005360648,
   0.000924968,
   0.001349559,
   0.002375727,
   0.003829926,
   0.004939456,
   0.006248889,
   0.008406617,
   0.01394165,
   0.02051324,
   0.04135953,
   0.0646571,
   0.09343522,
   0.1584862,
   0.2667529,
   0.4652364,
   1};
   Double_t Graph_fy238[51] = {
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
   0.0003717316,
   0.000729216,
   0.001715429,
   0.002593795,
   0.004828965,
   0.006933794,
   0.01063396,
   0.01627159,
   0.02326479,
   0.03197446,
   0.04535776,
   0.06131367,
   0.0899722,
   0.1313741,
   0.1839389,
   0.2539962,
   0.3509702,
   0.5091761,
   0.7346651,
   1};
   graph = new TGraph(51,Graph_fx238,Graph_fy238);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph238 = new TH1F("Graph_Graph238","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph238->SetMinimum(0);
   Graph_Graph238->SetMaximum(1.1);
   Graph_Graph238->SetDirectory(0);
   Graph_Graph238->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph238->SetLineColor(ci);
   Graph_Graph238->GetXaxis()->SetLabelFont(42);
   Graph_Graph238->GetXaxis()->SetTitleOffset(1);
   Graph_Graph238->GetXaxis()->SetTitleFont(42);
   Graph_Graph238->GetYaxis()->SetLabelFont(42);
   Graph_Graph238->GetYaxis()->SetTitleFont(42);
   Graph_Graph238->GetZaxis()->SetLabelFont(42);
   Graph_Graph238->GetZaxis()->SetTitleOffset(1);
   Graph_Graph238->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph238);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx239[51] = {
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
   2.379476e-09,
   7.36905e-08,
   4.7419e-07,
   2.095518e-06,
   5.057578e-05,
   0.0001025979,
   0.0001615177,
   0.0002707931,
   0.000813283,
   0.001174199,
   0.002196677,
   0.002967707,
   0.004385723,
   0.006784745,
   0.01000204,
   0.01646608,
   0.02549864,
   0.03692634,
   0.05404052,
   0.0795389,
   0.1171222,
   0.1809348,
   0.2980029,
   0.5187574,
   1};
   Double_t Graph_fy239[51] = {
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
   6.505003e-05,
   0.0001603832,
   0.0004211916,
   0.0007718526,
   0.001447501,
   0.00180118,
   0.002962596,
   0.004397553,
   0.008346833,
   0.01366338,
   0.02149339,
   0.03069468,
   0.04314298,
   0.0607607,
   0.08671305,
   0.1213431,
   0.1718257,
   0.243879,
   0.3432973,
   0.4851047,
   0.6987831,
   1};
   graph = new TGraph(51,Graph_fx239,Graph_fy239);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph239 = new TH1F("Graph_Graph239","Tagging Prioritized",100,0,1.1);
   Graph_Graph239->SetMinimum(0);
   Graph_Graph239->SetMaximum(1.1);
   Graph_Graph239->SetDirectory(0);
   Graph_Graph239->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph239->SetLineColor(ci);
   Graph_Graph239->GetXaxis()->SetLabelFont(42);
   Graph_Graph239->GetXaxis()->SetTitleOffset(1);
   Graph_Graph239->GetXaxis()->SetTitleFont(42);
   Graph_Graph239->GetYaxis()->SetLabelFont(42);
   Graph_Graph239->GetYaxis()->SetTitleFont(42);
   Graph_Graph239->GetZaxis()->SetLabelFont(42);
   Graph_Graph239->GetZaxis()->SetTitleOffset(1);
   Graph_Graph239->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph239);
   
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
   ROC_Aplanarity_18->Modified();
   ROC_Aplanarity_18->cd();
   ROC_Aplanarity_18->SetSelected(ROC_Aplanarity_18);
}
