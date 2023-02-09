#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet0_17()
{
//=========Macro generated from canvas: ROC_jets_pt_jet0_17/ROC_jets_pt_jet0_17
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet0_17 = new TCanvas("ROC_jets_pt_jet0_17", "ROC_jets_pt_jet0_17",0,0,600,600);
   ROC_jets_pt_jet0_17->SetHighLightColor(2);
   ROC_jets_pt_jet0_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet0_17->SetFillColor(0);
   ROC_jets_pt_jet0_17->SetBorderMode(0);
   ROC_jets_pt_jet0_17->SetBorderSize(2);
   ROC_jets_pt_jet0_17->SetGridx();
   ROC_jets_pt_jet0_17->SetGridy();
   ROC_jets_pt_jet0_17->SetLeftMargin(0.15709);
   ROC_jets_pt_jet0_17->SetRightMargin(0.1234783);
   ROC_jets_pt_jet0_17->SetBottomMargin(0.12);
   ROC_jets_pt_jet0_17->SetFrameBorderMode(0);
   ROC_jets_pt_jet0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1558[200] = {
   0,
   0,
   0,
   0,
   0.03561085,
   0.09812734,
   0.1920156,
   0.3050913,
   0.4183407,
   0.5187956,
   0.6037611,
   0.6732144,
   0.7292762,
   0.7752768,
   0.8125625,
   0.8429944,
   0.8681273,
   0.8886157,
   0.905529,
   0.919252,
   0.9312589,
   0.9408335,
   0.9488575,
   0.9553756,
   0.96113,
   0.9660252,
   0.970213,
   0.973761,
   0.9768693,
   0.9794252,
   0.9817732,
   0.9837212,
   0.9853898,
   0.9868436,
   0.9882166,
   0.9893761,
   0.9903902,
   0.9912369,
   0.9919573,
   0.9926672,
   0.9932305,
   0.9937486,
   0.9942739,
   0.9946995,
   0.995123,
   0.99553,
   0.9959255,
   0.9962537,
   0.996564,
   0.9968275,
   0.9971013,
   0.9973483,
   0.9975775,
   0.9977919,
   0.9979874,
   0.9981558,
   0.9983038,
   0.9984723,
   0.9985856,
   0.9986656,
   0.9987628,
   0.9988612,
   0.9989564,
   0.9990215,
   0.9990952,
   0.9991768,
   0.9992372,
   0.9992895,
   0.9993273,
   0.9993748,
   0.9994145,
   0.9994525,
   0.9995041,
   0.999567,
   0.9996032,
   0.9996211,
   0.9996416,
   0.9996738,
   0.9996993,
   0.9997201,
   0.999735,
   0.9997555,
   0.9997708,
   0.999778,
   0.9997896,
   0.9997994,
   0.9998142,
   0.9998289,
   0.9998418,
   0.9998504,
   0.9998608,
   0.9998642,
   0.9998712,
   0.9998752,
   0.9998879,
   0.9998965,
   0.9999008,
   0.9999085,
   0.9999128,
   0.9999167,
   0.9999174,
   0.999922,
   0.999927,
   0.9999306,
   0.9999343,
   0.9999388,
   0.9999429,
   0.9999432,
   0.9999461,
   0.9999509,
   0.9999509,
   0.999953,
   0.999953,
   0.9999554,
   0.9999645,
   0.9999669,
   0.9999722,
   0.9999776,
   0.9999776,
   0.9999776,
   0.99998,
   0.99998,
   0.99998,
   0.9999802,
   0.9999805,
   0.9999805,
   0.9999824,
   0.9999824,
   0.9999849,
   0.9999853,
   0.9999853,
   0.9999853,
   0.9999853,
   0.999988,
   0.999988,
   0.99999,
   0.99999,
   0.9999921,
   0.9999921,
   0.9999921,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999948,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999954,
   0.9999972,
   0.9999972,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
   0.9999975,
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
   Double_t Graph_fy1558[200] = {
   0,
   0,
   0,
   0,
   0.2186031,
   0.4658042,
   0.6777759,
   0.8156989,
   0.892301,
   0.9340068,
   0.9576828,
   0.9717657,
   0.9805107,
   0.9861532,
   0.9899368,
   0.9925289,
   0.994341,
   0.9956416,
   0.9965935,
   0.9973047,
   0.9978451,
   0.9982591,
   0.9985814,
   0.9988343,
   0.9990353,
   0.9991969,
   0.9993262,
   0.9994328,
   0.9995203,
   0.9995924,
   0.9996522,
   0.9997019,
   0.9997435,
   0.9997785,
   0.999808,
   0.9998328,
   0.999854,
   0.999872,
   0.9998874,
   0.9999011,
   0.9999129,
   0.9999231,
   0.9999318,
   0.9999394,
   0.999946,
   0.9999519,
   0.999957,
   0.9999615,
   0.9999654,
   0.9999689,
   0.999972,
   0.9999748,
   0.9999772,
   0.9999794,
   0.9999813,
   0.9999831,
   0.9999847,
   0.9999861,
   0.9999874,
   0.9999885,
   0.9999895,
   0.9999904,
   0.9999913,
   0.999992,
   0.9999927,
   0.9999934,
   0.9999939,
   0.9999944,
   0.9999949,
   0.9999953,
   0.9999957,
   0.999996,
   0.9999964,
   0.9999966,
   0.9999969,
   0.9999971,
   0.9999974,
   0.9999976,
   0.9999977,
   0.9999979,
   0.9999981,
   0.9999982,
   0.9999983,
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
   1,
   1};
   TGraph *graph = new TGraph(200,Graph_fx1558,Graph_fy1558);
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
   
   TH1F *Graph_Graph1558 = new TH1F("Graph_Graph1558","",200,0,1.1);
   Graph_Graph1558->SetMinimum(0);
   Graph_Graph1558->SetMaximum(1.1);
   Graph_Graph1558->SetDirectory(0);
   Graph_Graph1558->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1558->SetLineColor(ci);
   Graph_Graph1558->GetXaxis()->SetLabelFont(42);
   Graph_Graph1558->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1558->GetXaxis()->SetTitleFont(42);
   Graph_Graph1558->GetYaxis()->SetLabelFont(42);
   Graph_Graph1558->GetYaxis()->SetTitleFont(42);
   Graph_Graph1558->GetZaxis()->SetLabelFont(42);
   Graph_Graph1558->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1558->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1558);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1559);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1560);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1561);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1562);
      tex = new TLatex(0.03561085,0.2786031,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1563);
      tex = new TLatex(0.09812734,0.5258042,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1564);
      tex = new TLatex(0.1920156,0.7377759,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1565);
      tex = new TLatex(0.3050913,0.8756989,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1566);
      tex = new TLatex(0.4183407,0.952301,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1567);
      tex = new TLatex(0.5187956,0.9940068,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1568);
      tex = new TLatex(0.6037611,1.017683,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1569);
      tex = new TLatex(0.6732144,1.031766,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1570);
      tex = new TLatex(0.7292762,1.040511,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1571);
      tex = new TLatex(0.7752768,1.046153,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1572);
      tex = new TLatex(0.8125625,1.049937,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1573);
      tex = new TLatex(0.8429944,1.052529,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1574);
      tex = new TLatex(0.8681273,1.054341,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1575);
      tex = new TLatex(0.8886157,1.055642,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1576);
      tex = new TLatex(0.905529,1.056594,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1577);
      tex = new TLatex(0.919252,1.057305,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1578);
      tex = new TLatex(0.9312589,1.057845,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1579);
      tex = new TLatex(0.9408335,1.058259,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1580);
      tex = new TLatex(0.9488575,1.058581,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1581);
      tex = new TLatex(0.9553756,1.058834,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1582);
      tex = new TLatex(0.96113,1.059035,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1583);
      tex = new TLatex(0.9660252,1.059197,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1584);
      tex = new TLatex(0.970213,1.059326,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1585);
      tex = new TLatex(0.973761,1.059433,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1586);
      tex = new TLatex(0.9768693,1.05952,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1587);
      tex = new TLatex(0.9794252,1.059592,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1588);
      tex = new TLatex(0.9817732,1.059652,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1589);
      tex = new TLatex(0.9837212,1.059702,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1590);
      tex = new TLatex(0.9853898,1.059744,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1591);
      tex = new TLatex(0.9868436,1.059778,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1592);
      tex = new TLatex(0.9882166,1.059808,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1593);
      tex = new TLatex(0.9893761,1.059833,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1594);
      tex = new TLatex(0.9903902,1.059854,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1595);
      tex = new TLatex(0.9912369,1.059872,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1596);
      tex = new TLatex(0.9919573,1.059887,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1597);
      tex = new TLatex(0.9926672,1.059901,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1598);
      tex = new TLatex(0.9932305,1.059913,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1599);
      tex = new TLatex(0.9937486,1.059923,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1600);
      tex = new TLatex(0.9942739,1.059932,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1601);
      tex = new TLatex(0.9946995,1.059939,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1602);
      tex = new TLatex(0.995123,1.059946,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1603);
      tex = new TLatex(0.99553,1.059952,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1604);
      tex = new TLatex(0.9959255,1.059957,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1605);
      tex = new TLatex(0.9962537,1.059961,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1606);
      tex = new TLatex(0.996564,1.059965,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1607);
      tex = new TLatex(0.9968275,1.059969,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1608);
      tex = new TLatex(0.9971013,1.059972,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1609);
      tex = new TLatex(0.9973483,1.059975,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1610);
      tex = new TLatex(0.9975775,1.059977,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1611);
      tex = new TLatex(0.9977919,1.059979,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1612);
      tex = new TLatex(0.9979874,1.059981,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1613);
      tex = new TLatex(0.9981558,1.059983,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1614);
      tex = new TLatex(0.9983038,1.059985,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1615);
      tex = new TLatex(0.9984723,1.059986,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1616);
      tex = new TLatex(0.9985856,1.059987,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1617);
      tex = new TLatex(0.9986656,1.059988,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1618);
      tex = new TLatex(0.9987628,1.05999,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1619);
      tex = new TLatex(0.9988612,1.05999,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1620);
      tex = new TLatex(0.9989564,1.059991,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1621);
      tex = new TLatex(0.9990215,1.059992,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1622);
      tex = new TLatex(0.9990952,1.059993,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1623);
      tex = new TLatex(0.9991768,1.059993,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1624);
      tex = new TLatex(0.9992372,1.059994,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1625);
      tex = new TLatex(0.9992895,1.059994,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1626);
      tex = new TLatex(0.9993273,1.059995,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1627);
      tex = new TLatex(0.9993748,1.059995,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1628);
      tex = new TLatex(0.9994145,1.059996,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1629);
      tex = new TLatex(0.9994525,1.059996,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1630);
      tex = new TLatex(0.9995041,1.059996,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1631);
      tex = new TLatex(0.999567,1.059997,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1632);
      tex = new TLatex(0.9996032,1.059997,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1633);
      tex = new TLatex(0.9996211,1.059997,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1634);
      tex = new TLatex(0.9996416,1.059997,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1635);
      tex = new TLatex(0.9996738,1.059998,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1636);
      tex = new TLatex(0.9996993,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1637);
      tex = new TLatex(0.9997201,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1638);
      tex = new TLatex(0.999735,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1639);
      tex = new TLatex(0.9997555,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1640);
      tex = new TLatex(0.9997708,1.059998,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1641);
      tex = new TLatex(0.999778,1.059998,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1642);
      tex = new TLatex(0.9997896,1.059999,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1643);
      tex = new TLatex(0.9997994,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1644);
      tex = new TLatex(0.9998142,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1645);
      tex = new TLatex(0.9998289,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1646);
      tex = new TLatex(0.9998418,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1647);
      tex = new TLatex(0.9998504,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1648);
      tex = new TLatex(0.9998608,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1649);
      tex = new TLatex(0.9998642,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1650);
      tex = new TLatex(0.9998712,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1651);
      tex = new TLatex(0.9998752,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1652);
      tex = new TLatex(0.9998879,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1653);
      tex = new TLatex(0.9998965,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1654);
      tex = new TLatex(0.9999008,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1655);
      tex = new TLatex(0.9999085,1.059999,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1656);
      tex = new TLatex(0.9999128,1.059999,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1657);
      tex = new TLatex(0.9999167,1.059999,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1658);
      tex = new TLatex(0.9999174,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1659);
      tex = new TLatex(0.999922,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1660);
      tex = new TLatex(0.999927,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1661);
      tex = new TLatex(0.9999306,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1662);
      tex = new TLatex(0.9999343,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1663);
      tex = new TLatex(0.9999388,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1664);
      tex = new TLatex(0.9999429,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1665);
      tex = new TLatex(0.9999432,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1666);
      tex = new TLatex(0.9999461,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1667);
      tex = new TLatex(0.9999509,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1668);
      tex = new TLatex(0.9999509,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1669);
      tex = new TLatex(0.999953,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1670);
      tex = new TLatex(0.999953,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1671);
      tex = new TLatex(0.9999554,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1672);
      tex = new TLatex(0.9999645,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1673);
      tex = new TLatex(0.9999669,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1674);
      tex = new TLatex(0.9999722,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1675);
      tex = new TLatex(0.9999776,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1676);
      tex = new TLatex(0.9999776,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1677);
      tex = new TLatex(0.9999776,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1678);
      tex = new TLatex(0.99998,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1679);
      tex = new TLatex(0.99998,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1680);
      tex = new TLatex(0.99998,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1681);
      tex = new TLatex(0.9999802,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1682);
      tex = new TLatex(0.9999805,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1683);
      tex = new TLatex(0.9999805,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1684);
      tex = new TLatex(0.9999824,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1685);
      tex = new TLatex(0.9999824,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1686);
      tex = new TLatex(0.9999849,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1687);
      tex = new TLatex(0.9999853,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1688);
      tex = new TLatex(0.9999853,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1689);
      tex = new TLatex(0.9999853,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1690);
      tex = new TLatex(0.9999853,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1691);
      tex = new TLatex(0.999988,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1692);
      tex = new TLatex(0.999988,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1693);
      tex = new TLatex(0.99999,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1694);
      tex = new TLatex(0.99999,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1695);
      tex = new TLatex(0.9999921,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1696);
      tex = new TLatex(0.9999921,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1697);
      tex = new TLatex(0.9999921,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1698);
      tex = new TLatex(0.9999948,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1699);
      tex = new TLatex(0.9999948,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1700);
      tex = new TLatex(0.9999948,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1701);
      tex = new TLatex(0.9999948,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1702);
      tex = new TLatex(0.9999948,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1703);
      tex = new TLatex(0.9999948,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1704);
      tex = new TLatex(0.9999948,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1705);
      tex = new TLatex(0.9999948,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1706);
      tex = new TLatex(0.9999954,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1707);
      tex = new TLatex(0.9999954,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1708);
      tex = new TLatex(0.9999954,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1709);
      tex = new TLatex(0.9999954,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1710);
      tex = new TLatex(0.9999954,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1711);
      tex = new TLatex(0.9999954,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1712);
      tex = new TLatex(0.9999954,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1713);
      tex = new TLatex(0.9999954,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1714);
      tex = new TLatex(0.9999954,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1715);
      tex = new TLatex(0.9999954,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1716);
      tex = new TLatex(0.9999972,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1717);
      tex = new TLatex(0.9999972,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1718);
      tex = new TLatex(0.9999975,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1719);
      tex = new TLatex(0.9999975,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1720);
      tex = new TLatex(0.9999975,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1721);
      tex = new TLatex(0.9999975,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1722);
      tex = new TLatex(0.9999975,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1723);
      tex = new TLatex(0.9999975,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1724);
      tex = new TLatex(0.9999975,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1725);
      tex = new TLatex(0.9999975,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1726);
      tex = new TLatex(0.9999975,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1727);
      tex = new TLatex(0.9999975,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1728);
      tex = new TLatex(0.9999975,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1729);
      tex = new TLatex(0.9999975,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1730);
      tex = new TLatex(0.9999975,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1731);
      tex = new TLatex(0.9999975,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1732);
      tex = new TLatex(0.9999975,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1733);
      tex = new TLatex(0.9999975,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1734);
      tex = new TLatex(0.9999975,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1735);
      tex = new TLatex(0.9999975,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1736);
      tex = new TLatex(1,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1737);
      tex = new TLatex(1,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1738);
      tex = new TLatex(1,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1739);
      tex = new TLatex(1,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1740);
      tex = new TLatex(1,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1741);
      tex = new TLatex(1,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1742);
      tex = new TLatex(1,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1743);
      tex = new TLatex(1,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1744);
      tex = new TLatex(1,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1745);
      tex = new TLatex(1,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1746);
      tex = new TLatex(1,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1747);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1748);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1749);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1750);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1751);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1752);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1753);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1754);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1755);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1756);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1757);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1758);
   graph->Draw("nodraw #1703
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_pt_jet0_17->Modified();
   ROC_jets_pt_jet0_17->cd();
   ROC_jets_pt_jet0_17->SetSelected(ROC_jets_pt_jet0_17);
}
