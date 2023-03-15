#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_16()
{
//=========Macro generated from canvas: ROC_Sphericity_16/ROC_Sphericity_16
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_16 = new TCanvas("ROC_Sphericity_16", "ROC_Sphericity_16",0,0,600,600);
   ROC_Sphericity_16->SetHighLightColor(2);
   ROC_Sphericity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_16->SetFillColor(0);
   ROC_Sphericity_16->SetBorderMode(0);
   ROC_Sphericity_16->SetBorderSize(2);
   ROC_Sphericity_16->SetGridx();
   ROC_Sphericity_16->SetGridy();
   ROC_Sphericity_16->SetLeftMargin(0.15709);
   ROC_Sphericity_16->SetRightMargin(0.1234783);
   ROC_Sphericity_16->SetBottomMargin(0.12);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx246[51] = {
   0,
   0,
   3.76101e-08,
   3.145399e-07,
   1.400177e-06,
   4.39464e-06,
   2.007255e-05,
   0.0001046378,
   0.0002891159,
   0.0008865694,
   0.002082372,
   0.002520225,
   0.003332618,
   0.004537797,
   0.006453562,
   0.009477092,
   0.0144251,
   0.01867948,
   0.02416777,
   0.03171003,
   0.03947073,
   0.04887055,
   0.05680078,
   0.06815694,
   0.08168539,
   0.09484676,
   0.1081425,
   0.1223098,
   0.1388312,
   0.1567455,
   0.1748118,
   0.197555,
   0.2195598,
   0.2413479,
   0.2668759,
   0.2936687,
   0.3231294,
   0.3540288,
   0.3933419,
   0.4383337,
   0.4819473,
   0.5307724,
   0.5880798,
   0.6479373,
   0.7051854,
   0.7695222,
   0.832431,
   0.895253,
   0.9495639,
   0.9880005,
   1};
   Double_t Graph_fy246[51] = {
   0,
   0,
   0,
   0,
   0,
   1.042786e-05,
   0.0001579367,
   0.0005759694,
   0.00108559,
   0.002069759,
   0.003383115,
   0.005834858,
   0.0103654,
   0.01608173,
   0.02366065,
   0.03327602,
   0.04355291,
   0.05364616,
   0.06685321,
   0.08315936,
   0.1033739,
   0.1209974,
   0.1412563,
   0.1619039,
   0.1848085,
   0.208024,
   0.2322131,
   0.2552892,
   0.2820037,
   0.3086621,
   0.3384568,
   0.3684266,
   0.402828,
   0.4375376,
   0.4741117,
   0.5114708,
   0.5533196,
   0.5889879,
   0.6271977,
   0.6658167,
   0.7066492,
   0.7437321,
   0.7859987,
   0.8266863,
   0.8650477,
   0.9031658,
   0.9348375,
   0.9638772,
   0.9841055,
   0.9959097,
   1};
   TGraph *graph = new TGraph(51,Graph_fx246,Graph_fy246);
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
   
   TH1F *Graph_Graph246 = new TH1F("Graph_Graph246","Tagging Only",100,0,1.1);
   Graph_Graph246->SetMinimum(0);
   Graph_Graph246->SetMaximum(1.1);
   Graph_Graph246->SetDirectory(0);
   Graph_Graph246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph246->SetLineColor(ci);
   Graph_Graph246->GetXaxis()->SetLabelFont(42);
   Graph_Graph246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph246->GetXaxis()->SetTitleFont(42);
   Graph_Graph246->GetYaxis()->SetLabelFont(42);
   Graph_Graph246->GetYaxis()->SetTitleFont(42);
   Graph_Graph246->GetZaxis()->SetLabelFont(42);
   Graph_Graph246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph246);
   
   TLatex *   tex = new TLatex(0.1631845,0.5068324,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(247);
      tex = new TLatex(0.1886082,0.5379707,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(248);
      tex = new TLatex(0.2078809,0.565649,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(249);
      tex = new TLatex(0.2303221,0.6152053,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(250);
      tex = new TLatex(0.2538117,0.6489788,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(251);
      tex = new TLatex(0.270721,0.6837296,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(252);
      tex = new TLatex(0.2929749,0.7284606,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(253);
      tex = new TLatex(0.3224867,0.769235,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(254);
      tex = new TLatex(0.3811295,0.8003838,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.431541,0.8474853,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(0.4888104,0.8823693,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(0.5392723,0.8655178,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(0.6005482,0.9037468,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(0.658358,0.941795,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(0.7198063,0.9764532,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(0.7906625,1.002377,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx263[51] = {
   0,
   0,
   2.730267e-08,
   1.863977e-07,
   6.899038e-07,
   1.914462e-06,
   4.882491e-06,
   1.096653e-05,
   2.12849e-05,
   0.003565223,
   0.003887481,
   0.004062987,
   0.00467125,
   0.005883357,
   0.007373886,
   0.01250001,
   0.01460371,
   0.02019511,
   0.02240674,
   0.02993764,
   0.03531753,
   0.04337956,
   0.04867435,
   0.06094281,
   0.06835038,
   0.07788604,
   0.09009298,
   0.1052324,
   0.1148711,
   0.1274217,
   0.1433862,
   0.1631845,
   0.1886082,
   0.2078809,
   0.2303221,
   0.2538117,
   0.270721,
   0.2929749,
   0.3224867,
   0.3811295,
   0.431541,
   0.4888104,
   0.5392723,
   0.6005482,
   0.658358,
   0.7198063,
   0.7906625,
   0.8621817,
   0.9264261,
   0.9881502,
   1};
   Double_t Graph_fy263[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0008385553,
   0.001907784,
   0.003803218,
   0.00668819,
   0.009374574,
   0.0167088,
   0.01905926,
   0.02958119,
   0.04011617,
   0.05327784,
   0.06957109,
   0.08412162,
   0.1028484,
   0.1248716,
   0.1423655,
   0.1666571,
   0.1877775,
   0.2093667,
   0.2325289,
   0.2688363,
   0.2957711,
   0.3245436,
   0.353158,
   0.3791326,
   0.4068324,
   0.4379707,
   0.465649,
   0.5152053,
   0.5489788,
   0.5837296,
   0.6284606,
   0.669235,
   0.7003838,
   0.7474853,
   0.7823693,
   0.8255178,
   0.8637468,
   0.901795,
   0.9364532,
   0.9623768,
   0.9843311,
   0.9938493,
   0.9991891,
   1};
   graph = new TGraph(51,Graph_fx263,Graph_fy263);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph263 = new TH1F("Graph_Graph263","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph263->SetMinimum(0);
   Graph_Graph263->SetMaximum(1.1);
   Graph_Graph263->SetDirectory(0);
   Graph_Graph263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph263->SetLineColor(ci);
   Graph_Graph263->GetXaxis()->SetLabelFont(42);
   Graph_Graph263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph263->GetXaxis()->SetTitleFont(42);
   Graph_Graph263->GetYaxis()->SetLabelFont(42);
   Graph_Graph263->GetYaxis()->SetTitleFont(42);
   Graph_Graph263->GetZaxis()->SetLabelFont(42);
   Graph_Graph263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph263);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx264[51] = {
   0,
   0,
   3.851245e-08,
   3.205996e-07,
   1.413159e-06,
   4.650661e-06,
   2.012409e-05,
   0.0001029307,
   0.0003141592,
   0.0008981063,
   0.002065428,
   0.002496299,
   0.003303719,
   0.004504856,
   0.006427998,
   0.00943629,
   0.01433574,
   0.0185976,
   0.02403768,
   0.03165447,
   0.03943753,
   0.04872468,
   0.05656657,
   0.0678803,
   0.08131238,
   0.09464036,
   0.1079228,
   0.1219874,
   0.1384081,
   0.1563146,
   0.1743029,
   0.1973841,
   0.2191991,
   0.2409649,
   0.2664127,
   0.2930609,
   0.3222473,
   0.3538371,
   0.3927933,
   0.4374035,
   0.4809823,
   0.5300883,
   0.5872568,
   0.6473721,
   0.7044662,
   0.7685221,
   0.8315764,
   0.8943575,
   0.949525,
   0.9879242,
   1};
   Double_t Graph_fy264[51] = {
   0,
   0,
   0,
   0,
   0,
   8.681808e-06,
   0.0001314915,
   0.0004795283,
   0.0009038175,
   0.001741872,
   0.002835317,
   0.005187575,
   0.009491808,
   0.01468652,
   0.02171329,
   0.03067428,
   0.040207,
   0.04961486,
   0.06259529,
   0.07857793,
   0.09801708,
   0.1150723,
   0.1351153,
   0.15584,
   0.1785638,
   0.2017722,
   0.2258789,
   0.2486634,
   0.2736489,
   0.3002883,
   0.3296676,
   0.3594992,
   0.3925376,
   0.4271839,
   0.4653794,
   0.5022522,
   0.5439817,
   0.5800218,
   0.6186132,
   0.6590017,
   0.699651,
   0.7379053,
   0.7809732,
   0.8218663,
   0.8601678,
   0.8986496,
   0.9317139,
   0.9613279,
   0.9827779,
   0.9952637,
   1};
   graph = new TGraph(51,Graph_fx264,Graph_fy264);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","Tagging Prioritized",100,0,1.1);
   Graph_Graph264->SetMinimum(0);
   Graph_Graph264->SetMaximum(1.1);
   Graph_Graph264->SetDirectory(0);
   Graph_Graph264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph264->SetLineColor(ci);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
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
   ROC_Sphericity_16->Modified();
   ROC_Sphericity_16->cd();
   ROC_Sphericity_16->SetSelected(ROC_Sphericity_16);
}
