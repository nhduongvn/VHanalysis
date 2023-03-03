#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_16()
{
//=========Macro generated from canvas: ROC_H_mass_16/ROC_H_mass_16
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_16 = new TCanvas("ROC_H_mass_16", "ROC_H_mass_16",0,0,600,600);
   ROC_H_mass_16->SetHighLightColor(2);
   ROC_H_mass_16->Range(-0.1726487,-0.04143546,0.9688384,1.116089);
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
   
   Double_t Graph_fx826[12] = {
   0.05086494,
   0.1409855,
   0.2245964,
   0.3103679,
   0.3851278,
   0.4694956,
   0.5410422,
   0.606886,
   0.669615,
   0.7135834,
   0.7431991,
   0.7690475};
   Double_t Graph_fy826[12] = {
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
   TGraph *graph = new TGraph(12,Graph_fx826,Graph_fy826);
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
   
   TH1F *Graph_Graph826 = new TH1F("Graph_Graph826","Tagging Only",100,0,0.8408658);
   Graph_Graph826->SetMinimum(0.06679151);
   Graph_Graph826->SetMaximum(0.9273768);
   Graph_Graph826->SetDirectory(0);
   Graph_Graph826->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph826->SetLineColor(ci);
   Graph_Graph826->GetXaxis()->SetLabelFont(42);
   Graph_Graph826->GetXaxis()->SetTitleOffset(1);
   Graph_Graph826->GetXaxis()->SetTitleFont(42);
   Graph_Graph826->GetYaxis()->SetLabelFont(42);
   Graph_Graph826->GetYaxis()->SetTitleFont(42);
   Graph_Graph826->GetZaxis()->SetLabelFont(42);
   Graph_Graph826->GetZaxis()->SetTitleOffset(1);
   Graph_Graph826->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph826);
   
   TLatex *   tex = new TLatex(0.2178887,0.8387249,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(827);
      tex = new TLatex(0.3250719,0.8981859,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(828);
      tex = new TLatex(0.404045,0.9048284,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(829);
      tex = new TLatex(0.4984366,0.9306065,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(830);
      tex = new TLatex(0.5662259,0.9601925,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(831);
      tex = new TLatex(0.6418662,0.9661746,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(832);
      tex = new TLatex(0.7105978,0.9754857,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(833);
      tex = new TLatex(0.7464169,0.9832988,"#pm90.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(834);
      tex = new TLatex(0.7670335,0.9882479,"#pm100.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(835);
      tex = new TLatex(0.7905612,0.9992969,"#pm110.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(836);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx837[12] = {
   0.04399574,
   0.1347964,
   0.2178887,
   0.3250719,
   0.404045,
   0.4984366,
   0.5662259,
   0.6418662,
   0.7105978,
   0.7464169,
   0.7670335,
   0.7905612};
   Double_t Graph_fy837[12] = {
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
   graph = new TGraph(12,Graph_fx837,Graph_fy837);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph837 = new TH1F("Graph_Graph837","Mass-Matching Prioritized",100,0,0.8652178);
   Graph_Graph837->SetMinimum(0.1497497);
   Graph_Graph837->SetMaximum(1.032892);
   Graph_Graph837->SetDirectory(0);
   Graph_Graph837->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph837->SetLineColor(ci);
   Graph_Graph837->GetXaxis()->SetLabelFont(42);
   Graph_Graph837->GetXaxis()->SetTitleOffset(1);
   Graph_Graph837->GetXaxis()->SetTitleFont(42);
   Graph_Graph837->GetYaxis()->SetLabelFont(42);
   Graph_Graph837->GetYaxis()->SetTitleFont(42);
   Graph_Graph837->GetZaxis()->SetLabelFont(42);
   Graph_Graph837->GetZaxis()->SetTitleOffset(1);
   Graph_Graph837->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph837);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx838[12] = {
   0.05064143,
   0.1403203,
   0.2239777,
   0.3095348,
   0.3842712,
   0.4684619,
   0.5401336,
   0.60592,
   0.66868,
   0.712714,
   0.7426051,
   0.7685021};
   Double_t Graph_fy838[12] = {
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
   graph = new TGraph(12,Graph_fx838,Graph_fy838);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph838 = new TH1F("Graph_Graph838","Tagging Prioritized",100,0,0.8402882);
   Graph_Graph838->SetMinimum(0.0690391);
   Graph_Graph838->SetMaximum(0.9282904);
   Graph_Graph838->SetDirectory(0);
   Graph_Graph838->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph838->SetLineColor(ci);
   Graph_Graph838->GetXaxis()->SetLabelFont(42);
   Graph_Graph838->GetXaxis()->SetTitleOffset(1);
   Graph_Graph838->GetXaxis()->SetTitleFont(42);
   Graph_Graph838->GetYaxis()->SetLabelFont(42);
   Graph_Graph838->GetYaxis()->SetTitleFont(42);
   Graph_Graph838->GetZaxis()->SetLabelFont(42);
   Graph_Graph838->GetZaxis()->SetTitleOffset(1);
   Graph_Graph838->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph838);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.006667468, 0.8278895);
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
