#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_17()
{
//=========Macro generated from canvas: ROC_dR_HZ_17/ROC_dR_HZ_17
//=========  (Tue Jan 17 16:04:08 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_17 = new TCanvas("ROC_dR_HZ_17", "ROC_dR_HZ_17",0,0,600,600);
   ROC_dR_HZ_17->SetHighLightColor(2);
   ROC_dR_HZ_17->Range(0,0,1,1);
   ROC_dR_HZ_17->SetFillColor(0);
   ROC_dR_HZ_17->SetBorderMode(0);
   ROC_dR_HZ_17->SetBorderSize(2);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx85[60] = {
   0,
   0.000107532,
   0.0005805038,
   0.002271335,
   0.003942183,
   0.006254766,
   0.009008893,
   0.012751,
   0.01624245,
   0.01979193,
   0.02507276,
   0.03092747,
   0.03726984,
   0.04381228,
   0.04940299,
   0.0582732,
   0.06522439,
   0.07356905,
   0.08503777,
   0.09622707,
   0.1079174,
   0.1227318,
   0.1400028,
   0.1586006,
   0.1806753,
   0.2028774,
   0.2314883,
   0.2655566,
   0.3029152,
   0.3490905,
   0.4110826,
   0.487731,
   0.5653687,
   0.6182659,
   0.6645431,
   0.7043964,
   0.7378057,
   0.7665657,
   0.7942345,
   0.8182003,
   0.8415917,
   0.8581902,
   0.8743139,
   0.8902779,
   0.9041548,
   0.9169762,
   0.9274976,
   0.9384792,
   0.9472973,
   0.9568452,
   0.9637933,
   0.9692526,
   0.9742761,
   0.9791462,
   0.9832075,
   0.9866906,
   0.9893595,
   0.9926719,
   0.9948432,
   0.9978819};
   Double_t Graph_fy85[60] = {
   0,
   0.000153829,
   0.0005554803,
   0.00137276,
   0.002450801,
   0.004199915,
   0.006382525,
   0.009353558,
   0.01322534,
   0.01655285,
   0.02090503,
   0.02525615,
   0.03054519,
   0.03393938,
   0.03904017,
   0.04507896,
   0.05278758,
   0.06108884,
   0.07058,
   0.08078167,
   0.09095701,
   0.1052363,
   0.119534,
   0.1380325,
   0.1579279,
   0.180913,
   0.214318,
   0.2553564,
   0.3055022,
   0.372354,
   0.4775446,
   0.6210225,
   0.7676743,
   0.834636,
   0.8776928,
   0.9040467,
   0.9221401,
   0.9373282,
   0.947942,
   0.9578182,
   0.9633512,
   0.9692542,
   0.9753706,
   0.9799686,
   0.9826939,
   0.9847773,
   0.9863369,
   0.9888549,
   0.9914325,
   0.9926899,
   0.9942051,
   0.9949316,
   0.9961798,
   0.9966377,
   0.9977932,
   0.9984176,
   0.9987962,
   0.9991665,
   0.9994811,
   0.9997874};
   TGraph *graph = new TGraph(60,Graph_fx85,Graph_fy85);
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
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph85 = new TH1F("Graph_Graph85","Tagging Only",100,0,1.09767);
   Graph_Graph85->SetMinimum(0);
   Graph_Graph85->SetMaximum(1.099766);
   Graph_Graph85->SetDirectory(0);
   Graph_Graph85->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph85->SetLineColor(ci);
   Graph_Graph85->GetXaxis()->SetLabelFont(42);
   Graph_Graph85->GetXaxis()->SetTitleOffset(1);
   Graph_Graph85->GetXaxis()->SetTitleFont(42);
   Graph_Graph85->GetYaxis()->SetLabelFont(42);
   Graph_Graph85->GetYaxis()->SetTitleFont(42);
   Graph_Graph85->GetZaxis()->SetLabelFont(42);
   Graph_Graph85->GetZaxis()->SetTitleOffset(1);
   Graph_Graph85->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph85);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx86[60] = {
   0,
   5.460877e-07,
   5.748346e-06,
   1.208305e-05,
   7.098623e-05,
   0.0001523607,
   0.0002164596,
   0.0002616568,
   0.0003908912,
   0.0006191978,
   0.0008925992,
   0.001016279,
   0.003075329,
   0.004559313,
   0.004979318,
   0.005197755,
   0.005399072,
   0.006463478,
   0.007500485,
   0.01118478,
   0.01506632,
   0.01644143,
   0.02794473,
   0.03367639,
   0.04138042,
   0.05154915,
   0.06125504,
   0.08450465,
   0.1030675,
   0.1373585,
   0.1960667,
   0.2772048,
   0.3776675,
   0.4426875,
   0.5058529,
   0.5805113,
   0.6255016,
   0.6735473,
   0.7237899,
   0.7528781,
   0.7874237,
   0.8072433,
   0.8283313,
   0.8546561,
   0.871049,
   0.8881213,
   0.9073668,
   0.9236034,
   0.9366002,
   0.9528676,
   0.9626688,
   0.9710736,
   0.9759398,
   0.9823058,
   0.9840231,
   0.9863001,
   0.9884991,
   0.9948026,
   0.9974951,
   0.9987865};
   Double_t Graph_fy86[60] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   3.183651e-05,
   0.0007036707,
   0.0007814765,
   0.001536481,
   0.002003072,
   0.002045927,
   0.003516219,
   0.004227593,
   0.005997802,
   0.007379813,
   0.007932171,
   0.009857182,
   0.01208145,
   0.01479877,
   0.01846465,
   0.02166826,
   0.02741783,
   0.03960206,
   0.05716177,
   0.08104695,
   0.1376229,
   0.2400813,
   0.4538155,
   0.7003867,
   0.7952916,
   0.8607493,
   0.8981678,
   0.9231947,
   0.9407623,
   0.9555071,
   0.9635378,
   0.9684603,
   0.9731703,
   0.9765212,
   0.9820961,
   0.9840617,
   0.9868918,
   0.9885372,
   0.9894112,
   0.9926949,
   0.9936066,
   0.9942913,
   0.9944119,
   0.9952316,
   0.9960348,
   0.9970556,
   0.9977318,
   0.9983678,
   0.9985389,
   0.999301,
   1};
   graph = new TGraph(60,Graph_fx86,Graph_fy86);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph86 = new TH1F("Graph_Graph86","Mass-Matching Prioritized",100,0,1.098665);
   Graph_Graph86->SetMinimum(0);
   Graph_Graph86->SetMaximum(1.1);
   Graph_Graph86->SetDirectory(0);
   Graph_Graph86->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph86->SetLineColor(ci);
   Graph_Graph86->GetXaxis()->SetLabelFont(42);
   Graph_Graph86->GetXaxis()->SetTitleOffset(1);
   Graph_Graph86->GetXaxis()->SetTitleFont(42);
   Graph_Graph86->GetYaxis()->SetLabelFont(42);
   Graph_Graph86->GetYaxis()->SetTitleFont(42);
   Graph_Graph86->GetZaxis()->SetLabelFont(42);
   Graph_Graph86->GetZaxis()->SetTitleOffset(1);
   Graph_Graph86->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph86);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx87[60] = {
   0,
   0.0001445399,
   0.0006122041,
   0.002276143,
   0.003942576,
   0.00628443,
   0.009056674,
   0.01280592,
   0.01627645,
   0.02008913,
   0.02530239,
   0.0311117,
   0.03747148,
   0.04398965,
   0.049557,
   0.05846535,
   0.06540118,
   0.07401103,
   0.08546493,
   0.09706777,
   0.1088608,
   0.1236224,
   0.1408577,
   0.1597219,
   0.1817795,
   0.2045542,
   0.233316,
   0.2673067,
   0.3045048,
   0.3510182,
   0.412964,
   0.4887373,
   0.5659157,
   0.6180224,
   0.6640948,
   0.7037447,
   0.736942,
   0.7657791,
   0.7936514,
   0.8179058,
   0.8409594,
   0.8577134,
   0.8739484,
   0.8899212,
   0.9036254,
   0.91632,
   0.9268056,
   0.9376987,
   0.9463465,
   0.9560087,
   0.9630278,
   0.9684052,
   0.9735817,
   0.9783912,
   0.982917,
   0.9863272,
   0.9892088,
   0.9924989,
   0.9946531,
   0.997886};
   Double_t Graph_fy87[60] = {
   0,
   0.0001320447,
   0.0007222071,
   0.001422843,
   0.002675608,
   0.004537693,
   0.006768256,
   0.009915084,
   0.01381945,
   0.01720497,
   0.02207667,
   0.02686186,
   0.03345754,
   0.03742261,
   0.04298775,
   0.04907187,
   0.0566272,
   0.06670736,
   0.07655038,
   0.08739863,
   0.09820139,
   0.1126882,
   0.127315,
   0.1463504,
   0.1678979,
   0.1932544,
   0.2284997,
   0.2697172,
   0.3216116,
   0.387887,
   0.4885522,
   0.6300609,
   0.770676,
   0.834066,
   0.8758741,
   0.9023884,
   0.920925,
   0.9366649,
   0.947602,
   0.9576307,
   0.9628097,
   0.9687387,
   0.9745245,
   0.9786515,
   0.9821093,
   0.9843607,
   0.9862852,
   0.9885345,
   0.9911254,
   0.9923504,
   0.9937477,
   0.9945444,
   0.9956936,
   0.9962236,
   0.9974833,
   0.9980398,
   0.9983971,
   0.9988213,
   0.9991032,
   0.9997502};
   graph = new TGraph(60,Graph_fx87,Graph_fy87);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph87 = new TH1F("Graph_Graph87","Tagging Prioritized",100,0,1.097675);
   Graph_Graph87->SetMinimum(0);
   Graph_Graph87->SetMaximum(1.099725);
   Graph_Graph87->SetDirectory(0);
   Graph_Graph87->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph87->SetLineColor(ci);
   Graph_Graph87->GetXaxis()->SetLabelFont(42);
   Graph_Graph87->GetXaxis()->SetTitleOffset(1);
   Graph_Graph87->GetXaxis()->SetTitleFont(42);
   Graph_Graph87->GetYaxis()->SetLabelFont(42);
   Graph_Graph87->GetYaxis()->SetTitleFont(42);
   Graph_Graph87->GetZaxis()->SetLabelFont(42);
   Graph_Graph87->GetZaxis()->SetTitleOffset(1);
   Graph_Graph87->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph87);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04993932, 1.048726);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.4035088,0.3,0.6135088,NULL,"brNDC");
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
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ROC_dR_HZ_17->Modified();
   ROC_dR_HZ_17->cd();
   ROC_dR_HZ_17->SetSelected(ROC_dR_HZ_17);
}
