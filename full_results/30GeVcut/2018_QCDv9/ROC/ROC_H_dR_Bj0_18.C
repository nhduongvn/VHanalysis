#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_18/ROC_H_dR_Bj0_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_18 = new TCanvas("ROC_H_dR_Bj0_18", "ROC_H_dR_Bj0_18",0,0,600,600);
   ROC_H_dR_Bj0_18->SetHighLightColor(2);
   ROC_H_dR_Bj0_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj0_18->SetFillColor(0);
   ROC_H_dR_Bj0_18->SetBorderMode(0);
   ROC_H_dR_Bj0_18->SetBorderSize(2);
   ROC_H_dR_Bj0_18->SetGridx();
   ROC_H_dR_Bj0_18->SetGridy();
   ROC_H_dR_Bj0_18->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_18->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_18->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_18->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx57[30] = {
   0,
   0.03320826,
   0.1579467,
   0.2847407,
   0.387294,
   0.4781651,
   0.5481848,
   0.6137057,
   0.6681751,
   0.716359,
   0.7576925,
   0.7950131,
   0.8248037,
   0.8551196,
   0.8849115,
   0.911452,
   0.9336039,
   0.9518338,
   0.9645938,
   0.9734907,
   0.9815218,
   0.9877432,
   0.991487,
   0.993717,
   0.9962526,
   0.997995,
   0.9990499,
   0.9994257,
   0.9997781,
   0.9999347};
   Double_t Graph_fy57[30] = {
   0,
   0.0328628,
   0.1590906,
   0.3115773,
   0.441415,
   0.5493983,
   0.6387205,
   0.7097153,
   0.7625594,
   0.8068789,
   0.8451035,
   0.8739205,
   0.8982945,
   0.9205345,
   0.9411889,
   0.9577272,
   0.9723072,
   0.9830667,
   0.9894047,
   0.9924863,
   0.9952211,
   0.9970656,
   0.9978288,
   0.998638,
   0.9988311,
   0.9994188,
   0.9997565,
   0.9999561,
   0.999989,
   1};
   TGraph *graph = new TGraph(30,Graph_fx57,Graph_fy57);
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
   
   TH1F *Graph_Graph57 = new TH1F("Graph_Graph57","Tagging Only",100,0,1.099928);
   Graph_Graph57->SetMinimum(0);
   Graph_Graph57->SetMaximum(1.1);
   Graph_Graph57->SetDirectory(0);
   Graph_Graph57->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph57->SetLineColor(ci);
   Graph_Graph57->GetXaxis()->SetLabelFont(42);
   Graph_Graph57->GetXaxis()->SetTitleOffset(1);
   Graph_Graph57->GetXaxis()->SetTitleFont(42);
   Graph_Graph57->GetYaxis()->SetLabelFont(42);
   Graph_Graph57->GetYaxis()->SetTitleFont(42);
   Graph_Graph57->GetZaxis()->SetLabelFont(42);
   Graph_Graph57->GetZaxis()->SetTitleOffset(1);
   Graph_Graph57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph57);
   
   TLatex *   tex = new TLatex(0.3597506,0.499235,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(58);
      tex = new TLatex(0.5984818,0.7630125,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(59);
      tex = new TLatex(0.7423756,0.8692656,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(60);
      tex = new TLatex(0.8249508,0.9506376,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(61);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx62[30] = {
   0,
   0.1016251,
   0.3597506,
   0.5984818,
   0.7423756,
   0.8249508,
   0.8685065,
   0.9053814,
   0.9294318,
   0.9483738,
   0.9712549,
   0.9835131,
   0.9866924,
   0.9909038,
   0.9955646,
   0.9969086,
   0.9977278,
   0.9988647,
   0.9989852,
   0.9993161,
   0.9993812,
   0.9996655,
   0.9999855,
   0.9999869,
   0.9999941,
   0.9999946,
   0.9999994,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy62[30] = {
   0,
   0.08865417,
   0.399235,
   0.6630125,
   0.8292656,
   0.9106376,
   0.9529075,
   0.9724337,
   0.9826722,
   0.990514,
   0.9946431,
   0.9971977,
   0.9985741,
   0.9990494,
   0.9990989,
   0.999198,
   0.999198,
   0.9995742,
   0.9995742,
   0.9995742,
   0.9995742,
   0.9999505,
   0.9999505,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx62,Graph_fy62);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph62 = new TH1F("Graph_Graph62","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph62->SetMinimum(0);
   Graph_Graph62->SetMaximum(1.1);
   Graph_Graph62->SetDirectory(0);
   Graph_Graph62->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph62->SetLineColor(ci);
   Graph_Graph62->GetXaxis()->SetLabelFont(42);
   Graph_Graph62->GetXaxis()->SetTitleOffset(1);
   Graph_Graph62->GetXaxis()->SetTitleFont(42);
   Graph_Graph62->GetYaxis()->SetLabelFont(42);
   Graph_Graph62->GetYaxis()->SetTitleFont(42);
   Graph_Graph62->GetZaxis()->SetLabelFont(42);
   Graph_Graph62->GetZaxis()->SetTitleOffset(1);
   Graph_Graph62->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph62);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx63[30] = {
   0,
   0.03323467,
   0.1575907,
   0.2841758,
   0.3872351,
   0.4780461,
   0.5486934,
   0.6140372,
   0.6682896,
   0.7164377,
   0.7575216,
   0.7953661,
   0.8252547,
   0.8555162,
   0.8854577,
   0.9117649,
   0.9338331,
   0.9520906,
   0.9647567,
   0.9736289,
   0.9815713,
   0.9877615,
   0.9915374,
   0.9937659,
   0.9963311,
   0.9980464,
   0.999048,
   0.9994355,
   0.9997815,
   0.9999357};
   Double_t Graph_fy63[30] = {
   0,
   0.03328309,
   0.1598419,
   0.3117608,
   0.4418121,
   0.5495364,
   0.6390424,
   0.7103586,
   0.7632164,
   0.8079355,
   0.8456824,
   0.8740824,
   0.8983695,
   0.9204543,
   0.9409535,
   0.9575945,
   0.9721834,
   0.9831212,
   0.9895113,
   0.9926423,
   0.9953646,
   0.9971259,
   0.9978707,
   0.998671,
   0.9988594,
   0.9994329,
   0.9997624,
   0.9999572,
   0.9999893,
   1};
   graph = new TGraph(30,Graph_fx63,Graph_fy63);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph63 = new TH1F("Graph_Graph63","Tagging Prioritized",100,0,1.099929);
   Graph_Graph63->SetMinimum(0);
   Graph_Graph63->SetMaximum(1.1);
   Graph_Graph63->SetDirectory(0);
   Graph_Graph63->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph63->SetLineColor(ci);
   Graph_Graph63->GetXaxis()->SetLabelFont(42);
   Graph_Graph63->GetXaxis()->SetTitleOffset(1);
   Graph_Graph63->GetXaxis()->SetTitleFont(42);
   Graph_Graph63->GetYaxis()->SetLabelFont(42);
   Graph_Graph63->GetYaxis()->SetTitleFont(42);
   Graph_Graph63->GetZaxis()->SetLabelFont(42);
   Graph_Graph63->GetZaxis()->SetTitleOffset(1);
   Graph_Graph63->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph63);
   
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
   ROC_H_dR_Bj0_18->Modified();
   ROC_H_dR_Bj0_18->cd();
   ROC_H_dR_Bj0_18->SetSelected(ROC_H_dR_Bj0_18);
}
