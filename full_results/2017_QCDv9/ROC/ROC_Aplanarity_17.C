#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_17()
{
//=========Macro generated from canvas: ROC_Aplanarity_17/ROC_Aplanarity_17
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_17 = new TCanvas("ROC_Aplanarity_17", "ROC_Aplanarity_17",0,0,600,600);
   ROC_Aplanarity_17->SetHighLightColor(2);
   ROC_Aplanarity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_17->SetFillColor(0);
   ROC_Aplanarity_17->SetBorderMode(0);
   ROC_Aplanarity_17->SetBorderSize(2);
   ROC_Aplanarity_17->SetGridx();
   ROC_Aplanarity_17->SetGridy();
   ROC_Aplanarity_17->SetLeftMargin(0.15709);
   ROC_Aplanarity_17->SetRightMargin(0.1234783);
   ROC_Aplanarity_17->SetBottomMargin(0.12);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx242[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.745774e-07,
   1.075895e-06,
   4.543883e-06,
   1.566459e-05,
   4.026224e-05,
   0.0001969099,
   0.0004197594,
   0.0005917038,
   0.002367943,
   0.003163506,
   0.004216164,
   0.005765648,
   0.008636052,
   0.01364091,
   0.01891135,
   0.03115784,
   0.04229863,
   0.06323081,
   0.08928239,
   0.1355623,
   0.2100663,
   0.3322609,
   0.5588166,
   1};
   Double_t Graph_fy242[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.623071e-05,
   0.00010048,
   0.0005772152,
   0.001056585,
   0.002346972,
   0.003530579,
   0.005487445,
   0.008629235,
   0.01444931,
   0.0180147,
   0.02738951,
   0.04093835,
   0.05853428,
   0.08231354,
   0.1157975,
   0.1689187,
   0.233082,
   0.3272445,
   0.4659054,
   0.6895313,
   1};
   TGraph *graph = new TGraph(51,Graph_fx242,Graph_fy242);
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
   
   TH1F *Graph_Graph242 = new TH1F("Graph_Graph242","Tagging Only",100,0,1.1);
   Graph_Graph242->SetMinimum(0);
   Graph_Graph242->SetMaximum(1.1);
   Graph_Graph242->SetDirectory(0);
   Graph_Graph242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph242->SetLineColor(ci);
   Graph_Graph242->GetXaxis()->SetLabelFont(42);
   Graph_Graph242->GetXaxis()->SetTitleOffset(1);
   Graph_Graph242->GetXaxis()->SetTitleFont(42);
   Graph_Graph242->GetYaxis()->SetLabelFont(42);
   Graph_Graph242->GetYaxis()->SetTitleFont(42);
   Graph_Graph242->GetZaxis()->SetLabelFont(42);
   Graph_Graph242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph242->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph242);
   
   TLatex *   tex = new TLatex(0.1776288,0.474383,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(243);
      tex = new TLatex(0.2810597,0.6069965,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(244);
      tex = new TLatex(0.5298205,0.8358811,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(245);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx246[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.61376e-08,
   5.542332e-07,
   2.471289e-06,
   7.585775e-06,
   1.747084e-05,
   0.0002887263,
   0.000324658,
   0.0004178521,
   0.009454248,
   0.009860708,
   0.01033306,
   0.01103924,
   0.01485477,
   0.01787581,
   0.02108709,
   0.0279921,
   0.0347957,
   0.0460911,
   0.06929824,
   0.1210871,
   0.1776288,
   0.2810597,
   0.5298205,
   1};
   Double_t Graph_fy246[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001104316,
   0.001104316,
   0.002925126,
   0.003151147,
   0.004808297,
   0.01088538,
   0.0171371,
   0.01980506,
   0.03150323,
   0.05133993,
   0.07635307,
   0.1031147,
   0.1412399,
   0.1921256,
   0.2663576,
   0.374383,
   0.5069965,
   0.7358811,
   1};
   graph = new TGraph(51,Graph_fx246,Graph_fy246);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph246 = new TH1F("Graph_Graph246","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph246->SetMinimum(0);
   Graph_Graph246->SetMaximum(1.1);
   Graph_Graph246->SetDirectory(0);
   Graph_Graph246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph246->SetLineColor(ci);
   Graph_Graph246->GetXaxis()->SetLabelFont(42);
   Graph_Graph246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph246->GetXaxis()->SetTitleFont(42);
   Graph_Graph246->GetYaxis()->SetLabelFont(42);
   Graph_Graph246->GetYaxis()->SetTitleFont(42);
   Graph_Graph246->GetZaxis()->SetLabelFont(42);
   Graph_Graph246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph246);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx247[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.715365e-07,
   1.089132e-06,
   4.538872e-06,
   1.561408e-05,
   4.019212e-05,
   0.0001947147,
   0.0004224712,
   0.0005948881,
   0.002344905,
   0.003135843,
   0.004181156,
   0.005723573,
   0.008575877,
   0.01353239,
   0.01877622,
   0.03096429,
   0.04205139,
   0.06297211,
   0.08912085,
   0.1354288,
   0.2098802,
   0.3323532,
   0.5589738,
   1};
   Double_t Graph_fy247[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.507612e-05,
   9.841685e-05,
   0.0005653632,
   0.00103489,
   0.002329044,
   0.003488348,
   0.005405033,
   0.008512554,
   0.01423173,
   0.01785271,
   0.02707989,
   0.04044832,
   0.05774089,
   0.08114778,
   0.1144411,
   0.1675832,
   0.2315383,
   0.3252294,
   0.4632985,
   0.6870897,
   1};
   graph = new TGraph(51,Graph_fx247,Graph_fy247);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph247 = new TH1F("Graph_Graph247","Tagging Prioritized",100,0,1.1);
   Graph_Graph247->SetMinimum(0);
   Graph_Graph247->SetMaximum(1.1);
   Graph_Graph247->SetDirectory(0);
   Graph_Graph247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph247->SetLineColor(ci);
   Graph_Graph247->GetXaxis()->SetLabelFont(42);
   Graph_Graph247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph247->GetXaxis()->SetTitleFont(42);
   Graph_Graph247->GetYaxis()->SetLabelFont(42);
   Graph_Graph247->GetYaxis()->SetTitleFont(42);
   Graph_Graph247->GetZaxis()->SetLabelFont(42);
   Graph_Graph247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph247);
   
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
   ROC_Aplanarity_17->Modified();
   ROC_Aplanarity_17->cd();
   ROC_Aplanarity_17->SetSelected(ROC_Aplanarity_17);
}
