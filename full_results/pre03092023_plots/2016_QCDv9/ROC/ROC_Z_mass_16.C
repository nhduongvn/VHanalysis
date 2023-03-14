#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_16()
{
//=========Macro generated from canvas: ROC_Z_mass_16/ROC_Z_mass_16
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_16 = new TCanvas("ROC_Z_mass_16", "ROC_Z_mass_16",0,0,600,600);
   ROC_Z_mass_16->SetHighLightColor(2);
   ROC_Z_mass_16->Range(-0.1647694,0.02448742,0.9407533,1.099373);
   ROC_Z_mass_16->SetFillColor(0);
   ROC_Z_mass_16->SetBorderMode(0);
   ROC_Z_mass_16->SetBorderSize(2);
   ROC_Z_mass_16->SetGridx();
   ROC_Z_mass_16->SetGridy();
   ROC_Z_mass_16->SetLeftMargin(0.15709);
   ROC_Z_mass_16->SetRightMargin(0.1234783);
   ROC_Z_mass_16->SetBottomMargin(0.12);
   ROC_Z_mass_16->SetFrameBorderMode(0);
   ROC_Z_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx866[8] = {
   0.04524653,
   0.1395577,
   0.2383085,
   0.3429909,
   0.4474102,
   0.5309941,
   0.5757448,
   0.6163834};
   Double_t Graph_fy866[8] = {
   0.1915832,
   0.4890049,
   0.6042376,
   0.6603906,
   0.710342,
   0.752286,
   0.7768234,
   0.7986816};
   TGraph *graph = new TGraph(8,Graph_fx866,Graph_fy866);
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
   
   TH1F *Graph_Graph866 = new TH1F("Graph_Graph866","Tagging Only",100,0,0.6734971);
   Graph_Graph866->SetMinimum(0.1308734);
   Graph_Graph866->SetMaximum(0.8593915);
   Graph_Graph866->SetDirectory(0);
   Graph_Graph866->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph866->SetLineColor(ci);
   Graph_Graph866->GetXaxis()->SetLabelFont(42);
   Graph_Graph866->GetXaxis()->SetTitleOffset(1);
   Graph_Graph866->GetXaxis()->SetTitleFont(42);
   Graph_Graph866->GetYaxis()->SetLabelFont(42);
   Graph_Graph866->GetYaxis()->SetTitleFont(42);
   Graph_Graph866->GetZaxis()->SetLabelFont(42);
   Graph_Graph866->GetZaxis()->SetTitleOffset(1);
   Graph_Graph866->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph866);
   
   TLatex *   tex = new TLatex(0.2000952,0.820291,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(867);
      tex = new TLatex(0.3304647,0.8826934,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(868);
      tex = new TLatex(0.4600668,0.9360135,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(869);
      tex = new TLatex(0.600431,0.9617876,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(870);
      tex = new TLatex(0.696591,0.9722874,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(871);
      tex = new TLatex(0.7348169,0.9851933,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(872);
      tex = new TLatex(0.768093,0.9937746,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(873);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx874[8] = {
   0.06531107,
   0.2000952,
   0.3304647,
   0.4600668,
   0.600431,
   0.696591,
   0.7348169,
   0.768093};
   Double_t Graph_fy874[8] = {
   0.3022879,
   0.720291,
   0.8426934,
   0.8960135,
   0.9217876,
   0.9322874,
   0.9451933,
   0.9537746};
   graph = new TGraph(8,Graph_fx874,Graph_fy874);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph874 = new TH1F("Graph_Graph874","Mass-Matching Prioritized",100,0,0.8383712);
   Graph_Graph874->SetMinimum(0.2371392);
   Graph_Graph874->SetMaximum(1.018923);
   Graph_Graph874->SetDirectory(0);
   Graph_Graph874->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph874->SetLineColor(ci);
   Graph_Graph874->GetXaxis()->SetLabelFont(42);
   Graph_Graph874->GetXaxis()->SetTitleOffset(1);
   Graph_Graph874->GetXaxis()->SetTitleFont(42);
   Graph_Graph874->GetYaxis()->SetLabelFont(42);
   Graph_Graph874->GetYaxis()->SetTitleFont(42);
   Graph_Graph874->GetZaxis()->SetLabelFont(42);
   Graph_Graph874->GetZaxis()->SetTitleOffset(1);
   Graph_Graph874->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph874);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx875[8] = {
   0.04504934,
   0.1394322,
   0.2382054,
   0.3423582,
   0.4462125,
   0.5293274,
   0.5740521,
   0.614699};
   Double_t Graph_fy875[8] = {
   0.1929032,
   0.4907026,
   0.6076989,
   0.6626239,
   0.7117627,
   0.7537795,
   0.7781037,
   0.7991149};
   graph = new TGraph(8,Graph_fx875,Graph_fy875);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph875 = new TH1F("Graph_Graph875","Tagging Prioritized",100,0,0.6716639);
   Graph_Graph875->SetMinimum(0.132282);
   Graph_Graph875->SetMaximum(0.859736);
   Graph_Graph875->SetDirectory(0);
   Graph_Graph875->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph875->SetLineColor(ci);
   Graph_Graph875->GetXaxis()->SetLabelFont(42);
   Graph_Graph875->GetXaxis()->SetTitleOffset(1);
   Graph_Graph875->GetXaxis()->SetTitleFont(42);
   Graph_Graph875->GetYaxis()->SetLabelFont(42);
   Graph_Graph875->GetYaxis()->SetTitleFont(42);
   Graph_Graph875->GetZaxis()->SetLabelFont(42);
   Graph_Graph875->GetZaxis()->SetTitleOffset(1);
   Graph_Graph875->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph875);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.008897157, 0.8042452);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_16->Modified();
   ROC_Z_mass_16->cd();
   ROC_Z_mass_16->SetSelected(ROC_Z_mass_16);
}
