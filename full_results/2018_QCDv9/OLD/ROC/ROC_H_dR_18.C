#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_18()
{
//=========Macro generated from canvas: ROC_H_dR_18/ROC_H_dR_18
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_18 = new TCanvas("ROC_H_dR_18", "ROC_H_dR_18",0,0,600,600);
   ROC_H_dR_18->SetHighLightColor(2);
   ROC_H_dR_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_18->SetFillColor(0);
   ROC_H_dR_18->SetBorderMode(0);
   ROC_H_dR_18->SetBorderSize(2);
   ROC_H_dR_18->SetGridx();
   ROC_H_dR_18->SetGridy();
   ROC_H_dR_18->SetLeftMargin(0.15709);
   ROC_H_dR_18->SetRightMargin(0.1234783);
   ROC_H_dR_18->SetBottomMargin(0.12);
   ROC_H_dR_18->SetFrameBorderMode(0);
   ROC_H_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx266[30] = {
   0,
   0,
   9.182641e-06,
   0.03382629,
   0.07899336,
   0.1183639,
   0.1557386,
   0.1951123,
   0.2365304,
   0.2795753,
   0.3263037,
   0.378148,
   0.4385197,
   0.5057324,
   0.5814595,
   0.6679909,
   0.7633973,
   0.8242339,
   0.8672517,
   0.9051526,
   0.9343471,
   0.953592,
   0.9706344,
   0.9819203,
   0.9889884,
   0.9944067,
   0.9979866,
   0.9997574,
   0.9999812,
   1};
   Double_t Graph_fy266[30] = {
   0,
   0,
   0,
   0.01813963,
   0.05613661,
   0.1059872,
   0.164994,
   0.2366735,
   0.3154457,
   0.3932332,
   0.4697266,
   0.5465823,
   0.6192028,
   0.6919225,
   0.7670319,
   0.8439145,
   0.9212803,
   0.9554092,
   0.9736711,
   0.9838059,
   0.9896721,
   0.993804,
   0.9966534,
   0.9982054,
   0.999186,
   0.9994453,
   0.9997866,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx266,Graph_fy266);
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
   
   TH1F *Graph_Graph266 = new TH1F("Graph_Graph266","Tagging Only",100,0,1.1);
   Graph_Graph266->SetMinimum(0);
   Graph_Graph266->SetMaximum(1.1);
   Graph_Graph266->SetDirectory(0);
   Graph_Graph266->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph266->SetLineColor(ci);
   Graph_Graph266->GetXaxis()->SetLabelFont(42);
   Graph_Graph266->GetXaxis()->SetTitleOffset(1);
   Graph_Graph266->GetXaxis()->SetTitleFont(42);
   Graph_Graph266->GetYaxis()->SetLabelFont(42);
   Graph_Graph266->GetYaxis()->SetTitleFont(42);
   Graph_Graph266->GetZaxis()->SetLabelFont(42);
   Graph_Graph266->GetZaxis()->SetTitleOffset(1);
   Graph_Graph266->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph266);
   
   TLatex *   tex = new TLatex(0.07899336,0.1161366,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.1183639,0.1659872,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.1557386,0.224994,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.1951123,0.2966735,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.2365304,0.3754457,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.2795753,0.4532332,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.3263037,0.5297266,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
      tex = new TLatex(0.378148,0.6065823,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(0.4385197,0.6792028,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
      tex = new TLatex(0.5057324,0.7519225,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(276);
      tex = new TLatex(0.5814595,0.8270319,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(0.6679909,0.9039145,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(0.7633973,0.9812803,"3.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx280[30] = {
   0,
   0,
   2.010988e-07,
   0.04184534,
   0.09500846,
   0.1555566,
   0.2039381,
   0.2599749,
   0.3074603,
   0.3725095,
   0.436041,
   0.5083315,
   0.5698959,
   0.6533076,
   0.7436444,
   0.8186043,
   0.8782269,
   0.9235906,
   0.9525334,
   0.9735559,
   0.9813667,
   0.9900369,
   0.9960304,
   0.9991465,
   0.9995834,
   0.9998641,
   0.9999571,
   0.9999995,
   1,
   1};
   Double_t Graph_fy280[30] = {
   0,
   0,
   0,
   0.01026796,
   0.04937024,
   0.08696825,
   0.1677292,
   0.2723294,
   0.3858224,
   0.5222924,
   0.6475665,
   0.7510665,
   0.8228379,
   0.8764018,
   0.9260678,
   0.9540136,
   0.9833667,
   0.991449,
   0.9940259,
   0.996075,
   0.9971471,
   0.9991583,
   0.9995329,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx280,Graph_fy280);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph280 = new TH1F("Graph_Graph280","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph280->SetMinimum(0);
   Graph_Graph280->SetMaximum(1.1);
   Graph_Graph280->SetDirectory(0);
   Graph_Graph280->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph280->SetLineColor(ci);
   Graph_Graph280->GetXaxis()->SetLabelFont(42);
   Graph_Graph280->GetXaxis()->SetTitleOffset(1);
   Graph_Graph280->GetXaxis()->SetTitleFont(42);
   Graph_Graph280->GetYaxis()->SetLabelFont(42);
   Graph_Graph280->GetYaxis()->SetTitleFont(42);
   Graph_Graph280->GetZaxis()->SetLabelFont(42);
   Graph_Graph280->GetZaxis()->SetTitleOffset(1);
   Graph_Graph280->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph280);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx281[30] = {
   0,
   0,
   8.984532e-06,
   0.03400813,
   0.07888795,
   0.1185247,
   0.1556422,
   0.1954148,
   0.236563,
   0.2792041,
   0.3254917,
   0.3782489,
   0.4384633,
   0.5055003,
   0.5809156,
   0.6680967,
   0.763569,
   0.8244903,
   0.8675597,
   0.9058151,
   0.9351193,
   0.9538615,
   0.9706591,
   0.9818907,
   0.9889081,
   0.9944951,
   0.9980179,
   0.9997619,
   0.9999817,
   1};
   Double_t Graph_fy281[30] = {
   0,
   0,
   0,
   0.01878619,
   0.05603498,
   0.104578,
   0.1630477,
   0.2311661,
   0.3087777,
   0.3853649,
   0.4604858,
   0.5360068,
   0.6068524,
   0.6811347,
   0.7590867,
   0.8362696,
   0.915687,
   0.9511801,
   0.9708505,
   0.9818539,
   0.9882777,
   0.993273,
   0.9966105,
   0.9981108,
   0.9991532,
   0.9994242,
   0.9998125,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx281,Graph_fy281);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph281 = new TH1F("Graph_Graph281","Tagging Prioritized",100,0,1.1);
   Graph_Graph281->SetMinimum(0);
   Graph_Graph281->SetMaximum(1.1);
   Graph_Graph281->SetDirectory(0);
   Graph_Graph281->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph281->SetLineColor(ci);
   Graph_Graph281->GetXaxis()->SetLabelFont(42);
   Graph_Graph281->GetXaxis()->SetTitleOffset(1);
   Graph_Graph281->GetXaxis()->SetTitleFont(42);
   Graph_Graph281->GetYaxis()->SetLabelFont(42);
   Graph_Graph281->GetYaxis()->SetTitleFont(42);
   Graph_Graph281->GetZaxis()->SetLabelFont(42);
   Graph_Graph281->GetZaxis()->SetTitleOffset(1);
   Graph_Graph281->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph281);
   
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
   ROC_H_dR_18->Modified();
   ROC_H_dR_18->cd();
   ROC_H_dR_18->SetSelected(ROC_H_dR_18);
}
