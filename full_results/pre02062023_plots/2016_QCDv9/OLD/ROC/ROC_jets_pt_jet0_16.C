#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_jet0_16()
{
//=========Macro generated from canvas: ROC_jets_pt_jet0_16/ROC_jets_pt_jet0_16
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_jet0_16 = new TCanvas("ROC_jets_pt_jet0_16", "ROC_jets_pt_jet0_16",0,0,600,600);
   ROC_jets_pt_jet0_16->SetHighLightColor(2);
   ROC_jets_pt_jet0_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_jet0_16->SetFillColor(0);
   ROC_jets_pt_jet0_16->SetBorderMode(0);
   ROC_jets_pt_jet0_16->SetBorderSize(2);
   ROC_jets_pt_jet0_16->SetGridx();
   ROC_jets_pt_jet0_16->SetGridy();
   ROC_jets_pt_jet0_16->SetLeftMargin(0.15709);
   ROC_jets_pt_jet0_16->SetRightMargin(0.1234783);
   ROC_jets_pt_jet0_16->SetBottomMargin(0.12);
   ROC_jets_pt_jet0_16->SetFrameBorderMode(0);
   ROC_jets_pt_jet0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1357[200] = {
   0,
   0,
   0,
   0,
   0.03786957,
   0.1023354,
   0.1965941,
   0.308985,
   0.4214827,
   0.5193448,
   0.6008692,
   0.668356,
   0.7230272,
   0.767414,
   0.8040714,
   0.8347994,
   0.8597065,
   0.8802036,
   0.8970051,
   0.9107723,
   0.9226192,
   0.9324867,
   0.9408187,
   0.947896,
   0.9538889,
   0.9589869,
   0.9633901,
   0.9671974,
   0.970493,
   0.9735242,
   0.9761208,
   0.978217,
   0.9801392,
   0.9817985,
   0.9833444,
   0.9846636,
   0.9858489,
   0.9869713,
   0.9879647,
   0.9888407,
   0.9895879,
   0.9903157,
   0.9909549,
   0.9915743,
   0.9921746,
   0.9926772,
   0.9931098,
   0.9935847,
   0.9940424,
   0.9944397,
   0.9947936,
   0.9951468,
   0.9954693,
   0.9957526,
   0.9960609,
   0.9963392,
   0.9965935,
   0.9967991,
   0.9970014,
   0.997174,
   0.9973582,
   0.9975045,
   0.9976615,
   0.9978041,
   0.997944,
   0.9980801,
   0.9982102,
   0.9983362,
   0.9984206,
   0.9985055,
   0.9985974,
   0.9986679,
   0.9987432,
   0.9988128,
   0.9988837,
   0.9989535,
   0.9990204,
   0.9990707,
   0.9991297,
   0.9991831,
   0.9992326,
   0.9992762,
   0.9993116,
   0.9993602,
   0.9993899,
   0.9994167,
   0.9994403,
   0.999472,
   0.9995002,
   0.9995175,
   0.9995501,
   0.9995646,
   0.9995855,
   0.9996194,
   0.9996459,
   0.9996637,
   0.9996828,
   0.9996971,
   0.9997121,
   0.9997226,
   0.9997314,
   0.9997481,
   0.9997596,
   0.999764,
   0.9997806,
   0.9997882,
   0.9997981,
   0.999809,
   0.9998185,
   0.9998237,
   0.9998327,
   0.9998387,
   0.9998503,
   0.9998616,
   0.9998715,
   0.9998756,
   0.9998776,
   0.9998799,
   0.9998827,
   0.9998877,
   0.9998929,
   0.9998957,
   0.9998992,
   0.9999061,
   0.9999102,
   0.999914,
   0.9999161,
   0.999918,
   0.9999287,
   0.9999346,
   0.9999364,
   0.9999403,
   0.9999411,
   0.9999428,
   0.9999439,
   0.9999442,
   0.9999456,
   0.9999465,
   0.9999485,
   0.9999525,
   0.9999561,
   0.999957,
   0.9999575,
   0.9999581,
   0.9999616,
   0.999963,
   0.9999681,
   0.9999721,
   0.9999776,
   0.9999813,
   0.9999824,
   0.9999829,
   0.9999834,
   0.999984,
   0.9999843,
   0.9999846,
   0.9999849,
   0.9999877,
   0.9999886,
   0.9999887,
   0.999989,
   0.9999895,
   0.9999901,
   0.9999904,
   0.9999904,
   0.9999904,
   0.9999907,
   0.9999909,
   0.9999909,
   0.9999912,
   0.999994,
   0.9999946,
   0.9999946,
   0.9999949,
   0.9999949,
   0.9999951,
   0.9999951,
   0.9999951,
   0.9999954,
   0.9999954,
   0.9999957,
   0.999996,
   0.9999963,
   0.9999963,
   0.9999964,
   0.9999967,
   0.9999967,
   0.9999967,
   0.9999975,
   0.9999978,
   0.9999983,
   0.9999989,
   0.9999989,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999992,
   0.9999994,
   0.9999997,
   1};
   Double_t Graph_fy1357[200] = {
   0,
   0,
   0,
   0,
   0.219766,
   0.4679992,
   0.6800169,
   0.8167541,
   0.892297,
   0.9335058,
   0.9569641,
   0.970974,
   0.9797545,
   0.9854559,
   0.9893191,
   0.9919953,
   0.9938946,
   0.9952738,
   0.9962947,
   0.9970627,
   0.9976465,
   0.9980956,
   0.9984463,
   0.9987229,
   0.9989431,
   0.9991193,
   0.999261,
   0.999377,
   0.9994725,
   0.9995514,
   0.9996166,
   0.999671,
   0.9997166,
   0.999755,
   0.9997876,
   0.9998152,
   0.9998388,
   0.999859,
   0.9998765,
   0.9998916,
   0.9999047,
   0.999916,
   0.9999258,
   0.9999343,
   0.9999418,
   0.9999483,
   0.999954,
   0.999959,
   0.9999633,
   0.999967,
   0.9999703,
   0.9999732,
   0.9999757,
   0.999978,
   0.99998,
   0.9999818,
   0.9999834,
   0.9999849,
   0.9999862,
   0.9999874,
   0.9999884,
   0.9999893,
   0.9999902,
   0.999991,
   0.9999917,
   0.9999923,
   0.9999929,
   0.9999934,
   0.9999939,
   0.9999944,
   0.9999948,
   0.9999951,
   0.9999955,
   0.9999958,
   0.9999961,
   0.9999964,
   0.9999967,
   0.9999969,
   0.9999971,
   0.9999973,
   0.9999975,
   0.9999977,
   0.9999979,
   0.999998,
   0.9999981,
   0.9999983,
   0.9999984,
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
   1};
   TGraph *graph = new TGraph(200,Graph_fx1357,Graph_fy1357);
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
   
   TH1F *Graph_Graph1357 = new TH1F("Graph_Graph1357","",200,0,1.1);
   Graph_Graph1357->SetMinimum(0);
   Graph_Graph1357->SetMaximum(1.1);
   Graph_Graph1357->SetDirectory(0);
   Graph_Graph1357->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1357->SetLineColor(ci);
   Graph_Graph1357->GetXaxis()->SetLabelFont(42);
   Graph_Graph1357->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1357->GetXaxis()->SetTitleFont(42);
   Graph_Graph1357->GetYaxis()->SetLabelFont(42);
   Graph_Graph1357->GetYaxis()->SetTitleFont(42);
   Graph_Graph1357->GetZaxis()->SetLabelFont(42);
   Graph_Graph1357->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1357->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1357);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1358);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1359);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1360);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1361);
      tex = new TLatex(0.03786957,0.279766,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1362);
      tex = new TLatex(0.1023354,0.5279992,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1363);
      tex = new TLatex(0.1965941,0.7400169,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1364);
      tex = new TLatex(0.308985,0.8767541,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1365);
      tex = new TLatex(0.4214827,0.952297,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1366);
      tex = new TLatex(0.5193448,0.9935058,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1367);
      tex = new TLatex(0.6008692,1.016964,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1368);
      tex = new TLatex(0.668356,1.030974,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1369);
      tex = new TLatex(0.7230272,1.039755,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1370);
      tex = new TLatex(0.767414,1.045456,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1371);
      tex = new TLatex(0.8040714,1.049319,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1372);
      tex = new TLatex(0.8347994,1.051995,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1373);
      tex = new TLatex(0.8597065,1.053895,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1374);
      tex = new TLatex(0.8802036,1.055274,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1375);
      tex = new TLatex(0.8970051,1.056295,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1376);
      tex = new TLatex(0.9107723,1.057063,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1377);
      tex = new TLatex(0.9226192,1.057646,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1378);
      tex = new TLatex(0.9324867,1.058096,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1379);
      tex = new TLatex(0.9408187,1.058446,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1380);
      tex = new TLatex(0.947896,1.058723,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1381);
      tex = new TLatex(0.9538889,1.058943,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1382);
      tex = new TLatex(0.9589869,1.059119,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1383);
      tex = new TLatex(0.9633901,1.059261,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1384);
      tex = new TLatex(0.9671974,1.059377,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1385);
      tex = new TLatex(0.970493,1.059473,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1386);
      tex = new TLatex(0.9735242,1.059551,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1387);
      tex = new TLatex(0.9761208,1.059617,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1388);
      tex = new TLatex(0.978217,1.059671,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1389);
      tex = new TLatex(0.9801392,1.059717,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1390);
      tex = new TLatex(0.9817985,1.059755,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1391);
      tex = new TLatex(0.9833444,1.059788,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1392);
      tex = new TLatex(0.9846636,1.059815,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1393);
      tex = new TLatex(0.9858489,1.059839,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1394);
      tex = new TLatex(0.9869713,1.059859,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1395);
      tex = new TLatex(0.9879647,1.059877,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1396);
      tex = new TLatex(0.9888407,1.059892,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1397);
      tex = new TLatex(0.9895879,1.059905,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1398);
      tex = new TLatex(0.9903157,1.059916,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1399);
      tex = new TLatex(0.9909549,1.059926,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1400);
      tex = new TLatex(0.9915743,1.059934,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1401);
      tex = new TLatex(0.9921746,1.059942,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1402);
      tex = new TLatex(0.9926772,1.059948,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1403);
      tex = new TLatex(0.9931098,1.059954,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1404);
      tex = new TLatex(0.9935847,1.059959,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1405);
      tex = new TLatex(0.9940424,1.059963,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1406);
      tex = new TLatex(0.9944397,1.059967,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1407);
      tex = new TLatex(0.9947936,1.05997,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1408);
      tex = new TLatex(0.9951468,1.059973,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1409);
      tex = new TLatex(0.9954693,1.059976,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1410);
      tex = new TLatex(0.9957526,1.059978,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1411);
      tex = new TLatex(0.9960609,1.05998,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1412);
      tex = new TLatex(0.9963392,1.059982,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1413);
      tex = new TLatex(0.9965935,1.059983,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1414);
      tex = new TLatex(0.9967991,1.059985,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1415);
      tex = new TLatex(0.9970014,1.059986,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1416);
      tex = new TLatex(0.997174,1.059987,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1417);
      tex = new TLatex(0.9973582,1.059988,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1418);
      tex = new TLatex(0.9975045,1.059989,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1419);
      tex = new TLatex(0.9976615,1.05999,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1420);
      tex = new TLatex(0.9978041,1.059991,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1421);
      tex = new TLatex(0.997944,1.059992,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1422);
      tex = new TLatex(0.9980801,1.059992,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1423);
      tex = new TLatex(0.9982102,1.059993,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1424);
      tex = new TLatex(0.9983362,1.059993,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1425);
      tex = new TLatex(0.9984206,1.059994,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1426);
      tex = new TLatex(0.9985055,1.059994,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1427);
      tex = new TLatex(0.9985974,1.059995,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1428);
      tex = new TLatex(0.9986679,1.059995,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1429);
      tex = new TLatex(0.9987432,1.059995,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1430);
      tex = new TLatex(0.9988128,1.059996,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1431);
      tex = new TLatex(0.9988837,1.059996,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1432);
      tex = new TLatex(0.9989535,1.059996,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1433);
      tex = new TLatex(0.9990204,1.059997,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1434);
      tex = new TLatex(0.9990707,1.059997,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1435);
      tex = new TLatex(0.9991297,1.059997,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1436);
      tex = new TLatex(0.9991831,1.059997,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1437);
      tex = new TLatex(0.9992326,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1438);
      tex = new TLatex(0.9992762,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1439);
      tex = new TLatex(0.9993116,1.059998,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1440);
      tex = new TLatex(0.9993602,1.059998,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1441);
      tex = new TLatex(0.9993899,1.059998,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1442);
      tex = new TLatex(0.9994167,1.059998,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1443);
      tex = new TLatex(0.9994403,1.059998,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1444);
      tex = new TLatex(0.999472,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1445);
      tex = new TLatex(0.9995002,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1446);
      tex = new TLatex(0.9995175,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1447);
      tex = new TLatex(0.9995501,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1448);
      tex = new TLatex(0.9995646,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1449);
      tex = new TLatex(0.9995855,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1450);
      tex = new TLatex(0.9996194,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1451);
      tex = new TLatex(0.9996459,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1452);
      tex = new TLatex(0.9996637,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1453);
      tex = new TLatex(0.9996828,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1454);
      tex = new TLatex(0.9996971,1.059999,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1455);
      tex = new TLatex(0.9997121,1.059999,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1456);
      tex = new TLatex(0.9997226,1.059999,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1457);
      tex = new TLatex(0.9997314,1.059999,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1458);
      tex = new TLatex(0.9997481,1.059999,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1459);
      tex = new TLatex(0.9997596,1.059999,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1460);
      tex = new TLatex(0.999764,1.059999,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1461);
      tex = new TLatex(0.9997806,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1462);
      tex = new TLatex(0.9997882,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1463);
      tex = new TLatex(0.9997981,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1464);
      tex = new TLatex(0.999809,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1465);
      tex = new TLatex(0.9998185,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1466);
      tex = new TLatex(0.9998237,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1467);
      tex = new TLatex(0.9998327,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1468);
      tex = new TLatex(0.9998387,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1469);
      tex = new TLatex(0.9998503,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1470);
      tex = new TLatex(0.9998616,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1471);
      tex = new TLatex(0.9998715,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1472);
      tex = new TLatex(0.9998756,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1473);
      tex = new TLatex(0.9998776,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1474);
      tex = new TLatex(0.9998799,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1475);
      tex = new TLatex(0.9998827,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1476);
      tex = new TLatex(0.9998877,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1477);
      tex = new TLatex(0.9998929,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1478);
      tex = new TLatex(0.9998957,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1479);
      tex = new TLatex(0.9998992,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1480);
      tex = new TLatex(0.9999061,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1481);
      tex = new TLatex(0.9999102,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1482);
      tex = new TLatex(0.999914,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1483);
      tex = new TLatex(0.9999161,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1484);
      tex = new TLatex(0.999918,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1485);
      tex = new TLatex(0.9999287,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1486);
      tex = new TLatex(0.9999346,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1487);
      tex = new TLatex(0.9999364,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1488);
      tex = new TLatex(0.9999403,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1489);
      tex = new TLatex(0.9999411,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1490);
      tex = new TLatex(0.9999428,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1491);
      tex = new TLatex(0.9999439,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1492);
      tex = new TLatex(0.9999442,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1493);
      tex = new TLatex(0.9999456,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1494);
      tex = new TLatex(0.9999465,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1495);
      tex = new TLatex(0.9999485,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1496);
      tex = new TLatex(0.9999525,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1497);
      tex = new TLatex(0.9999561,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1498);
      tex = new TLatex(0.999957,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1499);
      tex = new TLatex(0.9999575,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1500);
      tex = new TLatex(0.9999581,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1501);
      tex = new TLatex(0.9999616,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1502);
      tex = new TLatex(0.999963,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1503);
      tex = new TLatex(0.9999681,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1504);
      tex = new TLatex(0.9999721,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1505);
      tex = new TLatex(0.9999776,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1506);
      tex = new TLatex(0.9999813,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1507);
      tex = new TLatex(0.9999824,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1508);
      tex = new TLatex(0.9999829,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1509);
      tex = new TLatex(0.9999834,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1510);
      tex = new TLatex(0.999984,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1511);
      tex = new TLatex(0.9999843,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1512);
      tex = new TLatex(0.9999846,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1513);
      tex = new TLatex(0.9999849,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1514);
      tex = new TLatex(0.9999877,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1515);
      tex = new TLatex(0.9999886,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1516);
      tex = new TLatex(0.9999887,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1517);
      tex = new TLatex(0.999989,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1518);
      tex = new TLatex(0.9999895,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1519);
      tex = new TLatex(0.9999901,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1520);
      tex = new TLatex(0.9999904,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1521);
      tex = new TLatex(0.9999904,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1522);
      tex = new TLatex(0.9999904,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1523);
      tex = new TLatex(0.9999907,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1524);
      tex = new TLatex(0.9999909,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1525);
      tex = new TLatex(0.9999909,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1526);
      tex = new TLatex(0.9999912,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1527);
      tex = new TLatex(0.999994,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1528);
      tex = new TLatex(0.9999946,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1529);
      tex = new TLatex(0.9999946,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1530);
      tex = new TLatex(0.9999949,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1531);
      tex = new TLatex(0.9999949,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1532);
      tex = new TLatex(0.9999951,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1533);
      tex = new TLatex(0.9999951,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1534);
      tex = new TLatex(0.9999951,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1535);
      tex = new TLatex(0.9999954,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1536);
      tex = new TLatex(0.9999954,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1537);
      tex = new TLatex(0.9999957,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1538);
      tex = new TLatex(0.999996,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1539);
      tex = new TLatex(0.9999963,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1540);
      tex = new TLatex(0.9999963,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1541);
      tex = new TLatex(0.9999964,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1542);
      tex = new TLatex(0.9999967,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1543);
      tex = new TLatex(0.9999967,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1544);
      tex = new TLatex(0.9999967,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1545);
      tex = new TLatex(0.9999975,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1546);
      tex = new TLatex(0.9999978,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1547);
      tex = new TLatex(0.9999983,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1548);
      tex = new TLatex(0.9999989,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1549);
      tex = new TLatex(0.9999989,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1550);
      tex = new TLatex(0.9999992,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1551);
      tex = new TLatex(0.9999992,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1552);
      tex = new TLatex(0.9999992,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1553);
      tex = new TLatex(0.9999992,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1554);
      tex = new TLatex(0.9999994,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1555);
      tex = new TLatex(0.9999997,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1556);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1557);
   graph->Draw("nodraw #1502
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
   ROC_jets_pt_jet0_16->Modified();
   ROC_jets_pt_jet0_16->cd();
   ROC_jets_pt_jet0_16->SetSelected(ROC_jets_pt_jet0_16);
}
