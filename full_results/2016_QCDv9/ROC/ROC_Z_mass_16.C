#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_16()
{
//=========Macro generated from canvas: ROC_Z_mass_16/ROC_Z_mass_16
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_16 = new TCanvas("ROC_Z_mass_16", "ROC_Z_mass_16",0,0,600,600);
   ROC_Z_mass_16->SetHighLightColor(2);
   ROC_Z_mass_16->Range(-0.180199,0.02247842,1.101999,1.121615);
   ROC_Z_mass_16->SetFillColor(0);
   ROC_Z_mass_16->SetBorderMode(0);
   ROC_Z_mass_16->SetBorderSize(2);
   ROC_Z_mass_16->SetGridx();
   ROC_Z_mass_16->SetGridy();
   ROC_Z_mass_16->SetLeftMargin(0.15709);
   ROC_Z_mass_16->SetRightMargin(0.1234783);
   ROC_Z_mass_16->SetBottomMargin(0.12);
   ROC_Z_mass_16->SetFrameBorderMode(0);
   ROC_Z_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx845[8] = {
   0.06337186,
   0.1864434,
   0.3092658,
   0.4349136,
   0.5540651,
   0.6751004,
   0.7372993,
   0.7698724};
   Double_t Graph_fy845[8] = {
   0.1941764,
   0.4914449,
   0.6311058,
   0.710805,
   0.7716704,
   0.8153062,
   0.8416513,
   0.8602087};
   TGraph *graph = new TGraph(8,Graph_fx845,Graph_fy845);
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
   
   TH1F *Graph_Graph845 = new TH1F("Graph_Graph845","Tagging Only",100,0,0.8405225);
   Graph_Graph845->SetMinimum(0.1275732);
   Graph_Graph845->SetMaximum(0.9268119);
   Graph_Graph845->SetDirectory(0);
   Graph_Graph845->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph845->SetLineColor(ci);
   Graph_Graph845->GetXaxis()->SetLabelFont(42);
   Graph_Graph845->GetXaxis()->SetTitleOffset(1);
   Graph_Graph845->GetXaxis()->SetTitleFont(42);
   Graph_Graph845->GetYaxis()->SetLabelFont(42);
   Graph_Graph845->GetYaxis()->SetTitleFont(42);
   Graph_Graph845->GetZaxis()->SetLabelFont(42);
   Graph_Graph845->GetZaxis()->SetTitleOffset(1);
   Graph_Graph845->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph845);
   
   TLatex *   tex = new TLatex(0.2342673,0.7857025,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(846);
      tex = new TLatex(0.3627442,0.8815876,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(847);
      tex = new TLatex(0.5109228,0.9481799,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(848);
      tex = new TLatex(0.6940712,0.9831437,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(849);
      tex = new TLatex(0.8380512,0.9972298,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(850);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx851[8] = {
   0.07539435,
   0.2342673,
   0.3627442,
   0.5109228,
   0.6940712,
   0.8380512,
   0.8820736,
   0.9017458};
   Double_t Graph_fy851[8] = {
   0.2882617,
   0.6857025,
   0.8415876,
   0.9081799,
   0.9431437,
   0.9572298,
   0.9677089,
   0.9727322};
   graph = new TGraph(8,Graph_fx851,Graph_fy851);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph851 = new TH1F("Graph_Graph851","Mass-Matching Prioritized",100,0,0.984381);
   Graph_Graph851->SetMinimum(0.2198146);
   Graph_Graph851->SetMaximum(1.041179);
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
   
   Double_t Graph_fx852[8] = {
   0.0631512,
   0.1855294,
   0.3082971,
   0.4337164,
   0.5522558,
   0.6731859,
   0.7351793,
   0.7676846};
   Double_t Graph_fy852[8] = {
   0.1933442,
   0.4902945,
   0.6304576,
   0.7097762,
   0.7711257,
   0.815909,
   0.8428599,
   0.861069};
   graph = new TGraph(8,Graph_fx852,Graph_fy852);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph852 = new TH1F("Graph_Graph852","Tagging Prioritized",100,0,0.838138);
   Graph_Graph852->SetMinimum(0.1265718);
   Graph_Graph852->SetMaximum(0.9278414);
   Graph_Graph852->SetDirectory(0);
   Graph_Graph852->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph852->SetLineColor(ci);
   Graph_Graph852->GetXaxis()->SetLabelFont(42);
   Graph_Graph852->GetXaxis()->SetTitleOffset(1);
   Graph_Graph852->GetXaxis()->SetTitleFont(42);
   Graph_Graph852->GetYaxis()->SetLabelFont(42);
   Graph_Graph852->GetYaxis()->SetTitleFont(42);
   Graph_Graph852->GetZaxis()->SetLabelFont(42);
   Graph_Graph852->GetZaxis()->SetTitleOffset(1);
   Graph_Graph852->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph852);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02122147, 0.9436756);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_16->Modified();
   ROC_Z_mass_16->cd();
   ROC_Z_mass_16->SetSelected(ROC_Z_mass_16);
}
