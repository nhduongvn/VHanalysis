#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_18()
{
//=========Macro generated from canvas: ROC_Aplanarity_18/ROC_Aplanarity_18
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx248[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.178949e-08,
   1.231056e-07,
   9.752981e-07,
   4.20956e-06,
   1.66008e-05,
   3.894025e-05,
   0.0001777709,
   0.0003404507,
   0.0005648301,
   0.0009317999,
   0.002064696,
   0.003293358,
   0.005561427,
   0.008848418,
   0.01282219,
   0.01853219,
   0.02705952,
   0.03974008,
   0.06154346,
   0.08783483,
   0.1272371,
   0.1937447,
   0.3206465,
   0.5432336,
   1};
   Double_t Graph_fy248[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001771732,
   0.0001771732,
   0.0002153155,
   0.0003039368,
   0.0004997242,
   0.0006574125,
   0.001336144,
   0.002926434,
   0.005465596,
   0.01194699,
   0.01919913,
   0.02900119,
   0.03929762,
   0.05466544,
   0.07891234,
   0.1123633,
   0.1605363,
   0.2269987,
   0.3188376,
   0.4616799,
   0.6750638,
   1};
   TGraph *graph = new TGraph(51,Graph_fx248,Graph_fy248);
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
   
   TH1F *Graph_Graph248 = new TH1F("Graph_Graph248","Tagging Only",100,0,1.1);
   Graph_Graph248->SetMinimum(0);
   Graph_Graph248->SetMaximum(1.1);
   Graph_Graph248->SetDirectory(0);
   Graph_Graph248->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph248->SetLineColor(ci);
   Graph_Graph248->GetXaxis()->SetLabelFont(42);
   Graph_Graph248->GetXaxis()->SetTitleOffset(1);
   Graph_Graph248->GetXaxis()->SetTitleFont(42);
   Graph_Graph248->GetYaxis()->SetLabelFont(42);
   Graph_Graph248->GetYaxis()->SetTitleFont(42);
   Graph_Graph248->GetZaxis()->SetLabelFont(42);
   Graph_Graph248->GetZaxis()->SetTitleOffset(1);
   Graph_Graph248->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph248);
   
   TLatex *   tex = new TLatex(0.1862996,0.4447095,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(249);
      tex = new TLatex(0.3087907,0.5998607,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(250);
      tex = new TLatex(0.5025849,0.800929,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(251);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx252[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   4.126499e-07,
   2.47241e-06,
   7.313192e-06,
   1.743428e-05,
   3.769308e-05,
   9.3553e-05,
   0.0001559534,
   0.0007458061,
   0.00228462,
   0.003736509,
   0.005106359,
   0.008031388,
   0.01128595,
   0.01477346,
   0.02073574,
   0.03290684,
   0.0504336,
   0.06952409,
   0.1037269,
   0.1862996,
   0.3087907,
   0.5025849,
   1};
   Double_t Graph_fy252[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001135526,
   0.0005141601,
   0.001148906,
   0.003276561,
   0.005123365,
   0.01265484,
   0.02256049,
   0.02985993,
   0.04071793,
   0.05313925,
   0.08352603,
   0.1280685,
   0.1801513,
   0.2528945,
   0.3447095,
   0.4998607,
   0.700929,
   1};
   graph = new TGraph(51,Graph_fx252,Graph_fy252);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph252 = new TH1F("Graph_Graph252","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph252->SetMinimum(0);
   Graph_Graph252->SetMaximum(1.1);
   Graph_Graph252->SetDirectory(0);
   Graph_Graph252->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph252->SetLineColor(ci);
   Graph_Graph252->GetXaxis()->SetLabelFont(42);
   Graph_Graph252->GetXaxis()->SetTitleOffset(1);
   Graph_Graph252->GetXaxis()->SetTitleFont(42);
   Graph_Graph252->GetYaxis()->SetLabelFont(42);
   Graph_Graph252->GetYaxis()->SetTitleFont(42);
   Graph_Graph252->GetZaxis()->SetLabelFont(42);
   Graph_Graph252->GetZaxis()->SetTitleOffset(1);
   Graph_Graph252->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph252);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx253[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.15852e-08,
   1.209724e-07,
   9.820917e-07,
   4.207871e-06,
   1.657594e-05,
   3.897608e-05,
   0.0001761733,
   0.0003371446,
   0.00058699,
   0.0009523183,
   0.002071996,
   0.003297156,
   0.005547339,
   0.008819963,
   0.01280829,
   0.01850963,
   0.02727005,
   0.03993365,
   0.06165269,
   0.08790489,
   0.1273179,
   0.1940073,
   0.3206384,
   0.5432785,
   1};
   Double_t Graph_fy253[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001736242,
   0.0001736242,
   0.0002110025,
   0.0003270903,
   0.0005189559,
   0.0006734854,
   0.001338621,
   0.002888815,
   0.005404678,
   0.01175624,
   0.01918261,
   0.02887467,
   0.03903446,
   0.05430992,
   0.07895425,
   0.1125131,
   0.1600744,
   0.2267981,
   0.3185455,
   0.4611551,
   0.6763605,
   1};
   graph = new TGraph(51,Graph_fx253,Graph_fy253);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph253 = new TH1F("Graph_Graph253","Tagging Prioritized",100,0,1.1);
   Graph_Graph253->SetMinimum(0);
   Graph_Graph253->SetMaximum(1.1);
   Graph_Graph253->SetDirectory(0);
   Graph_Graph253->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph253->SetLineColor(ci);
   Graph_Graph253->GetXaxis()->SetLabelFont(42);
   Graph_Graph253->GetXaxis()->SetTitleOffset(1);
   Graph_Graph253->GetXaxis()->SetTitleFont(42);
   Graph_Graph253->GetYaxis()->SetLabelFont(42);
   Graph_Graph253->GetYaxis()->SetTitleFont(42);
   Graph_Graph253->GetZaxis()->SetLabelFont(42);
   Graph_Graph253->GetZaxis()->SetTitleOffset(1);
   Graph_Graph253->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph253);
   
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
