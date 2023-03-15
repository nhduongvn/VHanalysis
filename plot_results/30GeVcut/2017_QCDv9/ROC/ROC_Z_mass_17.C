#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_17()
{
//=========Macro generated from canvas: ROC_Z_mass_17/ROC_Z_mass_17
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_17 = new TCanvas("ROC_Z_mass_17", "ROC_Z_mass_17",0,0,600,600);
   ROC_Z_mass_17->SetHighLightColor(2);
   ROC_Z_mass_17->Range(-0.1828176,0.01763898,1.130807,1.121038);
   ROC_Z_mass_17->SetFillColor(0);
   ROC_Z_mass_17->SetBorderMode(0);
   ROC_Z_mass_17->SetBorderSize(2);
   ROC_Z_mass_17->SetGridx();
   ROC_Z_mass_17->SetGridy();
   ROC_Z_mass_17->SetLeftMargin(0.15709);
   ROC_Z_mass_17->SetRightMargin(0.1234783);
   ROC_Z_mass_17->SetBottomMargin(0.12);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx853[8] = {
   0.06691977,
   0.1943554,
   0.3170249,
   0.4388551,
   0.5600025,
   0.6776951,
   0.7424297,
   0.7723915};
   Double_t Graph_fy853[8] = {
   0.1891986,
   0.4873528,
   0.642596,
   0.7232365,
   0.7760985,
   0.8155114,
   0.8442767,
   0.8639026};
   TGraph *graph = new TGraph(8,Graph_fx853,Graph_fy853);
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
   
   TH1F *Graph_Graph853 = new TH1F("Graph_Graph853","Tagging Only",100,0,0.8429386);
   Graph_Graph853->SetMinimum(0.1217282);
   Graph_Graph853->SetMaximum(0.931373);
   Graph_Graph853->SetDirectory(0);
   Graph_Graph853->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph853->SetLineColor(ci);
   Graph_Graph853->GetXaxis()->SetLabelFont(42);
   Graph_Graph853->GetXaxis()->SetTitleOffset(1);
   Graph_Graph853->GetXaxis()->SetTitleFont(42);
   Graph_Graph853->GetYaxis()->SetLabelFont(42);
   Graph_Graph853->GetYaxis()->SetTitleFont(42);
   Graph_Graph853->GetZaxis()->SetLabelFont(42);
   Graph_Graph853->GetZaxis()->SetTitleOffset(1);
   Graph_Graph853->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph853);
   
   TLatex *   tex = new TLatex(0.2409478,0.7596357,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(854);
      tex = new TLatex(0.4067995,0.880703,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(855);
      tex = new TLatex(0.5390511,0.9433467,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(856);
      tex = new TLatex(0.6886387,0.9791469,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(857);
      tex = new TLatex(0.8419778,0.9960503,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(858);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx859[8] = {
   0.07866832,
   0.2409478,
   0.4067995,
   0.5390511,
   0.6886387,
   0.8419778,
   0.904851,
   0.9256453};
   Double_t Graph_fy859[8] = {
   0.2651854,
   0.6596357,
   0.840703,
   0.9033467,
   0.9391469,
   0.9560503,
   0.966049,
   0.9715773};
   graph = new TGraph(8,Graph_fx859,Graph_fy859);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph859 = new TH1F("Graph_Graph859","Mass-Matching Prioritized",100,0,1.010343);
   Graph_Graph859->SetMinimum(0.1945462);
   Graph_Graph859->SetMaximum(1.042216);
   Graph_Graph859->SetDirectory(0);
   Graph_Graph859->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph859->SetLineColor(ci);
   Graph_Graph859->GetXaxis()->SetLabelFont(42);
   Graph_Graph859->GetXaxis()->SetTitleOffset(1);
   Graph_Graph859->GetXaxis()->SetTitleFont(42);
   Graph_Graph859->GetYaxis()->SetLabelFont(42);
   Graph_Graph859->GetYaxis()->SetTitleFont(42);
   Graph_Graph859->GetZaxis()->SetLabelFont(42);
   Graph_Graph859->GetZaxis()->SetTitleOffset(1);
   Graph_Graph859->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph859);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx860[8] = {
   0.0664971,
   0.1941298,
   0.3177962,
   0.4392394,
   0.5610292,
   0.678071,
   0.7426772,
   0.7725195};
   Double_t Graph_fy860[8] = {
   0.1891673,
   0.488359,
   0.6431629,
   0.723653,
   0.77749,
   0.8173401,
   0.8459342,
   0.8654823};
   graph = new TGraph(8,Graph_fx860,Graph_fy860);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph860 = new TH1F("Graph_Graph860","Tagging Prioritized",100,0,0.8431218);
   Graph_Graph860->SetMinimum(0.1215358);
   Graph_Graph860->SetMaximum(0.9331138);
   Graph_Graph860->SetDirectory(0);
   Graph_Graph860->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph860->SetLineColor(ci);
   Graph_Graph860->GetXaxis()->SetLabelFont(42);
   Graph_Graph860->GetXaxis()->SetTitleOffset(1);
   Graph_Graph860->GetXaxis()->SetTitleFont(42);
   Graph_Graph860->GetYaxis()->SetLabelFont(42);
   Graph_Graph860->GetYaxis()->SetTitleFont(42);
   Graph_Graph860->GetZaxis()->SetLabelFont(42);
   Graph_Graph860->GetZaxis()->SetTitleOffset(1);
   Graph_Graph860->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph860);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02353968, 0.9686027);
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
   entry=leg->AddEntry("NULL","Intervals centered around 85.0 GeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_17->Modified();
   ROC_Z_mass_17->cd();
   ROC_Z_mass_17->SetSelected(ROC_Z_mass_17);
}
