#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_16/ROC_Z_dR_Bj0_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_16 = new TCanvas("ROC_Z_dR_Bj0_16", "ROC_Z_dR_Bj0_16",0,0,600,600);
   ROC_Z_dR_Bj0_16->SetHighLightColor(2);
   ROC_Z_dR_Bj0_16->Range(-0.2901881,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx144[30] = {
   0,
   0.04362742,
   0.2137175,
   0.3777008,
   0.4943239,
   0.5839305,
   0.6597655,
   0.710706,
   0.7532859,
   0.7902522,
   0.8279875,
   0.8567907,
   0.883128,
   0.9058559,
   0.9257386,
   0.9448498,
   0.9608778,
   0.9734291,
   0.9815312,
   0.9861209,
   0.9892566,
   0.9928377,
   0.9953015,
   0.9979761,
   0.9987949,
   0.9993099,
   0.9996018,
   0.9998431,
   0.9999747,
   0.9999922};
   Double_t Graph_fy144[30] = {
   0,
   0.04829772,
   0.2138992,
   0.3945015,
   0.5481676,
   0.6577672,
   0.7300998,
   0.7798831,
   0.8206545,
   0.8526632,
   0.8815774,
   0.9021982,
   0.9196625,
   0.9367643,
   0.9490187,
   0.9658037,
   0.9811341,
   0.9892267,
   0.9923037,
   0.9951333,
   0.9968262,
   0.9981574,
   0.9987217,
   0.9990038,
   0.9993389,
   0.9995416,
   0.9997708,
   0.9997973,
   0.9997973,
   1};
   TGraph *graph = new TGraph(30,Graph_fx144,Graph_fy144);
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
   
   TH1F *Graph_Graph144 = new TH1F("Graph_Graph144","Tagging Only",100,0,1.099991);
   Graph_Graph144->SetMinimum(0);
   Graph_Graph144->SetMaximum(1.1);
   Graph_Graph144->SetDirectory(0);
   Graph_Graph144->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph144->SetLineColor(ci);
   Graph_Graph144->GetXaxis()->SetLabelFont(42);
   Graph_Graph144->GetXaxis()->SetTitleOffset(1);
   Graph_Graph144->GetXaxis()->SetTitleFont(42);
   Graph_Graph144->GetYaxis()->SetLabelFont(42);
   Graph_Graph144->GetYaxis()->SetTitleFont(42);
   Graph_Graph144->GetZaxis()->SetLabelFont(42);
   Graph_Graph144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph144->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph144);
   
   TLatex *   tex = new TLatex(0.3892981,0.5039366,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(145);
      tex = new TLatex(0.5865746,0.8076908,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(146);
      tex = new TLatex(0.7509607,0.9105921,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(147);
      tex = new TLatex(0.8471933,0.971694,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(148);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx149[30] = {
   0,
   0.07508147,
   0.3892981,
   0.5865746,
   0.7509607,
   0.8471933,
   0.9081261,
   0.9320214,
   0.9464538,
   0.9627372,
   0.973256,
   0.9794406,
   0.9847193,
   0.9940858,
   0.9962233,
   0.9973958,
   0.9980396,
   0.9983159,
   0.9988489,
   0.9988775,
   0.9990556,
   0.9998893,
   0.9999821,
   0.9999869,
   0.9999945,
   0.999998,
   0.9999987,
   0.9999993,
   0.9999996,
   0.9999999};
   Double_t Graph_fy149[30] = {
   0,
   0.07414208,
   0.4039366,
   0.7076908,
   0.8705921,
   0.931694,
   0.9624381,
   0.975474,
   0.9862358,
   0.9918099,
   0.9971264,
   0.9986276,
   0.9997424,
   0.9998712,
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
   graph = new TGraph(30,Graph_fx149,Graph_fy149);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph149 = new TH1F("Graph_Graph149","Mass-Matching Prioritized",100,0,1.1);
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
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx150[30] = {
   0,
   0.0437587,
   0.213999,
   0.3777202,
   0.4937795,
   0.5836314,
   0.6592337,
   0.710081,
   0.7529073,
   0.7904248,
   0.8280738,
   0.8567831,
   0.8831818,
   0.9058465,
   0.925631,
   0.9445937,
   0.9607234,
   0.9732895,
   0.9814313,
   0.9861133,
   0.9893255,
   0.9928648,
   0.9953066,
   0.9979894,
   0.9987953,
   0.9993003,
   0.9996077,
   0.9998443,
   0.9999748,
   0.9999923};
   Double_t Graph_fy150[30] = {
   0,
   0.04906097,
   0.2137415,
   0.3954252,
   0.5496001,
   0.65931,
   0.7306383,
   0.7807856,
   0.8222464,
   0.8538123,
   0.8816675,
   0.9027213,
   0.9198926,
   0.9371573,
   0.9493037,
   0.9656583,
   0.9810681,
   0.9889273,
   0.9919771,
   0.9947599,
   0.9966584,
   0.9979556,
   0.9987029,
   0.9989778,
   0.9993559,
   0.9995534,
   0.9997767,
   0.9998025,
   0.9998025,
   1};
   graph = new TGraph(30,Graph_fx150,Graph_fy150);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph150 = new TH1F("Graph_Graph150","Tagging Prioritized",100,0,1.099992);
   Graph_Graph150->SetMinimum(0);
   Graph_Graph150->SetMaximum(1.1);
   Graph_Graph150->SetDirectory(0);
   Graph_Graph150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph150->SetLineColor(ci);
   Graph_Graph150->GetXaxis()->SetLabelFont(42);
   Graph_Graph150->GetXaxis()->SetTitleOffset(1);
   Graph_Graph150->GetXaxis()->SetTitleFont(42);
   Graph_Graph150->GetYaxis()->SetLabelFont(42);
   Graph_Graph150->GetYaxis()->SetTitleFont(42);
   Graph_Graph150->GetZaxis()->SetLabelFont(42);
   Graph_Graph150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph150);
   
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
