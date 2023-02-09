#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_18/ROC_Z_dR_Bj0_18
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_18 = new TCanvas("ROC_Z_dR_Bj0_18", "ROC_Z_dR_Bj0_18",0,0,600,600);
   ROC_Z_dR_Bj0_18->SetHighLightColor(2);
   ROC_Z_dR_Bj0_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_18->SetFillColor(0);
   ROC_Z_dR_Bj0_18->SetBorderMode(0);
   ROC_Z_dR_Bj0_18->SetBorderSize(2);
   ROC_Z_dR_Bj0_18->SetGridx();
   ROC_Z_dR_Bj0_18->SetGridy();
   ROC_Z_dR_Bj0_18->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_18->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_18->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_18->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2068[30] = {
   0,
   0.03733528,
   0.1929961,
   0.3354007,
   0.456136,
   0.5483653,
   0.6212856,
   0.6843854,
   0.7336034,
   0.7769586,
   0.8162253,
   0.8451011,
   0.871695,
   0.8941349,
   0.9137219,
   0.9320562,
   0.9527647,
   0.9653341,
   0.9738377,
   0.9831402,
   0.9883272,
   0.99239,
   0.9950622,
   0.9968015,
   0.9979659,
   0.9984276,
   0.9988591,
   0.9995211,
   0.9996264,
   0.9997075};
   Double_t Graph_fy2068[30] = {
   0,
   0.04290773,
   0.1914,
   0.3690863,
   0.5209536,
   0.6320049,
   0.7159599,
   0.7786632,
   0.8211243,
   0.8519469,
   0.8796683,
   0.9016872,
   0.9215432,
   0.9383312,
   0.9532995,
   0.967172,
   0.9806681,
   0.9870708,
   0.9914631,
   0.9952171,
   0.9973846,
   0.998347,
   0.9991282,
   0.9994617,
   0.9997571,
   0.9999238,
   0.9999619,
   0.9999809,
   0.9999809,
   0.9999809};
   TGraph *graph = new TGraph(30,Graph_fx2068,Graph_fy2068);
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
   
   TH1F *Graph_Graph2068 = new TH1F("Graph_Graph2068","Tagging Only",100,0,1.099678);
   Graph_Graph2068->SetMinimum(0);
   Graph_Graph2068->SetMaximum(1.099979);
   Graph_Graph2068->SetDirectory(0);
   Graph_Graph2068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2068->SetLineColor(ci);
   Graph_Graph2068->GetXaxis()->SetLabelFont(42);
   Graph_Graph2068->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2068->GetXaxis()->SetTitleFont(42);
   Graph_Graph2068->GetYaxis()->SetLabelFont(42);
   Graph_Graph2068->GetYaxis()->SetTitleFont(42);
   Graph_Graph2068->GetZaxis()->SetLabelFont(42);
   Graph_Graph2068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2068->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2068);
   
   TLatex *   tex = new TLatex(0.1929961,0.2514,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2069);
      tex = new TLatex(0.3354007,0.4290863,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2070);
      tex = new TLatex(0.456136,0.5809536,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2071);
      tex = new TLatex(0.5483653,0.6920049,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2072);
      tex = new TLatex(0.6212856,0.7759599,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2073);
      tex = new TLatex(0.6843854,0.8386632,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2074);
      tex = new TLatex(0.7336034,0.8811243,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2075);
      tex = new TLatex(0.7769586,0.9119469,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2076);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2077[30] = {
   0,
   0.05816912,
   0.33675,
   0.5473046,
   0.6902666,
   0.7932061,
   0.8466744,
   0.8922546,
   0.9099095,
   0.9401181,
   0.9610095,
   0.9762064,
   0.9843587,
   0.9878212,
   0.9935017,
   0.9950893,
   0.995997,
   0.9986153,
   0.9988958,
   0.9991226,
   0.9993251,
   0.99951,
   0.9995204,
   0.9995266,
   0.9995693,
   0.9998206,
   0.999999,
   0.9999995,
   0.9999997,
   0.9999999};
   Double_t Graph_fy2077[30] = {
   0,
   0.04051383,
   0.329212,
   0.6285661,
   0.8065038,
   0.901287,
   0.9436852,
   0.9653603,
   0.9765421,
   0.9844627,
   0.9901753,
   0.9949561,
   0.997083,
   0.9988049,
   0.9988859,
   0.999757,
   0.999838,
   0.999919,
   0.999919,
   0.999919,
   0.999919,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx2077,Graph_fy2077);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2077 = new TH1F("Graph_Graph2077","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2077->SetMinimum(0);
   Graph_Graph2077->SetMaximum(1.1);
   Graph_Graph2077->SetDirectory(0);
   Graph_Graph2077->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2077->SetLineColor(ci);
   Graph_Graph2077->GetXaxis()->SetLabelFont(42);
   Graph_Graph2077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2077->GetXaxis()->SetTitleFont(42);
   Graph_Graph2077->GetYaxis()->SetLabelFont(42);
   Graph_Graph2077->GetYaxis()->SetTitleFont(42);
   Graph_Graph2077->GetZaxis()->SetLabelFont(42);
   Graph_Graph2077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2077->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2077);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2078[30] = {
   0,
   0.03748597,
   0.19267,
   0.3343165,
   0.4542511,
   0.5475343,
   0.6204234,
   0.6836225,
   0.7337099,
   0.7770552,
   0.8159199,
   0.8442192,
   0.870866,
   0.8936152,
   0.9133498,
   0.9317927,
   0.952635,
   0.9654099,
   0.9738954,
   0.9831557,
   0.9885061,
   0.9925337,
   0.9951381,
   0.9968493,
   0.9980125,
   0.99846,
   0.9988825,
   0.9995318,
   0.9996359,
   0.9997151};
   Double_t Graph_fy2078[30] = {
   0,
   0.04441831,
   0.1944858,
   0.3727749,
   0.5217567,
   0.6320324,
   0.7151218,
   0.7764767,
   0.8179712,
   0.8484559,
   0.8755636,
   0.896838,
   0.9178236,
   0.9352607,
   0.9507687,
   0.9642973,
   0.9791651,
   0.986124,
   0.9906851,
   0.9949032,
   0.9971964,
   0.9983346,
   0.999071,
   0.9993807,
   0.9996401,
   0.9998996,
   0.9999498,
   0.9999665,
   0.9999665,
   0.9999665};
   graph = new TGraph(30,Graph_fx2078,Graph_fy2078);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2078 = new TH1F("Graph_Graph2078","Tagging Prioritized",100,0,1.099687);
   Graph_Graph2078->SetMinimum(0);
   Graph_Graph2078->SetMaximum(1.099963);
   Graph_Graph2078->SetDirectory(0);
   Graph_Graph2078->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2078->SetLineColor(ci);
   Graph_Graph2078->GetXaxis()->SetLabelFont(42);
   Graph_Graph2078->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2078->GetXaxis()->SetTitleFont(42);
   Graph_Graph2078->GetYaxis()->SetLabelFont(42);
   Graph_Graph2078->GetYaxis()->SetTitleFont(42);
   Graph_Graph2078->GetZaxis()->SetLabelFont(42);
   Graph_Graph2078->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2078->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2078);
   
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
   ROC_Z_dR_Bj0_18->Modified();
   ROC_Z_dR_Bj0_18->cd();
   ROC_Z_dR_Bj0_18->SetSelected(ROC_Z_dR_Bj0_18);
}
