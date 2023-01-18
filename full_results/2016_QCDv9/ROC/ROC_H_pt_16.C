#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_16()
{
//=========Macro generated from canvas: ROC_H_pt_16/ROC_H_pt_16
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_16 = new TCanvas("ROC_H_pt_16", "ROC_H_pt_16",0,0,600,600);
   ROC_H_pt_16->SetHighLightColor(2);
   ROC_H_pt_16->Range(0,0,1,1);
   ROC_H_pt_16->SetFillColor(0);
   ROC_H_pt_16->SetBorderMode(0);
   ROC_H_pt_16->SetBorderSize(2);
   ROC_H_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx28[40] = {
   0,
   0.3011818,
   0.7190389,
   0.8958914,
   0.9538655,
   0.9777328,
   0.9880764,
   0.9931933,
   0.9959429,
   0.9974742,
   0.9983774,
   0.9989163,
   0.999255,
   0.999477,
   0.9996313,
   0.9997355,
   0.9998143,
   0.9998649,
   0.9999017,
   0.9999279,
   0.9999475,
   0.9999608,
   0.9999709,
   0.9999782,
   0.9999834,
   0.9999874,
   0.9999906,
   0.9999928,
   0.9999946,
   0.9999959,
   0.9999969,
   0.9999977,
   0.9999982,
   0.9999987,
   0.9999991,
   0.9999993,
   0.9999995,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy28[40] = {
   0,
   0.177171,
   0.4989521,
   0.7242294,
   0.8491845,
   0.9064126,
   0.9429563,
   0.9637276,
   0.9790176,
   0.9871671,
   0.991462,
   0.9942755,
   0.9963766,
   0.9978752,
   0.9982828,
   0.9989955,
   0.9990838,
   0.9993282,
   0.9995661,
   0.9996699,
   0.9997381,
   0.9997826,
   0.99982,
   0.999873,
   0.9998932,
   0.9999393,
   0.9999393,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999632,
   0.9999852,
   1};
   TGraph *graph = new TGraph(40,Graph_fx28,Graph_fy28);
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
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Tagging Only",100,0,1.1);
   Graph_Graph28->SetMinimum(0);
   Graph_Graph28->SetMaximum(1.1);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetTitleOffset(1);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx29[40] = {
   0,
   0.1307552,
   0.5479621,
   0.8351892,
   0.9315772,
   0.9678396,
   0.9836138,
   0.9909931,
   0.9948273,
   0.9968459,
   0.9980267,
   0.9987306,
   0.9991314,
   0.999393,
   0.999568,
   0.999686,
   0.9997739,
   0.9998326,
   0.9998777,
   0.9999108,
   0.9999354,
   0.9999529,
   0.9999652,
   0.9999735,
   0.999979,
   0.9999839,
   0.9999878,
   0.9999911,
   0.9999932,
   0.9999949,
   0.9999965,
   0.9999974,
   0.999998,
   0.9999985,
   0.9999988,
   0.9999991,
   0.9999994,
   0.9999995,
   0.9999996,
   0.9999999};
   Double_t Graph_fy29[40] = {
   0,
   0.04973078,
   0.3040064,
   0.6262535,
   0.8216605,
   0.8927397,
   0.9308119,
   0.9543703,
   0.9722177,
   0.9856409,
   0.9950089,
   0.9970735,
   0.9974828,
   0.9978933,
   0.9990152,
   0.9991153,
   0.9991153,
   0.9992233,
   0.9993238,
   0.9993238,
   0.9995349,
   0.9995349,
   0.9995926,
   0.9996952,
   0.9997864,
   0.999892,
   0.999892,
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
   graph = new TGraph(40,Graph_fx29,Graph_fy29);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","Mass-Matching Prioritized",100,0,1.1);
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
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx30[40] = {
   0,
   0.3016547,
   0.71817,
   0.8950726,
   0.9533667,
   0.9774133,
   0.9878664,
   0.9930607,
   0.9958491,
   0.9974097,
   0.9983316,
   0.9988825,
   0.9992295,
   0.9994582,
   0.999618,
   0.9997253,
   0.9998069,
   0.9998595,
   0.9998975,
   0.9999249,
   0.9999451,
   0.9999591,
   0.9999697,
   0.9999773,
   0.9999826,
   0.9999869,
   0.9999901,
   0.9999925,
   0.9999943,
   0.9999956,
   0.9999967,
   0.9999976,
   0.9999981,
   0.9999986,
   0.999999,
   0.9999992,
   0.9999994,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy30[40] = {
   0,
   0.1731722,
   0.4910907,
   0.7168177,
   0.8416645,
   0.9016023,
   0.938392,
   0.960043,
   0.9766869,
   0.985367,
   0.9901638,
   0.9933927,
   0.9958115,
   0.9972763,
   0.9977388,
   0.9984933,
   0.9988335,
   0.9990942,
   0.9992994,
   0.9995834,
   0.9996791,
   0.9997741,
   0.9998178,
   0.9998619,
   0.9998787,
   0.9999171,
   0.9999171,
   0.999937,
   0.999937,
   0.999937,
   0.999955,
   0.999955,
   0.999955,
   0.999955,
   0.9999694,
   0.9999694,
   0.9999694,
   0.9999694,
   0.9999877,
   1};
   graph = new TGraph(40,Graph_fx30,Graph_fy30);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","Tagging Prioritized",100,0,1.1);
   Graph_Graph30->SetMinimum(0);
   Graph_Graph30->SetMaximum(1.1);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph30->SetLineColor(ci);
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetTitleOffset(1);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetTitleOffset(1);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph30);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.2631579,0.3,0.4731579,NULL,"brNDC");
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
   ROC_H_pt_16->Modified();
   ROC_H_pt_16->cd();
   ROC_H_pt_16->SetSelected(ROC_H_pt_16);
}
