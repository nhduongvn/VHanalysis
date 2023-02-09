#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_16()
{
//=========Macro generated from canvas: ROC_Z_mass_16/ROC_Z_mass_16
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_16 = new TCanvas("ROC_Z_mass_16", "ROC_Z_mass_16",0,0,600,600);
   ROC_Z_mass_16->SetHighLightColor(2);
   ROC_Z_mass_16->Range(-0.1745982,0.003582571,1.108883,1.094203);
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
   
   Double_t Graph_fx227[8] = {
   0.06899555,
   0.2015224,
   0.3312187,
   0.4523643,
   0.5668309,
   0.6794406,
   0.747417,
   0.7809479};
   Double_t Graph_fy227[8] = {
   0.1794075,
   0.4620454,
   0.6072482,
   0.6839336,
   0.7400064,
   0.7888367,
   0.8215114,
   0.8408282};
   TGraph *graph = new TGraph(8,Graph_fx227,Graph_fy227);
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
   
   TH1F *Graph_Graph227 = new TH1F("Graph_Graph227","Tagging Only",100,0,0.8521431);
   Graph_Graph227->SetMinimum(0.1132654);
   Graph_Graph227->SetMaximum(0.9069703);
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
   
   TLatex *   tex = new TLatex(0.2306833,0.7134615,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(228);
      tex = new TLatex(0.3946005,0.893702,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(229);
      tex = new TLatex(0.5490047,0.9014363,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(230);
      tex = new TLatex(0.6876675,0.9383298,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(231);
      tex = new TLatex(0.8191596,0.9655888,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(232);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx233[8] = {
   0.06916826,
   0.2306833,
   0.3946005,
   0.5490047,
   0.6876675,
   0.8191596,
   0.8834596,
   0.9084293};
   Double_t Graph_fy233[8] = {
   0.2409282,
   0.6134615,
   0.793702,
   0.8614363,
   0.8983298,
   0.9255888,
   0.9381037,
   0.9464737};
   graph = new TGraph(8,Graph_fx233,Graph_fy233);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph233 = new TH1F("Graph_Graph233","Mass-Matching Prioritized",100,0,0.9923554);
   Graph_Graph233->SetMinimum(0.1703736);
   Graph_Graph233->SetMaximum(1.017028);
   Graph_Graph233->SetDirectory(0);
   Graph_Graph233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph233->SetLineColor(ci);
   Graph_Graph233->GetXaxis()->SetLabelFont(42);
   Graph_Graph233->GetXaxis()->SetTitleOffset(1);
   Graph_Graph233->GetXaxis()->SetTitleFont(42);
   Graph_Graph233->GetYaxis()->SetLabelFont(42);
   Graph_Graph233->GetYaxis()->SetTitleFont(42);
   Graph_Graph233->GetZaxis()->SetLabelFont(42);
   Graph_Graph233->GetZaxis()->SetTitleOffset(1);
   Graph_Graph233->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph233);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx234[8] = {
   0.06929789,
   0.2021927,
   0.3312765,
   0.4522846,
   0.5661368,
   0.6781468,
   0.745961,
   0.7793316};
   Double_t Graph_fy234[8] = {
   0.1731245,
   0.4451342,
   0.5882293,
   0.6690644,
   0.7278374,
   0.7768965,
   0.8091676,
   0.8302026};
   graph = new TGraph(8,Graph_fx234,Graph_fy234);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph234 = new TH1F("Graph_Graph234","Tagging Prioritized",100,0,0.850335);
   Graph_Graph234->SetMinimum(0.1074167);
   Graph_Graph234->SetMaximum(0.8959104);
   Graph_Graph234->SetDirectory(0);
   Graph_Graph234->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph234->SetLineColor(ci);
   Graph_Graph234->GetXaxis()->SetLabelFont(42);
   Graph_Graph234->GetXaxis()->SetTitleOffset(1);
   Graph_Graph234->GetXaxis()->SetTitleFont(42);
   Graph_Graph234->GetYaxis()->SetLabelFont(42);
   Graph_Graph234->GetYaxis()->SetTitleFont(42);
   Graph_Graph234->GetZaxis()->SetLabelFont(42);
   Graph_Graph234->GetZaxis()->SetTitleOffset(1);
   Graph_Graph234->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph234);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02702387, 0.950401);
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
