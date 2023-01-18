#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_16/ROC_H_dR_Bj1_16
//=========  (Tue Jan 17 16:04:08 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_16 = new TCanvas("ROC_H_dR_Bj1_16", "ROC_H_dR_Bj1_16",0,0,600,600);
   ROC_H_dR_Bj1_16->SetHighLightColor(2);
   ROC_H_dR_Bj1_16->Range(0,0,1,1);
   ROC_H_dR_Bj1_16->SetFillColor(0);
   ROC_H_dR_Bj1_16->SetBorderMode(0);
   ROC_H_dR_Bj1_16->SetBorderSize(2);
   ROC_H_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx100[30] = {
   0,
   0.02687248,
   0.1327134,
   0.2431957,
   0.3437112,
   0.4306932,
   0.5066864,
   0.5724174,
   0.6325772,
   0.6843364,
   0.7324192,
   0.7704221,
   0.806206,
   0.836585,
   0.8685854,
   0.8967451,
   0.923953,
   0.9432666,
   0.959611,
   0.9713029,
   0.9787986,
   0.9841493,
   0.9889539,
   0.992965,
   0.9948574,
   0.9965883,
   0.9982546,
   0.9995708,
   0.9997329,
   0.9999239};
   Double_t Graph_fy100[30] = {
   0,
   0.03122678,
   0.1385112,
   0.2744029,
   0.4046344,
   0.5117204,
   0.5985415,
   0.6685787,
   0.7289739,
   0.7727845,
   0.811194,
   0.8436819,
   0.8733891,
   0.9011761,
   0.9270424,
   0.9479874,
   0.9686124,
   0.9807554,
   0.9876371,
   0.9922982,
   0.9945787,
   0.9965792,
   0.9973794,
   0.9982996,
   0.9991398,
   0.9995599,
   0.9997999,
   0.99984,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx100,Graph_fy100);
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
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph100 = new TH1F("Graph_Graph100","Tagging Only",100,0,1.099916);
   Graph_Graph100->SetMinimum(0);
   Graph_Graph100->SetMaximum(1.1);
   Graph_Graph100->SetDirectory(0);
   Graph_Graph100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph100->SetLineColor(ci);
   Graph_Graph100->GetXaxis()->SetLabelFont(42);
   Graph_Graph100->GetXaxis()->SetTitleOffset(1);
   Graph_Graph100->GetXaxis()->SetTitleFont(42);
   Graph_Graph100->GetYaxis()->SetLabelFont(42);
   Graph_Graph100->GetYaxis()->SetTitleFont(42);
   Graph_Graph100->GetZaxis()->SetLabelFont(42);
   Graph_Graph100->GetZaxis()->SetTitleOffset(1);
   Graph_Graph100->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph100);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx101[30] = {
   0,
   1.746883e-07,
   0.06337018,
   0.1587701,
   0.2424886,
   0.3280434,
   0.4130279,
   0.50621,
   0.5715952,
   0.6317088,
   0.6856279,
   0.7379992,
   0.7813044,
   0.8222803,
   0.8640316,
   0.8900278,
   0.928602,
   0.9570074,
   0.9707664,
   0.9800579,
   0.9887627,
   0.990791,
   0.9931775,
   0.9978716,
   0.9994865,
   0.9997804,
   0.9999188,
   0.9999285,
   0.9999954,
   0.9999955};
   Double_t Graph_fy101[30] = {
   0,
   0,
   0.01545159,
   0.08562004,
   0.1911451,
   0.3586604,
   0.5019073,
   0.6222496,
   0.7171419,
   0.7864934,
   0.8385756,
   0.877478,
   0.9121993,
   0.9324682,
   0.9482831,
   0.9697335,
   0.9867301,
   0.9955466,
   0.9979097,
   0.9987276,
   0.9990002,
   0.9990002,
   0.9990911,
   0.9990911,
   0.9991819,
   0.9999091,
   0.9999091,
   0.9999091,
   1,
   1};
   graph = new TGraph(30,Graph_fx101,Graph_fy101);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph101 = new TH1F("Graph_Graph101","Mass-Matching Prioritized",100,0,1.099995);
   Graph_Graph101->SetMinimum(0);
   Graph_Graph101->SetMaximum(1.1);
   Graph_Graph101->SetDirectory(0);
   Graph_Graph101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph101->SetLineColor(ci);
   Graph_Graph101->GetXaxis()->SetLabelFont(42);
   Graph_Graph101->GetXaxis()->SetTitleOffset(1);
   Graph_Graph101->GetXaxis()->SetTitleFont(42);
   Graph_Graph101->GetYaxis()->SetLabelFont(42);
   Graph_Graph101->GetYaxis()->SetTitleFont(42);
   Graph_Graph101->GetZaxis()->SetLabelFont(42);
   Graph_Graph101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph101);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx102[30] = {
   0,
   0.02689444,
   0.1320764,
   0.2426974,
   0.3428129,
   0.4298,
   0.5056081,
   0.5716943,
   0.6314008,
   0.6834055,
   0.7314567,
   0.7698937,
   0.8057976,
   0.8365532,
   0.8684697,
   0.8966304,
   0.9236998,
   0.9432537,
   0.9593729,
   0.9709816,
   0.9787895,
   0.9844634,
   0.9891665,
   0.9931078,
   0.9949528,
   0.9966586,
   0.9982834,
   0.9995731,
   0.9997324,
   0.9999187};
   Double_t Graph_fy102[30] = {
   0,
   0.03189374,
   0.136634,
   0.2703111,
   0.402211,
   0.5075349,
   0.594676,
   0.6678895,
   0.7272748,
   0.7729312,
   0.8097123,
   0.8433855,
   0.8750641,
   0.9027541,
   0.9277844,
   0.9498231,
   0.9694517,
   0.9810694,
   0.9875347,
   0.9918726,
   0.9943491,
   0.996061,
   0.997241,
   0.9981717,
   0.9989861,
   0.9996011,
   0.9998172,
   0.999867,
   1,
   1};
   graph = new TGraph(30,Graph_fx102,Graph_fy102);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph102 = new TH1F("Graph_Graph102","Tagging Prioritized",100,0,1.099911);
   Graph_Graph102->SetMinimum(0);
   Graph_Graph102->SetMaximum(1.1);
   Graph_Graph102->SetDirectory(0);
   Graph_Graph102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph102->SetLineColor(ci);
   Graph_Graph102->GetXaxis()->SetLabelFont(42);
   Graph_Graph102->GetXaxis()->SetTitleOffset(1);
   Graph_Graph102->GetXaxis()->SetTitleFont(42);
   Graph_Graph102->GetYaxis()->SetLabelFont(42);
   Graph_Graph102->GetYaxis()->SetTitleFont(42);
   Graph_Graph102->GetZaxis()->SetLabelFont(42);
   Graph_Graph102->GetZaxis()->SetTitleOffset(1);
   Graph_Graph102->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph102);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04999978, 1.049995);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.3333333,0.3,0.5433333,NULL,"brNDC");
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
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ROC_H_dR_Bj1_16->Modified();
   ROC_H_dR_Bj1_16->cd();
   ROC_H_dR_Bj1_16->SetSelected(ROC_H_dR_Bj1_16);
}
