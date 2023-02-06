#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet2_17()
{
//=========Macro generated from canvas: ROC_jets_pt_jet2_17/ROC_jets_pt_jet2_17
//=========  (Tue Jan 24 10:54:39 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet2_17 = new TCanvas("ROC_jets_pt_jet2_17", "ROC_jets_pt_jet2_17",0,0,600,600);
   ROC_jets_pt_jet2_17->SetHighLightColor(2);
   ROC_jets_pt_jet2_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet2_17->SetFillColor(0);
   ROC_jets_pt_jet2_17->SetBorderMode(0);
   ROC_jets_pt_jet2_17->SetBorderSize(2);
   ROC_jets_pt_jet2_17->SetGridx();
   ROC_jets_pt_jet2_17->SetGridy();
   ROC_jets_pt_jet2_17->SetLeftMargin(0.15709);
   ROC_jets_pt_jet2_17->SetRightMargin(0.1234783);
   ROC_jets_pt_jet2_17->SetBottomMargin(0.12);
   ROC_jets_pt_jet2_17->SetFrameBorderMode(0);
   ROC_jets_pt_jet2_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2764[200] = {
   0,
   0,
   0,
   0,
   0.2697231,
   0.5079016,
   0.671215,
   0.7764951,
   0.845757,
   0.8919287,
   0.9233074,
   0.9450216,
   0.9598041,
   0.9707504,
   0.9785562,
   0.9842099,
   0.9882071,
   0.9912945,
   0.9934861,
   0.9951306,
   0.9963095,
   0.9972034,
   0.9978305,
   0.9983723,
   0.9987431,
   0.9990112,
   0.9991726,
   0.9992919,
   0.9994217,
   0.9995213,
   0.9996143,
   0.9996722,
   0.9997249,
   0.9997617,
   0.9997908,
   0.9998158,
   0.9998422,
   0.9998742,
   0.9998818,
   0.9999094,
   0.9999225,
   0.9999295,
   0.9999378,
   0.9999473,
   0.99995,
   0.999959,
   0.9999614,
   0.9999614,
   0.9999679,
   0.9999679,
   0.9999692,
   0.9999726,
   0.9999728,
   0.9999733,
   0.9999791,
   0.9999838,
   0.9999838,
   0.9999842,
   0.9999842,
   0.9999875,
   0.9999888,
   0.999992,
   0.999992,
   0.999992,
   0.9999956,
   0.9999989,
   0.9999989,
   0.9999989,
   0.9999989,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
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
   Double_t Graph_fy2764[200] = {
   0,
   0,
   0,
   0,
   0.7053668,
   0.8906609,
   0.9515904,
   0.9757159,
   0.9866339,
   0.9921412,
   0.9951407,
   0.9968771,
   0.997925,
   0.9985805,
   0.9990055,
   0.9992919,
   0.9994878,
   0.9996236,
   0.9997188,
   0.9997879,
   0.9998379,
   0.9998748,
   0.9999023,
   0.9999231,
   0.999939,
   0.9999519,
   0.9999619,
   0.9999693,
   0.9999751,
   0.9999798,
   0.9999835,
   0.9999864,
   0.9999888,
   0.9999907,
   0.9999923,
   0.9999936,
   0.9999946,
   0.9999955,
   0.9999962,
   0.9999968,
   0.9999973,
   0.9999977,
   0.999998,
   0.9999983,
   0.9999985,
   0.9999988,
   0.9999989,
   0.9999991,
   0.9999992,
   0.9999993,
   0.9999994,
   0.9999995,
   0.9999995,
   0.9999996,
   0.9999997,
   0.9999997,
   0.9999997,
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
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(200,Graph_fx2764,Graph_fy2764);
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
   
   TH1F *Graph_Graph2764 = new TH1F("Graph_Graph2764","",200,0,1.1);
   Graph_Graph2764->SetMinimum(0);
   Graph_Graph2764->SetMaximum(1.1);
   Graph_Graph2764->SetDirectory(0);
   Graph_Graph2764->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2764->SetLineColor(ci);
   Graph_Graph2764->GetXaxis()->SetLabelFont(42);
   Graph_Graph2764->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2764->GetXaxis()->SetTitleFont(42);
   Graph_Graph2764->GetYaxis()->SetLabelFont(42);
   Graph_Graph2764->GetYaxis()->SetTitleFont(42);
   Graph_Graph2764->GetZaxis()->SetLabelFont(42);
   Graph_Graph2764->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2764->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2764);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2765);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2766);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2767);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2768);
      tex = new TLatex(0.2697231,0.7653668,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2769);
      tex = new TLatex(0.5079016,0.9506609,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2770);
      tex = new TLatex(0.671215,1.01159,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2771);
      tex = new TLatex(0.7764951,1.035716,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2772);
      tex = new TLatex(0.845757,1.046634,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2773);
      tex = new TLatex(0.8919287,1.052141,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2774);
      tex = new TLatex(0.9233074,1.055141,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2775);
      tex = new TLatex(0.9450216,1.056877,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2776);
      tex = new TLatex(0.9598041,1.057925,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2777);
      tex = new TLatex(0.9707504,1.058581,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2778);
      tex = new TLatex(0.9785562,1.059006,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2779);
      tex = new TLatex(0.9842099,1.059292,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2780);
      tex = new TLatex(0.9882071,1.059488,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2781);
      tex = new TLatex(0.9912945,1.059624,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2782);
      tex = new TLatex(0.9934861,1.059719,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2783);
      tex = new TLatex(0.9951306,1.059788,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2784);
      tex = new TLatex(0.9963095,1.059838,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2785);
      tex = new TLatex(0.9972034,1.059875,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2786);
      tex = new TLatex(0.9978305,1.059902,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2787);
      tex = new TLatex(0.9983723,1.059923,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2788);
      tex = new TLatex(0.9987431,1.059939,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2789);
      tex = new TLatex(0.9990112,1.059952,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2790);
      tex = new TLatex(0.9991726,1.059962,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2791);
      tex = new TLatex(0.9992919,1.059969,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2792);
      tex = new TLatex(0.9994217,1.059975,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2793);
      tex = new TLatex(0.9995213,1.05998,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2794);
      tex = new TLatex(0.9996143,1.059983,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2795);
      tex = new TLatex(0.9996722,1.059986,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2796);
      tex = new TLatex(0.9997249,1.059989,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2797);
      tex = new TLatex(0.9997617,1.059991,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2798);
      tex = new TLatex(0.9997908,1.059992,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2799);
      tex = new TLatex(0.9998158,1.059994,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2800);
      tex = new TLatex(0.9998422,1.059995,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2801);
      tex = new TLatex(0.9998742,1.059995,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2802);
      tex = new TLatex(0.9998818,1.059996,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2803);
      tex = new TLatex(0.9999094,1.059997,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2804);
      tex = new TLatex(0.9999225,1.059997,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2805);
      tex = new TLatex(0.9999295,1.059998,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2806);
      tex = new TLatex(0.9999378,1.059998,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2807);
      tex = new TLatex(0.9999473,1.059998,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2808);
      tex = new TLatex(0.99995,1.059999,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2809);
      tex = new TLatex(0.999959,1.059999,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2810);
      tex = new TLatex(0.9999614,1.059999,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2811);
      tex = new TLatex(0.9999614,1.059999,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2812);
      tex = new TLatex(0.9999679,1.059999,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2813);
      tex = new TLatex(0.9999679,1.059999,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2814);
      tex = new TLatex(0.9999692,1.059999,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2815);
      tex = new TLatex(0.9999726,1.059999,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2816);
      tex = new TLatex(0.9999728,1.06,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2817);
      tex = new TLatex(0.9999733,1.06,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2818);
      tex = new TLatex(0.9999791,1.06,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2819);
      tex = new TLatex(0.9999838,1.06,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2820);
      tex = new TLatex(0.9999838,1.06,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2821);
      tex = new TLatex(0.9999842,1.06,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2822);
      tex = new TLatex(0.9999842,1.06,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2823);
      tex = new TLatex(0.9999875,1.06,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2824);
      tex = new TLatex(0.9999888,1.06,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2825);
      tex = new TLatex(0.999992,1.06,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2826);
      tex = new TLatex(0.999992,1.06,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2827);
      tex = new TLatex(0.999992,1.06,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2828);
      tex = new TLatex(0.9999956,1.06,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2829);
      tex = new TLatex(0.9999989,1.06,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2830);
      tex = new TLatex(0.9999989,1.06,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2831);
      tex = new TLatex(0.9999989,1.06,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2832);
      tex = new TLatex(0.9999989,1.06,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2833);
      tex = new TLatex(0.9999992,1.06,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2834);
      tex = new TLatex(0.9999992,1.06,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2835);
      tex = new TLatex(0.9999992,1.06,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2836);
      tex = new TLatex(0.9999992,1.06,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2837);
      tex = new TLatex(0.9999992,1.06,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2838);
      tex = new TLatex(0.9999992,1.06,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2839);
      tex = new TLatex(0.9999992,1.06,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2840);
      tex = new TLatex(0.9999992,1.06,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2841);
      tex = new TLatex(0.9999992,1.06,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2842);
      tex = new TLatex(0.9999992,1.06,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2843);
      tex = new TLatex(0.9999992,1.06,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2844);
      tex = new TLatex(0.9999997,1.06,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2845);
      tex = new TLatex(0.9999997,1.06,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2846);
      tex = new TLatex(0.9999997,1.06,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2847);
      tex = new TLatex(0.9999997,1.06,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2848);
      tex = new TLatex(0.9999997,1.06,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2849);
      tex = new TLatex(0.9999997,1.06,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2850);
      tex = new TLatex(0.9999997,1.06,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2851);
      tex = new TLatex(0.9999997,1.06,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2852);
      tex = new TLatex(1,1.06,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2853);
      tex = new TLatex(1,1.06,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2854);
      tex = new TLatex(1,1.06,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2855);
      tex = new TLatex(1,1.06,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2856);
      tex = new TLatex(1,1.06,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2857);
      tex = new TLatex(1,1.06,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2858);
      tex = new TLatex(1,1.06,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2859);
      tex = new TLatex(1,1.06,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2860);
      tex = new TLatex(1,1.06,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2861);
      tex = new TLatex(1,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2862);
      tex = new TLatex(1,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2863);
      tex = new TLatex(1,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2864);
      tex = new TLatex(1,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2865);
      tex = new TLatex(1,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2866);
      tex = new TLatex(1,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2867);
      tex = new TLatex(1,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2868);
      tex = new TLatex(1,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2869);
      tex = new TLatex(1,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2870);
      tex = new TLatex(1,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2871);
      tex = new TLatex(1,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2872);
      tex = new TLatex(1,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2873);
      tex = new TLatex(1,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2874);
      tex = new TLatex(1,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2875);
      tex = new TLatex(1,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2876);
      tex = new TLatex(1,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2877);
      tex = new TLatex(1,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2878);
      tex = new TLatex(1,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2879);
      tex = new TLatex(1,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2880);
      tex = new TLatex(1,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2881);
      tex = new TLatex(1,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2882);
      tex = new TLatex(1,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2883);
      tex = new TLatex(1,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2884);
      tex = new TLatex(1,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2885);
      tex = new TLatex(1,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2886);
      tex = new TLatex(1,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2887);
      tex = new TLatex(1,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2888);
      tex = new TLatex(1,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2889);
      tex = new TLatex(1,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2890);
      tex = new TLatex(1,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2891);
      tex = new TLatex(1,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2892);
      tex = new TLatex(1,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2893);
      tex = new TLatex(1,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2894);
      tex = new TLatex(1,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2895);
      tex = new TLatex(1,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2896);
      tex = new TLatex(1,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2897);
      tex = new TLatex(1,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2898);
      tex = new TLatex(1,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2899);
      tex = new TLatex(1,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2900);
      tex = new TLatex(1,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2901);
      tex = new TLatex(1,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2902);
      tex = new TLatex(1,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2903);
      tex = new TLatex(1,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2904);
      tex = new TLatex(1,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2905);
      tex = new TLatex(1,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2906);
      tex = new TLatex(1,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2907);
      tex = new TLatex(1,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2908);
      tex = new TLatex(1,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2909);
      tex = new TLatex(1,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2910);
      tex = new TLatex(1,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2911);
      tex = new TLatex(1,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2912);
      tex = new TLatex(1,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2913);
      tex = new TLatex(1,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2914);
      tex = new TLatex(1,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2915);
      tex = new TLatex(1,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2916);
      tex = new TLatex(1,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2917);
      tex = new TLatex(1,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2918);
      tex = new TLatex(1,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2919);
      tex = new TLatex(1,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2920);
      tex = new TLatex(1,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2921);
      tex = new TLatex(1,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2922);
      tex = new TLatex(1,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2923);
      tex = new TLatex(1,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2924);
      tex = new TLatex(1,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2925);
      tex = new TLatex(1,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2926);
      tex = new TLatex(1,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2927);
      tex = new TLatex(1,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2928);
      tex = new TLatex(1,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2929);
      tex = new TLatex(1,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2930);
      tex = new TLatex(1,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2931);
      tex = new TLatex(1,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2932);
      tex = new TLatex(1,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2933);
      tex = new TLatex(1,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2934);
      tex = new TLatex(1,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2935);
      tex = new TLatex(1,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2936);
      tex = new TLatex(1,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2937);
      tex = new TLatex(1,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2938);
      tex = new TLatex(1,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2939);
      tex = new TLatex(1,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2940);
      tex = new TLatex(1,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2941);
      tex = new TLatex(1,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2942);
      tex = new TLatex(1,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2943);
      tex = new TLatex(1,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2944);
      tex = new TLatex(1,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2945);
      tex = new TLatex(1,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2946);
      tex = new TLatex(1,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2947);
      tex = new TLatex(1,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2948);
      tex = new TLatex(1,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2949);
      tex = new TLatex(1,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2950);
      tex = new TLatex(1,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2951);
      tex = new TLatex(1,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2952);
      tex = new TLatex(1,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2953);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2954);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2955);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2956);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2957);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2958);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2959);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2960);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2961);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2962);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2963);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2964);
   graph->Draw("2908
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
   ROC_jets_pt_jet2_17->Modified();
   ROC_jets_pt_jet2_17->cd();
   ROC_jets_pt_jet2_17->SetSelected(ROC_jets_pt_jet2_17);
}
