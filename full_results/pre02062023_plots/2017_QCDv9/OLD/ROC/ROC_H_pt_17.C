#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_17()
{
//=========Macro generated from canvas: ROC_H_pt_17/ROC_H_pt_17
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_17 = new TCanvas("ROC_H_pt_17", "ROC_H_pt_17",0,0,600,600);
   ROC_H_pt_17->SetHighLightColor(2);
   ROC_H_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_17->SetFillColor(0);
   ROC_H_pt_17->SetBorderMode(0);
   ROC_H_pt_17->SetBorderSize(2);
   ROC_H_pt_17->SetGridx();
   ROC_H_pt_17->SetGridy();
   ROC_H_pt_17->SetLeftMargin(0.15709);
   ROC_H_pt_17->SetRightMargin(0.1234783);
   ROC_H_pt_17->SetBottomMargin(0.12);
   ROC_H_pt_17->SetFrameBorderMode(0);
   ROC_H_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx155[40] = {
   0,
   0.3290386,
   0.759368,
   0.9152744,
   0.9645851,
   0.9831864,
   0.991101,
   0.9949557,
   0.9972436,
   0.998287,
   0.9989142,
   0.9992937,
   0.9995304,
   0.9996814,
   0.9997828,
   0.9998477,
   0.9998922,
   0.9999221,
   0.9999435,
   0.9999587,
   0.9999699,
   0.9999776,
   0.9999834,
   0.9999876,
   0.9999906,
   0.9999929,
   0.9999946,
   0.9999959,
   0.9999969,
   0.9999976,
   0.9999982,
   0.9999987,
   0.999999,
   0.9999993,
   0.9999995,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   Double_t Graph_fy155[40] = {
   0,
   0.1960761,
   0.5317251,
   0.7589247,
   0.8855241,
   0.9401007,
   0.9666373,
   0.9807122,
   0.9895634,
   0.9954379,
   0.9971115,
   0.9985462,
   0.9991814,
   0.9992675,
   0.9995755,
   0.999703,
   0.9998643,
   0.9998643,
   0.9998643,
   0.9998643,
   0.9998643,
   0.9998643,
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
   1,
   1,
   1};
   TGraph *graph = new TGraph(40,Graph_fx155,Graph_fy155);
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
   
   TH1F *Graph_Graph155 = new TH1F("Graph_Graph155","Tagging Only",100,0,1.1);
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
   
   TLatex *   tex = new TLatex(0.3290386,0.2560761,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(156);
      tex = new TLatex(0.759368,0.5917251,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(157);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx158[40] = {
   0,
   0.1451374,
   0.5982057,
   0.8635138,
   0.9483813,
   0.975933,
   0.9884766,
   0.9938777,
   0.9964926,
   0.9978497,
   0.9986542,
   0.9991516,
   0.9994384,
   0.999622,
   0.9997411,
   0.9998164,
   0.9998699,
   0.999904,
   0.9999299,
   0.999949,
   0.999963,
   0.999973,
   0.99998,
   0.9999848,
   0.9999879,
   0.9999908,
   0.9999931,
   0.999995,
   0.9999962,
   0.9999971,
   0.999998,
   0.9999985,
   0.9999988,
   0.9999991,
   0.9999993,
   0.9999995,
   0.9999997,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy158[40] = {
   0,
   0.05671904,
   0.3356283,
   0.6466732,
   0.8438284,
   0.9197035,
   0.9504613,
   0.9680508,
   0.9842436,
   0.9949441,
   0.997269,
   0.998097,
   0.9993195,
   0.9995097,
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
   graph = new TGraph(40,Graph_fx158,Graph_fy158);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph158->SetMinimum(0);
   Graph_Graph158->SetMaximum(1.1);
   Graph_Graph158->SetDirectory(0);
   Graph_Graph158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph158->SetLineColor(ci);
   Graph_Graph158->GetXaxis()->SetLabelFont(42);
   Graph_Graph158->GetXaxis()->SetTitleOffset(1);
   Graph_Graph158->GetXaxis()->SetTitleFont(42);
   Graph_Graph158->GetYaxis()->SetLabelFont(42);
   Graph_Graph158->GetYaxis()->SetTitleFont(42);
   Graph_Graph158->GetZaxis()->SetLabelFont(42);
   Graph_Graph158->GetZaxis()->SetTitleOffset(1);
   Graph_Graph158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph158);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx159[40] = {
   0,
   0.32902,
   0.7578802,
   0.9140829,
   0.9637076,
   0.9826824,
   0.9909546,
   0.9948715,
   0.9971788,
   0.9982434,
   0.9988839,
   0.9992719,
   0.9995144,
   0.99967,
   0.9997747,
   0.9998415,
   0.9998878,
   0.9999188,
   0.999941,
   0.9999569,
   0.9999685,
   0.9999766,
   0.9999826,
   0.999987,
   0.9999901,
   0.9999925,
   0.9999944,
   0.9999957,
   0.9999968,
   0.9999975,
   0.9999981,
   0.9999986,
   0.9999989,
   0.9999992,
   0.9999994,
   0.9999996,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   Double_t Graph_fy159[40] = {
   0,
   0.1904194,
   0.5250087,
   0.7534152,
   0.8817261,
   0.9369305,
   0.9648007,
   0.9789305,
   0.9883006,
   0.9940781,
   0.9963507,
   0.9979099,
   0.9988983,
   0.9991301,
   0.9994323,
   0.9995528,
   0.9997817,
   0.999795,
   0.999795,
   0.999795,
   0.999795,
   0.9998835,
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
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx159,Graph_fy159);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph159 = new TH1F("Graph_Graph159","Tagging Prioritized",100,0,1.1);
   Graph_Graph159->SetMinimum(0);
   Graph_Graph159->SetMaximum(1.1);
   Graph_Graph159->SetDirectory(0);
   Graph_Graph159->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph159->SetLineColor(ci);
   Graph_Graph159->GetXaxis()->SetLabelFont(42);
   Graph_Graph159->GetXaxis()->SetTitleOffset(1);
   Graph_Graph159->GetXaxis()->SetTitleFont(42);
   Graph_Graph159->GetYaxis()->SetLabelFont(42);
   Graph_Graph159->GetYaxis()->SetTitleFont(42);
   Graph_Graph159->GetZaxis()->SetLabelFont(42);
   Graph_Graph159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph159->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph159);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_pt_17->Modified();
   ROC_H_pt_17->cd();
   ROC_H_pt_17->SetSelected(ROC_H_pt_17);
}
