#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_18()
{
//=========Macro generated from canvas: ROC_dR_HZ_18/ROC_dR_HZ_18
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_18 = new TCanvas("ROC_dR_HZ_18", "ROC_dR_HZ_18",0,0,600,600);
   ROC_dR_HZ_18->SetHighLightColor(2);
   ROC_dR_HZ_18->Range(-0.1640585,-0.00881977,1.212193,1.158059);
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
   
   Double_t Graph_fx923[28] = {
   0.09734041,
   0.2520659,
   0.3678653,
   0.4535887,
   0.526814,
   0.5928098,
   0.6411609,
   0.6859388,
   0.7267074,
   0.7603202,
   0.7923355,
   0.8176217,
   0.841122,
   0.8595344,
   0.8760525,
   0.8924962,
   0.9063431,
   0.9229014,
   0.9328337,
   0.9453453,
   0.9533622,
   0.9607658,
   0.9670358,
   0.9730056,
   0.9802529,
   0.9858283,
   0.9916789,
   0.9951565};
   Double_t Graph_fy923[28] = {
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
   TGraph *graph = new TGraph(28,Graph_fx923,Graph_fy923);
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
   
   TH1F *Graph_Graph923 = new TH1F("Graph_Graph923","Tagging Only",100,0.007558804,1.084938);
   Graph_Graph923->SetMinimum(0.09082247);
   Graph_Graph923->SetMaximum(1.078255);
   Graph_Graph923->SetDirectory(0);
   Graph_Graph923->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph923->SetLineColor(ci);
   Graph_Graph923->GetXaxis()->SetLabelFont(42);
   Graph_Graph923->GetXaxis()->SetTitleOffset(1);
   Graph_Graph923->GetXaxis()->SetTitleFont(42);
   Graph_Graph923->GetYaxis()->SetLabelFont(42);
   Graph_Graph923->GetYaxis()->SetTitleFont(42);
   Graph_Graph923->GetZaxis()->SetLabelFont(42);
   Graph_Graph923->GetZaxis()->SetTitleOffset(1);
   Graph_Graph923->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph923);
   
   TLatex *   tex = new TLatex(0.2821667,0.7157954,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(924);
      tex = new TLatex(0.3912008,0.8848989,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(925);
      tex = new TLatex(0.4984097,0.9013559,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(926);
      tex = new TLatex(0.5671405,0.9480868,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(927);
      tex = new TLatex(0.6576339,0.9690934,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(928);
      tex = new TLatex(0.7036868,0.9899996,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(929);
      tex = new TLatex(0.7522023,1.001533,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(930);
      tex = new TLatex(0.7826693,1.009668,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(931);
      tex = new TLatex(0.8088989,1.015339,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(932);
      tex = new TLatex(0.8404996,1.02131,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(933);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx934[28] = {
   0.1017428,
   0.2821667,
   0.3912008,
   0.4984097,
   0.5671405,
   0.6576339,
   0.7036868,
   0.7522023,
   0.7826693,
   0.8088989,
   0.8404996,
   0.8610273,
   0.8776157,
   0.8939058,
   0.9067817,
   0.9192533,
   0.9286176,
   0.9403981,
   0.9464381,
   0.9536383,
   0.9563336,
   0.9627773,
   0.9658278,
   0.9689684,
   0.974217,
   0.9787061,
   0.9951499,
   0.9972503};
   Double_t Graph_fy934[28] = {
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
   graph = new TGraph(28,Graph_fx934,Graph_fy934);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph934 = new TH1F("Graph_Graph934","Mass-Matching Prioritized",100,0.01219206,1.086801);
   Graph_Graph934->SetMinimum(0.200099);
   Graph_Graph934->SetMaximum(1.072718);
   Graph_Graph934->SetDirectory(0);
   Graph_Graph934->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph934->SetLineColor(ci);
   Graph_Graph934->GetXaxis()->SetLabelFont(42);
   Graph_Graph934->GetXaxis()->SetTitleOffset(1);
   Graph_Graph934->GetXaxis()->SetTitleFont(42);
   Graph_Graph934->GetYaxis()->SetLabelFont(42);
   Graph_Graph934->GetYaxis()->SetTitleFont(42);
   Graph_Graph934->GetZaxis()->SetLabelFont(42);
   Graph_Graph934->GetZaxis()->SetTitleOffset(1);
   Graph_Graph934->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph934);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx935[28] = {
   0.09714221,
   0.2508028,
   0.3664883,
   0.4523694,
   0.5255324,
   0.5916917,
   0.6401162,
   0.6851842,
   0.7260461,
   0.7596841,
   0.7916805,
   0.8171869,
   0.8406736,
   0.8590134,
   0.8756324,
   0.8921215,
   0.906076,
   0.9225898,
   0.9326117,
   0.9450384,
   0.9531976,
   0.960603,
   0.9668754,
   0.9728788,
   0.9801709,
   0.9857656,
   0.9916084,
   0.9951234};
   Double_t Graph_fy935[28] = {
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
   graph = new TGraph(28,Graph_fx935,Graph_fy935);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph935 = new TH1F("Graph_Graph935","Tagging Prioritized",100,0.007344095,1.084922);
   Graph_Graph935->SetMinimum(0.09022736);
   Graph_Graph935->SetMaximum(1.078421);
   Graph_Graph935->SetDirectory(0);
   Graph_Graph935->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph935->SetLineColor(ci);
   Graph_Graph935->GetXaxis()->SetLabelFont(42);
   Graph_Graph935->GetXaxis()->SetTitleOffset(1);
   Graph_Graph935->GetXaxis()->SetTitleFont(42);
   Graph_Graph935->GetYaxis()->SetLabelFont(42);
   Graph_Graph935->GetYaxis()->SetTitleFont(42);
   Graph_Graph935->GetZaxis()->SetLabelFont(42);
   Graph_Graph935->GetZaxis()->SetTitleOffset(1);
   Graph_Graph935->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph935);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.05213681, 1.042256);
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
