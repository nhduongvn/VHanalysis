#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet0_18()
{
//=========Macro generated from canvas: ROC_jets_pt_jet0_18/ROC_jets_pt_jet0_18
//=========  (Tue Jan 24 10:54:39 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet0_18 = new TCanvas("ROC_jets_pt_jet0_18", "ROC_jets_pt_jet0_18",0,0,600,600);
   ROC_jets_pt_jet0_18->SetHighLightColor(2);
   ROC_jets_pt_jet0_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet0_18->SetFillColor(0);
   ROC_jets_pt_jet0_18->SetBorderMode(0);
   ROC_jets_pt_jet0_18->SetBorderSize(2);
   ROC_jets_pt_jet0_18->SetGridx();
   ROC_jets_pt_jet0_18->SetGridy();
   ROC_jets_pt_jet0_18->SetLeftMargin(0.15709);
   ROC_jets_pt_jet0_18->SetRightMargin(0.1234783);
   ROC_jets_pt_jet0_18->SetBottomMargin(0.12);
   ROC_jets_pt_jet0_18->SetFrameBorderMode(0);
   ROC_jets_pt_jet0_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1759[200] = {
   0,
   0,
   0,
   0,
   0.0356445,
   0.09789107,
   0.1906117,
   0.3029871,
   0.4154361,
   0.5145933,
   0.5984735,
   0.6675092,
   0.7241467,
   0.7697184,
   0.8069961,
   0.8374054,
   0.8623311,
   0.8831814,
   0.9005802,
   0.9147594,
   0.9266729,
   0.9365991,
   0.9445744,
   0.9512935,
   0.9570294,
   0.9619522,
   0.966246,
   0.9698986,
   0.9729856,
   0.9757301,
   0.9780662,
   0.9802173,
   0.981942,
   0.9835686,
   0.984924,
   0.9861049,
   0.9871885,
   0.9881398,
   0.989013,
   0.9898321,
   0.990614,
   0.9913221,
   0.9919283,
   0.992486,
   0.9930094,
   0.9934662,
   0.9938895,
   0.9943,
   0.9946898,
   0.9950355,
   0.9954124,
   0.9957288,
   0.9959991,
   0.9963068,
   0.9965571,
   0.9967803,
   0.9970113,
   0.997212,
   0.9974059,
   0.9976035,
   0.9977484,
   0.997875,
   0.998021,
   0.9981266,
   0.9982461,
   0.998378,
   0.9984851,
   0.9985894,
   0.9986974,
   0.9987679,
   0.9988519,
   0.9989321,
   0.9990222,
   0.9990885,
   0.9991625,
   0.9992197,
   0.9992777,
   0.9993308,
   0.9993649,
   0.999399,
   0.9994283,
   0.999456,
   0.9994898,
   0.9995147,
   0.9995401,
   0.9995764,
   0.9995979,
   0.9996156,
   0.9996383,
   0.9996618,
   0.999682,
   0.9996978,
   0.9997059,
   0.9997166,
   0.999734,
   0.9997467,
   0.9997654,
   0.9997892,
   0.9998015,
   0.9998084,
   0.9998257,
   0.999834,
   0.999843,
   0.9998513,
   0.9998608,
   0.9998646,
   0.999874,
   0.9998767,
   0.999881,
   0.9998844,
   0.9998896,
   0.9998924,
   0.9998962,
   0.9999088,
   0.999911,
   0.9999131,
   0.9999162,
   0.999921,
   0.9999278,
   0.9999314,
   0.9999322,
   0.9999363,
   0.9999434,
   0.9999457,
   0.9999464,
   0.9999494,
   0.9999538,
   0.9999544,
   0.9999573,
   0.999958,
   0.9999595,
   0.9999606,
   0.9999671,
   0.999968,
   0.9999701,
   0.9999708,
   0.9999739,
   0.9999739,
   0.9999768,
   0.9999771,
   0.9999778,
   0.9999781,
   0.9999789,
   0.9999814,
   0.9999822,
   0.9999822,
   0.9999822,
   0.9999829,
   0.9999834,
   0.9999834,
   0.9999845,
   0.9999859,
   0.9999865,
   0.9999896,
   0.9999898,
   0.9999904,
   0.9999904,
   0.9999904,
   0.9999904,
   0.9999904,
   0.9999909,
   0.9999909,
   0.9999938,
   0.9999941,
   0.9999941,
   0.9999946,
   0.9999949,
   0.9999949,
   0.9999952,
   0.9999952,
   0.9999956,
   0.9999956,
   0.9999956,
   0.9999978,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999984,
   0.9999987,
   0.9999987,
   0.9999987,
   0.999999,
   0.999999,
   0.9999997,
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
   Double_t Graph_fy1759[200] = {
   0,
   0,
   0,
   0,
   0.2183895,
   0.4651498,
   0.6766144,
   0.8140901,
   0.8907293,
   0.9327632,
   0.9567095,
   0.9709978,
   0.9799172,
   0.9856858,
   0.9895671,
   0.992232,
   0.9941056,
   0.9954528,
   0.9964418,
   0.9971829,
   0.9977462,
   0.9981818,
   0.9985207,
   0.9987871,
   0.9989984,
   0.9991679,
   0.9993041,
   0.9994161,
   0.9995077,
   0.9995831,
   0.9996455,
   0.9996974,
   0.9997405,
   0.9997765,
   0.9998068,
   0.9998322,
   0.9998539,
   0.9998723,
   0.9998879,
   0.9999014,
   0.9999129,
   0.999923,
   0.9999317,
   0.9999392,
   0.9999459,
   0.9999517,
   0.9999569,
   0.9999615,
   0.9999654,
   0.9999689,
   0.999972,
   0.9999747,
   0.9999771,
   0.9999793,
   0.9999813,
   0.999983,
   0.9999847,
   0.9999861,
   0.9999874,
   0.9999886,
   0.9999896,
   0.9999905,
   0.9999913,
   0.9999921,
   0.9999928,
   0.9999934,
   0.9999939,
   0.9999945,
   0.9999949,
   0.9999953,
   0.9999957,
   0.9999961,
   0.9999964,
   0.9999967,
   0.9999969,
   0.9999972,
   0.9999974,
   0.9999976,
   0.9999978,
   0.9999979,
   0.9999981,
   0.9999982,
   0.9999983,
   0.9999985,
   0.9999986,
   0.9999987,
   0.9999988,
   0.9999989,
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
   TGraph *graph = new TGraph(200,Graph_fx1759,Graph_fy1759);
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
   
   TH1F *Graph_Graph1759 = new TH1F("Graph_Graph1759","",200,0,1.1);
   Graph_Graph1759->SetMinimum(0);
   Graph_Graph1759->SetMaximum(1.1);
   Graph_Graph1759->SetDirectory(0);
   Graph_Graph1759->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1759->SetLineColor(ci);
   Graph_Graph1759->GetXaxis()->SetLabelFont(42);
   Graph_Graph1759->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1759->GetXaxis()->SetTitleFont(42);
   Graph_Graph1759->GetYaxis()->SetLabelFont(42);
   Graph_Graph1759->GetYaxis()->SetTitleFont(42);
   Graph_Graph1759->GetZaxis()->SetLabelFont(42);
   Graph_Graph1759->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1759->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1759);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1760);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1761);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1762);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1763);
      tex = new TLatex(0.0356445,0.2783895,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1764);
      tex = new TLatex(0.09789107,0.5251498,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1765);
      tex = new TLatex(0.1906117,0.7366144,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1766);
      tex = new TLatex(0.3029871,0.8740901,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1767);
      tex = new TLatex(0.4154361,0.9507293,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1768);
      tex = new TLatex(0.5145933,0.9927632,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1769);
      tex = new TLatex(0.5984735,1.01671,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1770);
      tex = new TLatex(0.6675092,1.030998,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1771);
      tex = new TLatex(0.7241467,1.039917,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1772);
      tex = new TLatex(0.7697184,1.045686,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1773);
      tex = new TLatex(0.8069961,1.049567,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1774);
      tex = new TLatex(0.8374054,1.052232,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1775);
      tex = new TLatex(0.8623311,1.054106,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1776);
      tex = new TLatex(0.8831814,1.055453,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1777);
      tex = new TLatex(0.9005802,1.056442,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1778);
      tex = new TLatex(0.9147594,1.057183,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1779);
      tex = new TLatex(0.9266729,1.057746,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1780);
      tex = new TLatex(0.9365991,1.058182,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1781);
      tex = new TLatex(0.9445744,1.058521,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1782);
      tex = new TLatex(0.9512935,1.058787,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1783);
      tex = new TLatex(0.9570294,1.058998,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1784);
      tex = new TLatex(0.9619522,1.059168,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1785);
      tex = new TLatex(0.966246,1.059304,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1786);
      tex = new TLatex(0.9698986,1.059416,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1787);
      tex = new TLatex(0.9729856,1.059508,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1788);
      tex = new TLatex(0.9757301,1.059583,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1789);
      tex = new TLatex(0.9780662,1.059646,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1790);
      tex = new TLatex(0.9802173,1.059697,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1791);
      tex = new TLatex(0.981942,1.05974,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1792);
      tex = new TLatex(0.9835686,1.059777,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1793);
      tex = new TLatex(0.984924,1.059807,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1794);
      tex = new TLatex(0.9861049,1.059832,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1795);
      tex = new TLatex(0.9871885,1.059854,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1796);
      tex = new TLatex(0.9881398,1.059872,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1797);
      tex = new TLatex(0.989013,1.059888,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1798);
      tex = new TLatex(0.9898321,1.059901,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1799);
      tex = new TLatex(0.990614,1.059913,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1800);
      tex = new TLatex(0.9913221,1.059923,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1801);
      tex = new TLatex(0.9919283,1.059932,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1802);
      tex = new TLatex(0.992486,1.059939,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1803);
      tex = new TLatex(0.9930094,1.059946,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1804);
      tex = new TLatex(0.9934662,1.059952,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1805);
      tex = new TLatex(0.9938895,1.059957,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1806);
      tex = new TLatex(0.9943,1.059961,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1807);
      tex = new TLatex(0.9946898,1.059965,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1808);
      tex = new TLatex(0.9950355,1.059969,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1809);
      tex = new TLatex(0.9954124,1.059972,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1810);
      tex = new TLatex(0.9957288,1.059975,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1811);
      tex = new TLatex(0.9959991,1.059977,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1812);
      tex = new TLatex(0.9963068,1.059979,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1813);
      tex = new TLatex(0.9965571,1.059981,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1814);
      tex = new TLatex(0.9967803,1.059983,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1815);
      tex = new TLatex(0.9970113,1.059985,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1816);
      tex = new TLatex(0.997212,1.059986,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1817);
      tex = new TLatex(0.9974059,1.059987,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1818);
      tex = new TLatex(0.9976035,1.059989,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1819);
      tex = new TLatex(0.9977484,1.05999,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1820);
      tex = new TLatex(0.997875,1.059991,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1821);
      tex = new TLatex(0.998021,1.059991,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1822);
      tex = new TLatex(0.9981266,1.059992,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1823);
      tex = new TLatex(0.9982461,1.059993,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1824);
      tex = new TLatex(0.998378,1.059993,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1825);
      tex = new TLatex(0.9984851,1.059994,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1826);
      tex = new TLatex(0.9985894,1.059994,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1827);
      tex = new TLatex(0.9986974,1.059995,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1828);
      tex = new TLatex(0.9987679,1.059995,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1829);
      tex = new TLatex(0.9988519,1.059996,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1830);
      tex = new TLatex(0.9989321,1.059996,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1831);
      tex = new TLatex(0.9990222,1.059996,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1832);
      tex = new TLatex(0.9990885,1.059997,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1833);
      tex = new TLatex(0.9991625,1.059997,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1834);
      tex = new TLatex(0.9992197,1.059997,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1835);
      tex = new TLatex(0.9992777,1.059997,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1836);
      tex = new TLatex(0.9993308,1.059998,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1837);
      tex = new TLatex(0.9993649,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1838);
      tex = new TLatex(0.999399,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1839);
      tex = new TLatex(0.9994283,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1840);
      tex = new TLatex(0.999456,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1841);
      tex = new TLatex(0.9994898,1.059998,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1842);
      tex = new TLatex(0.9995147,1.059998,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1843);
      tex = new TLatex(0.9995401,1.059999,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1844);
      tex = new TLatex(0.9995764,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1845);
      tex = new TLatex(0.9995979,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1846);
      tex = new TLatex(0.9996156,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1847);
      tex = new TLatex(0.9996383,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1848);
      tex = new TLatex(0.9996618,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1849);
      tex = new TLatex(0.999682,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1850);
      tex = new TLatex(0.9996978,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1851);
      tex = new TLatex(0.9997059,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1852);
      tex = new TLatex(0.9997166,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1853);
      tex = new TLatex(0.999734,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1854);
      tex = new TLatex(0.9997467,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1855);
      tex = new TLatex(0.9997654,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1856);
      tex = new TLatex(0.9997892,1.059999,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1857);
      tex = new TLatex(0.9998015,1.059999,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1858);
      tex = new TLatex(0.9998084,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1859);
      tex = new TLatex(0.9998257,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1860);
      tex = new TLatex(0.999834,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1861);
      tex = new TLatex(0.999843,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1862);
      tex = new TLatex(0.9998513,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1863);
      tex = new TLatex(0.9998608,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1864);
      tex = new TLatex(0.9998646,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1865);
      tex = new TLatex(0.999874,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1866);
      tex = new TLatex(0.9998767,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1867);
      tex = new TLatex(0.999881,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1868);
      tex = new TLatex(0.9998844,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1869);
      tex = new TLatex(0.9998896,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1870);
      tex = new TLatex(0.9998924,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1871);
      tex = new TLatex(0.9998962,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1872);
      tex = new TLatex(0.9999088,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1873);
      tex = new TLatex(0.999911,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1874);
      tex = new TLatex(0.9999131,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1875);
      tex = new TLatex(0.9999162,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1876);
      tex = new TLatex(0.999921,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1877);
      tex = new TLatex(0.9999278,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1878);
      tex = new TLatex(0.9999314,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1879);
      tex = new TLatex(0.9999322,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1880);
      tex = new TLatex(0.9999363,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1881);
      tex = new TLatex(0.9999434,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1882);
      tex = new TLatex(0.9999457,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1883);
      tex = new TLatex(0.9999464,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1884);
      tex = new TLatex(0.9999494,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1885);
      tex = new TLatex(0.9999538,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1886);
      tex = new TLatex(0.9999544,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1887);
      tex = new TLatex(0.9999573,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1888);
      tex = new TLatex(0.999958,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1889);
      tex = new TLatex(0.9999595,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1890);
      tex = new TLatex(0.9999606,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1891);
      tex = new TLatex(0.9999671,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1892);
      tex = new TLatex(0.999968,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1893);
      tex = new TLatex(0.9999701,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1894);
      tex = new TLatex(0.9999708,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1895);
      tex = new TLatex(0.9999739,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1896);
      tex = new TLatex(0.9999739,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1897);
      tex = new TLatex(0.9999768,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1898);
      tex = new TLatex(0.9999771,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1899);
      tex = new TLatex(0.9999778,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1900);
      tex = new TLatex(0.9999781,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1901);
      tex = new TLatex(0.9999789,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1902);
      tex = new TLatex(0.9999814,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1903);
      tex = new TLatex(0.9999822,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1904);
      tex = new TLatex(0.9999822,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1905);
      tex = new TLatex(0.9999822,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1906);
      tex = new TLatex(0.9999829,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1907);
      tex = new TLatex(0.9999834,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1908);
      tex = new TLatex(0.9999834,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1909);
      tex = new TLatex(0.9999845,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1910);
      tex = new TLatex(0.9999859,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1911);
      tex = new TLatex(0.9999865,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1912);
      tex = new TLatex(0.9999896,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1913);
      tex = new TLatex(0.9999898,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1914);
      tex = new TLatex(0.9999904,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1915);
      tex = new TLatex(0.9999904,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1916);
      tex = new TLatex(0.9999904,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1917);
      tex = new TLatex(0.9999904,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1918);
      tex = new TLatex(0.9999904,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1919);
      tex = new TLatex(0.9999909,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1920);
      tex = new TLatex(0.9999909,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1921);
      tex = new TLatex(0.9999938,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1922);
      tex = new TLatex(0.9999941,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1923);
      tex = new TLatex(0.9999941,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1924);
      tex = new TLatex(0.9999946,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1925);
      tex = new TLatex(0.9999949,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1926);
      tex = new TLatex(0.9999949,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1927);
      tex = new TLatex(0.9999952,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1928);
      tex = new TLatex(0.9999952,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1929);
      tex = new TLatex(0.9999956,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1930);
      tex = new TLatex(0.9999956,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1931);
      tex = new TLatex(0.9999956,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1932);
      tex = new TLatex(0.9999978,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1933);
      tex = new TLatex(0.9999984,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1934);
      tex = new TLatex(0.9999984,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1935);
      tex = new TLatex(0.9999984,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1936);
      tex = new TLatex(0.9999984,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1937);
      tex = new TLatex(0.9999984,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1938);
      tex = new TLatex(0.9999984,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1939);
      tex = new TLatex(0.9999984,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1940);
      tex = new TLatex(0.9999984,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1941);
      tex = new TLatex(0.9999987,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1942);
      tex = new TLatex(0.9999987,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1943);
      tex = new TLatex(0.9999987,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1944);
      tex = new TLatex(0.999999,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1945);
      tex = new TLatex(0.999999,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1946);
      tex = new TLatex(0.9999997,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1947);
      tex = new TLatex(0.9999997,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1948);
      tex = new TLatex(0.9999997,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1949);
      tex = new TLatex(0.9999997,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1950);
      tex = new TLatex(0.9999997,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1951);
      tex = new TLatex(0.9999997,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1952);
      tex = new TLatex(0.9999997,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1953);
      tex = new TLatex(0.9999997,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1954);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1955);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1956);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1957);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1958);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1959);
   graph->Draw("nodraw #1904
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_jets_pt_jet0_18->Modified();
   ROC_jets_pt_jet0_18->cd();
   ROC_jets_pt_jet0_18->SetSelected(ROC_jets_pt_jet0_18);
}
