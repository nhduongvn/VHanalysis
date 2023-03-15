#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.2069094,-0.04510587,1.131768,1.125309);
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
   
   Double_t Graph_fx834[12] = {
   0.04955787,
   0.156048,
   0.2546992,
   0.352822,
   0.4501456,
   0.5389096,
   0.6189318,
   0.6907308,
   0.7585002,
   0.8207548,
   0.8610619,
   0.8764626};
   Double_t Graph_fy834[12] = {
   0.1376124,
   0.3622228,
   0.5152003,
   0.6173152,
   0.6999886,
   0.7590313,
   0.8016881,
   0.8384763,
   0.8674342,
   0.8928841,
   0.9083093,
   0.9186591};
   TGraph *graph = new TGraph(12,Graph_fx834,Graph_fy834);
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
   
   TH1F *Graph_Graph834 = new TH1F("Graph_Graph834","Tagging Only",100,0,0.9591531);
   Graph_Graph834->SetMinimum(0.05950775);
   Graph_Graph834->SetMaximum(0.9967638);
   Graph_Graph834->SetDirectory(0);
   Graph_Graph834->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph834->SetLineColor(ci);
   Graph_Graph834->GetXaxis()->SetLabelFont(42);
   Graph_Graph834->GetXaxis()->SetTitleOffset(1);
   Graph_Graph834->GetXaxis()->SetTitleFont(42);
   Graph_Graph834->GetYaxis()->SetLabelFont(42);
   Graph_Graph834->GetYaxis()->SetTitleFont(42);
   Graph_Graph834->GetZaxis()->SetLabelFont(42);
   Graph_Graph834->GetZaxis()->SetTitleOffset(1);
   Graph_Graph834->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph834);
   
   TLatex *   tex = new TLatex(0.1844672,0.6597591,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(835);
      tex = new TLatex(0.2837013,0.8407445,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(836);
      tex = new TLatex(0.3927324,0.8675601,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(837);
      tex = new TLatex(0.5022189,0.9151213,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(838);
      tex = new TLatex(0.58145,0.94829,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(839);
      tex = new TLatex(0.6581398,0.9687606,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(840);
      tex = new TLatex(0.7369233,0.9819509,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(841);
      tex = new TLatex(0.8096789,0.9898149,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(842);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx843[12] = {
   0.04716016,
   0.1844672,
   0.2837013,
   0.3927324,
   0.5022189,
   0.58145,
   0.6581398,
   0.7369233,
   0.8096789,
   0.8735298,
   0.9121512,
   0.9226938};
   Double_t Graph_fy843[12] = {
   0.2272062,
   0.5597591,
   0.7407445,
   0.8275601,
   0.8751213,
   0.90829,
   0.9287606,
   0.9419509,
   0.9498149,
   0.9573236,
   0.9627086,
   0.9667707};
   graph = new TGraph(12,Graph_fx843,Graph_fy843);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph843 = new TH1F("Graph_Graph843","Mass-Matching Prioritized",100,0,1.010247);
   Graph_Graph843->SetMinimum(0.1532498);
   Graph_Graph843->SetMaximum(1.040727);
   Graph_Graph843->SetDirectory(0);
   Graph_Graph843->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph843->SetLineColor(ci);
   Graph_Graph843->GetXaxis()->SetLabelFont(42);
   Graph_Graph843->GetXaxis()->SetTitleOffset(1);
   Graph_Graph843->GetXaxis()->SetTitleFont(42);
   Graph_Graph843->GetYaxis()->SetLabelFont(42);
   Graph_Graph843->GetYaxis()->SetTitleFont(42);
   Graph_Graph843->GetZaxis()->SetLabelFont(42);
   Graph_Graph843->GetZaxis()->SetTitleOffset(1);
   Graph_Graph843->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph843);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx844[12] = {
   0.04964354,
   0.1557103,
   0.2546309,
   0.3522377,
   0.449451,
   0.5380522,
   0.6179729,
   0.6902423,
   0.7584216,
   0.8206244,
   0.8610899,
   0.8765351};
   Double_t Graph_fy844[12] = {
   0.1368404,
   0.3600512,
   0.5134663,
   0.6165671,
   0.6993554,
   0.759174,
   0.8021344,
   0.8388641,
   0.8673422,
   0.8928661,
   0.9084628,
   0.9187169};
   graph = new TGraph(12,Graph_fx844,Graph_fy844);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph844 = new TH1F("Graph_Graph844","Tagging Prioritized",100,0,0.9592243);
   Graph_Graph844->SetMinimum(0.05865274);
   Graph_Graph844->SetMaximum(0.9969046);
   Graph_Graph844->SetDirectory(0);
   Graph_Graph844->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph844->SetLineColor(ci);
   Graph_Graph844->GetXaxis()->SetLabelFont(42);
   Graph_Graph844->GetXaxis()->SetTitleOffset(1);
   Graph_Graph844->GetXaxis()->SetTitleFont(42);
   Graph_Graph844->GetYaxis()->SetLabelFont(42);
   Graph_Graph844->GetYaxis()->SetTitleFont(42);
   Graph_Graph844->GetZaxis()->SetLabelFont(42);
   Graph_Graph844->GetZaxis()->SetTitleOffset(1);
   Graph_Graph844->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph844);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.003383472, 0.9664705);
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
