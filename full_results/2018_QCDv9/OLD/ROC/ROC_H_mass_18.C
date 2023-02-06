#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_mass_18()
{
//=========Macro generated from canvas: ROC_H_mass_18/ROC_H_mass_18
//=========  (Tue Jan 24 15:01:26 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_mass_18 = new TCanvas("ROC_H_mass_18", "ROC_H_mass_18",0,0,600,600);
   ROC_H_mass_18->SetHighLightColor(2);
   ROC_H_mass_18->Range(-0.2897866,-0.1614931,1.237082,1.184283);
   ROC_H_mass_18->SetFillColor(0);
   ROC_H_mass_18->SetBorderMode(0);
   ROC_H_mass_18->SetBorderSize(2);
   ROC_H_mass_18->SetGridx();
   ROC_H_mass_18->SetGridy();
   ROC_H_mass_18->SetLeftMargin(0.15709);
   ROC_H_mass_18->SetRightMargin(0.1234783);
   ROC_H_mass_18->SetBottomMargin(0.12);
   ROC_H_mass_18->SetFrameBorderMode(0);
   ROC_H_mass_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx101[40] = {
   0,
   0,
   0.0008681226,
   0.0212539,
   0.0628667,
   0.1129174,
   0.1573073,
   0.2193847,
   0.2926,
   0.3670007,
   0.4355706,
   0.4956933,
   0.5492176,
   0.5979402,
   0.6435866,
   0.6803991,
   0.7184754,
   0.7496983,
   0.7755925,
   0.7984773,
   0.8220774,
   0.8419073,
   0.8609133,
   0.8763444,
   0.8904562,
   0.9038839,
   0.9147952,
   0.9253458,
   0.9345976,
   0.9431956,
   0.9515853,
   0.9590399,
   0.9650307,
   0.9710467,
   0.9761197,
   0.9814847,
   0.9854447,
   0.9892708,
   0.9925137,
   0.9957178};
   Double_t Graph_fy101[40] = {
   0,
   0,
   0,
   0.004852385,
   0.01547079,
   0.03223128,
   0.05455084,
   0.08449036,
   0.1255896,
   0.1766808,
   0.2567607,
   0.3509691,
   0.485309,
   0.6180158,
   0.7118981,
   0.7665152,
   0.7958711,
   0.8195829,
   0.8417892,
   0.85908,
   0.8750503,
   0.8862413,
   0.9010877,
   0.9127969,
   0.9219753,
   0.930849,
   0.9394926,
   0.9466835,
   0.9541242,
   0.9590018,
   0.964975,
   0.9698163,
   0.974841,
   0.979351,
   0.9825861,
   0.9862799,
   0.9895353,
   0.99147,
   0.9948668,
   0.997702};
   TGraph *graph = new TGraph(40,Graph_fx101,Graph_fy101);
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
   
   TH1F *Graph_Graph101 = new TH1F("Graph_Graph101","Tagging Only",100,0,1.09529);
   Graph_Graph101->SetMinimum(0);
   Graph_Graph101->SetMaximum(1.097472);
   Graph_Graph101->SetDirectory(0);
   Graph_Graph101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph101->SetLineColor(ci);
   Graph_Graph101->GetXaxis()->SetLabelFont(42);
   Graph_Graph101->GetXaxis()->SetTitleOffset(1);
   Graph_Graph101->GetXaxis()->SetTitleFont(42);
   Graph_Graph101->GetYaxis()->SetLabelFont(42);
   Graph_Graph101->GetYaxis()->SetTitleFont(42);
   Graph_Graph101->GetZaxis()->SetLabelFont(42);
   Graph_Graph101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph101->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph101);
   
   TLatex *   tex = new TLatex(0.0628667,0.07547079,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(102);
      tex = new TLatex(0.1129174,0.09223128,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(103);
      tex = new TLatex(0.1573073,0.1145508,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(104);
      tex = new TLatex(0.2193847,0.1444904,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(105);
      tex = new TLatex(0.2926,0.1855896,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(106);
      tex = new TLatex(0.3670007,0.2366808,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(107);
      tex = new TLatex(0.4355706,0.3167607,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(108);
      tex = new TLatex(0.4956933,0.4109691,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(109);
      tex = new TLatex(0.5492176,0.545309,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(110);
      tex = new TLatex(0.5979402,0.6780158,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(111);
      tex = new TLatex(0.6435866,0.7718981,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(112);
      tex = new TLatex(0.6803991,0.8265152,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(113);
      tex = new TLatex(0.7184754,0.8558711,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(114);
      tex = new TLatex(0.7496983,0.8795829,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(115);
      tex = new TLatex(0.7755925,0.9017892,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(116);
      tex = new TLatex(0.7984773,0.91908,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(117);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx118[40] = {
   0,
   0,
   4.549614e-08,
   0.007540334,
   0.04550167,
   0.1009849,
   0.149015,
   0.2055876,
   0.2680472,
   0.3358209,
   0.3997086,
   0.4615807,
   0.5220948,
   0.5817816,
   0.631863,
   0.6843294,
   0.7314546,
   0.7673136,
   0.8004889,
   0.8246955,
   0.8577382,
   0.8824025,
   0.9030289,
   0.9198227,
   0.9339078,
   0.9447669,
   0.9552913,
   0.9618363,
   0.9665184,
   0.9712651,
   0.9768464,
   0.9803555,
   0.9839233,
   0.9872261,
   0.9903224,
   0.9928535,
   0.9945797,
   0.9960532,
   0.9972332,
   0.998616};
   Double_t Graph_fy118[40] = {
   0,
   0,
   0,
   0,
   0.001455331,
   0.003216537,
   0.01072889,
   0.02413726,
   0.05106511,
   0.09623258,
   0.1707675,
   0.2785841,
   0.4612174,
   0.6712098,
   0.8085114,
   0.8851437,
   0.9083514,
   0.9249525,
   0.9400158,
   0.9481685,
   0.9549067,
   0.9582352,
   0.96471,
   0.9687693,
   0.9717182,
   0.9756982,
   0.9780879,
   0.9796993,
   0.9843882,
   0.9851625,
   0.9875311,
   0.9902337,
   0.9916512,
   0.9927348,
   0.9938475,
   0.9956172,
   0.9964638,
   0.9979407,
   0.999394,
   0.9997191};
   graph = new TGraph(40,Graph_fx118,Graph_fy118);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph118 = new TH1F("Graph_Graph118","Mass-Matching Prioritized",100,0,1.098478);
   Graph_Graph118->SetMinimum(0);
   Graph_Graph118->SetMaximum(1.099691);
   Graph_Graph118->SetDirectory(0);
   Graph_Graph118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph118->SetLineColor(ci);
   Graph_Graph118->GetXaxis()->SetLabelFont(42);
   Graph_Graph118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph118->GetXaxis()->SetTitleFont(42);
   Graph_Graph118->GetYaxis()->SetLabelFont(42);
   Graph_Graph118->GetYaxis()->SetTitleFont(42);
   Graph_Graph118->GetZaxis()->SetLabelFont(42);
   Graph_Graph118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph118);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx119[40] = {
   0,
   0,
   0.0008575197,
   0.02110578,
   0.06271412,
   0.1122905,
   0.1567678,
   0.2191905,
   0.2923439,
   0.3666578,
   0.4349568,
   0.4942361,
   0.5487265,
   0.5972226,
   0.642891,
   0.680146,
   0.717668,
   0.748961,
   0.7750031,
   0.7980456,
   0.8216618,
   0.8418489,
   0.8607147,
   0.8760592,
   0.890151,
   0.904027,
   0.9146864,
   0.9252169,
   0.9344156,
   0.9430041,
   0.9513392,
   0.9587595,
   0.964794,
   0.9708531,
   0.9761026,
   0.9814462,
   0.9854926,
   0.9892835,
   0.9925426,
   0.9957465};
   Double_t Graph_fy119[40] = {
   0,
   0,
   0.0001077504,
   0.004838239,
   0.01540874,
   0.03223203,
   0.05403882,
   0.08469047,
   0.1269498,
   0.1788917,
   0.2578821,
   0.3476842,
   0.4753605,
   0.6015415,
   0.6933057,
   0.7484851,
   0.7784272,
   0.8023136,
   0.825655,
   0.8441647,
   0.8614262,
   0.8736015,
   0.890621,
   0.9028561,
   0.9132634,
   0.9235747,
   0.9333171,
   0.9409416,
   0.9486459,
   0.954319,
   0.9607247,
   0.9664846,
   0.9718318,
   0.9769556,
   0.9803824,
   0.9842824,
   0.987598,
   0.9900381,
   0.9934921,
   0.9973421};
   graph = new TGraph(40,Graph_fx119,Graph_fy119);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph119 = new TH1F("Graph_Graph119","Tagging Prioritized",100,0,1.095321);
   Graph_Graph119->SetMinimum(0);
   Graph_Graph119->SetMaximum(1.097076);
   Graph_Graph119->SetDirectory(0);
   Graph_Graph119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph119->SetLineColor(ci);
   Graph_Graph119->GetXaxis()->SetLabelFont(42);
   Graph_Graph119->GetXaxis()->SetTitleOffset(1);
   Graph_Graph119->GetXaxis()->SetTitleFont(42);
   Graph_Graph119->GetYaxis()->SetLabelFont(42);
   Graph_Graph119->GetYaxis()->SetTitleFont(42);
   Graph_Graph119->GetZaxis()->SetLabelFont(42);
   Graph_Graph119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph119);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.0499308, 1.048547);
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
   ROC_H_mass_18->Modified();
   ROC_H_mass_18->cd();
   ROC_H_mass_18->SetSelected(ROC_H_mass_18);
}
