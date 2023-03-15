#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_18()
{
//=========Macro generated from canvas: ROC_Z_dR_18/ROC_Z_dR_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_18 = new TCanvas("ROC_Z_dR_18", "ROC_Z_dR_18",0,0,600,600);
   ROC_Z_dR_18->SetHighLightColor(2);
   ROC_Z_dR_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_18->SetFillColor(0);
   ROC_Z_dR_18->SetBorderMode(0);
   ROC_Z_dR_18->SetBorderSize(2);
   ROC_Z_dR_18->SetGridx();
   ROC_Z_dR_18->SetGridy();
   ROC_Z_dR_18->SetLeftMargin(0.15709);
   ROC_Z_dR_18->SetRightMargin(0.1234783);
   ROC_Z_dR_18->SetBottomMargin(0.12);
   ROC_Z_dR_18->SetFrameBorderMode(0);
   ROC_Z_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx131[30] = {
   0,
   0,
   2.844056e-05,
   0.07473434,
   0.1689872,
   0.235732,
   0.2905314,
   0.3455417,
   0.3955148,
   0.4440594,
   0.4929556,
   0.5434432,
   0.5960835,
   0.6540882,
   0.7215915,
   0.7964509,
   0.8689253,
   0.9123878,
   0.9401488,
   0.9607876,
   0.9757899,
   0.9839634,
   0.9922864,
   0.9954556,
   0.9975656,
   0.998649,
   0.9993225,
   0.9998852,
   0.9999719,
   1};
   Double_t Graph_fy131[30] = {
   0,
   0,
   0,
   0.04665712,
   0.1256667,
   0.2230477,
   0.3289815,
   0.4204104,
   0.4987704,
   0.5700455,
   0.6294672,
   0.6870787,
   0.7401207,
   0.7915795,
   0.8447413,
   0.905048,
   0.9580718,
   0.9772732,
   0.9868659,
   0.9921836,
   0.9953417,
   0.9972781,
   0.9985511,
   0.9992815,
   0.9997371,
   0.9998385,
   0.9999221,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx131,Graph_fy131);
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
   
   TH1F *Graph_Graph131 = new TH1F("Graph_Graph131","Tagging Only",100,0,1.1);
   Graph_Graph131->SetMinimum(0);
   Graph_Graph131->SetMaximum(1.1);
   Graph_Graph131->SetDirectory(0);
   Graph_Graph131->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph131->SetLineColor(ci);
   Graph_Graph131->GetXaxis()->SetLabelFont(42);
   Graph_Graph131->GetXaxis()->SetTitleOffset(1);
   Graph_Graph131->GetXaxis()->SetTitleFont(42);
   Graph_Graph131->GetYaxis()->SetLabelFont(42);
   Graph_Graph131->GetYaxis()->SetTitleFont(42);
   Graph_Graph131->GetZaxis()->SetLabelFont(42);
   Graph_Graph131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph131->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph131);
   
   TLatex *   tex = new TLatex(0.2540733,0.2804339,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(132);
      tex = new TLatex(0.3435393,0.4235565,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(133);
      tex = new TLatex(0.4194371,0.5829711,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(134);
      tex = new TLatex(0.5163402,0.7250592,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(135);
      tex = new TLatex(0.5941732,0.833507,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(136);
      tex = new TLatex(0.6572266,0.8557796,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(137);
      tex = new TLatex(0.719951,0.907415,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(138);
      tex = new TLatex(0.765388,0.9450589,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(139);
      tex = new TLatex(0.814569,0.974704,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(140);
      tex = new TLatex(0.8477377,0.9930024,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(141);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx142[30] = {
   0,
   0,
   4.473841e-05,
   0.1014785,
   0.2540733,
   0.3435393,
   0.4194371,
   0.5163402,
   0.5941732,
   0.6572266,
   0.719951,
   0.765388,
   0.814569,
   0.8477377,
   0.8850769,
   0.9130877,
   0.9552698,
   0.9744346,
   0.9829201,
   0.9898851,
   0.9929959,
   0.9953699,
   0.9992173,
   0.9994653,
   0.9997851,
   0.9998526,
   0.9999975,
   1,
   1,
   1};
   Double_t Graph_fy142[30] = {
   0,
   0,
   0,
   0.06494796,
   0.1804339,
   0.3235565,
   0.4829711,
   0.6250592,
   0.733507,
   0.8157796,
   0.867415,
   0.9050589,
   0.934704,
   0.9530024,
   0.9701154,
   0.983445,
   0.9933448,
   0.9966076,
   0.997619,
   0.9984915,
   0.9993723,
   0.9998903,
   0.999954,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx142,Graph_fy142);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph142 = new TH1F("Graph_Graph142","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph142->SetMinimum(0);
   Graph_Graph142->SetMaximum(1.1);
   Graph_Graph142->SetDirectory(0);
   Graph_Graph142->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph142->SetLineColor(ci);
   Graph_Graph142->GetXaxis()->SetLabelFont(42);
   Graph_Graph142->GetXaxis()->SetTitleOffset(1);
   Graph_Graph142->GetXaxis()->SetTitleFont(42);
   Graph_Graph142->GetYaxis()->SetLabelFont(42);
   Graph_Graph142->GetYaxis()->SetTitleFont(42);
   Graph_Graph142->GetZaxis()->SetLabelFont(42);
   Graph_Graph142->GetZaxis()->SetTitleOffset(1);
   Graph_Graph142->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph142);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx143[30] = {
   0,
   0,
   2.793113e-05,
   0.07504293,
   0.1687215,
   0.235289,
   0.2899128,
   0.344752,
   0.3946441,
   0.4436959,
   0.4924235,
   0.542885,
   0.5953778,
   0.653546,
   0.7207996,
   0.7956647,
   0.8680391,
   0.9115799,
   0.9397242,
   0.9603541,
   0.9753974,
   0.9834914,
   0.9922278,
   0.9954138,
   0.9975349,
   0.9986694,
   0.9993404,
   0.9998872,
   0.9999725,
   1};
   Double_t Graph_fy143[30] = {
   0,
   0,
   0,
   0.04680968,
   0.1258981,
   0.223255,
   0.3292067,
   0.4212374,
   0.4996976,
   0.5709858,
   0.6304973,
   0.6878889,
   0.7400751,
   0.7916966,
   0.8448428,
   0.9047882,
   0.9578809,
   0.9771058,
   0.9868572,
   0.9918929,
   0.9950225,
   0.9969356,
   0.9985766,
   0.999299,
   0.9997434,
   0.9998425,
   0.999924,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx143,Graph_fy143);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph143 = new TH1F("Graph_Graph143","Tagging Prioritized",100,0,1.1);
   Graph_Graph143->SetMinimum(0);
   Graph_Graph143->SetMaximum(1.1);
   Graph_Graph143->SetDirectory(0);
   Graph_Graph143->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph143->SetLineColor(ci);
   Graph_Graph143->GetXaxis()->SetLabelFont(42);
   Graph_Graph143->GetXaxis()->SetTitleOffset(1);
   Graph_Graph143->GetXaxis()->SetTitleFont(42);
   Graph_Graph143->GetYaxis()->SetLabelFont(42);
   Graph_Graph143->GetYaxis()->SetTitleFont(42);
   Graph_Graph143->GetZaxis()->SetLabelFont(42);
   Graph_Graph143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph143->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph143);
   
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
   ROC_Z_dR_18->Modified();
   ROC_Z_dR_18->cd();
   ROC_Z_dR_18->SetSelected(ROC_Z_dR_18);
}
