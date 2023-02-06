#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_17()
{
//=========Macro generated from canvas: ROC_Z_pt_17/ROC_Z_pt_17
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_17 = new TCanvas("ROC_Z_pt_17", "ROC_Z_pt_17",0,0,600,600);
   ROC_Z_pt_17->SetHighLightColor(2);
   ROC_Z_pt_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_17->SetFillColor(0);
   ROC_Z_pt_17->SetBorderMode(0);
   ROC_Z_pt_17->SetBorderSize(2);
   ROC_Z_pt_17->SetGridx();
   ROC_Z_pt_17->SetGridy();
   ROC_Z_pt_17->SetLeftMargin(0.15709);
   ROC_Z_pt_17->SetRightMargin(0.1234783);
   ROC_Z_pt_17->SetBottomMargin(0.12);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   ROC_Z_pt_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx218[41] = {
   0,
   4.194424e-08,
   8.451635e-08,
   1.660724e-07,
   2.502122e-07,
   3.323269e-07,
   4.793037e-07,
   6.705548e-07,
   8.838374e-07,
   1.184174e-06,
   1.570805e-06,
   2.063126e-06,
   2.827506e-06,
   3.849126e-06,
   5.135618e-06,
   6.719863e-06,
   8.965415e-06,
   1.196998e-05,
   1.600656e-05,
   2.128406e-05,
   2.884351e-05,
   3.886754e-05,
   5.34134e-05,
   7.365407e-05,
   0.0001018288,
   0.0001434026,
   0.0002313477,
   0.0003237686,
   0.000461341,
   0.000676058,
   0.001031987,
   0.001598435,
   0.002561915,
   0.004867998,
   0.008405649,
   0.01631172,
   0.03671603,
   0.09093856,
   0.268768,
   0.7104291,
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
   0,
   0,
   0,
   2.292795e-05,
   0.0002541544,
   0.0006026491,
   0.000660188,
   0.002155943,
   0.003656144,
   0.007614266,
   0.014636,
   0.02843073,
   0.05448628,
   0.1058317,
   0.2225622,
   0.4609831,
   0.8040539,
   1};
   TGraph *graph = new TGraph(41,Graph_fx218,Graph_fy218);
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
   
   TH1F *Graph_Graph218 = new TH1F("Graph_Graph218","Tagging Only",100,0,1.1);
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
   
   TLatex *   tex = new TLatex(0.2771656,0.6667415,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(219);
      tex = new TLatex(0.8053101,0.9629906,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(220);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx221[41] = {
   0,
   6.143653e-08,
   1.027389e-07,
   2.507107e-07,
   3.137417e-07,
   4.484135e-07,
   6.140179e-07,
   8.841941e-07,
   1.050924e-06,
   1.314268e-06,
   1.660813e-06,
   2.139377e-06,
   2.943305e-06,
   4.156552e-06,
   5.485896e-06,
   7.195064e-06,
   9.298822e-06,
   1.23393e-05,
   1.620327e-05,
   2.084801e-05,
   2.808706e-05,
   3.726192e-05,
   5.131345e-05,
   6.996862e-05,
   9.52743e-05,
   0.0001353956,
   0.0001849078,
   0.0002658692,
   0.0003940606,
   0.0005933503,
   0.0009224313,
   0.001478377,
   0.002434396,
   0.004124254,
   0.007557724,
   0.01520977,
   0.03342796,
   0.08886078,
   0.2771656,
   0.8053101,
   1};
   Double_t Graph_fy221[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.828428e-06,
   0.0005832919,
   0.001150025,
   0.00189161,
   0.00307939,
   0.005893454,
   0.01414909,
   0.02845003,
   0.05288942,
   0.1020926,
   0.2480649,
   0.5667415,
   0.9229906,
   1};
   graph = new TGraph(41,Graph_fx221,Graph_fy221);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph221 = new TH1F("Graph_Graph221","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph221->SetMinimum(0);
   Graph_Graph221->SetMaximum(1.1);
   Graph_Graph221->SetDirectory(0);
   Graph_Graph221->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph221->SetLineColor(ci);
   Graph_Graph221->GetXaxis()->SetLabelFont(42);
   Graph_Graph221->GetXaxis()->SetTitleOffset(1);
   Graph_Graph221->GetXaxis()->SetTitleFont(42);
   Graph_Graph221->GetYaxis()->SetLabelFont(42);
   Graph_Graph221->GetYaxis()->SetTitleFont(42);
   Graph_Graph221->GetZaxis()->SetLabelFont(42);
   Graph_Graph221->GetZaxis()->SetTitleOffset(1);
   Graph_Graph221->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph221);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx222[41] = {
   0,
   4.598038e-08,
   8.847231e-08,
   1.754783e-07,
   2.716013e-07,
   3.57545e-07,
   5.227242e-07,
   7.22303e-07,
   9.393533e-07,
   1.259698e-06,
   1.671214e-06,
   2.189277e-06,
   2.979069e-06,
   4.017796e-06,
   5.334111e-06,
   6.990091e-06,
   9.31552e-06,
   1.242022e-05,
   1.660659e-05,
   2.208764e-05,
   2.989133e-05,
   4.025924e-05,
   5.533991e-05,
   7.61236e-05,
   0.0001050814,
   0.0001479325,
   0.0002368587,
   0.0003319727,
   0.0004732819,
   0.000692473,
   0.001055373,
   0.001634159,
   0.002612999,
   0.005010046,
   0.008843516,
   0.01683984,
   0.03761984,
   0.092057,
   0.2691175,
   0.7099286,
   1};
   Double_t Graph_fy222[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.849721e-05,
   9.92572e-05,
   9.960706e-05,
   0.0001341313,
   0.0003325829,
   0.0006552344,
   0.0008485508,
   0.002377282,
   0.003785733,
   0.008117854,
   0.01522073,
   0.02932176,
   0.05615566,
   0.1101529,
   0.2280951,
   0.4642139,
   0.8096635,
   1};
   graph = new TGraph(41,Graph_fx222,Graph_fy222);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph222 = new TH1F("Graph_Graph222","Tagging Prioritized",100,0,1.1);
   Graph_Graph222->SetMinimum(0);
   Graph_Graph222->SetMaximum(1.1);
   Graph_Graph222->SetDirectory(0);
   Graph_Graph222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph222->SetLineColor(ci);
   Graph_Graph222->GetXaxis()->SetLabelFont(42);
   Graph_Graph222->GetXaxis()->SetTitleOffset(1);
   Graph_Graph222->GetXaxis()->SetTitleFont(42);
   Graph_Graph222->GetYaxis()->SetLabelFont(42);
   Graph_Graph222->GetYaxis()->SetTitleFont(42);
   Graph_Graph222->GetZaxis()->SetLabelFont(42);
   Graph_Graph222->GetZaxis()->SetTitleOffset(1);
   Graph_Graph222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph222);
   
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
   ROC_Z_pt_17->Modified();
   ROC_Z_pt_17->cd();
   ROC_Z_pt_17->SetSelected(ROC_Z_pt_17);
}
