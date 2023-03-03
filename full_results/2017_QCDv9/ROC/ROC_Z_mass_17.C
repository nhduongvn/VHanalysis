#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_17()
{
//=========Macro generated from canvas: ROC_Z_mass_17/ROC_Z_mass_17
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_17 = new TCanvas("ROC_Z_mass_17", "ROC_Z_mass_17",0,0,600,600);
   ROC_Z_mass_17->SetHighLightColor(2);
   ROC_Z_mass_17->Range(-0.1789076,0.01631615,0.9858649,1.09784);
   ROC_Z_mass_17->SetFillColor(0);
   ROC_Z_mass_17->SetBorderMode(0);
   ROC_Z_mass_17->SetBorderSize(2);
   ROC_Z_mass_17->SetGridx();
   ROC_Z_mass_17->SetGridy();
   ROC_Z_mass_17->SetLeftMargin(0.15709);
   ROC_Z_mass_17->SetRightMargin(0.1234783);
   ROC_Z_mass_17->SetBottomMargin(0.12);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx876[8] = {
   0.04215624,
   0.1397953,
   0.2431483,
   0.3466944,
   0.4431318,
   0.5227366,
   0.5687697,
   0.6104922};
   Double_t Graph_fy876[8] = {
   0.1845506,
   0.4764551,
   0.6091536,
   0.667071,
   0.7089579,
   0.7447396,
   0.7717308,
   0.7959511};
   TGraph *graph = new TGraph(8,Graph_fx876,Graph_fy876);
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
   
   TH1F *Graph_Graph876 = new TH1F("Graph_Graph876","Tagging Only",100,0,0.6673258);
   Graph_Graph876->SetMinimum(0.1234106);
   Graph_Graph876->SetMaximum(0.8570911);
   Graph_Graph876->SetDirectory(0);
   Graph_Graph876->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph876->SetLineColor(ci);
   Graph_Graph876->GetXaxis()->SetLabelFont(42);
   Graph_Graph876->GetXaxis()->SetTitleOffset(1);
   Graph_Graph876->GetXaxis()->SetTitleFont(42);
   Graph_Graph876->GetYaxis()->SetLabelFont(42);
   Graph_Graph876->GetYaxis()->SetTitleFont(42);
   Graph_Graph876->GetZaxis()->SetLabelFont(42);
   Graph_Graph876->GetZaxis()->SetTitleOffset(1);
   Graph_Graph876->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph876);
   
   TLatex *   tex = new TLatex(0.2195401,0.7692785,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(877);
      tex = new TLatex(0.3727016,0.8793236,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(878);
      tex = new TLatex(0.506405,0.9217673,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(879);
      tex = new TLatex(0.6047951,0.953794,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(880);
      tex = new TLatex(0.7119852,0.9701697,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(881);
      tex = new TLatex(0.7720209,0.9820444,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(882);
      tex = new TLatex(0.803951,0.9913429,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(883);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx884[8] = {
   0.06225515,
   0.2195401,
   0.3727016,
   0.506405,
   0.6047951,
   0.7119852,
   0.7720209,
   0.803951};
   Double_t Graph_fy884[8] = {
   0.2635622,
   0.6692785,
   0.8393236,
   0.8817673,
   0.913794,
   0.9301697,
   0.9420444,
   0.9513429};
   graph = new TGraph(8,Graph_fx884,Graph_fy884);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph884 = new TH1F("Graph_Graph884","Mass-Matching Prioritized",100,0,0.8781206);
   Graph_Graph884->SetMinimum(0.1947841);
   Graph_Graph884->SetMaximum(1.020121);
   Graph_Graph884->SetDirectory(0);
   Graph_Graph884->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph884->SetLineColor(ci);
   Graph_Graph884->GetXaxis()->SetLabelFont(42);
   Graph_Graph884->GetXaxis()->SetTitleOffset(1);
   Graph_Graph884->GetXaxis()->SetTitleFont(42);
   Graph_Graph884->GetYaxis()->SetLabelFont(42);
   Graph_Graph884->GetYaxis()->SetTitleFont(42);
   Graph_Graph884->GetZaxis()->SetLabelFont(42);
   Graph_Graph884->GetZaxis()->SetTitleOffset(1);
   Graph_Graph884->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph884);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx885[8] = {
   0.0421931,
   0.1398152,
   0.2427841,
   0.3459154,
   0.4428027,
   0.522405,
   0.5680622,
   0.6095171};
   Double_t Graph_fy885[8] = {
   0.184444,
   0.4766012,
   0.6087044,
   0.6669286,
   0.7103466,
   0.7465205,
   0.7734558,
   0.7969467};
   graph = new TGraph(8,Graph_fx885,Graph_fy885);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph885 = new TH1F("Graph_Graph885","Tagging Prioritized",100,0,0.6662495);
   Graph_Graph885->SetMinimum(0.1231937);
   Graph_Graph885->SetMaximum(0.858197);
   Graph_Graph885->SetDirectory(0);
   Graph_Graph885->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph885->SetLineColor(ci);
   Graph_Graph885->GetXaxis()->SetLabelFont(42);
   Graph_Graph885->GetXaxis()->SetTitleOffset(1);
   Graph_Graph885->GetXaxis()->SetTitleFont(42);
   Graph_Graph885->GetYaxis()->SetLabelFont(42);
   Graph_Graph885->GetYaxis()->SetTitleFont(42);
   Graph_Graph885->GetZaxis()->SetLabelFont(42);
   Graph_Graph885->GetZaxis()->SetTitleOffset(1);
   Graph_Graph885->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph885);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.004066506, 0.8420407);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_17->Modified();
   ROC_Z_mass_17->cd();
   ROC_Z_mass_17->SetSelected(ROC_Z_mass_17);
}
