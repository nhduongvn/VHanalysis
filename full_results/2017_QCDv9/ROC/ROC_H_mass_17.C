#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(-0.1654801,-0.03077047,0.9958403,1.099628);
   ROC_H_mass_17->SetFillColor(0);
   ROC_H_mass_17->SetBorderMode(0);
   ROC_H_mass_17->SetBorderSize(2);
   ROC_H_mass_17->SetGridx();
   ROC_H_mass_17->SetGridy();
   ROC_H_mass_17->SetLeftMargin(0.15709);
   ROC_H_mass_17->SetRightMargin(0.1234783);
   ROC_H_mass_17->SetBottomMargin(0.12);
   ROC_H_mass_17->SetFrameBorderMode(0);
   ROC_H_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx839[12] = {
   0.05508779,
   0.1543803,
   0.2380813,
   0.3299305,
   0.4126427,
   0.4897156,
   0.559607,
   0.6257043,
   0.6829238,
   0.7245631,
   0.7516957,
   0.7751966};
   Double_t Graph_fy839[12] = {
   0.1457104,
   0.3814794,
   0.5155071,
   0.6039907,
   0.6628323,
   0.7124599,
   0.7478313,
   0.7794674,
   0.8065901,
   0.829928,
   0.846355,
   0.8622931};
   TGraph *graph = new TGraph(12,Graph_fx839,Graph_fy839);
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
   
   TH1F *Graph_Graph839 = new TH1F("Graph_Graph839","Tagging Only",100,0,0.8472075);
   Graph_Graph839->SetMinimum(0.07405211);
   Graph_Graph839->SetMaximum(0.9339514);
   Graph_Graph839->SetDirectory(0);
   Graph_Graph839->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph839->SetLineColor(ci);
   Graph_Graph839->GetXaxis()->SetLabelFont(42);
   Graph_Graph839->GetXaxis()->SetTitleOffset(1);
   Graph_Graph839->GetXaxis()->SetTitleFont(42);
   Graph_Graph839->GetYaxis()->SetLabelFont(42);
   Graph_Graph839->GetYaxis()->SetTitleFont(42);
   Graph_Graph839->GetZaxis()->SetLabelFont(42);
   Graph_Graph839->GetZaxis()->SetTitleOffset(1);
   Graph_Graph839->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph839);
   
   TLatex *   tex = new TLatex(0.2476009,0.8531274,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(840);
      tex = new TLatex(0.3364231,0.8617674,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(841);
      tex = new TLatex(0.4127398,0.8959344,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(842);
      tex = new TLatex(0.5063815,0.9212116,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(843);
      tex = new TLatex(0.5886622,0.9365133,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(844);
      tex = new TLatex(0.6591231,0.9539725,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(845);
      tex = new TLatex(0.7207912,0.9639937,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(846);
      tex = new TLatex(0.7574647,0.973868,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(847);
      tex = new TLatex(0.7894224,0.9788702,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(848);
      tex = new TLatex(0.8144656,0.9865104,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(849);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx850[12] = {
   0.05495932,
   0.1413885,
   0.2476009,
   0.3364231,
   0.4127398,
   0.5063815,
   0.5886622,
   0.6591231,
   0.7207912,
   0.7574647,
   0.7894224,
   0.8144656};
   Double_t Graph_fy850[12] = {
   0.2441895,
   0.6127492,
   0.7531274,
   0.8217674,
   0.8559344,
   0.8812116,
   0.8965133,
   0.9139725,
   0.9239937,
   0.933868,
   0.9388702,
   0.9465104};
   graph = new TGraph(12,Graph_fx850,Graph_fy850);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph850 = new TH1F("Graph_Graph850","Mass-Matching Prioritized",100,0,0.8904162);
   Graph_Graph850->SetMinimum(0.1739574);
   Graph_Graph850->SetMaximum(1.016742);
   Graph_Graph850->SetDirectory(0);
   Graph_Graph850->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph850->SetLineColor(ci);
   Graph_Graph850->GetXaxis()->SetLabelFont(42);
   Graph_Graph850->GetXaxis()->SetTitleOffset(1);
   Graph_Graph850->GetXaxis()->SetTitleFont(42);
   Graph_Graph850->GetYaxis()->SetLabelFont(42);
   Graph_Graph850->GetYaxis()->SetTitleFont(42);
   Graph_Graph850->GetZaxis()->SetLabelFont(42);
   Graph_Graph850->GetZaxis()->SetTitleOffset(1);
   Graph_Graph850->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph850);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx851[12] = {
   0.05492855,
   0.1536929,
   0.2375151,
   0.3298358,
   0.4127547,
   0.4896195,
   0.5594692,
   0.625191,
   0.6820079,
   0.7238293,
   0.7509328,
   0.7744667};
   Double_t Graph_fy851[12] = {
   0.1449551,
   0.37906,
   0.5148507,
   0.6035636,
   0.6625257,
   0.7116787,
   0.7473695,
   0.7792162,
   0.8063486,
   0.829471,
   0.8453557,
   0.8614649};
   graph = new TGraph(12,Graph_fx851,Graph_fy851);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph851 = new TH1F("Graph_Graph851","Tagging Prioritized",100,0,0.8464205);
   Graph_Graph851->SetMinimum(0.07330413);
   Graph_Graph851->SetMaximum(0.9331159);
   Graph_Graph851->SetDirectory(0);
   Graph_Graph851->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph851->SetLineColor(ci);
   Graph_Graph851->GetXaxis()->SetLabelFont(42);
   Graph_Graph851->GetXaxis()->SetTitleOffset(1);
   Graph_Graph851->GetXaxis()->SetTitleFont(42);
   Graph_Graph851->GetYaxis()->SetLabelFont(42);
   Graph_Graph851->GetYaxis()->SetTitleFont(42);
   Graph_Graph851->GetZaxis()->SetLabelFont(42);
   Graph_Graph851->GetZaxis()->SetTitleOffset(1);
   Graph_Graph851->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph851);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.0169517, 0.8524424);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_17->Modified();
   ROC_H_mass_17->cd();
   ROC_H_mass_17->SetSelected(ROC_H_mass_17);
}
