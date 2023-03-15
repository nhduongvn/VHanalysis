#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_16()
{
//=========Macro generated from canvas: ROC_jets_pt_16/ROC_jets_pt_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_16 = new TCanvas("ROC_jets_pt_16", "ROC_jets_pt_16",0,0,600,600);
   ROC_jets_pt_16->SetHighLightColor(2);
   ROC_jets_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_16->SetFillColor(0);
   ROC_jets_pt_16->SetBorderMode(0);
   ROC_jets_pt_16->SetBorderSize(2);
   ROC_jets_pt_16->SetGridx();
   ROC_jets_pt_16->SetGridy();
   ROC_jets_pt_16->SetLeftMargin(0.15709);
   ROC_jets_pt_16->SetRightMargin(0.1234783);
   ROC_jets_pt_16->SetBottomMargin(0.12);
   ROC_jets_pt_16->SetFrameBorderMode(0);
   ROC_jets_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx754[200] = {
   0,
   0,
   0,
   0,
   0.1938922,
   0.352294,
   0.4834473,
   0.5896173,
   0.6746733,
   0.7404751,
   0.7916599,
   0.8313382,
   0.8624021,
   0.886631,
   0.9060994,
   0.9218496,
   0.9345036,
   0.9446813,
   0.9529348,
   0.9596012,
   0.9652273,
   0.9698582,
   0.973703,
   0.9770052,
   0.9797722,
   0.9820545,
   0.9840595,
   0.985757,
   0.987211,
   0.9885203,
   0.9896582,
   0.9905921,
   0.9914601,
   0.9921815,
   0.9928509,
   0.9934191,
   0.9939262,
   0.9944166,
   0.9948468,
   0.9952165,
   0.9955384,
   0.9958556,
   0.9961353,
   0.9963955,
   0.9966515,
   0.9968684,
   0.9970561,
   0.9972519,
   0.9974421,
   0.9976068,
   0.997758,
   0.9979072,
   0.9980414,
   0.9981646,
   0.998294,
   0.9984164,
   0.9985237,
   0.9986128,
   0.9986929,
   0.9987656,
   0.9988448,
   0.998909,
   0.998974,
   0.9990388,
   0.9990969,
   0.9991567,
   0.9992121,
   0.9992644,
   0.9993036,
   0.9993421,
   0.999384,
   0.9994163,
   0.9994503,
   0.9994814,
   0.9995143,
   0.9995429,
   0.9995686,
   0.9995929,
   0.9996148,
   0.9996403,
   0.9996614,
   0.9996813,
   0.9996979,
   0.999716,
   0.9997302,
   0.9997431,
   0.9997575,
   0.9997703,
   0.9997822,
   0.9997908,
   0.9998055,
   0.9998129,
   0.9998228,
   0.9998363,
   0.9998465,
   0.9998568,
   0.9998655,
   0.999872,
   0.9998781,
   0.9998841,
   0.9998888,
   0.9998957,
   0.9999001,
   0.9999034,
   0.9999104,
   0.9999143,
   0.9999176,
   0.9999212,
   0.9999245,
   0.9999272,
   0.9999303,
   0.9999327,
   0.9999367,
   0.9999413,
   0.999945,
   0.9999468,
   0.9999476,
   0.9999491,
   0.9999502,
   0.9999525,
   0.9999542,
   0.9999568,
   0.9999581,
   0.9999608,
   0.9999628,
   0.9999643,
   0.9999658,
   0.9999673,
   0.9999715,
   0.9999734,
   0.9999744,
   0.9999765,
   0.9999768,
   0.9999775,
   0.9999779,
   0.9999789,
   0.9999794,
   0.9999798,
   0.9999806,
   0.9999819,
   0.9999831,
   0.9999833,
   0.9999837,
   0.9999839,
   0.9999856,
   0.9999862,
   0.9999879,
   0.9999891,
   0.9999908,
   0.999992,
   0.9999924,
   0.9999934,
   0.9999936,
   0.9999937,
   0.9999938,
   0.9999939,
   0.999994,
   0.999995,
   0.9999953,
   0.9999955,
   0.9999956,
   0.9999959,
   0.999996,
   0.9999961,
   0.9999962,
   0.9999962,
   0.9999964,
   0.9999965,
   0.9999965,
   0.9999967,
   0.9999976,
   0.9999978,
   0.9999979,
   0.999998,
   0.999998,
   0.9999981,
   0.9999982,
   0.9999983,
   0.9999984,
   0.9999984,
   0.9999985,
   0.9999986,
   0.9999987,
   0.9999987,
   0.9999987,
   0.9999988,
   0.9999988,
   0.9999988,
   0.9999991,
   0.9999992,
   0.9999994,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999997,
   0.9999997,
   0.9999998,
   0.9999999,
   1};
   Double_t Graph_fy754[200] = {
   0,
   0,
   0,
   0,
   0.3262531,
   0.5751051,
   0.7531833,
   0.8594916,
   0.9170861,
   0.9484897,
   0.9664463,
   0.9772361,
   0.9840413,
   0.9884853,
   0.9915071,
   0.9936094,
   0.9951076,
   0.9962,
   0.9970117,
   0.9976244,
   0.9980919,
   0.9984526,
   0.9987351,
   0.9989583,
   0.9991363,
   0.9992791,
   0.9993942,
   0.9994886,
   0.9995664,
   0.9996307,
   0.9996841,
   0.9997288,
   0.9997662,
   0.9997977,
   0.9998245,
   0.9998472,
   0.9998667,
   0.9998833,
   0.9998977,
   0.9999101,
   0.9999209,
   0.9999302,
   0.9999382,
   0.9999453,
   0.9999514,
   0.9999568,
   0.9999615,
   0.9999655,
   0.9999691,
   0.9999722,
   0.9999749,
   0.9999773,
   0.9999794,
   0.9999813,
   0.999983,
   0.9999845,
   0.9999859,
   0.9999871,
   0.9999882,
   0.9999892,
   0.9999901,
   0.9999909,
   0.9999916,
   0.9999923,
   0.9999929,
   0.9999934,
   0.9999939,
   0.9999944,
   0.9999948,
   0.9999952,
   0.9999955,
   0.9999959,
   0.9999961,
   0.9999964,
   0.9999967,
   0.9999969,
   0.9999972,
   0.9999974,
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
   0.999999,
   0.9999991,
   0.9999992,
   0.9999992,
   0.9999993,
   0.9999993,
   0.9999994,
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
   1};
   TGraph *graph = new TGraph(200,Graph_fx754,Graph_fy754);
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
   
   TH1F *Graph_Graph754 = new TH1F("Graph_Graph754","",200,0,1.1);
   Graph_Graph754->SetMinimum(0);
   Graph_Graph754->SetMaximum(1.1);
   Graph_Graph754->SetDirectory(0);
   Graph_Graph754->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph754->SetLineColor(ci);
   Graph_Graph754->GetXaxis()->SetLabelFont(42);
   Graph_Graph754->GetXaxis()->SetTitleOffset(1);
   Graph_Graph754->GetXaxis()->SetTitleFont(42);
   Graph_Graph754->GetYaxis()->SetLabelFont(42);
   Graph_Graph754->GetYaxis()->SetTitleFont(42);
   Graph_Graph754->GetZaxis()->SetLabelFont(42);
   Graph_Graph754->GetZaxis()->SetTitleOffset(1);
   Graph_Graph754->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph754);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(755);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(756);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(757);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(758);
      tex = new TLatex(0.1938922,0.3862531,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(759);
      tex = new TLatex(0.352294,0.6351051,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(760);
      tex = new TLatex(0.4834473,0.8131833,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(761);
      tex = new TLatex(0.5896173,0.9194916,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(762);
      tex = new TLatex(0.6746733,0.9770861,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(763);
      tex = new TLatex(0.7404751,1.00849,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(764);
      tex = new TLatex(0.7916599,1.026446,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(765);
      tex = new TLatex(0.8313382,1.037236,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(766);
      tex = new TLatex(0.8624021,1.044041,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(767);
      tex = new TLatex(0.886631,1.048485,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(768);
      tex = new TLatex(0.9060994,1.051507,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(769);
      tex = new TLatex(0.9218496,1.053609,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(770);
      tex = new TLatex(0.9345036,1.055108,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(771);
      tex = new TLatex(0.9446813,1.0562,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(772);
      tex = new TLatex(0.9529348,1.057012,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(773);
      tex = new TLatex(0.9596012,1.057624,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(774);
      tex = new TLatex(0.9652273,1.058092,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(775);
      tex = new TLatex(0.9698582,1.058453,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(776);
      tex = new TLatex(0.973703,1.058735,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(777);
      tex = new TLatex(0.9770052,1.058958,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(778);
      tex = new TLatex(0.9797722,1.059136,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(779);
      tex = new TLatex(0.9820545,1.059279,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(780);
      tex = new TLatex(0.9840595,1.059394,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(781);
      tex = new TLatex(0.985757,1.059489,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(782);
      tex = new TLatex(0.987211,1.059566,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(783);
      tex = new TLatex(0.9885203,1.059631,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(784);
      tex = new TLatex(0.9896582,1.059684,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(785);
      tex = new TLatex(0.9905921,1.059729,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(786);
      tex = new TLatex(0.9914601,1.059766,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(787);
      tex = new TLatex(0.9921815,1.059798,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(788);
      tex = new TLatex(0.9928509,1.059825,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(789);
      tex = new TLatex(0.9934191,1.059847,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(790);
      tex = new TLatex(0.9939262,1.059867,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(791);
      tex = new TLatex(0.9944166,1.059883,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(792);
      tex = new TLatex(0.9948468,1.059898,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(793);
      tex = new TLatex(0.9952165,1.05991,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(794);
      tex = new TLatex(0.9955384,1.059921,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(795);
      tex = new TLatex(0.9958556,1.05993,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(796);
      tex = new TLatex(0.9961353,1.059938,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(797);
      tex = new TLatex(0.9963955,1.059945,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(798);
      tex = new TLatex(0.9966515,1.059951,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(799);
      tex = new TLatex(0.9968684,1.059957,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(800);
      tex = new TLatex(0.9970561,1.059961,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(801);
      tex = new TLatex(0.9972519,1.059966,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(802);
      tex = new TLatex(0.9974421,1.059969,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(803);
      tex = new TLatex(0.9976068,1.059972,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(804);
      tex = new TLatex(0.997758,1.059975,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(805);
      tex = new TLatex(0.9979072,1.059977,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(806);
      tex = new TLatex(0.9980414,1.059979,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(807);
      tex = new TLatex(0.9981646,1.059981,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(808);
      tex = new TLatex(0.998294,1.059983,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(809);
      tex = new TLatex(0.9984164,1.059985,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(810);
      tex = new TLatex(0.9985237,1.059986,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(811);
      tex = new TLatex(0.9986128,1.059987,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(812);
      tex = new TLatex(0.9986929,1.059988,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(813);
      tex = new TLatex(0.9987656,1.059989,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(814);
      tex = new TLatex(0.9988448,1.05999,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(815);
      tex = new TLatex(0.998909,1.059991,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(816);
      tex = new TLatex(0.998974,1.059992,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(817);
      tex = new TLatex(0.9990388,1.059992,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(818);
      tex = new TLatex(0.9990969,1.059993,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(819);
      tex = new TLatex(0.9991567,1.059993,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(820);
      tex = new TLatex(0.9992121,1.059994,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(821);
      tex = new TLatex(0.9992644,1.059994,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(822);
      tex = new TLatex(0.9993036,1.059995,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(823);
      tex = new TLatex(0.9993421,1.059995,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(824);
      tex = new TLatex(0.999384,1.059996,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(825);
      tex = new TLatex(0.9994163,1.059996,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(826);
      tex = new TLatex(0.9994503,1.059996,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(827);
      tex = new TLatex(0.9994814,1.059996,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(828);
      tex = new TLatex(0.9995143,1.059997,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(829);
      tex = new TLatex(0.9995429,1.059997,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(830);
      tex = new TLatex(0.9995686,1.059997,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(831);
      tex = new TLatex(0.9995929,1.059997,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(832);
      tex = new TLatex(0.9996148,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(833);
      tex = new TLatex(0.9996403,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(834);
      tex = new TLatex(0.9996614,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(835);
      tex = new TLatex(0.9996813,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(836);
      tex = new TLatex(0.9996979,1.059998,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(837);
      tex = new TLatex(0.999716,1.059998,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(838);
      tex = new TLatex(0.9997302,1.059998,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(839);
      tex = new TLatex(0.9997431,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(840);
      tex = new TLatex(0.9997575,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(841);
      tex = new TLatex(0.9997703,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(842);
      tex = new TLatex(0.9997822,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(843);
      tex = new TLatex(0.9997908,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(844);
      tex = new TLatex(0.9998055,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(845);
      tex = new TLatex(0.9998129,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(846);
      tex = new TLatex(0.9998228,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(847);
      tex = new TLatex(0.9998363,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(848);
      tex = new TLatex(0.9998465,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(849);
      tex = new TLatex(0.9998568,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(850);
      tex = new TLatex(0.9998655,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(851);
      tex = new TLatex(0.999872,1.059999,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(852);
      tex = new TLatex(0.9998781,1.059999,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(853);
      tex = new TLatex(0.9998841,1.059999,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(854);
      tex = new TLatex(0.9998888,1.059999,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(855);
      tex = new TLatex(0.9998957,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(856);
      tex = new TLatex(0.9999001,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(857);
      tex = new TLatex(0.9999034,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(858);
      tex = new TLatex(0.9999104,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(859);
      tex = new TLatex(0.9999143,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(860);
      tex = new TLatex(0.9999176,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(861);
      tex = new TLatex(0.9999212,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(862);
      tex = new TLatex(0.9999245,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(863);
      tex = new TLatex(0.9999272,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(864);
      tex = new TLatex(0.9999303,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(865);
      tex = new TLatex(0.9999327,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(866);
      tex = new TLatex(0.9999367,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(867);
      tex = new TLatex(0.9999413,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(868);
      tex = new TLatex(0.999945,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(869);
      tex = new TLatex(0.9999468,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(870);
      tex = new TLatex(0.9999476,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(871);
      tex = new TLatex(0.9999491,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(872);
      tex = new TLatex(0.9999502,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(873);
      tex = new TLatex(0.9999525,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(874);
      tex = new TLatex(0.9999542,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(875);
      tex = new TLatex(0.9999568,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(876);
      tex = new TLatex(0.9999581,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(877);
      tex = new TLatex(0.9999608,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(878);
      tex = new TLatex(0.9999628,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(879);
      tex = new TLatex(0.9999643,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(880);
      tex = new TLatex(0.9999658,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(881);
      tex = new TLatex(0.9999673,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(882);
      tex = new TLatex(0.9999715,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(883);
      tex = new TLatex(0.9999734,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(884);
      tex = new TLatex(0.9999744,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(885);
      tex = new TLatex(0.9999765,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(886);
      tex = new TLatex(0.9999768,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(887);
      tex = new TLatex(0.9999775,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(888);
      tex = new TLatex(0.9999779,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(889);
      tex = new TLatex(0.9999789,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(890);
      tex = new TLatex(0.9999794,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(891);
      tex = new TLatex(0.9999798,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(892);
      tex = new TLatex(0.9999806,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(893);
      tex = new TLatex(0.9999819,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(894);
      tex = new TLatex(0.9999831,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(895);
      tex = new TLatex(0.9999833,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(896);
      tex = new TLatex(0.9999837,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(897);
      tex = new TLatex(0.9999839,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(898);
      tex = new TLatex(0.9999856,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(899);
      tex = new TLatex(0.9999862,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(900);
      tex = new TLatex(0.9999879,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(901);
      tex = new TLatex(0.9999891,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(902);
      tex = new TLatex(0.9999908,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(903);
      tex = new TLatex(0.999992,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(904);
      tex = new TLatex(0.9999924,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(905);
      tex = new TLatex(0.9999934,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(906);
      tex = new TLatex(0.9999936,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(907);
      tex = new TLatex(0.9999937,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(908);
      tex = new TLatex(0.9999938,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(909);
      tex = new TLatex(0.9999939,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(910);
      tex = new TLatex(0.999994,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(911);
      tex = new TLatex(0.999995,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(912);
      tex = new TLatex(0.9999953,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(913);
      tex = new TLatex(0.9999955,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(914);
      tex = new TLatex(0.9999956,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(915);
      tex = new TLatex(0.9999959,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(916);
      tex = new TLatex(0.999996,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(917);
      tex = new TLatex(0.9999961,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(918);
      tex = new TLatex(0.9999962,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(919);
      tex = new TLatex(0.9999962,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(920);
      tex = new TLatex(0.9999964,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(921);
      tex = new TLatex(0.9999965,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(922);
      tex = new TLatex(0.9999965,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(923);
      tex = new TLatex(0.9999967,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(924);
      tex = new TLatex(0.9999976,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(925);
      tex = new TLatex(0.9999978,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(926);
      tex = new TLatex(0.9999979,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(927);
      tex = new TLatex(0.999998,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(928);
      tex = new TLatex(0.999998,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(929);
      tex = new TLatex(0.9999981,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(930);
      tex = new TLatex(0.9999982,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(931);
      tex = new TLatex(0.9999983,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(932);
      tex = new TLatex(0.9999984,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(933);
      tex = new TLatex(0.9999984,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(934);
      tex = new TLatex(0.9999985,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(935);
      tex = new TLatex(0.9999986,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(936);
      tex = new TLatex(0.9999987,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(937);
      tex = new TLatex(0.9999987,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(938);
      tex = new TLatex(0.9999987,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(939);
      tex = new TLatex(0.9999988,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(940);
      tex = new TLatex(0.9999988,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(941);
      tex = new TLatex(0.9999988,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(942);
      tex = new TLatex(0.9999991,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(943);
      tex = new TLatex(0.9999992,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(944);
      tex = new TLatex(0.9999994,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(945);
      tex = new TLatex(0.9999996,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(946);
      tex = new TLatex(0.9999996,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(947);
      tex = new TLatex(0.9999996,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(948);
      tex = new TLatex(0.9999996,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(949);
      tex = new TLatex(0.9999997,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(950);
      tex = new TLatex(0.9999997,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(951);
      tex = new TLatex(0.9999998,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(952);
      tex = new TLatex(0.9999999,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(953);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(954);
   graph->Draw("9
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
   ROC_jets_pt_16->Modified();
   ROC_jets_pt_16->cd();
   ROC_jets_pt_16->SetSelected(ROC_jets_pt_16);
}
