#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(0,0,1,1);
   ROC_H_mass_16->SetFillColor(0);
   ROC_H_mass_16->SetBorderMode(0);
   ROC_H_mass_16->SetBorderSize(2);
   ROC_H_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx10[40] = {
   0,
   0,
   0.0009512491,
   0.02359191,
   0.07000137,
   0.1143072,
   0.1593091,
   0.2098038,
   0.2820694,
   0.3523014,
   0.4150971,
   0.4721517,
   0.5306691,
   0.5784772,
   0.6236824,
   0.6601543,
   0.6974771,
   0.7287376,
   0.7572122,
   0.7788747,
   0.8027983,
   0.8224539,
   0.8423971,
   0.859328,
   0.8747475,
   0.8882226,
   0.900122,
   0.9122441,
   0.9239344,
   0.9336423,
   0.9429136,
   0.9521015,
   0.9595083,
   0.9676858,
   0.9739138,
   0.9791859,
   0.9833759,
   0.9872327,
   0.9919958,
   0.9958653};
   Double_t Graph_fy10[40] = {
   0,
   0,
   7.443006e-05,
   0.003545114,
   0.01444469,
   0.03145396,
   0.05366514,
   0.08246005,
   0.1227965,
   0.1774724,
   0.2536679,
   0.353235,
   0.4742686,
   0.600386,
   0.6843807,
   0.7272276,
   0.7605717,
   0.7831822,
   0.8065626,
   0.8267093,
   0.8427693,
   0.8599554,
   0.8755759,
   0.8895544,
   0.9003699,
   0.9109489,
   0.9212277,
   0.931558,
   0.9399136,
   0.947256,
   0.9547447,
   0.9602576,
   0.9653388,
   0.9714834,
   0.9766347,
   0.9821983,
   0.9864459,
   0.9900762,
   0.9938946,
   0.9971422};
   TGraph *graph = new TGraph(40,Graph_fx10,Graph_fy10);
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
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Tagging Only",100,0,1.095452);
   Graph_Graph10->SetMinimum(0);
   Graph_Graph10->SetMaximum(1.096856);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx11[40] = {
   0,
   0,
   3.210036e-08,
   0.01177685,
   0.05965386,
   0.1147946,
   0.187691,
   0.2427428,
   0.2960653,
   0.3381471,
   0.4066848,
   0.4630989,
   0.5300328,
   0.5809834,
   0.6241037,
   0.6638519,
   0.7164421,
   0.7655163,
   0.7963017,
   0.8167346,
   0.8499544,
   0.8694755,
   0.8941005,
   0.9103738,
   0.9205949,
   0.9303784,
   0.9392572,
   0.949467,
   0.9552918,
   0.961177,
   0.9689663,
   0.9731587,
   0.9799198,
   0.9840504,
   0.9867132,
   0.9890741,
   0.9914615,
   0.9937414,
   0.9959355,
   0.998101};
   Double_t Graph_fy11[40] = {
   0,
   0,
   0,
   0,
   0.004435684,
   0.009717714,
   0.02194606,
   0.04070879,
   0.07027537,
   0.1008293,
   0.1748315,
   0.2981225,
   0.4813253,
   0.6645362,
   0.8066311,
   0.8495921,
   0.8781697,
   0.8977472,
   0.9106184,
   0.9240143,
   0.9327195,
   0.9427361,
   0.9476003,
   0.9534277,
   0.9594835,
   0.9645874,
   0.9691499,
   0.9726759,
   0.9754635,
   0.9780236,
   0.9812359,
   0.9847738,
   0.9863524,
   0.9885079,
   0.9913694,
   0.993379,
   0.9938691,
   0.9961639,
   0.9976368,
   0.9979253};
   graph = new TGraph(40,Graph_fx11,Graph_fy11);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Mass-Matching Prioritized",100,0,1.097911);
   Graph_Graph11->SetMinimum(0);
   Graph_Graph11->SetMaximum(1.097718);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx12[40] = {
   0,
   0,
   0.0009607432,
   0.02326944,
   0.06916166,
   0.1129328,
   0.1577129,
   0.2078129,
   0.2801162,
   0.350803,
   0.4136363,
   0.4714924,
   0.5301003,
   0.5783357,
   0.6238031,
   0.6601644,
   0.6971848,
   0.7286696,
   0.7574619,
   0.7790866,
   0.8036236,
   0.8232157,
   0.842978,
   0.8598279,
   0.8752141,
   0.8882981,
   0.9001919,
   0.9123761,
   0.9239916,
   0.9337214,
   0.9429252,
   0.9520628,
   0.9594856,
   0.9676405,
   0.973816,
   0.979149,
   0.9833694,
   0.9872369,
   0.9919609,
   0.9958713};
   Double_t Graph_fy12[40] = {
   0,
   0,
   0.0002336057,
   0.003700968,
   0.01438326,
   0.0301056,
   0.05376097,
   0.08200878,
   0.1211642,
   0.1773444,
   0.2496853,
   0.3464595,
   0.4601473,
   0.5785751,
   0.6585038,
   0.7010773,
   0.735822,
   0.762207,
   0.7878346,
   0.8101652,
   0.829137,
   0.8463087,
   0.8618931,
   0.8776799,
   0.8909041,
   0.9020781,
   0.9135825,
   0.9244736,
   0.9344557,
   0.942017,
   0.9498621,
   0.9558768,
   0.9622868,
   0.9687568,
   0.9745993,
   0.9804533,
   0.9855862,
   0.9894137,
   0.9932803,
   0.9969344};
   graph = new TGraph(40,Graph_fx12,Graph_fy12);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Tagging Prioritized",100,0,1.095458);
   Graph_Graph12->SetMinimum(0);
   Graph_Graph12->SetMaximum(1.096628);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04990505, 1.048006);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.1403509,0.3,0.3503509,NULL,"brNDC");
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
   ROC_H_mass_16->Modified();
   ROC_H_mass_16->cd();
   ROC_H_mass_16->SetSelected(ROC_H_mass_16);
}
