#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_16()
{
//=========Macro generated from canvas: ROC_Aplanarity_16/ROC_Aplanarity_16
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_16 = new TCanvas("ROC_Aplanarity_16", "ROC_Aplanarity_16",0,0,600,600);
   ROC_Aplanarity_16->SetHighLightColor(2);
   ROC_Aplanarity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_16->SetFillColor(0);
   ROC_Aplanarity_16->SetBorderMode(0);
   ROC_Aplanarity_16->SetBorderSize(2);
   ROC_Aplanarity_16->SetGridx();
   ROC_Aplanarity_16->SetGridy();
   ROC_Aplanarity_16->SetLeftMargin(0.15709);
   ROC_Aplanarity_16->SetRightMargin(0.1234783);
   ROC_Aplanarity_16->SetBottomMargin(0.12);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx236[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.637273e-08,
   7.813433e-07,
   3.908997e-06,
   1.183582e-05,
   8.349526e-05,
   0.0001294423,
   0.00042945,
   0.0005590854,
   0.0009965915,
   0.001807365,
   0.002845952,
   0.004744831,
   0.006809387,
   0.010201,
   0.01582206,
   0.02432031,
   0.03661643,
   0.05254442,
   0.07966314,
   0.1248022,
   0.1960823,
   0.3103345,
   0.5453908,
   1};
   Double_t Graph_fy236[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001436841,
   0.0002210848,
   0.0002899478,
   0.0005797205,
   0.001794981,
   0.006112584,
   0.01298643,
   0.01862753,
   0.02865313,
   0.04212475,
   0.05937746,
   0.08727486,
   0.1228983,
   0.1697459,
   0.237214,
   0.33551,
   0.4839949,
   0.6937615,
   1};
   TGraph *graph = new TGraph(51,Graph_fx236,Graph_fy236);
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
   
   TH1F *Graph_Graph236 = new TH1F("Graph_Graph236","Tagging Only",100,0,1.1);
   Graph_Graph236->SetMinimum(0);
   Graph_Graph236->SetMaximum(1.1);
   Graph_Graph236->SetDirectory(0);
   Graph_Graph236->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph236->SetLineColor(ci);
   Graph_Graph236->GetXaxis()->SetLabelFont(42);
   Graph_Graph236->GetXaxis()->SetTitleOffset(1);
   Graph_Graph236->GetXaxis()->SetTitleFont(42);
   Graph_Graph236->GetYaxis()->SetLabelFont(42);
   Graph_Graph236->GetYaxis()->SetTitleFont(42);
   Graph_Graph236->GetZaxis()->SetLabelFont(42);
   Graph_Graph236->GetZaxis()->SetTitleOffset(1);
   Graph_Graph236->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph236);
   
   TLatex *   tex = new TLatex(0.1502237,0.4637154,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(237);
      tex = new TLatex(0.2539981,0.6037929,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(238);
      tex = new TLatex(0.5185945,0.8068267,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(239);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx240[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.886901e-08,
   7.605216e-07,
   2.111385e-06,
   5.537337e-06,
   0.0003647969,
   0.0003822339,
   0.0004153013,
   0.0005001126,
   0.0006588687,
   0.001215814,
   0.002251161,
   0.003405899,
   0.005157447,
   0.00646972,
   0.01075875,
   0.01718086,
   0.02715667,
   0.03968209,
   0.06210206,
   0.09731039,
   0.1502237,
   0.2539981,
   0.5185945,
   1};
   Double_t Graph_fy240[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.006783626,
   0.01699327,
   0.02555649,
   0.03855533,
   0.05808407,
   0.07533581,
   0.1012154,
   0.1510061,
   0.1977999,
   0.2695034,
   0.3637154,
   0.5037929,
   0.7068267,
   1};
   graph = new TGraph(51,Graph_fx240,Graph_fy240);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph240 = new TH1F("Graph_Graph240","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph240->SetMinimum(0);
   Graph_Graph240->SetMaximum(1.1);
   Graph_Graph240->SetDirectory(0);
   Graph_Graph240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph240->SetLineColor(ci);
   Graph_Graph240->GetXaxis()->SetLabelFont(42);
   Graph_Graph240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph240->GetXaxis()->SetTitleFont(42);
   Graph_Graph240->GetYaxis()->SetLabelFont(42);
   Graph_Graph240->GetYaxis()->SetTitleFont(42);
   Graph_Graph240->GetZaxis()->SetLabelFont(42);
   Graph_Graph240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph240->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph240);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx241[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.51505e-08,
   7.669552e-07,
   3.864611e-06,
   1.182224e-05,
   8.248482e-05,
   0.0001282068,
   0.0004237426,
   0.0005543562,
   0.0009891195,
   0.001791469,
   0.002826473,
   0.004723633,
   0.006772348,
   0.01014528,
   0.01578807,
   0.02430346,
   0.03652158,
   0.05247216,
   0.07964274,
   0.1248376,
   0.1963786,
   0.3103872,
   0.5454526,
   1};
   Double_t Graph_fy241[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0001410547,
   0.0002170389,
   0.0002846417,
   0.0005691115,
   0.001905581,
   0.006144172,
   0.01296182,
   0.01849969,
   0.028882,
   0.04276991,
   0.05977456,
   0.08769588,
   0.1228842,
   0.1695983,
   0.2367932,
   0.3342739,
   0.4838176,
   0.6937379,
   1};
   graph = new TGraph(51,Graph_fx241,Graph_fy241);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph241 = new TH1F("Graph_Graph241","Tagging Prioritized",100,0,1.1);
   Graph_Graph241->SetMinimum(0);
   Graph_Graph241->SetMaximum(1.1);
   Graph_Graph241->SetDirectory(0);
   Graph_Graph241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph241->SetLineColor(ci);
   Graph_Graph241->GetXaxis()->SetLabelFont(42);
   Graph_Graph241->GetXaxis()->SetTitleOffset(1);
   Graph_Graph241->GetXaxis()->SetTitleFont(42);
   Graph_Graph241->GetYaxis()->SetLabelFont(42);
   Graph_Graph241->GetYaxis()->SetTitleFont(42);
   Graph_Graph241->GetZaxis()->SetLabelFont(42);
   Graph_Graph241->GetZaxis()->SetTitleOffset(1);
   Graph_Graph241->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph241);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Aplanarity_16->Modified();
   ROC_Aplanarity_16->cd();
   ROC_Aplanarity_16->SetSelected(ROC_Aplanarity_16);
}
