#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.2019526,-0.05736364,1.14414,1.132952);
   ROC_H_mass_18->SetFillColor(0);
   ROC_H_mass_18->SetBorderMode(0);
   ROC_H_mass_18->SetBorderSize(2);
   ROC_H_mass_18->SetGridx();
   ROC_H_mass_18->SetGridy();
   ROC_H_mass_18->SetLeftMargin(0.15709);
   ROC_H_mass_18->SetRightMargin(0.1234783);
   ROC_H_mass_18->SetBottomMargin(0.12);
   ROC_H_mass_18->SetFrameBorderMode(0);
   ROC_H_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx216[11] = {
   0.05352429,
   0.1623696,
   0.2765859,
   0.3877991,
   0.4990907,
   0.5923911,
   0.6626751,
   0.7356106,
   0.8008235,
   0.8410391,
   0.8609133};
   Double_t Graph_fy216[11] = {
   0.13434,
   0.3612551,
   0.5352174,
   0.6409256,
   0.7113807,
   0.7650321,
   0.8095579,
   0.8436092,
   0.8701979,
   0.8862413,
   0.9010877};
   TGraph *graph = new TGraph(11,Graph_fx216,Graph_fy216);
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
   
   TH1F *Graph_Graph216 = new TH1F("Graph_Graph216","Tagging Only",100,0,0.9416522);
   Graph_Graph216->SetMinimum(0.05766518);
   Graph_Graph216->SetMaximum(0.9777624);
   Graph_Graph216->SetDirectory(0);
   Graph_Graph216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph216->SetLineColor(ci);
   Graph_Graph216->GetXaxis()->SetLabelFont(42);
   Graph_Graph216->GetXaxis()->SetTitleOffset(1);
   Graph_Graph216->GetXaxis()->SetTitleFont(42);
   Graph_Graph216->GetYaxis()->SetLabelFont(42);
   Graph_Graph216->GetYaxis()->SetTitleFont(42);
   Graph_Graph216->GetZaxis()->SetLabelFont(42);
   Graph_Graph216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph216->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph216);
   
   TLatex *   tex = new TLatex(0.1702822,0.6299273,"#pm10.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(217);
      tex = new TLatex(0.2846208,0.8143762,"#pm20.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(218);
      tex = new TLatex(0.3956337,0.8521188,"#pm30.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(219);
      tex = new TLatex(0.4992665,0.9138874,"#pm40.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(220);
      tex = new TLatex(0.5949013,0.9558785,"#pm50.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(221);
      tex = new TLatex(0.6756805,0.9774396,"#pm60.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(222);
      tex = new TLatex(0.7567532,0.9916902,"#pm70.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(223);
      tex = new TLatex(0.8369008,0.9967799,"#pm80.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(224);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx225[12] = {
   0.05968676,
   0.1702822,
   0.2846208,
   0.3956337,
   0.4992665,
   0.5949013,
   0.6756805,
   0.7567532,
   0.8369008,
   0.8954886,
   0.9198227,
   0.9339078};
   Double_t Graph_fy225[12] = {
   0.2099924,
   0.5299273,
   0.7143762,
   0.8121188,
   0.8738874,
   0.9158785,
   0.9374396,
   0.9516902,
   0.9567799,
   0.96471,
   0.9687693,
   0.9717182};
   graph = new TGraph(12,Graph_fx225,Graph_fy225);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph225 = new TH1F("Graph_Graph225","Mass-Matching Prioritized",100,0,1.02133);
   Graph_Graph225->SetMinimum(0.1338199);
   Graph_Graph225->SetMaximum(1.047891);
   Graph_Graph225->SetDirectory(0);
   Graph_Graph225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph225->SetLineColor(ci);
   Graph_Graph225->GetXaxis()->SetLabelFont(42);
   Graph_Graph225->GetXaxis()->SetTitleOffset(1);
   Graph_Graph225->GetXaxis()->SetTitleFont(42);
   Graph_Graph225->GetYaxis()->SetLabelFont(42);
   Graph_Graph225->GetYaxis()->SetTitleFont(42);
   Graph_Graph225->GetZaxis()->SetLabelFont(42);
   Graph_Graph225->GetZaxis()->SetTitleOffset(1);
   Graph_Graph225->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph225);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx226[11] = {
   0.05449046,
   0.1622658,
   0.2762332,
   0.3878022,
   0.4984775,
   0.5921932,
   0.6627126,
   0.7353315,
   0.800556,
   0.8409914,
   0.8607147};
   Double_t Graph_fy226[11] = {
   0.1276763,
   0.3436593,
   0.514414,
   0.6215353,
   0.6937368,
   0.7482748,
   0.793423,
   0.8287559,
   0.8565879,
   0.8734938,
   0.890621};
   graph = new TGraph(11,Graph_fx226,Graph_fy226);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph226 = new TH1F("Graph_Graph226","Tagging Prioritized",100,0,0.9413371);
   Graph_Graph226->SetMinimum(0.05138186);
   Graph_Graph226->SetMaximum(0.9669154);
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
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.009505118, 0.977927);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_mass_18->Modified();
   ROC_H_mass_18->cd();
   ROC_H_mass_18->SetSelected(ROC_H_mass_18);
}
