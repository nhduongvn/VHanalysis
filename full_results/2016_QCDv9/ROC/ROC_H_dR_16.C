#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_16()
{
//=========Macro generated from canvas: ROC_H_dR_16/ROC_H_dR_16
//=========  (Fri Jan 27 13:04:52 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_16 = new TCanvas("ROC_H_dR_16", "ROC_H_dR_16",0,0,600,600);
   ROC_H_dR_16->SetHighLightColor(2);
   ROC_H_dR_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_16->SetFillColor(0);
   ROC_H_dR_16->SetBorderMode(0);
   ROC_H_dR_16->SetBorderSize(2);
   ROC_H_dR_16->SetGridx();
   ROC_H_dR_16->SetGridy();
   ROC_H_dR_16->SetLeftMargin(0.15709);
   ROC_H_dR_16->SetRightMargin(0.1234783);
   ROC_H_dR_16->SetBottomMargin(0.12);
   ROC_H_dR_16->SetFrameBorderMode(0);
   ROC_H_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[30] = {
   0,
   0,
   4.492375e-05,
   0.03838218,
   0.08855817,
   0.124946,
   0.1623831,
   0.2003513,
   0.2379964,
   0.2807504,
   0.3237526,
   0.378309,
   0.433405,
   0.4978234,
   0.5749341,
   0.6527555,
   0.7426205,
   0.8086106,
   0.855722,
   0.8906363,
   0.9222065,
   0.9474424,
   0.9646454,
   0.9781247,
   0.9878647,
   0.9934605,
   0.9977463,
   0.9996421,
   0.9999732,
   1};
   Double_t Graph_fy1[30] = {
   0,
   0,
   2.198082e-05,
   0.02248634,
   0.06505012,
   0.1113078,
   0.1705945,
   0.2452889,
   0.3138048,
   0.3853032,
   0.4559348,
   0.5267991,
   0.5974034,
   0.668851,
   0.7440264,
   0.8310223,
   0.9115552,
   0.9488511,
   0.9689021,
   0.9802087,
   0.9886066,
   0.9928174,
   0.9951934,
   0.99743,
   0.9985337,
   0.9990864,
   0.9997057,
   0.999938,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx1,Graph_fy1);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Tagging Only",100,0,1.1);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   TLatex *   tex = new TLatex(0.1736798,0.2117777,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2);
      tex = new TLatex(0.2378104,0.2779877,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3);
      tex = new TLatex(0.2876897,0.4099219,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(4);
      tex = new TLatex(0.3413657,0.5305222,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(5);
      tex = new TLatex(0.3996906,0.6488739,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(6);
      tex = new TLatex(0.4529859,0.7423087,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(7);
      tex = new TLatex(0.5194733,0.8299572,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(8);
      tex = new TLatex(0.5850551,0.8469664,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(9);
      tex = new TLatex(0.6507223,0.9077319,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(10);
      tex = new TLatex(0.7392571,0.9498058,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(11);
      tex = new TLatex(0.7955822,0.9802187,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx13[30] = {
   0,
   0,
   2.226127e-07,
   0.0475824,
   0.1167437,
   0.1736798,
   0.2378104,
   0.2876897,
   0.3413657,
   0.3996906,
   0.4529859,
   0.5194733,
   0.5850551,
   0.6507223,
   0.7392571,
   0.7955822,
   0.8607188,
   0.9177895,
   0.9602561,
   0.9756583,
   0.9849151,
   0.9912301,
   0.9970476,
   0.9984133,
   0.9992911,
   0.999919,
   0.9999876,
   0.9999965,
   1,
   1};
   Double_t Graph_fy13[30] = {
   0,
   0,
   0,
   0.01330105,
   0.0605942,
   0.1117777,
   0.1779877,
   0.3099219,
   0.4305222,
   0.5488739,
   0.6423087,
   0.7299572,
   0.8069664,
   0.8677319,
   0.9098058,
   0.9402187,
   0.9748104,
   0.9894493,
   0.9943477,
   0.997298,
   0.9984612,
   0.9985768,
   0.9992461,
   0.9992461,
   0.9992461,
   0.9992461,
   0.9992461,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(1.1);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[30] = {
   0,
   0,
   4.377527e-05,
   0.03808029,
   0.08777281,
   0.1239842,
   0.161161,
   0.1990488,
   0.2365826,
   0.2793013,
   0.3222439,
   0.3770483,
   0.4325987,
   0.4964477,
   0.5738099,
   0.6515291,
   0.7414796,
   0.8077326,
   0.8549106,
   0.8903098,
   0.9219577,
   0.9472395,
   0.9647132,
   0.9780065,
   0.9879894,
   0.9935266,
   0.9977617,
   0.9996496,
   0.9999734,
   1};
   Double_t Graph_fy14[30] = {
   0,
   0,
   1.830032e-05,
   0.02252978,
   0.06352446,
   0.1087738,
   0.1656253,
   0.2386789,
   0.3053975,
   0.3750929,
   0.4455887,
   0.5142707,
   0.5870592,
   0.6612126,
   0.7374085,
   0.8265041,
   0.9104698,
   0.9474199,
   0.9676004,
   0.9787419,
   0.9875134,
   0.9920896,
   0.9945825,
   0.9971926,
   0.9984778,
   0.9989374,
   0.9995859,
   0.9999484,
   1,
   1};
   graph = new TGraph(30,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Tagging Prioritized",100,0,1.1);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(1.1);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
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
   ROC_H_dR_16->Modified();
   ROC_H_dR_16->cd();
   ROC_H_dR_16->SetSelected(ROC_H_dR_16);
}
