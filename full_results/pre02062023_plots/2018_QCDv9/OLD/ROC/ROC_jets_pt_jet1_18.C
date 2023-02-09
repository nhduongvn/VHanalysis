#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet1_18()
{
//=========Macro generated from canvas: ROC_jets_pt_jet1_18/ROC_jets_pt_jet1_18
//=========  (Tue Jan 24 10:54:39 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet1_18 = new TCanvas("ROC_jets_pt_jet1_18", "ROC_jets_pt_jet1_18",0,0,600,600);
   ROC_jets_pt_jet1_18->SetHighLightColor(2);
   ROC_jets_pt_jet1_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet1_18->SetFillColor(0);
   ROC_jets_pt_jet1_18->SetBorderMode(0);
   ROC_jets_pt_jet1_18->SetBorderSize(2);
   ROC_jets_pt_jet1_18->SetGridx();
   ROC_jets_pt_jet1_18->SetGridy();
   ROC_jets_pt_jet1_18->SetLeftMargin(0.15709);
   ROC_jets_pt_jet1_18->SetRightMargin(0.1234783);
   ROC_jets_pt_jet1_18->SetBottomMargin(0.12);
   ROC_jets_pt_jet1_18->SetFrameBorderMode(0);
   ROC_jets_pt_jet1_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2362[200] = {
   0,
   0,
   0,
   0,
   0.1102132,
   0.2635444,
   0.4222035,
   0.5511322,
   0.6502865,
   0.7259673,
   0.7839805,
   0.8284731,
   0.8626547,
   0.8892479,
   0.9098505,
   0.9257534,
   0.9382276,
   0.9481068,
   0.956345,
   0.9629479,
   0.968427,
   0.9728437,
   0.9766108,
   0.9796169,
   0.9821243,
   0.9841316,
   0.9860224,
   0.9875581,
   0.9888932,
   0.9900124,
   0.9910411,
   0.9919263,
   0.9926744,
   0.9933477,
   0.9939426,
   0.994479,
   0.9949261,
   0.9953378,
   0.9957151,
   0.9960382,
   0.9963356,
   0.9966093,
   0.9968438,
   0.9970502,
   0.9972557,
   0.9974618,
   0.9976273,
   0.9977891,
   0.997928,
   0.9980463,
   0.9981662,
   0.9982922,
   0.9984055,
   0.9985183,
   0.9986185,
   0.9987303,
   0.9988143,
   0.998895,
   0.9989765,
   0.9990605,
   0.9991129,
   0.9991696,
   0.9992218,
   0.9992675,
   0.9993177,
   0.999358,
   0.9993967,
   0.999439,
   0.9994697,
   0.9995016,
   0.9995222,
   0.9995567,
   0.9995771,
   0.9996101,
   0.9996372,
   0.9996652,
   0.9996953,
   0.9997123,
   0.9997276,
   0.9997432,
   0.9997616,
   0.999776,
   0.9997855,
   0.9997946,
   0.9998095,
   0.9998177,
   0.9998299,
   0.9998388,
   0.999853,
   0.9998583,
   0.9998691,
   0.9998814,
   0.9998888,
   0.9998945,
   0.9999036,
   0.9999056,
   0.9999098,
   0.9999166,
   0.9999218,
   0.9999261,
   0.9999283,
   0.9999333,
   0.9999383,
   0.9999401,
   0.9999476,
   0.9999512,
   0.9999529,
   0.9999536,
   0.9999549,
   0.9999558,
   0.9999568,
   0.9999587,
   0.9999632,
   0.9999672,
   0.9999677,
   0.9999686,
   0.9999713,
   0.9999721,
   0.9999791,
   0.9999795,
   0.9999804,
   0.9999807,
   0.9999811,
   0.999982,
   0.9999823,
   0.9999823,
   0.9999826,
   0.9999833,
   0.9999842,
   0.9999847,
   0.9999875,
   0.9999878,
   0.9999881,
   0.9999883,
   0.9999887,
   0.9999895,
   0.9999932,
   0.9999932,
   0.9999958,
   0.9999962,
   0.9999965,
   0.9999965,
   0.9999965,
   0.9999965,
   0.9999965,
   0.9999969,
   0.9999969,
   0.9999969,
   0.9999969,
   0.999997,
   0.9999971,
   0.9999971,
   0.9999971,
   0.9999978,
   0.9999978,
   0.9999978,
   0.9999982,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999989,
   0.9999989,
   0.9999989,
   0.9999989,
   0.9999989,
   0.9999992,
   0.9999992,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
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
   1};
   Double_t Graph_fy2362[200] = {
   0,
   0,
   0,
   0,
   0.4385668,
   0.7032261,
   0.8448694,
   0.9135821,
   0.9483751,
   0.9673636,
   0.9783793,
   0.9851194,
   0.9894278,
   0.9922797,
   0.9942388,
   0.9956147,
   0.9966093,
   0.9973417,
   0.997892,
   0.9983105,
   0.9986343,
   0.9988862,
   0.9990851,
   0.9992429,
   0.9993694,
   0.9994719,
   0.9995545,
   0.9996228,
   0.9996792,
   0.9997264,
   0.9997654,
   0.9997978,
   0.9998251,
   0.999848,
   0.9998676,
   0.9998842,
   0.9998983,
   0.9999105,
   0.9999212,
   0.9999305,
   0.9999385,
   0.9999454,
   0.9999515,
   0.9999569,
   0.9999615,
   0.9999657,
   0.9999692,
   0.9999724,
   0.9999752,
   0.9999777,
   0.9999799,
   0.9999818,
   0.9999836,
   0.9999851,
   0.9999865,
   0.9999878,
   0.9999889,
   0.9999899,
   0.9999908,
   0.9999916,
   0.9999924,
   0.999993,
   0.9999936,
   0.9999942,
   0.9999947,
   0.9999951,
   0.9999955,
   0.9999959,
   0.9999962,
   0.9999965,
   0.9999968,
   0.9999971,
   0.9999973,
   0.9999975,
   0.9999977,
   0.9999979,
   0.999998,
   0.9999982,
   0.9999983,
   0.9999984,
   0.9999985,
   0.9999986,
   0.9999987,
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
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(200,Graph_fx2362,Graph_fy2362);
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
   
   TH1F *Graph_Graph2362 = new TH1F("Graph_Graph2362","",200,0,1.1);
   Graph_Graph2362->SetMinimum(0);
   Graph_Graph2362->SetMaximum(1.1);
   Graph_Graph2362->SetDirectory(0);
   Graph_Graph2362->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2362->SetLineColor(ci);
   Graph_Graph2362->GetXaxis()->SetLabelFont(42);
   Graph_Graph2362->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2362->GetXaxis()->SetTitleFont(42);
   Graph_Graph2362->GetYaxis()->SetLabelFont(42);
   Graph_Graph2362->GetYaxis()->SetTitleFont(42);
   Graph_Graph2362->GetZaxis()->SetLabelFont(42);
   Graph_Graph2362->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2362->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2362);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2363);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2364);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2365);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2366);
      tex = new TLatex(0.1102132,0.4985668,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2367);
      tex = new TLatex(0.2635444,0.7632261,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2368);
      tex = new TLatex(0.4222035,0.9048694,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2369);
      tex = new TLatex(0.5511322,0.9735821,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2370);
      tex = new TLatex(0.6502865,1.008375,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2371);
      tex = new TLatex(0.7259673,1.027364,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2372);
      tex = new TLatex(0.7839805,1.038379,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2373);
      tex = new TLatex(0.8284731,1.045119,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2374);
      tex = new TLatex(0.8626547,1.049428,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2375);
      tex = new TLatex(0.8892479,1.05228,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2376);
      tex = new TLatex(0.9098505,1.054239,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2377);
      tex = new TLatex(0.9257534,1.055615,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2378);
      tex = new TLatex(0.9382276,1.056609,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2379);
      tex = new TLatex(0.9481068,1.057342,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2380);
      tex = new TLatex(0.956345,1.057892,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2381);
      tex = new TLatex(0.9629479,1.058311,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2382);
      tex = new TLatex(0.968427,1.058634,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2383);
      tex = new TLatex(0.9728437,1.058886,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2384);
      tex = new TLatex(0.9766108,1.059085,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2385);
      tex = new TLatex(0.9796169,1.059243,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2386);
      tex = new TLatex(0.9821243,1.059369,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2387);
      tex = new TLatex(0.9841316,1.059472,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2388);
      tex = new TLatex(0.9860224,1.059555,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2389);
      tex = new TLatex(0.9875581,1.059623,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2390);
      tex = new TLatex(0.9888932,1.059679,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2391);
      tex = new TLatex(0.9900124,1.059726,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2392);
      tex = new TLatex(0.9910411,1.059765,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2393);
      tex = new TLatex(0.9919263,1.059798,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2394);
      tex = new TLatex(0.9926744,1.059825,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2395);
      tex = new TLatex(0.9933477,1.059848,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2396);
      tex = new TLatex(0.9939426,1.059868,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2397);
      tex = new TLatex(0.994479,1.059884,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2398);
      tex = new TLatex(0.9949261,1.059898,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2399);
      tex = new TLatex(0.9953378,1.059911,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2400);
      tex = new TLatex(0.9957151,1.059921,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2401);
      tex = new TLatex(0.9960382,1.059931,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2402);
      tex = new TLatex(0.9963356,1.059939,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2403);
      tex = new TLatex(0.9966093,1.059945,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2404);
      tex = new TLatex(0.9968438,1.059952,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2405);
      tex = new TLatex(0.9970502,1.059957,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2406);
      tex = new TLatex(0.9972557,1.059962,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2407);
      tex = new TLatex(0.9974618,1.059966,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2408);
      tex = new TLatex(0.9976273,1.059969,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2409);
      tex = new TLatex(0.9977891,1.059972,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2410);
      tex = new TLatex(0.997928,1.059975,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2411);
      tex = new TLatex(0.9980463,1.059978,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2412);
      tex = new TLatex(0.9981662,1.05998,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2413);
      tex = new TLatex(0.9982922,1.059982,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2414);
      tex = new TLatex(0.9984055,1.059984,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2415);
      tex = new TLatex(0.9985183,1.059985,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2416);
      tex = new TLatex(0.9986185,1.059987,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2417);
      tex = new TLatex(0.9987303,1.059988,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2418);
      tex = new TLatex(0.9988143,1.059989,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2419);
      tex = new TLatex(0.998895,1.05999,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2420);
      tex = new TLatex(0.9989765,1.059991,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2421);
      tex = new TLatex(0.9990605,1.059992,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2422);
      tex = new TLatex(0.9991129,1.059992,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2423);
      tex = new TLatex(0.9991696,1.059993,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2424);
      tex = new TLatex(0.9992218,1.059994,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2425);
      tex = new TLatex(0.9992675,1.059994,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2426);
      tex = new TLatex(0.9993177,1.059995,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2427);
      tex = new TLatex(0.999358,1.059995,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2428);
      tex = new TLatex(0.9993967,1.059996,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2429);
      tex = new TLatex(0.999439,1.059996,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2430);
      tex = new TLatex(0.9994697,1.059996,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2431);
      tex = new TLatex(0.9995016,1.059997,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2432);
      tex = new TLatex(0.9995222,1.059997,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2433);
      tex = new TLatex(0.9995567,1.059997,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2434);
      tex = new TLatex(0.9995771,1.059997,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2435);
      tex = new TLatex(0.9996101,1.059998,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2436);
      tex = new TLatex(0.9996372,1.059998,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2437);
      tex = new TLatex(0.9996652,1.059998,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2438);
      tex = new TLatex(0.9996953,1.059998,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2439);
      tex = new TLatex(0.9997123,1.059998,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2440);
      tex = new TLatex(0.9997276,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2441);
      tex = new TLatex(0.9997432,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2442);
      tex = new TLatex(0.9997616,1.059999,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2443);
      tex = new TLatex(0.999776,1.059999,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2444);
      tex = new TLatex(0.9997855,1.059999,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2445);
      tex = new TLatex(0.9997946,1.059999,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2446);
      tex = new TLatex(0.9998095,1.059999,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2447);
      tex = new TLatex(0.9998177,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2448);
      tex = new TLatex(0.9998299,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2449);
      tex = new TLatex(0.9998388,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2450);
      tex = new TLatex(0.999853,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2451);
      tex = new TLatex(0.9998583,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2452);
      tex = new TLatex(0.9998691,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2453);
      tex = new TLatex(0.9998814,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2454);
      tex = new TLatex(0.9998888,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2455);
      tex = new TLatex(0.9998945,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2456);
      tex = new TLatex(0.9999036,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2457);
      tex = new TLatex(0.9999056,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2458);
      tex = new TLatex(0.9999098,1.06,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2459);
      tex = new TLatex(0.9999166,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2460);
      tex = new TLatex(0.9999218,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2461);
      tex = new TLatex(0.9999261,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2462);
      tex = new TLatex(0.9999283,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2463);
      tex = new TLatex(0.9999333,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2464);
      tex = new TLatex(0.9999383,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2465);
      tex = new TLatex(0.9999401,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2466);
      tex = new TLatex(0.9999476,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2467);
      tex = new TLatex(0.9999512,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2468);
      tex = new TLatex(0.9999529,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2469);
      tex = new TLatex(0.9999536,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2470);
      tex = new TLatex(0.9999549,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2471);
      tex = new TLatex(0.9999558,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2472);
      tex = new TLatex(0.9999568,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2473);
      tex = new TLatex(0.9999587,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2474);
      tex = new TLatex(0.9999632,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2475);
      tex = new TLatex(0.9999672,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2476);
      tex = new TLatex(0.9999677,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2477);
      tex = new TLatex(0.9999686,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2478);
      tex = new TLatex(0.9999713,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2479);
      tex = new TLatex(0.9999721,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2480);
      tex = new TLatex(0.9999791,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2481);
      tex = new TLatex(0.9999795,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2482);
      tex = new TLatex(0.9999804,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2483);
      tex = new TLatex(0.9999807,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2484);
      tex = new TLatex(0.9999811,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2485);
      tex = new TLatex(0.999982,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2486);
      tex = new TLatex(0.9999823,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2487);
      tex = new TLatex(0.9999823,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2488);
      tex = new TLatex(0.9999826,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2489);
      tex = new TLatex(0.9999833,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2490);
      tex = new TLatex(0.9999842,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2491);
      tex = new TLatex(0.9999847,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2492);
      tex = new TLatex(0.9999875,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2493);
      tex = new TLatex(0.9999878,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2494);
      tex = new TLatex(0.9999881,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2495);
      tex = new TLatex(0.9999883,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2496);
      tex = new TLatex(0.9999887,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2497);
      tex = new TLatex(0.9999895,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2498);
      tex = new TLatex(0.9999932,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2499);
      tex = new TLatex(0.9999932,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2500);
      tex = new TLatex(0.9999958,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2501);
      tex = new TLatex(0.9999962,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2502);
      tex = new TLatex(0.9999965,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2503);
      tex = new TLatex(0.9999965,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2504);
      tex = new TLatex(0.9999965,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2505);
      tex = new TLatex(0.9999965,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2506);
      tex = new TLatex(0.9999965,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2507);
      tex = new TLatex(0.9999969,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2508);
      tex = new TLatex(0.9999969,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2509);
      tex = new TLatex(0.9999969,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2510);
      tex = new TLatex(0.9999969,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2511);
      tex = new TLatex(0.999997,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2512);
      tex = new TLatex(0.9999971,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2513);
      tex = new TLatex(0.9999971,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2514);
      tex = new TLatex(0.9999971,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2515);
      tex = new TLatex(0.9999978,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2516);
      tex = new TLatex(0.9999978,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2517);
      tex = new TLatex(0.9999978,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2518);
      tex = new TLatex(0.9999982,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2519);
      tex = new TLatex(0.9999985,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2520);
      tex = new TLatex(0.9999985,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2521);
      tex = new TLatex(0.9999985,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2522);
      tex = new TLatex(0.9999985,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2523);
      tex = new TLatex(0.9999989,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2524);
      tex = new TLatex(0.9999989,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2525);
      tex = new TLatex(0.9999989,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2526);
      tex = new TLatex(0.9999989,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2527);
      tex = new TLatex(0.9999989,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2528);
      tex = new TLatex(0.9999992,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2529);
      tex = new TLatex(0.9999992,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2530);
      tex = new TLatex(0.9999996,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2531);
      tex = new TLatex(0.9999996,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2532);
      tex = new TLatex(0.9999996,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2533);
      tex = new TLatex(0.9999996,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2534);
      tex = new TLatex(0.9999996,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2535);
      tex = new TLatex(0.9999996,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2536);
      tex = new TLatex(0.9999996,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2537);
      tex = new TLatex(0.9999996,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2538);
      tex = new TLatex(0.9999999,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2539);
      tex = new TLatex(0.9999999,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2540);
      tex = new TLatex(0.9999999,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2541);
      tex = new TLatex(0.9999999,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2542);
      tex = new TLatex(0.9999999,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2543);
      tex = new TLatex(0.9999999,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2544);
      tex = new TLatex(0.9999999,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2545);
      tex = new TLatex(0.9999999,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2546);
      tex = new TLatex(0.9999999,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2547);
      tex = new TLatex(0.9999999,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2548);
      tex = new TLatex(0.9999999,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2549);
      tex = new TLatex(0.9999999,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2550);
      tex = new TLatex(0.9999999,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2551);
      tex = new TLatex(1,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2552);
      tex = new TLatex(1,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2553);
      tex = new TLatex(1,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2554);
      tex = new TLatex(1,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2555);
      tex = new TLatex(1,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2556);
      tex = new TLatex(1,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2557);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2558);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2559);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2560);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2561);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2562);
   graph->Draw("nodraw #2507
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
   ROC_jets_pt_jet1_18->Modified();
   ROC_jets_pt_jet1_18->cd();
   ROC_jets_pt_jet1_18->SetSelected(ROC_jets_pt_jet1_18);
}
