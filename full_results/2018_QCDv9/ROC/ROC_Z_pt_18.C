#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_18()
{
//=========Macro generated from canvas: ROC_Z_pt_18/ROC_Z_pt_18
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_18 = new TCanvas("ROC_Z_pt_18", "ROC_Z_pt_18",0,0,600,600);
   ROC_Z_pt_18->SetHighLightColor(2);
   ROC_Z_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_18->SetFillColor(0);
   ROC_Z_pt_18->SetBorderMode(0);
   ROC_Z_pt_18->SetBorderSize(2);
   ROC_Z_pt_18->SetGridx();
   ROC_Z_pt_18->SetGridy();
   ROC_Z_pt_18->SetLeftMargin(0.15709);
   ROC_Z_pt_18->SetRightMargin(0.1234783);
   ROC_Z_pt_18->SetBottomMargin(0.12);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   ROC_Z_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx231[41] = {
   0,
   2.838189e-07,
   5.757635e-07,
   9.891525e-07,
   1.507884e-06,
   1.932999e-06,
   2.873062e-06,
   3.806378e-06,
   5.264029e-06,
   7.036165e-06,
   9.354293e-06,
   1.240286e-05,
   1.739802e-05,
   2.294102e-05,
   2.97423e-05,
   3.893374e-05,
   5.183836e-05,
   6.904604e-05,
   9.347283e-05,
   0.0001236951,
   0.0001672058,
   0.0002245591,
   0.0003059898,
   0.0004192675,
   0.0005774072,
   0.0008079882,
   0.001133091,
   0.001638726,
   0.002379488,
   0.0035196,
   0.005401152,
   0.00832005,
   0.01330357,
   0.02184181,
   0.03778307,
   0.07162357,
   0.1437051,
   0.2930894,
   0.6001155,
   0.8504903,
   1};
   Double_t Graph_fy231[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.843702e-05,
   2.843702e-05,
   0.0008752902,
   0.001235399,
   0.001235399,
   0.002191419,
   0.002339899,
   0.003501127,
   0.004783736,
   0.01101287,
   0.02218055,
   0.04993124,
   0.09058641,
   0.1651408,
   0.2834616,
   0.4779124,
   0.7407878,
   0.9223138,
   1};
   TGraph *graph = new TGraph(41,Graph_fx231,Graph_fy231);
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
   
   TH1F *Graph_Graph231 = new TH1F("Graph_Graph231","Tagging Only",100,0,1.1);
   Graph_Graph231->SetMinimum(0);
   Graph_Graph231->SetMaximum(1.1);
   Graph_Graph231->SetDirectory(0);
   Graph_Graph231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph231->SetLineColor(ci);
   Graph_Graph231->GetXaxis()->SetLabelFont(42);
   Graph_Graph231->GetXaxis()->SetTitleOffset(1);
   Graph_Graph231->GetXaxis()->SetTitleFont(42);
   Graph_Graph231->GetYaxis()->SetLabelFont(42);
   Graph_Graph231->GetYaxis()->SetTitleFont(42);
   Graph_Graph231->GetZaxis()->SetLabelFont(42);
   Graph_Graph231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph231->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph231);
   
   TLatex *   tex = new TLatex(0.2907356,0.6462236,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(232);
      tex = new TLatex(0.6603921,0.8996919,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(233);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx234[41] = {
   0,
   3.978146e-07,
   7.781485e-07,
   1.231598e-06,
   1.570489e-06,
   2.27124e-06,
   3.058019e-06,
   4.507038e-06,
   6.012099e-06,
   7.886578e-06,
   9.941021e-06,
   1.319815e-05,
   1.826961e-05,
   2.551087e-05,
   3.321426e-05,
   4.287452e-05,
   5.554736e-05,
   7.317597e-05,
   9.464658e-05,
   0.0001219513,
   0.0001647814,
   0.0002203205,
   0.0003072816,
   0.0004147111,
   0.0005599229,
   0.0008033133,
   0.001077655,
   0.001521077,
   0.002226421,
   0.003272559,
   0.005054082,
   0.007987437,
   0.01290139,
   0.0210203,
   0.03656528,
   0.06782016,
   0.1354506,
   0.2907356,
   0.6603921,
   0.9113838,
   1};
   Double_t Graph_fy234[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.003222648,
   0.003222648,
   0.003222648,
   0.003222648,
   0.004171233,
   0.005033615,
   0.008644319,
   0.01269787,
   0.02564867,
   0.04928972,
   0.09213929,
   0.1745181,
   0.3097189,
   0.5462236,
   0.8596919,
   0.9758052,
   1};
   graph = new TGraph(41,Graph_fx234,Graph_fy234);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph234 = new TH1F("Graph_Graph234","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph234->SetMinimum(0);
   Graph_Graph234->SetMaximum(1.1);
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
   
   Double_t Graph_fx235[41] = {
   0,
   2.789538e-07,
   5.65894e-07,
   9.78591e-07,
   1.494894e-06,
   1.9308e-06,
   2.985636e-06,
   3.956237e-06,
   5.408736e-06,
   7.185993e-06,
   9.586028e-06,
   1.266895e-05,
   1.777085e-05,
   2.341853e-05,
   3.043085e-05,
   3.989615e-05,
   5.308479e-05,
   7.0919e-05,
   9.619068e-05,
   0.0001271436,
   0.0001719854,
   0.0002313295,
   0.0003149535,
   0.0004302259,
   0.0005926052,
   0.0008282853,
   0.001161282,
   0.001679681,
   0.002432855,
   0.003588474,
   0.005495054,
   0.008456118,
   0.01351281,
   0.02213205,
   0.03821366,
   0.07227348,
   0.1445556,
   0.2944385,
   0.6008831,
   0.8509521,
   1};
   Double_t Graph_fy235[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.669962e-05,
   5.4567e-05,
   5.4567e-05,
   0.001102193,
   0.001455088,
   0.00165786,
   0.002594729,
   0.002950463,
   0.004116483,
   0.005410985,
   0.01151505,
   0.02252043,
   0.05005379,
   0.09048116,
   0.1658053,
   0.2841105,
   0.4786869,
   0.74125,
   0.9226861,
   1};
   graph = new TGraph(41,Graph_fx235,Graph_fy235);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph235 = new TH1F("Graph_Graph235","Tagging Prioritized",100,0,1.1);
   Graph_Graph235->SetMinimum(0);
   Graph_Graph235->SetMaximum(1.1);
   Graph_Graph235->SetDirectory(0);
   Graph_Graph235->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph235->SetLineColor(ci);
   Graph_Graph235->GetXaxis()->SetLabelFont(42);
   Graph_Graph235->GetXaxis()->SetTitleOffset(1);
   Graph_Graph235->GetXaxis()->SetTitleFont(42);
   Graph_Graph235->GetYaxis()->SetLabelFont(42);
   Graph_Graph235->GetYaxis()->SetTitleFont(42);
   Graph_Graph235->GetZaxis()->SetLabelFont(42);
   Graph_Graph235->GetZaxis()->SetTitleOffset(1);
   Graph_Graph235->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph235);
   
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
   ROC_Z_pt_18->Modified();
   ROC_Z_pt_18->cd();
   ROC_Z_pt_18->SetSelected(ROC_Z_pt_18);
}
