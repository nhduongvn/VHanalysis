#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   1.200431e-07,
   4.583671e-06,
   6.786788e-05,
   0.0003179352,
   0.002601776,
   0.004186465,
   0.008960796,
   0.01982563,
   0.0325886,
   0.04694288,
   0.0672959,
   0.08994544,
   0.1195825,
   0.1563563,
   0.1971979,
   0.2451376,
   0.3011114,
   0.361433,
   0.4293264,
   0.5172715,
   0.6259847,
   0.7331671,
   0.8536755,
   0.957574,
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
   
   TLatex *   tex = new TLatex(0.1872313,0.5293538,"0.34");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.2414875,0.612594,"0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.2940733,0.6822801,"0.26");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.3581235,0.7623265,"0.22");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.4681251,0.8403141,"0.18");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.5716387,0.8580037,"0.14");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.6762599,0.9360008,"0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.8224822,1.004375,"0.06");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx274[26] = {
   0,
   6.61376e-08,
   2.228195e-06,
   1.681566e-05,
   0.0003237894,
   0.009442155,
   0.01012745,
   0.01316316,
   0.01940363,
   0.02570027,
   0.035266,
   0.05216974,
   0.07268867,
   0.09378515,
   0.117342,
   0.1477815,
   0.1872313,
   0.2414875,
   0.2940733,
   0.3581235,
   0.4681251,
   0.5716387,
   0.6762599,
   0.8224822,
   0.9507096,
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
   1.179521e-07,
   4.592488e-06,
   6.727036e-05,
   0.0003150894,
   0.002569927,
   0.004153138,
   0.00892623,
   0.01975003,
   0.03249799,
   0.04698095,
   0.06732082,
   0.09009956,
   0.1197082,
   0.1563924,
   0.1975001,
   0.2456444,
   0.3015263,
   0.3618688,
   0.4299262,
   0.5177913,
   0.6264868,
   0.7331763,
   0.8533377,
   0.9574673,
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
