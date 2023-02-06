#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_16()
{
//=========Macro generated from canvas: ROC_Z_pt_16/ROC_Z_pt_16
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_16 = new TCanvas("ROC_Z_pt_16", "ROC_Z_pt_16",0,0,600,600);
   ROC_Z_pt_16->SetHighLightColor(2);
   ROC_Z_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_16->SetFillColor(0);
   ROC_Z_pt_16->SetBorderMode(0);
   ROC_Z_pt_16->SetBorderSize(2);
   ROC_Z_pt_16->SetGridx();
   ROC_Z_pt_16->SetGridy();
   ROC_Z_pt_16->SetLeftMargin(0.15709);
   ROC_Z_pt_16->SetRightMargin(0.1234783);
   ROC_Z_pt_16->SetBottomMargin(0.12);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx123[40] = {
   0,
   0.2664651,
   0.6934626,
   0.891098,
   0.9548575,
   0.9784102,
   0.9886687,
   0.9936653,
   0.9962514,
   0.9976653,
   0.9984875,
   0.9989958,
   0.9993068,
   0.9995118,
   0.9996556,
   0.9997553,
   0.9998227,
   0.9998712,
   0.9999063,
   0.9999316,
   0.9999492,
   0.9999624,
   0.9999717,
   0.9999788,
   0.999984,
   0.9999881,
   0.9999909,
   0.9999931,
   0.999995,
   0.9999963,
   0.9999972,
   0.9999979,
   0.9999984,
   0.9999988,
   0.9999991,
   0.9999994,
   0.9999995,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy123[40] = {
   0,
   0.1714007,
   0.4985589,
   0.7377334,
   0.8602092,
   0.9219299,
   0.9532686,
   0.9735131,
   0.9853597,
   0.9908689,
   0.9935729,
   0.9950479,
   0.9964174,
   0.9973772,
   0.9981407,
   0.9984118,
   0.9986635,
   0.9990422,
   0.9995727,
   0.9996974,
   0.9997172,
   0.9997392,
   0.9997626,
   0.9998518,
   0.9998542,
   0.9999324,
   0.9999408,
   0.9999556,
   0.9999556,
   0.9999556,
   0.9999556,
   0.9999556,
   0.9999556,
   0.999978,
   0.999978,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(40,Graph_fx123,Graph_fy123);
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
   
   TH1F *Graph_Graph123 = new TH1F("Graph_Graph123","Tagging Only",100,0,1.1);
   Graph_Graph123->SetMinimum(0);
   Graph_Graph123->SetMaximum(1.1);
   Graph_Graph123->SetDirectory(0);
   Graph_Graph123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph123->SetLineColor(ci);
   Graph_Graph123->GetXaxis()->SetLabelFont(42);
   Graph_Graph123->GetXaxis()->SetTitleOffset(1);
   Graph_Graph123->GetXaxis()->SetTitleFont(42);
   Graph_Graph123->GetYaxis()->SetLabelFont(42);
   Graph_Graph123->GetYaxis()->SetTitleFont(42);
   Graph_Graph123->GetZaxis()->SetLabelFont(42);
   Graph_Graph123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph123);
   
   TLatex *   tex = new TLatex(0.2664651,0.2314007,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(124);
      tex = new TLatex(0.6934626,0.5585589,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(125);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx126[40] = {
   0,
   0.165125,
   0.6749458,
   0.8877683,
   0.9543725,
   0.9783247,
   0.9889226,
   0.9938695,
   0.9964062,
   0.9978297,
   0.9986245,
   0.9990866,
   0.9993697,
   0.9995572,
   0.9996816,
   0.9997639,
   0.9998328,
   0.9998771,
   0.9999094,
   0.9999342,
   0.9999505,
   0.9999631,
   0.9999713,
   0.9999781,
   0.9999836,
   0.9999874,
   0.9999904,
   0.9999927,
   0.9999949,
   0.9999963,
   0.9999971,
   0.9999977,
   0.9999982,
   0.9999984,
   0.9999989,
   0.9999992,
   0.9999994,
   0.9999996,
   0.9999998,
   0.9999999};
   Double_t Graph_fy126[40] = {
   0,
   0.08037172,
   0.3968583,
   0.7132578,
   0.8649275,
   0.9202711,
   0.9545522,
   0.9714938,
   0.9870718,
   0.9942426,
   0.9971165,
   0.997414,
   0.99866,
   0.9988005,
   0.9990087,
   0.9992233,
   0.9992233,
   0.9993238,
   0.9993238,
   0.9995926,
   0.9995926,
   0.9995926,
   0.9996982,
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
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx126,Graph_fy126);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph126 = new TH1F("Graph_Graph126","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph126->SetMinimum(0);
   Graph_Graph126->SetMaximum(1.1);
   Graph_Graph126->SetDirectory(0);
   Graph_Graph126->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph126->SetLineColor(ci);
   Graph_Graph126->GetXaxis()->SetLabelFont(42);
   Graph_Graph126->GetXaxis()->SetTitleOffset(1);
   Graph_Graph126->GetXaxis()->SetTitleFont(42);
   Graph_Graph126->GetYaxis()->SetLabelFont(42);
   Graph_Graph126->GetYaxis()->SetTitleFont(42);
   Graph_Graph126->GetZaxis()->SetLabelFont(42);
   Graph_Graph126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph126);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx127[40] = {
   0,
   0.2669346,
   0.6924611,
   0.8905555,
   0.9543646,
   0.9780934,
   0.9884801,
   0.9935346,
   0.9961734,
   0.9976093,
   0.99845,
   0.9989684,
   0.9992864,
   0.999497,
   0.9996448,
   0.9997474,
   0.999817,
   0.9998669,
   0.999903,
   0.9999292,
   0.9999474,
   0.999961,
   0.9999706,
   0.999978,
   0.9999834,
   0.9999876,
   0.9999906,
   0.9999929,
   0.9999947,
   0.9999961,
   0.9999971,
   0.9999978,
   0.9999984,
   0.9999987,
   0.9999991,
   0.9999994,
   0.9999995,
   0.9999997,
   0.9999998,
   0.9999999};
   Double_t Graph_fy127[40] = {
   0,
   0.1671868,
   0.4958816,
   0.7316232,
   0.8552456,
   0.9184974,
   0.950819,
   0.9705167,
   0.9838114,
   0.9898246,
   0.9930077,
   0.99485,
   0.9963555,
   0.9973109,
   0.9980561,
   0.9983772,
   0.9986297,
   0.9989961,
   0.9994945,
   0.9996563,
   0.9997083,
   0.9997434,
   0.9997629,
   0.9998372,
   0.9998572,
   0.9999294,
   0.9999507,
   0.999963,
   0.999963,
   0.999963,
   0.999963,
   0.999963,
   0.999963,
   0.9999817,
   0.9999817,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(40,Graph_fx127,Graph_fy127);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph127 = new TH1F("Graph_Graph127","Tagging Prioritized",100,0,1.1);
   Graph_Graph127->SetMinimum(0);
   Graph_Graph127->SetMaximum(1.1);
   Graph_Graph127->SetDirectory(0);
   Graph_Graph127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph127->SetLineColor(ci);
   Graph_Graph127->GetXaxis()->SetLabelFont(42);
   Graph_Graph127->GetXaxis()->SetTitleOffset(1);
   Graph_Graph127->GetXaxis()->SetTitleFont(42);
   Graph_Graph127->GetYaxis()->SetLabelFont(42);
   Graph_Graph127->GetYaxis()->SetTitleFont(42);
   Graph_Graph127->GetZaxis()->SetLabelFont(42);
   Graph_Graph127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph127->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph127);
   
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
   ROC_Z_pt_16->Modified();
   ROC_Z_pt_16->cd();
   ROC_Z_pt_16->SetSelected(ROC_Z_pt_16);
}
