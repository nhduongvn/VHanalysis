#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Thu Feb 16 10:46:54 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(-0.1638769,-0.03077047,0.9955912,1.099628);
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
   
   Double_t Graph_fx852[12] = {
   0.05635405,
   0.1558837,
   0.2399041,
   0.3291122,
   0.4133105,
   0.4889935,
   0.5593678,
   0.6248702,
   0.6831,
   0.7250873,
   0.7521022,
   0.7756339};
   Double_t Graph_fy852[12] = {
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
   
   TH1F *Graph_Graph852 = new TH1F("Graph_Graph852","Tagging Only",100,0,0.8475619);
   Graph_Graph852->SetMinimum(0.07405211);
   Graph_Graph852->SetMaximum(0.9339514);
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
   
   TLatex *   tex = new TLatex(0.2543484,0.8531274,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(853);
      tex = new TLatex(0.3414084,0.8617674,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(854);
      tex = new TLatex(0.4193858,0.8959344,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(855);
      tex = new TLatex(0.5052597,0.9212116,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(856);
      tex = new TLatex(0.5862196,0.9365133,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(857);
      tex = new TLatex(0.6578754,0.9539725,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(858);
      tex = new TLatex(0.7210291,0.9639937,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(859);
      tex = new TLatex(0.7575134,0.973868,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(860);
      tex = new TLatex(0.7889663,0.9788702,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(861);
      tex = new TLatex(0.8145058,0.9865104,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(862);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx863[12] = {
   0.05800035,
   0.1465131,
   0.2543484,
   0.3414084,
   0.4193858,
   0.5052597,
   0.5862196,
   0.6578754,
   0.7210291,
   0.7575134,
   0.7889663,
   0.8145058};
   Double_t Graph_fy863[12] = {
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
   graph = new TGraph(12,Graph_fx863,Graph_fy863);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph863 = new TH1F("Graph_Graph863","Mass-Matching Prioritized",100,0,0.8901563);
   Graph_Graph863->SetMinimum(0.1739574);
   Graph_Graph863->SetMaximum(1.016742);
   Graph_Graph863->SetDirectory(0);
   Graph_Graph863->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph863->SetLineColor(ci);
   Graph_Graph863->GetXaxis()->SetLabelFont(42);
   Graph_Graph863->GetXaxis()->SetTitleOffset(1);
   Graph_Graph863->GetXaxis()->SetTitleFont(42);
   Graph_Graph863->GetYaxis()->SetLabelFont(42);
   Graph_Graph863->GetYaxis()->SetTitleFont(42);
   Graph_Graph863->GetZaxis()->SetLabelFont(42);
   Graph_Graph863->GetZaxis()->SetTitleOffset(1);
   Graph_Graph863->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph863);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx864[12] = {
   0.05618025,
   0.1551971,
   0.2393542,
   0.3288974,
   0.413311,
   0.4888104,
   0.5591543,
   0.6242988,
   0.6821168,
   0.7242978,
   0.7512887,
   0.7748523};
   Double_t Graph_fy864[12] = {
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
   graph = new TGraph(12,Graph_fx864,Graph_fy864);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph864 = new TH1F("Graph_Graph864","Tagging Prioritized",100,0,0.8467196);
   Graph_Graph864->SetMinimum(0.07330413);
   Graph_Graph864->SetMaximum(0.9331159);
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
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.01826397, 0.8524221);
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
