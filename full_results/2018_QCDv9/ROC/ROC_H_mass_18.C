#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.1794754,-0.01323361,0.9678441,1.095789);
   ROC_H_mass_18->SetFillColor(0);
   ROC_H_mass_18->SetBorderMode(0);
   ROC_H_mass_18->SetBorderSize(2);
   ROC_H_mass_18->SetGridx();
   ROC_H_mass_18->SetGridy();
   ROC_H_mass_18->SetLeftMargin(0.15709);
   ROC_H_mass_18->SetRightMargin(0.1234783);
   ROC_H_mass_18->SetBottomMargin(0.12);
   ROC_H_mass_18->SetFrameBorderMode(0);
   ROC_H_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx730[12] = {
   0.04833448,
   0.1469406,
   0.2391568,
   0.3215422,
   0.4026852,
   0.4746404,
   0.5489761,
   0.6161351,
   0.6749915,
   0.7169184,
   0.7453852,
   0.7756802};
   Double_t Graph_fy730[12] = {
   0.1605952,
   0.3962447,
   0.5326452,
   0.6157762,
   0.6809105,
   0.7229799,
   0.7595458,
   0.7877687,
   0.8123298,
   0.8341399,
   0.8478473,
   0.8636902};
   TGraph *graph = new TGraph(12,Graph_fx730,Graph_fy730);
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
   
   TH1F *Graph_Graph730 = new TH1F("Graph_Graph730","Tagging Only",100,0,0.8484148);
   Graph_Graph730->SetMinimum(0.09028571);
   Graph_Graph730->SetMaximum(0.9339997);
   Graph_Graph730->SetDirectory(0);
   Graph_Graph730->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph730->SetLineColor(ci);
   Graph_Graph730->GetXaxis()->SetLabelFont(42);
   Graph_Graph730->GetXaxis()->SetTitleOffset(1);
   Graph_Graph730->GetXaxis()->SetTitleFont(42);
   Graph_Graph730->GetYaxis()->SetLabelFont(42);
   Graph_Graph730->GetYaxis()->SetTitleFont(42);
   Graph_Graph730->GetZaxis()->SetLabelFont(42);
   Graph_Graph730->GetZaxis()->SetTitleOffset(1);
   Graph_Graph730->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph730);
   
   TLatex *   tex = new TLatex(0.156326,0.7138313,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(731);
      tex = new TLatex(0.2533647,0.867099,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(732);
      tex = new TLatex(0.3271781,0.8724075,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(733);
      tex = new TLatex(0.4132805,0.9093646,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(734);
      tex = new TLatex(0.4880557,0.9322753,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(735);
      tex = new TLatex(0.5747502,0.9453956,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(736);
      tex = new TLatex(0.6399675,0.95761,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(737);
      tex = new TLatex(0.7056215,0.9668619,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(738);
      tex = new TLatex(0.7367275,0.974899,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(739);
      tex = new TLatex(0.7635269,0.9799399,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(740);
      tex = new TLatex(0.788656,0.985567,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(741);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx742[12] = {
   0.038276,
   0.156326,
   0.2533647,
   0.3271781,
   0.4132805,
   0.4880557,
   0.5747502,
   0.6399675,
   0.7056215,
   0.7367275,
   0.7635269,
   0.788656};
   Double_t Graph_fy742[12] = {
   0.2788116,
   0.6138313,
   0.767099,
   0.8324075,
   0.8693646,
   0.8922753,
   0.9053956,
   0.91761,
   0.9268619,
   0.934899,
   0.9399399,
   0.945567};
   graph = new TGraph(12,Graph_fx742,Graph_fy742);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph742 = new TH1F("Graph_Graph742","Mass-Matching Prioritized",100,0,0.863694);
   Graph_Graph742->SetMinimum(0.2121361);
   Graph_Graph742->SetMaximum(1.012243);
   Graph_Graph742->SetDirectory(0);
   Graph_Graph742->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph742->SetLineColor(ci);
   Graph_Graph742->GetXaxis()->SetLabelFont(42);
   Graph_Graph742->GetXaxis()->SetTitleOffset(1);
   Graph_Graph742->GetXaxis()->SetTitleFont(42);
   Graph_Graph742->GetYaxis()->SetLabelFont(42);
   Graph_Graph742->GetYaxis()->SetTitleFont(42);
   Graph_Graph742->GetZaxis()->SetLabelFont(42);
   Graph_Graph742->GetZaxis()->SetTitleOffset(1);
   Graph_Graph742->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph742);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx743[12] = {
   0.04848542,
   0.1468079,
   0.2388637,
   0.3212034,
   0.4019099,
   0.4739891,
   0.5481069,
   0.6151461,
   0.6743643,
   0.7163894,
   0.7451312,
   0.7752405};
   Double_t Graph_fy743[12] = {
   0.159169,
   0.3917922,
   0.529148,
   0.6134424,
   0.6795084,
   0.7224716,
   0.7596522,
   0.7878343,
   0.8120027,
   0.8336672,
   0.8474808,
   0.8632991};
   graph = new TGraph(12,Graph_fx743,Graph_fy743);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph743 = new TH1F("Graph_Graph743","Tagging Prioritized",100,0,0.847916);
   Graph_Graph743->SetMinimum(0.08875601);
   Graph_Graph743->SetMaximum(0.9337121);
   Graph_Graph743->SetDirectory(0);
   Graph_Graph743->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph743->SetLineColor(ci);
   Graph_Graph743->GetXaxis()->SetLabelFont(42);
   Graph_Graph743->GetXaxis()->SetTitleOffset(1);
   Graph_Graph743->GetXaxis()->SetTitleFont(42);
   Graph_Graph743->GetYaxis()->SetLabelFont(42);
   Graph_Graph743->GetYaxis()->SetTitleFont(42);
   Graph_Graph743->GetZaxis()->SetLabelFont(42);
   Graph_Graph743->GetZaxis()->SetTitleOffset(1);
   Graph_Graph743->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph743);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.0007569963, 0.826175);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 125.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_18->Modified();
   ROC_H_mass_18->cd();
   ROC_H_mass_18->SetSelected(ROC_H_mass_18);
}
