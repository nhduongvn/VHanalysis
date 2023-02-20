#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_16()
{
//=========Macro generated from canvas: ROC_Sphericity_16/ROC_Sphericity_16
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_16 = new TCanvas("ROC_Sphericity_16", "ROC_Sphericity_16",0,0,600,600);
   ROC_Sphericity_16->SetHighLightColor(2);
   ROC_Sphericity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_16->SetFillColor(0);
   ROC_Sphericity_16->SetBorderMode(0);
   ROC_Sphericity_16->SetBorderSize(2);
   ROC_Sphericity_16->SetGridx();
   ROC_Sphericity_16->SetGridy();
   ROC_Sphericity_16->SetLeftMargin(0.15709);
   ROC_Sphericity_16->SetRightMargin(0.1234783);
   ROC_Sphericity_16->SetBottomMargin(0.12);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx254[26] = {
   0,
   7.151525e-08,
   3.676728e-06,
   3.485634e-05,
   0.0002033769,
   0.0009789472,
   0.003055841,
   0.007139055,
   0.01515001,
   0.02628475,
   0.04159297,
   0.06079292,
   0.08565705,
   0.116899,
   0.1503336,
   0.1928886,
   0.2406361,
   0.2919155,
   0.3573473,
   0.4283857,
   0.5114117,
   0.604241,
   0.720348,
   0.8431482,
   0.9537699,
   1};
   Double_t Graph_fy254[26] = {
   0,
   0,
   0,
   0,
   0.0005340756,
   0.0009397167,
   0.006725325,
   0.01941257,
   0.04056316,
   0.06543114,
   0.0962888,
   0.1370636,
   0.1790438,
   0.2302757,
   0.2731617,
   0.3355734,
   0.3996069,
   0.4662008,
   0.5379655,
   0.6191161,
   0.6981909,
   0.7877319,
   0.8740903,
   0.9438388,
   0.9888956,
   1};
   TGraph *graph = new TGraph(26,Graph_fx254,Graph_fy254);
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
   
   TH1F *Graph_Graph254 = new TH1F("Graph_Graph254","Tagging Only",100,0,1.1);
   Graph_Graph254->SetMinimum(0);
   Graph_Graph254->SetMaximum(1.1);
   Graph_Graph254->SetDirectory(0);
   Graph_Graph254->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph254->SetLineColor(ci);
   Graph_Graph254->GetXaxis()->SetLabelFont(42);
   Graph_Graph254->GetXaxis()->SetTitleOffset(1);
   Graph_Graph254->GetXaxis()->SetTitleFont(42);
   Graph_Graph254->GetYaxis()->SetLabelFont(42);
   Graph_Graph254->GetYaxis()->SetTitleFont(42);
   Graph_Graph254->GetZaxis()->SetLabelFont(42);
   Graph_Graph254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph254);
   
   TLatex *   tex = new TLatex(0.1829825,0.5137866,"0.34");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.2302191,0.5806,"0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(0.3105484,0.6569605,"0.26");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(0.371388,0.7553817,"0.22");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(0.4412165,0.8479059,"0.18");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(0.5304815,0.8676965,"0.14");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(0.6462962,0.9257108,"0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(0.7854205,0.9959007,"0.06");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx263[26] = {
   0,
   1.32194e-07,
   2.383597e-06,
   1.524192e-05,
   6.953668e-05,
   0.0009596766,
   0.001831147,
   0.005945952,
   0.0118437,
   0.01723178,
   0.02839521,
   0.04400381,
   0.05779688,
   0.07799878,
   0.1075244,
   0.1452826,
   0.1829825,
   0.2302191,
   0.3105484,
   0.371388,
   0.4412165,
   0.5304815,
   0.6462962,
   0.7854205,
   0.9421079,
   1};
   Double_t Graph_fy263[26] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.006545356,
   0.02191067,
   0.04456602,
   0.07473957,
   0.1173516,
   0.1606558,
   0.1954128,
   0.2526684,
   0.2852036,
   0.3477632,
   0.4137866,
   0.4806,
   0.5569605,
   0.6553817,
   0.7479059,
   0.8276965,
   0.8857108,
   0.9559007,
   0.9960952,
   1};
   graph = new TGraph(26,Graph_fx263,Graph_fy263);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph263 = new TH1F("Graph_Graph263","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph263->SetMinimum(0);
   Graph_Graph263->SetMaximum(1.1);
   Graph_Graph263->SetDirectory(0);
   Graph_Graph263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph263->SetLineColor(ci);
   Graph_Graph263->GetXaxis()->SetLabelFont(42);
   Graph_Graph263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph263->GetXaxis()->SetTitleFont(42);
   Graph_Graph263->GetYaxis()->SetLabelFont(42);
   Graph_Graph263->GetYaxis()->SetTitleFont(42);
   Graph_Graph263->GetZaxis()->SetLabelFont(42);
   Graph_Graph263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph263);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx264[26] = {
   0,
   7.019833e-08,
   3.630744e-06,
   3.465646e-05,
   0.0002019196,
   0.0009719262,
   0.003037098,
   0.007093227,
   0.01511359,
   0.02624594,
   0.04166085,
   0.06091903,
   0.08570554,
   0.1169346,
   0.150454,
   0.192757,
   0.2402206,
   0.2914451,
   0.3568807,
   0.4275995,
   0.5108224,
   0.603706,
   0.7200772,
   0.843059,
   0.9537808,
   1};
   Double_t Graph_fy264[26] = {
   0,
   0,
   0,
   0,
   0.000524302,
   0.0009923712,
   0.006672102,
   0.01919676,
   0.04055561,
   0.06517549,
   0.09672224,
   0.1369985,
   0.1788733,
   0.2300279,
   0.273058,
   0.3352653,
   0.3986157,
   0.464538,
   0.5371342,
   0.6185541,
   0.696658,
   0.7861482,
   0.8722234,
   0.9435043,
   0.9885681,
   1};
   graph = new TGraph(26,Graph_fx264,Graph_fy264);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","Tagging Prioritized",100,0,1.1);
   Graph_Graph264->SetMinimum(0);
   Graph_Graph264->SetMaximum(1.1);
   Graph_Graph264->SetDirectory(0);
   Graph_Graph264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph264->SetLineColor(ci);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
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
   ROC_Sphericity_16->Modified();
   ROC_Sphericity_16->cd();
   ROC_Sphericity_16->SetSelected(ROC_Sphericity_16);
}
