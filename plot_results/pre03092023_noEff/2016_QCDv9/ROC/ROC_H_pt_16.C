#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_16()
{
//=========Macro generated from canvas: ROC_H_pt_16/ROC_H_pt_16
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
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
   4.257227e-07,
   1.242542e-06,
   1.817752e-06,
   2.752031e-06,
   3.755183e-06,
   5.15585e-06,
   6.682048e-06,
   8.75406e-06,
   1.088904e-05,
   1.429278e-05,
   1.912023e-05,
   2.550107e-05,
   3.405568e-05,
   4.440833e-05,
   5.899908e-05,
   7.7048e-05,
   0.0001011909,
   0.0001347134,
   0.0001810043,
   0.0002438897,
   0.0003309919,
   0.0004522524,
   0.0006169759,
   0.0008382778,
   0.001197957,
   0.001696568,
   0.002367536,
   0.003346964,
   0.004777164,
   0.007054843,
   0.01076422,
   0.01684904,
   0.02752177,
   0.04693005,
   0.08320966,
   0.1541127,
   0.3083724,
   0.5934226,
   0.844115,
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
   
   TLatex *   tex = new TLatex(0.2153942,0.4933249,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(203);
      tex = new TLatex(0.4371223,0.7316665,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(204);
      tex = new TLatex(0.7633006,0.9584901,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(205);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx206[41] = {
   0,
   5.830652e-07,
   1.541174e-06,
   2.054726e-06,
   2.482926e-06,
   4.056379e-06,
   5.455583e-06,
   6.926447e-06,
   1.069299e-05,
   1.315546e-05,
   1.735067e-05,
   2.453683e-05,
   3.261773e-05,
   4.195241e-05,
   5.802605e-05,
   7.616774e-05,
   9.808808e-05,
   0.0001221851,
   0.000163131,
   0.0002216838,
   0.00030147,
   0.0004189173,
   0.0005653899,
   0.0007580875,
   0.001029916,
   0.001435178,
   0.001953137,
   0.002739921,
   0.003831815,
   0.005511157,
   0.008399558,
   0.01329541,
   0.0213415,
   0.03603191,
   0.06232648,
   0.1166264,
   0.2153942,
   0.4371223,
   0.7633006,
   0.9505393,
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
   4.178262e-07,
   1.253623e-06,
   1.885204e-06,
   2.879826e-06,
   3.876324e-06,
   5.396345e-06,
   7.04415e-06,
   9.215885e-06,
   1.144435e-05,
   1.4932e-05,
   1.990675e-05,
   2.640012e-05,
   3.525172e-05,
   4.578725e-05,
   6.080603e-05,
   7.963891e-05,
   0.0001044098,
   0.0001393963,
   0.0001873873,
   0.0002522386,
   0.0003417316,
   0.00046645,
   0.0006351071,
   0.0008633209,
   0.001232191,
   0.00173967,
   0.002428947,
   0.00343078,
   0.004885025,
   0.007195823,
   0.01095192,
   0.01710297,
   0.02787673,
   0.04748802,
   0.08386063,
   0.1551765,
   0.3091622,
   0.5942182,
   0.844432,
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
