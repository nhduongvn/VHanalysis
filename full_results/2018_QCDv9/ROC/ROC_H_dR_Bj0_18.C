#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_18/ROC_H_dR_Bj0_18
//=========  (Thu Jan 19 10:33:19 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx97[30] = {
   0,
   0.02836251,
   0.1484075,
   0.2960867,
   0.4294303,
   0.5388187,
   0.6284106,
   0.6965336,
   0.7563619,
   0.8020347,
   0.8332612,
   0.86323,
   0.8888965,
   0.9117662,
   0.9327347,
   0.9517928,
   0.9686449,
   0.9789505,
   0.9853159,
   0.9906568,
   0.9939348,
   0.9960836,
   0.9977703,
   0.9988661,
   0.9991853,
   0.9994092,
   0.9997951,
   0.9997951,
   0.9999619,
   0.9999809};
   Double_t Graph_fy97[30] = {
   0,
   0.0265606,
   0.1334601,
   0.2527171,
   0.363221,
   0.4546781,
   0.5299268,
   0.590674,
   0.6530855,
   0.7031865,
   0.7481403,
   0.7881532,
   0.8221041,
   0.8546432,
   0.8825629,
   0.9066113,
   0.9309652,
   0.9488755,
   0.9608712,
   0.9724354,
   0.9796048,
   0.9848885,
   0.9898852,
   0.9934791,
   0.9950059,
   0.9978653,
   0.9989799,
   0.999292,
   0.9997681,
   0.9999302};
   TGraph *graph = new TGraph(30,Graph_fx97,Graph_fy97);
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
   
   TH1F *Graph_Graph97 = new TH1F("Graph_Graph97","Tagging Only",100,0,1.099979);
   Graph_Graph97->SetMinimum(0);
   Graph_Graph97->SetMaximum(1.099923);
   Graph_Graph97->SetDirectory(0);
   Graph_Graph97->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph97->SetLineColor(ci);
   Graph_Graph97->GetXaxis()->SetLabelFont(42);
   Graph_Graph97->GetXaxis()->SetTitleOffset(1);
   Graph_Graph97->GetXaxis()->SetTitleFont(42);
   Graph_Graph97->GetYaxis()->SetLabelFont(42);
   Graph_Graph97->GetYaxis()->SetTitleFont(42);
   Graph_Graph97->GetZaxis()->SetLabelFont(42);
   Graph_Graph97->GetZaxis()->SetTitleOffset(1);
   Graph_Graph97->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph97);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx98[30] = {
   0,
   0.07620567,
   0.3392782,
   0.6075592,
   0.8024321,
   0.8939742,
   0.9429561,
   0.9651374,
   0.9817687,
   0.9875824,
   0.9908843,
   0.9928493,
   0.996921,
   0.998967,
   0.999757,
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
   Double_t Graph_fy98[30] = {
   0,
   0.08936199,
   0.3248766,
   0.5312218,
   0.6918517,
   0.7846788,
   0.8533716,
   0.8885288,
   0.920615,
   0.9360293,
   0.9576857,
   0.9675708,
   0.9723796,
   0.9760264,
   0.9860664,
   0.9952256,
   0.9978567,
   0.9986463,
   0.9989156,
   0.9993538,
   0.9995864,
   0.9997728,
   0.9999893,
   0.9999903,
   0.9999957,
   0.9999962,
   0.9999996,
   0.9999998,
   0.9999998,
   0.9999999};
   graph = new TGraph(30,Graph_fx98,Graph_fy98);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph98 = new TH1F("Graph_Graph98","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph98->SetMinimum(0);
   Graph_Graph98->SetMaximum(1.1);
   Graph_Graph98->SetDirectory(0);
   Graph_Graph98->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph98->SetLineColor(ci);
   Graph_Graph98->GetXaxis()->SetLabelFont(42);
   Graph_Graph98->GetXaxis()->SetTitleOffset(1);
   Graph_Graph98->GetXaxis()->SetTitleFont(42);
   Graph_Graph98->GetYaxis()->SetLabelFont(42);
   Graph_Graph98->GetYaxis()->SetTitleFont(42);
   Graph_Graph98->GetZaxis()->SetLabelFont(42);
   Graph_Graph98->GetZaxis()->SetTitleOffset(1);
   Graph_Graph98->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph98);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx99[30] = {
   0,
   0.02858731,
   0.1465659,
   0.2915086,
   0.4235205,
   0.5315194,
   0.6204386,
   0.6888682,
   0.7492249,
   0.7942057,
   0.8284224,
   0.8588811,
   0.8849957,
   0.9084946,
   0.9309682,
   0.9507382,
   0.9677629,
   0.978171,
   0.9846619,
   0.9905879,
   0.9937309,
   0.9957983,
   0.9976522,
   0.9988575,
   0.9992676,
   0.9994643,
   0.99982,
   0.99982,
   0.9999665,
   0.9999833};
   Double_t Graph_fy99[30] = {
   0,
   0.02680676,
   0.1339386,
   0.2531101,
   0.3629692,
   0.4546863,
   0.5295045,
   0.5904063,
   0.6526413,
   0.7020935,
   0.747366,
   0.7874665,
   0.8213853,
   0.8537762,
   0.882442,
   0.9062767,
   0.9306265,
   0.9491672,
   0.9610337,
   0.9727604,
   0.9798293,
   0.9850661,
   0.9899703,
   0.9935061,
   0.9950501,
   0.9978843,
   0.9989528,
   0.9992838,
   0.9997474,
   0.9999274};
   graph = new TGraph(30,Graph_fx99,Graph_fy99);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph99 = new TH1F("Graph_Graph99","Tagging Prioritized",100,0,1.099982);
   Graph_Graph99->SetMinimum(0);
   Graph_Graph99->SetMaximum(1.09992);
   Graph_Graph99->SetDirectory(0);
   Graph_Graph99->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph99->SetLineColor(ci);
   Graph_Graph99->GetXaxis()->SetLabelFont(42);
   Graph_Graph99->GetXaxis()->SetTitleOffset(1);
   Graph_Graph99->GetXaxis()->SetTitleFont(42);
   Graph_Graph99->GetYaxis()->SetLabelFont(42);
   Graph_Graph99->GetYaxis()->SetTitleFont(42);
   Graph_Graph99->GetZaxis()->SetLabelFont(42);
   Graph_Graph99->GetZaxis()->SetTitleOffset(1);
   Graph_Graph99->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph99);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_Bj0_18->Modified();
   ROC_H_dR_Bj0_18->cd();
   ROC_H_dR_Bj0_18->SetSelected(ROC_H_dR_Bj0_18);
}
