#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_pt_16()
{
//=========Macro generated from canvas: ROC_H_pt_16/ROC_H_pt_16
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx200[41] = {
   0,
   7.275053e-08,
   2.071765e-07,
   3.303917e-07,
   5.135682e-07,
   7.133042e-07,
   9.48584e-07,
   1.317304e-06,
   1.752861e-06,
   2.269246e-06,
   3.106744e-06,
   4.147199e-06,
   5.427929e-06,
   7.161182e-06,
   9.439768e-06,
   1.257948e-05,
   1.66093e-05,
   2.179252e-05,
   2.905109e-05,
   3.919758e-05,
   5.254747e-05,
   7.20977e-05,
   9.831322e-05,
   0.0001350514,
   0.000185714,
   0.0002644744,
   0.0003686856,
   0.0005230485,
   0.0007449607,
   0.001083676,
   0.001622593,
   0.002525773,
   0.004057121,
   0.006806742,
   0.01192357,
   0.02226722,
   0.0461345,
   0.1041086,
   0.2809611,
   0.6988182,
   1};
   Double_t Graph_fy200[41] = {
   0,
   0,
   1.481585e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   3.679723e-05,
   6.070304e-05,
   6.070304e-05,
   0.0001067711,
   0.0001269564,
   0.000179961,
   0.0002174428,
   0.0002619053,
   0.0003300678,
   0.0004338674,
   0.0006718418,
   0.0009162384,
   0.001004469,
   0.001717224,
   0.002124772,
   0.003623402,
   0.005724483,
   0.008537963,
   0.01283286,
   0.02098244,
   0.03627235,
   0.05704375,
   0.09358742,
   0.1508155,
   0.2757706,
   0.5010479,
   0.822829,
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
   
   TLatex *   tex = new TLatex(0.1648108,0.4737465,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(201);
      tex = new TLatex(0.4520379,0.7959936,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(202);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx203[41] = {
   0,
   1.290957e-07,
   3.548321e-07,
   4.605641e-07,
   5.647895e-07,
   8.533506e-07,
   1.157811e-06,
   1.459264e-06,
   1.969385e-06,
   2.594804e-06,
   3.516925e-06,
   5.081049e-06,
   6.836416e-06,
   8.911119e-06,
   1.224717e-05,
   1.607854e-05,
   2.101138e-05,
   2.652404e-05,
   3.476226e-05,
   4.706661e-05,
   6.459644e-05,
   8.918099e-05,
   0.0001222862,
   0.0001674433,
   0.0002260752,
   0.0003140313,
   0.0004319929,
   0.0006070158,
   0.0008686061,
   0.001269442,
   0.001973321,
   0.003154103,
   0.005172735,
   0.009006889,
   0.01638617,
   0.03216042,
   0.06842282,
   0.1648108,
   0.4520379,
   0.8692448,
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
   0.0001080152,
   0.0001080152,
   0.00021363,
   0.0003048348,
   0.0004073721,
   0.0004650862,
   0.0004650862,
   0.0006761784,
   0.0006761784,
   0.0007766951,
   0.0008847103,
   0.0008847103,
   0.0009848142,
   0.002106651,
   0.002517189,
   0.002926549,
   0.004991139,
   0.01435914,
   0.02778225,
   0.04562973,
   0.06918812,
   0.1072603,
   0.1783395,
   0.3737465,
   0.6959936,
   0.9502692,
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
   7.602193e-08,
   2.114403e-07,
   3.496221e-07,
   5.60777e-07,
   7.661745e-07,
   1.014521e-06,
   1.413632e-06,
   1.891669e-06,
   2.419252e-06,
   3.277507e-06,
   4.369864e-06,
   5.688105e-06,
   7.49847e-06,
   9.861103e-06,
   1.312934e-05,
   1.736831e-05,
   2.273572e-05,
   3.03397e-05,
   4.094265e-05,
   5.485246e-05,
   7.509454e-05,
   0.0001024832,
   0.0001404986,
   0.0001931474,
   0.0002746639,
   0.0003820194,
   0.00054181,
   0.0007705282,
   0.001117489,
   0.001668359,
   0.002590281,
   0.00415086,
   0.006939267,
   0.01213357,
   0.02258673,
   0.04663334,
   0.1049274,
   0.28183,
   0.6983453,
   1};
   Double_t Graph_fy204[41] = {
   0,
   0,
   1.233506e-05,
   3.063586e-05,
   3.063586e-05,
   3.063586e-05,
   3.063586e-05,
   4.4952e-05,
   4.4952e-05,
   4.4952e-05,
   4.4952e-05,
   6.301673e-05,
   6.301673e-05,
   6.301673e-05,
   8.291972e-05,
   8.291972e-05,
   0.0001212741,
   0.0001380795,
   0.0001822089,
   0.0002259089,
   0.0003209303,
   0.0004166164,
   0.0007006429,
   0.0009058295,
   0.001166525,
   0.00150672,
   0.002261212,
   0.002723698,
   0.004188532,
   0.006607256,
   0.009836192,
   0.01463302,
   0.02331313,
   0.03995704,
   0.06160798,
   0.09839769,
   0.1583355,
   0.2831823,
   0.5089093,
   0.8268278,
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
