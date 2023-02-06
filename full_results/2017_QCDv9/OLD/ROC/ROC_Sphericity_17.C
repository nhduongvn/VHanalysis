#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_17()
{
//=========Macro generated from canvas: ROC_Sphericity_17/ROC_Sphericity_17
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx2150[50] = {
   0,
   0.01058625,
   0.04419705,
   0.09009918,
   0.1508273,
   0.2164772,
   0.281788,
   0.3434188,
   0.3997997,
   0.454022,
   0.5046037,
   0.548282,
   0.5942736,
   0.6321809,
   0.666251,
   0.6986812,
   0.7292304,
   0.756962,
   0.7822117,
   0.8049757,
   0.8251878,
   0.8441694,
   0.8616766,
   0.8779184,
   0.8913905,
   0.9039719,
   0.9168578,
   0.9303088,
   0.942291,
   0.9502738,
   0.9591364,
   0.9667429,
   0.9733483,
   0.9790944,
   0.9836125,
   0.9877363,
   0.9917529,
   0.9950136,
   0.9969078,
   0.9977243,
   0.9992845,
   0.9995376,
   0.9998134,
   0.9999442,
   0.9999695,
   0.9999887,
   0.9999987,
   0.9999997,
   1,
   1};
   Double_t Graph_fy2150[50] = {
   0,
   0.002529588,
   0.01036039,
   0.02746956,
   0.05452225,
   0.08701982,
   0.1244345,
   0.1620075,
   0.20868,
   0.25188,
   0.2949724,
   0.3339139,
   0.3718841,
   0.4137361,
   0.4508925,
   0.4894262,
   0.5273359,
   0.5630794,
   0.5950481,
   0.6280876,
   0.6584148,
   0.6874009,
   0.7154578,
   0.7450566,
   0.7730104,
   0.7977353,
   0.8210768,
   0.8415895,
   0.8627703,
   0.8825523,
   0.9015315,
   0.916482,
   0.9325147,
   0.9473063,
   0.9581315,
   0.9685774,
   0.9780639,
   0.9836059,
   0.9897995,
   0.9940691,
   0.9967987,
   0.998132,
   0.9990434,
   0.9992235,
   0.9998295,
   0.9998526,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(50,Graph_fx2150,Graph_fy2150);
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
   
   TH1F *Graph_Graph2150 = new TH1F("Graph_Graph2150","Tagging Only",100,0,1.1);
   Graph_Graph2150->SetMinimum(0);
   Graph_Graph2150->SetMaximum(1.1);
   Graph_Graph2150->SetDirectory(0);
   Graph_Graph2150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2150->SetLineColor(ci);
   Graph_Graph2150->GetXaxis()->SetLabelFont(42);
   Graph_Graph2150->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2150->GetXaxis()->SetTitleFont(42);
   Graph_Graph2150->GetYaxis()->SetLabelFont(42);
   Graph_Graph2150->GetYaxis()->SetTitleFont(42);
   Graph_Graph2150->GetZaxis()->SetLabelFont(42);
   Graph_Graph2150->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2150->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2150);
   
   TLatex *   tex = new TLatex(0.09009918,0.08746956,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2151);
      tex = new TLatex(0.1508273,0.1145223,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2152);
      tex = new TLatex(0.2164772,0.1470198,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2153);
      tex = new TLatex(0.281788,0.1844345,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2154);
      tex = new TLatex(0.3434188,0.2220075,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2155);
      tex = new TLatex(0.3997997,0.26868,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2156);
      tex = new TLatex(0.454022,0.31188,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2157);
      tex = new TLatex(0.5046037,0.3549724,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2158);
      tex = new TLatex(0.548282,0.3939139,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2159);
      tex = new TLatex(0.5942736,0.4318841,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2160);
      tex = new TLatex(0.6321809,0.4737361,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2161);
      tex = new TLatex(0.666251,0.5108925,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2162);
      tex = new TLatex(0.6986812,0.5494262,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2163);
      tex = new TLatex(0.7292304,0.5873359,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2164);
      tex = new TLatex(0.756962,0.6230794,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2165);
      tex = new TLatex(0.7822117,0.6550481,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2166);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2167[50] = {
   0,
   0.01195691,
   0.05631246,
   0.1124893,
   0.1809687,
   0.2567597,
   0.3222023,
   0.3797507,
   0.4483932,
   0.5005088,
   0.5404207,
   0.583816,
   0.6229958,
   0.6576212,
   0.6935896,
   0.7404881,
   0.7634042,
   0.7960904,
   0.8135185,
   0.8323468,
   0.8538724,
   0.8688905,
   0.8855717,
   0.8968218,
   0.9095822,
   0.923696,
   0.9351072,
   0.9450528,
   0.9541434,
   0.9590821,
   0.9628604,
   0.9700465,
   0.9760714,
   0.981378,
   0.983575,
   0.9868764,
   0.9908552,
   0.9970649,
   0.9979402,
   0.9982489,
   0.9984243,
   0.9986189,
   0.9998328,
   0.9999108,
   0.9999554,
   0.9999982,
   0.9999994,
   0.9999999,
   1,
   1};
   Double_t Graph_fy2167[50] = {
   0,
   0.0007646031,
   0.00374775,
   0.01556908,
   0.03943861,
   0.06574743,
   0.1020392,
   0.1343157,
   0.1813522,
   0.2141023,
   0.2617052,
   0.2986944,
   0.3381652,
   0.3798671,
   0.4170781,
   0.4535645,
   0.496428,
   0.5349902,
   0.570942,
   0.6049615,
   0.6374113,
   0.6678323,
   0.689549,
   0.713161,
   0.7369875,
   0.7625938,
   0.7927,
   0.8180648,
   0.8405984,
   0.8648562,
   0.8836548,
   0.8994751,
   0.9164914,
   0.9374767,
   0.9494264,
   0.9599704,
   0.9707747,
   0.9774692,
   0.985558,
   0.9892003,
   0.9947159,
   0.9966263,
   0.9972855,
   0.9974085,
   0.999403,
   0.999403,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2167,Graph_fy2167);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2167 = new TH1F("Graph_Graph2167","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2167->SetMinimum(0);
   Graph_Graph2167->SetMaximum(1.1);
   Graph_Graph2167->SetDirectory(0);
   Graph_Graph2167->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2167->SetLineColor(ci);
   Graph_Graph2167->GetXaxis()->SetLabelFont(42);
   Graph_Graph2167->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2167->GetXaxis()->SetTitleFont(42);
   Graph_Graph2167->GetYaxis()->SetLabelFont(42);
   Graph_Graph2167->GetYaxis()->SetTitleFont(42);
   Graph_Graph2167->GetZaxis()->SetLabelFont(42);
   Graph_Graph2167->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2167->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2167);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2168[50] = {
   0,
   0.0106807,
   0.04484165,
   0.09079121,
   0.1512548,
   0.2167326,
   0.2818351,
   0.3433194,
   0.3995471,
   0.453843,
   0.5048265,
   0.5483185,
   0.5938661,
   0.6316004,
   0.6659299,
   0.698415,
   0.7290774,
   0.7565473,
   0.7815793,
   0.8041974,
   0.8246987,
   0.8439599,
   0.8613909,
   0.877564,
   0.8909861,
   0.9037783,
   0.9165887,
   0.9300118,
   0.9418662,
   0.950046,
   0.9588875,
   0.966679,
   0.9732162,
   0.9792966,
   0.9837861,
   0.9878875,
   0.9918621,
   0.995066,
   0.9969332,
   0.9977398,
   0.9992742,
   0.9995414,
   0.9998161,
   0.9999447,
   0.9999698,
   0.9999887,
   0.9999986,
   0.9999997,
   1,
   1};
   Double_t Graph_fy2168[50] = {
   0,
   0.003050566,
   0.01241077,
   0.03103296,
   0.05798098,
   0.09080796,
   0.1291999,
   0.1675535,
   0.2142284,
   0.2569948,
   0.299865,
   0.3403456,
   0.3798647,
   0.4219214,
   0.4578447,
   0.495168,
   0.5346204,
   0.569463,
   0.6021469,
   0.6347479,
   0.6647643,
   0.694303,
   0.7230836,
   0.7520405,
   0.7795041,
   0.8033448,
   0.8259667,
   0.8452506,
   0.8663316,
   0.8858423,
   0.9038768,
   0.9182186,
   0.934212,
   0.9490094,
   0.9592607,
   0.9688501,
   0.9778609,
   0.983679,
   0.9897151,
   0.9938933,
   0.9966981,
   0.9981167,
   0.9989188,
   0.9991619,
   0.9998537,
   0.9998735,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2168,Graph_fy2168);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2168 = new TH1F("Graph_Graph2168","Tagging Prioritized",100,0,1.1);
   Graph_Graph2168->SetMinimum(0);
   Graph_Graph2168->SetMaximum(1.1);
   Graph_Graph2168->SetDirectory(0);
   Graph_Graph2168->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2168->SetLineColor(ci);
   Graph_Graph2168->GetXaxis()->SetLabelFont(42);
   Graph_Graph2168->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2168->GetXaxis()->SetTitleFont(42);
   Graph_Graph2168->GetYaxis()->SetLabelFont(42);
   Graph_Graph2168->GetYaxis()->SetTitleFont(42);
   Graph_Graph2168->GetZaxis()->SetLabelFont(42);
   Graph_Graph2168->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2168->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2168);
   
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
