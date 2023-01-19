#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_18()
{
//=========Macro generated from canvas: ROC_Z_mass_18/ROC_Z_mass_18
//=========  (Thu Jan 19 10:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_18 = new TCanvas("ROC_Z_mass_18", "ROC_Z_mass_18",0,0,600,600);
   ROC_Z_mass_18->SetHighLightColor(2);
   ROC_Z_mass_18->Range(-0.2901589,-0.1615073,1.238672,1.184387);
   ROC_Z_mass_18->SetFillColor(0);
   ROC_Z_mass_18->SetBorderMode(0);
   ROC_Z_mass_18->SetBorderSize(2);
   ROC_Z_mass_18->SetGridx();
   ROC_Z_mass_18->SetGridy();
   ROC_Z_mass_18->SetLeftMargin(0.15709);
   ROC_Z_mass_18->SetRightMargin(0.1234783);
   ROC_Z_mass_18->SetBottomMargin(0.12);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   ROC_Z_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx7[40] = {
   0,
   0,
   0,
   0.002139972,
   0.01297569,
   0.03258364,
   0.06664314,
   0.1451599,
   0.2831112,
   0.4741951,
   0.6346017,
   0.7102084,
   0.7525025,
   0.7896745,
   0.822666,
   0.8468579,
   0.8670663,
   0.8848927,
   0.8989858,
   0.9119716,
   0.9225142,
   0.9317757,
   0.9398721,
   0.9469296,
   0.9531057,
   0.9614674,
   0.9662881,
   0.9697959,
   0.9730203,
   0.9775546,
   0.9807127,
   0.9830797,
   0.9848014,
   0.9869651,
   0.9889264,
   0.9920826,
   0.9940467,
   0.99579,
   0.9969753,
   0.9984651};
   Double_t Graph_fy7[40] = {
   0,
   0,
   0.001182426,
   0.03724514,
   0.1077735,
   0.1776785,
   0.2425957,
   0.3092204,
   0.3878466,
   0.4580539,
   0.5228535,
   0.5865574,
   0.6354018,
   0.6849603,
   0.7253251,
   0.7606909,
   0.7910679,
   0.8203268,
   0.842826,
   0.8631115,
   0.8811602,
   0.8966998,
   0.9083536,
   0.9201423,
   0.9309789,
   0.9389329,
   0.9466737,
   0.9538984,
   0.9602392,
   0.9660225,
   0.9707218,
   0.9747004,
   0.978925,
   0.9823507,
   0.9859647,
   0.9887026,
   0.991304,
   0.993658,
   0.9960173,
   0.9981687};
   TGraph *graph = new TGraph(40,Graph_fx7,Graph_fy7);
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
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","Tagging Only",100,0,1.098312);
   Graph_Graph7->SetMinimum(0);
   Graph_Graph7->SetMaximum(1.097986);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetTitleOffset(1);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetTitleOffset(1);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[40] = {
   0,
   0,
   0,
   2.163419e-06,
   0.01002014,
   0.03380801,
   0.08269563,
   0.206505,
   0.4179244,
   0.6702652,
   0.8309418,
   0.8987949,
   0.924559,
   0.9440335,
   0.951924,
   0.9625961,
   0.9680196,
   0.9722382,
   0.9750406,
   0.9792572,
   0.9836427,
   0.9869458,
   0.9897065,
   0.9901466,
   0.9920838,
   0.9935362,
   0.994715,
   0.9950913,
   0.9954271,
   0.9955791,
   0.9960156,
   0.9966037,
   0.9968979,
   0.9978454,
   0.9981451,
   0.9985177,
   0.9993774,
   0.9996072,
   0.9998068,
   0.9998992};
   Double_t Graph_fy8[40] = {
   0,
   0,
   0.001855763,
   0.04936611,
   0.1714859,
   0.2916416,
   0.3899239,
   0.4904991,
   0.5863305,
   0.6555794,
   0.7279233,
   0.7889338,
   0.8231694,
   0.8527246,
   0.8814782,
   0.9017342,
   0.9214748,
   0.9392198,
   0.9510498,
   0.9586474,
   0.9652556,
   0.972896,
   0.9774664,
   0.9807896,
   0.9840838,
   0.9862603,
   0.9882169,
   0.9903181,
   0.991829,
   0.9926792,
   0.9938119,
   0.9949799,
   0.9959624,
   0.9968634,
   0.997667,
   0.9981243,
   0.9987442,
   0.9990622,
   0.9994371,
   0.999807};
   graph = new TGraph(40,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","Mass-Matching Prioritized",100,0,1.099889);
   Graph_Graph8->SetMinimum(0);
   Graph_Graph8->SetMaximum(1.099788);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetTitleOffset(1);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetTitleOffset(1);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx9[40] = {
   0,
   0,
   0,
   0.003131859,
   0.01459058,
   0.03585893,
   0.07097565,
   0.1486828,
   0.2836776,
   0.4690774,
   0.6249965,
   0.7004779,
   0.7428277,
   0.7796756,
   0.8116704,
   0.83616,
   0.8576833,
   0.8766527,
   0.8912985,
   0.9044213,
   0.9159391,
   0.9261789,
   0.9345959,
   0.9419003,
   0.9483223,
   0.9568131,
   0.9628847,
   0.9673868,
   0.9706979,
   0.9757536,
   0.9788029,
   0.981585,
   0.9834095,
   0.9856404,
   0.9878189,
   0.9909325,
   0.9933864,
   0.9950505,
   0.9967729,
   0.9984306};
   Double_t Graph_fy9[40] = {
   0,
   0,
   0.001157321,
   0.03664654,
   0.1060448,
   0.1757925,
   0.2407459,
   0.3073739,
   0.3847825,
   0.4550826,
   0.5192168,
   0.583255,
   0.6322695,
   0.6824884,
   0.7226909,
   0.758433,
   0.7894777,
   0.8185038,
   0.8412978,
   0.861604,
   0.8795494,
   0.8953165,
   0.9070014,
   0.9191984,
   0.9300171,
   0.9382941,
   0.9458495,
   0.9534075,
   0.9597818,
   0.9658322,
   0.9705592,
   0.9745659,
   0.978858,
   0.9823099,
   0.9859222,
   0.9886698,
   0.9912854,
   0.9936443,
   0.9959963,
   0.99817};
   graph = new TGraph(40,Graph_fx9,Graph_fy9);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","Tagging Prioritized",100,0,1.098274);
   Graph_Graph9->SetMinimum(0);
   Graph_Graph9->SetMaximum(1.097987);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetTitleOffset(1);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetTitleOffset(1);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999496, 1.049894);
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_mass_18->Modified();
   ROC_Z_mass_18->cd();
   ROC_Z_mass_18->SetSelected(ROC_Z_mass_18);
}
