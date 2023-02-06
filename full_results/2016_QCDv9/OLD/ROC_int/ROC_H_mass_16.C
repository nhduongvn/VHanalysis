#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Wed Jan 25 10:51:22 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx1[12] = {
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
   Double_t Graph_fy1[12] = {
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
   TGraph *graph = new TGraph(12,Graph_fx1,Graph_fy1);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Tagging Only",100,0,0.9574414);
   Graph_Graph1->SetMinimum(0.04869212);
   Graph_Graph1->SetMaximum(0.9777951);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   TLatex *   tex = new TLatex(0.05095055,0.2232109,"#pm0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2);
      tex = new TLatex(0.1610048,0.5485087,"#pm1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3);
      tex = new TLatex(0.2571671,0.7147606,"#pm2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(4);
      tex = new TLatex(0.378295,0.8173404,"#pm3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(5);
      tex = new TLatex(0.469451,0.8674718,"#pm4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(6);
      tex = new TLatex(0.5535589,0.9099096,"#pm5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(7);
      tex = new TLatex(0.6290437,0.9420683,"#pm6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(8);
      tex = new TLatex(0.7351598,0.9630017,"#pm7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(9);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx10[12] = {
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
   Double_t Graph_fy10[12] = {
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
   graph = new TGraph(12,Graph_fx10,Graph_fy10);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Mass-Matching Prioritized",100,0,1.007559);
   Graph_Graph10->SetMinimum(0.1055837);
   Graph_Graph10->SetMaximum(1.037111);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetTitleOffset(1);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetTitleOffset(1);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx11[12] = {
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
   Double_t Graph_fy11[12] = {
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
   graph = new TGraph(12,Graph_fx11,Graph_fy11);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Tagging Prioritized",100,0,0.9579119);
   Graph_Graph11->SetMinimum(0.04118023);
   Graph_Graph11->SetMaximum(0.9681517);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
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
   entry=leg->AddEntry("NULL","bin size = 10.0 GeV","lpf");
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
