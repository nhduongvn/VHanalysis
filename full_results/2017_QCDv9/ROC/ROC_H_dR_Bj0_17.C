#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_17/ROC_H_dR_Bj0_17
//=========  (Fri Jan 27 13:04:52 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_17 = new TCanvas("ROC_H_dR_Bj0_17", "ROC_H_dR_Bj0_17",0,0,600,600);
   ROC_H_dR_Bj0_17->SetHighLightColor(2);
   ROC_H_dR_Bj0_17->Range(-0.2901601,-0.1615385,1.238677,1.184615);
   ROC_H_dR_Bj0_17->SetFillColor(0);
   ROC_H_dR_Bj0_17->SetBorderMode(0);
   ROC_H_dR_Bj0_17->SetBorderSize(2);
   ROC_H_dR_Bj0_17->SetGridx();
   ROC_H_dR_Bj0_17->SetGridy();
   ROC_H_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx49[30] = {
   0,
   0.02476152,
   0.1289217,
   0.2461348,
   0.354644,
   0.4492419,
   0.5275221,
   0.5946567,
   0.6530142,
   0.7000174,
   0.7415027,
   0.7837843,
   0.8169751,
   0.8474461,
   0.8801318,
   0.9061498,
   0.927734,
   0.9463216,
   0.9599581,
   0.9705276,
   0.9783097,
   0.9837411,
   0.9880296,
   0.9910085,
   0.9932774,
   0.9962324,
   0.9981603,
   0.998932,
   0.9995561,
   0.9999013};
   Double_t Graph_fy49[30] = {
   0,
   0.02224909,
   0.1339113,
   0.2812783,
   0.4185252,
   0.5367657,
   0.6264164,
   0.6926215,
   0.7497238,
   0.7934708,
   0.8297539,
   0.857563,
   0.8875239,
   0.910835,
   0.9328302,
   0.9521837,
   0.9701707,
   0.9816437,
   0.9883677,
   0.9926558,
   0.9950648,
   0.9970677,
   0.9981553,
   0.9987681,
   0.9991019,
   0.9994185,
   0.9998245,
   0.9999655,
   0.9999828,
   1};
   TGraph *graph = new TGraph(30,Graph_fx49,Graph_fy49);
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
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","Tagging Only",100,0,1.099891);
   Graph_Graph49->SetMinimum(0);
   Graph_Graph49->SetMaximum(1.1);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph49->SetLineColor(ci);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetTitleOffset(1);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
   TLatex *   tex = new TLatex(0.319171,0.429583,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(50);
      tex = new TLatex(0.5402135,0.7032773,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(51);
      tex = new TLatex(0.7025669,0.8816578,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(52);
      tex = new TLatex(0.7984799,0.9249416,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(53);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx54[30] = {
   0,
   0.07683783,
   0.319171,
   0.5402135,
   0.7025669,
   0.7984799,
   0.870049,
   0.9132989,
   0.9363035,
   0.9602783,
   0.9799808,
   0.9842484,
   0.9881496,
   0.9901122,
   0.9914669,
   0.9929892,
   0.9953736,
   0.9957702,
   0.9993667,
   0.9994385,
   0.9996177,
   0.9998201,
   0.9998252,
   0.9998287,
   0.9998331,
   0.9998335,
   0.9998338,
   0.9998639,
   0.999864,
   0.999864};
   Double_t Graph_fy54[30] = {
   0,
   0.06544744,
   0.329583,
   0.6032773,
   0.7816578,
   0.8849416,
   0.9329783,
   0.9558664,
   0.9733086,
   0.9824187,
   0.9892513,
   0.9940976,
   0.9963751,
   0.9965837,
   0.9977225,
   0.9980006,
   0.9990003,
   0.9995002,
   0.9995002,
   0.9995002,
   0.9995002,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx54,Graph_fy54);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph54 = new TH1F("Graph_Graph54","Mass-Matching Prioritized",100,0,1.09985);
   Graph_Graph54->SetMinimum(0);
   Graph_Graph54->SetMaximum(1.1);
   Graph_Graph54->SetDirectory(0);
   Graph_Graph54->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph54->SetLineColor(ci);
   Graph_Graph54->GetXaxis()->SetLabelFont(42);
   Graph_Graph54->GetXaxis()->SetTitleOffset(1);
   Graph_Graph54->GetXaxis()->SetTitleFont(42);
   Graph_Graph54->GetYaxis()->SetLabelFont(42);
   Graph_Graph54->GetYaxis()->SetTitleFont(42);
   Graph_Graph54->GetZaxis()->SetLabelFont(42);
   Graph_Graph54->GetZaxis()->SetTitleOffset(1);
   Graph_Graph54->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph54);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx55[30] = {
   0,
   0.02479929,
   0.1293486,
   0.2466649,
   0.355154,
   0.4497921,
   0.5274014,
   0.5943279,
   0.6525896,
   0.6999704,
   0.7416553,
   0.7836507,
   0.8170129,
   0.8474386,
   0.8799448,
   0.9059697,
   0.9279581,
   0.9467074,
   0.9603559,
   0.970903,
   0.9786011,
   0.9840179,
   0.988256,
   0.9911951,
   0.9934296,
   0.9963307,
   0.9982158,
   0.9989548,
   0.9995671,
   0.9999034};
   Double_t Graph_fy55[30] = {
   0,
   0.0226452,
   0.1324966,
   0.2794149,
   0.4134547,
   0.5290923,
   0.6178465,
   0.6869843,
   0.7442088,
   0.788076,
   0.8237313,
   0.8522266,
   0.8826739,
   0.9067796,
   0.9288236,
   0.949106,
   0.9684786,
   0.9804632,
   0.9874503,
   0.9921234,
   0.9945177,
   0.9967614,
   0.9980722,
   0.9988546,
   0.9991853,
   0.9994716,
   0.9998494,
   0.9999704,
   0.9999852,
   1};
   graph = new TGraph(30,Graph_fx55,Graph_fy55);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph55 = new TH1F("Graph_Graph55","Tagging Prioritized",100,0,1.099894);
   Graph_Graph55->SetMinimum(0);
   Graph_Graph55->SetMaximum(1.1);
   Graph_Graph55->SetDirectory(0);
   Graph_Graph55->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph55->SetLineColor(ci);
   Graph_Graph55->GetXaxis()->SetLabelFont(42);
   Graph_Graph55->GetXaxis()->SetTitleOffset(1);
   Graph_Graph55->GetXaxis()->SetTitleFont(42);
   Graph_Graph55->GetYaxis()->SetLabelFont(42);
   Graph_Graph55->GetYaxis()->SetTitleFont(42);
   Graph_Graph55->GetZaxis()->SetLabelFont(42);
   Graph_Graph55->GetZaxis()->SetTitleOffset(1);
   Graph_Graph55->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph55);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999517, 1.049899);
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
   ROC_H_dR_Bj0_17->Modified();
   ROC_H_dR_Bj0_17->cd();
   ROC_H_dR_Bj0_17->SetSelected(ROC_H_dR_Bj0_17);
}
