#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_17()
{
//=========Macro generated from canvas: ROC_Z_pt_17/ROC_Z_pt_17
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_17 = new TCanvas("ROC_Z_pt_17", "ROC_Z_pt_17",0,0,600,600);
   ROC_Z_pt_17->SetHighLightColor(2);
   ROC_Z_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_17->SetFillColor(0);
   ROC_Z_pt_17->SetBorderMode(0);
   ROC_Z_pt_17->SetBorderSize(2);
   ROC_Z_pt_17->SetGridx();
   ROC_Z_pt_17->SetGridy();
   ROC_Z_pt_17->SetLeftMargin(0.15709);
   ROC_Z_pt_17->SetRightMargin(0.1234783);
   ROC_Z_pt_17->SetBottomMargin(0.12);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx226[41] = {
   0,
   2.440811e-07,
   5.025723e-07,
   9.074254e-07,
   1.395406e-06,
   1.771637e-06,
   2.611256e-06,
   3.516732e-06,
   4.834979e-06,
   6.390656e-06,
   8.542961e-06,
   1.125939e-05,
   1.580555e-05,
   2.089895e-05,
   2.726592e-05,
   3.57044e-05,
   4.766905e-05,
   6.40442e-05,
   8.634748e-05,
   0.0001143904,
   0.0001550112,
   0.0002081849,
   0.0002837478,
   0.0003882721,
   0.0005345915,
   0.0007455539,
   0.001117841,
   0.001584237,
   0.002269609,
   0.003317952,
   0.005057621,
   0.007754326,
   0.0122981,
   0.02014834,
   0.03523244,
   0.06575489,
   0.1323394,
   0.2899804,
   0.6045484,
   0.8436766,
   1};
   Double_t Graph_fy226[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002158415,
   0.0004799861,
   0.0004799861,
   0.0004799861,
   0.0004799861,
   0.0004799861,
   0.0005080771,
   0.0005080771,
   0.0005080771,
   0.0007351849,
   0.0007351849,
   0.000772013,
   0.001534022,
   0.002262048,
   0.003277829,
   0.004154028,
   0.00582276,
   0.01026602,
   0.02115119,
   0.04519359,
   0.08511924,
   0.1564516,
   0.288056,
   0.4831926,
   0.7372788,
   0.9190957,
   1};
   TGraph *graph = new TGraph(41,Graph_fx226,Graph_fy226);
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
   
   TH1F *Graph_Graph226 = new TH1F("Graph_Graph226","Tagging Only",100,0,1.1);
   Graph_Graph226->SetMinimum(0);
   Graph_Graph226->SetMaximum(1.1);
   Graph_Graph226->SetDirectory(0);
   Graph_Graph226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph226->SetLineColor(ci);
   Graph_Graph226->GetXaxis()->SetLabelFont(42);
   Graph_Graph226->GetXaxis()->SetTitleOffset(1);
   Graph_Graph226->GetXaxis()->SetTitleFont(42);
   Graph_Graph226->GetYaxis()->SetLabelFont(42);
   Graph_Graph226->GetYaxis()->SetTitleFont(42);
   Graph_Graph226->GetZaxis()->SetLabelFont(42);
   Graph_Graph226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph226);
   
   TLatex *   tex = new TLatex(0.312176,0.6606242,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(227);
      tex = new TLatex(0.6944378,0.9039122,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(228);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx229[41] = {
   0,
   3.153052e-07,
   6.294784e-07,
   1.16068e-06,
   1.46578e-06,
   2.183141e-06,
   2.880274e-06,
   4.252933e-06,
   5.5762e-06,
   7.411764e-06,
   9.354685e-06,
   1.264045e-05,
   1.720109e-05,
   2.384318e-05,
   3.091232e-05,
   4.006683e-05,
   5.17844e-05,
   6.810193e-05,
   8.856693e-05,
   0.0001135952,
   0.0001545895,
   0.0002063891,
   0.0002864532,
   0.0003880548,
   0.0005254789,
   0.0007539481,
   0.001011867,
   0.001427565,
   0.002091554,
   0.003069271,
   0.004746345,
   0.007495483,
   0.01209957,
   0.0197042,
   0.0347893,
   0.06473925,
   0.1314927,
   0.312176,
   0.6944378,
   0.8786312,
   1};
   Double_t Graph_fy229[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0008793673,
   0.00171341,
   0.00373241,
   0.005844102,
   0.007899762,
   0.0173958,
   0.04660105,
   0.08322291,
   0.1672185,
   0.3220219,
   0.5606242,
   0.8639122,
   0.9754009,
   1};
   graph = new TGraph(41,Graph_fx229,Graph_fy229);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph229 = new TH1F("Graph_Graph229","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph229->SetMinimum(0);
   Graph_Graph229->SetMaximum(1.1);
   Graph_Graph229->SetDirectory(0);
   Graph_Graph229->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph229->SetLineColor(ci);
   Graph_Graph229->GetXaxis()->SetLabelFont(42);
   Graph_Graph229->GetXaxis()->SetTitleOffset(1);
   Graph_Graph229->GetXaxis()->SetTitleFont(42);
   Graph_Graph229->GetYaxis()->SetLabelFont(42);
   Graph_Graph229->GetYaxis()->SetTitleFont(42);
   Graph_Graph229->GetZaxis()->SetLabelFont(42);
   Graph_Graph229->GetZaxis()->SetTitleOffset(1);
   Graph_Graph229->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph229);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx230[41] = {
   0,
   2.398454e-07,
   5.032302e-07,
   9.010576e-07,
   1.403855e-06,
   1.780631e-06,
   2.719624e-06,
   3.658072e-06,
   4.989462e-06,
   6.586643e-06,
   8.816899e-06,
   1.158048e-05,
   1.623756e-05,
   2.144139e-05,
   2.800506e-05,
   3.673911e-05,
   4.892872e-05,
   6.582369e-05,
   8.890731e-05,
   0.0001175864,
   0.0001594661,
   0.0002144478,
   0.0002920553,
   0.0003983672,
   0.0005486274,
   0.0007641233,
   0.001142408,
   0.0016207,
   0.002317563,
   0.003379927,
   0.005142954,
   0.007881443,
   0.01246173,
   0.02053783,
   0.03575024,
   0.06647931,
   0.1333043,
   0.2911268,
   0.6057919,
   0.8447188,
   1};
   Double_t Graph_fy230[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002114097,
   0.0004701306,
   0.0004701306,
   0.0004701306,
   0.0004701306,
   0.0004701306,
   0.0004976447,
   0.0004976447,
   0.0004976447,
   0.0007200893,
   0.0007200893,
   0.0007561612,
   0.001502524,
   0.002215601,
   0.003188878,
   0.004244992,
   0.006110539,
   0.01072163,
   0.02172005,
   0.04687271,
   0.08666174,
   0.1579863,
   0.2897744,
   0.4845265,
   0.7382424,
   0.9199764,
   1};
   graph = new TGraph(41,Graph_fx230,Graph_fy230);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph230 = new TH1F("Graph_Graph230","Tagging Prioritized",100,0,1.1);
   Graph_Graph230->SetMinimum(0);
   Graph_Graph230->SetMaximum(1.1);
   Graph_Graph230->SetDirectory(0);
   Graph_Graph230->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph230->SetLineColor(ci);
   Graph_Graph230->GetXaxis()->SetLabelFont(42);
   Graph_Graph230->GetXaxis()->SetTitleOffset(1);
   Graph_Graph230->GetXaxis()->SetTitleFont(42);
   Graph_Graph230->GetYaxis()->SetLabelFont(42);
   Graph_Graph230->GetYaxis()->SetTitleFont(42);
   Graph_Graph230->GetZaxis()->SetLabelFont(42);
   Graph_Graph230->GetZaxis()->SetTitleOffset(1);
   Graph_Graph230->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph230);
   
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
   ROC_Z_pt_17->Modified();
   ROC_Z_pt_17->cd();
   ROC_Z_pt_17->SetSelected(ROC_Z_pt_17);
}
