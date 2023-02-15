#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_16()
{
//=========Macro generated from canvas: ROC_H_pt_16/ROC_H_pt_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx195[41] = {
   0,
   1.086165e-07,
   2.836474e-07,
   4.351679e-07,
   7.013075e-07,
   9.563078e-07,
   1.292216e-06,
   1.794025e-06,
   2.377601e-06,
   3.020968e-06,
   4.100938e-06,
   5.437411e-06,
   7.154949e-06,
   9.469445e-06,
   1.240117e-05,
   1.645305e-05,
   2.156133e-05,
   2.836798e-05,
   3.7773e-05,
   5.091859e-05,
   6.835577e-05,
   9.394367e-05,
   0.0001285806,
   0.0001766995,
   0.0002430003,
   0.0003467723,
   0.0004814268,
   0.0006821119,
   0.0009721858,
   0.001409171,
   0.002825497,
   0.004002208,
   0.005981307,
   0.009504702,
   0.01679603,
   0.0299582,
   0.05811699,
   0.1295218,
   0.3295205,
   0.7422814,
   1};
   Double_t Graph_fy195[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002080389,
   0.0002080389,
   0.0002080389,
   0.0002080389,
   0.0004530849,
   0.0004530849,
   0.0004793802,
   0.0004793802,
   0.000753471,
   0.001163424,
   0.00187765,
   0.00310312,
   0.003812297,
   0.007235061,
   0.01361017,
   0.02185403,
   0.04183641,
   0.07940043,
   0.1478804,
   0.2737002,
   0.5021636,
   0.8310868,
   1};
   TGraph *graph = new TGraph(41,Graph_fx195,Graph_fy195);
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
   
   TH1F *Graph_Graph195 = new TH1F("Graph_Graph195","Tagging Only",100,0,1.1);
   Graph_Graph195->SetMinimum(0);
   Graph_Graph195->SetMaximum(1.1);
   Graph_Graph195->SetDirectory(0);
   Graph_Graph195->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph195->SetLineColor(ci);
   Graph_Graph195->GetXaxis()->SetLabelFont(42);
   Graph_Graph195->GetXaxis()->SetTitleOffset(1);
   Graph_Graph195->GetXaxis()->SetTitleFont(42);
   Graph_Graph195->GetYaxis()->SetLabelFont(42);
   Graph_Graph195->GetYaxis()->SetTitleFont(42);
   Graph_Graph195->GetZaxis()->SetLabelFont(42);
   Graph_Graph195->GetZaxis()->SetTitleOffset(1);
   Graph_Graph195->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph195);
   
   TLatex *   tex = new TLatex(0.2131405,0.5329946,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(196);
      tex = new TLatex(0.5146851,0.8253019,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(197);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx198[41] = {
   0,
   1.812009e-07,
   4.470253e-07,
   5.605928e-07,
   7.075242e-07,
   1.168925e-06,
   1.598137e-06,
   2.017612e-06,
   2.90372e-06,
   3.765054e-06,
   5.030201e-06,
   7.174234e-06,
   9.462692e-06,
   1.220292e-05,
   1.669825e-05,
   2.195191e-05,
   2.83969e-05,
   3.599592e-05,
   4.710708e-05,
   6.397168e-05,
   8.74497e-05,
   0.0001216734,
   0.0001641314,
   0.0002221266,
   0.0003037749,
   0.000425967,
   0.0005833946,
   0.0008169634,
   0.00116092,
   0.001696463,
   0.002623169,
   0.004256964,
   0.007029186,
   0.01204585,
   0.02167171,
   0.04264517,
   0.08862096,
   0.2131405,
   0.5146851,
   0.8779096,
   1};
   Double_t Graph_fy198[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001055894,
   0.001193822,
   0.002580579,
   0.006610401,
   0.01591526,
   0.03119284,
   0.06297587,
   0.1244081,
   0.2368856,
   0.4329946,
   0.7253019,
   0.9677763,
   1};
   graph = new TGraph(41,Graph_fx198,Graph_fy198);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph198 = new TH1F("Graph_Graph198","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph198->SetMinimum(0);
   Graph_Graph198->SetMaximum(1.1);
   Graph_Graph198->SetDirectory(0);
   Graph_Graph198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph198->SetLineColor(ci);
   Graph_Graph198->GetXaxis()->SetLabelFont(42);
   Graph_Graph198->GetXaxis()->SetTitleOffset(1);
   Graph_Graph198->GetXaxis()->SetTitleFont(42);
   Graph_Graph198->GetYaxis()->SetLabelFont(42);
   Graph_Graph198->GetYaxis()->SetTitleFont(42);
   Graph_Graph198->GetZaxis()->SetLabelFont(42);
   Graph_Graph198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph198->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph198);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx199[41] = {
   0,
   1.063285e-07,
   2.910813e-07,
   4.58178e-07,
   7.532923e-07,
   1.011675e-06,
   1.367273e-06,
   1.901526e-06,
   2.52063e-06,
   3.177356e-06,
   4.278885e-06,
   5.650764e-06,
   7.404404e-06,
   9.818202e-06,
   1.28386e-05,
   1.702506e-05,
   2.238172e-05,
   2.941424e-05,
   3.922362e-05,
   5.289872e-05,
   7.104985e-05,
   9.733813e-05,
   0.0001331979,
   0.0001827028,
   0.0002512629,
   0.0003578602,
   0.0004962236,
   0.0007034581,
   0.00100161,
   0.001448721,
   0.002863189,
   0.004059341,
   0.006072578,
   0.009637349,
   0.01700551,
   0.0302816,
   0.05868602,
   0.130294,
   0.3302232,
   0.7433718,
   1};
   Double_t Graph_fy199[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000202824,
   0.000202824,
   0.000202824,
   0.000202824,
   0.0004417275,
   0.0004417275,
   0.0004673637,
   0.0004673637,
   0.0009509285,
   0.001350605,
   0.00224586,
   0.003440611,
   0.00415796,
   0.007519833,
   0.01412159,
   0.0226797,
   0.04302325,
   0.08103035,
   0.148837,
   0.2747008,
   0.5057862,
   0.8340566,
   1};
   graph = new TGraph(41,Graph_fx199,Graph_fy199);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph199 = new TH1F("Graph_Graph199","Tagging Prioritized",100,0,1.1);
   Graph_Graph199->SetMinimum(0);
   Graph_Graph199->SetMaximum(1.1);
   Graph_Graph199->SetDirectory(0);
   Graph_Graph199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph199->SetLineColor(ci);
   Graph_Graph199->GetXaxis()->SetLabelFont(42);
   Graph_Graph199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph199->GetXaxis()->SetTitleFont(42);
   Graph_Graph199->GetYaxis()->SetLabelFont(42);
   Graph_Graph199->GetYaxis()->SetTitleFont(42);
   Graph_Graph199->GetZaxis()->SetLabelFont(42);
   Graph_Graph199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph199->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph199);
   
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
