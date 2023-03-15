#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_17/ROC_Z_dR_Bj1_17
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_17 = new TCanvas("ROC_Z_dR_Bj1_17", "ROC_Z_dR_Bj1_17",0,0,600,600);
   ROC_Z_dR_Bj1_17->SetHighLightColor(2);
   ROC_Z_dR_Bj1_17->Range(-0.2901858,-0.1615385,1.238786,1.184615);
   ROC_Z_dR_Bj1_17->SetFillColor(0);
   ROC_Z_dR_Bj1_17->SetBorderMode(0);
   ROC_Z_dR_Bj1_17->SetBorderSize(2);
   ROC_Z_dR_Bj1_17->SetGridx();
   ROC_Z_dR_Bj1_17->SetGridy();
   ROC_Z_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx181[30] = {
   0,
   0.03291522,
   0.19988,
   0.3474279,
   0.4652646,
   0.5548467,
   0.6280766,
   0.6909856,
   0.7387408,
   0.7780692,
   0.8121532,
   0.8428687,
   0.8714278,
   0.8956578,
   0.91656,
   0.9362326,
   0.9559212,
   0.9712726,
   0.9809866,
   0.9860244,
   0.9896615,
   0.992056,
   0.9937744,
   0.9957906,
   0.9967511,
   0.9974062,
   0.9994965,
   0.9998189,
   0.9999163,
   0.9999902};
   Double_t Graph_fy181[30] = {
   0,
   0.05695411,
   0.2634105,
   0.4933163,
   0.6500721,
   0.7355537,
   0.786733,
   0.8240718,
   0.8517393,
   0.8773549,
   0.8966424,
   0.9148195,
   0.9314429,
   0.9453293,
   0.958762,
   0.9710456,
   0.9830787,
   0.9894318,
   0.993899,
   0.9969873,
   0.9977672,
   0.9981408,
   0.998937,
   0.9990971,
   0.9994603,
   0.9997435,
   0.9999733,
   0.9999733,
   0.9999733,
   1};
   TGraph *graph = new TGraph(30,Graph_fx181,Graph_fy181);
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
   
   TH1F *Graph_Graph181 = new TH1F("Graph_Graph181","Tagging Only",100,0,1.099989);
   Graph_Graph181->SetMinimum(0);
   Graph_Graph181->SetMaximum(1.1);
   Graph_Graph181->SetDirectory(0);
   Graph_Graph181->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph181->SetLineColor(ci);
   Graph_Graph181->GetXaxis()->SetLabelFont(42);
   Graph_Graph181->GetXaxis()->SetTitleOffset(1);
   Graph_Graph181->GetXaxis()->SetTitleFont(42);
   Graph_Graph181->GetYaxis()->SetLabelFont(42);
   Graph_Graph181->GetYaxis()->SetTitleFont(42);
   Graph_Graph181->GetZaxis()->SetLabelFont(42);
   Graph_Graph181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph181->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph181);
   
   TLatex *   tex = new TLatex(0.2000926,0.3651588,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(182);
      tex = new TLatex(0.3410297,0.6192361,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(183);
      tex = new TLatex(0.500456,0.8623245,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(184);
      tex = new TLatex(0.62283,0.9105736,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(185);
      tex = new TLatex(0.6942427,0.9529869,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(186);
      tex = new TLatex(0.7536132,0.9755234,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(187);
      tex = new TLatex(0.7928783,0.9968483,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(188);
      tex = new TLatex(0.8294433,1.008161,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(189);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx190[30] = {
   0,
   0.001097735,
   0.1652596,
   0.3410297,
   0.500456,
   0.62283,
   0.6942427,
   0.7536132,
   0.7928783,
   0.8294433,
   0.8575066,
   0.8793647,
   0.9133753,
   0.9311074,
   0.940372,
   0.9497634,
   0.9599537,
   0.9705698,
   0.9878124,
   0.9926262,
   0.9948868,
   0.9977717,
   0.9982554,
   0.9989228,
   0.9994697,
   0.9997453,
   0.9997607,
   0.9999797,
   0.9999826,
   0.9999917};
   Double_t Graph_fy190[30] = {
   0,
   0.000916125,
   0.1766394,
   0.5192361,
   0.7623245,
   0.8705736,
   0.9129869,
   0.9355234,
   0.9568483,
   0.9681609,
   0.9742309,
   0.977978,
   0.9831318,
   0.9859215,
   0.9882205,
   0.9939301,
   0.9946747,
   0.9962291,
   0.9983805,
   0.9991903,
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
   graph = new TGraph(30,Graph_fx190,Graph_fy190);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph190 = new TH1F("Graph_Graph190","Mass-Matching Prioritized",100,0,1.099991);
   Graph_Graph190->SetMinimum(0);
   Graph_Graph190->SetMaximum(1.1);
   Graph_Graph190->SetDirectory(0);
   Graph_Graph190->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph190->SetLineColor(ci);
   Graph_Graph190->GetXaxis()->SetLabelFont(42);
   Graph_Graph190->GetXaxis()->SetTitleOffset(1);
   Graph_Graph190->GetXaxis()->SetTitleFont(42);
   Graph_Graph190->GetYaxis()->SetLabelFont(42);
   Graph_Graph190->GetYaxis()->SetTitleFont(42);
   Graph_Graph190->GetZaxis()->SetLabelFont(42);
   Graph_Graph190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph190->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph190);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx191[30] = {
   0,
   0.03305617,
   0.2000926,
   0.3473269,
   0.4652245,
   0.5548886,
   0.6284328,
   0.691204,
   0.7390715,
   0.7785611,
   0.8124376,
   0.8431002,
   0.8715256,
   0.8957847,
   0.9165792,
   0.9362609,
   0.9560107,
   0.9712776,
   0.9810659,
   0.9861014,
   0.98966,
   0.9920618,
   0.9938294,
   0.9958277,
   0.9968013,
   0.9974506,
   0.9994997,
   0.999819,
   0.9999175,
   0.9999902};
   Double_t Graph_fy191[30] = {
   0,
   0.05728359,
   0.2651588,
   0.4950981,
   0.6518552,
   0.7385287,
   0.7875409,
   0.8254172,
   0.8527603,
   0.8783442,
   0.8976919,
   0.9155536,
   0.9321442,
   0.9456029,
   0.9588946,
   0.9712333,
   0.983023,
   0.9892214,
   0.9938234,
   0.9970483,
   0.9978385,
   0.9982045,
   0.9989585,
   0.9991153,
   0.9994712,
   0.9997487,
   0.9999739,
   0.9999739,
   0.9999739,
   1};
   graph = new TGraph(30,Graph_fx191,Graph_fy191);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph191 = new TH1F("Graph_Graph191","Tagging Prioritized",100,0,1.099989);
   Graph_Graph191->SetMinimum(0);
   Graph_Graph191->SetMaximum(1.1);
   Graph_Graph191->SetDirectory(0);
   Graph_Graph191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph191->SetLineColor(ci);
   Graph_Graph191->GetXaxis()->SetLabelFont(42);
   Graph_Graph191->GetXaxis()->SetTitleOffset(1);
   Graph_Graph191->GetXaxis()->SetTitleFont(42);
   Graph_Graph191->GetYaxis()->SetLabelFont(42);
   Graph_Graph191->GetYaxis()->SetTitleFont(42);
   Graph_Graph191->GetZaxis()->SetLabelFont(42);
   Graph_Graph191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph191->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph191);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999959, 1.049991);
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
   ROC_Z_dR_Bj1_17->Modified();
   ROC_Z_dR_Bj1_17->cd();
   ROC_Z_dR_Bj1_17->SetSelected(ROC_Z_dR_Bj1_17);
}
