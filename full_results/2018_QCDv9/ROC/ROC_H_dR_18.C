#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_18()
{
//=========Macro generated from canvas: ROC_H_dR_18/ROC_H_dR_18
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_18 = new TCanvas("ROC_H_dR_18", "ROC_H_dR_18",0,0,600,600);
   ROC_H_dR_18->SetHighLightColor(2);
   ROC_H_dR_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_18->SetFillColor(0);
   ROC_H_dR_18->SetBorderMode(0);
   ROC_H_dR_18->SetBorderSize(2);
   ROC_H_dR_18->SetGridx();
   ROC_H_dR_18->SetGridy();
   ROC_H_dR_18->SetLeftMargin(0.15709);
   ROC_H_dR_18->SetRightMargin(0.1234783);
   ROC_H_dR_18->SetBottomMargin(0.12);
   ROC_H_dR_18->SetFrameBorderMode(0);
   ROC_H_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx29[30] = {
   0,
   0,
   1.538045e-05,
   0.04536827,
   0.09616093,
   0.1380851,
   0.1738918,
   0.2180386,
   0.2562091,
   0.2997913,
   0.3488077,
   0.3995723,
   0.4523827,
   0.5144832,
   0.5998985,
   0.6832192,
   0.7762681,
   0.8387639,
   0.8828047,
   0.9159626,
   0.9406075,
   0.9615535,
   0.9751664,
   0.9853369,
   0.9921816,
   0.9961975,
   0.9990921,
   0.9998055,
   0.9999636,
   1};
   Double_t Graph_fy29[30] = {
   0,
   0,
   0,
   0.02667314,
   0.08398709,
   0.1619099,
   0.2706253,
   0.3737041,
   0.456938,
   0.5275671,
   0.579968,
   0.6311696,
   0.6854349,
   0.7395167,
   0.8009508,
   0.8677003,
   0.9359519,
   0.9617379,
   0.9758988,
   0.9850177,
   0.9903193,
   0.9937006,
   0.9965018,
   0.9980102,
   0.9989777,
   0.999828,
   0.9998975,
   0.9999616,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx29,Graph_fy29);
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
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","Tagging Only",100,0,1.1);
   Graph_Graph29->SetMinimum(0);
   Graph_Graph29->SetMaximum(1.1);
   Graph_Graph29->SetDirectory(0);
   Graph_Graph29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph29->SetLineColor(ci);
   Graph_Graph29->GetXaxis()->SetLabelFont(42);
   Graph_Graph29->GetXaxis()->SetTitleOffset(1);
   Graph_Graph29->GetXaxis()->SetTitleFont(42);
   Graph_Graph29->GetYaxis()->SetLabelFont(42);
   Graph_Graph29->GetYaxis()->SetTitleFont(42);
   Graph_Graph29->GetZaxis()->SetLabelFont(42);
   Graph_Graph29->GetZaxis()->SetTitleOffset(1);
   Graph_Graph29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph29);
   
   TLatex *   tex = new TLatex(0.1596678,0.3145708,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(30);
      tex = new TLatex(0.2035091,0.4968471,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(31);
      tex = new TLatex(0.2557051,0.6564699,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(32);
      tex = new TLatex(0.2991567,0.7738945,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(33);
      tex = new TLatex(0.3731294,0.8748657,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(34);
      tex = new TLatex(0.4526322,0.8744613,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(35);
      tex = new TLatex(0.5135056,0.9096666,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(36);
      tex = new TLatex(0.5758812,0.9366553,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(37);
      tex = new TLatex(0.639722,0.965736,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(38);
      tex = new TLatex(0.7634608,0.9862861,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(39);
      tex = new TLatex(0.8333534,1.001248,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(40);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx41[30] = {
   0,
   0,
   6.012228e-07,
   0.04966613,
   0.1153684,
   0.1596678,
   0.2035091,
   0.2557051,
   0.2991567,
   0.3731294,
   0.4526322,
   0.5135056,
   0.5758812,
   0.639722,
   0.7634608,
   0.8333534,
   0.8946777,
   0.933163,
   0.9651194,
   0.9812669,
   0.990938,
   0.9944283,
   0.9982036,
   0.999441,
   0.9998432,
   0.999931,
   0.9999604,
   0.9999965,
   1,
   1};
   Double_t Graph_fy41[30] = {
   0,
   0,
   0,
   0.02854546,
   0.1062385,
   0.2145708,
   0.3968471,
   0.5564699,
   0.6738945,
   0.7748657,
   0.8344613,
   0.8696666,
   0.8966553,
   0.925736,
   0.9462861,
   0.9612475,
   0.979862,
   0.9898079,
   0.9968029,
   0.9986484,
   0.9996431,
   0.9998946,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx41,Graph_fy41);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph41->SetMinimum(0);
   Graph_Graph41->SetMaximum(1.1);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetTitleOffset(1);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetTitleOffset(1);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph41);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx42[30] = {
   0,
   0,
   1.519165e-05,
   0.04526214,
   0.09592059,
   0.1378244,
   0.173664,
   0.2177916,
   0.2559793,
   0.2996901,
   0.3488956,
   0.3996444,
   0.4525906,
   0.5146562,
   0.5999294,
   0.6832475,
   0.7764278,
   0.8388435,
   0.8829293,
   0.916237,
   0.9408289,
   0.9616645,
   0.9751721,
   0.9853714,
   0.9923101,
   0.9962956,
   0.9991016,
   0.999805,
   0.9999642,
   1};
   Double_t Graph_fy42[30] = {
   0,
   0,
   0,
   0.02684229,
   0.08441022,
   0.1620498,
   0.2712058,
   0.3733422,
   0.4578821,
   0.5288787,
   0.582385,
   0.6337204,
   0.6873752,
   0.7407574,
   0.8018161,
   0.8684029,
   0.9347387,
   0.9609208,
   0.9754598,
   0.9851193,
   0.9904114,
   0.9937867,
   0.9965318,
   0.997834,
   0.9989715,
   0.9998315,
   0.9998995,
   0.9999624,
   1,
   1};
   graph = new TGraph(30,Graph_fx42,Graph_fy42);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","Tagging Prioritized",100,0,1.1);
   Graph_Graph42->SetMinimum(0);
   Graph_Graph42->SetMaximum(1.1);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetTitleOffset(1);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetTitleOffset(1);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph42);
   
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
   ROC_H_dR_18->Modified();
   ROC_H_dR_18->cd();
   ROC_H_dR_18->SetSelected(ROC_H_dR_18);
}
