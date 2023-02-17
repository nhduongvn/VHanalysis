#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Thu Feb 16 10:46:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(-0.1706874,-0.04143546,0.968212,1.116089);
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
   
   Double_t Graph_fx839[12] = {
   0.05122146,
   0.1428255,
   0.2266778,
   0.3137743,
   0.3883823,
   0.4714177,
   0.5433897,
   0.6095651,
   0.6708068,
   0.7148874,
   0.7428327,
   0.7692638};
   Double_t Graph_fy839[12] = {
   0.138507,
   0.375606,
   0.5097117,
   0.5906119,
   0.6587179,
   0.703146,
   0.7365072,
   0.7679259,
   0.7939189,
   0.8159822,
   0.8377715,
   0.8556614};
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
   
   TH1F *Graph_Graph839 = new TH1F("Graph_Graph839","Tagging Only",100,0,0.841068);
   Graph_Graph839->SetMinimum(0.06679151);
   Graph_Graph839->SetMaximum(0.9273768);
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
   
   TLatex *   tex = new TLatex(0.2235159,0.8387249,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(840);
      tex = new TLatex(0.3303734,0.8981859,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(841);
      tex = new TLatex(0.414228,0.9048284,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(842);
      tex = new TLatex(0.5003187,0.9306065,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(843);
      tex = new TLatex(0.5683426,0.9601925,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(844);
      tex = new TLatex(0.6438164,0.9661746,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(845);
      tex = new TLatex(0.7077069,0.9754857,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(846);
      tex = new TLatex(0.746384,0.9832988,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(847);
      tex = new TLatex(0.7665101,0.9882479,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(848);
      tex = new TLatex(0.7903389,0.9992969,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(849);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx850[12] = {
   0.04546594,
   0.1407046,
   0.2235159,
   0.3303734,
   0.414228,
   0.5003187,
   0.5683426,
   0.6438164,
   0.7077069,
   0.746384,
   0.7665101,
   0.7903389};
   Double_t Graph_fy850[12] = {
   0.2233449,
   0.5582864,
   0.7387249,
   0.7981859,
   0.8648284,
   0.8906065,
   0.9201925,
   0.9261746,
   0.9354857,
   0.9432988,
   0.9482479,
   0.9592969};
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
   
   TH1F *Graph_Graph850 = new TH1F("Graph_Graph850","Mass-Matching Prioritized",100,0,0.8648263);
   Graph_Graph850->SetMinimum(0.1497497);
   Graph_Graph850->SetMaximum(1.032892);
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
   0.0510342,
   0.1420973,
   0.2257006,
   0.3125619,
   0.3871818,
   0.4701112,
   0.5419783,
   0.6082121,
   0.6695726,
   0.7136936,
   0.7420428,
   0.7685212};
   Double_t Graph_fy851[12] = {
   0.1406434,
   0.377154,
   0.5112762,
   0.5919521,
   0.6590803,
   0.7035698,
   0.7368855,
   0.7678748,
   0.7937511,
   0.8171583,
   0.8389753,
   0.8566861};
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
   
   TH1F *Graph_Graph851 = new TH1F("Graph_Graph851","Tagging Prioritized",100,0,0.8402699);
   Graph_Graph851->SetMinimum(0.0690391);
   Graph_Graph851->SetMaximum(0.9282904);
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
   multigraph->GetXaxis()->SetLimits(0.008222286, 0.8275826);
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
