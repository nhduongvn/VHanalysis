#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(-0.2054642,-0.06595743,1.129013,1.120147);
   ROC_H_mass_16->SetFillColor(0);
   ROC_H_mass_16->SetBorderMode(0);
   ROC_H_mass_16->SetBorderSize(2);
   ROC_H_mass_16->SetGridx();
   ROC_H_mass_16->SetGridy();
   ROC_H_mass_16->SetLeftMargin(0.15709);
   ROC_H_mass_16->SetRightMargin(0.1234783);
   ROC_H_mass_16->SetBottomMargin(0.12);
   ROC_H_mass_16->SetFrameBorderMode(0);
   ROC_H_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx195[12] = {
   0.04780816,
   0.1515307,
   0.2450572,
   0.3451757,
   0.4466682,
   0.5474083,
   0.6195655,
   0.6884911,
   0.7524525,
   0.8188051,
   0.8583768,
   0.8747475};
   Double_t Graph_fy195[12] = {
   0.1261174,
   0.3311457,
   0.4735597,
   0.5830993,
   0.6603857,
   0.7241026,
   0.7730441,
   0.8113154,
   0.8455107,
   0.8720308,
   0.8894799,
   0.9003699};
   TGraph *graph = new TGraph(12,Graph_fx195,Graph_fy195);
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
   
   TH1F *Graph_Graph195 = new TH1F("Graph_Graph195","Tagging Only",100,0,0.9574414);
   Graph_Graph195->SetMinimum(0.04869212);
   Graph_Graph195->SetMaximum(0.9777951);
   Graph_Graph195->SetDirectory(0);
   Graph_Graph195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph195->SetLineColor(ci);
   Graph_Graph195->GetXaxis()->SetLabelFont(42);
   Graph_Graph195->GetXaxis()->SetTitleOffset(1);
   Graph_Graph195->GetXaxis()->SetTitleFont(42);
   Graph_Graph195->GetYaxis()->SetLabelFont(42);
   Graph_Graph195->GetYaxis()->SetTitleFont(42);
   Graph_Graph195->GetZaxis()->SetLabelFont(42);
   Graph_Graph195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph195->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph195);
   
   TLatex *   tex = new TLatex(0.1610048,0.6085087,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(196);
      tex = new TLatex(0.2571671,0.7747606,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(197);
      tex = new TLatex(0.378295,0.8773404,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(198);
      tex = new TLatex(0.469451,0.8674718,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(199);
      tex = new TLatex(0.5535589,0.9099096,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(200);
      tex = new TLatex(0.6290437,0.9420683,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(201);
      tex = new TLatex(0.7351598,0.9630017,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(202);
      tex = new TLatex(0.8098216,0.9783005,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(203);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx204[12] = {
   0.05095055,
   0.1610048,
   0.2571671,
   0.378295,
   0.469451,
   0.5535589,
   0.6290437,
   0.7351598,
   0.8098216,
   0.8823236,
   0.9103737,
   0.9205949};
   Double_t Graph_fy204[12] = {
   0.1832109,
   0.5085087,
   0.6747606,
   0.7773404,
   0.8274718,
   0.8699096,
   0.9020683,
   0.9230017,
   0.9383005,
   0.9476003,
   0.9534277,
   0.9594835};
   graph = new TGraph(12,Graph_fx204,Graph_fy204);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph204 = new TH1F("Graph_Graph204","Mass-Matching Prioritized",100,0,1.007559);
   Graph_Graph204->SetMinimum(0.1055837);
   Graph_Graph204->SetMaximum(1.037111);
   Graph_Graph204->SetDirectory(0);
   Graph_Graph204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph204->SetLineColor(ci);
   Graph_Graph204->GetXaxis()->SetLabelFont(42);
   Graph_Graph204->GetXaxis()->SetTitleOffset(1);
   Graph_Graph204->GetXaxis()->SetTitleFont(42);
   Graph_Graph204->GetYaxis()->SetLabelFont(42);
   Graph_Graph204->GetYaxis()->SetTitleFont(42);
   Graph_Graph204->GetZaxis()->SetLabelFont(42);
   Graph_Graph204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph204);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx205[12] = {
   0.04823535,
   0.1523107,
   0.246528,
   0.3463818,
   0.4485535,
   0.549649,
   0.6213737,
   0.6906908,
   0.754054,
   0.8197086,
   0.8588672,
   0.8752141};
   Double_t Graph_fy205[12] = {
   0.1184279,
   0.3120443,
   0.451392,
   0.5584776,
   0.6410428,
   0.7058259,
   0.7564042,
   0.7990314,
   0.8319255,
   0.8581921,
   0.8774463,
   0.8909041};
   graph = new TGraph(12,Graph_fx205,Graph_fy205);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph205 = new TH1F("Graph_Graph205","Tagging Prioritized",100,0,0.9579119);
   Graph_Graph205->SetMinimum(0.04118023);
   Graph_Graph205->SetMaximum(0.9681517);
   Graph_Graph205->SetDirectory(0);
   Graph_Graph205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph205->SetLineColor(ci);
   Graph_Graph205->GetXaxis()->SetLabelFont(42);
   Graph_Graph205->GetXaxis()->SetTitleOffset(1);
   Graph_Graph205->GetXaxis()->SetTitleFont(42);
   Graph_Graph205->GetYaxis()->SetLabelFont(42);
   Graph_Graph205->GetYaxis()->SetTitleFont(42);
   Graph_Graph205->GetZaxis()->SetLabelFont(42);
   Graph_Graph205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph205);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.004168826, 0.9642343);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_16->Modified();
   ROC_H_mass_16->cd();
   ROC_H_mass_16->SetSelected(ROC_H_mass_16);
}
