#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_18()
{
//=========Macro generated from canvas: ROC_H_pt_18/ROC_H_pt_18
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_18 = new TCanvas("ROC_H_pt_18", "ROC_H_pt_18",0,0,600,600);
   ROC_H_pt_18->SetHighLightColor(2);
   ROC_H_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_18->SetFillColor(0);
   ROC_H_pt_18->SetBorderMode(0);
   ROC_H_pt_18->SetBorderSize(2);
   ROC_H_pt_18->SetGridx();
   ROC_H_pt_18->SetGridy();
   ROC_H_pt_18->SetLeftMargin(0.15709);
   ROC_H_pt_18->SetRightMargin(0.1234783);
   ROC_H_pt_18->SetBottomMargin(0.12);
   ROC_H_pt_18->SetFrameBorderMode(0);
   ROC_H_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx209[41] = {
   0,
   4.9069e-08,
   1.365419e-07,
   2.180405e-07,
   3.463534e-07,
   4.868287e-07,
   6.475123e-07,
   8.969191e-07,
   1.191107e-06,
   1.549457e-06,
   2.131986e-06,
   2.821577e-06,
   3.739671e-06,
   4.923401e-06,
   6.487908e-06,
   8.643328e-06,
   1.142177e-05,
   1.501734e-05,
   2.005526e-05,
   2.713612e-05,
   3.639182e-05,
   4.997347e-05,
   6.844312e-05,
   9.439452e-05,
   0.0001304548,
   0.0001841708,
   0.0002623369,
   0.0003849732,
   0.0005679068,
   0.0008542422,
   0.001313055,
   0.002073406,
   0.003337283,
   0.005600212,
   0.009952242,
   0.01914857,
   0.03956843,
   0.09169988,
   0.2561555,
   0.6812633,
   1};
   Double_t Graph_fy209[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   2.100916e-05,
   5.560385e-05,
   7.717042e-05,
   0.0001037126,
   0.0001302549,
   0.0001509417,
   0.0001509417,
   0.0004841698,
   0.0006813124,
   0.0009025682,
   0.001032712,
   0.001311095,
   0.002027654,
   0.002501071,
   0.00390522,
   0.005924455,
   0.009336902,
   0.01458514,
   0.02445141,
   0.04290943,
   0.07233271,
   0.1294188,
   0.2524153,
   0.4877117,
   0.8173072,
   1};
   TGraph *graph = new TGraph(41,Graph_fx209,Graph_fy209);
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
   
   TH1F *Graph_Graph209 = new TH1F("Graph_Graph209","Tagging Only",100,0,1.1);
   Graph_Graph209->SetMinimum(0);
   Graph_Graph209->SetMaximum(1.1);
   Graph_Graph209->SetDirectory(0);
   Graph_Graph209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph209->SetLineColor(ci);
   Graph_Graph209->GetXaxis()->SetLabelFont(42);
   Graph_Graph209->GetXaxis()->SetTitleOffset(1);
   Graph_Graph209->GetXaxis()->SetTitleFont(42);
   Graph_Graph209->GetYaxis()->SetLabelFont(42);
   Graph_Graph209->GetYaxis()->SetTitleFont(42);
   Graph_Graph209->GetZaxis()->SetLabelFont(42);
   Graph_Graph209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph209->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph209);
   
   TLatex *   tex = new TLatex(0.4336508,0.7578756,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(210);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx211[41] = {
   0,
   7.600501e-08,
   2.266804e-07,
   3.141742e-07,
   4.133954e-07,
   6.190199e-07,
   8.702475e-07,
   1.084342e-06,
   1.453232e-06,
   1.867284e-06,
   2.527731e-06,
   3.590075e-06,
   4.858194e-06,
   6.288875e-06,
   8.630744e-06,
   1.132823e-05,
   1.477392e-05,
   1.882716e-05,
   2.46507e-05,
   3.329026e-05,
   4.539582e-05,
   6.246754e-05,
   8.606986e-05,
   0.0001178091,
   0.0001596144,
   0.0002257314,
   0.0003178355,
   0.0004635619,
   0.0006883392,
   0.001039713,
   0.001648383,
   0.002648827,
   0.004341364,
   0.007445951,
   0.01380382,
   0.02744535,
   0.06053922,
   0.1461867,
   0.4336508,
   0.8585554,
   1};
   Double_t Graph_fy211[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000121867,
   0.000121867,
   0.0002347788,
   0.0002867341,
   0.0003446236,
   0.0004339974,
   0.0006019404,
   0.0006209713,
   0.0009357552,
   0.002042083,
   0.006024552,
   0.008017102,
   0.01322073,
   0.02896185,
   0.05546007,
   0.08866954,
   0.1617726,
   0.3471007,
   0.6578756,
   0.9519344,
   1};
   graph = new TGraph(41,Graph_fx211,Graph_fy211);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph211 = new TH1F("Graph_Graph211","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph211->SetMinimum(0);
   Graph_Graph211->SetMaximum(1.1);
   Graph_Graph211->SetDirectory(0);
   Graph_Graph211->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph211->SetLineColor(ci);
   Graph_Graph211->GetXaxis()->SetLabelFont(42);
   Graph_Graph211->GetXaxis()->SetTitleOffset(1);
   Graph_Graph211->GetXaxis()->SetTitleFont(42);
   Graph_Graph211->GetYaxis()->SetLabelFont(42);
   Graph_Graph211->GetYaxis()->SetTitleFont(42);
   Graph_Graph211->GetZaxis()->SetLabelFont(42);
   Graph_Graph211->GetZaxis()->SetTitleOffset(1);
   Graph_Graph211->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph211);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx212[41] = {
   0,
   5.1251e-08,
   1.404244e-07,
   2.319075e-07,
   3.774878e-07,
   5.234702e-07,
   6.950148e-07,
   9.657539e-07,
   1.292623e-06,
   1.660645e-06,
   2.258368e-06,
   2.986394e-06,
   3.933409e-06,
   5.173887e-06,
   6.811852e-06,
   9.060771e-06,
   1.199091e-05,
   1.572301e-05,
   2.100576e-05,
   2.841221e-05,
   3.806177e-05,
   5.214494e-05,
   7.148324e-05,
   9.837196e-05,
   0.000135852,
   0.0001917664,
   0.0002723208,
   0.0003988927,
   0.0005874682,
   0.0008809255,
   0.001350135,
   0.002127106,
   0.003417201,
   0.005714746,
   0.01012792,
   0.01939714,
   0.03995963,
   0.09281338,
   0.2579488,
   0.6816475,
   1};
   Double_t Graph_fy212[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   1.845901e-05,
   4.327466e-05,
   4.327466e-05,
   0.0002016029,
   0.0002205517,
   0.0002624099,
   0.0002857304,
   0.0003290762,
   0.0003543507,
   0.0006471308,
   0.0008392925,
   0.001052285,
   0.001236397,
   0.00156508,
   0.002419726,
   0.003027796,
   0.004580162,
   0.007047737,
   0.01041775,
   0.01584526,
   0.02599472,
   0.04549742,
   0.07630102,
   0.1333375,
   0.2559246,
   0.4890814,
   0.8206726,
   1};
   graph = new TGraph(41,Graph_fx212,Graph_fy212);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph212 = new TH1F("Graph_Graph212","Tagging Prioritized",100,0,1.1);
   Graph_Graph212->SetMinimum(0);
   Graph_Graph212->SetMaximum(1.1);
   Graph_Graph212->SetDirectory(0);
   Graph_Graph212->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph212->SetLineColor(ci);
   Graph_Graph212->GetXaxis()->SetLabelFont(42);
   Graph_Graph212->GetXaxis()->SetTitleOffset(1);
   Graph_Graph212->GetXaxis()->SetTitleFont(42);
   Graph_Graph212->GetYaxis()->SetLabelFont(42);
   Graph_Graph212->GetYaxis()->SetTitleFont(42);
   Graph_Graph212->GetZaxis()->SetLabelFont(42);
   Graph_Graph212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph212->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph212);
   
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
   ROC_H_pt_18->Modified();
   ROC_H_pt_18->cd();
   ROC_H_pt_18->SetSelected(ROC_H_pt_18);
}
