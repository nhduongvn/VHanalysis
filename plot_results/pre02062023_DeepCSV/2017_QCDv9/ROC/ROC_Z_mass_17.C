#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_17()
{
//=========Macro generated from canvas: ROC_Z_mass_17/ROC_Z_mass_17
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_17 = new TCanvas("ROC_Z_mass_17", "ROC_Z_mass_17",0,0,600,600);
   ROC_Z_mass_17->SetHighLightColor(2);
   ROC_Z_mass_17->Range(-0.1717281,0.02320027,1.140996,1.108786);
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
   
   Double_t Graph_fx235[8] = {
   0.07789116,
   0.2188977,
   0.348104,
   0.468446,
   0.5865448,
   0.6961594,
   0.7595646,
   0.7903057};
   Double_t Graph_fy235[8] = {
   0.1999069,
   0.5008087,
   0.6508623,
   0.7324577,
   0.7884538,
   0.828762,
   0.8520927,
   0.8737198};
   TGraph *graph = new TGraph(8,Graph_fx235,Graph_fy235);
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
   
   TH1F *Graph_Graph235 = new TH1F("Graph_Graph235","Tagging Only",100,0.006649708,0.8615471);
   Graph_Graph235->SetMinimum(0.1325256);
   Graph_Graph235->SetMaximum(0.9411011);
   Graph_Graph235->SetDirectory(0);
   Graph_Graph235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph235->SetLineColor(ci);
   Graph_Graph235->GetXaxis()->SetLabelFont(42);
   Graph_Graph235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph235->GetXaxis()->SetTitleFont(42);
   Graph_Graph235->GetYaxis()->SetLabelFont(42);
   Graph_Graph235->GetYaxis()->SetTitleFont(42);
   Graph_Graph235->GetZaxis()->SetLabelFont(42);
   Graph_Graph235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph235->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph235);
   
   TLatex *   tex = new TLatex(0.2803246,0.7319807,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(236);
      tex = new TLatex(0.4360675,0.848547,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(237);
      tex = new TLatex(0.5604029,0.9212316,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(238);
      tex = new TLatex(0.7010871,0.9658493,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(239);
      tex = new TLatex(0.8494617,0.9848442,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(240);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx241[8] = {
   0.09847694,
   0.2803246,
   0.4360675,
   0.5604029,
   0.7010871,
   0.8494617,
   0.9186126,
   0.9359753};
   Double_t Graph_fy241[8] = {
   0.2547494,
   0.6319807,
   0.808547,
   0.8812316,
   0.9258493,
   0.9448442,
   0.9534344,
   0.9617382};
   graph = new TGraph(8,Graph_fx241,Graph_fy241);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph241 = new TH1F("Graph_Graph241","Mass-Matching Prioritized",100,0.0147271,1.019725);
   Graph_Graph241->SetMinimum(0.1840505);
   Graph_Graph241->SetMaximum(1.032437);
   Graph_Graph241->SetDirectory(0);
   Graph_Graph241->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph241->SetLineColor(ci);
   Graph_Graph241->GetXaxis()->SetLabelFont(42);
   Graph_Graph241->GetXaxis()->SetTitleOffset(1);
   Graph_Graph241->GetXaxis()->SetTitleFont(42);
   Graph_Graph241->GetYaxis()->SetLabelFont(42);
   Graph_Graph241->GetYaxis()->SetTitleFont(42);
   Graph_Graph241->GetZaxis()->SetLabelFont(42);
   Graph_Graph241->GetZaxis()->SetTitleOffset(1);
   Graph_Graph241->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph241);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx242[8] = {
   0.07741574,
   0.2183102,
   0.3478801,
   0.4679287,
   0.5867133,
   0.695582,
   0.7590271,
   0.7897232};
   Double_t Graph_fy242[8] = {
   0.1919595,
   0.4842629,
   0.6315872,
   0.7180364,
   0.7751342,
   0.8168237,
   0.8417696,
   0.8646489};
   graph = new TGraph(8,Graph_fx242,Graph_fy242);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph242 = new TH1F("Graph_Graph242","Tagging Prioritized",100,0.006184996,0.8609539);
   Graph_Graph242->SetMinimum(0.1246905);
   Graph_Graph242->SetMaximum(0.9319178);
   Graph_Graph242->SetDirectory(0);
   Graph_Graph242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph242->SetLineColor(ci);
   Graph_Graph242->GetXaxis()->SetLabelFont(42);
   Graph_Graph242->GetXaxis()->SetTitleOffset(1);
   Graph_Graph242->GetXaxis()->SetTitleFont(42);
   Graph_Graph242->GetYaxis()->SetLabelFont(42);
   Graph_Graph242->GetYaxis()->SetTitleFont(42);
   Graph_Graph242->GetZaxis()->SetLabelFont(42);
   Graph_Graph242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph242->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph242);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.03448776, 0.9789033);
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
