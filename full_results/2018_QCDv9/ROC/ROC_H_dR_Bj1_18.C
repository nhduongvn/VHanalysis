#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_18/ROC_H_dR_Bj1_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_18 = new TCanvas("ROC_H_dR_Bj1_18", "ROC_H_dR_Bj1_18",0,0,600,600);
   ROC_H_dR_Bj1_18->SetHighLightColor(2);
   ROC_H_dR_Bj1_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_18->SetFillColor(0);
   ROC_H_dR_Bj1_18->SetBorderMode(0);
   ROC_H_dR_Bj1_18->SetBorderSize(2);
   ROC_H_dR_Bj1_18->SetGridx();
   ROC_H_dR_Bj1_18->SetGridy();
   ROC_H_dR_Bj1_18->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_18->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_18->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx92[30] = {
   0,
   0.02964192,
   0.1454709,
   0.2696199,
   0.3799334,
   0.4693195,
   0.5425225,
   0.6069939,
   0.6632792,
   0.7130007,
   0.7529213,
   0.7891925,
   0.8249823,
   0.855415,
   0.8835145,
   0.908784,
   0.9336011,
   0.9516011,
   0.9648695,
   0.9759695,
   0.9814332,
   0.9880393,
   0.9925065,
   0.9947181,
   0.9970354,
   0.9982462,
   0.9992451,
   0.999581,
   0.9998694,
   0.9999806};
   Double_t Graph_fy92[30] = {
   0,
   0.02852696,
   0.146081,
   0.284506,
   0.4050437,
   0.5160267,
   0.6065177,
   0.6816092,
   0.7357218,
   0.7849207,
   0.8232947,
   0.8572081,
   0.8857641,
   0.9095045,
   0.9327621,
   0.9520374,
   0.9728166,
   0.9840011,
   0.9894729,
   0.9931837,
   0.9959207,
   0.9976159,
   0.9981577,
   0.99891,
   0.999342,
   0.9996797,
   0.9998179,
   0.999989,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx92,Graph_fy92);
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
   
   TH1F *Graph_Graph92 = new TH1F("Graph_Graph92","Tagging Only",100,0,1.099979);
   Graph_Graph92->SetMinimum(0);
   Graph_Graph92->SetMaximum(1.1);
   Graph_Graph92->SetDirectory(0);
   Graph_Graph92->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph92->SetLineColor(ci);
   Graph_Graph92->GetXaxis()->SetLabelFont(42);
   Graph_Graph92->GetXaxis()->SetTitleOffset(1);
   Graph_Graph92->GetXaxis()->SetTitleFont(42);
   Graph_Graph92->GetYaxis()->SetLabelFont(42);
   Graph_Graph92->GetYaxis()->SetTitleFont(42);
   Graph_Graph92->GetZaxis()->SetLabelFont(42);
   Graph_Graph92->GetZaxis()->SetTitleOffset(1);
   Graph_Graph92->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph92);
   
   TLatex *   tex = new TLatex(0.2700553,0.3858371,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(93);
      tex = new TLatex(0.3804059,0.5071581,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(94);
      tex = new TLatex(0.4700302,0.6186245,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(95);
      tex = new TLatex(0.543563,0.7099708,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(96);
      tex = new TLatex(0.608034,0.7848628,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(97);
      tex = new TLatex(0.5572557,0.8493932,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(98);
      tex = new TLatex(0.627701,0.8625672,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(99);
      tex = new TLatex(0.685079,0.9118086,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(100);
      tex = new TLatex(0.7363802,0.9515145,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(101);
      tex = new TLatex(0.7863871,0.9774273,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(102);
      tex = new TLatex(0.8407106,0.9967755,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(103);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx104[30] = {
   0,
   0.0002722895,
   0.06082086,
   0.1621222,
   0.236188,
   0.322023,
   0.4119799,
   0.4882798,
   0.5572557,
   0.627701,
   0.685079,
   0.7363802,
   0.7863871,
   0.8407106,
   0.8797683,
   0.9134505,
   0.94454,
   0.9607082,
   0.9752423,
   0.9851757,
   0.9926273,
   0.9960293,
   0.9978119,
   0.9992019,
   0.9997059,
   0.9998768,
   0.9999888,
   0.9999985,
   0.9999997,
   0.9999999};
   Double_t Graph_fy104[30] = {
   0,
   0,
   0.02029881,
   0.09321842,
   0.2233271,
   0.3803112,
   0.534161,
   0.6593841,
   0.7493932,
   0.8225672,
   0.8718086,
   0.9115145,
   0.9374273,
   0.9567755,
   0.9683716,
   0.9790465,
   0.9888699,
   0.9943459,
   0.9974749,
   0.998475,
   0.9994752,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx104,Graph_fy104);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph104 = new TH1F("Graph_Graph104","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph104->SetMinimum(0);
   Graph_Graph104->SetMaximum(1.1);
   Graph_Graph104->SetDirectory(0);
   Graph_Graph104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph104->SetLineColor(ci);
   Graph_Graph104->GetXaxis()->SetLabelFont(42);
   Graph_Graph104->GetXaxis()->SetTitleOffset(1);
   Graph_Graph104->GetXaxis()->SetTitleFont(42);
   Graph_Graph104->GetYaxis()->SetLabelFont(42);
   Graph_Graph104->GetYaxis()->SetTitleFont(42);
   Graph_Graph104->GetZaxis()->SetLabelFont(42);
   Graph_Graph104->GetZaxis()->SetTitleOffset(1);
   Graph_Graph104->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph104);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx105[30] = {
   0,
   0.02966533,
   0.1458055,
   0.2700553,
   0.3804059,
   0.4700302,
   0.543563,
   0.608034,
   0.6641471,
   0.7136494,
   0.7534408,
   0.7896146,
   0.8252854,
   0.8555821,
   0.8839025,
   0.909006,
   0.9341694,
   0.9520052,
   0.9652221,
   0.9761902,
   0.9816228,
   0.988149,
   0.992611,
   0.9947807,
   0.9970275,
   0.9982258,
   0.9992446,
   0.9995876,
   0.999871,
   0.9999804};
   Double_t Graph_fy105[30] = {
   0,
   0.02877411,
   0.1462892,
   0.2858371,
   0.4071581,
   0.5186245,
   0.6099708,
   0.6848628,
   0.7389264,
   0.7876858,
   0.8259807,
   0.8593859,
   0.8876554,
   0.9107058,
   0.9342822,
   0.9531338,
   0.9731449,
   0.9841828,
   0.9895929,
   0.9933058,
   0.9959658,
   0.9976201,
   0.9981808,
   0.9989149,
   0.9993579,
   0.9996875,
   0.9998223,
   0.9999893,
   1,
   1};
   graph = new TGraph(30,Graph_fx105,Graph_fy105);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph105 = new TH1F("Graph_Graph105","Tagging Prioritized",100,0,1.099978);
   Graph_Graph105->SetMinimum(0);
   Graph_Graph105->SetMaximum(1.1);
   Graph_Graph105->SetDirectory(0);
   Graph_Graph105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph105->SetLineColor(ci);
   Graph_Graph105->GetXaxis()->SetLabelFont(42);
   Graph_Graph105->GetXaxis()->SetTitleOffset(1);
   Graph_Graph105->GetXaxis()->SetTitleFont(42);
   Graph_Graph105->GetYaxis()->SetLabelFont(42);
   Graph_Graph105->GetYaxis()->SetTitleFont(42);
   Graph_Graph105->GetZaxis()->SetLabelFont(42);
   Graph_Graph105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph105);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_H_dR_Bj1_18->Modified();
   ROC_H_dR_Bj1_18->cd();
   ROC_H_dR_Bj1_18->SetSelected(ROC_H_dR_Bj1_18);
}
