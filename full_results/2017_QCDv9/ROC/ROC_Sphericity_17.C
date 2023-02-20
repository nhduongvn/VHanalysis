#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_17 = new TCanvas("ROC_Sphericity_17", "ROC_Sphericity_17",0,0,600,600);
   ROC_Sphericity_17->SetHighLightColor(2);
   ROC_Sphericity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_17->SetFillColor(0);
   ROC_Sphericity_17->SetBorderMode(0);
   ROC_Sphericity_17->SetBorderSize(2);
   ROC_Sphericity_17->SetGridx();
   ROC_Sphericity_17->SetGridy();
   ROC_Sphericity_17->SetLeftMargin(0.15709);
   ROC_Sphericity_17->SetRightMargin(0.1234783);
   ROC_Sphericity_17->SetBottomMargin(0.12);
   ROC_Sphericity_17->SetFrameBorderMode(0);
   ROC_Sphericity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx265[26] = {
   0,
   1.225877e-07,
   4.625724e-06,
   6.768258e-05,
   0.0003179978,
   0.001300834,
   0.002882444,
   0.007531027,
   0.01854362,
   0.03156442,
   0.04603951,
   0.06661117,
   0.08938814,
   0.1192712,
   0.1562578,
   0.1978337,
   0.2457937,
   0.3018612,
   0.3620968,
   0.4300566,
   0.5178342,
   0.6256466,
   0.7331004,
   0.8549674,
   0.9576087,
   1};
   Double_t Graph_fy265[26] = {
   0,
   0,
   0,
   6.995005e-05,
   0.0006568016,
   0.002836647,
   0.008201939,
   0.0203633,
   0.03780869,
   0.06350751,
   0.09061739,
   0.1274619,
   0.1716848,
   0.2167789,
   0.2683702,
   0.3284735,
   0.3930298,
   0.4615702,
   0.5345687,
   0.6162584,
   0.7050311,
   0.7924722,
   0.8738718,
   0.9482409,
   0.9887169,
   1};
   TGraph *graph = new TGraph(26,Graph_fx265,Graph_fy265);
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
   
   TH1F *Graph_Graph265 = new TH1F("Graph_Graph265","Tagging Only",100,0,1.1);
   Graph_Graph265->SetMinimum(0);
   Graph_Graph265->SetMaximum(1.1);
   Graph_Graph265->SetDirectory(0);
   Graph_Graph265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph265->SetLineColor(ci);
   Graph_Graph265->GetXaxis()->SetLabelFont(42);
   Graph_Graph265->GetXaxis()->SetTitleOffset(1);
   Graph_Graph265->GetXaxis()->SetTitleFont(42);
   Graph_Graph265->GetYaxis()->SetLabelFont(42);
   Graph_Graph265->GetYaxis()->SetTitleFont(42);
   Graph_Graph265->GetZaxis()->SetLabelFont(42);
   Graph_Graph265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph265->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph265);
   
   TLatex *   tex = new TLatex(0.1793388,0.5293538,"0.34");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.2334196,0.612594,"0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.2845629,0.6822801,"0.26");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.348793,0.7623265,"0.22");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.4629206,0.8403141,"0.18");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.5685457,0.8580037,"0.14");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.674985,0.9360008,"0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.8240337,1.004375,"0.06");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx274[26] = {
   0,
   6.732072e-08,
   2.221431e-06,
   1.701886e-05,
   0.0003245178,
   0.0005296476,
   0.001216363,
   0.004257461,
   0.01054077,
   0.016842,
   0.02655597,
   0.04388253,
   0.0649,
   0.08538855,
   0.10944,
   0.1406042,
   0.1793388,
   0.2334196,
   0.2845629,
   0.348793,
   0.4629206,
   0.5685457,
   0.674985,
   0.8240337,
   0.951056,
   1};
   Double_t Graph_fy274[26] = {
   0,
   0,
   0,
   0,
   0.001078147,
   0.004539308,
   0.01156641,
   0.02770929,
   0.04942164,
   0.0786899,
   0.1020249,
   0.1447649,
   0.1882963,
   0.2339416,
   0.2901636,
   0.3613324,
   0.4293538,
   0.512594,
   0.5822801,
   0.6623265,
   0.7403141,
   0.8180037,
   0.8960008,
   0.9643749,
   0.9926111,
   1};
   graph = new TGraph(26,Graph_fx274,Graph_fy274);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph274 = new TH1F("Graph_Graph274","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph274->SetMinimum(0);
   Graph_Graph274->SetMaximum(1.1);
   Graph_Graph274->SetDirectory(0);
   Graph_Graph274->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph274->SetLineColor(ci);
   Graph_Graph274->GetXaxis()->SetLabelFont(42);
   Graph_Graph274->GetXaxis()->SetTitleOffset(1);
   Graph_Graph274->GetXaxis()->SetTitleFont(42);
   Graph_Graph274->GetYaxis()->SetLabelFont(42);
   Graph_Graph274->GetYaxis()->SetTitleFont(42);
   Graph_Graph274->GetZaxis()->SetLabelFont(42);
   Graph_Graph274->GetZaxis()->SetTitleOffset(1);
   Graph_Graph274->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph274);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx275[26] = {
   0,
   1.204604e-07,
   4.636774e-06,
   6.708963e-05,
   0.0003151296,
   0.001291751,
   0.002872128,
   0.007522009,
   0.01849145,
   0.0314928,
   0.04611023,
   0.066665,
   0.08958609,
   0.1194376,
   0.1563333,
   0.1981966,
   0.2463626,
   0.3023381,
   0.3625955,
   0.4307378,
   0.518263,
   0.6261136,
   0.7330772,
   0.8545785,
   0.9574943,
   1};
   Double_t Graph_fy275[26] = {
   0,
   0,
   0,
   6.851376e-05,
   0.0006433155,
   0.003037545,
   0.008322935,
   0.02026236,
   0.03734954,
   0.06296332,
   0.09015098,
   0.1265636,
   0.1706531,
   0.2158222,
   0.2673353,
   0.3264628,
   0.3906165,
   0.4591723,
   0.5322638,
   0.6139648,
   0.7020712,
   0.7893016,
   0.8714976,
   0.947012,
   0.9881837,
   1};
   graph = new TGraph(26,Graph_fx275,Graph_fy275);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph275 = new TH1F("Graph_Graph275","Tagging Prioritized",100,0,1.1);
   Graph_Graph275->SetMinimum(0);
   Graph_Graph275->SetMaximum(1.1);
   Graph_Graph275->SetDirectory(0);
   Graph_Graph275->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph275->SetLineColor(ci);
   Graph_Graph275->GetXaxis()->SetLabelFont(42);
   Graph_Graph275->GetXaxis()->SetTitleOffset(1);
   Graph_Graph275->GetXaxis()->SetTitleFont(42);
   Graph_Graph275->GetYaxis()->SetLabelFont(42);
   Graph_Graph275->GetYaxis()->SetTitleFont(42);
   Graph_Graph275->GetZaxis()->SetLabelFont(42);
   Graph_Graph275->GetZaxis()->SetTitleOffset(1);
   Graph_Graph275->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph275);
   
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
   ROC_Sphericity_17->Modified();
   ROC_Sphericity_17->cd();
   ROC_Sphericity_17->SetSelected(ROC_Sphericity_17);
}
