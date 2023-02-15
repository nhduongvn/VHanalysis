#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_16()
{
//=========Macro generated from canvas: ROC_Aplanarity_16/ROC_Aplanarity_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_16 = new TCanvas("ROC_Aplanarity_16", "ROC_Aplanarity_16",0,0,600,600);
   ROC_Aplanarity_16->SetHighLightColor(2);
   ROC_Aplanarity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_16->SetFillColor(0);
   ROC_Aplanarity_16->SetBorderMode(0);
   ROC_Aplanarity_16->SetBorderSize(2);
   ROC_Aplanarity_16->SetGridx();
   ROC_Aplanarity_16->SetGridy();
   ROC_Aplanarity_16->SetLeftMargin(0.15709);
   ROC_Aplanarity_16->SetRightMargin(0.1234783);
   ROC_Aplanarity_16->SetBottomMargin(0.12);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   ROC_Aplanarity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx223[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   4.304171e-09,
   5.527761e-08,
   4.567433e-07,
   1.854654e-06,
   6.929741e-06,
   2.659585e-05,
   0.000105067,
   0.0002161658,
   0.0004108081,
   0.0007256967,
   0.001222687,
   0.002799577,
   0.005518809,
   0.008031459,
   0.01041977,
   0.01484184,
   0.02212391,
   0.0362151,
   0.05513981,
   0.07808773,
   0.1178204,
   0.1793641,
   0.292647,
   0.5282832,
   1};
   Double_t Graph_fy223[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002038396,
   0.0004332031,
   0.0005137849,
   0.0005437127,
   0.001408433,
   0.003075014,
   0.004528992,
   0.008282337,
   0.01471662,
   0.02095171,
   0.02962826,
   0.04069545,
   0.05799306,
   0.08549534,
   0.1187761,
   0.1635437,
   0.2310357,
   0.3270948,
   0.4785563,
   0.6954496,
   1};
   TGraph *graph = new TGraph(51,Graph_fx223,Graph_fy223);
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
   
   TH1F *Graph_Graph223 = new TH1F("Graph_Graph223","Tagging Only",100,0,1.1);
   Graph_Graph223->SetMinimum(0);
   Graph_Graph223->SetMaximum(1.1);
   Graph_Graph223->SetDirectory(0);
   Graph_Graph223->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph223->SetLineColor(ci);
   Graph_Graph223->GetXaxis()->SetLabelFont(42);
   Graph_Graph223->GetXaxis()->SetTitleOffset(1);
   Graph_Graph223->GetXaxis()->SetTitleFont(42);
   Graph_Graph223->GetYaxis()->SetLabelFont(42);
   Graph_Graph223->GetYaxis()->SetTitleFont(42);
   Graph_Graph223->GetZaxis()->SetLabelFont(42);
   Graph_Graph223->GetZaxis()->SetTitleOffset(1);
   Graph_Graph223->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph223);
   
   TLatex *   tex = new TLatex(0.2510132,0.632774,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(224);
      tex = new TLatex(0.471188,0.823347,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(225);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx226[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.793836e-08,
   2.387428e-07,
   8.366882e-07,
   2.207328e-06,
   8.589995e-05,
   9.312146e-05,
   0.0001066459,
   0.0001366626,
   0.0001885489,
   0.000806027,
   0.001162644,
   0.002008746,
   0.003849741,
   0.004787039,
   0.008047791,
   0.01755781,
   0.03520168,
   0.04692151,
   0.0667541,
   0.09842575,
   0.1464974,
   0.2510132,
   0.471188,
   1};
   Double_t Graph_fy226[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0009997273,
   0.0009997273,
   0.0009997273,
   0.0009997273,
   0.002681693,
   0.003680571,
   0.003680571,
   0.009976712,
   0.01714555,
   0.02503358,
   0.03803613,
   0.05276819,
   0.07154997,
   0.1076083,
   0.1487444,
   0.1903834,
   0.2676729,
   0.3718886,
   0.532774,
   0.723347,
   1};
   graph = new TGraph(51,Graph_fx226,Graph_fy226);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph226 = new TH1F("Graph_Graph226","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph226->SetMinimum(0);
   Graph_Graph226->SetMaximum(1.1);
   Graph_Graph226->SetDirectory(0);
   Graph_Graph226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph226->SetLineColor(ci);
   Graph_Graph226->GetXaxis()->SetLabelFont(42);
   Graph_Graph226->GetXaxis()->SetTitleOffset(1);
   Graph_Graph226->GetXaxis()->SetTitleFont(42);
   Graph_Graph226->GetYaxis()->SetLabelFont(42);
   Graph_Graph226->GetYaxis()->SetTitleFont(42);
   Graph_Graph226->GetZaxis()->SetLabelFont(42);
   Graph_Graph226->GetZaxis()->SetTitleOffset(1);
   Graph_Graph226->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph226);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx227[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   4.213504e-09,
   5.663831e-08,
   4.649601e-07,
   1.862376e-06,
   7.22911e-06,
   2.668539e-05,
   0.0001042412,
   0.0002138244,
   0.0004071576,
   0.0007277345,
   0.001219405,
   0.002780852,
   0.005474785,
   0.007962716,
   0.01039588,
   0.01541334,
   0.02266671,
   0.03656941,
   0.05553318,
   0.07848558,
   0.1180683,
   0.1796191,
   0.2924748,
   0.5277225,
   1};
   Double_t Graph_fy227[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.00019873,
   0.000422344,
   0.000500906,
   0.0005300835,
   0.001373128,
   0.002997934,
   0.004470548,
   0.008330311,
   0.01463003,
   0.02078898,
   0.02948225,
   0.04082137,
   0.05778942,
   0.08575609,
   0.1185528,
   0.16334,
   0.2297788,
   0.3253863,
   0.4769211,
   0.6935634,
   1};
   graph = new TGraph(51,Graph_fx227,Graph_fy227);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph227 = new TH1F("Graph_Graph227","Tagging Prioritized",100,0,1.1);
   Graph_Graph227->SetMinimum(0);
   Graph_Graph227->SetMaximum(1.1);
   Graph_Graph227->SetDirectory(0);
   Graph_Graph227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph227->SetLineColor(ci);
   Graph_Graph227->GetXaxis()->SetLabelFont(42);
   Graph_Graph227->GetXaxis()->SetTitleOffset(1);
   Graph_Graph227->GetXaxis()->SetTitleFont(42);
   Graph_Graph227->GetYaxis()->SetLabelFont(42);
   Graph_Graph227->GetYaxis()->SetTitleFont(42);
   Graph_Graph227->GetZaxis()->SetLabelFont(42);
   Graph_Graph227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph227->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph227);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.55,0.15,0.85,0.3,NULL,"brNDC");
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
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Aplanarity_16->Modified();
   ROC_Aplanarity_16->cd();
   ROC_Aplanarity_16->SetSelected(ROC_Aplanarity_16);
}
