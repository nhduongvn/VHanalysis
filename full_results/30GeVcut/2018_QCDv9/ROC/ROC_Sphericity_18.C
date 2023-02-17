#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Tue Feb 14 15:33:18 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_18 = new TCanvas("ROC_Sphericity_18", "ROC_Sphericity_18",0,0,600,600);
   ROC_Sphericity_18->SetHighLightColor(2);
   ROC_Sphericity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_18->SetFillColor(0);
   ROC_Sphericity_18->SetBorderMode(0);
   ROC_Sphericity_18->SetBorderSize(2);
   ROC_Sphericity_18->SetGridx();
   ROC_Sphericity_18->SetGridy();
   ROC_Sphericity_18->SetLeftMargin(0.15709);
   ROC_Sphericity_18->SetRightMargin(0.1234783);
   ROC_Sphericity_18->SetBottomMargin(0.12);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx278[51] = {
   0,
   9.517813e-10,
   7.807156e-08,
   5.062389e-07,
   2.117274e-06,
   5.211963e-05,
   7.208701e-05,
   0.0001233457,
   0.0002191929,
   0.0008170479,
   0.00127757,
   0.002125209,
   0.003464292,
   0.006040164,
   0.008754237,
   0.01190563,
   0.01652863,
   0.02212906,
   0.0281914,
   0.03436157,
   0.04150492,
   0.05073116,
   0.06073737,
   0.0718711,
   0.0854221,
   0.1001022,
   0.1134793,
   0.1299908,
   0.14766,
   0.1656486,
   0.1884419,
   0.2100717,
   0.2331266,
   0.256496,
   0.2820873,
   0.3079831,
   0.3398671,
   0.3761999,
   0.4132875,
   0.4551238,
   0.5014532,
   0.5482353,
   0.5969291,
   0.6531342,
   0.7111014,
   0.7711778,
   0.8341931,
   0.8963178,
   0.9477719,
   0.9875129,
   1};
   Double_t Graph_fy278[51] = {
   0,
   0,
   0,
   0,
   7.367547e-05,
   8.816786e-05,
   8.816786e-05,
   0.0006260924,
   0.0009852476,
   0.002320781,
   0.003632082,
   0.005680127,
   0.009646738,
   0.01449867,
   0.01992281,
   0.02721573,
   0.03613447,
   0.04611307,
   0.058899,
   0.07397197,
   0.08943315,
   0.1074879,
   0.1277883,
   0.1479108,
   0.1707903,
   0.1957548,
   0.2216051,
   0.2479034,
   0.2764201,
   0.3032025,
   0.3301942,
   0.3608321,
   0.3953456,
   0.4289227,
   0.4644519,
   0.4994664,
   0.53638,
   0.5725984,
   0.6116605,
   0.6523899,
   0.6950363,
   0.7349971,
   0.7776313,
   0.8201783,
   0.8627844,
   0.9021848,
   0.9359045,
   0.9638901,
   0.9853097,
   0.9965936,
   1};
   TGraph *graph = new TGraph(51,Graph_fx278,Graph_fy278);
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
   
   TH1F *Graph_Graph278 = new TH1F("Graph_Graph278","Tagging Only",100,0,1.1);
   Graph_Graph278->SetMinimum(0);
   Graph_Graph278->SetMaximum(1.1);
   Graph_Graph278->SetDirectory(0);
   Graph_Graph278->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph278->SetLineColor(ci);
   Graph_Graph278->GetXaxis()->SetLabelFont(42);
   Graph_Graph278->GetXaxis()->SetTitleOffset(1);
   Graph_Graph278->GetXaxis()->SetTitleFont(42);
   Graph_Graph278->GetYaxis()->SetLabelFont(42);
   Graph_Graph278->GetYaxis()->SetTitleFont(42);
   Graph_Graph278->GetZaxis()->SetLabelFont(42);
   Graph_Graph278->GetZaxis()->SetTitleOffset(1);
   Graph_Graph278->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph278);
   
   TLatex *   tex = new TLatex(0.1513396,0.4509952,"0.39");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(279);
      tex = new TLatex(0.1733222,0.4809298,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(280);
      tex = new TLatex(0.1921021,0.5180716,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(281);
      tex = new TLatex(0.2114015,0.5542311,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(282);
      tex = new TLatex(0.2353624,0.5935233,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(283);
      tex = new TLatex(0.256271,0.6304081,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(284);
      tex = new TLatex(0.285086,0.6679761,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(285);
      tex = new TLatex(0.3264149,0.7065276,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(286);
      tex = new TLatex(0.3573649,0.7451828,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(287);
      tex = new TLatex(0.4025906,0.7820749,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(288);
      tex = new TLatex(0.4596549,0.8216912,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(289);
      tex = new TLatex(0.504933,0.8639602,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(290);
      tex = new TLatex(0.5608548,0.8462533,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(291);
      tex = new TLatex(0.6257122,0.8893911,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(292);
      tex = new TLatex(0.6893884,0.9360301,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(293);
      tex = new TLatex(0.7391933,0.9713732,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(294);
      tex = new TLatex(0.8087393,0.997418,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(295);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx296[51] = {
   0,
   0,
   0,
   2.117972e-07,
   7.457511e-07,
   0.0003329772,
   0.0003364593,
   0.0004966472,
   0.0005092442,
   0.0006164951,
   0.000738021,
   0.0009435327,
   0.00164218,
   0.002106699,
   0.007272764,
   0.00993653,
   0.01182786,
   0.01790899,
   0.02195322,
   0.02804137,
   0.03336053,
   0.04350672,
   0.04977937,
   0.06051812,
   0.07483842,
   0.08366459,
   0.09314505,
   0.1088276,
   0.1227865,
   0.1319309,
   0.1513396,
   0.1733222,
   0.1921021,
   0.2114015,
   0.2353624,
   0.256271,
   0.285086,
   0.3264149,
   0.3573649,
   0.4025906,
   0.4596549,
   0.504933,
   0.5608548,
   0.6257122,
   0.6893884,
   0.7391933,
   0.8087393,
   0.8818706,
   0.9379875,
   0.9895318,
   1};
   Double_t Graph_fy296[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0003717316,
   0.001050949,
   0.002686619,
   0.004278526,
   0.004845099,
   0.008005165,
   0.01385281,
   0.02186643,
   0.02805759,
   0.03681339,
   0.04937456,
   0.06366969,
   0.07789058,
   0.09654207,
   0.1122436,
   0.1367918,
   0.1548114,
   0.1762839,
   0.2009449,
   0.2334913,
   0.2620716,
   0.2921689,
   0.3229477,
   0.3509952,
   0.3809298,
   0.4180716,
   0.4542311,
   0.4935233,
   0.5304081,
   0.5679761,
   0.6065276,
   0.6451828,
   0.6820749,
   0.7216912,
   0.7639602,
   0.8062533,
   0.8493911,
   0.8960301,
   0.9313732,
   0.957418,
   0.9798378,
   0.9953468,
   0.9993174,
   1};
   graph = new TGraph(51,Graph_fx296,Graph_fy296);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph296 = new TH1F("Graph_Graph296","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph296->SetMinimum(0);
   Graph_Graph296->SetMaximum(1.1);
   Graph_Graph296->SetDirectory(0);
   Graph_Graph296->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph296->SetLineColor(ci);
   Graph_Graph296->GetXaxis()->SetLabelFont(42);
   Graph_Graph296->GetXaxis()->SetTitleOffset(1);
   Graph_Graph296->GetXaxis()->SetTitleFont(42);
   Graph_Graph296->GetYaxis()->SetLabelFont(42);
   Graph_Graph296->GetYaxis()->SetTitleFont(42);
   Graph_Graph296->GetZaxis()->SetLabelFont(42);
   Graph_Graph296->GetZaxis()->SetTitleOffset(1);
   Graph_Graph296->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph296);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx297[51] = {
   0,
   9.330338e-10,
   7.653376e-08,
   5.0797e-07,
   2.128083e-06,
   5.147399e-05,
   7.198104e-05,
   0.0001227121,
   0.0002176962,
   0.0008060823,
   0.0012608,
   0.002097039,
   0.003418975,
   0.005959229,
   0.008668272,
   0.01182108,
   0.0164659,
   0.02202951,
   0.02807222,
   0.03427909,
   0.04140945,
   0.05061175,
   0.06058689,
   0.07168628,
   0.08530383,
   0.09998884,
   0.1133256,
   0.1297578,
   0.1473231,
   0.1652769,
   0.1878839,
   0.209521,
   0.2324279,
   0.2557099,
   0.28158,
   0.3074402,
   0.3393014,
   0.3759039,
   0.4137208,
   0.4558217,
   0.5019634,
   0.5486451,
   0.5974493,
   0.653402,
   0.7110863,
   0.7709831,
   0.8340811,
   0.8959732,
   0.9476312,
   0.9874644,
   1};
   Double_t Graph_fy297[51] = {
   0,
   0,
   0,
   0,
   7.188436e-05,
   8.602444e-05,
   8.602444e-05,
   0.0006108716,
   0.0009477676,
   0.002261789,
   0.003541211,
   0.005552247,
   0.009422427,
   0.01426709,
   0.01970764,
   0.02700881,
   0.0358438,
   0.0458146,
   0.05857887,
   0.07350986,
   0.08866898,
   0.1067115,
   0.1270636,
   0.1474506,
   0.1700745,
   0.1947609,
   0.2209554,
   0.2472132,
   0.275953,
   0.3028632,
   0.3296823,
   0.3600647,
   0.394687,
   0.428338,
   0.4641068,
   0.4989589,
   0.5360383,
   0.5721499,
   0.6112703,
   0.6519453,
   0.6943344,
   0.7340662,
   0.7774962,
   0.8201384,
   0.8625197,
   0.9021945,
   0.9357907,
   0.9640004,
   0.9852888,
   0.9965707,
   1};
   graph = new TGraph(51,Graph_fx297,Graph_fy297);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph297 = new TH1F("Graph_Graph297","Tagging Prioritized",100,0,1.1);
   Graph_Graph297->SetMinimum(0);
   Graph_Graph297->SetMaximum(1.1);
   Graph_Graph297->SetDirectory(0);
   Graph_Graph297->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph297->SetLineColor(ci);
   Graph_Graph297->GetXaxis()->SetLabelFont(42);
   Graph_Graph297->GetXaxis()->SetTitleOffset(1);
   Graph_Graph297->GetXaxis()->SetTitleFont(42);
   Graph_Graph297->GetYaxis()->SetLabelFont(42);
   Graph_Graph297->GetYaxis()->SetTitleFont(42);
   Graph_Graph297->GetZaxis()->SetLabelFont(42);
   Graph_Graph297->GetZaxis()->SetTitleOffset(1);
   Graph_Graph297->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph297);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Sphericity_18->Modified();
   ROC_Sphericity_18->cd();
   ROC_Sphericity_18->SetSelected(ROC_Sphericity_18);
}
