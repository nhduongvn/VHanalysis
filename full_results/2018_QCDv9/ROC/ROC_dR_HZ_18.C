#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_18()
{
//=========Macro generated from canvas: ROC_dR_HZ_18/ROC_dR_HZ_18
//=========  (Sun Feb 19 15:10:33 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_18 = new TCanvas("ROC_dR_HZ_18", "ROC_dR_HZ_18",0,0,600,600);
   ROC_dR_HZ_18->SetHighLightColor(2);
   ROC_dR_HZ_18->Range(-0.1640276,-0.00881977,1.211915,1.158059);
   ROC_dR_HZ_18->SetFillColor(0);
   ROC_dR_HZ_18->SetBorderMode(0);
   ROC_dR_HZ_18->SetBorderSize(2);
   ROC_dR_HZ_18->SetGridx();
   ROC_dR_HZ_18->SetGridy();
   ROC_dR_HZ_18->SetLeftMargin(0.15709);
   ROC_dR_HZ_18->SetRightMargin(0.1234783);
   ROC_dR_HZ_18->SetBottomMargin(0.12);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx801[28] = {
   0.09730872,
   0.2503411,
   0.3658173,
   0.4509614,
   0.5242413,
   0.5901108,
   0.6388819,
   0.6836138,
   0.724327,
   0.7580807,
   0.789994,
   0.8157492,
   0.8394139,
   0.8579433,
   0.8744491,
   0.8909945,
   0.9040521,
   0.9204344,
   0.9305789,
   0.9430713,
   0.9532137,
   0.96059,
   0.9669073,
   0.9730282,
   0.9802289,
   0.9858442,
   0.9914365,
   0.9949607};
   Double_t Graph_fy801[28] = {
   0.1731085,
   0.4004516,
   0.5325809,
   0.6220771,
   0.6856911,
   0.732727,
   0.7751493,
   0.8089846,
   0.8363109,
   0.8567609,
   0.8775611,
   0.8965065,
   0.9101202,
   0.9205517,
   0.9303363,
   0.9399785,
   0.9467791,
   0.9523751,
   0.9592829,
   0.9660956,
   0.970807,
   0.9754747,
   0.9808385,
   0.983751,
   0.9881004,
   0.9910259,
   0.9941294,
   0.9959689};
   TGraph *graph = new TGraph(28,Graph_fx801,Graph_fy801);
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
   
   TH1F *Graph_Graph801 = new TH1F("Graph_Graph801","Tagging Only",100,0.007543529,1.084726);
   Graph_Graph801->SetMinimum(0.09082247);
   Graph_Graph801->SetMaximum(1.078255);
   Graph_Graph801->SetDirectory(0);
   Graph_Graph801->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph801->SetLineColor(ci);
   Graph_Graph801->GetXaxis()->SetLabelFont(42);
   Graph_Graph801->GetXaxis()->SetTitleOffset(1);
   Graph_Graph801->GetXaxis()->SetTitleFont(42);
   Graph_Graph801->GetYaxis()->SetLabelFont(42);
   Graph_Graph801->GetYaxis()->SetTitleFont(42);
   Graph_Graph801->GetZaxis()->SetLabelFont(42);
   Graph_Graph801->GetZaxis()->SetTitleOffset(1);
   Graph_Graph801->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph801);
   
   TLatex *   tex = new TLatex(0.2785676,0.7157954,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(802);
      tex = new TLatex(0.3892437,0.8848989,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(803);
      tex = new TLatex(0.4963093,0.9013559,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(804);
      tex = new TLatex(0.566138,0.9480868,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(805);
      tex = new TLatex(0.6568589,0.9690934,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(806);
      tex = new TLatex(0.7042431,0.9899996,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(807);
      tex = new TLatex(0.7528384,1.001533,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(808);
      tex = new TLatex(0.783387,1.009668,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(809);
      tex = new TLatex(0.8088283,1.015339,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(810);
      tex = new TLatex(0.841622,1.02131,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(811);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx812[28] = {
   0.1016948,
   0.2785676,
   0.3892437,
   0.4963093,
   0.566138,
   0.6568589,
   0.7042431,
   0.7528384,
   0.783387,
   0.8088283,
   0.841622,
   0.8635192,
   0.8813187,
   0.8981009,
   0.9110488,
   0.924293,
   0.9325465,
   0.9416493,
   0.9481085,
   0.9556013,
   0.9581334,
   0.96445,
   0.9671644,
   0.9704936,
   0.9746427,
   0.9779744,
   0.9947273,
   0.9970204};
   Double_t Graph_fy812[28] = {
   0.2728172,
   0.6157954,
   0.7848989,
   0.8613559,
   0.9080868,
   0.9290934,
   0.9499996,
   0.9615334,
   0.9696683,
   0.9753391,
   0.9813101,
   0.9850846,
   0.9895235,
   0.9919957,
   0.9938072,
   0.9945935,
   0.9954164,
   0.9965784,
   0.9966883,
   0.9966883,
   0.9966883,
   0.9978295,
   0.9989958,
   0.9990896,
   0.9998901,
   0.9998901,
   1,
   1};
   graph = new TGraph(28,Graph_fx812,Graph_fy812);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph812 = new TH1F("Graph_Graph812","Mass-Matching Prioritized",100,0.01216222,1.086553);
   Graph_Graph812->SetMinimum(0.200099);
   Graph_Graph812->SetMaximum(1.072718);
   Graph_Graph812->SetDirectory(0);
   Graph_Graph812->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph812->SetLineColor(ci);
   Graph_Graph812->GetXaxis()->SetLabelFont(42);
   Graph_Graph812->GetXaxis()->SetTitleOffset(1);
   Graph_Graph812->GetXaxis()->SetTitleFont(42);
   Graph_Graph812->GetYaxis()->SetLabelFont(42);
   Graph_Graph812->GetYaxis()->SetTitleFont(42);
   Graph_Graph812->GetZaxis()->SetLabelFont(42);
   Graph_Graph812->GetZaxis()->SetTitleOffset(1);
   Graph_Graph812->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph812);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx813[28] = {
   0.09711448,
   0.2491506,
   0.3643663,
   0.449653,
   0.5228759,
   0.5889792,
   0.6378603,
   0.6828963,
   0.723722,
   0.7574602,
   0.789343,
   0.8153469,
   0.8390092,
   0.8574375,
   0.8740255,
   0.8905839,
   0.9037575,
   0.9201056,
   0.9303412,
   0.9427499,
   0.9530144,
   0.9603981,
   0.9667177,
   0.9728743,
   0.9801284,
   0.9857664,
   0.9913615,
   0.9949272};
   Double_t Graph_fy813[28] = {
   0.1725768,
   0.399286,
   0.530002,
   0.6217527,
   0.6858843,
   0.7340031,
   0.7749463,
   0.8084825,
   0.8362634,
   0.8569102,
   0.877729,
   0.896883,
   0.9105624,
   0.9208974,
   0.9304474,
   0.9401829,
   0.946941,
   0.9525062,
   0.9592445,
   0.965944,
   0.9706011,
   0.9755966,
   0.9809375,
   0.9838911,
   0.9881479,
   0.9910339,
   0.9942782,
   0.9960717};
   graph = new TGraph(28,Graph_fx813,Graph_fy813);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph813 = new TH1F("Graph_Graph813","Tagging Prioritized",100,0.007333206,1.084708);
   Graph_Graph813->SetMinimum(0.09022736);
   Graph_Graph813->SetMaximum(1.078421);
   Graph_Graph813->SetDirectory(0);
   Graph_Graph813->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph813->SetLineColor(ci);
   Graph_Graph813->GetXaxis()->SetLabelFont(42);
   Graph_Graph813->GetXaxis()->SetTitleOffset(1);
   Graph_Graph813->GetXaxis()->SetTitleFont(42);
   Graph_Graph813->GetYaxis()->SetLabelFont(42);
   Graph_Graph813->GetYaxis()->SetTitleFont(42);
   Graph_Graph813->GetZaxis()->SetLabelFont(42);
   Graph_Graph813->GetZaxis()->SetTitleOffset(1);
   Graph_Graph813->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph813);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.05211918, 1.042016);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 3.15","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_18->Modified();
   ROC_dR_HZ_18->cd();
   ROC_dR_HZ_18->SetSelected(ROC_dR_HZ_18);
}
