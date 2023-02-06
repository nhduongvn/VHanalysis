#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_16()
{
//=========Macro generated from canvas: ROC_Aplanarity_16/ROC_Aplanarity_16
//=========  (Tue Jan 24 15:01:33 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx2195[50] = {
   0,
   0.4878303,
   0.7112208,
   0.8240067,
   0.8879787,
   0.9268165,
   0.9523806,
   0.9673846,
   0.977687,
   0.9851735,
   0.9904228,
   0.994212,
   0.9966019,
   0.9982987,
   0.9989704,
   0.9993644,
   0.9996603,
   0.9998367,
   0.9999201,
   0.9999796,
   0.9999948,
   0.9999986,
   0.9999996,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy2195[50] = {
   0,
   0.2944629,
   0.4954081,
   0.6370797,
   0.7464819,
   0.8168309,
   0.8726101,
   0.908805,
   0.9360591,
   0.9548179,
   0.9689753,
   0.9812237,
   0.9868862,
   0.9923631,
   0.9953334,
   0.997005,
   0.9978969,
   0.9989546,
   0.9992361,
   0.9996503,
   0.9999896,
   0.9999896,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(50,Graph_fx2195,Graph_fy2195);
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
   
   TH1F *Graph_Graph2195 = new TH1F("Graph_Graph2195","Tagging Only",100,0,1.1);
   Graph_Graph2195->SetMinimum(0);
   Graph_Graph2195->SetMaximum(1.1);
   Graph_Graph2195->SetDirectory(0);
   Graph_Graph2195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2195->SetLineColor(ci);
   Graph_Graph2195->GetXaxis()->SetLabelFont(42);
   Graph_Graph2195->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2195->GetXaxis()->SetTitleFont(42);
   Graph_Graph2195->GetYaxis()->SetLabelFont(42);
   Graph_Graph2195->GetYaxis()->SetTitleFont(42);
   Graph_Graph2195->GetZaxis()->SetLabelFont(42);
   Graph_Graph2195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2195->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2195);
   
   TLatex *   tex = new TLatex(0.4878303,0.3544629,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2196);
      tex = new TLatex(0.7112208,0.5554081,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2197);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2198[50] = {
   0,
   0.5147673,
   0.7323823,
   0.837791,
   0.8941108,
   0.9377536,
   0.9604748,
   0.9719341,
   0.9819585,
   0.9874475,
   0.9931933,
   0.9974575,
   0.9986322,
   0.9991426,
   0.9994079,
   0.9998073,
   0.9998437,
   0.9999236,
   0.9999338,
   0.999939,
   0.9999983,
   0.9999994,
   0.9999998,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy2198[50] = {
   0,
   0.2509303,
   0.4446084,
   0.6029659,
   0.7173012,
   0.7895446,
   0.8556265,
   0.8965978,
   0.923959,
   0.9458462,
   0.9652783,
   0.9743266,
   0.9824254,
   0.9881348,
   0.9935317,
   0.995431,
   0.9963557,
   0.9989158,
   0.9990175,
   0.999109,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2198,Graph_fy2198);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2198 = new TH1F("Graph_Graph2198","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2198->SetMinimum(0);
   Graph_Graph2198->SetMaximum(1.1);
   Graph_Graph2198->SetDirectory(0);
   Graph_Graph2198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2198->SetLineColor(ci);
   Graph_Graph2198->GetXaxis()->SetLabelFont(42);
   Graph_Graph2198->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2198->GetXaxis()->SetTitleFont(42);
   Graph_Graph2198->GetYaxis()->SetLabelFont(42);
   Graph_Graph2198->GetYaxis()->SetTitleFont(42);
   Graph_Graph2198->GetZaxis()->SetLabelFont(42);
   Graph_Graph2198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2198->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2198);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2199[50] = {
   0,
   0.4868946,
   0.7109301,
   0.8242022,
   0.8882513,
   0.9272526,
   0.9526644,
   0.967642,
   0.9777877,
   0.9852201,
   0.9904541,
   0.9942155,
   0.9965753,
   0.9982455,
   0.998915,
   0.9993027,
   0.9996648,
   0.9998384,
   0.9999207,
   0.9999794,
   0.9999945,
   0.9999986,
   0.9999996,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy2199[50] = {
   0,
   0.3042251,
   0.5055391,
   0.6475736,
   0.7541517,
   0.8226047,
   0.877211,
   0.9128733,
   0.9387413,
   0.9578779,
   0.9711844,
   0.9829848,
   0.9881315,
   0.993151,
   0.9958236,
   0.997469,
   0.9982491,
   0.9991296,
   0.999364,
   0.9997089,
   0.9999913,
   0.9999913,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2199,Graph_fy2199);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2199 = new TH1F("Graph_Graph2199","Tagging Prioritized",100,0,1.1);
   Graph_Graph2199->SetMinimum(0);
   Graph_Graph2199->SetMaximum(1.1);
   Graph_Graph2199->SetDirectory(0);
   Graph_Graph2199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2199->SetLineColor(ci);
   Graph_Graph2199->GetXaxis()->SetLabelFont(42);
   Graph_Graph2199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2199->GetXaxis()->SetTitleFont(42);
   Graph_Graph2199->GetYaxis()->SetLabelFont(42);
   Graph_Graph2199->GetYaxis()->SetTitleFont(42);
   Graph_Graph2199->GetZaxis()->SetLabelFont(42);
   Graph_Graph2199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2199->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2199);
   
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
