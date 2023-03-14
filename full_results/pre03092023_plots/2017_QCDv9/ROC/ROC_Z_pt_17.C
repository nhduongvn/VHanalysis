#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_17()
{
//=========Macro generated from canvas: ROC_Z_pt_17/ROC_Z_pt_17
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   2.438064e-07,
   5.015858e-07,
   9.048306e-07,
   1.391163e-06,
   1.773868e-06,
   2.612706e-06,
   3.515121e-06,
   4.829626e-06,
   6.380984e-06,
   8.531172e-06,
   1.126244e-05,
   1.580241e-05,
   2.091946e-05,
   2.728929e-05,
   3.574755e-05,
   4.771209e-05,
   6.40858e-05,
   8.642767e-05,
   0.0001145097,
   0.0001551457,
   0.0002083314,
   0.0002843257,
   0.0003889048,
   0.0005349892,
   0.0007443873,
   0.001117698,
   0.001577404,
   0.002256773,
   0.003300889,
   0.005027312,
   0.007718262,
   0.01225635,
   0.02012934,
   0.03520878,
   0.06574999,
   0.1324543,
   0.2896717,
   0.6020047,
   0.843608,
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
   
   TLatex *   tex = new TLatex(0.3098829,0.6606242,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(227);
      tex = new TLatex(0.6853001,0.9039122,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(228);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx229[41] = {
   0,
   3.148499e-07,
   6.285695e-07,
   1.152818e-06,
   1.454194e-06,
   2.165612e-06,
   2.86088e-06,
   4.229851e-06,
   5.548169e-06,
   7.374648e-06,
   9.309473e-06,
   1.256671e-05,
   1.714721e-05,
   2.375718e-05,
   3.077581e-05,
   4.002029e-05,
   5.171857e-05,
   6.809874e-05,
   8.848717e-05,
   0.0001135369,
   0.00015454,
   0.0002061412,
   0.000285895,
   0.0003871717,
   0.0005239358,
   0.0007501562,
   0.001013701,
   0.001421572,
   0.002075233,
   0.003071501,
   0.004723107,
   0.007482359,
   0.01206513,
   0.01969913,
   0.03474944,
   0.06469229,
   0.1313323,
   0.3098829,
   0.6853001,
   0.8835124,
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
   2.395596e-07,
   5.020828e-07,
   8.983037e-07,
   1.398535e-06,
   1.781652e-06,
   2.7199e-06,
   3.661469e-06,
   4.988539e-06,
   6.579876e-06,
   8.80765e-06,
   1.15901e-05,
   1.624962e-05,
   2.14758e-05,
   2.804001e-05,
   3.679078e-05,
   4.898228e-05,
   6.587521e-05,
   8.898613e-05,
   0.0001177086,
   0.0001595989,
   0.0002145887,
   0.0002925977,
   0.0003989659,
   0.0005489543,
   0.0007628704,
   0.001141977,
   0.001613103,
   0.00230455,
   0.003361788,
   0.005111794,
   0.00784373,
   0.01242034,
   0.02050813,
   0.03571559,
   0.06646163,
   0.1334034,
   0.2908062,
   0.603173,
   0.8446559,
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
