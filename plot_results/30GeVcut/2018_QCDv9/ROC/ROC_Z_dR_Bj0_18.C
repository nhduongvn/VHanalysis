#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_18/ROC_Z_dR_Bj0_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_18 = new TCanvas("ROC_Z_dR_Bj0_18", "ROC_Z_dR_Bj0_18",0,0,600,600);
   ROC_Z_dR_Bj0_18->SetHighLightColor(2);
   ROC_Z_dR_Bj0_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_18->SetFillColor(0);
   ROC_Z_dR_Bj0_18->SetBorderMode(0);
   ROC_Z_dR_Bj0_18->SetBorderSize(2);
   ROC_Z_dR_Bj0_18->SetGridx();
   ROC_Z_dR_Bj0_18->SetGridy();
   ROC_Z_dR_Bj0_18->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_18->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_18->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_18->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx158[30] = {
   0,
   0.04367786,
   0.2222824,
   0.3792903,
   0.499909,
   0.5878166,
   0.6521835,
   0.7097506,
   0.7578625,
   0.7936025,
   0.8271613,
   0.8576819,
   0.8834676,
   0.903868,
   0.9224587,
   0.9435752,
   0.9611874,
   0.9707912,
   0.9806524,
   0.9854532,
   0.9905526,
   0.993467,
   0.9954687,
   0.9972521,
   0.9979335,
   0.9988235,
   0.9992956,
   0.9997957,
   0.9999307,
   0.9999865};
   Double_t Graph_fy158[30] = {
   0,
   0.04450359,
   0.216968,
   0.4013929,
   0.5458715,
   0.6525857,
   0.7306628,
   0.7862354,
   0.8273993,
   0.8617377,
   0.8840821,
   0.9043166,
   0.9224741,
   0.9397478,
   0.9560433,
   0.9689637,
   0.9818093,
   0.9888364,
   0.9933303,
   0.9964731,
   0.9975259,
   0.9985063,
   0.9991708,
   0.9993025,
   0.9996293,
   0.9998508,
   0.9998728,
   0.9998728,
   0.9998838,
   1};
   TGraph *graph = new TGraph(30,Graph_fx158,Graph_fy158);
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
   
   TH1F *Graph_Graph158 = new TH1F("Graph_Graph158","Tagging Only",100,0,1.099985);
   Graph_Graph158->SetMinimum(0);
   Graph_Graph158->SetMaximum(1.1);
   Graph_Graph158->SetDirectory(0);
   Graph_Graph158->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph158->SetLineColor(ci);
   Graph_Graph158->GetXaxis()->SetLabelFont(42);
   Graph_Graph158->GetXaxis()->SetTitleOffset(1);
   Graph_Graph158->GetXaxis()->SetTitleFont(42);
   Graph_Graph158->GetYaxis()->SetLabelFont(42);
   Graph_Graph158->GetYaxis()->SetTitleFont(42);
   Graph_Graph158->GetZaxis()->SetLabelFont(42);
   Graph_Graph158->GetZaxis()->SetTitleOffset(1);
   Graph_Graph158->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph158);
   
   TLatex *   tex = new TLatex(0.3622694,0.4980943,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(159);
      tex = new TLatex(0.5797883,0.7873119,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(160);
      tex = new TLatex(0.7141643,0.8797826,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(161);
      tex = new TLatex(0.8059929,0.9640345,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(162);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx163[30] = {
   0,
   0.06467579,
   0.3622694,
   0.5797883,
   0.7141643,
   0.8059929,
   0.8763537,
   0.9182032,
   0.9435857,
   0.9531046,
   0.9688011,
   0.9741928,
   0.9813757,
   0.9886608,
   0.9894816,
   0.9906825,
   0.9919712,
   0.9958339,
   0.9991004,
   0.9992077,
   0.999237,
   0.9995223,
   0.9995768,
   0.999585,
   0.999635,
   0.9999982,
   0.9999988,
   0.9999993,
   0.9999997,
   0.9999999};
   Double_t Graph_fy163[30] = {
   0,
   0.06909575,
   0.3980943,
   0.6873119,
   0.8397826,
   0.9240345,
   0.9611255,
   0.97876,
   0.987622,
   0.9929789,
   0.9944744,
   0.9964252,
   0.9973262,
   0.9980492,
   0.9990494,
   0.9994752,
   0.9995247,
   0.9995247,
   0.9999009,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx163,Graph_fy163);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph163 = new TH1F("Graph_Graph163","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph163->SetMinimum(0);
   Graph_Graph163->SetMaximum(1.1);
   Graph_Graph163->SetDirectory(0);
   Graph_Graph163->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph163->SetLineColor(ci);
   Graph_Graph163->GetXaxis()->SetLabelFont(42);
   Graph_Graph163->GetXaxis()->SetTitleOffset(1);
   Graph_Graph163->GetXaxis()->SetTitleFont(42);
   Graph_Graph163->GetYaxis()->SetLabelFont(42);
   Graph_Graph163->GetYaxis()->SetTitleFont(42);
   Graph_Graph163->GetZaxis()->SetLabelFont(42);
   Graph_Graph163->GetZaxis()->SetTitleOffset(1);
   Graph_Graph163->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph163);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx164[30] = {
   0,
   0.04415755,
   0.2225817,
   0.3792916,
   0.4994244,
   0.5872854,
   0.6519006,
   0.7090528,
   0.7574917,
   0.7931302,
   0.8268969,
   0.8573108,
   0.8830731,
   0.9039185,
   0.9225615,
   0.9436052,
   0.9611325,
   0.9708285,
   0.9806386,
   0.9855437,
   0.990608,
   0.9935494,
   0.995486,
   0.9972454,
   0.9979171,
   0.9987921,
   0.9992953,
   0.9997919,
   0.9999256,
   0.9999867};
   Double_t Graph_fy164[30] = {
   0,
   0.04489046,
   0.2172712,
   0.4022154,
   0.5470114,
   0.6538352,
   0.7318996,
   0.787024,
   0.8279,
   0.8619809,
   0.8841313,
   0.9040002,
   0.9222168,
   0.9394577,
   0.955532,
   0.9688695,
   0.9815669,
   0.9886893,
   0.9933077,
   0.9964772,
   0.9975965,
   0.9985424,
   0.9991909,
   0.9993194,
   0.9996383,
   0.9998544,
   0.9998759,
   0.9998759,
   0.9998866,
   1};
   graph = new TGraph(30,Graph_fx164,Graph_fy164);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph164 = new TH1F("Graph_Graph164","Tagging Prioritized",100,0,1.099985);
   Graph_Graph164->SetMinimum(0);
   Graph_Graph164->SetMaximum(1.1);
   Graph_Graph164->SetDirectory(0);
   Graph_Graph164->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph164->SetLineColor(ci);
   Graph_Graph164->GetXaxis()->SetLabelFont(42);
   Graph_Graph164->GetXaxis()->SetTitleOffset(1);
   Graph_Graph164->GetXaxis()->SetTitleFont(42);
   Graph_Graph164->GetYaxis()->SetLabelFont(42);
   Graph_Graph164->GetYaxis()->SetTitleFont(42);
   Graph_Graph164->GetZaxis()->SetLabelFont(42);
   Graph_Graph164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph164->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph164);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_Z_dR_Bj0_18->Modified();
   ROC_Z_dR_Bj0_18->cd();
   ROC_Z_dR_Bj0_18->SetSelected(ROC_Z_dR_Bj0_18);
}
