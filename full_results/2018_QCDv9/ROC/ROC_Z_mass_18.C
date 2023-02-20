#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_18()
{
//=========Macro generated from canvas: ROC_Z_mass_18/ROC_Z_mass_18
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_18 = new TCanvas("ROC_Z_mass_18", "ROC_Z_mass_18",0,0,600,600);
   ROC_Z_mass_18->SetHighLightColor(2);
   ROC_Z_mass_18->Range(-0.1761422,0.02560491,0.9835354,1.089081);
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
   
   Double_t Graph_fx764[8] = {
   0.0442397,
   0.1410948,
   0.2400048,
   0.3415041,
   0.4426565,
   0.5239307,
   0.5793899,
   0.6249131};
   Double_t Graph_fy764[8] = {
   0.1920768,
   0.4704356,
   0.600635,
   0.6652221,
   0.7095808,
   0.7415711,
   0.7642126,
   0.7877803};
   TGraph *graph = new TGraph(8,Graph_fx764,Graph_fy764);
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
   
   TH1F *Graph_Graph764 = new TH1F("Graph_Graph764","Tagging Only",100,0,0.6829804);
   Graph_Graph764->SetMinimum(0.1325064);
   Graph_Graph764->SetMaximum(0.8473507);
   Graph_Graph764->SetDirectory(0);
   Graph_Graph764->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph764->SetLineColor(ci);
   Graph_Graph764->GetXaxis()->SetLabelFont(42);
   Graph_Graph764->GetXaxis()->SetTitleOffset(1);
   Graph_Graph764->GetXaxis()->SetTitleFont(42);
   Graph_Graph764->GetYaxis()->SetLabelFont(42);
   Graph_Graph764->GetYaxis()->SetTitleFont(42);
   Graph_Graph764->GetZaxis()->SetLabelFont(42);
   Graph_Graph764->GetZaxis()->SetTitleOffset(1);
   Graph_Graph764->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph764);
   
   TLatex *   tex = new TLatex(0.2074601,0.7871184,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(765);
      tex = new TLatex(0.3489207,0.8731429,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(766);
      tex = new TLatex(0.4763314,0.9297098,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(767);
      tex = new TLatex(0.6131355,0.9568428,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(768);
      tex = new TLatex(0.7054526,0.9701023,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(769);
      tex = new TLatex(0.7572023,0.9767966,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(770);
      tex = new TLatex(0.8024172,0.9850283,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(771);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx772[8] = {
   0.05031679,
   0.2074601,
   0.3489207,
   0.4763314,
   0.6131355,
   0.7054526,
   0.7572023,
   0.8024172};
   Double_t Graph_fy772[8] = {
   0.2974692,
   0.6871184,
   0.8331429,
   0.8897098,
   0.9168428,
   0.9301023,
   0.9367966,
   0.9450283};
   graph = new TGraph(8,Graph_fx772,Graph_fy772);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph772 = new TH1F("Graph_Graph772","Mass-Matching Prioritized",100,0,0.8776273);
   Graph_Graph772->SetMinimum(0.2327133);
   Graph_Graph772->SetMaximum(1.009784);
   Graph_Graph772->SetDirectory(0);
   Graph_Graph772->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph772->SetLineColor(ci);
   Graph_Graph772->GetXaxis()->SetLabelFont(42);
   Graph_Graph772->GetXaxis()->SetTitleOffset(1);
   Graph_Graph772->GetXaxis()->SetTitleFont(42);
   Graph_Graph772->GetYaxis()->SetLabelFont(42);
   Graph_Graph772->GetYaxis()->SetTitleFont(42);
   Graph_Graph772->GetZaxis()->SetLabelFont(42);
   Graph_Graph772->GetZaxis()->SetTitleOffset(1);
   Graph_Graph772->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph772);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx773[8] = {
   0.04395465,
   0.1407429,
   0.2399336,
   0.341591,
   0.4421099,
   0.5229525,
   0.5781235,
   0.6237372};
   Double_t Graph_fy773[8] = {
   0.1909271,
   0.4694389,
   0.5990027,
   0.6638285,
   0.7075218,
   0.7386908,
   0.7613661,
   0.7842575};
   graph = new TGraph(8,Graph_fx773,Graph_fy773);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph773 = new TH1F("Graph_Graph773","Tagging Prioritized",100,0,0.6817155);
   Graph_Graph773->SetMinimum(0.1315941);
   Graph_Graph773->SetMaximum(0.8435905);
   Graph_Graph773->SetDirectory(0);
   Graph_Graph773->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph773->SetLineColor(ci);
   Graph_Graph773->GetXaxis()->SetLabelFont(42);
   Graph_Graph773->GetXaxis()->SetTitleOffset(1);
   Graph_Graph773->GetXaxis()->SetTitleFont(42);
   Graph_Graph773->GetYaxis()->SetLabelFont(42);
   Graph_Graph773->GetYaxis()->SetTitleFont(42);
   Graph_Graph773->GetZaxis()->SetLabelFont(42);
   Graph_Graph773->GetZaxis()->SetTitleOffset(1);
   Graph_Graph773->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph773);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.006031526, 0.8403403);
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
