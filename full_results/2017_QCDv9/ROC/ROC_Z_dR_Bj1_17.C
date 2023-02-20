#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_17/ROC_Z_dR_Bj1_17
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_17 = new TCanvas("ROC_Z_dR_Bj1_17", "ROC_Z_dR_Bj1_17",0,0,600,600);
   ROC_Z_dR_Bj1_17->SetHighLightColor(2);
   ROC_Z_dR_Bj1_17->Range(-0.2901857,-0.1615385,1.238786,1.184615);
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
   0.03283176,
   0.2012998,
   0.3492436,
   0.4664297,
   0.5566601,
   0.6304436,
   0.693827,
   0.7417533,
   0.7808168,
   0.814767,
   0.8459938,
   0.8746808,
   0.8973098,
   0.9178765,
   0.9374087,
   0.9575006,
   0.973028,
   0.9829395,
   0.9878973,
   0.9912616,
   0.9937148,
   0.9954569,
   0.997548,
   0.998548,
   0.999218,
   0.999482,
   0.9998175,
   0.9999161,
   0.9999901};
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
   
   TLatex *   tex = new TLatex(0.201509,0.3651588,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(182);
      tex = new TLatex(0.3447652,0.6192361,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(183);
      tex = new TLatex(0.4950191,0.8623245,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(184);
      tex = new TLatex(0.6199821,0.9105736,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(185);
      tex = new TLatex(0.689663,0.9529869,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(186);
      tex = new TLatex(0.7510578,0.9755234,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(187);
      tex = new TLatex(0.7912862,0.9968483,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(188);
      tex = new TLatex(0.8248866,1.008161,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(189);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx190[30] = {
   0,
   0.001190711,
   0.1681271,
   0.3447652,
   0.4950191,
   0.6199821,
   0.689663,
   0.7510578,
   0.7912862,
   0.8248866,
   0.8537037,
   0.8761398,
   0.9111147,
   0.929386,
   0.938679,
   0.9482026,
   0.9586047,
   0.9687019,
   0.9873243,
   0.992337,
   0.9946924,
   0.9977555,
   0.9982519,
   0.9989164,
   0.9994662,
   0.999744,
   0.9997595,
   0.9999793,
   0.9999822,
   0.9999916};
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
   0.03296922,
   0.201509,
   0.349136,
   0.4664363,
   0.5566002,
   0.6307278,
   0.6939784,
   0.7420253,
   0.7812662,
   0.8150019,
   0.8461686,
   0.8747189,
   0.8974059,
   0.9178691,
   0.9374051,
   0.9575524,
   0.9729927,
   0.982987,
   0.9879426,
   0.9912338,
   0.9936925,
   0.9954836,
   0.9975542,
   0.9985665,
   0.9992306,
   0.9994854,
   0.9998176,
   0.9999174,
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
   multigraph->GetXaxis()->SetLimits(-0.04999958, 1.049991);
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
