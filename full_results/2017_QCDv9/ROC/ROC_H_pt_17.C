#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_17()
{
//=========Macro generated from canvas: ROC_H_pt_17/ROC_H_pt_17
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx208[41] = {
   0,
   2.666136e-07,
   8.042169e-07,
   1.217602e-06,
   1.872553e-06,
   2.525797e-06,
   3.484301e-06,
   4.498547e-06,
   5.940722e-06,
   7.454811e-06,
   9.817516e-06,
   1.301883e-05,
   1.749462e-05,
   2.328872e-05,
   3.024371e-05,
   4.023636e-05,
   5.301201e-05,
   6.965224e-05,
   9.327291e-05,
   0.0001249829,
   0.0001684296,
   0.0002288545,
   0.0003139764,
   0.0004294021,
   0.0005871875,
   0.0008216448,
   0.00115359,
   0.001678416,
   0.002469626,
   0.003657617,
   0.005569239,
   0.008655948,
   0.01365167,
   0.02233521,
   0.03854149,
   0.07023054,
   0.1359135,
   0.2876856,
   0.5744403,
   0.8330182,
   1};
   Double_t Graph_fy208[41] = {
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
   0.0002641446,
   0.0002641446,
   0.0002641446,
   0.0002641446,
   0.0004079863,
   0.0006519189,
   0.0007825992,
   0.0007825992,
   0.001531335,
   0.001765445,
   0.00228259,
   0.003092702,
   0.003876197,
   0.006436018,
   0.01214198,
   0.02391789,
   0.04591088,
   0.08367422,
   0.1467726,
   0.2682292,
   0.4601343,
   0.7041859,
   0.900356,
   1};
   TGraph *graph = new TGraph(41,Graph_fx208,Graph_fy208);
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
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","Tagging Only",100,0,1.1);
   Graph_Graph208->SetMinimum(0);
   Graph_Graph208->SetMaximum(1.1);
   Graph_Graph208->SetDirectory(0);
   Graph_Graph208->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph208->SetLineColor(ci);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
   TLatex *   tex = new TLatex(0.1904141,0.511277,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(209);
      tex = new TLatex(0.4430633,0.7558587,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(210);
      tex = new TLatex(0.7287343,0.9373271,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(211);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx212[41] = {
   0,
   3.697667e-07,
   1.047557e-06,
   1.414584e-06,
   1.771083e-06,
   2.751643e-06,
   3.842648e-06,
   4.899424e-06,
   7.499785e-06,
   9.318287e-06,
   1.209784e-05,
   1.66557e-05,
   2.219989e-05,
   2.82754e-05,
   3.915398e-05,
   5.225981e-05,
   6.778772e-05,
   8.448261e-05,
   0.0001122209,
   0.000152031,
   0.0002061142,
   0.0002866137,
   0.0003882804,
   0.0005220561,
   0.0007128155,
   0.001005836,
   0.001399018,
   0.002032059,
   0.002941492,
   0.004377056,
   0.006809398,
   0.01081599,
   0.01734314,
   0.02914636,
   0.05190983,
   0.09623143,
   0.1904141,
   0.4430633,
   0.7287343,
   0.9187126,
   1};
   Double_t Graph_fy212[41] = {
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
   0,
   0,
   0,
   0,
   0,
   0.002550411,
   0.004700909,
   0.006630393,
   0.007089039,
   0.01363384,
   0.03128811,
   0.06531387,
   0.1211446,
   0.2205958,
   0.411277,
   0.6558587,
   0.8973271,
   0.9864197,
   1};
   graph = new TGraph(41,Graph_fx212,Graph_fy212);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph212 = new TH1F("Graph_Graph212","Mass-Matching Prioritized",100,0,1.1);
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
   
   Double_t Graph_fx213[41] = {
   0,
   2.678756e-07,
   8.184199e-07,
   1.287667e-06,
   2.00326e-06,
   2.652775e-06,
   3.698326e-06,
   4.794724e-06,
   6.314882e-06,
   7.890564e-06,
   1.031747e-05,
   1.363667e-05,
   1.818051e-05,
   2.415852e-05,
   3.127189e-05,
   4.162861e-05,
   5.496478e-05,
   7.205183e-05,
   9.675873e-05,
   0.0001297248,
   0.000174571,
   0.0002368799,
   0.0003245657,
   0.0004430313,
   0.0006059057,
   0.0008479931,
   0.001187555,
   0.001724101,
   0.002534117,
   0.003743069,
   0.005684056,
   0.008814576,
   0.01387354,
   0.02266962,
   0.03903299,
   0.07091944,
   0.1369376,
   0.2893565,
   0.5755973,
   0.8339808,
   1};
   Double_t Graph_fy213[41] = {
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
   0.0002587209,
   0.0002842561,
   0.0002842561,
   0.0002842561,
   0.0004251444,
   0.0006640682,
   0.0007920653,
   0.0007920653,
   0.001525427,
   0.00175473,
   0.002261257,
   0.003054735,
   0.004104793,
   0.006872042,
   0.01275775,
   0.02502609,
   0.04677733,
   0.08492393,
   0.1489217,
   0.272061,
   0.4638942,
   0.7057523,
   0.9015258,
   1};
   graph = new TGraph(41,Graph_fx213,Graph_fy213);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph213 = new TH1F("Graph_Graph213","Tagging Prioritized",100,0,1.1);
   Graph_Graph213->SetMinimum(0);
   Graph_Graph213->SetMaximum(1.1);
   Graph_Graph213->SetDirectory(0);
   Graph_Graph213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph213->SetLineColor(ci);
   Graph_Graph213->GetXaxis()->SetLabelFont(42);
   Graph_Graph213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph213->GetXaxis()->SetTitleFont(42);
   Graph_Graph213->GetYaxis()->SetLabelFont(42);
   Graph_Graph213->GetYaxis()->SetTitleFont(42);
   Graph_Graph213->GetZaxis()->SetLabelFont(42);
   Graph_Graph213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph213);
   
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
