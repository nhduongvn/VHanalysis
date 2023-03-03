#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_18()
{
//=========Macro generated from canvas: ROC_Z_mass_18/ROC_Z_mass_18
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_18 = new TCanvas("ROC_Z_mass_18", "ROC_Z_mass_18",0,0,600,600);
   ROC_Z_mass_18->SetHighLightColor(2);
   ROC_Z_mass_18->Range(-0.1760004,0.02560491,0.9824121,1.089081);
   ROC_Z_mass_18->SetFillColor(0);
   ROC_Z_mass_18->SetBorderMode(0);
   ROC_Z_mass_18->SetBorderSize(2);
   ROC_Z_mass_18->SetGridx();
   ROC_Z_mass_18->SetGridy();
   ROC_Z_mass_18->SetLeftMargin(0.15709);
   ROC_Z_mass_18->SetRightMargin(0.1234783);
   ROC_Z_mass_18->SetBottomMargin(0.12);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx886[8] = {
   0.04415664,
   0.1414251,
   0.2407144,
   0.342278,
   0.4409113,
   0.5222938,
   0.5774328,
   0.6243051};
   Double_t Graph_fy886[8] = {
   0.1920768,
   0.4704356,
   0.600635,
   0.6652221,
   0.7095808,
   0.7415711,
   0.7642126,
   0.7877803};
   TGraph *graph = new TGraph(8,Graph_fx886,Graph_fy886);
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
   
   TH1F *Graph_Graph886 = new TH1F("Graph_Graph886","Tagging Only",100,0,0.6823199);
   Graph_Graph886->SetMinimum(0.1325064);
   Graph_Graph886->SetMaximum(0.8473507);
   Graph_Graph886->SetDirectory(0);
   Graph_Graph886->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph886->SetLineColor(ci);
   Graph_Graph886->GetXaxis()->SetLabelFont(42);
   Graph_Graph886->GetXaxis()->SetTitleOffset(1);
   Graph_Graph886->GetXaxis()->SetTitleFont(42);
   Graph_Graph886->GetYaxis()->SetLabelFont(42);
   Graph_Graph886->GetYaxis()->SetTitleFont(42);
   Graph_Graph886->GetZaxis()->SetLabelFont(42);
   Graph_Graph886->GetZaxis()->SetTitleOffset(1);
   Graph_Graph886->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph886);
   
   TLatex *   tex = new TLatex(0.2065648,0.7871184,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(887);
      tex = new TLatex(0.3474615,0.8731429,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(888);
      tex = new TLatex(0.4735179,0.9297098,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(889);
      tex = new TLatex(0.610663,0.9568428,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(890);
      tex = new TLatex(0.7047065,0.9701023,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(891);
      tex = new TLatex(0.7565969,0.9767966,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(892);
      tex = new TLatex(0.8014915,0.9850283,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(893);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx894[8] = {
   0.04917891,
   0.2065648,
   0.3474615,
   0.4735179,
   0.610663,
   0.7047065,
   0.7565969,
   0.8014915};
   Double_t Graph_fy894[8] = {
   0.2974692,
   0.6871184,
   0.8331429,
   0.8897098,
   0.9168428,
   0.9301023,
   0.9367966,
   0.9450283};
   graph = new TGraph(8,Graph_fx894,Graph_fy894);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph894 = new TH1F("Graph_Graph894","Mass-Matching Prioritized",100,0,0.8767227);
   Graph_Graph894->SetMinimum(0.2327133);
   Graph_Graph894->SetMaximum(1.009784);
   Graph_Graph894->SetDirectory(0);
   Graph_Graph894->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph894->SetLineColor(ci);
   Graph_Graph894->GetXaxis()->SetLabelFont(42);
   Graph_Graph894->GetXaxis()->SetTitleOffset(1);
   Graph_Graph894->GetXaxis()->SetTitleFont(42);
   Graph_Graph894->GetYaxis()->SetLabelFont(42);
   Graph_Graph894->GetYaxis()->SetTitleFont(42);
   Graph_Graph894->GetZaxis()->SetLabelFont(42);
   Graph_Graph894->GetZaxis()->SetTitleOffset(1);
   Graph_Graph894->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph894);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx895[8] = {
   0.04385635,
   0.1411066,
   0.2405632,
   0.3422174,
   0.4402711,
   0.5213047,
   0.5761254,
   0.623027};
   Double_t Graph_fy895[8] = {
   0.1909271,
   0.4694389,
   0.5990027,
   0.6638285,
   0.7075218,
   0.7386908,
   0.7613661,
   0.7842575};
   graph = new TGraph(8,Graph_fx895,Graph_fy895);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph895 = new TH1F("Graph_Graph895","Tagging Prioritized",100,0,0.6809441);
   Graph_Graph895->SetMinimum(0.1315941);
   Graph_Graph895->SetMaximum(0.8435905);
   Graph_Graph895->SetDirectory(0);
   Graph_Graph895->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph895->SetLineColor(ci);
   Graph_Graph895->GetXaxis()->SetLabelFont(42);
   Graph_Graph895->GetXaxis()->SetTitleOffset(1);
   Graph_Graph895->GetXaxis()->SetTitleFont(42);
   Graph_Graph895->GetYaxis()->SetLabelFont(42);
   Graph_Graph895->GetYaxis()->SetTitleFont(42);
   Graph_Graph895->GetZaxis()->SetLabelFont(42);
   Graph_Graph895->GetZaxis()->SetTitleOffset(1);
   Graph_Graph895->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph895);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.005974593, 0.8393732);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_18->Modified();
   ROC_Z_mass_18->cd();
   ROC_Z_mass_18->SetSelected(ROC_Z_mass_18);
}
