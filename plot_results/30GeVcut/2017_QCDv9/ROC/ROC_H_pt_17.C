#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_17()
{
//=========Macro generated from canvas: ROC_H_pt_17/ROC_H_pt_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx200[41] = {
   0,
   6.407842e-08,
   1.681846e-07,
   2.646807e-07,
   4.294864e-07,
   5.845134e-07,
   7.947762e-07,
   1.100502e-06,
   1.45996e-06,
   1.865059e-06,
   2.543145e-06,
   3.346508e-06,
   4.407567e-06,
   5.837444e-06,
   7.603062e-06,
   1.00903e-05,
   1.32631e-05,
   1.750882e-05,
   2.341087e-05,
   3.158102e-05,
   4.251166e-05,
   5.848087e-05,
   8.030715e-05,
   0.0001107718,
   0.0001532561,
   0.0002165238,
   0.0003075656,
   0.0004504194,
   0.000664647,
   0.0009961983,
   0.00152686,
   0.002415439,
   0.003879404,
   0.006493794,
   0.01152616,
   0.02233938,
   0.04706618,
   0.1107432,
   0.3001724,
   0.730217,
   1};
   Double_t Graph_fy200[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000100697,
   0.000100697,
   0.000100697,
   0.000100697,
   0.0001555322,
   0.000248524,
   0.000376845,
   0.0003884502,
   0.0007415136,
   0.0007415136,
   0.00136344,
   0.001976893,
   0.002406414,
   0.003833007,
   0.006789642,
   0.01240477,
   0.02214635,
   0.0404211,
   0.07498856,
   0.143466,
   0.2726007,
   0.5070005,
   0.8282338,
   1};
   TGraph *graph = new TGraph(41,Graph_fx200,Graph_fy200);
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
   
   TH1F *Graph_Graph200 = new TH1F("Graph_Graph200","Tagging Only",100,0,1.1);
   Graph_Graph200->SetMinimum(0);
   Graph_Graph200->SetMaximum(1.1);
   Graph_Graph200->SetDirectory(0);
   Graph_Graph200->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph200->SetLineColor(ci);
   Graph_Graph200->GetXaxis()->SetLabelFont(42);
   Graph_Graph200->GetXaxis()->SetTitleOffset(1);
   Graph_Graph200->GetXaxis()->SetTitleFont(42);
   Graph_Graph200->GetYaxis()->SetLabelFont(42);
   Graph_Graph200->GetYaxis()->SetTitleFont(42);
   Graph_Graph200->GetZaxis()->SetLabelFont(42);
   Graph_Graph200->GetZaxis()->SetTitleOffset(1);
   Graph_Graph200->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph200);
   
   TLatex *   tex = new TLatex(0.1753231,0.533316,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(201);
      tex = new TLatex(0.471736,0.8225724,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(202);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx203[41] = {
   0,
   9.670628e-08,
   2.513151e-07,
   3.199736e-07,
   4.145919e-07,
   6.569638e-07,
   9.365322e-07,
   1.194113e-06,
   1.704335e-06,
   2.211425e-06,
   2.920189e-06,
   4.033251e-06,
   5.325699e-06,
   6.861255e-06,
   9.369517e-06,
   1.246834e-05,
   1.622401e-05,
   2.059252e-05,
   2.684588e-05,
   3.637972e-05,
   4.971239e-05,
   6.924968e-05,
   9.366381e-05,
   0.0001269217,
   0.0001744603,
   0.000248309,
   0.0003488852,
   0.0005068091,
   0.0007478904,
   0.001130104,
   0.001782375,
   0.002891886,
   0.004747969,
   0.008177175,
   0.0151886,
   0.03128169,
   0.0668187,
   0.1753231,
   0.471736,
   0.8834715,
   1};
   Double_t Graph_fy203[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001129664,
   0.002082193,
   0.002936827,
   0.003541819,
   0.006912209,
   0.01557818,
   0.03241379,
   0.0632241,
   0.120792,
   0.2366508,
   0.433316,
   0.7225724,
   0.9662106,
   1};
   graph = new TGraph(41,Graph_fx203,Graph_fy203);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph203 = new TH1F("Graph_Graph203","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph203->SetMinimum(0);
   Graph_Graph203->SetMaximum(1.1);
   Graph_Graph203->SetDirectory(0);
   Graph_Graph203->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph203->SetLineColor(ci);
   Graph_Graph203->GetXaxis()->SetLabelFont(42);
   Graph_Graph203->GetXaxis()->SetTitleOffset(1);
   Graph_Graph203->GetXaxis()->SetTitleFont(42);
   Graph_Graph203->GetYaxis()->SetLabelFont(42);
   Graph_Graph203->GetYaxis()->SetTitleFont(42);
   Graph_Graph203->GetZaxis()->SetLabelFont(42);
   Graph_Graph203->GetZaxis()->SetTitleOffset(1);
   Graph_Graph203->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph203);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx204[41] = {
   0,
   6.37839e-08,
   1.736706e-07,
   2.825119e-07,
   4.680118e-07,
   6.249554e-07,
   8.481707e-07,
   1.171992e-06,
   1.55309e-06,
   1.968842e-06,
   2.658027e-06,
   3.49216e-06,
   4.57658e-06,
   6.071137e-06,
   7.891476e-06,
   1.047389e-05,
   1.380641e-05,
   1.820403e-05,
   2.437497e-05,
   3.287072e-05,
   4.425718e-05,
   6.06945e-05,
   8.329187e-05,
   0.0001146766,
   0.0001586442,
   0.0002239782,
   0.0003174784,
   0.0004645651,
   0.0006847731,
   0.00102404,
   0.001564976,
   0.00246882,
   0.003959689,
   0.006609711,
   0.01171014,
   0.02260741,
   0.04758826,
   0.111553,
   0.3016975,
   0.7307695,
   1};
   Double_t Graph_fy204[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.823117e-05,
   0.0001079264,
   0.0001079264,
   0.0001079264,
   0.0001614188,
   0.0002521335,
   0.0003773122,
   0.0003886332,
   0.000733051,
   0.0008201128,
   0.00142681,
   0.002025241,
   0.002551561,
   0.00405326,
   0.00725055,
   0.01301588,
   0.02265245,
   0.04123373,
   0.07630373,
   0.1456332,
   0.2764037,
   0.5107129,
   0.8297577,
   1};
   graph = new TGraph(41,Graph_fx204,Graph_fy204);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph204 = new TH1F("Graph_Graph204","Tagging Prioritized",100,0,1.1);
   Graph_Graph204->SetMinimum(0);
   Graph_Graph204->SetMaximum(1.1);
   Graph_Graph204->SetDirectory(0);
   Graph_Graph204->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph204->SetLineColor(ci);
   Graph_Graph204->GetXaxis()->SetLabelFont(42);
   Graph_Graph204->GetXaxis()->SetTitleOffset(1);
   Graph_Graph204->GetXaxis()->SetTitleFont(42);
   Graph_Graph204->GetYaxis()->SetLabelFont(42);
   Graph_Graph204->GetYaxis()->SetTitleFont(42);
   Graph_Graph204->GetZaxis()->SetLabelFont(42);
   Graph_Graph204->GetZaxis()->SetTitleOffset(1);
   Graph_Graph204->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph204);
   
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
