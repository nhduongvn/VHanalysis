#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_16()
{
//=========Macro generated from canvas: ROC_Z_pt_16/ROC_Z_pt_16
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_16 = new TCanvas("ROC_Z_pt_16", "ROC_Z_pt_16",0,0,600,600);
   ROC_Z_pt_16->SetHighLightColor(2);
   ROC_Z_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_16->SetFillColor(0);
   ROC_Z_pt_16->SetBorderMode(0);
   ROC_Z_pt_16->SetBorderSize(2);
   ROC_Z_pt_16->SetGridx();
   ROC_Z_pt_16->SetGridy();
   ROC_Z_pt_16->SetLeftMargin(0.15709);
   ROC_Z_pt_16->SetRightMargin(0.1234783);
   ROC_Z_pt_16->SetBottomMargin(0.12);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx220[41] = {
   0,
   3.537124e-07,
   7.248071e-07,
   1.322065e-06,
   2.038499e-06,
   2.604442e-06,
   3.829459e-06,
   5.180382e-06,
   7.082079e-06,
   9.41153e-06,
   1.257173e-05,
   1.666886e-05,
   2.343119e-05,
   3.110019e-05,
   4.017414e-05,
   5.294351e-05,
   7.096101e-05,
   9.460233e-05,
   0.0001275035,
   0.0001686796,
   0.0002274609,
   0.0003049302,
   0.0004143403,
   0.0005666474,
   0.0007772067,
   0.001076742,
   0.001490531,
   0.00210489,
   0.002970545,
   0.004259334,
   0.006359254,
   0.009722896,
   0.01529779,
   0.02512755,
   0.04365545,
   0.07834086,
   0.1520058,
   0.309823,
   0.620096,
   0.861465,
   1};
   Double_t Graph_fy220[41] = {
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
   7.082937e-05,
   7.082937e-05,
   0.0001419829,
   0.0001419829,
   0.0002616898,
   0.0002616898,
   0.0003299843,
   0.0003869914,
   0.0005261868,
   0.0006038684,
   0.001704629,
   0.003547353,
   0.008682404,
   0.01210087,
   0.0197053,
   0.04376388,
   0.08425821,
   0.159665,
   0.2803017,
   0.4757137,
   0.7326168,
   0.9113901,
   1};
   TGraph *graph = new TGraph(41,Graph_fx220,Graph_fy220);
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
   
   TH1F *Graph_Graph220 = new TH1F("Graph_Graph220","Tagging Only",100,0,1.1);
   Graph_Graph220->SetMinimum(0);
   Graph_Graph220->SetMaximum(1.1);
   Graph_Graph220->SetDirectory(0);
   Graph_Graph220->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph220->SetLineColor(ci);
   Graph_Graph220->GetXaxis()->SetLabelFont(42);
   Graph_Graph220->GetXaxis()->SetTitleOffset(1);
   Graph_Graph220->GetXaxis()->SetTitleFont(42);
   Graph_Graph220->GetYaxis()->SetLabelFont(42);
   Graph_Graph220->GetYaxis()->SetTitleFont(42);
   Graph_Graph220->GetZaxis()->SetLabelFont(42);
   Graph_Graph220->GetZaxis()->SetTitleOffset(1);
   Graph_Graph220->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph220);
   
   TLatex *   tex = new TLatex(0.1550672,0.4059984,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(221);
      tex = new TLatex(0.3309502,0.6234755,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(222);
      tex = new TLatex(0.6791815,0.9057133,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(223);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx224[41] = {
   0,
   4.867618e-07,
   9.717762e-07,
   1.62673e-06,
   2.144473e-06,
   3.322676e-06,
   4.316789e-06,
   6.336705e-06,
   8.088726e-06,
   1.083015e-05,
   1.340722e-05,
   1.794029e-05,
   2.483412e-05,
   3.503071e-05,
   4.505711e-05,
   5.854606e-05,
   7.638633e-05,
   0.0001012413,
   0.0001313319,
   0.000167507,
   0.0002268276,
   0.0003042151,
   0.0004216186,
   0.0005665861,
   0.0007680068,
   0.001094335,
   0.001456969,
   0.001999782,
   0.002818434,
   0.003995422,
   0.005978702,
   0.00927615,
   0.0149928,
   0.02443893,
   0.04295763,
   0.07784647,
   0.1550672,
   0.3309502,
   0.6791815,
   0.9054557,
   1};
   Double_t Graph_fy224[41] = {
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
   0.002639945,
   0.007071612,
   0.009995414,
   0.02187961,
   0.0511566,
   0.09362767,
   0.1655888,
   0.3059984,
   0.5234755,
   0.8657133,
   0.98483,
   1};
   graph = new TGraph(41,Graph_fx224,Graph_fy224);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph224 = new TH1F("Graph_Graph224","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph224->SetMinimum(0);
   Graph_Graph224->SetMaximum(1.1);
   Graph_Graph224->SetDirectory(0);
   Graph_Graph224->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph224->SetLineColor(ci);
   Graph_Graph224->GetXaxis()->SetLabelFont(42);
   Graph_Graph224->GetXaxis()->SetTitleOffset(1);
   Graph_Graph224->GetXaxis()->SetTitleFont(42);
   Graph_Graph224->GetYaxis()->SetLabelFont(42);
   Graph_Graph224->GetYaxis()->SetTitleFont(42);
   Graph_Graph224->GetZaxis()->SetLabelFont(42);
   Graph_Graph224->GetZaxis()->SetTitleOffset(1);
   Graph_Graph224->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph224);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx225[41] = {
   0,
   3.471989e-07,
   7.114601e-07,
   1.29772e-06,
   2.010093e-06,
   2.576485e-06,
   3.954069e-06,
   5.339596e-06,
   7.218367e-06,
   9.556388e-06,
   1.28117e-05,
   1.694751e-05,
   2.384798e-05,
   3.168318e-05,
   4.105636e-05,
   5.425729e-05,
   7.262638e-05,
   9.705181e-05,
   0.0001310718,
   0.0001732879,
   0.0002338043,
   0.0003136761,
   0.0004260739,
   0.0005811849,
   0.0007971117,
   0.001103088,
   0.001526797,
   0.002156183,
   0.00303542,
   0.004341955,
   0.006467595,
   0.009873653,
   0.01548532,
   0.02539747,
   0.04404277,
   0.07893544,
   0.152608,
   0.3106935,
   0.6207619,
   0.8610133,
   1};
   Double_t Graph_fy225[41] = {
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
   6.953318e-05,
   6.953318e-05,
   0.0001393846,
   0.0001393846,
   0.0002569009,
   0.0002569009,
   0.0003239455,
   0.0003799094,
   0.0005165575,
   0.0005928176,
   0.001673434,
   0.003482436,
   0.009086929,
   0.01192478,
   0.01953768,
   0.04344136,
   0.08425681,
   0.1596035,
   0.281365,
   0.4755419,
   0.7351493,
   0.9136876,
   1};
   graph = new TGraph(41,Graph_fx225,Graph_fy225);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph225 = new TH1F("Graph_Graph225","Tagging Prioritized",100,0,1.1);
   Graph_Graph225->SetMinimum(0);
   Graph_Graph225->SetMaximum(1.1);
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
   ROC_Z_pt_16->Modified();
   ROC_Z_pt_16->cd();
   ROC_Z_pt_16->SetSelected(ROC_Z_pt_16);
}
