#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_17()
{
//=========Macro generated from canvas: ROC_Z_dR_17/ROC_Z_dR_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_17 = new TCanvas("ROC_Z_dR_17", "ROC_Z_dR_17",0,0,600,600);
   ROC_Z_dR_17->SetHighLightColor(2);
   ROC_Z_dR_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_17->SetFillColor(0);
   ROC_Z_dR_17->SetBorderMode(0);
   ROC_Z_dR_17->SetBorderSize(2);
   ROC_Z_dR_17->SetGridx();
   ROC_Z_dR_17->SetGridy();
   ROC_Z_dR_17->SetLeftMargin(0.15709);
   ROC_Z_dR_17->SetRightMargin(0.1234783);
   ROC_Z_dR_17->SetBottomMargin(0.12);
   ROC_Z_dR_17->SetFrameBorderMode(0);
   ROC_Z_dR_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx118[30] = {
   0,
   0,
   4.429756e-05,
   0.07164115,
   0.1562843,
   0.2229664,
   0.2811919,
   0.3350542,
   0.386588,
   0.4337395,
   0.4845072,
   0.5363025,
   0.591441,
   0.6497386,
   0.7149452,
   0.7842661,
   0.8619451,
   0.9090842,
   0.9377468,
   0.9594123,
   0.9740831,
   0.9839866,
   0.9896354,
   0.9954348,
   0.9978433,
   0.9987764,
   0.9996197,
   0.9999122,
   0.9999998,
   1};
   Double_t Graph_fy118[30] = {
   0,
   0,
   6.809168e-06,
   0.0435428,
   0.124255,
   0.2225142,
   0.3294315,
   0.424729,
   0.5027023,
   0.5748477,
   0.6341818,
   0.6874641,
   0.7428636,
   0.7948299,
   0.8448938,
   0.9041163,
   0.9566911,
   0.976592,
   0.9864802,
   0.9918475,
   0.995058,
   0.9972151,
   0.9985368,
   0.9993667,
   0.9998706,
   0.999976,
   0.9999911,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx118,Graph_fy118);
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
   
   TH1F *Graph_Graph118 = new TH1F("Graph_Graph118","Tagging Only",100,0,1.1);
   Graph_Graph118->SetMinimum(0);
   Graph_Graph118->SetMaximum(1.1);
   Graph_Graph118->SetDirectory(0);
   Graph_Graph118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph118->SetLineColor(ci);
   Graph_Graph118->GetXaxis()->SetLabelFont(42);
   Graph_Graph118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph118->GetXaxis()->SetTitleFont(42);
   Graph_Graph118->GetYaxis()->SetLabelFont(42);
   Graph_Graph118->GetYaxis()->SetTitleFont(42);
   Graph_Graph118->GetZaxis()->SetLabelFont(42);
   Graph_Graph118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph118);
   
   TLatex *   tex = new TLatex(0.224749,0.2753217,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(119);
      tex = new TLatex(0.3243343,0.4285679,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(120);
      tex = new TLatex(0.4067327,0.5831047,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(121);
      tex = new TLatex(0.4807445,0.7163469,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(122);
      tex = new TLatex(0.564995,0.8272467,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(123);
      tex = new TLatex(0.6262205,0.8506317,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(124);
      tex = new TLatex(0.6878638,0.9120618,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(125);
      tex = new TLatex(0.7450264,0.9528003,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(126);
      tex = new TLatex(0.7968057,0.9815396,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(127);
      tex = new TLatex(0.8375523,0.9989755,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(128);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx129[30] = {
   0,
   0,
   6.357179e-05,
   0.09457886,
   0.224749,
   0.3243343,
   0.4067327,
   0.4807445,
   0.564995,
   0.6262205,
   0.6878638,
   0.7450264,
   0.7968057,
   0.8375523,
   0.8839766,
   0.9225047,
   0.9539645,
   0.971116,
   0.9823336,
   0.9911849,
   0.9965125,
   0.9984669,
   0.9995899,
   0.9998614,
   0.9999374,
   0.9999968,
   0.9999977,
   1,
   1,
   1};
   Double_t Graph_fy129[30] = {
   0,
   0,
   0,
   0.06128113,
   0.1753217,
   0.3285679,
   0.4831047,
   0.6163469,
   0.7272467,
   0.8106317,
   0.8720618,
   0.9128003,
   0.9415396,
   0.9589755,
   0.973407,
   0.9863236,
   0.9931317,
   0.996255,
   0.9986878,
   0.9992237,
   0.9998176,
   0.9998993,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx129,Graph_fy129);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph129 = new TH1F("Graph_Graph129","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph129->SetMinimum(0);
   Graph_Graph129->SetMaximum(1.1);
   Graph_Graph129->SetDirectory(0);
   Graph_Graph129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph129->SetLineColor(ci);
   Graph_Graph129->GetXaxis()->SetLabelFont(42);
   Graph_Graph129->GetXaxis()->SetTitleOffset(1);
   Graph_Graph129->GetXaxis()->SetTitleFont(42);
   Graph_Graph129->GetYaxis()->SetLabelFont(42);
   Graph_Graph129->GetYaxis()->SetTitleFont(42);
   Graph_Graph129->GetZaxis()->SetLabelFont(42);
   Graph_Graph129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph129->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph129);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx130[30] = {
   0,
   0,
   5.479842e-05,
   0.07120636,
   0.1555315,
   0.2214783,
   0.279413,
   0.3335251,
   0.3852437,
   0.4333328,
   0.4847609,
   0.5366307,
   0.5917522,
   0.6500892,
   0.7152812,
   0.7846129,
   0.8624739,
   0.9094206,
   0.937934,
   0.959517,
   0.9741098,
   0.9839959,
   0.989687,
   0.9954399,
   0.9978243,
   0.9987589,
   0.9996264,
   0.9999138,
   0.9999998,
   1};
   Double_t Graph_fy130[30] = {
   0,
   0,
   6.642428e-06,
   0.04444914,
   0.1253434,
   0.2247374,
   0.3317143,
   0.4277216,
   0.5059149,
   0.5769713,
   0.6370115,
   0.6899736,
   0.7456582,
   0.7973118,
   0.8463843,
   0.904934,
   0.9565633,
   0.9769308,
   0.9864993,
   0.9919797,
   0.9951191,
   0.9972392,
   0.9985171,
   0.9993823,
   0.9998738,
   0.9999766,
   0.9999913,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx130,Graph_fy130);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph130 = new TH1F("Graph_Graph130","Tagging Prioritized",100,0,1.1);
   Graph_Graph130->SetMinimum(0);
   Graph_Graph130->SetMaximum(1.1);
   Graph_Graph130->SetDirectory(0);
   Graph_Graph130->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph130->SetLineColor(ci);
   Graph_Graph130->GetXaxis()->SetLabelFont(42);
   Graph_Graph130->GetXaxis()->SetTitleOffset(1);
   Graph_Graph130->GetXaxis()->SetTitleFont(42);
   Graph_Graph130->GetYaxis()->SetLabelFont(42);
   Graph_Graph130->GetYaxis()->SetTitleFont(42);
   Graph_Graph130->GetZaxis()->SetLabelFont(42);
   Graph_Graph130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph130->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph130);
   
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
   ROC_Z_dR_17->Modified();
   ROC_Z_dR_17->cd();
   ROC_Z_dR_17->SetSelected(ROC_Z_dR_17);
}
