#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_18()
{
//=========Macro generated from canvas: ROC_Aplanarity_18/ROC_Aplanarity_18
//=========  (Tue Jan 24 13:47:11 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_18 = new TCanvas("ROC_Aplanarity_18", "ROC_Aplanarity_18",0,0,600,600);
   ROC_Aplanarity_18->SetHighLightColor(2);
   ROC_Aplanarity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_18->SetFillColor(0);
   ROC_Aplanarity_18->SetBorderMode(0);
   ROC_Aplanarity_18->SetBorderSize(2);
   ROC_Aplanarity_18->SetGridx();
   ROC_Aplanarity_18->SetGridy();
   ROC_Aplanarity_18->SetLeftMargin(0.15709);
   ROC_Aplanarity_18->SetRightMargin(0.1234783);
   ROC_Aplanarity_18->SetBottomMargin(0.12);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   ROC_Aplanarity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2070[50] = {
   0,
   0.4511508,
   0.6862264,
   0.8054275,
   0.8770921,
   0.9180049,
   0.944556,
   0.9636337,
   0.9759902,
   0.983291,
   0.9877866,
   0.9923734,
   0.9947435,
   0.9965136,
   0.9977936,
   0.9985475,
   0.9990713,
   0.9994986,
   0.9995731,
   0.999934,
   0.9999682,
   0.9999985,
   0.9999996,
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
   1};
   Double_t Graph_fy2070[50] = {
   0,
   0.2943123,
   0.5034097,
   0.6521821,
   0.7480022,
   0.817979,
   0.8685994,
   0.9090544,
   0.9351177,
   0.9537078,
   0.9659379,
   0.9771551,
   0.9849741,
   0.9910681,
   0.9947213,
   0.9966246,
   0.9984115,
   0.9990432,
   0.999513,
   0.9995333,
   0.9998495,
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
   TGraph *graph = new TGraph(50,Graph_fx2070,Graph_fy2070);
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
   
   TH1F *Graph_Graph2070 = new TH1F("Graph_Graph2070","Tagging Only",100,0,1.1);
   Graph_Graph2070->SetMinimum(0);
   Graph_Graph2070->SetMaximum(1.1);
   Graph_Graph2070->SetDirectory(0);
   Graph_Graph2070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2070->SetLineColor(ci);
   Graph_Graph2070->GetXaxis()->SetLabelFont(42);
   Graph_Graph2070->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2070->GetXaxis()->SetTitleFont(42);
   Graph_Graph2070->GetYaxis()->SetLabelFont(42);
   Graph_Graph2070->GetYaxis()->SetTitleFont(42);
   Graph_Graph2070->GetZaxis()->SetLabelFont(42);
   Graph_Graph2070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2070->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2070);
   
   TLatex *   tex = new TLatex(0.4511508,0.3543123,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2071);
      tex = new TLatex(0.6862264,0.5634097,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2072);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2073[50] = {
   0,
   0.4813973,
   0.7061057,
   0.8258402,
   0.8908455,
   0.9277281,
   0.9521032,
   0.9710526,
   0.9869532,
   0.9899262,
   0.9916858,
   0.9926122,
   0.995515,
   0.9977374,
   0.9988542,
   0.999398,
   0.9996341,
   0.9996525,
   0.9998871,
   0.9999948,
   0.9999979,
   0.9999992,
   0.9999998,
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
   Double_t Graph_fy2073[50] = {
   0,
   0.2473753,
   0.4419646,
   0.6039363,
   0.7142972,
   0.7935402,
   0.8501931,
   0.9008944,
   0.929805,
   0.9494699,
   0.9624851,
   0.9746233,
   0.9867628,
   0.9925088,
   0.9946974,
   0.9960582,
   0.9984256,
   0.9996246,
   0.9998231,
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
   1,
   1};
   graph = new TGraph(50,Graph_fx2073,Graph_fy2073);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2073 = new TH1F("Graph_Graph2073","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2073->SetMinimum(0);
   Graph_Graph2073->SetMaximum(1.1);
   Graph_Graph2073->SetDirectory(0);
   Graph_Graph2073->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2073->SetLineColor(ci);
   Graph_Graph2073->GetXaxis()->SetLabelFont(42);
   Graph_Graph2073->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2073->GetXaxis()->SetTitleFont(42);
   Graph_Graph2073->GetYaxis()->SetLabelFont(42);
   Graph_Graph2073->GetYaxis()->SetTitleFont(42);
   Graph_Graph2073->GetZaxis()->SetLabelFont(42);
   Graph_Graph2073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2073->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2073);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2074[50] = {
   0,
   0.4514511,
   0.6862389,
   0.8049686,
   0.8774749,
   0.9186664,
   0.9449958,
   0.9639191,
   0.9761943,
   0.9834777,
   0.9879328,
   0.9924754,
   0.9948118,
   0.9965573,
   0.9978372,
   0.9985766,
   0.9990901,
   0.9995088,
   0.9995827,
   0.999935,
   0.9999687,
   0.9999984,
   0.9999996,
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
   1};
   Double_t Graph_fy2074[50] = {
   0,
   0.3014231,
   0.5124718,
   0.6618208,
   0.756033,
   0.8238627,
   0.8740802,
   0.9127797,
   0.9376715,
   0.9555833,
   0.9678116,
   0.9782209,
   0.985879,
   0.9916032,
   0.9948554,
   0.996985,
   0.9985704,
   0.9991407,
   0.9995534,
   0.99959,
   0.9998678,
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
   graph = new TGraph(50,Graph_fx2074,Graph_fy2074);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2074 = new TH1F("Graph_Graph2074","Tagging Prioritized",100,0,1.1);
   Graph_Graph2074->SetMinimum(0);
   Graph_Graph2074->SetMaximum(1.1);
   Graph_Graph2074->SetDirectory(0);
   Graph_Graph2074->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2074->SetLineColor(ci);
   Graph_Graph2074->GetXaxis()->SetLabelFont(42);
   Graph_Graph2074->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2074->GetXaxis()->SetTitleFont(42);
   Graph_Graph2074->GetYaxis()->SetLabelFont(42);
   Graph_Graph2074->GetYaxis()->SetTitleFont(42);
   Graph_Graph2074->GetZaxis()->SetLabelFont(42);
   Graph_Graph2074->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2074->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2074);
   
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
   ROC_Aplanarity_18->Modified();
   ROC_Aplanarity_18->cd();
   ROC_Aplanarity_18->SetSelected(ROC_Aplanarity_18);
}
