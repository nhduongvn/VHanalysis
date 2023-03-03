#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_18()
{
//=========Macro generated from canvas: ROC_H_pt_18/ROC_H_pt_18
//=========  (Wed Mar  1 15:31:59 2023) by ROOT version 6.26/06
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
   3.097731e-07,
   8.833014e-07,
   1.277724e-06,
   1.956261e-06,
   2.766078e-06,
   3.816595e-06,
   4.927177e-06,
   6.478451e-06,
   8.144827e-06,
   1.069381e-05,
   1.413422e-05,
   1.915938e-05,
   2.544832e-05,
   3.328314e-05,
   4.423198e-05,
   5.792285e-05,
   7.599822e-05,
   0.000101399,
   0.0001363914,
   0.0001834359,
   0.0002487865,
   0.0003412466,
   0.000467357,
   0.0006384355,
   0.0008932498,
   0.001252132,
   0.001821551,
   0.00268222,
   0.003975582,
   0.006049164,
   0.00941548,
   0.01480951,
   0.02424416,
   0.04151377,
   0.07453406,
   0.1452387,
   0.2858198,
   0.568257,
   0.8261864,
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
   
   TLatex *   tex = new TLatex(0.2088047,0.5123293,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(215);
      tex = new TLatex(0.4064793,0.7559918,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(216);
      tex = new TLatex(0.6959708,0.9260992,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(217);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx218[41] = {
   0,
   3.380733e-07,
   9.994993e-07,
   1.349239e-06,
   1.714827e-06,
   2.874187e-06,
   4.093411e-06,
   5.119581e-06,
   7.911555e-06,
   9.682009e-06,
   1.283024e-05,
   1.807709e-05,
   2.41951e-05,
   3.070991e-05,
   4.265787e-05,
   5.592607e-05,
   7.194607e-05,
   9.083724e-05,
   0.0001202885,
   0.0001632552,
   0.0002199471,
   0.00030543,
   0.000415256,
   0.0005575002,
   0.0007601215,
   0.001074874,
   0.001492556,
   0.002164926,
   0.003129539,
   0.004656859,
   0.00724211,
   0.01157372,
   0.0185846,
   0.03069834,
   0.05486221,
   0.09955682,
   0.2088047,
   0.4064793,
   0.6959708,
   0.9202691,
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
   3.044053e-07,
   8.922439e-07,
   1.332271e-06,
   2.061267e-06,
   2.874392e-06,
   4.01616e-06,
   5.222818e-06,
   6.852402e-06,
   8.594679e-06,
   1.120013e-05,
   1.474377e-05,
   1.985213e-05,
   2.63503e-05,
   3.441436e-05,
   4.574292e-05,
   6.002485e-05,
   7.865765e-05,
   0.0001051239,
   0.0001414043,
   0.000190009,
   0.0002572458,
   0.0003526195,
   0.0004820853,
   0.0006585724,
   0.0009217191,
   0.001289133,
   0.001871256,
   0.002752102,
   0.00406748,
   0.006172684,
   0.00958495,
   0.01505172,
   0.02459477,
   0.04203347,
   0.07526134,
   0.1460576,
   0.2870603,
   0.5691622,
   0.8269228,
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
