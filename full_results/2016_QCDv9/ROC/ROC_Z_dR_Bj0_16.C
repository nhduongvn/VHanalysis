#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_16/ROC_Z_dR_Bj0_16
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_16 = new TCanvas("ROC_Z_dR_Bj0_16", "ROC_Z_dR_Bj0_16",0,0,600,600);
   ROC_Z_dR_Bj0_16->SetHighLightColor(2);
   ROC_Z_dR_Bj0_16->Range(-0.290188,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_16->SetFillColor(0);
   ROC_Z_dR_Bj0_16->SetBorderMode(0);
   ROC_Z_dR_Bj0_16->SetBorderSize(2);
   ROC_Z_dR_Bj0_16->SetGridx();
   ROC_Z_dR_Bj0_16->SetGridy();
   ROC_Z_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx149[30] = {
   0,
   0.03819188,
   0.2138858,
   0.3670613,
   0.480302,
   0.5665863,
   0.6352065,
   0.6911802,
   0.7371027,
   0.7743607,
   0.8074033,
   0.8386772,
   0.8700447,
   0.8927183,
   0.9171677,
   0.9359315,
   0.9519346,
   0.9672611,
   0.9807312,
   0.9875787,
   0.9915555,
   0.9946417,
   0.9963909,
   0.9977899,
   0.9988144,
   0.9995542,
   0.9997268,
   0.9999067,
   0.9999594,
   0.9999858};
   Double_t Graph_fy149[30] = {
   0,
   0.0561765,
   0.2675511,
   0.4906507,
   0.6377232,
   0.7202234,
   0.7764211,
   0.8140098,
   0.8436629,
   0.8701182,
   0.8919506,
   0.9076411,
   0.9254142,
   0.9391537,
   0.9532313,
   0.9703469,
   0.9822716,
   0.9899795,
   0.9930176,
   0.9961003,
   0.9977555,
   0.9986171,
   0.9992064,
   0.9992064,
   0.9994107,
   0.9994107,
   0.9994107,
   0.9994788,
   0.9994788,
   1};
   TGraph *graph = new TGraph(30,Graph_fx149,Graph_fy149);
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
   
   TH1F *Graph_Graph149 = new TH1F("Graph_Graph149","Tagging Only",100,0,1.099984);
   Graph_Graph149->SetMinimum(0);
   Graph_Graph149->SetMaximum(1.1);
   Graph_Graph149->SetDirectory(0);
   Graph_Graph149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph149->SetLineColor(ci);
   Graph_Graph149->GetXaxis()->SetLabelFont(42);
   Graph_Graph149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph149->GetXaxis()->SetTitleFont(42);
   Graph_Graph149->GetYaxis()->SetLabelFont(42);
   Graph_Graph149->GetYaxis()->SetTitleFont(42);
   Graph_Graph149->GetZaxis()->SetLabelFont(42);
   Graph_Graph149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph149);
   
   TLatex *   tex = new TLatex(0.396608,0.6022401,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(150);
      tex = new TLatex(0.5931295,0.8553904,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(151);
      tex = new TLatex(0.7183774,0.9856361,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(152);
      tex = new TLatex(0.8105812,1.012912,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(153);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx154[30] = {
   0,
   0.07461116,
   0.396608,
   0.5931295,
   0.7183774,
   0.8105812,
   0.8796867,
   0.9096512,
   0.9346298,
   0.9512215,
   0.9640599,
   0.9757598,
   0.9832741,
   0.9883835,
   0.9903462,
   0.9920231,
   0.9945568,
   0.9953369,
   0.9970954,
   0.9971993,
   0.9978728,
   0.9995564,
   0.9999341,
   0.9999505,
   0.9999818,
   0.9999946,
   0.9999967,
   0.999998,
   0.999999,
   0.9999995};
   Double_t Graph_fy154[30] = {
   0,
   0.09722109,
   0.5022401,
   0.8153904,
   0.9456361,
   0.9729122,
   0.9863124,
   0.9932999,
   0.9963625,
   0.99665,
   0.9991377,
   0.9997126,
   0.9997126,
   0.9997126,
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
   graph = new TGraph(30,Graph_fx154,Graph_fy154);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","Mass-Matching Prioritized",100,0,1.099999);
   Graph_Graph154->SetMinimum(0);
   Graph_Graph154->SetMaximum(1.1);
   Graph_Graph154->SetDirectory(0);
   Graph_Graph154->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph154->SetLineColor(ci);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx155[30] = {
   0,
   0.03818244,
   0.2134319,
   0.3662704,
   0.4794827,
   0.5654689,
   0.6344474,
   0.6901627,
   0.7361239,
   0.7734486,
   0.8062684,
   0.8375174,
   0.8687813,
   0.8914938,
   0.9163579,
   0.9352934,
   0.95153,
   0.9669805,
   0.9806377,
   0.9875364,
   0.9915398,
   0.9946415,
   0.9963808,
   0.9977667,
   0.9987766,
   0.9995545,
   0.9997245,
   0.9999018,
   0.9999599,
   0.999986};
   Double_t Graph_fy155[30] = {
   0,
   0.05642826,
   0.2681538,
   0.4904163,
   0.6383547,
   0.7234006,
   0.7788026,
   0.8168827,
   0.8462776,
   0.8718857,
   0.8919289,
   0.9073412,
   0.9248661,
   0.9384289,
   0.9523238,
   0.969648,
   0.9818063,
   0.9892439,
   0.992295,
   0.9954568,
   0.9975946,
   0.998441,
   0.9990867,
   0.9990867,
   0.9994211,
   0.9994211,
   0.9994211,
   0.999488,
   0.999488,
   1};
   graph = new TGraph(30,Graph_fx155,Graph_fy155);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph155 = new TH1F("Graph_Graph155","Tagging Prioritized",100,0,1.099985);
   Graph_Graph155->SetMinimum(0);
   Graph_Graph155->SetMaximum(1.1);
   Graph_Graph155->SetDirectory(0);
   Graph_Graph155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph155->SetLineColor(ci);
   Graph_Graph155->GetXaxis()->SetLabelFont(42);
   Graph_Graph155->GetXaxis()->SetTitleOffset(1);
   Graph_Graph155->GetXaxis()->SetTitleFont(42);
   Graph_Graph155->GetYaxis()->SetLabelFont(42);
   Graph_Graph155->GetYaxis()->SetTitleFont(42);
   Graph_Graph155->GetZaxis()->SetLabelFont(42);
   Graph_Graph155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph155);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
   ROC_Z_dR_Bj0_16->Modified();
   ROC_Z_dR_Bj0_16->cd();
   ROC_Z_dR_Bj0_16->SetSelected(ROC_Z_dR_Bj0_16);
}
