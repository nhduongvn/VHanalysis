#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_18()
{
//=========Macro generated from canvas: ROC_H_pt_18/ROC_H_pt_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx205[41] = {
   0,
   7.214266e-08,
   1.884816e-07,
   2.890519e-07,
   4.764618e-07,
   6.651493e-07,
   9.003345e-07,
   1.25834e-06,
   1.671991e-06,
   2.131318e-06,
   2.8944e-06,
   3.806981e-06,
   5.072676e-06,
   6.692484e-06,
   8.760677e-06,
   1.162619e-05,
   1.524712e-05,
   2.010997e-05,
   2.685528e-05,
   3.630422e-05,
   4.876889e-05,
   6.706921e-05,
   9.218099e-05,
   0.0001271487,
   0.0001756666,
   0.0002478854,
   0.0003516305,
   0.0005149868,
   0.0007605337,
   0.00114066,
   0.001747448,
   0.00276595,
   0.004438751,
   0.007395433,
   0.01306534,
   0.02466219,
   0.05081855,
   0.1151321,
   0.3174003,
   0.7427245,
   1};
   Double_t Graph_fy205[41] = {
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
   1.444541e-05,
   1.444541e-05,
   1.444541e-05,
   2.730717e-05,
   0.0003299734,
   0.0004103571,
   0.0007634752,
   0.00118708,
   0.002260501,
   0.003501213,
   0.005949258,
   0.01102039,
   0.02274882,
   0.04235408,
   0.08120707,
   0.1512046,
   0.2767354,
   0.5044587,
   0.8280008,
   1};
   TGraph *graph = new TGraph(41,Graph_fx205,Graph_fy205);
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
   
   TH1F *Graph_Graph205 = new TH1F("Graph_Graph205","Tagging Only",100,0,1.1);
   Graph_Graph205->SetMinimum(0);
   Graph_Graph205->SetMaximum(1.1);
   Graph_Graph205->SetDirectory(0);
   Graph_Graph205->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph205->SetLineColor(ci);
   Graph_Graph205->GetXaxis()->SetLabelFont(42);
   Graph_Graph205->GetXaxis()->SetTitleOffset(1);
   Graph_Graph205->GetXaxis()->SetTitleFont(42);
   Graph_Graph205->GetYaxis()->SetLabelFont(42);
   Graph_Graph205->GetYaxis()->SetTitleFont(42);
   Graph_Graph205->GetZaxis()->SetLabelFont(42);
   Graph_Graph205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph205->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph205);
   
   TLatex *   tex = new TLatex(0.168319,0.540863,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(206);
      tex = new TLatex(0.4767727,0.8332099,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(207);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx208[41] = {
   0,
   9.664253e-08,
   2.566796e-07,
   3.249134e-07,
   4.367115e-07,
   7.289025e-07,
   1.032176e-06,
   1.299742e-06,
   1.879588e-06,
   2.412778e-06,
   3.214915e-06,
   4.532517e-06,
   6.019602e-06,
   7.722637e-06,
   1.057966e-05,
   1.388255e-05,
   1.796212e-05,
   2.29365e-05,
   2.992851e-05,
   4.060293e-05,
   5.521989e-05,
   7.68822e-05,
   0.0001044518,
   0.0001414512,
   0.0001941019,
   0.0002766432,
   0.0003877789,
   0.0005628444,
   0.0008296708,
   0.001254037,
   0.001977258,
   0.003220765,
   0.005291161,
   0.008938431,
   0.01663399,
   0.03277206,
   0.07287711,
   0.168319,
   0.4767727,
   0.903152,
   1};
   Double_t Graph_fy208[41] = {
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
   0.0004306585,
   0.0004306585,
   0.002285266,
   0.002285266,
   0.002733729,
   0.003097122,
   0.004257019,
   0.006281778,
   0.008392033,
   0.01557789,
   0.03976476,
   0.07095254,
   0.1346397,
   0.2421732,
   0.440863,
   0.7332099,
   0.9626247,
   1};
   graph = new TGraph(41,Graph_fx208,Graph_fy208);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph208->SetMinimum(0);
   Graph_Graph208->SetMaximum(1.1);
   Graph_Graph208->SetDirectory(0);
   Graph_Graph208->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph208->SetLineColor(ci);
   Graph_Graph208->GetXaxis()->SetLabelFont(42);
   Graph_Graph208->GetXaxis()->SetTitleOffset(1);
   Graph_Graph208->GetXaxis()->SetTitleFont(42);
   Graph_Graph208->GetYaxis()->SetLabelFont(42);
   Graph_Graph208->GetYaxis()->SetTitleFont(42);
   Graph_Graph208->GetZaxis()->SetLabelFont(42);
   Graph_Graph208->GetZaxis()->SetTitleOffset(1);
   Graph_Graph208->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph208);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx209[41] = {
   0,
   7.072165e-08,
   1.938947e-07,
   3.061386e-07,
   5.14681e-07,
   7.081201e-07,
   9.597054e-07,
   1.33999e-06,
   1.781031e-06,
   2.25057e-06,
   3.029026e-06,
   3.968247e-06,
   5.259611e-06,
   6.956043e-06,
   9.104737e-06,
   1.207506e-05,
   1.588068e-05,
   2.092804e-05,
   2.795908e-05,
   3.778556e-05,
   5.076518e-05,
   6.960064e-05,
   9.566848e-05,
   0.0001317293,
   0.0001819407,
   0.000256565,
   0.0003632084,
   0.0005315485,
   0.0007841835,
   0.001173445,
   0.001792673,
   0.002829503,
   0.004535965,
   0.007532294,
   0.01327459,
   0.0249809,
   0.05128657,
   0.1158849,
   0.3190628,
   0.7438314,
   1};
   Double_t Graph_fy209[41] = {
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
   1.409424e-05,
   1.409424e-05,
   1.409424e-05,
   2.664332e-05,
   0.0003219515,
   0.000400381,
   0.0007449145,
   0.001158221,
   0.002230151,
   0.003471772,
   0.00589868,
   0.01084676,
   0.02254168,
   0.04234334,
   0.08164302,
   0.151836,
   0.2782248,
   0.507978,
   0.8303566,
   1};
   graph = new TGraph(41,Graph_fx209,Graph_fy209);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph209 = new TH1F("Graph_Graph209","Tagging Prioritized",100,0,1.1);
   Graph_Graph209->SetMinimum(0);
   Graph_Graph209->SetMaximum(1.1);
   Graph_Graph209->SetDirectory(0);
   Graph_Graph209->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph209->SetLineColor(ci);
   Graph_Graph209->GetXaxis()->SetLabelFont(42);
   Graph_Graph209->GetXaxis()->SetTitleOffset(1);
   Graph_Graph209->GetXaxis()->SetTitleFont(42);
   Graph_Graph209->GetYaxis()->SetLabelFont(42);
   Graph_Graph209->GetYaxis()->SetTitleFont(42);
   Graph_Graph209->GetZaxis()->SetLabelFont(42);
   Graph_Graph209->GetZaxis()->SetTitleOffset(1);
   Graph_Graph209->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph209);
   
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
