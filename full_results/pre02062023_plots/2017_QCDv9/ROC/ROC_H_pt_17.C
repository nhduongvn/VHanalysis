#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_17()
{
//=========Macro generated from canvas: ROC_H_pt_17/ROC_H_pt_17
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_pt_17 = new TCanvas("ROC_H_pt_17", "ROC_H_pt_17",0,0,600,600);
   ROC_H_pt_17->SetHighLightColor(2);
   ROC_H_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_pt_17->SetFillColor(0);
   ROC_H_pt_17->SetBorderMode(0);
   ROC_H_pt_17->SetBorderSize(2);
   ROC_H_pt_17->SetGridx();
   ROC_H_pt_17->SetGridy();
   ROC_H_pt_17->SetLeftMargin(0.15709);
   ROC_H_pt_17->SetRightMargin(0.1234783);
   ROC_H_pt_17->SetBottomMargin(0.12);
   ROC_H_pt_17->SetFrameBorderMode(0);
   ROC_H_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx205[41] = {
   0,
   4.043225e-08,
   1.144988e-07,
   1.892103e-07,
   2.94197e-07,
   4.05307e-07,
   5.435029e-07,
   7.486823e-07,
   9.9093e-07,
   1.290979e-06,
   1.774982e-06,
   2.352331e-06,
   3.080298e-06,
   4.083525e-06,
   5.350821e-06,
   7.130155e-06,
   9.432692e-06,
   1.24047e-05,
   1.657857e-05,
   2.237718e-05,
   3.007304e-05,
   4.128388e-05,
   5.648722e-05,
   7.790429e-05,
   0.0001078116,
   0.0001522848,
   0.0002171583,
   0.0003185667,
   0.0004696223,
   0.000706268,
   0.001085776,
   0.001713045,
   0.002756389,
   0.005044266,
   0.008899021,
   0.01681362,
   0.03541494,
   0.08472556,
   0.240632,
   0.6709614,
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
   0.0001357404,
   0.0001357404,
   0.0001357404,
   0.0001357404,
   0.0001357404,
   0.0001357404,
   0.0002969879,
   0.0004244976,
   0.000732488,
   0.0008186459,
   0.001453812,
   0.002888538,
   0.004562119,
   0.0104366,
   0.01928782,
   0.03336268,
   0.05989928,
   0.1144759,
   0.2410753,
   0.4682749,
   0.8039239,
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
   
   TLatex *   tex = new TLatex(0.4017943,0.7643717,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(206);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx207[41] = {
   0,
   6.900644e-08,
   1.995127e-07,
   2.689463e-07,
   3.301068e-07,
   4.820568e-07,
   6.817809e-07,
   8.672812e-07,
   1.158128e-06,
   1.514962e-06,
   2.040704e-06,
   2.861953e-06,
   3.846812e-06,
   5.031688e-06,
   6.906631e-06,
   9.185845e-06,
   1.20558e-05,
   1.524443e-05,
   1.997953e-05,
   2.702579e-05,
   3.696839e-05,
   5.102645e-05,
   7.007698e-05,
   9.597511e-05,
   0.0001300893,
   0.0001836138,
   0.000258922,
   0.0003779608,
   0.0005616465,
   0.0008483674,
   0.001345757,
   0.002150253,
   0.003507378,
   0.006122259,
   0.01152344,
   0.02406698,
   0.05161867,
   0.1364862,
   0.4017943,
   0.8548626,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0004903378,
   0.0006804916,
   0.001903006,
   0.002731031,
   0.00505589,
   0.01575639,
   0.0319492,
   0.04953867,
   0.08029645,
   0.1561716,
   0.3533268,
   0.6643717,
   0.943281,
   1};
   graph = new TGraph(41,Graph_fx207,Graph_fy207);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph207 = new TH1F("Graph_Graph207","Mass-Matching Prioritized",100,0,1.1);
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
   
   Double_t Graph_fx208[41] = {
   0,
   4.290354e-08,
   1.174964e-07,
   2.012569e-07,
   3.22132e-07,
   4.366973e-07,
   5.827869e-07,
   8.038584e-07,
   1.070755e-06,
   1.378409e-06,
   1.873507e-06,
   2.4845e-06,
   3.238117e-06,
   4.284627e-06,
   5.605491e-06,
   7.4689e-06,
   9.898764e-06,
   1.298576e-05,
   1.737296e-05,
   2.344818e-05,
   3.146207e-05,
   4.309504e-05,
   5.897913e-05,
   8.115352e-05,
   0.0001122297,
   0.0001584957,
   0.0002253031,
   0.0003299579,
   0.0004856393,
   0.00072809,
   0.001116053,
   0.001756635,
   0.002821222,
   0.005128544,
   0.009045432,
   0.01731759,
   0.0362924,
   0.0859171,
   0.2421198,
   0.67098,
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
   0.0001165001,
   0.0002049973,
   0.0002049973,
   0.0002049973,
   0.0002049973,
   0.0002183237,
   0.0004471761,
   0.000567722,
   0.0008699446,
   0.001101737,
   0.002090069,
   0.003649283,
   0.005921908,
   0.01169938,
   0.02106948,
   0.03519925,
   0.06306948,
   0.1182739,
   0.2465848,
   0.4749913,
   0.8095806,
   1};
   graph = new TGraph(41,Graph_fx208,Graph_fy208);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph208 = new TH1F("Graph_Graph208","Tagging Prioritized",100,0,1.1);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_pt_17->Modified();
   ROC_H_pt_17->cd();
   ROC_H_pt_17->SetSelected(ROC_H_pt_17);
}
