#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_16()
{
//=========Macro generated from canvas: ROC_Z_mass_16/ROC_Z_mass_16
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_16 = new TCanvas("ROC_Z_mass_16", "ROC_Z_mass_16",0,0,600,600);
   ROC_Z_mass_16->SetHighLightColor(2);
   ROC_Z_mass_16->Range(-0.1638361,0.02448742,0.9326375,1.099373);
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
   
   Double_t Graph_fx744[8] = {
   0.04444581,
   0.1396381,
   0.2386727,
   0.3448268,
   0.4503095,
   0.5329642,
   0.576992,
   0.6189573};
   Double_t Graph_fy744[8] = {
   0.1915832,
   0.4890049,
   0.6042376,
   0.6603906,
   0.710342,
   0.752286,
   0.7768234,
   0.7986816};
   TGraph *graph = new TGraph(8,Graph_fx744,Graph_fy744);
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
   
   TH1F *Graph_Graph744 = new TH1F("Graph_Graph744","Tagging Only",100,0,0.6764085);
   Graph_Graph744->SetMinimum(0.1308734);
   Graph_Graph744->SetMaximum(0.8593915);
   Graph_Graph744->SetDirectory(0);
   Graph_Graph744->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph744->SetLineColor(ci);
   Graph_Graph744->GetXaxis()->SetLabelFont(42);
   Graph_Graph744->GetXaxis()->SetTitleOffset(1);
   Graph_Graph744->GetXaxis()->SetTitleFont(42);
   Graph_Graph744->GetYaxis()->SetLabelFont(42);
   Graph_Graph744->GetYaxis()->SetTitleFont(42);
   Graph_Graph744->GetZaxis()->SetLabelFont(42);
   Graph_Graph744->GetZaxis()->SetTitleOffset(1);
   Graph_Graph744->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph744);
   
   TLatex *   tex = new TLatex(0.1938366,0.820291,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(745);
      tex = new TLatex(0.3228516,0.8826934,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(746);
      tex = new TLatex(0.4505597,0.9360135,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(747);
      tex = new TLatex(0.6006294,0.9617876,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(748);
      tex = new TLatex(0.687128,0.9722874,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(749);
      tex = new TLatex(0.7276437,0.9851933,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(750);
      tex = new TLatex(0.7613906,0.9937746,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(751);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx752[8] = {
   0.0642209,
   0.1938366,
   0.3228516,
   0.4505597,
   0.6006294,
   0.687128,
   0.7276437,
   0.7613906};
   Double_t Graph_fy752[8] = {
   0.3022879,
   0.720291,
   0.8426934,
   0.8960135,
   0.9217876,
   0.9322874,
   0.9451933,
   0.9537746};
   graph = new TGraph(8,Graph_fx752,Graph_fy752);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph752 = new TH1F("Graph_Graph752","Mass-Matching Prioritized",100,0,0.8311075);
   Graph_Graph752->SetMinimum(0.2371392);
   Graph_Graph752->SetMaximum(1.018923);
   Graph_Graph752->SetDirectory(0);
   Graph_Graph752->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph752->SetLineColor(ci);
   Graph_Graph752->GetXaxis()->SetLabelFont(42);
   Graph_Graph752->GetXaxis()->SetTitleOffset(1);
   Graph_Graph752->GetXaxis()->SetTitleFont(42);
   Graph_Graph752->GetYaxis()->SetLabelFont(42);
   Graph_Graph752->GetYaxis()->SetTitleFont(42);
   Graph_Graph752->GetZaxis()->SetLabelFont(42);
   Graph_Graph752->GetZaxis()->SetTitleOffset(1);
   Graph_Graph752->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph752);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx753[8] = {
   0.0442652,
   0.1393026,
   0.2383249,
   0.3439348,
   0.4488569,
   0.5310566,
   0.5750739,
   0.6170412};
   Double_t Graph_fy753[8] = {
   0.1929032,
   0.4907026,
   0.6076989,
   0.6626239,
   0.7117627,
   0.7537795,
   0.7781037,
   0.7991149};
   graph = new TGraph(8,Graph_fx753,Graph_fy753);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph753 = new TH1F("Graph_Graph753","Tagging Prioritized",100,0,0.6743188);
   Graph_Graph753->SetMinimum(0.132282);
   Graph_Graph753->SetMaximum(0.859736);
   Graph_Graph753->SetDirectory(0);
   Graph_Graph753->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph753->SetLineColor(ci);
   Graph_Graph753->GetXaxis()->SetLabelFont(42);
   Graph_Graph753->GetXaxis()->SetTitleOffset(1);
   Graph_Graph753->GetXaxis()->SetTitleFont(42);
   Graph_Graph753->GetYaxis()->SetLabelFont(42);
   Graph_Graph753->GetYaxis()->SetTitleFont(42);
   Graph_Graph753->GetZaxis()->SetLabelFont(42);
   Graph_Graph753->GetZaxis()->SetTitleOffset(1);
   Graph_Graph753->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph753);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.008408931, 0.7972468);
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
