#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx265[51] = {
   0,
   1.891182e-09,
   4.124644e-08,
   3.117039e-07,
   1.340529e-06,
   1.130724e-05,
   3.052968e-05,
   5.584286e-05,
   0.0001866297,
   0.0004624281,
   0.0007155156,
   0.002275653,
   0.003092187,
   0.004986417,
   0.008247057,
   0.01226367,
   0.01638753,
   0.0209056,
   0.02665166,
   0.03325712,
   0.04086359,
   0.04972621,
   0.05770901,
   0.06969123,
   0.08314222,
   0.09602809,
   0.1086095,
   0.1220816,
   0.1383234,
   0.1558306,
   0.1748122,
   0.1950243,
   0.2177883,
   0.243038,
   0.2707696,
   0.3013188,
   0.333749,
   0.3678191,
   0.4057264,
   0.451718,
   0.4953963,
   0.545978,
   0.6002003,
   0.6565812,
   0.718212,
   0.7835228,
   0.8491727,
   0.9099008,
   0.9558029,
   0.9894138,
   1};
   Double_t Graph_fy265[51] = {
   0,
   0,
   0,
   0,
   0,
   0.0001474361,
   0.0001704797,
   0.0007764678,
   0.0009566004,
   0.001867995,
   0.003201293,
   0.005930879,
   0.01020052,
   0.01639414,
   0.02193609,
   0.03142263,
   0.04186845,
   0.05269367,
   0.06748534,
   0.08351796,
   0.09846849,
   0.1174477,
   0.1372297,
   0.1584105,
   0.1789232,
   0.2022647,
   0.2269896,
   0.2549434,
   0.2845422,
   0.3125991,
   0.3415852,
   0.3719124,
   0.4049519,
   0.4369206,
   0.4726641,
   0.5105738,
   0.5491075,
   0.5862639,
   0.6281159,
   0.6660861,
   0.7050276,
   0.74812,
   0.79132,
   0.8379925,
   0.8755655,
   0.9129802,
   0.9454777,
   0.9725304,
   0.9896396,
   0.9974704,
   1};
   TGraph *graph = new TGraph(51,Graph_fx265,Graph_fy265);
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
   
   TH1F *Graph_Graph265 = new TH1F("Graph_Graph265","Tagging Only",100,0,1.1);
   Graph_Graph265->SetMinimum(0);
   Graph_Graph265->SetMaximum(1.1);
   Graph_Graph265->SetDirectory(0);
   Graph_Graph265->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph265->SetLineColor(ci);
   Graph_Graph265->GetXaxis()->SetLabelFont(42);
   Graph_Graph265->GetXaxis()->SetTitleOffset(1);
   Graph_Graph265->GetXaxis()->SetTitleFont(42);
   Graph_Graph265->GetYaxis()->SetLabelFont(42);
   Graph_Graph265->GetYaxis()->SetTitleFont(42);
   Graph_Graph265->GetZaxis()->SetLabelFont(42);
   Graph_Graph265->GetZaxis()->SetTitleOffset(1);
   Graph_Graph265->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph265);
   
   TLatex *   tex = new TLatex(0.1676532,0.4950385,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.1864815,0.529058,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.2039096,0.5650098,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.2365958,0.603572,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.2595119,0.6464355,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.3064104,0.6829219,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.3423788,0.7201329,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.3770042,0.7618348,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
      tex = new TLatex(0.416184,0.8013056,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(0.4595793,0.8382948,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
      tex = new TLatex(0.4994912,0.8858977,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(276);
      tex = new TLatex(0.5516068,0.8586478,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(277);
      tex = new TLatex(0.6202493,0.9056843,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(278);
      tex = new TLatex(0.6777977,0.9379608,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.7432403,0.9742526,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.8190313,1.000561,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx282[51] = {
   0,
   8.858109e-09,
   1.63671e-08,
   1.061088e-07,
   5.651852e-07,
   1.763486e-06,
   4.46087e-05,
   8.921012e-05,
   0.0001672336,
   0.00138106,
   0.001575653,
   0.001751106,
   0.002059785,
   0.002935055,
   0.009144792,
   0.01312357,
   0.01642505,
   0.01862205,
   0.02392863,
   0.02995349,
   0.03713963,
   0.0409179,
   0.04585659,
   0.05494717,
   0.06489279,
   0.076304,
   0.09041778,
   0.1031782,
   0.1144283,
   0.1311095,
   0.1461276,
   0.1676532,
   0.1864815,
   0.2039096,
   0.2365958,
   0.2595119,
   0.3064104,
   0.3423788,
   0.3770042,
   0.416184,
   0.4595793,
   0.4994912,
   0.5516068,
   0.6202493,
   0.6777977,
   0.7432403,
   0.8190313,
   0.8875107,
   0.9436875,
   0.9880431,
   1};
   Double_t Graph_fy282[51] = {
   0,
   0,
   0,
   0,
   0,
   0.0005970383,
   0.0005970383,
   0.002591459,
   0.002714527,
   0.003373692,
   0.005284118,
   0.01079971,
   0.014442,
   0.02253077,
   0.0292253,
   0.04002963,
   0.05057356,
   0.0625233,
   0.08350858,
   0.1005249,
   0.1163452,
   0.1351438,
   0.1594016,
   0.1819352,
   0.2073,
   0.2374062,
   0.2630125,
   0.286839,
   0.310451,
   0.3321677,
   0.3625887,
   0.3950385,
   0.429058,
   0.4650098,
   0.503572,
   0.5464355,
   0.5829219,
   0.6201329,
   0.6618348,
   0.7013056,
   0.7382948,
   0.7858977,
   0.8186478,
   0.8656843,
   0.8979608,
   0.9342526,
   0.9605614,
   0.9844309,
   0.9962522,
   0.9992354,
   1};
   graph = new TGraph(51,Graph_fx282,Graph_fy282);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph282 = new TH1F("Graph_Graph282","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph282->SetMinimum(0);
   Graph_Graph282->SetMaximum(1.1);
   Graph_Graph282->SetDirectory(0);
   Graph_Graph282->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph282->SetLineColor(ci);
   Graph_Graph282->GetXaxis()->SetLabelFont(42);
   Graph_Graph282->GetXaxis()->SetTitleOffset(1);
   Graph_Graph282->GetXaxis()->SetTitleFont(42);
   Graph_Graph282->GetYaxis()->SetLabelFont(42);
   Graph_Graph282->GetYaxis()->SetTitleFont(42);
   Graph_Graph282->GetZaxis()->SetLabelFont(42);
   Graph_Graph282->GetZaxis()->SetTitleOffset(1);
   Graph_Graph282->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph282);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx283[51] = {
   0,
   1.841019e-09,
   4.102461e-08,
   3.194417e-07,
   1.356662e-06,
   1.129654e-05,
   3.022518e-05,
   5.531268e-05,
   0.000183913,
   0.00045861,
   0.0007257615,
   0.002260227,
   0.003066752,
   0.004933974,
   0.008137935,
   0.01211245,
   0.01621389,
   0.02070344,
   0.02678375,
   0.03332098,
   0.04111254,
   0.04995396,
   0.0581338,
   0.0699882,
   0.08341135,
   0.0962217,
   0.1090139,
   0.122436,
   0.1386091,
   0.1560401,
   0.1753013,
   0.1958026,
   0.2184207,
   0.2434527,
   0.2709226,
   0.301585,
   0.3340701,
   0.3683996,
   0.4061339,
   0.4516815,
   0.4951735,
   0.546157,
   0.6004529,
   0.6566806,
   0.7181649,
   0.7832674,
   0.8487452,
   0.9092088,
   0.9551584,
   0.9893193,
   1};
   Double_t Graph_fy283[51] = {
   0,
   0,
   0,
   0,
   0,
   0.000126538,
   0.0001463154,
   0.0008380787,
   0.001081176,
   0.001883253,
   0.003301945,
   0.006106699,
   0.01028491,
   0.01632102,
   0.02213905,
   0.0311499,
   0.0407393,
   0.05099064,
   0.065788,
   0.08178143,
   0.09612317,
   0.1141577,
   0.1336684,
   0.1547494,
   0.1740333,
   0.1966552,
   0.2204959,
   0.2479595,
   0.2769164,
   0.305697,
   0.3352357,
   0.3652521,
   0.3978531,
   0.430537,
   0.4653796,
   0.504832,
   0.5421553,
   0.5780786,
   0.6201353,
   0.6596544,
   0.700135,
   0.7430052,
   0.7857716,
   0.8324465,
   0.8708001,
   0.909192,
   0.942019,
   0.968967,
   0.9875892,
   0.9969494,
   1};
   graph = new TGraph(51,Graph_fx283,Graph_fy283);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph283 = new TH1F("Graph_Graph283","Tagging Prioritized",100,0,1.1);
   Graph_Graph283->SetMinimum(0);
   Graph_Graph283->SetMaximum(1.1);
   Graph_Graph283->SetDirectory(0);
   Graph_Graph283->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph283->SetLineColor(ci);
   Graph_Graph283->GetXaxis()->SetLabelFont(42);
   Graph_Graph283->GetXaxis()->SetTitleOffset(1);
   Graph_Graph283->GetXaxis()->SetTitleFont(42);
   Graph_Graph283->GetYaxis()->SetLabelFont(42);
   Graph_Graph283->GetYaxis()->SetTitleFont(42);
   Graph_Graph283->GetZaxis()->SetLabelFont(42);
   Graph_Graph283->GetZaxis()->SetTitleOffset(1);
   Graph_Graph283->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph283);
   
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
