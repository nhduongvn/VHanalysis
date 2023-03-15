#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_17/ROC_H_dR_Bj1_17
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_17 = new TCanvas("ROC_H_dR_Bj1_17", "ROC_H_dR_Bj1_17",0,0,600,600);
   ROC_H_dR_Bj1_17->SetHighLightColor(2);
   ROC_H_dR_Bj1_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_17->SetFillColor(0);
   ROC_H_dR_Bj1_17->SetBorderMode(0);
   ROC_H_dR_Bj1_17->SetBorderSize(2);
   ROC_H_dR_Bj1_17->SetGridx();
   ROC_H_dR_Bj1_17->SetGridy();
   ROC_H_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2007[30] = {
   0,
   0.02172017,
   0.1156975,
   0.2273453,
   0.335916,
   0.4329596,
   0.5119441,
   0.5787869,
   0.6366405,
   0.689091,
   0.7332898,
   0.7744783,
   0.8114434,
   0.8424565,
   0.8703263,
   0.8977185,
   0.9245178,
   0.9436465,
   0.9592854,
   0.9694128,
   0.9771303,
   0.9836373,
   0.987423,
   0.9918034,
   0.9954535,
   0.9977,
   0.998671,
   0.9993892,
   0.9996416,
   0.9997403};
   Double_t Graph_fy2007[30] = {
   0,
   0.02084585,
   0.1219858,
   0.2612558,
   0.3929255,
   0.4992575,
   0.5887434,
   0.6623983,
   0.721368,
   0.7676413,
   0.8068525,
   0.8442148,
   0.8734294,
   0.9011267,
   0.9274477,
   0.9499457,
   0.9688965,
   0.9798182,
   0.9874059,
   0.9923402,
   0.9952855,
   0.9969718,
   0.9978322,
   0.9986787,
   0.999243,
   0.9996834,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx2007,Graph_fy2007);
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
   
   TH1F *Graph_Graph2007 = new TH1F("Graph_Graph2007","Tagging Only",100,0,1.099714);
   Graph_Graph2007->SetMinimum(0);
   Graph_Graph2007->SetMaximum(1.1);
   Graph_Graph2007->SetDirectory(0);
   Graph_Graph2007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2007->SetLineColor(ci);
   Graph_Graph2007->GetXaxis()->SetLabelFont(42);
   Graph_Graph2007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2007->GetXaxis()->SetTitleFont(42);
   Graph_Graph2007->GetYaxis()->SetLabelFont(42);
   Graph_Graph2007->GetYaxis()->SetTitleFont(42);
   Graph_Graph2007->GetZaxis()->SetLabelFont(42);
   Graph_Graph2007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2007->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2007);
   
   TLatex *   tex = new TLatex(0.1156975,0.1819858,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2008);
      tex = new TLatex(0.2273453,0.3212558,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2009);
      tex = new TLatex(0.335916,0.4529255,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2010);
      tex = new TLatex(0.4329596,0.5592575,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2011);
      tex = new TLatex(0.5119441,0.6487434,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2012);
      tex = new TLatex(0.5787869,0.7223983,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2013);
      tex = new TLatex(0.6366405,0.781368,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2014);
      tex = new TLatex(0.689091,0.8276413,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2015);
      tex = new TLatex(0.7332898,0.8668525,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2016);
      tex = new TLatex(0.7744783,0.9042148,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2017);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2018[30] = {
   0,
   1.901977e-07,
   0.0448112,
   0.1392764,
   0.2306331,
   0.3306702,
   0.4128338,
   0.4900063,
   0.5643235,
   0.6247286,
   0.6720856,
   0.7356667,
   0.7953364,
   0.829684,
   0.8741659,
   0.906888,
   0.9384332,
   0.9601994,
   0.9746746,
   0.9834608,
   0.9882172,
   0.9931666,
   0.9980438,
   0.9989616,
   0.9995384,
   0.999779,
   0.9999627,
   0.9999961,
   0.9999997,
   0.9999999};
   Double_t Graph_fy2018[30] = {
   0,
   0,
   0.01470816,
   0.08133372,
   0.1880102,
   0.3493684,
   0.4982093,
   0.631665,
   0.7382733,
   0.8104103,
   0.8588379,
   0.8931832,
   0.924999,
   0.9474699,
   0.9625257,
   0.9767341,
   0.9880823,
   0.9938326,
   0.996236,
   0.9992916,
   0.9993611,
   0.9999305,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx2018,Graph_fy2018);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2018 = new TH1F("Graph_Graph2018","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2018->SetMinimum(0);
   Graph_Graph2018->SetMaximum(1.1);
   Graph_Graph2018->SetDirectory(0);
   Graph_Graph2018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2018->SetLineColor(ci);
   Graph_Graph2018->GetXaxis()->SetLabelFont(42);
   Graph_Graph2018->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2018->GetXaxis()->SetTitleFont(42);
   Graph_Graph2018->GetYaxis()->SetLabelFont(42);
   Graph_Graph2018->GetYaxis()->SetTitleFont(42);
   Graph_Graph2018->GetZaxis()->SetLabelFont(42);
   Graph_Graph2018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2018->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2018);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2019[30] = {
   0,
   0.02196081,
   0.1164284,
   0.2277593,
   0.3360715,
   0.4328462,
   0.5117542,
   0.5783456,
   0.6363705,
   0.6892457,
   0.732803,
   0.7743125,
   0.8111689,
   0.8421515,
   0.870076,
   0.8978047,
   0.9248236,
   0.9437159,
   0.9593849,
   0.9693661,
   0.9769891,
   0.983603,
   0.9873653,
   0.9919023,
   0.9955173,
   0.9977306,
   0.9986986,
   0.9994032,
   0.9996507,
   0.999747};
   Double_t Graph_fy2019[30] = {
   0,
   0.02176383,
   0.1227482,
   0.2607644,
   0.3921688,
   0.5001501,
   0.5898991,
   0.6607356,
   0.7182955,
   0.7651381,
   0.804577,
   0.8436604,
   0.8731665,
   0.9012942,
   0.9277805,
   0.9494735,
   0.9690031,
   0.9796797,
   0.9874695,
   0.9922425,
   0.9953416,
   0.9971337,
   0.9979604,
   0.998716,
   0.9992296,
   0.9997136,
   0.9999852,
   0.9999852,
   1,
   1};
   graph = new TGraph(30,Graph_fx2019,Graph_fy2019);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2019 = new TH1F("Graph_Graph2019","Tagging Prioritized",100,0,1.099722);
   Graph_Graph2019->SetMinimum(0);
   Graph_Graph2019->SetMaximum(1.1);
   Graph_Graph2019->SetDirectory(0);
   Graph_Graph2019->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2019->SetLineColor(ci);
   Graph_Graph2019->GetXaxis()->SetLabelFont(42);
   Graph_Graph2019->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2019->GetXaxis()->SetTitleFont(42);
   Graph_Graph2019->GetYaxis()->SetLabelFont(42);
   Graph_Graph2019->GetYaxis()->SetTitleFont(42);
   Graph_Graph2019->GetZaxis()->SetLabelFont(42);
   Graph_Graph2019->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2019->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2019);
   
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
   ROC_H_dR_Bj1_17->Modified();
   ROC_H_dR_Bj1_17->cd();
   ROC_H_dR_Bj1_17->SetSelected(ROC_H_dR_Bj1_17);
}
