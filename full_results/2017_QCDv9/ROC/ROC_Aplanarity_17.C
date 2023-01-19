#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_17()
{
//=========Macro generated from canvas: ROC_Aplanarity_17/ROC_Aplanarity_17
//=========  (Thu Jan 19 10:33:19 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_17 = new TCanvas("ROC_Aplanarity_17", "ROC_Aplanarity_17",0,0,600,600);
   ROC_Aplanarity_17->SetHighLightColor(2);
   ROC_Aplanarity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_17->SetFillColor(0);
   ROC_Aplanarity_17->SetBorderMode(0);
   ROC_Aplanarity_17->SetBorderSize(2);
   ROC_Aplanarity_17->SetGridx();
   ROC_Aplanarity_17->SetGridy();
   ROC_Aplanarity_17->SetLeftMargin(0.15709);
   ROC_Aplanarity_17->SetRightMargin(0.1234783);
   ROC_Aplanarity_17->SetBottomMargin(0.12);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx139[50] = {
   0,
   0.2737898,
   0.4852101,
   0.6299509,
   0.7334709,
   0.8051819,
   0.8596459,
   0.8985167,
   0.9302154,
   0.9511654,
   0.9659816,
   0.9765712,
   0.9843935,
   0.9896229,
   0.9932062,
   0.9966132,
   0.9977461,
   0.9984597,
   0.9992577,
   0.9995432,
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
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy139[50] = {
   0,
   0.4572037,
   0.6866281,
   0.8148716,
   0.8837316,
   0.9223509,
   0.947378,
   0.966369,
   0.976653,
   0.9842458,
   0.9889691,
   0.9934571,
   0.9956817,
   0.9973607,
   0.9982707,
   0.998719,
   0.999542,
   0.9998239,
   0.9999196,
   0.9999602,
   0.9999905,
   0.9999987,
   0.9999997,
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
   1,
   1};
   TGraph *graph = new TGraph(50,Graph_fx139,Graph_fy139);
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
   
   TH1F *Graph_Graph139 = new TH1F("Graph_Graph139","Tagging Only",100,0,1.1);
   Graph_Graph139->SetMinimum(0);
   Graph_Graph139->SetMaximum(1.1);
   Graph_Graph139->SetDirectory(0);
   Graph_Graph139->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph139->SetLineColor(ci);
   Graph_Graph139->GetXaxis()->SetLabelFont(42);
   Graph_Graph139->GetXaxis()->SetTitleOffset(1);
   Graph_Graph139->GetXaxis()->SetTitleFont(42);
   Graph_Graph139->GetYaxis()->SetLabelFont(42);
   Graph_Graph139->GetYaxis()->SetTitleFont(42);
   Graph_Graph139->GetZaxis()->SetLabelFont(42);
   Graph_Graph139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph139->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph139);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx140[50] = {
   0,
   0.2371077,
   0.441254,
   0.5921073,
   0.6983165,
   0.7712778,
   0.8349565,
   0.882293,
   0.9191598,
   0.9424082,
   0.9600423,
   0.9752407,
   0.9827194,
   0.9866069,
   0.9916073,
   0.9951112,
   0.9967648,
   0.9981174,
   0.9981846,
   0.9993408,
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
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy140[50] = {
   0,
   0.4854992,
   0.716361,
   0.8301954,
   0.8868077,
   0.9253779,
   0.9508692,
   0.9727783,
   0.9784492,
   0.9860446,
   0.990001,
   0.9928415,
   0.9938206,
   0.9961365,
   0.9967705,
   0.9970265,
   0.9998514,
   0.9998697,
   0.9999158,
   0.9999556,
   0.999958,
   0.9999995,
   0.9999999,
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
   1,
   1};
   graph = new TGraph(50,Graph_fx140,Graph_fy140);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph140 = new TH1F("Graph_Graph140","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph140->SetMinimum(0);
   Graph_Graph140->SetMaximum(1.1);
   Graph_Graph140->SetDirectory(0);
   Graph_Graph140->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph140->SetLineColor(ci);
   Graph_Graph140->GetXaxis()->SetLabelFont(42);
   Graph_Graph140->GetXaxis()->SetTitleOffset(1);
   Graph_Graph140->GetXaxis()->SetTitleFont(42);
   Graph_Graph140->GetYaxis()->SetLabelFont(42);
   Graph_Graph140->GetYaxis()->SetTitleFont(42);
   Graph_Graph140->GetZaxis()->SetLabelFont(42);
   Graph_Graph140->GetZaxis()->SetTitleOffset(1);
   Graph_Graph140->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph140);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx141[50] = {
   0,
   0.2845004,
   0.4965026,
   0.6395715,
   0.7422778,
   0.8113966,
   0.8650265,
   0.9023956,
   0.9329672,
   0.9525105,
   0.9668803,
   0.9770497,
   0.9846371,
   0.9897374,
   0.9929359,
   0.9963146,
   0.9977187,
   0.9984524,
   0.9991714,
   0.9994164,
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
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy141[50] = {
   0,
   0.4573549,
   0.6862039,
   0.8146907,
   0.8832935,
   0.9220335,
   0.9473056,
   0.9662681,
   0.9765097,
   0.9840707,
   0.9890425,
   0.993509,
   0.9957503,
   0.9974053,
   0.9982968,
   0.9987456,
   0.9995494,
   0.9998259,
   0.9999205,
   0.9999606,
   0.9999905,
   0.9999987,
   0.9999997,
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
   1,
   1};
   graph = new TGraph(50,Graph_fx141,Graph_fy141);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph141 = new TH1F("Graph_Graph141","Tagging Prioritized",100,0,1.1);
   Graph_Graph141->SetMinimum(0);
   Graph_Graph141->SetMaximum(1.1);
   Graph_Graph141->SetDirectory(0);
   Graph_Graph141->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph141->SetLineColor(ci);
   Graph_Graph141->GetXaxis()->SetLabelFont(42);
   Graph_Graph141->GetXaxis()->SetTitleOffset(1);
   Graph_Graph141->GetXaxis()->SetTitleFont(42);
   Graph_Graph141->GetYaxis()->SetLabelFont(42);
   Graph_Graph141->GetYaxis()->SetTitleFont(42);
   Graph_Graph141->GetZaxis()->SetLabelFont(42);
   Graph_Graph141->GetZaxis()->SetTitleOffset(1);
   Graph_Graph141->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph141);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Aplanarity_17->Modified();
   ROC_Aplanarity_17->cd();
   ROC_Aplanarity_17->SetSelected(ROC_Aplanarity_17);
}
