#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_17 = new TCanvas("ROC_Sphericity_17", "ROC_Sphericity_17",0,0,600,600);
   ROC_Sphericity_17->SetHighLightColor(2);
   ROC_Sphericity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_17->SetFillColor(0);
   ROC_Sphericity_17->SetBorderMode(0);
   ROC_Sphericity_17->SetBorderSize(2);
   ROC_Sphericity_17->SetGridx();
   ROC_Sphericity_17->SetGridy();
   ROC_Sphericity_17->SetLeftMargin(0.15709);
   ROC_Sphericity_17->SetRightMargin(0.1234783);
   ROC_Sphericity_17->SetBottomMargin(0.12);
   ROC_Sphericity_17->SetFrameBorderMode(0);
   ROC_Sphericity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx273[51] = {
   0,
   1.714922e-08,
   1.225877e-07,
   1.048176e-06,
   4.625724e-06,
   4.458893e-05,
   6.768258e-05,
   0.0001514418,
   0.0003179978,
   0.0006504861,
   0.001300834,
   0.00194912,
   0.002882444,
   0.004681875,
   0.007531027,
   0.01411715,
   0.01854362,
   0.02345983,
   0.03156442,
   0.03869903,
   0.04603951,
   0.05665268,
   0.06661117,
   0.07818337,
   0.08938814,
   0.1025262,
   0.1192712,
   0.1353529,
   0.1562578,
   0.1759549,
   0.1978337,
   0.2200141,
   0.2457937,
   0.2706907,
   0.3018612,
   0.3309583,
   0.3620968,
   0.3951746,
   0.4300566,
   0.4745589,
   0.5178342,
   0.5749859,
   0.6256466,
   0.6783695,
   0.7331004,
   0.7959198,
   0.8549674,
   0.9135319,
   0.9576087,
   0.9901086,
   1};
   Double_t Graph_fy273[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   6.995005e-05,
   0.0003633542,
   0.0006568016,
   0.0013901,
   0.002836647,
   0.005639146,
   0.008201939,
   0.01316878,
   0.0203633,
   0.02824934,
   0.03780869,
   0.05005441,
   0.06350751,
   0.07650049,
   0.09061739,
   0.1085365,
   0.1274619,
   0.1478989,
   0.1716848,
   0.1941111,
   0.2167789,
   0.2443998,
   0.2683702,
   0.2953355,
   0.3284735,
   0.3560925,
   0.3930298,
   0.4256225,
   0.4615702,
   0.4959575,
   0.5345687,
   0.5741567,
   0.6162584,
   0.6613495,
   0.7050311,
   0.7501663,
   0.7924722,
   0.8316425,
   0.8738718,
   0.9154068,
   0.9482409,
   0.9728693,
   0.9887169,
   0.9974098,
   1};
   TGraph *graph = new TGraph(51,Graph_fx273,Graph_fy273);
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
   
   TH1F *Graph_Graph273 = new TH1F("Graph_Graph273","Tagging Only",100,0,1.1);
   Graph_Graph273->SetMinimum(0);
   Graph_Graph273->SetMaximum(1.1);
   Graph_Graph273->SetDirectory(0);
   Graph_Graph273->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph273->SetLineColor(ci);
   Graph_Graph273->GetXaxis()->SetLabelFont(42);
   Graph_Graph273->GetXaxis()->SetTitleOffset(1);
   Graph_Graph273->GetXaxis()->SetTitleFont(42);
   Graph_Graph273->GetYaxis()->SetLabelFont(42);
   Graph_Graph273->GetYaxis()->SetTitleFont(42);
   Graph_Graph273->GetZaxis()->SetLabelFont(42);
   Graph_Graph273->GetZaxis()->SetTitleOffset(1);
   Graph_Graph273->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph273);
   
   TLatex *   tex = new TLatex(0.15727,0.4931497,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(0.1793388,0.5293538,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
      tex = new TLatex(0.1969664,0.5668773,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(276);
      tex = new TLatex(0.2334196,0.612594,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(0.2589026,0.6474551,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(0.2845629,0.6822801,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.3143209,0.7164193,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.348793,0.7623265,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
      tex = new TLatex(0.4124077,0.7965826,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(282);
      tex = new TLatex(0.4629206,0.8403141,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(283);
      tex = new TLatex(0.5181866,0.8834542,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(284);
      tex = new TLatex(0.5685457,0.8580037,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
      tex = new TLatex(0.6223386,0.8931443,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(286);
      tex = new TLatex(0.674985,0.9360008,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(287);
      tex = new TLatex(0.7382431,0.9751295,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(288);
      tex = new TLatex(0.8240337,1.004375,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(289);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx290[51] = {
   0,
   6.732072e-08,
   6.732072e-08,
   2.481518e-07,
   2.221431e-06,
   7.313831e-06,
   1.701886e-05,
   3.842016e-05,
   0.0003245178,
   0.0004045722,
   0.0005296476,
   0.0006724418,
   0.001216363,
   0.00250408,
   0.004257461,
   0.007345156,
   0.01054077,
   0.01333029,
   0.016842,
   0.02120111,
   0.02655597,
   0.03254385,
   0.04388253,
   0.05343669,
   0.0649,
   0.07489627,
   0.08538855,
   0.09880768,
   0.10944,
   0.1234092,
   0.1406042,
   0.15727,
   0.1793388,
   0.1969664,
   0.2334196,
   0.2589026,
   0.2845629,
   0.3143209,
   0.348793,
   0.4124077,
   0.4629206,
   0.5181866,
   0.5685457,
   0.6223386,
   0.674985,
   0.7382431,
   0.8240337,
   0.8933645,
   0.951056,
   0.9881067,
   1};
   Double_t Graph_fy290[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001078147,
   0.001633606,
   0.004539308,
   0.007373188,
   0.01156641,
   0.01707887,
   0.02770929,
   0.0412991,
   0.04942164,
   0.06593666,
   0.0786899,
   0.08854677,
   0.1020249,
   0.1236253,
   0.1447649,
   0.1650213,
   0.1882963,
   0.2125306,
   0.2339416,
   0.2658203,
   0.2901636,
   0.3215997,
   0.3613324,
   0.3931497,
   0.4293538,
   0.4668773,
   0.512594,
   0.5474551,
   0.5822801,
   0.6164193,
   0.6623265,
   0.6965826,
   0.7403141,
   0.7834542,
   0.8180037,
   0.8531443,
   0.8960008,
   0.9351295,
   0.9643749,
   0.9839369,
   0.9926111,
   0.9996749,
   1};
   graph = new TGraph(51,Graph_fx290,Graph_fy290);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph290 = new TH1F("Graph_Graph290","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph290->SetMinimum(0);
   Graph_Graph290->SetMaximum(1.1);
   Graph_Graph290->SetDirectory(0);
   Graph_Graph290->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph290->SetLineColor(ci);
   Graph_Graph290->GetXaxis()->SetLabelFont(42);
   Graph_Graph290->GetXaxis()->SetTitleOffset(1);
   Graph_Graph290->GetXaxis()->SetTitleFont(42);
   Graph_Graph290->GetYaxis()->SetLabelFont(42);
   Graph_Graph290->GetYaxis()->SetTitleFont(42);
   Graph_Graph290->GetZaxis()->SetLabelFont(42);
   Graph_Graph290->GetZaxis()->SetTitleOffset(1);
   Graph_Graph290->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph290);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx291[51] = {
   0,
   1.685162e-08,
   1.204604e-07,
   1.046918e-06,
   4.636774e-06,
   4.405967e-05,
   6.708963e-05,
   0.0001501503,
   0.0003151296,
   0.0006452033,
   0.001291751,
   0.00193629,
   0.002872128,
   0.004667175,
   0.007522009,
   0.01407132,
   0.01849145,
   0.02342975,
   0.0314928,
   0.03858991,
   0.04611023,
   0.05667889,
   0.066665,
   0.07841194,
   0.08958609,
   0.1027142,
   0.1194376,
   0.1355613,
   0.1563333,
   0.1760594,
   0.1981966,
   0.2203881,
   0.2463626,
   0.2712998,
   0.3023381,
   0.3314109,
   0.3625955,
   0.3958414,
   0.4307378,
   0.4751168,
   0.518263,
   0.5753926,
   0.6261136,
   0.6786126,
   0.7330772,
   0.7956161,
   0.8545785,
   0.9131629,
   0.9574943,
   0.9900083,
   1};
   Double_t Graph_fy291[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   6.851376e-05,
   0.0003558934,
   0.0006433155,
   0.001361557,
   0.003037545,
   0.005812763,
   0.008322935,
   0.01321556,
   0.02026236,
   0.02798648,
   0.03734954,
   0.04972731,
   0.06296332,
   0.07602327,
   0.09015098,
   0.1079521,
   0.1265636,
   0.1467195,
   0.1706531,
   0.1929715,
   0.2158222,
   0.2432081,
   0.2673353,
   0.2938655,
   0.3264628,
   0.3538895,
   0.3906165,
   0.4231126,
   0.4591723,
   0.4936136,
   0.5322638,
   0.5716516,
   0.6139648,
   0.6586581,
   0.7020712,
   0.747944,
   0.7893016,
   0.8287144,
   0.8714976,
   0.9138141,
   0.947012,
   0.9718177,
   0.9881837,
   0.9972138,
   1};
   graph = new TGraph(51,Graph_fx291,Graph_fy291);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph291 = new TH1F("Graph_Graph291","Tagging Prioritized",100,0,1.1);
   Graph_Graph291->SetMinimum(0);
   Graph_Graph291->SetMaximum(1.1);
   Graph_Graph291->SetDirectory(0);
   Graph_Graph291->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph291->SetLineColor(ci);
   Graph_Graph291->GetXaxis()->SetLabelFont(42);
   Graph_Graph291->GetXaxis()->SetTitleOffset(1);
   Graph_Graph291->GetXaxis()->SetTitleFont(42);
   Graph_Graph291->GetYaxis()->SetLabelFont(42);
   Graph_Graph291->GetYaxis()->SetTitleFont(42);
   Graph_Graph291->GetZaxis()->SetLabelFont(42);
   Graph_Graph291->GetZaxis()->SetTitleOffset(1);
   Graph_Graph291->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph291);
   
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
   ROC_Sphericity_17->Modified();
   ROC_Sphericity_17->cd();
   ROC_Sphericity_17->SetSelected(ROC_Sphericity_17);
}
