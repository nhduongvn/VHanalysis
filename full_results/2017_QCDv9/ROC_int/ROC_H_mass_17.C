#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_17()
{
//=========Macro generated from canvas: ROC_H_mass_17/ROC_H_mass_17
//=========  (Wed Jan 25 10:51:22 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_17 = new TCanvas("ROC_H_mass_17", "ROC_H_mass_17",0,0,600,600);
   ROC_H_mass_17->SetHighLightColor(2);
   ROC_H_mass_17->Range(-0.2077321,-0.06065833,1.152532,1.129845);
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
   
   Double_t Graph_fx12[12] = {
   0.05043432,
   0.1490784,
   0.248369,
   0.3463056,
   0.4538145,
   0.5590191,
   0.6470884,
   0.7198664,
   0.7872976,
   0.8470927,
   0.8790797,
   0.8933086};
   Double_t Graph_fy12[12] = {
   0.133402,
   0.3586918,
   0.5143795,
   0.6214119,
   0.7060128,
   0.7664805,
   0.8080444,
   0.8422319,
   0.8719193,
   0.8960963,
   0.9120908,
   0.9225733};
   TGraph *graph = new TGraph(12,Graph_fx12,Graph_fy12);
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
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Tagging Only",100,0,0.9775961);
   Graph_Graph12->SetMinimum(0.05448482);
   Graph_Graph12->SetMaximum(1.00149);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetTitleOffset(1);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetTitleOffset(1);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   TLatex *   tex = new TLatex(0.07053513,0.2377731,"#pm0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(13);
      tex = new TLatex(0.193601,0.5597692,"#pm1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(14);
      tex = new TLatex(0.3037148,0.7348858,"#pm2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(15);
      tex = new TLatex(0.4163034,0.835902,"#pm3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(16);
      tex = new TLatex(0.5152151,0.901312,"#pm4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(17);
      tex = new TLatex(0.6053802,0.944699,"#pm5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(18);
      tex = new TLatex(0.699142,0.9654049,"#pm6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(19);
      tex = new TLatex(0.782721,0.9784207,"#pm7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(20);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx21[12] = {
   0.07053513,
   0.193601,
   0.3037148,
   0.4163034,
   0.5152151,
   0.6053802,
   0.699142,
   0.782721,
   0.8616556,
   0.9139292,
   0.9308762,
   0.940086};
   Double_t Graph_fy21[12] = {
   0.1977731,
   0.5197692,
   0.6948858,
   0.795902,
   0.861312,
   0.904699,
   0.9254049,
   0.9384207,
   0.9532576,
   0.9613244,
   0.9648367,
   0.9685859};
   graph = new TGraph(12,Graph_fx21,Graph_fy21);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","Mass-Matching Prioritized",100,0,1.027041);
   Graph_Graph21->SetMinimum(0.1206918);
   Graph_Graph21->SetMaximum(1.045667);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx22[12] = {
   0.05140895,
   0.1500652,
   0.2503404,
   0.3486098,
   0.4554091,
   0.5598162,
   0.6474873,
   0.7202615,
   0.7876791,
   0.8469333,
   0.8788612,
   0.8930638};
   Double_t Graph_fy22[12] = {
   0.1244108,
   0.3394816,
   0.4901229,
   0.5984753,
   0.683772,
   0.7463428,
   0.7904798,
   0.8262132,
   0.8585888,
   0.8847207,
   0.9008802,
   0.9126311};
   graph = new TGraph(12,Graph_fx22,Graph_fy22);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","Tagging Prioritized",100,0,0.9772293);
   Graph_Graph22->SetMinimum(0.04558878);
   Graph_Graph22->SetMaximum(0.9914532);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetTitleOffset(1);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetTitleOffset(1);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.005951739, 0.9845686);
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
   entry=leg->AddEntry("NULL","bin size = 10.0 GeV","lpf");
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
