#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx259[51] = {
   0,
   2.794314e-09,
   5.8226e-08,
   4.390661e-07,
   1.928689e-06,
   1.160736e-05,
   3.218838e-05,
   7.512084e-05,
   0.0002642308,
   0.0006700278,
   0.0009317817,
   0.00237217,
   0.003307647,
   0.005642737,
   0.008797632,
   0.01240094,
   0.01643101,
   0.02143929,
   0.02789184,
   0.03472202,
   0.04322119,
   0.05205388,
   0.06104916,
   0.07195003,
   0.0855836,
   0.09950014,
   0.1139004,
   0.1271014,
   0.1440924,
   0.1620944,
   0.1821091,
   0.2058124,
   0.2286813,
   0.2542785,
   0.2823511,
   0.312586,
   0.34566,
   0.3778324,
   0.4135207,
   0.4576264,
   0.5014929,
   0.5499084,
   0.6000762,
   0.6521899,
   0.7121151,
   0.7754218,
   0.8379139,
   0.9000699,
   0.9504097,
   0.9877745,
   1};
   Double_t Graph_fy259[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0.0002271577,
   0.0006054059,
   0.001034159,
   0.002007959,
   0.004110367,
   0.006507424,
   0.00945658,
   0.01442486,
   0.02129796,
   0.02922041,
   0.0400474,
   0.05126097,
   0.06388713,
   0.07908962,
   0.09630438,
   0.1139847,
   0.1324866,
   0.1532668,
   0.1753435,
   0.1989449,
   0.2224885,
   0.2486645,
   0.275241,
   0.3026542,
   0.3344807,
   0.3666704,
   0.40167,
   0.4334285,
   0.4683526,
   0.5043752,
   0.5409717,
   0.5798171,
   0.6182759,
   0.660426,
   0.700827,
   0.7435775,
   0.7858305,
   0.8244227,
   0.866154,
   0.905128,
   0.9389318,
   0.966305,
   0.9861239,
   0.9968266,
   1};
   TGraph *graph = new TGraph(51,Graph_fx259,Graph_fy259);
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
   
   TH1F *Graph_Graph259 = new TH1F("Graph_Graph259","Tagging Only",100,0,1.1);
   Graph_Graph259->SetMinimum(0);
   Graph_Graph259->SetMaximum(1.1);
   Graph_Graph259->SetDirectory(0);
   Graph_Graph259->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph259->SetLineColor(ci);
   Graph_Graph259->GetXaxis()->SetLabelFont(42);
   Graph_Graph259->GetXaxis()->SetTitleOffset(1);
   Graph_Graph259->GetXaxis()->SetTitleFont(42);
   Graph_Graph259->GetYaxis()->SetLabelFont(42);
   Graph_Graph259->GetYaxis()->SetTitleFont(42);
   Graph_Graph259->GetZaxis()->SetLabelFont(42);
   Graph_Graph259->GetZaxis()->SetTitleOffset(1);
   Graph_Graph259->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph259);
   
   TLatex *   tex = new TLatex(0.1655709,0.5001649,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(0.1815294,0.5374213,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(0.1987411,0.5747462,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
      tex = new TLatex(0.2291147,0.6181888,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(263);
      tex = new TLatex(0.2516447,0.6555443,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(264);
      tex = new TLatex(0.2927779,0.6912555,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(265);
      tex = new TLatex(0.3298525,0.7287455,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.3652117,0.7720937,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.4071769,0.815083,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.4468711,0.8522602,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.4870118,0.8926077,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
      tex = new TLatex(0.5382556,0.8705398,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(271);
      tex = new TLatex(0.5965372,0.9009689,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(272);
      tex = new TLatex(0.6626911,0.9380991,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(273);
      tex = new TLatex(0.7272125,0.977317,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(274);
      tex = new TLatex(0.8052556,1.001921,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(275);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx276[51] = {
   0,
   1.222355e-08,
   1.762677e-08,
   1.259091e-07,
   7.418456e-07,
   2.334211e-06,
   5.711248e-06,
   6.734026e-05,
   0.0001751874,
   0.001956337,
   0.00203922,
   0.002277712,
   0.002706781,
   0.003830086,
   0.008656807,
   0.01125131,
   0.01526417,
   0.01821369,
   0.0251227,
   0.02998985,
   0.03585202,
   0.04115006,
   0.047549,
   0.0558404,
   0.06580737,
   0.07761115,
   0.09342585,
   0.1040453,
   0.1151048,
   0.1304836,
   0.1438985,
   0.1655709,
   0.1815294,
   0.1987411,
   0.2291147,
   0.2516447,
   0.2927779,
   0.3298525,
   0.3652117,
   0.4071769,
   0.4468711,
   0.4870118,
   0.5382556,
   0.5965372,
   0.6626911,
   0.7272125,
   0.8052556,
   0.875306,
   0.9344748,
   0.9881953,
   1};
   Double_t Graph_fy276[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0007690566,
   0.001782629,
   0.002947249,
   0.005802411,
   0.007851689,
   0.01138729,
   0.01663529,
   0.02448822,
   0.03503664,
   0.0433456,
   0.05761728,
   0.07181677,
   0.08536839,
   0.1026882,
   0.1227248,
   0.1397415,
   0.1628578,
   0.1868079,
   0.2138882,
   0.2394677,
   0.2678058,
   0.3002507,
   0.329969,
   0.3662875,
   0.4001649,
   0.4374213,
   0.4747462,
   0.5181888,
   0.5555443,
   0.5912555,
   0.6287455,
   0.6720937,
   0.715083,
   0.7522602,
   0.7926077,
   0.8305398,
   0.8609689,
   0.8980991,
   0.937317,
   0.9619214,
   0.9830597,
   0.9947609,
   0.9998518,
   1};
   graph = new TGraph(51,Graph_fx276,Graph_fy276);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph276 = new TH1F("Graph_Graph276","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph276->SetMinimum(0);
   Graph_Graph276->SetMaximum(1.1);
   Graph_Graph276->SetDirectory(0);
   Graph_Graph276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph276->SetLineColor(ci);
   Graph_Graph276->GetXaxis()->SetLabelFont(42);
   Graph_Graph276->GetXaxis()->SetTitleOffset(1);
   Graph_Graph276->GetXaxis()->SetTitleFont(42);
   Graph_Graph276->GetYaxis()->SetLabelFont(42);
   Graph_Graph276->GetYaxis()->SetTitleFont(42);
   Graph_Graph276->GetZaxis()->SetLabelFont(42);
   Graph_Graph276->GetZaxis()->SetTitleOffset(1);
   Graph_Graph276->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph276);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx277[51] = {
   0,
   2.735672e-09,
   5.828915e-08,
   4.50482e-07,
   1.944271e-06,
   1.171929e-05,
   3.208953e-05,
   7.460682e-05,
   0.0002611307,
   0.0006662711,
   0.0009481758,
   0.002374445,
   0.00329975,
   0.005603371,
   0.008714378,
   0.0123266,
   0.01634982,
   0.02132448,
   0.02785461,
   0.03465687,
   0.04353391,
   0.05245374,
   0.06140146,
   0.07229248,
   0.08581938,
   0.0996581,
   0.113981,
   0.1271945,
   0.1441138,
   0.1621366,
   0.1821796,
   0.2057098,
   0.2285525,
   0.2539888,
   0.2819208,
   0.3120531,
   0.3453361,
   0.3781838,
   0.4140029,
   0.4582728,
   0.5026171,
   0.5513679,
   0.6016581,
   0.653539,
   0.7129747,
   0.7762009,
   0.8381679,
   0.9000421,
   0.9503847,
   0.9877124,
   1};
   Double_t Graph_fy277[51] = {
   0,
   0,
   0,
   0,
   0,
   0.0001001404,
   0.0003217356,
   0.0006907214,
   0.001188492,
   0.002072466,
   0.004239095,
   0.006606906,
   0.009647084,
   0.01452528,
   0.02125025,
   0.0291686,
   0.03977238,
   0.05124018,
   0.0637414,
   0.07885946,
   0.09607252,
   0.113686,
   0.1318329,
   0.1524568,
   0.1744272,
   0.1979972,
   0.2214787,
   0.2476426,
   0.2741588,
   0.3015233,
   0.333252,
   0.3650885,
   0.4000289,
   0.4316009,
   0.4667583,
   0.5027934,
   0.5394662,
   0.578219,
   0.6165861,
   0.6587339,
   0.6992699,
   0.7424465,
   0.7841053,
   0.8229895,
   0.8651022,
   0.9042457,
   0.9380463,
   0.9656256,
   0.9857796,
   0.9966767,
   1};
   graph = new TGraph(51,Graph_fx277,Graph_fy277);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph277 = new TH1F("Graph_Graph277","Tagging Prioritized",100,0,1.1);
   Graph_Graph277->SetMinimum(0);
   Graph_Graph277->SetMaximum(1.1);
   Graph_Graph277->SetDirectory(0);
   Graph_Graph277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph277->SetLineColor(ci);
   Graph_Graph277->GetXaxis()->SetLabelFont(42);
   Graph_Graph277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph277->GetXaxis()->SetTitleFont(42);
   Graph_Graph277->GetYaxis()->SetLabelFont(42);
   Graph_Graph277->GetYaxis()->SetTitleFont(42);
   Graph_Graph277->GetZaxis()->SetLabelFont(42);
   Graph_Graph277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph277->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph277);
   
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
