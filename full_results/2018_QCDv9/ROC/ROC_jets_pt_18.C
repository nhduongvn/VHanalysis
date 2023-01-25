#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_jets_pt_18()
{
//=========Macro generated from canvas: ROC_jets_pt_18/ROC_jets_pt_18
//=========  (Tue Jan 24 10:54:38 2023) by ROOT version 6.26/06
   TCanvas *ROC_jets_pt_18 = new TCanvas("ROC_jets_pt_18", "ROC_jets_pt_18",0,0,600,600);
   ROC_jets_pt_18->SetHighLightColor(2);
   ROC_jets_pt_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_jets_pt_18->SetFillColor(0);
   ROC_jets_pt_18->SetBorderMode(0);
   ROC_jets_pt_18->SetBorderSize(2);
   ROC_jets_pt_18->SetGridx();
   ROC_jets_pt_18->SetGridy();
   ROC_jets_pt_18->SetLeftMargin(0.15709);
   ROC_jets_pt_18->SetRightMargin(0.1234783);
   ROC_jets_pt_18->SetBottomMargin(0.12);
   ROC_jets_pt_18->SetFrameBorderMode(0);
   ROC_jets_pt_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1156[200] = {
   0,
   0,
   0,
   0,
   0.1912318,
   0.35057,
   0.4824646,
   0.5889229,
   0.6740123,
   0.7404234,
   0.7923079,
   0.8327085,
   0.8644573,
   0.8891714,
   0.9086788,
   0.9241364,
   0.9365161,
   0.9465834,
   0.9549206,
   0.9616416,
   0.9672066,
   0.9717818,
   0.9755153,
   0.9785866,
   0.9811854,
   0.9833643,
   0.9852816,
   0.9869106,
   0.9882848,
   0.9894893,
   0.9905259,
   0.9914698,
   0.9922345,
   0.9929451,
   0.9935434,
   0.9940695,
   0.9945422,
   0.9949596,
   0.9953448,
   0.9956944,
   0.9960248,
   0.9963273,
   0.9965862,
   0.9968217,
   0.9970432,
   0.9972444,
   0.9974251,
   0.9976003,
   0.997762,
   0.9979027,
   0.9980546,
   0.9981899,
   0.9983077,
   0.998435,
   0.9985406,
   0.998642,
   0.998737,
   0.9988219,
   0.9989053,
   0.9989902,
   0.99905,
   0.9991052,
   0.9991652,
   0.9992108,
   0.9992622,
   0.9993149,
   0.9993588,
   0.9994031,
   0.9994451,
   0.999476,
   0.9995082,
   0.9995428,
   0.9995763,
   0.9996061,
   0.9996374,
   0.999663,
   0.9996895,
   0.9997108,
   0.9997262,
   0.9997412,
   0.9997553,
   0.9997679,
   0.9997817,
   0.9997921,
   0.9998041,
   0.9998177,
   0.9998277,
   0.9998358,
   0.9998469,
   0.9998556,
   0.999865,
   0.9998734,
   0.9998779,
   0.9998828,
   0.9998907,
   0.9998952,
   0.9999022,
   0.9999114,
   0.9999167,
   0.9999201,
   0.9999261,
   0.99993,
   0.9999342,
   0.9999373,
   0.9999423,
   0.9999445,
   0.9999479,
   0.9999489,
   0.9999506,
   0.9999519,
   0.9999538,
   0.9999552,
   0.9999576,
   0.9999626,
   0.9999635,
   0.9999644,
   0.9999661,
   0.9999678,
   0.9999718,
   0.999973,
   0.9999736,
   0.9999749,
   0.9999772,
   0.9999782,
   0.9999785,
   0.9999794,
   0.9999808,
   0.9999812,
   0.9999824,
   0.9999828,
   0.999984,
   0.9999844,
   0.9999865,
   0.9999868,
   0.9999876,
   0.999988,
   0.99999,
   0.99999,
   0.9999917,
   0.9999919,
   0.9999922,
   0.9999923,
   0.9999925,
   0.9999933,
   0.9999935,
   0.9999936,
   0.9999936,
   0.9999938,
   0.999994,
   0.999994,
   0.9999944,
   0.9999948,
   0.999995,
   0.9999962,
   0.9999962,
   0.9999964,
   0.9999965,
   0.9999966,
   0.9999966,
   0.9999966,
   0.9999968,
   0.9999969,
   0.9999978,
   0.9999979,
   0.9999979,
   0.999998,
   0.9999982,
   0.9999982,
   0.9999984,
   0.9999984,
   0.9999985,
   0.9999985,
   0.9999985,
   0.9999992,
   0.9999994,
   0.9999994,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999995,
   0.9999996,
   0.9999996,
   0.9999996,
   0.9999997,
   0.9999997,
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
   1};
   Double_t Graph_fy1156[200] = {
   0,
   0,
   0,
   0,
   0.3260756,
   0.5739415,
   0.7515693,
   0.858341,
   0.9165415,
   0.9483951,
   0.9665942,
   0.9775025,
   0.9843421,
   0.988785,
   0.991786,
   0.9938555,
   0.995319,
   0.9963765,
   0.9971567,
   0.9977429,
   0.9981903,
   0.9985365,
   0.9988067,
   0.9990197,
   0.9991889,
   0.999325,
   0.9994343,
   0.9995244,
   0.9995982,
   0.9996592,
   0.9997096,
   0.9997515,
   0.9997864,
   0.9998157,
   0.9998403,
   0.9998611,
   0.9998788,
   0.9998938,
   0.9999067,
   0.9999179,
   0.9999275,
   0.9999358,
   0.999943,
   0.9999493,
   0.9999549,
   0.9999597,
   0.999964,
   0.9999678,
   0.9999711,
   0.999974,
   0.9999766,
   0.9999789,
   0.9999809,
   0.9999827,
   0.9999843,
   0.9999858,
   0.9999872,
   0.9999884,
   0.9999894,
   0.9999904,
   0.9999912,
   0.999992,
   0.9999927,
   0.9999934,
   0.9999939,
   0.9999944,
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   TGraph *graph = new TGraph(200,Graph_fx1156,Graph_fy1156);
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
   
   TH1F *Graph_Graph1156 = new TH1F("Graph_Graph1156","",200,0,1.1);
   Graph_Graph1156->SetMinimum(0);
   Graph_Graph1156->SetMaximum(1.1);
   Graph_Graph1156->SetDirectory(0);
   Graph_Graph1156->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1156->SetLineColor(ci);
   Graph_Graph1156->GetXaxis()->SetLabelFont(42);
   Graph_Graph1156->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1156->GetXaxis()->SetTitleFont(42);
   Graph_Graph1156->GetYaxis()->SetLabelFont(42);
   Graph_Graph1156->GetYaxis()->SetTitleFont(42);
   Graph_Graph1156->GetZaxis()->SetLabelFont(42);
   Graph_Graph1156->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1156->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1156);
   
   TLatex *   tex = new TLatex(0,0.06,"5.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1157);
      tex = new TLatex(0,0.06,"15.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1158);
      tex = new TLatex(0,0.06,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1159);
      tex = new TLatex(0,0.06,"35.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1160);
      tex = new TLatex(0.1912318,0.3860756,"45.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1161);
      tex = new TLatex(0.35057,0.6339415,"55.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1162);
      tex = new TLatex(0.4824646,0.8115693,"65.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1163);
      tex = new TLatex(0.5889229,0.918341,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1164);
      tex = new TLatex(0.6740123,0.9765415,"85.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1165);
      tex = new TLatex(0.7404234,1.008395,"95.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1166);
      tex = new TLatex(0.7923079,1.026594,"105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1167);
      tex = new TLatex(0.8327085,1.037503,"115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1168);
      tex = new TLatex(0.8644573,1.044342,"125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1169);
      tex = new TLatex(0.8891714,1.048785,"135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1170);
      tex = new TLatex(0.9086788,1.051786,"145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1171);
      tex = new TLatex(0.9241364,1.053856,"155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1172);
      tex = new TLatex(0.9365161,1.055319,"165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1173);
      tex = new TLatex(0.9465834,1.056376,"175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1174);
      tex = new TLatex(0.9549206,1.057157,"185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1175);
      tex = new TLatex(0.9616416,1.057743,"195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1176);
      tex = new TLatex(0.9672066,1.05819,"205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1177);
      tex = new TLatex(0.9717818,1.058536,"215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1178);
      tex = new TLatex(0.9755153,1.058807,"225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1179);
      tex = new TLatex(0.9785866,1.05902,"235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1180);
      tex = new TLatex(0.9811854,1.059189,"245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1181);
      tex = new TLatex(0.9833643,1.059325,"255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1182);
      tex = new TLatex(0.9852816,1.059434,"265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1183);
      tex = new TLatex(0.9869106,1.059524,"275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1184);
      tex = new TLatex(0.9882848,1.059598,"285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1185);
      tex = new TLatex(0.9894893,1.059659,"295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1186);
      tex = new TLatex(0.9905259,1.05971,"305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1187);
      tex = new TLatex(0.9914698,1.059751,"315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1188);
      tex = new TLatex(0.9922345,1.059786,"325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1189);
      tex = new TLatex(0.9929451,1.059816,"335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1190);
      tex = new TLatex(0.9935434,1.05984,"345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1191);
      tex = new TLatex(0.9940695,1.059861,"355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1192);
      tex = new TLatex(0.9945422,1.059879,"365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1193);
      tex = new TLatex(0.9949596,1.059894,"375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1194);
      tex = new TLatex(0.9953448,1.059907,"385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1195);
      tex = new TLatex(0.9956944,1.059918,"395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1196);
      tex = new TLatex(0.9960248,1.059928,"405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1197);
      tex = new TLatex(0.9963273,1.059936,"415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1198);
      tex = new TLatex(0.9965862,1.059943,"425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1199);
      tex = new TLatex(0.9968217,1.059949,"435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1200);
      tex = new TLatex(0.9970432,1.059955,"445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1201);
      tex = new TLatex(0.9972444,1.05996,"455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1202);
      tex = new TLatex(0.9974251,1.059964,"465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1203);
      tex = new TLatex(0.9976003,1.059968,"475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1204);
      tex = new TLatex(0.997762,1.059971,"485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1205);
      tex = new TLatex(0.9979027,1.059974,"495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1206);
      tex = new TLatex(0.9980546,1.059977,"505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1207);
      tex = new TLatex(0.9981899,1.059979,"515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1208);
      tex = new TLatex(0.9983077,1.059981,"525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1209);
      tex = new TLatex(0.998435,1.059983,"535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1210);
      tex = new TLatex(0.9985406,1.059984,"545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1211);
      tex = new TLatex(0.998642,1.059986,"555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1212);
      tex = new TLatex(0.998737,1.059987,"565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1213);
      tex = new TLatex(0.9988219,1.059988,"575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1214);
      tex = new TLatex(0.9989053,1.059989,"585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1215);
      tex = new TLatex(0.9989902,1.05999,"595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1216);
      tex = new TLatex(0.99905,1.059991,"605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1217);
      tex = new TLatex(0.9991052,1.059992,"615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1218);
      tex = new TLatex(0.9991652,1.059993,"625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1219);
      tex = new TLatex(0.9992108,1.059993,"635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1220);
      tex = new TLatex(0.9992622,1.059994,"645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1221);
      tex = new TLatex(0.9993149,1.059994,"655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1222);
      tex = new TLatex(0.9993588,1.059995,"665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1223);
      tex = new TLatex(0.9994031,1.059995,"675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1224);
      tex = new TLatex(0.9994451,1.059996,"685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1225);
      tex = new TLatex(0.999476,1.059996,"695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1226);
      tex = new TLatex(0.9995082,1.059996,"705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1227);
      tex = new TLatex(0.9995428,1.059997,"715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1228);
      tex = new TLatex(0.9995763,1.059997,"725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1229);
      tex = new TLatex(0.9996061,1.059997,"735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1230);
      tex = new TLatex(0.9996374,1.059997,"745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1231);
      tex = new TLatex(0.999663,1.059998,"755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1232);
      tex = new TLatex(0.9996895,1.059998,"765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1233);
      tex = new TLatex(0.9997108,1.059998,"775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1234);
      tex = new TLatex(0.9997262,1.059998,"785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1235);
      tex = new TLatex(0.9997412,1.059998,"795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1236);
      tex = new TLatex(0.9997553,1.059998,"805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1237);
      tex = new TLatex(0.9997679,1.059998,"815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1238);
      tex = new TLatex(0.9997817,1.059999,"825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1239);
      tex = new TLatex(0.9997921,1.059999,"835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1240);
      tex = new TLatex(0.9998041,1.059999,"845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1241);
      tex = new TLatex(0.9998177,1.059999,"855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1242);
      tex = new TLatex(0.9998277,1.059999,"865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1243);
      tex = new TLatex(0.9998358,1.059999,"875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1244);
      tex = new TLatex(0.9998469,1.059999,"885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1245);
      tex = new TLatex(0.9998556,1.059999,"895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1246);
      tex = new TLatex(0.999865,1.059999,"905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1247);
      tex = new TLatex(0.9998734,1.059999,"915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1248);
      tex = new TLatex(0.9998779,1.059999,"925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1249);
      tex = new TLatex(0.9998828,1.059999,"935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1250);
      tex = new TLatex(0.9998907,1.059999,"945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1251);
      tex = new TLatex(0.9998952,1.059999,"955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1252);
      tex = new TLatex(0.9999022,1.059999,"965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1253);
      tex = new TLatex(0.9999114,1.06,"975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1254);
      tex = new TLatex(0.9999167,1.06,"985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1255);
      tex = new TLatex(0.9999201,1.06,"995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1256);
      tex = new TLatex(0.9999261,1.06,"1005.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1257);
      tex = new TLatex(0.99993,1.06,"1015.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1258);
      tex = new TLatex(0.9999342,1.06,"1025.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1259);
      tex = new TLatex(0.9999373,1.06,"1035.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1260);
      tex = new TLatex(0.9999423,1.06,"1045.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1261);
      tex = new TLatex(0.9999445,1.06,"1055.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1262);
      tex = new TLatex(0.9999479,1.06,"1065.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1263);
      tex = new TLatex(0.9999489,1.06,"1075.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1264);
      tex = new TLatex(0.9999506,1.06,"1085.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1265);
      tex = new TLatex(0.9999519,1.06,"1095.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1266);
      tex = new TLatex(0.9999538,1.06,"1105.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1267);
      tex = new TLatex(0.9999552,1.06,"1115.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1268);
      tex = new TLatex(0.9999576,1.06,"1125.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1269);
      tex = new TLatex(0.9999626,1.06,"1135.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1270);
      tex = new TLatex(0.9999635,1.06,"1145.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1271);
      tex = new TLatex(0.9999644,1.06,"1155.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1272);
      tex = new TLatex(0.9999661,1.06,"1165.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1273);
      tex = new TLatex(0.9999678,1.06,"1175.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1274);
      tex = new TLatex(0.9999718,1.06,"1185.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1275);
      tex = new TLatex(0.999973,1.06,"1195.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1276);
      tex = new TLatex(0.9999736,1.06,"1205.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1277);
      tex = new TLatex(0.9999749,1.06,"1215.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1278);
      tex = new TLatex(0.9999772,1.06,"1225.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1279);
      tex = new TLatex(0.9999782,1.06,"1235.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1280);
      tex = new TLatex(0.9999785,1.06,"1245.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1281);
      tex = new TLatex(0.9999794,1.06,"1255.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1282);
      tex = new TLatex(0.9999808,1.06,"1265.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1283);
      tex = new TLatex(0.9999812,1.06,"1275.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1284);
      tex = new TLatex(0.9999824,1.06,"1285.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1285);
      tex = new TLatex(0.9999828,1.06,"1295.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1286);
      tex = new TLatex(0.999984,1.06,"1305.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1287);
      tex = new TLatex(0.9999844,1.06,"1315.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1288);
      tex = new TLatex(0.9999865,1.06,"1325.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1289);
      tex = new TLatex(0.9999868,1.06,"1335.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1290);
      tex = new TLatex(0.9999876,1.06,"1345.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1291);
      tex = new TLatex(0.999988,1.06,"1355.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1292);
      tex = new TLatex(0.99999,1.06,"1365.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1293);
      tex = new TLatex(0.99999,1.06,"1375.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1294);
      tex = new TLatex(0.9999917,1.06,"1385.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1295);
      tex = new TLatex(0.9999919,1.06,"1395.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1296);
      tex = new TLatex(0.9999922,1.06,"1405.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1297);
      tex = new TLatex(0.9999923,1.06,"1415.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1298);
      tex = new TLatex(0.9999925,1.06,"1425.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1299);
      tex = new TLatex(0.9999933,1.06,"1435.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1300);
      tex = new TLatex(0.9999935,1.06,"1445.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1301);
      tex = new TLatex(0.9999936,1.06,"1455.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1302);
      tex = new TLatex(0.9999936,1.06,"1465.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1303);
      tex = new TLatex(0.9999938,1.06,"1475.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1304);
      tex = new TLatex(0.999994,1.06,"1485.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1305);
      tex = new TLatex(0.999994,1.06,"1495.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1306);
      tex = new TLatex(0.9999944,1.06,"1505.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1307);
      tex = new TLatex(0.9999948,1.06,"1515.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1308);
      tex = new TLatex(0.999995,1.06,"1525.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1309);
      tex = new TLatex(0.9999962,1.06,"1535.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1310);
      tex = new TLatex(0.9999962,1.06,"1545.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1311);
      tex = new TLatex(0.9999964,1.06,"1555.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1312);
      tex = new TLatex(0.9999965,1.06,"1565.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1313);
      tex = new TLatex(0.9999966,1.06,"1575.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1314);
      tex = new TLatex(0.9999966,1.06,"1585.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1315);
      tex = new TLatex(0.9999966,1.06,"1595.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1316);
      tex = new TLatex(0.9999968,1.06,"1605.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1317);
      tex = new TLatex(0.9999969,1.06,"1615.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1318);
      tex = new TLatex(0.9999978,1.06,"1625.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1319);
      tex = new TLatex(0.9999979,1.06,"1635.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1320);
      tex = new TLatex(0.9999979,1.06,"1645.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1321);
      tex = new TLatex(0.999998,1.06,"1655.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1322);
      tex = new TLatex(0.9999982,1.06,"1665.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1323);
      tex = new TLatex(0.9999982,1.06,"1675.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1324);
      tex = new TLatex(0.9999984,1.06,"1685.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1325);
      tex = new TLatex(0.9999984,1.06,"1695.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1326);
      tex = new TLatex(0.9999985,1.06,"1705.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1327);
      tex = new TLatex(0.9999985,1.06,"1715.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1328);
      tex = new TLatex(0.9999985,1.06,"1725.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1329);
      tex = new TLatex(0.9999992,1.06,"1735.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1330);
      tex = new TLatex(0.9999994,1.06,"1745.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1331);
      tex = new TLatex(0.9999994,1.06,"1755.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1332);
      tex = new TLatex(0.9999995,1.06,"1765.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1333);
      tex = new TLatex(0.9999995,1.06,"1775.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1334);
      tex = new TLatex(0.9999995,1.06,"1785.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1335);
      tex = new TLatex(0.9999995,1.06,"1795.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1336);
      tex = new TLatex(0.9999995,1.06,"1805.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1337);
      tex = new TLatex(0.9999995,1.06,"1815.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1338);
      tex = new TLatex(0.9999996,1.06,"1825.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1339);
      tex = new TLatex(0.9999996,1.06,"1835.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1340);
      tex = new TLatex(0.9999996,1.06,"1845.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1341);
      tex = new TLatex(0.9999997,1.06,"1855.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1342);
      tex = new TLatex(0.9999997,1.06,"1865.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1343);
      tex = new TLatex(0.9999999,1.06,"1875.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1344);
      tex = new TLatex(0.9999999,1.06,"1885.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1345);
      tex = new TLatex(0.9999999,1.06,"1895.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1346);
      tex = new TLatex(0.9999999,1.06,"1905.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1347);
      tex = new TLatex(0.9999999,1.06,"1915.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1348);
      tex = new TLatex(0.9999999,1.06,"1925.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1349);
      tex = new TLatex(0.9999999,1.06,"1935.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1350);
      tex = new TLatex(0.9999999,1.06,"1945.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1351);
      tex = new TLatex(1,1.06,"1955.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1352);
      tex = new TLatex(1,1.06,"1965.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1353);
      tex = new TLatex(1,1.06,"1975.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1354);
      tex = new TLatex(1,1.06,"1985.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1355);
      tex = new TLatex(1,1.06,"1995.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1356);
   graph->Draw("nodraw #1301
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
   ROC_jets_pt_18->Modified();
   ROC_jets_pt_18->cd();
   ROC_jets_pt_18->SetSelected(ROC_jets_pt_18);
}
