#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_16()
{
//=========Macro generated from canvas: ROC_H_dR_16/ROC_H_dR_16
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
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
   1.685611e-05,
   0.04775757,
   0.0970507,
   0.1363572,
   0.1769404,
   0.215747,
   0.2545065,
   0.2980443,
   0.341668,
   0.3943255,
   0.4554719,
   0.5202022,
   0.5912271,
   0.6793888,
   0.7748751,
   0.8314785,
   0.8735001,
   0.905367,
   0.9306903,
   0.9541237,
   0.974068,
   0.9845214,
   0.9924179,
   0.9966399,
   0.9984875,
   0.9994835,
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
   
   TLatex *   tex = new TLatex(0.1792175,0.3137271,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2);
      tex = new TLatex(0.2368736,0.4809227,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3);
      tex = new TLatex(0.2856087,0.6248286,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(4);
      tex = new TLatex(0.3406268,0.7737585,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(5);
      tex = new TLatex(0.4180469,0.8969785,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(6);
      tex = new TLatex(0.4664805,0.8952307,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(7);
      tex = new TLatex(0.5334761,0.9268017,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(8);
      tex = new TLatex(0.6293943,0.9524418,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(9);
      tex = new TLatex(0.6980531,0.9765045,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(10);
      tex = new TLatex(0.7662292,0.9943945,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(11);
      tex = new TLatex(0.8387229,1.010978,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx13[30] = {
   0,
   0,
   5.079693e-07,
   0.06606383,
   0.1231098,
   0.1792175,
   0.2368736,
   0.2856087,
   0.3406268,
   0.4180469,
   0.4664805,
   0.5334761,
   0.6293943,
   0.6980531,
   0.7662292,
   0.8387229,
   0.9042747,
   0.9418345,
   0.9609391,
   0.9788686,
   0.9880082,
   0.9926483,
   0.9960921,
   0.9989323,
   0.9997969,
   0.999939,
   0.9999768,
   0.9999962,
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
   1.663227e-05,
   0.04772868,
   0.09666685,
   0.1363091,
   0.176745,
   0.2155939,
   0.2547432,
   0.298286,
   0.3419885,
   0.3942089,
   0.4554296,
   0.5201451,
   0.5912904,
   0.679723,
   0.7752617,
   0.8320138,
   0.8742766,
   0.905977,
   0.9311486,
   0.9544324,
   0.9742508,
   0.9845991,
   0.9924433,
   0.9966188,
   0.998506,
   0.9994923,
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
