#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_17/ROC_H_dR_Bj1_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_17 = new TCanvas("ROC_H_dR_Bj1_17", "ROC_H_dR_Bj1_17",0,0,600,600);
   ROC_H_dR_Bj1_17->SetHighLightColor(2);
   ROC_H_dR_Bj1_17->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_17->SetFillColor(0);
   ROC_H_dR_Bj1_17->SetBorderMode(0);
   ROC_H_dR_Bj1_17->SetBorderSize(2);
   ROC_H_dR_Bj1_17->SetGridx();
   ROC_H_dR_Bj1_17->SetGridy();
   ROC_H_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx78[30] = {
   0,
   0.02765763,
   0.1407683,
   0.2576272,
   0.3690764,
   0.4648429,
   0.5418838,
   0.6077449,
   0.6633012,
   0.71379,
   0.7531314,
   0.7917686,
   0.8286502,
   0.85956,
   0.8866208,
   0.9127623,
   0.9365426,
   0.9540188,
   0.9673512,
   0.976513,
   0.9839397,
   0.9881906,
   0.9919381,
   0.9947729,
   0.9967677,
   0.9981556,
   0.9990836,
   0.9996184,
   0.9998245,
   0.9999293};
   Double_t Graph_fy78[30] = {
   0,
   0.02974588,
   0.1443293,
   0.281216,
   0.4106649,
   0.5161873,
   0.6101351,
   0.6803957,
   0.7374238,
   0.7821871,
   0.820739,
   0.853514,
   0.882986,
   0.9087879,
   0.9321914,
   0.953088,
   0.9712597,
   0.9825453,
   0.9890167,
   0.9927614,
   0.9951925,
   0.9967564,
   0.997479,
   0.9981163,
   0.9987904,
   0.9993666,
   0.9994949,
   0.9997474,
   0.999835,
   1};
   TGraph *graph = new TGraph(30,Graph_fx78,Graph_fy78);
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
   
   TH1F *Graph_Graph78 = new TH1F("Graph_Graph78","Tagging Only",100,0,1.099922);
   Graph_Graph78->SetMinimum(0);
   Graph_Graph78->SetMaximum(1.1);
   Graph_Graph78->SetDirectory(0);
   Graph_Graph78->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph78->SetLineColor(ci);
   Graph_Graph78->GetXaxis()->SetLabelFont(42);
   Graph_Graph78->GetXaxis()->SetTitleOffset(1);
   Graph_Graph78->GetXaxis()->SetTitleFont(42);
   Graph_Graph78->GetYaxis()->SetLabelFont(42);
   Graph_Graph78->GetYaxis()->SetTitleFont(42);
   Graph_Graph78->GetZaxis()->SetLabelFont(42);
   Graph_Graph78->GetZaxis()->SetTitleOffset(1);
   Graph_Graph78->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph78);
   
   TLatex *   tex = new TLatex(0.2578252,0.3847077,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(79);
      tex = new TLatex(0.3689509,0.5138547,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(80);
      tex = new TLatex(0.4642736,0.6199667,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(81);
      tex = new TLatex(0.5420359,0.7134517,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(82);
      tex = new TLatex(0.6075582,0.7839347,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(83);
      tex = new TLatex(0.5516945,0.8578903,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(84);
      tex = new TLatex(0.6042079,0.8684251,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(85);
      tex = new TLatex(0.659434,0.9203581,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(86);
      tex = new TLatex(0.7246478,0.953497,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(87);
      tex = new TLatex(0.7839591,0.9808025,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(88);
      tex = new TLatex(0.8218259,0.9948256,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(89);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx90[30] = {
   0,
   2.701306e-07,
   0.05595977,
   0.1493569,
   0.2350586,
   0.3273146,
   0.4050231,
   0.4884528,
   0.5516945,
   0.6042079,
   0.659434,
   0.7246478,
   0.7839591,
   0.8218259,
   0.8637246,
   0.9008136,
   0.9383968,
   0.9601613,
   0.9771468,
   0.9839918,
   0.9900927,
   0.9932625,
   0.9975915,
   0.9986863,
   0.9994,
   0.9996947,
   0.9999487,
   0.999995,
   0.9999996,
   0.9999999};
   Double_t Graph_fy90[30] = {
   0,
   0,
   0.0129107,
   0.09137124,
   0.2223414,
   0.3837249,
   0.5353926,
   0.660899,
   0.7578903,
   0.8284251,
   0.8803581,
   0.913497,
   0.9408025,
   0.9548256,
   0.9693048,
   0.9851335,
   0.99355,
   0.9965232,
   0.9980336,
   0.9991354,
   0.9991829,
   0.9992303,
   0.9995914,
   0.9996389,
   0.9996389,
   0.9996389,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx90,Graph_fy90);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph90 = new TH1F("Graph_Graph90","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph90->SetMinimum(0);
   Graph_Graph90->SetMaximum(1.1);
   Graph_Graph90->SetDirectory(0);
   Graph_Graph90->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph90->SetLineColor(ci);
   Graph_Graph90->GetXaxis()->SetLabelFont(42);
   Graph_Graph90->GetXaxis()->SetTitleOffset(1);
   Graph_Graph90->GetXaxis()->SetTitleFont(42);
   Graph_Graph90->GetYaxis()->SetLabelFont(42);
   Graph_Graph90->GetYaxis()->SetTitleFont(42);
   Graph_Graph90->GetZaxis()->SetLabelFont(42);
   Graph_Graph90->GetZaxis()->SetTitleOffset(1);
   Graph_Graph90->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph90);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx91[30] = {
   0,
   0.02772434,
   0.1411358,
   0.2578252,
   0.3689509,
   0.4642736,
   0.5420359,
   0.6075582,
   0.6630628,
   0.7133443,
   0.7525113,
   0.7914689,
   0.8280673,
   0.8593891,
   0.8867309,
   0.9130582,
   0.9367151,
   0.9540288,
   0.9676094,
   0.976669,
   0.9840314,
   0.9882474,
   0.991956,
   0.9947941,
   0.9968079,
   0.9981756,
   0.9990919,
   0.9996225,
   0.9998273,
   0.9999302};
   Double_t Graph_fy91[30] = {
   0,
   0.02996383,
   0.146494,
   0.2847077,
   0.4138547,
   0.5199667,
   0.6134517,
   0.6839347,
   0.7404272,
   0.7852016,
   0.8232386,
   0.855493,
   0.8850468,
   0.9105321,
   0.9333549,
   0.9542381,
   0.972333,
   0.9831495,
   0.9894388,
   0.9929719,
   0.9953642,
   0.9968248,
   0.9975498,
   0.9981717,
   0.9988195,
   0.9993819,
   0.9995071,
   0.9997535,
   0.999839,
   1};
   graph = new TGraph(30,Graph_fx91,Graph_fy91);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph91 = new TH1F("Graph_Graph91","Tagging Prioritized",100,0,1.099923);
   Graph_Graph91->SetMinimum(0);
   Graph_Graph91->SetMaximum(1.1);
   Graph_Graph91->SetDirectory(0);
   Graph_Graph91->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph91->SetLineColor(ci);
   Graph_Graph91->GetXaxis()->SetLabelFont(42);
   Graph_Graph91->GetXaxis()->SetTitleOffset(1);
   Graph_Graph91->GetXaxis()->SetTitleFont(42);
   Graph_Graph91->GetYaxis()->SetLabelFont(42);
   Graph_Graph91->GetYaxis()->SetTitleFont(42);
   Graph_Graph91->GetZaxis()->SetLabelFont(42);
   Graph_Graph91->GetZaxis()->SetTitleOffset(1);
   Graph_Graph91->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph91);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_Bj1_17->Modified();
   ROC_H_dR_Bj1_17->cd();
   ROC_H_dR_Bj1_17->SetSelected(ROC_H_dR_Bj1_17);
}
