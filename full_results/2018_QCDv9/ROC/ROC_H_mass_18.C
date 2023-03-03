#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.1800242,-0.01323361,0.9707498,1.095789);
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
   
   Double_t Graph_fx852[12] = {
   0.04831333,
   0.1469318,
   0.2388593,
   0.321417,
   0.4028775,
   0.47525,
   0.5493012,
   0.6155792,
   0.6748472,
   0.7176489,
   0.7461631,
   0.7759018};
   Double_t Graph_fy852[12] = {
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
   TGraph *graph = new TGraph(12,Graph_fx852,Graph_fy852);
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
   
   TH1F *Graph_Graph852 = new TH1F("Graph_Graph852","Tagging Only",100,0,0.8486607);
   Graph_Graph852->SetMinimum(0.09028571);
   Graph_Graph852->SetMaximum(0.9339997);
   Graph_Graph852->SetDirectory(0);
   Graph_Graph852->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph852->SetLineColor(ci);
   Graph_Graph852->GetXaxis()->SetLabelFont(42);
   Graph_Graph852->GetXaxis()->SetTitleOffset(1);
   Graph_Graph852->GetXaxis()->SetTitleFont(42);
   Graph_Graph852->GetYaxis()->SetLabelFont(42);
   Graph_Graph852->GetYaxis()->SetTitleFont(42);
   Graph_Graph852->GetZaxis()->SetLabelFont(42);
   Graph_Graph852->GetZaxis()->SetTitleOffset(1);
   Graph_Graph852->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph852);
   
   TLatex *   tex = new TLatex(0.1578103,0.7138313,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(853);
      tex = new TLatex(0.253841,0.867099,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(854);
      tex = new TLatex(0.32836,0.8724075,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(855);
      tex = new TLatex(0.4134741,0.9093646,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(856);
      tex = new TLatex(0.4892253,0.9322753,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(857);
      tex = new TLatex(0.5751012,0.9453956,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(858);
      tex = new TLatex(0.6393478,0.95761,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(859);
      tex = new TLatex(0.7063935,0.9668619,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(860);
      tex = new TLatex(0.7398063,0.974899,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(861);
      tex = new TLatex(0.7670704,0.9799399,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(862);
      tex = new TLatex(0.7910222,0.985567,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(863);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx864[12] = {
   0.03838282,
   0.1578103,
   0.253841,
   0.32836,
   0.4134741,
   0.4892253,
   0.5751012,
   0.6393478,
   0.7063935,
   0.7398063,
   0.7670704,
   0.7910222};
   Double_t Graph_fy864[12] = {
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
   graph = new TGraph(12,Graph_fx864,Graph_fy864);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph864 = new TH1F("Graph_Graph864","Mass-Matching Prioritized",100,0,0.8662861);
   Graph_Graph864->SetMinimum(0.2121361);
   Graph_Graph864->SetMaximum(1.012243);
   Graph_Graph864->SetDirectory(0);
   Graph_Graph864->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph864->SetLineColor(ci);
   Graph_Graph864->GetXaxis()->SetLabelFont(42);
   Graph_Graph864->GetXaxis()->SetTitleOffset(1);
   Graph_Graph864->GetXaxis()->SetTitleFont(42);
   Graph_Graph864->GetYaxis()->SetLabelFont(42);
   Graph_Graph864->GetYaxis()->SetTitleFont(42);
   Graph_Graph864->GetZaxis()->SetLabelFont(42);
   Graph_Graph864->GetZaxis()->SetTitleOffset(1);
   Graph_Graph864->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph864);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx865[12] = {
   0.04842316,
   0.1467335,
   0.2384591,
   0.3209155,
   0.401911,
   0.4744786,
   0.5483066,
   0.6146223,
   0.6742475,
   0.7171347,
   0.7458812,
   0.7754333};
   Double_t Graph_fy865[12] = {
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
   graph = new TGraph(12,Graph_fx865,Graph_fy865);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph865 = new TH1F("Graph_Graph865","Tagging Prioritized",100,0,0.8481343);
   Graph_Graph865->SetMinimum(0.08875601);
   Graph_Graph865->SetMaximum(0.9337121);
   Graph_Graph865->SetDirectory(0);
   Graph_Graph865->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph865->SetLineColor(ci);
   Graph_Graph865->GetXaxis()->SetLabelFont(42);
   Graph_Graph865->GetXaxis()->SetTitleOffset(1);
   Graph_Graph865->GetXaxis()->SetTitleFont(42);
   Graph_Graph865->GetYaxis()->SetLabelFont(42);
   Graph_Graph865->GetYaxis()->SetTitleFont(42);
   Graph_Graph865->GetZaxis()->SetLabelFont(42);
   Graph_Graph865->GetZaxis()->SetTitleOffset(1);
   Graph_Graph865->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph865);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.0007508502, 0.8286542);
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
