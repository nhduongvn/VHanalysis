#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_16()
{
//=========Macro generated from canvas: ROC_H_dR_16/ROC_H_dR_16
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_16 = new TCanvas("ROC_H_dR_16", "ROC_H_dR_16",0,0,600,600);
   ROC_H_dR_16->SetHighLightColor(2);
   ROC_H_dR_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_16->SetFillColor(0);
   ROC_H_dR_16->SetBorderMode(0);
   ROC_H_dR_16->SetBorderSize(2);
   ROC_H_dR_16->SetGridx();
   ROC_H_dR_16->SetGridy();
   ROC_H_dR_16->SetLeftMargin(0.15709);
   ROC_H_dR_16->SetRightMargin(0.1234783);
   ROC_H_dR_16->SetBottomMargin(0.12);
   ROC_H_dR_16->SetFrameBorderMode(0);
   ROC_H_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[30] = {
   0,
   0,
   1.804371e-05,
   0.04657336,
   0.09729954,
   0.134969,
   0.1744291,
   0.2144747,
   0.2540148,
   0.2978354,
   0.3418283,
   0.395208,
   0.4563757,
   0.5224905,
   0.5929417,
   0.6825235,
   0.7788701,
   0.8347721,
   0.8761313,
   0.9081023,
   0.9330815,
   0.9571873,
   0.9737391,
   0.9842795,
   0.9921161,
   0.9965586,
   0.9983644,
   0.9994012,
   0.9999973,
   1};
   Double_t Graph_fy1[30] = {
   0,
   0,
   0,
   0.02522976,
   0.07747026,
   0.1568909,
   0.2535093,
   0.3481944,
   0.4335818,
   0.5072407,
   0.5628043,
   0.6098928,
   0.6622632,
   0.7182397,
   0.7763325,
   0.8476236,
   0.9191763,
   0.9521616,
   0.9705109,
   0.9822091,
   0.9879452,
   0.991176,
   0.9937498,
   0.9975861,
   0.997971,
   0.9990003,
   0.9998705,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx1,Graph_fy1);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Tagging Only",100,0,1.1);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   TLatex *   tex = new TLatex(0.1738249,0.3137271,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2);
      tex = new TLatex(0.2273823,0.4809227,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3);
      tex = new TLatex(0.2766549,0.6248286,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(4);
      tex = new TLatex(0.3340615,0.7737585,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(5);
      tex = new TLatex(0.4088192,0.8969785,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(6);
      tex = new TLatex(0.4592469,0.8952307,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(7);
      tex = new TLatex(0.528599,0.9268017,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(8);
      tex = new TLatex(0.6295496,0.9524418,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(9);
      tex = new TLatex(0.6965279,0.9765045,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(10);
      tex = new TLatex(0.7624897,0.9943945,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(11);
      tex = new TLatex(0.8353148,1.010978,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx13[30] = {
   0,
   0,
   5.299069e-07,
   0.0626389,
   0.1236924,
   0.1738249,
   0.2273823,
   0.2766549,
   0.3340615,
   0.4088192,
   0.4592469,
   0.528599,
   0.6295496,
   0.6965279,
   0.7624897,
   0.8353148,
   0.9046513,
   0.9420989,
   0.9610282,
   0.9800622,
   0.9872055,
   0.992042,
   0.9956446,
   0.9989466,
   0.9998183,
   0.999941,
   0.9999759,
   0.9999958,
   0.9999999,
   1};
   Double_t Graph_fy13[30] = {
   0,
   0,
   0,
   0.02170282,
   0.06755089,
   0.2137271,
   0.3809227,
   0.5248286,
   0.6737585,
   0.7969785,
   0.8552307,
   0.8868017,
   0.9124418,
   0.9365045,
   0.9543945,
   0.9709785,
   0.9864257,
   0.9956347,
   0.9990134,
   0.9996787,
   0.9996787,
   0.9996787,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(1.1);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[30] = {
   0,
   0,
   1.779786e-05,
   0.04659538,
   0.09690343,
   0.1350505,
   0.1743819,
   0.2144792,
   0.2542005,
   0.2980418,
   0.3421027,
   0.3949764,
   0.4562625,
   0.5222965,
   0.5928806,
   0.6827201,
   0.7789531,
   0.8351258,
   0.8768098,
   0.908611,
   0.9334563,
   0.9574094,
   0.9739146,
   0.9843496,
   0.9921408,
   0.9965354,
   0.9983844,
   0.9994115,
   0.9999973,
   1};
   Double_t Graph_fy14[30] = {
   0,
   0,
   0,
   0.02600895,
   0.07751149,
   0.1582105,
   0.25425,
   0.3486095,
   0.433887,
   0.5079075,
   0.5651765,
   0.6114874,
   0.663214,
   0.7185221,
   0.7761008,
   0.8466109,
   0.9163779,
   0.9495336,
   0.9696958,
   0.9816906,
   0.9879527,
   0.9912622,
   0.9937985,
   0.9975647,
   0.9980082,
   0.9990186,
   0.9998728,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Tagging Prioritized",100,0,1.1);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(1.1);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
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
   ROC_H_dR_16->Modified();
   ROC_H_dR_16->cd();
   ROC_H_dR_16->SetSelected(ROC_H_dR_16);
}
