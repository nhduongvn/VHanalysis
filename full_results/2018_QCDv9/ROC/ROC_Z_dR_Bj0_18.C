#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_18/ROC_Z_dR_Bj0_18
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_18 = new TCanvas("ROC_Z_dR_Bj0_18", "ROC_Z_dR_Bj0_18",0,0,600,600);
   ROC_Z_dR_Bj0_18->SetHighLightColor(2);
   ROC_Z_dR_Bj0_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
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
   
   Double_t Graph_fx163[30] = {
   0,
   0.03705238,
   0.2042209,
   0.3503558,
   0.4650116,
   0.5567893,
   0.6362724,
   0.6940109,
   0.7402759,
   0.7830079,
   0.8152074,
   0.8457622,
   0.869992,
   0.8946977,
   0.9141447,
   0.9356904,
   0.9524305,
   0.9632475,
   0.9738326,
   0.9815379,
   0.9859639,
   0.9916078,
   0.9962713,
   0.9972916,
   0.9984118,
   0.9989739,
   0.9996308,
   0.9998055,
   0.9999465,
   0.9999817};
   Double_t Graph_fy163[30] = {
   0,
   0.05513243,
   0.2867471,
   0.5115056,
   0.6528063,
   0.7357214,
   0.7850507,
   0.8209132,
   0.8490229,
   0.874205,
   0.8930657,
   0.9099514,
   0.9248156,
   0.9392358,
   0.9545495,
   0.9678243,
   0.9799946,
   0.9881978,
   0.9931114,
   0.9974231,
   0.9981594,
   0.9987787,
   0.9993688,
   0.999515,
   0.9997662,
   0.9998539,
   0.9999123,
   0.9999123,
   0.9999415,
   1};
   TGraph *graph = new TGraph(30,Graph_fx163,Graph_fy163);
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
   
   TH1F *Graph_Graph163 = new TH1F("Graph_Graph163","Tagging Only",100,0,1.09998);
   Graph_Graph163->SetMinimum(0);
   Graph_Graph163->SetMaximum(1.1);
   Graph_Graph163->SetDirectory(0);
   Graph_Graph163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph163->SetLineColor(ci);
   Graph_Graph163->GetXaxis()->SetLabelFont(42);
   Graph_Graph163->GetXaxis()->SetTitleOffset(1);
   Graph_Graph163->GetXaxis()->SetTitleFont(42);
   Graph_Graph163->GetYaxis()->SetLabelFont(42);
   Graph_Graph163->GetYaxis()->SetTitleFont(42);
   Graph_Graph163->GetZaxis()->SetLabelFont(42);
   Graph_Graph163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph163->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph163);
   
   TLatex *   tex = new TLatex(0.3419535,0.611907,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(164);
      tex = new TLatex(0.5262924,0.895853,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(165);
      tex = new TLatex(0.6675955,0.940781,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(166);
      tex = new TLatex(0.7524278,0.9856699,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(167);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx168[30] = {
   0,
   0.05753667,
   0.3419535,
   0.5262924,
   0.6675955,
   0.7524278,
   0.8670779,
   0.9019649,
   0.9337739,
   0.9544722,
   0.9712181,
   0.9799616,
   0.9852516,
   0.9897849,
   0.9914257,
   0.9932356,
   0.9948336,
   0.9965311,
   0.9969265,
   0.9983567,
   0.9984737,
   0.9985257,
   0.9987882,
   0.9988217,
   0.9988453,
   0.9999945,
   0.9999963,
   0.9999976,
   0.9999988,
   0.9999996};
   Double_t Graph_fy168[30] = {
   0,
   0.0887702,
   0.511907,
   0.795853,
   0.900781,
   0.9456699,
   0.970867,
   0.9797614,
   0.9872138,
   0.9925682,
   0.9948199,
   0.9968086,
   0.9971366,
   0.9977926,
   0.998951,
   0.9990603,
   0.9991697,
   0.9991697,
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
   graph = new TGraph(30,Graph_fx168,Graph_fy168);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph168 = new TH1F("Graph_Graph168","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph168->SetMinimum(0);
   Graph_Graph168->SetMaximum(1.1);
   Graph_Graph168->SetDirectory(0);
   Graph_Graph168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph168->SetLineColor(ci);
   Graph_Graph168->GetXaxis()->SetLabelFont(42);
   Graph_Graph168->GetXaxis()->SetTitleOffset(1);
   Graph_Graph168->GetXaxis()->SetTitleFont(42);
   Graph_Graph168->GetYaxis()->SetLabelFont(42);
   Graph_Graph168->GetYaxis()->SetTitleFont(42);
   Graph_Graph168->GetZaxis()->SetLabelFont(42);
   Graph_Graph168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph168->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph168);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx169[30] = {
   0,
   0.03719491,
   0.2040302,
   0.3503734,
   0.4651633,
   0.5571026,
   0.6359625,
   0.6934789,
   0.7398855,
   0.7827032,
   0.8149412,
   0.8456081,
   0.8699052,
   0.8945692,
   0.9141051,
   0.9357556,
   0.9524861,
   0.9632846,
   0.9739323,
   0.9816079,
   0.986079,
   0.9917411,
   0.9963386,
   0.9973522,
   0.9984604,
   0.9989875,
   0.9996339,
   0.9998061,
   0.9999471,
   0.9999819};
   Double_t Graph_fy169[30] = {
   0,
   0.05525215,
   0.2870344,
   0.5121824,
   0.6531754,
   0.7369929,
   0.7854405,
   0.8212269,
   0.8491394,
   0.8743141,
   0.8928577,
   0.9093626,
   0.9245558,
   0.939039,
   0.9538598,
   0.9678389,
   0.9799279,
   0.988432,
   0.9931908,
   0.9974456,
   0.9981959,
   0.9987743,
   0.9993813,
   0.9995246,
   0.9997708,
   0.9998568,
   0.9999141,
   0.9999141,
   0.9999427,
   1};
   graph = new TGraph(30,Graph_fx169,Graph_fy169);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph169 = new TH1F("Graph_Graph169","Tagging Prioritized",100,0,1.09998);
   Graph_Graph169->SetMinimum(0);
   Graph_Graph169->SetMaximum(1.1);
   Graph_Graph169->SetDirectory(0);
   Graph_Graph169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph169->SetLineColor(ci);
   Graph_Graph169->GetXaxis()->SetLabelFont(42);
   Graph_Graph169->GetXaxis()->SetTitleOffset(1);
   Graph_Graph169->GetXaxis()->SetTitleFont(42);
   Graph_Graph169->GetYaxis()->SetLabelFont(42);
   Graph_Graph169->GetYaxis()->SetTitleFont(42);
   Graph_Graph169->GetZaxis()->SetLabelFont(42);
   Graph_Graph169->GetZaxis()->SetTitleOffset(1);
   Graph_Graph169->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph169);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
