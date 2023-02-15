#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(-0.2021376,-0.05106557,1.137542,1.129955);
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
   
   Double_t Graph_fx823[12] = {
   0.05212212,
   0.1476403,
   0.2479807,
   0.3438635,
   0.4450785,
   0.5395648,
   0.6214717,
   0.6980792,
   0.7699178,
   0.8335083,
   0.8673969,
   0.8825693};
   Double_t Graph_fy823[12] = {
   0.1326648,
   0.3545794,
   0.5051288,
   0.6099262,
   0.6908243,
   0.752186,
   0.7972536,
   0.8344524,
   0.8651095,
   0.8914173,
   0.9054081,
   0.9171715};
   TGraph *graph = new TGraph(12,Graph_fx823,Graph_fy823);
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
   
   TH1F *Graph_Graph823 = new TH1F("Graph_Graph823","Tagging Only",100,0,0.965614);
   Graph_Graph823->SetMinimum(0.05421417);
   Graph_Graph823->SetMaximum(0.9956222);
   Graph_Graph823->SetDirectory(0);
   Graph_Graph823->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph823->SetLineColor(ci);
   Graph_Graph823->GetXaxis()->SetLabelFont(42);
   Graph_Graph823->GetXaxis()->SetTitleOffset(1);
   Graph_Graph823->GetXaxis()->SetTitleFont(42);
   Graph_Graph823->GetYaxis()->SetLabelFont(42);
   Graph_Graph823->GetYaxis()->SetTitleFont(42);
   Graph_Graph823->GetZaxis()->SetLabelFont(42);
   Graph_Graph823->GetZaxis()->SetTitleOffset(1);
   Graph_Graph823->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph823);
   
   TLatex *   tex = new TLatex(0.1717621,0.6614628,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(824);
      tex = new TLatex(0.293209,0.8283701,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(825);
      tex = new TLatex(0.4090241,0.8624511,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(826);
      tex = new TLatex(0.501848,0.9100512,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(827);
      tex = new TLatex(0.5874983,0.9398725,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(828);
      tex = new TLatex(0.6711036,0.9653807,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(829);
      tex = new TLatex(0.7518992,0.9836864,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(830);
      tex = new TLatex(0.8393426,0.9934853,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(831);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx832[12] = {
   0.06014208,
   0.1717621,
   0.293209,
   0.4090241,
   0.501848,
   0.5874983,
   0.6711036,
   0.7518992,
   0.8393426,
   0.8921553,
   0.916622,
   0.9283112};
   Double_t Graph_fy832[12] = {
   0.2215132,
   0.5614628,
   0.7283701,
   0.8224511,
   0.8700512,
   0.8998725,
   0.9253807,
   0.9436864,
   0.9534853,
   0.9620015,
   0.9648385,
   0.9699802};
   graph = new TGraph(12,Graph_fx832,Graph_fy832);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph832 = new TH1F("Graph_Graph832","Mass-Matching Prioritized",100,0,1.015128);
   Graph_Graph832->SetMinimum(0.1466665);
   Graph_Graph832->SetMaximum(1.044827);
   Graph_Graph832->SetDirectory(0);
   Graph_Graph832->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph832->SetLineColor(ci);
   Graph_Graph832->GetXaxis()->SetLabelFont(42);
   Graph_Graph832->GetXaxis()->SetTitleOffset(1);
   Graph_Graph832->GetXaxis()->SetTitleFont(42);
   Graph_Graph832->GetYaxis()->SetLabelFont(42);
   Graph_Graph832->GetYaxis()->SetTitleFont(42);
   Graph_Graph832->GetZaxis()->SetLabelFont(42);
   Graph_Graph832->GetZaxis()->SetTitleOffset(1);
   Graph_Graph832->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph832);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx833[12] = {
   0.0531102,
   0.1487577,
   0.2493271,
   0.345917,
   0.4465009,
   0.5407548,
   0.6226761,
   0.6987983,
   0.7701664,
   0.8332874,
   0.8669365,
   0.8821823};
   Double_t Graph_fy833[12] = {
   0.1325294,
   0.3532499,
   0.5042164,
   0.6088768,
   0.6896968,
   0.7515882,
   0.7969536,
   0.834159,
   0.8655259,
   0.8918459,
   0.9059619,
   0.9177355};
   graph = new TGraph(12,Graph_fx833,Graph_fy833);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph833 = new TH1F("Graph_Graph833","Tagging Prioritized",100,0,0.9650895);
   Graph_Graph833->SetMinimum(0.05400881);
   Graph_Graph833->SetMaximum(0.9962561);
   Graph_Graph833->SetDirectory(0);
   Graph_Graph833->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph833->SetLineColor(ci);
   Graph_Graph833->GetXaxis()->SetLabelFont(42);
   Graph_Graph833->GetXaxis()->SetTitleOffset(1);
   Graph_Graph833->GetXaxis()->SetTitleFont(42);
   Graph_Graph833->GetYaxis()->SetLabelFont(42);
   Graph_Graph833->GetYaxis()->SetTitleFont(42);
   Graph_Graph833->GetZaxis()->SetLabelFont(42);
   Graph_Graph833->GetZaxis()->SetTitleOffset(1);
   Graph_Graph833->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph833);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.008312664, 0.9721206);
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
