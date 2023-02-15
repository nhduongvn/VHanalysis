#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_16/ROC_H_dR_Bj1_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_16 = new TCanvas("ROC_H_dR_Bj1_16", "ROC_H_dR_Bj1_16",0,0,600,600);
   ROC_H_dR_Bj1_16->SetHighLightColor(2);
   ROC_H_dR_Bj1_16->Range(-0.2901864,-0.1615385,1.238789,1.184615);
   ROC_H_dR_Bj1_16->SetFillColor(0);
   ROC_H_dR_Bj1_16->SetBorderMode(0);
   ROC_H_dR_Bj1_16->SetBorderSize(2);
   ROC_H_dR_Bj1_16->SetGridx();
   ROC_H_dR_Bj1_16->SetGridy();
   ROC_H_dR_Bj1_16->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_16->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_16->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_16->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx64[30] = {
   0,
   0.03207529,
   0.1433363,
   0.2664391,
   0.3674294,
   0.4552539,
   0.5307425,
   0.5954159,
   0.6563467,
   0.7042152,
   0.7420134,
   0.7796882,
   0.8123389,
   0.8459139,
   0.8750472,
   0.9039789,
   0.9298495,
   0.9487246,
   0.9627193,
   0.972141,
   0.9798189,
   0.9849255,
   0.9899668,
   0.9941773,
   0.9958401,
   0.9973429,
   0.9981975,
   0.9995207,
   0.999751,
   0.9999273};
   Double_t Graph_fy64[30] = {
   0,
   0.0301523,
   0.1403698,
   0.2810638,
   0.4025889,
   0.5133826,
   0.5998531,
   0.6765602,
   0.7360577,
   0.7838123,
   0.8195444,
   0.8512736,
   0.8815921,
   0.9068312,
   0.9316037,
   0.9541109,
   0.9722281,
   0.9818737,
   0.9893582,
   0.9924882,
   0.9954593,
   0.9973284,
   0.9987829,
   0.9990477,
   0.9993828,
   0.9996914,
   0.999947,
   0.999947,
   0.9999735,
   1};
   TGraph *graph = new TGraph(30,Graph_fx64,Graph_fy64);
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
   
   TH1F *Graph_Graph64 = new TH1F("Graph_Graph64","Tagging Only",100,0,1.09992);
   Graph_Graph64->SetMinimum(0);
   Graph_Graph64->SetMaximum(1.1);
   Graph_Graph64->SetDirectory(0);
   Graph_Graph64->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph64->SetLineColor(ci);
   Graph_Graph64->GetXaxis()->SetLabelFont(42);
   Graph_Graph64->GetXaxis()->SetTitleOffset(1);
   Graph_Graph64->GetXaxis()->SetTitleFont(42);
   Graph_Graph64->GetYaxis()->SetLabelFont(42);
   Graph_Graph64->GetYaxis()->SetTitleFont(42);
   Graph_Graph64->GetZaxis()->SetLabelFont(42);
   Graph_Graph64->GetZaxis()->SetTitleOffset(1);
   Graph_Graph64->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph64);
   
   TLatex *   tex = new TLatex(0.2657889,0.3848261,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(65);
      tex = new TLatex(0.3668116,0.505984,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(66);
      tex = new TLatex(0.4541624,0.6175612,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(67);
      tex = new TLatex(0.5291657,0.7048641,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(68);
      tex = new TLatex(0.4541272,0.7811753,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(69);
      tex = new TLatex(0.5241141,0.8778314,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(70);
      tex = new TLatex(0.5910759,0.8775208,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(71);
      tex = new TLatex(0.6518049,0.9186447,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(72);
      tex = new TLatex(0.6958156,0.9558646,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(73);
      tex = new TLatex(0.7521607,0.9737905,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(74);
      tex = new TLatex(0.8105462,0.9895711,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(75);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx76[30] = {
   0,
   2.577459e-07,
   0.04949702,
   0.1399249,
   0.2230674,
   0.2903803,
   0.3717844,
   0.4541272,
   0.5241141,
   0.5910759,
   0.6518049,
   0.6958156,
   0.7521607,
   0.8105462,
   0.8552683,
   0.8897102,
   0.9283068,
   0.9538133,
   0.9668674,
   0.9738803,
   0.985873,
   0.9879053,
   0.9956485,
   0.9978599,
   0.9993681,
   0.9997772,
   0.9998878,
   0.9999008,
   0.9999936,
   0.9999938};
   Double_t Graph_fy76[30] = {
   0,
   0,
   0.01080619,
   0.09099754,
   0.2268986,
   0.3763638,
   0.5444258,
   0.6811753,
   0.7778314,
   0.8375208,
   0.8786447,
   0.9158646,
   0.9337905,
   0.9495711,
   0.9623494,
   0.9792005,
   0.990393,
   0.9956251,
   0.9971264,
   0.997384,
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
   graph = new TGraph(30,Graph_fx76,Graph_fy76);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph76 = new TH1F("Graph_Graph76","Mass-Matching Prioritized",100,0,1.099993);
   Graph_Graph76->SetMinimum(0);
   Graph_Graph76->SetMaximum(1.1);
   Graph_Graph76->SetDirectory(0);
   Graph_Graph76->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph76->SetLineColor(ci);
   Graph_Graph76->GetXaxis()->SetLabelFont(42);
   Graph_Graph76->GetXaxis()->SetTitleOffset(1);
   Graph_Graph76->GetXaxis()->SetTitleFont(42);
   Graph_Graph76->GetYaxis()->SetLabelFont(42);
   Graph_Graph76->GetYaxis()->SetTitleFont(42);
   Graph_Graph76->GetZaxis()->SetLabelFont(42);
   Graph_Graph76->GetZaxis()->SetTitleOffset(1);
   Graph_Graph76->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph76);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx77[30] = {
   0,
   0.03209698,
   0.1432144,
   0.2657889,
   0.3668116,
   0.4541624,
   0.5291657,
   0.5943974,
   0.6551057,
   0.703635,
   0.7422339,
   0.7799925,
   0.8125498,
   0.8460184,
   0.8752572,
   0.9032052,
   0.9297569,
   0.9485837,
   0.9624679,
   0.9718075,
   0.9793915,
   0.9851093,
   0.9900647,
   0.99424,
   0.9958766,
   0.997374,
   0.9982141,
   0.9995186,
   0.9997456,
   0.9999185};
   Double_t Graph_fy77[30] = {
   0,
   0.03060773,
   0.1430069,
   0.2848261,
   0.405984,
   0.5175612,
   0.6048641,
   0.6810819,
   0.7393376,
   0.7864005,
   0.8217403,
   0.8528018,
   0.883511,
   0.9082577,
   0.9329448,
   0.9552271,
   0.9731546,
   0.9826045,
   0.9893562,
   0.9924575,
   0.9953524,
   0.9973195,
   0.9987625,
   0.9990205,
   0.9993986,
   0.9996993,
   0.9999484,
   0.9999484,
   0.9999742,
   1};
   graph = new TGraph(30,Graph_fx77,Graph_fy77);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph77 = new TH1F("Graph_Graph77","Tagging Prioritized",100,0,1.09991);
   Graph_Graph77->SetMinimum(0);
   Graph_Graph77->SetMaximum(1.1);
   Graph_Graph77->SetDirectory(0);
   Graph_Graph77->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph77->SetLineColor(ci);
   Graph_Graph77->GetXaxis()->SetLabelFont(42);
   Graph_Graph77->GetXaxis()->SetTitleOffset(1);
   Graph_Graph77->GetXaxis()->SetTitleFont(42);
   Graph_Graph77->GetYaxis()->SetLabelFont(42);
   Graph_Graph77->GetYaxis()->SetTitleFont(42);
   Graph_Graph77->GetZaxis()->SetLabelFont(42);
   Graph_Graph77->GetZaxis()->SetTitleOffset(1);
   Graph_Graph77->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph77);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999969, 1.049994);
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
   ROC_H_dR_Bj1_16->Modified();
   ROC_H_dR_Bj1_16->cd();
   ROC_H_dR_Bj1_16->SetSelected(ROC_H_dR_Bj1_16);
}
