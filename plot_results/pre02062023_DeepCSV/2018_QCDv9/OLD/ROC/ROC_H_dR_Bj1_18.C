#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_18/ROC_H_dR_Bj1_18
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_18 = new TCanvas("ROC_H_dR_Bj1_18", "ROC_H_dR_Bj1_18",0,0,600,600);
   ROC_H_dR_Bj1_18->SetHighLightColor(2);
   ROC_H_dR_Bj1_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_18->SetFillColor(0);
   ROC_H_dR_Bj1_18->SetBorderMode(0);
   ROC_H_dR_Bj1_18->SetBorderSize(2);
   ROC_H_dR_Bj1_18->SetGridx();
   ROC_H_dR_Bj1_18->SetGridy();
   ROC_H_dR_Bj1_18->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_18->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_18->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2023[30] = {
   0,
   0.02402198,
   0.1227574,
   0.2370742,
   0.3408646,
   0.4316533,
   0.510973,
   0.5808444,
   0.6400487,
   0.6900417,
   0.7328149,
   0.7729916,
   0.8098681,
   0.8438602,
   0.8753681,
   0.9020045,
   0.9285812,
   0.9471294,
   0.9604477,
   0.9705352,
   0.9779381,
   0.9844548,
   0.9893371,
   0.992043,
   0.9946558,
   0.9966099,
   0.9982005,
   0.9985273,
   0.999333,
   0.9994288};
   Double_t Graph_fy2023[30] = {
   0,
   0.03001686,
   0.1327487,
   0.2712339,
   0.3974762,
   0.5034247,
   0.5962491,
   0.670337,
   0.7297335,
   0.7781968,
   0.8203672,
   0.8529238,
   0.8796635,
   0.9068751,
   0.9310711,
   0.950584,
   0.9716644,
   0.9802394,
   0.9882142,
   0.9931591,
   0.9957888,
   0.9977896,
   0.9984803,
   0.9992378,
   0.9995713,
   0.9997571,
   0.9998333,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx2023,Graph_fy2023);
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
   
   TH1F *Graph_Graph2023 = new TH1F("Graph_Graph2023","Tagging Only",100,0,1.099372);
   Graph_Graph2023->SetMinimum(0);
   Graph_Graph2023->SetMaximum(1.1);
   Graph_Graph2023->SetDirectory(0);
   Graph_Graph2023->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2023->SetLineColor(ci);
   Graph_Graph2023->GetXaxis()->SetLabelFont(42);
   Graph_Graph2023->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2023->GetXaxis()->SetTitleFont(42);
   Graph_Graph2023->GetYaxis()->SetLabelFont(42);
   Graph_Graph2023->GetYaxis()->SetTitleFont(42);
   Graph_Graph2023->GetZaxis()->SetLabelFont(42);
   Graph_Graph2023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2023->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2023);
   
   TLatex *   tex = new TLatex(0.1227574,0.1927487,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2024);
      tex = new TLatex(0.2370742,0.3312339,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2025);
      tex = new TLatex(0.3408646,0.4574762,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2026);
      tex = new TLatex(0.4316533,0.5634247,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2027);
      tex = new TLatex(0.510973,0.6562491,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2028);
      tex = new TLatex(0.5808444,0.730337,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2029);
      tex = new TLatex(0.6400487,0.7897335,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2030);
      tex = new TLatex(0.6900417,0.8381968,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2031);
      tex = new TLatex(0.7328149,0.8803672,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2032);
      tex = new TLatex(0.7729916,0.9129238,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2033);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2034[30] = {
   0,
   0.0001782559,
   0.04283842,
   0.1378856,
   0.2186802,
   0.308865,
   0.390292,
   0.472305,
   0.5461122,
   0.6093581,
   0.6696594,
   0.7302855,
   0.7836314,
   0.8365324,
   0.8796743,
   0.9093381,
   0.9395897,
   0.9562495,
   0.9700062,
   0.983144,
   0.9901323,
   0.993167,
   0.996347,
   0.9993906,
   0.9997479,
   0.999901,
   0.999988,
   0.9999984,
   0.9999998,
   0.9999999};
   Double_t Graph_fy2034[30] = {
   0,
   0,
   0.008629106,
   0.07168859,
   0.1694874,
   0.3151737,
   0.4719612,
   0.6038944,
   0.7191572,
   0.8005697,
   0.8572695,
   0.8916661,
   0.9145765,
   0.933071,
   0.9556172,
   0.967042,
   0.9848884,
   0.9920391,
   0.9944901,
   0.9964551,
   0.9974071,
   0.999919,
   0.999919,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx2034,Graph_fy2034);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2034 = new TH1F("Graph_Graph2034","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2034->SetMinimum(0);
   Graph_Graph2034->SetMaximum(1.1);
   Graph_Graph2034->SetDirectory(0);
   Graph_Graph2034->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2034->SetLineColor(ci);
   Graph_Graph2034->GetXaxis()->SetLabelFont(42);
   Graph_Graph2034->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2034->GetXaxis()->SetTitleFont(42);
   Graph_Graph2034->GetYaxis()->SetLabelFont(42);
   Graph_Graph2034->GetYaxis()->SetTitleFont(42);
   Graph_Graph2034->GetZaxis()->SetLabelFont(42);
   Graph_Graph2034->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2034->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2034);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2035[30] = {
   0,
   0.02452267,
   0.1235641,
   0.2376586,
   0.3415128,
   0.4323423,
   0.5106102,
   0.5806304,
   0.6399826,
   0.6902145,
   0.7331956,
   0.7731915,
   0.8102618,
   0.8442842,
   0.8754541,
   0.9023119,
   0.9292242,
   0.9472937,
   0.9604497,
   0.9704148,
   0.9777485,
   0.9842167,
   0.9895495,
   0.9921916,
   0.9947501,
   0.9966629,
   0.9982358,
   0.9985599,
   0.9993496,
   0.9994435};
   Double_t Graph_fy2035[30] = {
   0,
   0.03066392,
   0.1327151,
   0.2698334,
   0.3932014,
   0.4993003,
   0.5921093,
   0.6666403,
   0.7254586,
   0.7752006,
   0.8170967,
   0.8492593,
   0.8778022,
   0.9046504,
   0.929352,
   0.9498312,
   0.9706077,
   0.9795249,
   0.9874715,
   0.9923841,
   0.9954096,
   0.9975562,
   0.9984057,
   0.9990878,
   0.9996067,
   0.9997866,
   0.9998535,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx2035,Graph_fy2035);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2035 = new TH1F("Graph_Graph2035","Tagging Prioritized",100,0,1.099388);
   Graph_Graph2035->SetMinimum(0);
   Graph_Graph2035->SetMaximum(1.1);
   Graph_Graph2035->SetDirectory(0);
   Graph_Graph2035->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2035->SetLineColor(ci);
   Graph_Graph2035->GetXaxis()->SetLabelFont(42);
   Graph_Graph2035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2035->GetXaxis()->SetTitleFont(42);
   Graph_Graph2035->GetYaxis()->SetLabelFont(42);
   Graph_Graph2035->GetYaxis()->SetTitleFont(42);
   Graph_Graph2035->GetZaxis()->SetLabelFont(42);
   Graph_Graph2035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2035->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2035);
   
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
   ROC_H_dR_Bj1_18->Modified();
   ROC_H_dR_Bj1_18->cd();
   ROC_H_dR_Bj1_18->SetSelected(ROC_H_dR_Bj1_18);
}
