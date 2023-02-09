#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetGridx();
   ROC_Z_pt_18->SetGridy();
   ROC_Z_pt_18->SetLeftMargin(0.15709);
   ROC_Z_pt_18->SetRightMargin(0.1234783);
   ROC_Z_pt_18->SetBottomMargin(0.12);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx223[41] = {
   0,
   5.677196e-08,
   1.102664e-07,
   2.060317e-07,
   3.094797e-07,
   4.117985e-07,
   5.967717e-07,
   8.172417e-07,
   1.078747e-06,
   1.449233e-06,
   1.914233e-06,
   2.518199e-06,
   3.435101e-06,
   4.661835e-06,
   6.199674e-06,
   8.110365e-06,
   1.07964e-05,
   1.437107e-05,
   1.927769e-05,
   2.563814e-05,
   3.471081e-05,
   4.678221e-05,
   6.431176e-05,
   8.872115e-05,
   0.0001227051,
   0.0001704874,
   0.0002443317,
   0.0003558979,
   0.0005219037,
   0.0007815134,
   0.001211012,
   0.001893118,
   0.00306584,
   0.005150752,
   0.00987377,
   0.01905227,
   0.04124721,
   0.0988282,
   0.2846787,
   0.7272171,
   1};
   Double_t Graph_fy223[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   2.068678e-05,
   4.225335e-05,
   4.225335e-05,
   4.835831e-05,
   4.835831e-05,
   0.0002377132,
   0.0002377132,
   0.0002499263,
   0.0003425112,
   0.0004014583,
   0.0006654052,
   0.0006762363,
   0.001113627,
   0.002101899,
   0.002980086,
   0.004657352,
   0.007273609,
   0.01241303,
   0.02206405,
   0.03781034,
   0.0699656,
   0.1296655,
   0.2516098,
   0.4934469,
   0.8238771,
   1};
   TGraph *graph = new TGraph(41,Graph_fx223,Graph_fy223);
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
   
   TH1F *Graph_Graph223 = new TH1F("Graph_Graph223","Tagging Only",100,0,1.1);
   Graph_Graph223->SetMinimum(0);
   Graph_Graph223->SetMaximum(1.1);
   Graph_Graph223->SetDirectory(0);
   Graph_Graph223->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph223->SetLineColor(ci);
   Graph_Graph223->GetXaxis()->SetLabelFont(42);
   Graph_Graph223->GetXaxis()->SetTitleOffset(1);
   Graph_Graph223->GetXaxis()->SetTitleFont(42);
   Graph_Graph223->GetYaxis()->SetLabelFont(42);
   Graph_Graph223->GetYaxis()->SetTitleFont(42);
   Graph_Graph223->GetZaxis()->SetLabelFont(42);
   Graph_Graph223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph223->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph223);
   
   TLatex *   tex = new TLatex(0.2980738,0.6715408,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(224);
      tex = new TLatex(0.8209643,0.9684294,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(225);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx226[41] = {
   0,
   8.55979e-08,
   1.362232e-07,
   3.007859e-07,
   3.810897e-07,
   5.448793e-07,
   7.445541e-07,
   1.069571e-06,
   1.318729e-06,
   1.62315e-06,
   2.06619e-06,
   2.609354e-06,
   3.619798e-06,
   5.082121e-06,
   6.773449e-06,
   8.780633e-06,
   1.144808e-05,
   1.52057e-05,
   1.98287e-05,
   2.56404e-05,
   3.43133e-05,
   4.556059e-05,
   6.304045e-05,
   8.591597e-05,
   0.0001166885,
   0.0001658072,
   0.0002261821,
   0.000325259,
   0.00048148,
   0.0007257065,
   0.00112798,
   0.001808184,
   0.003014213,
   0.005049108,
   0.009071275,
   0.01795804,
   0.0389835,
   0.09469534,
   0.2980738,
   0.8209643,
   1};
   Double_t Graph_fy226[41] = {
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
   0,
   0,
   0.000121867,
   0.0002926683,
   0.0002926683,
   0.0003446236,
   0.0004800734,
   0.0007895897,
   0.0007895897,
   0.001275305,
   0.002082376,
   0.004347514,
   0.006688291,
   0.015752,
   0.03232763,
   0.05498294,
   0.1034802,
   0.2396632,
   0.5715408,
   0.9284294,
   1};
   graph = new TGraph(41,Graph_fx226,Graph_fy226);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph226 = new TH1F("Graph_Graph226","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph226->SetMinimum(0);
   Graph_Graph226->SetMaximum(1.1);
   Graph_Graph226->SetDirectory(0);
   Graph_Graph226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph226->SetLineColor(ci);
   Graph_Graph226->GetXaxis()->SetLabelFont(42);
   Graph_Graph226->GetXaxis()->SetTitleOffset(1);
   Graph_Graph226->GetXaxis()->SetTitleFont(42);
   Graph_Graph226->GetYaxis()->SetLabelFont(42);
   Graph_Graph226->GetYaxis()->SetTitleFont(42);
   Graph_Graph226->GetZaxis()->SetLabelFont(42);
   Graph_Graph226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph226);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx227[41] = {
   0,
   6.154324e-08,
   1.136621e-07,
   2.170233e-07,
   3.313803e-07,
   4.396306e-07,
   6.471418e-07,
   8.750163e-07,
   1.140461e-06,
   1.528433e-06,
   2.020802e-06,
   2.656754e-06,
   3.604196e-06,
   4.849224e-06,
   6.428822e-06,
   8.408788e-06,
   1.118568e-05,
   1.487988e-05,
   1.997327e-05,
   2.657398e-05,
   3.595447e-05,
   4.844877e-05,
   6.664775e-05,
   9.173186e-05,
   0.0001266604,
   0.0001761144,
   0.000252057,
   0.0003668514,
   0.0005373386,
   0.0008025317,
   0.001240767,
   0.001938204,
   0.003135011,
   0.005263571,
   0.01002624,
   0.01929952,
   0.04166985,
   0.09939843,
   0.286452,
   0.7261615,
   1};
   Double_t Graph_fy227[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.817576e-05,
   1.817576e-05,
   1.817576e-05,
   1.817576e-05,
   4.299142e-05,
   4.299142e-05,
   4.299142e-05,
   4.299142e-05,
   6.194019e-05,
   0.0001898729,
   0.0001952369,
   0.0001952369,
   0.0003616073,
   0.0003616073,
   0.0004507701,
   0.0005504687,
   0.0006238007,
   0.0008926538,
   0.0009257044,
   0.001394078,
   0.002349009,
   0.003283237,
   0.005043685,
   0.00762698,
   0.01321768,
   0.02336672,
   0.03925089,
   0.07249237,
   0.13421,
   0.2569186,
   0.497824,
   0.8261248,
   1};
   graph = new TGraph(41,Graph_fx227,Graph_fy227);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph227 = new TH1F("Graph_Graph227","Tagging Prioritized",100,0,1.1);
   Graph_Graph227->SetMinimum(0);
   Graph_Graph227->SetMaximum(1.1);
   Graph_Graph227->SetDirectory(0);
   Graph_Graph227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph227->SetLineColor(ci);
   Graph_Graph227->GetXaxis()->SetLabelFont(42);
   Graph_Graph227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph227->GetXaxis()->SetTitleFont(42);
   Graph_Graph227->GetYaxis()->SetLabelFont(42);
   Graph_Graph227->GetYaxis()->SetTitleFont(42);
   Graph_Graph227->GetZaxis()->SetLabelFont(42);
   Graph_Graph227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph227);
   
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
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
