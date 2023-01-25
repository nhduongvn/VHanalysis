#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet1_16()
{
//=========Macro generated from canvas: ROC_jets_pt_jet1_16/ROC_jets_pt_jet1_16
//=========  (Tue Jan 24 10:54:39 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet1_16 = new TCanvas("ROC_jets_pt_jet1_16", "ROC_jets_pt_jet1_16",0,0,600,600);
   ROC_jets_pt_jet1_16->SetHighLightColor(2);
   ROC_jets_pt_jet1_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet1_16->SetFillColor(0);
   ROC_jets_pt_jet1_16->SetBorderMode(0);
   ROC_jets_pt_jet1_16->SetBorderSize(2);
   ROC_jets_pt_jet1_16->SetGridx();
   ROC_jets_pt_jet1_16->SetGridy();
   ROC_jets_pt_jet1_16->SetLeftMargin(0.15709);
   ROC_jets_pt_jet1_16->SetRightMargin(0.1234783);
   ROC_jets_pt_jet1_16->SetBottomMargin(0.12);
   ROC_jets_pt_jet1_16->SetFrameBorderMode(0);
   ROC_jets_pt_jet1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1960[200] = {
   0,
   0,
   0,
   0,
   0.113595,
   0.2667864,
   0.4230406,
   0.5509916,
   0.6491202,
   0.7234078,
   0.7808806,
   0.8244906,
   0.858395,
   0.8844445,
   0.905078,
   0.9212795,
   0.9344182,
   0.9448604,
   0.9534001,
   0.9602211,
   0.9658783,
   0.9705298,
   0.9743686,
   0.9777588,
   0.9805814,
   0.9827562,
   0.9847546,
   0.9863864,
   0.9877918,
   0.9890246,
   0.9901031,
   0.9910177,
   0.9919021,
   0.9925883,
   0.9932066,
   0.9937494,
   0.9942149,
   0.9946909,
   0.9950975,
   0.9954263,
   0.9957325,
   0.996038,
   0.996315,
   0.996548,
   0.996781,
   0.9969825,
   0.9971678,
   0.99734,
   0.9975088,
   0.9976535,
   0.9977974,
   0.9979311,
   0.998053,
   0.9981762,
   0.9982933,
   0.9984154,
   0.9985171,
   0.9986049,
   0.9986638,
   0.99873,
   0.9988069,
   0.9988737,
   0.9989266,
   0.9989998,
   0.9990514,
   0.9991149,
   0.9991686,
   0.9992161,
   0.9992606,
   0.9993017,
   0.9993505,
   0.9993878,
   0.9994262,
   0.99946,
   0.999499,
   0.9995245,
   0.9995424,
   0.9995741,
   0.9995872,
   0.9996168,
   0.9996377,
   0.9996606,
   0.9996788,
   0.99969,
   0.9997078,
   0.9997241,
   0.9997496,
   0.9997605,
   0.9997721,
   0.9997837,
   0.9998002,
   0.9998106,
   0.9998225,
   0.9998338,
   0.9998408,
   0.999858,
   0.9998684,
   0.9998761,
   0.9998813,
   0.999891,
   0.9998979,
   0.9999043,
   0.9999075,
   0.9999145,
   0.999921,
   0.9999268,
   0.9999277,
   0.9999286,
   0.9999298,
   0.9999339,
   0.999935,
   0.9999372,
   0.9999384,
   0.9999425,
   0.999945,
   0.9999469,
   0.9999473,
   0.99995,
   0.9999507,
   0.9999534,
   0.9999541,
   0.99996,
   0.9999609,
   0.999963,
   0.9999657,
   0.9999667,
   0.9999698,
   0.9999732,
   0.9999765,
   0.999977,
   0.9999783,
   0.9999815,
   0.9999817,
   0.9999823,
   0.9999827,
   0.9999859,
   0.9999862,
   0.9999865,
   0.9999874,
   0.9999874,
   0.9999877,
   0.9999877,
   0.9999883,
   0.9999883,
   0.9999909,
   0.9999915,
   0.9999918,
   0.9999918,
   0.9999918,
   0.9999918,
   0.9999921,
   0.9999952,
   0.9999952,
   0.9999952,
   0.9999952,
   0.9999952,
   0.9999952,
   0.9999955,
   0.9999959,
   0.9999962,
   0.9999965,
   0.9999968,
   0.9999968,
   0.9999968,
   0.9999971,
   0.9999971,
   0.9999974,
   0.9999974,
   0.9999974,
   0.999998,
   0.999998,
   0.999998,
   0.9999983,
   0.9999983,
   0.9999983,
   0.9999986,
   0.9999988,
   0.9999991,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999994,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy1960[200] = {
   0,
   0,
   0,
   0,
   0.4384191,
   0.7030146,
   0.8444874,
   0.9127827,
   0.9475161,
   0.9665171,
   0.9776071,
   0.9844481,
   0.9888767,
   0.9918363,
   0.9938786,
   0.9953242,
   0.9963713,
   0.9971469,
   0.9977313,
   0.9981783,
   0.9985239,
   0.9987935,
   0.9990069,
   0.9991766,
   0.9993131,
   0.9994234,
   0.999513,
   0.9995872,
   0.9996482,
   0.9996992,
   0.999742,
   0.999778,
   0.9998081,
   0.9998335,
   0.9998552,
   0.9998738,
   0.9998896,
   0.9999032,
   0.9999148,
   0.999925,
   0.9999337,
   0.9999413,
   0.9999479,
   0.9999538,
   0.9999588,
   0.9999631,
   0.9999669,
   0.9999702,
   0.9999731,
   0.9999757,
   0.999978,
   0.99998,
   0.9999818,
   0.9999834,
   0.9999848,
   0.9999861,
   0.9999873,
   0.9999883,
   0.9999893,
   0.9999902,
   0.999991,
   0.9999918,
   0.9999924,
   0.999993,
   0.9999935,
   0.999994,
   0.9999945,
   0.9999949,
   0.9999953,
   0.9999956,
   0.9999959,
   0.9999962,
   0.9999965,
   0.9999968,
   0.999997,
   0.9999972,
   0.9999974,
   0.9999976,
   0.9999978,
   0.9999979,
   0.9999981,
   0.9999982,
   0.9999984,
   0.9999985,
   0.9999986,
   0.9999987,
   0.9999988,
   0.9999988,
   0.9999989,
   0.999999,
   0.9999991,
   0.9999991,
   0.9999992,
   0.9999992,
   0.9999993,
   0.9999993,
   0.9999994,
   0.9999994,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999997,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999998,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   0.9999999,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(200,Graph_fx1960,Graph_fy1960);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1960 = new TH1F("Graph_Graph1960","",200,0,1.1);
   Graph_Graph1960->SetMinimum(0);
   Graph_Graph1960->SetMaximum(1.1);
   Graph_Graph1960->SetDirectory(0);
   Graph_Graph1960->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1960->SetLineColor(ci);
   Graph_Graph1960->GetXaxis()->SetLabelFont(42);
   Graph_Graph1960->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1960->GetXaxis()->SetTitleFont(42);
   Graph_Graph1960->GetYaxis()->SetLabelFont(42);
   Graph_Graph1960->GetYaxis()->SetTitleFont(42);
   Graph_Graph1960->GetZaxis()->SetLabelFont(42);
   Graph_Graph1960->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1960->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1960);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1961);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1962);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1963);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1964);
      tex = new TLatex(0.113595,0.4984191,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1965);
      tex = new TLatex(0.2667864,0.7630146,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1966);
      tex = new TLatex(0.4230406,0.9044874,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1967);
      tex = new TLatex(0.5509916,0.9727827,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1968);
      tex = new TLatex(0.6491202,1.007516,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1969);
      tex = new TLatex(0.7234078,1.026517,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1970);
      tex = new TLatex(0.7808806,1.037607,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1971);
      tex = new TLatex(0.8244906,1.044448,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1972);
      tex = new TLatex(0.858395,1.048877,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1973);
      tex = new TLatex(0.8844445,1.051836,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1974);
      tex = new TLatex(0.905078,1.053879,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1975);
      tex = new TLatex(0.9212795,1.055324,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1976);
      tex = new TLatex(0.9344182,1.056371,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1977);
      tex = new TLatex(0.9448604,1.057147,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1978);
      tex = new TLatex(0.9534001,1.057731,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1979);
      tex = new TLatex(0.9602211,1.058178,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1980);
      tex = new TLatex(0.9658783,1.058524,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1981);
      tex = new TLatex(0.9705298,1.058794,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1982);
      tex = new TLatex(0.9743686,1.059007,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1983);
      tex = new TLatex(0.9777588,1.059177,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1984);
      tex = new TLatex(0.9805814,1.059313,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1985);
      tex = new TLatex(0.9827562,1.059423,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1986);
      tex = new TLatex(0.9847546,1.059513,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1987);
      tex = new TLatex(0.9863864,1.059587,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1988);
      tex = new TLatex(0.9877918,1.059648,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1989);
      tex = new TLatex(0.9890246,1.059699,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1990);
      tex = new TLatex(0.9901031,1.059742,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1991);
      tex = new TLatex(0.9910177,1.059778,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1992);
      tex = new TLatex(0.9919021,1.059808,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1993);
      tex = new TLatex(0.9925883,1.059834,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1994);
      tex = new TLatex(0.9932066,1.059855,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1995);
      tex = new TLatex(0.9937494,1.059874,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1996);
      tex = new TLatex(0.9942149,1.05989,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1997);
      tex = new TLatex(0.9946909,1.059903,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1998);
      tex = new TLatex(0.9950975,1.059915,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1999);
      tex = new TLatex(0.9954263,1.059925,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2000);
      tex = new TLatex(0.9957325,1.059934,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2001);
      tex = new TLatex(0.996038,1.059941,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2002);
      tex = new TLatex(0.996315,1.059948,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2003);
      tex = new TLatex(0.996548,1.059954,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2004);
      tex = new TLatex(0.996781,1.059959,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2005);
      tex = new TLatex(0.9969825,1.059963,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2006);
      tex = new TLatex(0.9971678,1.059967,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2007);
      tex = new TLatex(0.99734,1.05997,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2008);
      tex = new TLatex(0.9975088,1.059973,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2009);
      tex = new TLatex(0.9976535,1.059976,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2010);
      tex = new TLatex(0.9977974,1.059978,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2011);
      tex = new TLatex(0.9979311,1.05998,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2012);
      tex = new TLatex(0.998053,1.059982,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2013);
      tex = new TLatex(0.9981762,1.059983,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2014);
      tex = new TLatex(0.9982933,1.059985,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2015);
      tex = new TLatex(0.9984154,1.059986,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2016);
      tex = new TLatex(0.9985171,1.059987,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2017);
      tex = new TLatex(0.9986049,1.059988,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2018);
      tex = new TLatex(0.9986638,1.059989,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2019);
      tex = new TLatex(0.99873,1.05999,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2020);
      tex = new TLatex(0.9988069,1.059991,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2021);
      tex = new TLatex(0.9988737,1.059992,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2022);
      tex = new TLatex(0.9989266,1.059992,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2023);
      tex = new TLatex(0.9989998,1.059993,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2024);
      tex = new TLatex(0.9990514,1.059994,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2025);
      tex = new TLatex(0.9991149,1.059994,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2026);
      tex = new TLatex(0.9991686,1.059994,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2027);
      tex = new TLatex(0.9992161,1.059995,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2028);
      tex = new TLatex(0.9992606,1.059995,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2029);
      tex = new TLatex(0.9993017,1.059996,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2030);
      tex = new TLatex(0.9993505,1.059996,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2031);
      tex = new TLatex(0.9993878,1.059996,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2032);
      tex = new TLatex(0.9994262,1.059997,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2033);
      tex = new TLatex(0.99946,1.059997,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2034);
      tex = new TLatex(0.999499,1.059997,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2035);
      tex = new TLatex(0.9995245,1.059997,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2036);
      tex = new TLatex(0.9995424,1.059997,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2037);
      tex = new TLatex(0.9995741,1.059998,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2038);
      tex = new TLatex(0.9995872,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2039);
      tex = new TLatex(0.9996168,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2040);
      tex = new TLatex(0.9996377,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2041);
      tex = new TLatex(0.9996606,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2042);
      tex = new TLatex(0.9996788,1.059998,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2043);
      tex = new TLatex(0.99969,1.059998,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2044);
      tex = new TLatex(0.9997078,1.059999,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2045);
      tex = new TLatex(0.9997241,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2046);
      tex = new TLatex(0.9997496,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2047);
      tex = new TLatex(0.9997605,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2048);
      tex = new TLatex(0.9997721,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2049);
      tex = new TLatex(0.9997837,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2050);
      tex = new TLatex(0.9998002,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2051);
      tex = new TLatex(0.9998106,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2052);
      tex = new TLatex(0.9998225,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2053);
      tex = new TLatex(0.9998338,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2054);
      tex = new TLatex(0.9998408,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2055);
      tex = new TLatex(0.999858,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2056);
      tex = new TLatex(0.9998684,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2057);
      tex = new TLatex(0.9998761,1.059999,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2058);
      tex = new TLatex(0.9998813,1.059999,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2059);
      tex = new TLatex(0.999891,1.059999,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2060);
      tex = new TLatex(0.9998979,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2061);
      tex = new TLatex(0.9999043,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2062);
      tex = new TLatex(0.9999075,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2063);
      tex = new TLatex(0.9999145,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2064);
      tex = new TLatex(0.999921,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2065);
      tex = new TLatex(0.9999268,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2066);
      tex = new TLatex(0.9999277,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2067);
      tex = new TLatex(0.9999286,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2068);
      tex = new TLatex(0.9999298,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2069);
      tex = new TLatex(0.9999339,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2070);
      tex = new TLatex(0.999935,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2071);
      tex = new TLatex(0.9999372,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2072);
      tex = new TLatex(0.9999384,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2073);
      tex = new TLatex(0.9999425,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2074);
      tex = new TLatex(0.999945,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2075);
      tex = new TLatex(0.9999469,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2076);
      tex = new TLatex(0.9999473,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2077);
      tex = new TLatex(0.99995,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2078);
      tex = new TLatex(0.9999507,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2079);
      tex = new TLatex(0.9999534,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2080);
      tex = new TLatex(0.9999541,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2081);
      tex = new TLatex(0.99996,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2082);
      tex = new TLatex(0.9999609,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2083);
      tex = new TLatex(0.999963,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2084);
      tex = new TLatex(0.9999657,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2085);
      tex = new TLatex(0.9999667,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2086);
      tex = new TLatex(0.9999698,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2087);
      tex = new TLatex(0.9999732,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2088);
      tex = new TLatex(0.9999765,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2089);
      tex = new TLatex(0.999977,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2090);
      tex = new TLatex(0.9999783,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2091);
      tex = new TLatex(0.9999815,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2092);
      tex = new TLatex(0.9999817,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2093);
      tex = new TLatex(0.9999823,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2094);
      tex = new TLatex(0.9999827,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2095);
      tex = new TLatex(0.9999859,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2096);
      tex = new TLatex(0.9999862,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2097);
      tex = new TLatex(0.9999865,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2098);
      tex = new TLatex(0.9999874,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2099);
      tex = new TLatex(0.9999874,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2100);
      tex = new TLatex(0.9999877,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2101);
      tex = new TLatex(0.9999877,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2102);
      tex = new TLatex(0.9999883,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2103);
      tex = new TLatex(0.9999883,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2104);
      tex = new TLatex(0.9999909,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2105);
      tex = new TLatex(0.9999915,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2106);
      tex = new TLatex(0.9999918,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2107);
      tex = new TLatex(0.9999918,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2108);
      tex = new TLatex(0.9999918,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2109);
      tex = new TLatex(0.9999918,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2110);
      tex = new TLatex(0.9999921,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2111);
      tex = new TLatex(0.9999952,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2112);
      tex = new TLatex(0.9999952,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2113);
      tex = new TLatex(0.9999952,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2114);
      tex = new TLatex(0.9999952,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2115);
      tex = new TLatex(0.9999952,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2116);
      tex = new TLatex(0.9999952,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2117);
      tex = new TLatex(0.9999955,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2118);
      tex = new TLatex(0.9999959,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2119);
      tex = new TLatex(0.9999962,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2120);
      tex = new TLatex(0.9999965,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2121);
      tex = new TLatex(0.9999968,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2122);
      tex = new TLatex(0.9999968,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2123);
      tex = new TLatex(0.9999968,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2124);
      tex = new TLatex(0.9999971,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2125);
      tex = new TLatex(0.9999971,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2126);
      tex = new TLatex(0.9999974,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2127);
      tex = new TLatex(0.9999974,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2128);
      tex = new TLatex(0.9999974,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2129);
      tex = new TLatex(0.999998,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2130);
      tex = new TLatex(0.999998,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2131);
      tex = new TLatex(0.999998,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2132);
      tex = new TLatex(0.9999983,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2133);
      tex = new TLatex(0.9999983,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2134);
      tex = new TLatex(0.9999983,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2135);
      tex = new TLatex(0.9999986,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2136);
      tex = new TLatex(0.9999988,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2137);
      tex = new TLatex(0.9999991,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2138);
      tex = new TLatex(0.9999994,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2139);
      tex = new TLatex(0.9999994,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2140);
      tex = new TLatex(0.9999994,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2141);
      tex = new TLatex(0.9999994,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2142);
      tex = new TLatex(0.9999994,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2143);
      tex = new TLatex(0.9999994,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2144);
      tex = new TLatex(0.9999994,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2145);
      tex = new TLatex(0.9999994,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2146);
      tex = new TLatex(0.9999994,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2147);
      tex = new TLatex(0.9999994,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2148);
      tex = new TLatex(0.9999997,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2149);
      tex = new TLatex(0.9999997,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2150);
      tex = new TLatex(0.9999997,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2151);
      tex = new TLatex(0.9999997,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2152);
      tex = new TLatex(0.9999997,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2153);
      tex = new TLatex(0.9999997,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2154);
      tex = new TLatex(0.9999997,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2155);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2156);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2157);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2158);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2159);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2160);
   graph->Draw("nodraw #2105
");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_pt_jet1_16->Modified();
   ROC_jets_pt_jet1_16->cd();
   ROC_jets_pt_jet1_16->SetSelected(ROC_jets_pt_jet1_16);
}
