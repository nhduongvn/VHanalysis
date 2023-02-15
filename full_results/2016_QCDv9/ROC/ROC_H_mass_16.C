#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Tue Feb 14 15:34:13 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(-0.1974622,-0.05732728,1.103824,1.13578);
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
   
   Double_t Graph_fx812[11] = {
   0.04952974,
   0.160559,
   0.2699077,
   0.3710835,
   0.4701123,
   0.5546938,
   0.6307652,
   0.7027527,
   0.765718,
   0.8082864,
   0.8286314};
   Double_t Graph_fy812[11] = {
   0.1281467,
   0.3546659,
   0.5160251,
   0.6211988,
   0.6961702,
   0.7445194,
   0.787122,
   0.8250227,
   0.8551179,
   0.8727858,
   0.8872227};
   TGraph *graph = new TGraph(11,Graph_fx812,Graph_fy812);
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
   
   TH1F *Graph_Graph812 = new TH1F("Graph_Graph812","Tagging Only",100,0,0.9065416);
   Graph_Graph812->SetMinimum(0.05223914);
   Graph_Graph812->SetMaximum(0.9631302);
   Graph_Graph812->SetDirectory(0);
   Graph_Graph812->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph812->SetLineColor(ci);
   Graph_Graph812->GetXaxis()->SetLabelFont(42);
   Graph_Graph812->GetXaxis()->SetTitleOffset(1);
   Graph_Graph812->GetXaxis()->SetTitleFont(42);
   Graph_Graph812->GetYaxis()->SetLabelFont(42);
   Graph_Graph812->GetYaxis()->SetTitleFont(42);
   Graph_Graph812->GetZaxis()->SetLabelFont(42);
   Graph_Graph812->GetZaxis()->SetTitleOffset(1);
   Graph_Graph812->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph812);
   
   TLatex *   tex = new TLatex(0.1926804,0.6204976,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(813);
      tex = new TLatex(0.3067732,0.8094383,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(814);
      tex = new TLatex(0.4282606,0.8457906,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(815);
      tex = new TLatex(0.5308826,0.9020626,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(816);
      tex = new TLatex(0.6064766,0.9398841,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(817);
      tex = new TLatex(0.6723604,0.9712318,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(818);
      tex = new TLatex(0.7575487,0.9853125,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(819);
      tex = new TLatex(0.8228672,0.9965348,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(820);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx821[12] = {
   0.06327738,
   0.1926804,
   0.3067732,
   0.4282606,
   0.5308826,
   0.6064766,
   0.6723604,
   0.7575487,
   0.8228672,
   0.8685934,
   0.8868357,
   0.9005893};
   Double_t Graph_fy821[12] = {
   0.2117551,
   0.5204976,
   0.7094383,
   0.8057906,
   0.8620626,
   0.8998841,
   0.9312318,
   0.9453125,
   0.9565348,
   0.9617068,
   0.9672459,
   0.9741685};
   graph = new TGraph(12,Graph_fx821,Graph_fy821);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph821 = new TH1F("Graph_Graph821","Mass-Matching Prioritized",100,0,0.9843205);
   Graph_Graph821->SetMinimum(0.1355138);
   Graph_Graph821->SetMaximum(1.05041);
   Graph_Graph821->SetDirectory(0);
   Graph_Graph821->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph821->SetLineColor(ci);
   Graph_Graph821->GetXaxis()->SetLabelFont(42);
   Graph_Graph821->GetXaxis()->SetTitleOffset(1);
   Graph_Graph821->GetXaxis()->SetTitleFont(42);
   Graph_Graph821->GetYaxis()->SetLabelFont(42);
   Graph_Graph821->GetYaxis()->SetTitleFont(42);
   Graph_Graph821->GetZaxis()->SetLabelFont(42);
   Graph_Graph821->GetZaxis()->SetTitleOffset(1);
   Graph_Graph821->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph821);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx822[11] = {
   0.04951078,
   0.1599713,
   0.2693472,
   0.3708949,
   0.4693598,
   0.5535305,
   0.6297233,
   0.7019637,
   0.7645821,
   0.806854,
   0.827138};
   Double_t Graph_fy822[11] = {
   0.1283883,
   0.354226,
   0.5156114,
   0.6206852,
   0.6954932,
   0.7438338,
   0.7867866,
   0.8255334,
   0.8555734,
   0.8732721,
   0.8881225};
   graph = new TGraph(11,Graph_fx822,Graph_fy822);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph822 = new TH1F("Graph_Graph822","Tagging Prioritized",100,0,0.9049007);
   Graph_Graph822->SetMinimum(0.05241484);
   Graph_Graph822->SetMaximum(0.9640959);
   Graph_Graph822->SetDirectory(0);
   Graph_Graph822->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph822->SetLineColor(ci);
   Graph_Graph822->GetXaxis()->SetLabelFont(42);
   Graph_Graph822->GetXaxis()->SetTitleOffset(1);
   Graph_Graph822->GetXaxis()->SetTitleFont(42);
   Graph_Graph822->GetYaxis()->SetLabelFont(42);
   Graph_Graph822->GetYaxis()->SetTitleFont(42);
   Graph_Graph822->GetZaxis()->SetLabelFont(42);
   Graph_Graph822->GetZaxis()->SetTitleOffset(1);
   Graph_Graph822->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph822);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.00695685, 0.9431433);
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
   entry=leg->AddEntry("NULL","Intervals centered around 115.0 GeV","lpf");
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
