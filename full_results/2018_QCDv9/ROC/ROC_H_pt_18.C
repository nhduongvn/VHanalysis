#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_18()
{
//=========Macro generated from canvas: ROC_H_pt_18/ROC_H_pt_18
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_18 = new TCanvas("ROC_H_pt_18", "ROC_H_pt_18",0,0,600,600);
   ROC_H_pt_18->SetHighLightColor(2);
   ROC_H_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_18->SetFillColor(0);
   ROC_H_pt_18->SetBorderMode(0);
   ROC_H_pt_18->SetBorderSize(2);
   ROC_H_pt_18->SetGridx();
   ROC_H_pt_18->SetGridy();
   ROC_H_pt_18->SetLeftMargin(0.15709);
   ROC_H_pt_18->SetRightMargin(0.1234783);
   ROC_H_pt_18->SetBottomMargin(0.12);
   ROC_H_pt_18->SetFrameBorderMode(0);
   ROC_H_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx214[41] = {
   0,
   3.095126e-07,
   8.825481e-07,
   1.276471e-06,
   1.945688e-06,
   2.753178e-06,
   3.811861e-06,
   4.944147e-06,
   6.509084e-06,
   8.169976e-06,
   1.07052e-05,
   1.415682e-05,
   1.915431e-05,
   2.545073e-05,
   3.329044e-05,
   4.424971e-05,
   5.795083e-05,
   7.599321e-05,
   0.0001013895,
   0.000136329,
   0.0001832716,
   0.0002486887,
   0.0003405784,
   0.0004667719,
   0.0006383102,
   0.0008939082,
   0.001256514,
   0.001828662,
   0.002695609,
   0.00399088,
   0.006057004,
   0.009440093,
   0.01482833,
   0.02425876,
   0.04153719,
   0.0745091,
   0.1454519,
   0.28528,
   0.567154,
   0.8224451,
   1};
   Double_t Graph_fy214[41] = {
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
   3.838769e-05,
   3.838769e-05,
   3.838769e-05,
   0.0003650528,
   0.001146038,
   0.001256165,
   0.001428518,
   0.001823741,
   0.00420522,
   0.006840411,
   0.01197641,
   0.02213065,
   0.04801593,
   0.08572457,
   0.1586328,
   0.2804715,
   0.4624984,
   0.7047653,
   0.9033475,
   1};
   TGraph *graph = new TGraph(41,Graph_fx214,Graph_fy214);
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
   
   TH1F *Graph_Graph214 = new TH1F("Graph_Graph214","Tagging Only",100,0,1.1);
   Graph_Graph214->SetMinimum(0);
   Graph_Graph214->SetMaximum(1.1);
   Graph_Graph214->SetDirectory(0);
   Graph_Graph214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph214->SetLineColor(ci);
   Graph_Graph214->GetXaxis()->SetLabelFont(42);
   Graph_Graph214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph214->GetXaxis()->SetTitleFont(42);
   Graph_Graph214->GetYaxis()->SetLabelFont(42);
   Graph_Graph214->GetYaxis()->SetTitleFont(42);
   Graph_Graph214->GetZaxis()->SetLabelFont(42);
   Graph_Graph214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph214->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph214);
   
   TLatex *   tex = new TLatex(0.2104743,0.5123293,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(215);
      tex = new TLatex(0.4069419,0.7559918,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(216);
      tex = new TLatex(0.6945136,0.9260992,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(217);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx218[41] = {
   0,
   3.398572e-07,
   1.004774e-06,
   1.354985e-06,
   1.722288e-06,
   2.886308e-06,
   4.108761e-06,
   5.138948e-06,
   7.943559e-06,
   9.722117e-06,
   1.2881e-05,
   1.815116e-05,
   2.422994e-05,
   3.082126e-05,
   4.281051e-05,
   5.612376e-05,
   7.22367e-05,
   9.125956e-05,
   0.0001206738,
   0.0001641343,
   0.000220772,
   0.0003070214,
   0.0004172504,
   0.0005607319,
   0.0007645838,
   0.001086372,
   0.001505125,
   0.002173453,
   0.003156573,
   0.004684625,
   0.007260611,
   0.01166057,
   0.01870977,
   0.03081751,
   0.0549149,
   0.09989469,
   0.2104743,
   0.4069419,
   0.6945136,
   0.9175934,
   1};
   Double_t Graph_fy218[41] = {
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
   0.000948585,
   0.000948585,
   0.005033615,
   0.005033615,
   0.005033615,
   0.005834037,
   0.008305462,
   0.01276527,
   0.01649958,
   0.03050235,
   0.07768365,
   0.1293998,
   0.2431874,
   0.4123293,
   0.6559918,
   0.8860992,
   0.9886664,
   1};
   graph = new TGraph(41,Graph_fx218,Graph_fy218);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph218 = new TH1F("Graph_Graph218","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph218->SetMinimum(0);
   Graph_Graph218->SetMaximum(1.1);
   Graph_Graph218->SetDirectory(0);
   Graph_Graph218->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph218->SetLineColor(ci);
   Graph_Graph218->GetXaxis()->SetLabelFont(42);
   Graph_Graph218->GetXaxis()->SetTitleOffset(1);
   Graph_Graph218->GetXaxis()->SetTitleFont(42);
   Graph_Graph218->GetYaxis()->SetLabelFont(42);
   Graph_Graph218->GetYaxis()->SetTitleFont(42);
   Graph_Graph218->GetZaxis()->SetLabelFont(42);
   Graph_Graph218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph218->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph218);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx219[41] = {
   0,
   3.04207e-07,
   8.91667e-07,
   1.331214e-06,
   2.051084e-06,
   2.855383e-06,
   4.00529e-06,
   5.233395e-06,
   6.876603e-06,
   8.613642e-06,
   1.119946e-05,
   1.475474e-05,
   1.983652e-05,
   2.634936e-05,
   3.441831e-05,
   4.57475e-05,
   6.002791e-05,
   7.862932e-05,
   0.0001050917,
   0.000141323,
   0.0001898217,
   0.0002571366,
   0.0003519984,
   0.0004815541,
   0.0006581476,
   0.0009222846,
   0.001293131,
   0.001878628,
   0.002766804,
   0.004084263,
   0.006184578,
   0.009614176,
   0.01507274,
   0.02461808,
   0.0420623,
   0.07524585,
   0.1462626,
   0.286567,
   0.5682268,
   0.8233249,
   1};
   Double_t Graph_fy219[41] = {
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
   3.761873e-05,
   3.761873e-05,
   3.761873e-05,
   0.0003577403,
   0.001123082,
   0.001231003,
   0.001399903,
   0.001787208,
   0.004186655,
   0.006959914,
   0.01205187,
   0.02197465,
   0.04745779,
   0.08567704,
   0.1592259,
   0.2819567,
   0.4651591,
   0.7093219,
   0.9061094,
   1};
   graph = new TGraph(41,Graph_fx219,Graph_fy219);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph219 = new TH1F("Graph_Graph219","Tagging Prioritized",100,0,1.1);
   Graph_Graph219->SetMinimum(0);
   Graph_Graph219->SetMaximum(1.1);
   Graph_Graph219->SetDirectory(0);
   Graph_Graph219->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph219->SetLineColor(ci);
   Graph_Graph219->GetXaxis()->SetLabelFont(42);
   Graph_Graph219->GetXaxis()->SetTitleOffset(1);
   Graph_Graph219->GetXaxis()->SetTitleFont(42);
   Graph_Graph219->GetYaxis()->SetLabelFont(42);
   Graph_Graph219->GetYaxis()->SetTitleFont(42);
   Graph_Graph219->GetZaxis()->SetLabelFont(42);
   Graph_Graph219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph219->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph219);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_pt_18->Modified();
   ROC_H_pt_18->cd();
   ROC_H_pt_18->SetSelected(ROC_H_pt_18);
}
