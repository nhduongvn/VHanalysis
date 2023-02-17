#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_17/ROC_Z_dR_Bj0_17
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_17 = new TCanvas("ROC_Z_dR_Bj0_17", "ROC_Z_dR_Bj0_17",0,0,600,600);
   ROC_Z_dR_Bj0_17->SetHighLightColor(2);
   ROC_Z_dR_Bj0_17->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_17->SetFillColor(0);
   ROC_Z_dR_Bj0_17->SetBorderMode(0);
   ROC_Z_dR_Bj0_17->SetBorderSize(2);
   ROC_Z_dR_Bj0_17->SetGridx();
   ROC_Z_dR_Bj0_17->SetGridy();
   ROC_Z_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx156[30] = {
   0,
   0.03569692,
   0.2032075,
   0.3490217,
   0.4628782,
   0.5548123,
   0.6292327,
   0.6829958,
   0.7288968,
   0.7758439,
   0.8143261,
   0.8435104,
   0.8704109,
   0.8920359,
   0.914382,
   0.9396125,
   0.9590567,
   0.9727468,
   0.9817317,
   0.9871073,
   0.9912656,
   0.9943853,
   0.9960965,
   0.9975757,
   0.9986607,
   0.9991714,
   0.9995545,
   0.9998099,
   0.9998654,
   0.999922};
   Double_t Graph_fy156[30] = {
   0,
   0.05470182,
   0.277165,
   0.4994129,
   0.6630129,
   0.7427432,
   0.7875989,
   0.8279431,
   0.8528884,
   0.8773608,
   0.8967981,
   0.9152318,
   0.9312561,
   0.945442,
   0.9579865,
   0.9695763,
   0.9801815,
   0.9864753,
   0.9917283,
   0.9941272,
   0.9982639,
   0.998937,
   0.9991771,
   0.9992839,
   0.9995671,
   0.9997702,
   0.9997702,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx156,Graph_fy156);
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
   
   TH1F *Graph_Graph156 = new TH1F("Graph_Graph156","Tagging Only",100,0,1.099914);
   Graph_Graph156->SetMinimum(0);
   Graph_Graph156->SetMaximum(1.1);
   Graph_Graph156->SetDirectory(0);
   Graph_Graph156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph156->SetLineColor(ci);
   Graph_Graph156->GetXaxis()->SetLabelFont(42);
   Graph_Graph156->GetXaxis()->SetTitleOffset(1);
   Graph_Graph156->GetXaxis()->SetTitleFont(42);
   Graph_Graph156->GetYaxis()->SetLabelFont(42);
   Graph_Graph156->GetYaxis()->SetTitleFont(42);
   Graph_Graph156->GetZaxis()->SetLabelFont(42);
   Graph_Graph156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph156);
   
   TLatex *   tex = new TLatex(0.3563647,0.6166592,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(157);
      tex = new TLatex(0.5783865,0.8849197,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(158);
      tex = new TLatex(0.7183599,0.9393039,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(159);
      tex = new TLatex(0.7943303,0.9885556,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(160);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx161[30] = {
   0,
   0.06577684,
   0.3563647,
   0.5783865,
   0.7183599,
   0.7943303,
   0.8556037,
   0.901843,
   0.9374781,
   0.9576096,
   0.9680633,
   0.9738141,
   0.9822373,
   0.9897981,
   0.9935228,
   0.9959995,
   0.9966111,
   0.9969391,
   0.9970834,
   0.9982667,
   0.9985228,
   0.9985917,
   0.9986141,
   0.9986472,
   0.9986524,
   0.999976,
   0.9999967,
   0.9999981,
   0.999999,
   0.9999996};
   Double_t Graph_fy161[30] = {
   0,
   0.09612177,
   0.5166592,
   0.7849197,
   0.8993039,
   0.9485556,
   0.9701997,
   0.9829603,
   0.9909276,
   0.9965307,
   0.9982979,
   0.9988298,
   0.9992553,
   0.9993617,
   0.9995745,
   0.9997872,
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
   graph = new TGraph(30,Graph_fx161,Graph_fy161);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph161 = new TH1F("Graph_Graph161","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph161->SetMinimum(0);
   Graph_Graph161->SetMaximum(1.1);
   Graph_Graph161->SetDirectory(0);
   Graph_Graph161->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph161->SetLineColor(ci);
   Graph_Graph161->GetXaxis()->SetLabelFont(42);
   Graph_Graph161->GetXaxis()->SetTitleOffset(1);
   Graph_Graph161->GetXaxis()->SetTitleFont(42);
   Graph_Graph161->GetYaxis()->SetLabelFont(42);
   Graph_Graph161->GetYaxis()->SetTitleFont(42);
   Graph_Graph161->GetZaxis()->SetLabelFont(42);
   Graph_Graph161->GetZaxis()->SetTitleOffset(1);
   Graph_Graph161->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph161);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx162[30] = {
   0,
   0.03596081,
   0.2034943,
   0.3493327,
   0.4631752,
   0.5549995,
   0.6296823,
   0.6836862,
   0.7295651,
   0.7762461,
   0.814456,
   0.8438152,
   0.8706017,
   0.8924698,
   0.9148156,
   0.9398237,
   0.9593588,
   0.9727937,
   0.9818773,
   0.9870996,
   0.9912376,
   0.9944022,
   0.9961165,
   0.9976031,
   0.998673,
   0.9991783,
   0.9995557,
   0.9998109,
   0.9998673,
   0.9999232};
   Double_t Graph_fy162[30] = {
   0,
   0.05480956,
   0.2777344,
   0.5015638,
   0.6642567,
   0.7448711,
   0.7893059,
   0.8289749,
   0.854871,
   0.8789007,
   0.8984474,
   0.9166388,
   0.9329883,
   0.9466359,
   0.9589367,
   0.9704751,
   0.9809021,
   0.9868695,
   0.9917911,
   0.9943405,
   0.9984457,
   0.9989323,
   0.9991676,
   0.9992722,
   0.9995497,
   0.9997487,
   0.9997748,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx162,Graph_fy162);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph162 = new TH1F("Graph_Graph162","Tagging Prioritized",100,0,1.099915);
   Graph_Graph162->SetMinimum(0);
   Graph_Graph162->SetMaximum(1.1);
   Graph_Graph162->SetDirectory(0);
   Graph_Graph162->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph162->SetLineColor(ci);
   Graph_Graph162->GetXaxis()->SetLabelFont(42);
   Graph_Graph162->GetXaxis()->SetTitleOffset(1);
   Graph_Graph162->GetXaxis()->SetTitleFont(42);
   Graph_Graph162->GetYaxis()->SetLabelFont(42);
   Graph_Graph162->GetYaxis()->SetTitleFont(42);
   Graph_Graph162->GetZaxis()->SetLabelFont(42);
   Graph_Graph162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph162->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph162);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dR_Bj0_17->Modified();
   ROC_Z_dR_Bj0_17->cd();
   ROC_Z_dR_Bj0_17->SetSelected(ROC_Z_dR_Bj0_17);
}
