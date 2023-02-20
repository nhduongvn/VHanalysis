#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_16()
{
//=========Macro generated from canvas: ROC_H_pt_16/ROC_H_pt_16
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_16 = new TCanvas("ROC_H_pt_16", "ROC_H_pt_16",0,0,600,600);
   ROC_H_pt_16->SetHighLightColor(2);
   ROC_H_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_16->SetFillColor(0);
   ROC_H_pt_16->SetBorderMode(0);
   ROC_H_pt_16->SetBorderSize(2);
   ROC_H_pt_16->SetGridx();
   ROC_H_pt_16->SetGridy();
   ROC_H_pt_16->SetLeftMargin(0.15709);
   ROC_H_pt_16->SetRightMargin(0.1234783);
   ROC_H_pt_16->SetBottomMargin(0.12);
   ROC_H_pt_16->SetFrameBorderMode(0);
   ROC_H_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx202[41] = {
   0,
   4.275024e-07,
   1.240088e-06,
   1.829115e-06,
   2.768997e-06,
   3.77733e-06,
   5.170658e-06,
   6.707843e-06,
   8.771451e-06,
   1.089887e-05,
   1.43165e-05,
   1.917636e-05,
   2.559518e-05,
   3.41643e-05,
   4.45609e-05,
   5.924598e-05,
   7.73524e-05,
   0.0001015724,
   0.0001352426,
   0.0001817214,
   0.0002447549,
   0.0003321246,
   0.0004530512,
   0.0006183022,
   0.0008411447,
   0.001205227,
   0.00171274,
   0.002389308,
   0.003379295,
   0.004817334,
   0.007097065,
   0.01083871,
   0.01694242,
   0.02765507,
   0.0471789,
   0.08347989,
   0.1548122,
   0.3098495,
   0.5940348,
   0.8465309,
   1};
   Double_t Graph_fy202[41] = {
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
   0.0005380409,
   0.0005380409,
   0.0005380409,
   0.0005380409,
   0.001171792,
   0.001171792,
   0.001171792,
   0.001171792,
   0.001171792,
   0.002232033,
   0.004107875,
   0.0061279,
   0.007475479,
   0.01489465,
   0.02932289,
   0.04627255,
   0.08770795,
   0.1581289,
   0.2633889,
   0.446948,
   0.6972646,
   0.8994677,
   1};
   TGraph *graph = new TGraph(41,Graph_fx202,Graph_fy202);
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
   
   TH1F *Graph_Graph202 = new TH1F("Graph_Graph202","Tagging Only",100,0,1.1);
   Graph_Graph202->SetMinimum(0);
   Graph_Graph202->SetMaximum(1.1);
   Graph_Graph202->SetDirectory(0);
   Graph_Graph202->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph202->SetLineColor(ci);
   Graph_Graph202->GetXaxis()->SetLabelFont(42);
   Graph_Graph202->GetXaxis()->SetTitleOffset(1);
   Graph_Graph202->GetXaxis()->SetTitleFont(42);
   Graph_Graph202->GetYaxis()->SetLabelFont(42);
   Graph_Graph202->GetYaxis()->SetTitleFont(42);
   Graph_Graph202->GetZaxis()->SetLabelFont(42);
   Graph_Graph202->GetZaxis()->SetTitleOffset(1);
   Graph_Graph202->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph202);
   
   TLatex *   tex = new TLatex(0.2158264,0.4933249,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(203);
      tex = new TLatex(0.4415886,0.7316665,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(204);
      tex = new TLatex(0.7646443,0.9584901,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(205);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx206[41] = {
   0,
   5.85194e-07,
   1.545586e-06,
   2.061663e-06,
   2.490884e-06,
   4.074821e-06,
   5.477359e-06,
   6.953724e-06,
   1.072998e-05,
   1.321223e-05,
   1.733165e-05,
   2.462819e-05,
   3.270244e-05,
   4.17819e-05,
   5.804496e-05,
   7.618816e-05,
   9.811124e-05,
   0.0001220584,
   0.0001630187,
   0.0002215401,
   0.0003012902,
   0.0004189052,
   0.0005654828,
   0.0007589132,
   0.001032363,
   0.001444601,
   0.001963323,
   0.002743534,
   0.003853812,
   0.005531229,
   0.008406431,
   0.01336661,
   0.02143999,
   0.03619574,
   0.06258308,
   0.1165437,
   0.2158264,
   0.4415886,
   0.7646443,
   0.9480494,
   1};
   Double_t Graph_fy206[41] = {
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
   0.002349115,
   0.002655973,
   0.005741179,
   0.01470658,
   0.03421845,
   0.06511,
   0.1224438,
   0.2274909,
   0.3933249,
   0.6316665,
   0.9184901,
   0.9902805,
   1};
   graph = new TGraph(41,Graph_fx206,Graph_fy206);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph206 = new TH1F("Graph_Graph206","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph206->SetMinimum(0);
   Graph_Graph206->SetMaximum(1.1);
   Graph_Graph206->SetDirectory(0);
   Graph_Graph206->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph206->SetLineColor(ci);
   Graph_Graph206->GetXaxis()->SetLabelFont(42);
   Graph_Graph206->GetXaxis()->SetTitleOffset(1);
   Graph_Graph206->GetXaxis()->SetTitleFont(42);
   Graph_Graph206->GetYaxis()->SetLabelFont(42);
   Graph_Graph206->GetYaxis()->SetTitleFont(42);
   Graph_Graph206->GetZaxis()->SetLabelFont(42);
   Graph_Graph206->GetZaxis()->SetTitleOffset(1);
   Graph_Graph206->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph206);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx207[41] = {
   0,
   4.196301e-07,
   1.251511e-06,
   1.896988e-06,
   2.897534e-06,
   3.899392e-06,
   5.412952e-06,
   7.073217e-06,
   9.23751e-06,
   1.145953e-05,
   1.496193e-05,
   1.997024e-05,
   2.650373e-05,
   3.535326e-05,
   4.593512e-05,
   6.104491e-05,
   7.993763e-05,
   0.0001047839,
   0.0001399464,
   0.00018814,
   0.0002531668,
   0.0003429507,
   0.0004673829,
   0.0006366346,
   0.0008659514,
   0.001239325,
   0.001755339,
   0.002451298,
   0.003464695,
   0.004927067,
   0.00724285,
   0.01103211,
   0.01719935,
   0.02802173,
   0.04774301,
   0.08415577,
   0.1559403,
   0.3107567,
   0.5948833,
   0.8467458,
   1};
   Double_t Graph_fy207[41] = {
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
   0.0005281947,
   0.0005281947,
   0.0005281947,
   0.0005281947,
   0.001150348,
   0.001150348,
   0.001150348,
   0.001150348,
   0.001713753,
   0.002754591,
   0.005114165,
   0.007097223,
   0.008420141,
   0.01570354,
   0.02986775,
   0.04717755,
   0.08812832,
   0.1598827,
   0.2652194,
   0.4485876,
   0.70024,
   0.9012284,
   1};
   graph = new TGraph(41,Graph_fx207,Graph_fy207);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph207 = new TH1F("Graph_Graph207","Tagging Prioritized",100,0,1.1);
   Graph_Graph207->SetMinimum(0);
   Graph_Graph207->SetMaximum(1.1);
   Graph_Graph207->SetDirectory(0);
   Graph_Graph207->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph207->SetLineColor(ci);
   Graph_Graph207->GetXaxis()->SetLabelFont(42);
   Graph_Graph207->GetXaxis()->SetTitleOffset(1);
   Graph_Graph207->GetXaxis()->SetTitleFont(42);
   Graph_Graph207->GetYaxis()->SetLabelFont(42);
   Graph_Graph207->GetYaxis()->SetTitleFont(42);
   Graph_Graph207->GetZaxis()->SetLabelFont(42);
   Graph_Graph207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph207->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph207);
   
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
   ROC_H_pt_16->Modified();
   ROC_H_pt_16->cd();
   ROC_H_pt_16->SetSelected(ROC_H_pt_16);
}
