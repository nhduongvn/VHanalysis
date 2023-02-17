#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_17()
{
//=========Macro generated from canvas: ROC_dR_HZ_17/ROC_dR_HZ_17
//=========  (Thu Feb 16 10:46:54 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_17 = new TCanvas("ROC_dR_HZ_17", "ROC_dR_HZ_17",0,0,600,600);
   ROC_dR_HZ_17->SetHighLightColor(2);
   ROC_dR_HZ_17->Range(-0.1580125,-0.006032204,1.211061,1.157622);
   ROC_dR_HZ_17->SetFillColor(0);
   ROC_dR_HZ_17->SetBorderMode(0);
   ROC_dR_HZ_17->SetBorderSize(2);
   ROC_dR_HZ_17->SetGridx();
   ROC_dR_HZ_17->SetGridy();
   ROC_dR_HZ_17->SetLeftMargin(0.15709);
   ROC_dR_HZ_17->SetRightMargin(0.1234783);
   ROC_dR_HZ_17->SetBottomMargin(0.12);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx923[28] = {
   0.1021661,
   0.2606831,
   0.3747426,
   0.4624468,
   0.5331183,
   0.5957545,
   0.6493137,
   0.6899378,
   0.7344554,
   0.7649633,
   0.7947898,
   0.8215496,
   0.8422479,
   0.8641824,
   0.8828983,
   0.8978575,
   0.9106823,
   0.9211652,
   0.9315684,
   0.9405913,
   0.9485869,
   0.9565129,
   0.9658342,
   0.9714994,
   0.9792403,
   0.9850128,
   0.9918754,
   0.9951987};
   Double_t Graph_fy923[28] = {
   0.1748632,
   0.3997397,
   0.5367504,
   0.6321294,
   0.7027591,
   0.744148,
   0.7809362,
   0.8076813,
   0.8320151,
   0.8547561,
   0.8728335,
   0.8897174,
   0.9030954,
   0.9152079,
   0.9261336,
   0.9366069,
   0.9463056,
   0.9529586,
   0.9592206,
   0.9648717,
   0.9705566,
   0.9757283,
   0.9799668,
   0.9852676,
   0.9884943,
   0.9922396,
   0.994278,
   0.997008};
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
   
   TH1F *Graph_Graph923 = new TH1F("Graph_Graph923","Tagging Only",100,0.01286287,1.084502);
   Graph_Graph923->SetMinimum(0.0926487);
   Graph_Graph923->SetMaximum(1.079222);
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
   
   TLatex *   tex = new TLatex(0.3103302,0.7266563,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(924);
      tex = new TLatex(0.4492323,0.8758741,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(925);
      tex = new TLatex(0.5416029,0.8921584,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(926);
      tex = new TLatex(0.6146554,0.9409278,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(927);
      tex = new TLatex(0.6709226,0.9710141,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(928);
      tex = new TLatex(0.7213344,0.989838,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(929);
      tex = new TLatex(0.7573765,0.9996814,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(930);
      tex = new TLatex(0.792829,1.010116,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(931);
      tex = new TLatex(0.8181028,1.017122,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(932);
      tex = new TLatex(0.8411694,1.021241,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(933);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx934[28] = {
   0.1209899,
   0.3103302,
   0.4492323,
   0.5416029,
   0.6146554,
   0.6709226,
   0.7213344,
   0.7573765,
   0.792829,
   0.8181028,
   0.8411694,
   0.8668545,
   0.8865942,
   0.9042368,
   0.9230559,
   0.9358931,
   0.9488753,
   0.9556363,
   0.9622588,
   0.9652726,
   0.9711416,
   0.9750789,
   0.9810951,
   0.9854006,
   0.9886029,
   0.9921454,
   0.9948783,
   0.9972398};
   Double_t Graph_fy934[28] = {
   0.2992035,
   0.6266563,
   0.7758741,
   0.8521584,
   0.9009278,
   0.9310141,
   0.949838,
   0.9596814,
   0.9701158,
   0.9771225,
   0.9812407,
   0.9845947,
   0.9872771,
   0.9910471,
   0.9919387,
   0.9926656,
   0.9947495,
   0.9953091,
   0.9957317,
   0.9969028,
   0.9978582,
   0.9979194,
   0.9980093,
   0.9980942,
   0.998822,
   1,
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
   
   TH1F *Graph_Graph934 = new TH1F("Graph_Graph934","Mass-Matching Prioritized",100,0.03336489,1.084865);
   Graph_Graph934->SetMinimum(0.2291238);
   Graph_Graph934->SetMaximum(1.07008);
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
   0.101826,
   0.2608489,
   0.3746787,
   0.4621218,
   0.5325948,
   0.5955243,
   0.6490437,
   0.6899786,
   0.7346532,
   0.765127,
   0.7947934,
   0.8214293,
   0.8422258,
   0.8641696,
   0.8829559,
   0.8977808,
   0.9105678,
   0.9210872,
   0.9315161,
   0.9405351,
   0.9485772,
   0.956574,
   0.9658902,
   0.9714978,
   0.9791871,
   0.9851214,
   0.9918915,
   0.9952826};
   Double_t Graph_fy935[28] = {
   0.1759441,
   0.3992662,
   0.5356445,
   0.6309431,
   0.7014973,
   0.7436796,
   0.7803182,
   0.8075703,
   0.8321575,
   0.8548648,
   0.8734635,
   0.8906336,
   0.903964,
   0.9158287,
   0.9268806,
   0.9372565,
   0.9466608,
   0.9530758,
   0.9594179,
   0.9647776,
   0.9705551,
   0.9759311,
   0.9798944,
   0.985181,
   0.9886152,
   0.9923432,
   0.9943308,
   0.9970054};
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
   
   TH1F *Graph_Graph935 = new TH1F("Graph_Graph935","Tagging Prioritized",100,0.01248033,1.084628);
   Graph_Graph935->SetMinimum(0.09383793);
   Graph_Graph935->SetMaximum(1.079112);
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
   multigraph->GetXaxis()->SetLimits(0.0570553, 1.042011);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_17->Modified();
   ROC_dR_HZ_17->cd();
   ROC_dR_HZ_17->SetSelected(ROC_dR_HZ_17);
}
