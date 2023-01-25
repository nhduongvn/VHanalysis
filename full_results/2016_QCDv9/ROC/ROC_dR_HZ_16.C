#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_16()
{
//=========Macro generated from canvas: ROC_dR_HZ_16/ROC_dR_HZ_16
//=========  (Tue Jan 24 15:01:31 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_16 = new TCanvas("ROC_dR_HZ_16", "ROC_dR_HZ_16",0,0,600,600);
   ROC_dR_HZ_16->SetHighLightColor(2);
   ROC_dR_HZ_16->Range(-0.2899564,-0.1615385,1.237807,1.184615);
   ROC_dR_HZ_16->SetFillColor(0);
   ROC_dR_HZ_16->SetBorderMode(0);
   ROC_dR_HZ_16->SetBorderSize(2);
   ROC_dR_HZ_16->SetGridx();
   ROC_dR_HZ_16->SetGridy();
   ROC_dR_HZ_16->SetLeftMargin(0.15709);
   ROC_dR_HZ_16->SetRightMargin(0.1234783);
   ROC_dR_HZ_16->SetBottomMargin(0.12);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1853[60] = {
   0,
   0.0001366122,
   0.0007104117,
   0.001894352,
   0.003369437,
   0.005867323,
   0.008959159,
   0.01189466,
   0.01657972,
   0.02165396,
   0.02607276,
   0.03033234,
   0.03650422,
   0.0417801,
   0.04827299,
   0.05429611,
   0.06270128,
   0.07243191,
   0.08135242,
   0.0911183,
   0.1024702,
   0.1148684,
   0.1303514,
   0.1476733,
   0.1680367,
   0.1933576,
   0.2172511,
   0.2496054,
   0.2899772,
   0.3363212,
   0.4017281,
   0.477958,
   0.5600146,
   0.6149783,
   0.6609823,
   0.6971684,
   0.730505,
   0.7604202,
   0.7904396,
   0.815792,
   0.8391002,
   0.8585024,
   0.8761139,
   0.8912591,
   0.9060162,
   0.9222488,
   0.9340109,
   0.9449119,
   0.9514506,
   0.959314,
   0.9643533,
   0.9706804,
   0.9765279,
   0.9811992,
   0.9864713,
   0.9908489,
   0.993493,
   0.9958063,
   0.9976357,
   0.9987595};
   Double_t Graph_fy1853[60] = {
   0,
   0.0001326468,
   0.0009824056,
   0.002897518,
   0.004714328,
   0.007466404,
   0.01018306,
   0.01263435,
   0.01676446,
   0.02084318,
   0.02617098,
   0.03180208,
   0.03791418,
   0.044163,
   0.05089881,
   0.05814466,
   0.06616291,
   0.07714738,
   0.08832047,
   0.09904803,
   0.1127222,
   0.1282096,
   0.1458143,
   0.1650239,
   0.1876912,
   0.2164039,
   0.2491158,
   0.2892947,
   0.3393807,
   0.4120866,
   0.5079099,
   0.6428513,
   0.7799648,
   0.8418402,
   0.8813006,
   0.9086932,
   0.9245383,
   0.9396313,
   0.9516998,
   0.9605779,
   0.9688555,
   0.9751487,
   0.9791837,
   0.9826663,
   0.9857302,
   0.9879956,
   0.9906664,
   0.9924137,
   0.9938128,
   0.9950895,
   0.9962293,
   0.9967425,
   0.9977534,
   0.9981922,
   0.9984769,
   0.9986333,
   0.9991358,
   0.9992485,
   0.9995201,
   0.9997977};
   TGraph *graph = new TGraph(60,Graph_fx1853,Graph_fy1853);
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
   
   TH1F *Graph_Graph1853 = new TH1F("Graph_Graph1853","Tagging Only",100,0,1.098635);
   Graph_Graph1853->SetMinimum(0);
   Graph_Graph1853->SetMaximum(1.099777);
   Graph_Graph1853->SetDirectory(0);
   Graph_Graph1853->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1853->SetLineColor(ci);
   Graph_Graph1853->GetXaxis()->SetLabelFont(42);
   Graph_Graph1853->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1853->GetXaxis()->SetTitleFont(42);
   Graph_Graph1853->GetYaxis()->SetLabelFont(42);
   Graph_Graph1853->GetYaxis()->SetTitleFont(42);
   Graph_Graph1853->GetZaxis()->SetLabelFont(42);
   Graph_Graph1853->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1853->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1853);
   
   TLatex *   tex = new TLatex(0.05429611,0.1181447,"1.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1854);
      tex = new TLatex(0.06270128,0.1261629,"1.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1855);
      tex = new TLatex(0.07243191,0.1371474,"1.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1856);
      tex = new TLatex(0.08135242,0.1483205,"1.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1857);
      tex = new TLatex(0.0911183,0.159048,"1.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1858);
      tex = new TLatex(0.1024702,0.1727222,"2.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1859);
      tex = new TLatex(0.1148684,0.1882096,"2.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1860);
      tex = new TLatex(0.1303514,0.2058143,"2.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1861);
      tex = new TLatex(0.1476733,0.2250239,"2.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1862);
      tex = new TLatex(0.1680367,0.2476912,"2.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1863);
      tex = new TLatex(0.1933576,0.2764039,"2.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1864);
      tex = new TLatex(0.2172511,0.3091158,"2.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1865);
      tex = new TLatex(0.2496054,0.3492947,"2.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1866);
      tex = new TLatex(0.2899772,0.3993807,"2.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1867);
      tex = new TLatex(0.3363212,0.4720866,"2.95");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1868);
      tex = new TLatex(0.4017281,0.5679099,"3.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1869);
      tex = new TLatex(0.477958,0.7028513,"3.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1870);
      tex = new TLatex(0.5600146,0.8399648,"3.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1871);
      tex = new TLatex(0.6149783,0.9018402,"3.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1872);
      tex = new TLatex(0.6609823,0.9413006,"3.45");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1873);
      tex = new TLatex(0.6971684,0.9686932,"3.55");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1874);
      tex = new TLatex(0.730505,0.9845383,"3.65");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1875);
      tex = new TLatex(0.7604202,0.9996313,"3.75");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1876);
      tex = new TLatex(0.7904396,1.0117,"3.85");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(1877);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx1878[60] = {
   0,
   5.848168e-07,
   3.632366e-06,
   0.0001261309,
   0.0001968981,
   0.0004582456,
   0.000469101,
   0.0004952917,
   0.0008271041,
   0.0008638019,
   0.001007329,
   0.001093308,
   0.001377337,
   0.001695325,
   0.002226944,
   0.002365155,
   0.003420067,
   0.00391767,
   0.007298724,
   0.008016586,
   0.009170079,
   0.01094349,
   0.01289941,
   0.01537987,
   0.02004969,
   0.02691573,
   0.03692225,
   0.05356345,
   0.07702809,
   0.1033619,
   0.1690382,
   0.243441,
   0.3646054,
   0.4364569,
   0.4950876,
   0.5496954,
   0.596197,
   0.6392027,
   0.6888644,
   0.7316388,
   0.7691285,
   0.7958367,
   0.8161578,
   0.8390162,
   0.8602511,
   0.8821984,
   0.903912,
   0.9225934,
   0.9308004,
   0.9428511,
   0.9520914,
   0.9642235,
   0.9743639,
   0.9775362,
   0.9836832,
   0.9885035,
   0.9946731,
   0.9965149,
   0.9980904,
   0.9992014};
   Double_t Graph_fy1878[60] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.934526e-05,
   0.001001769,
   0.001207259,
   0.001259611,
   0.001339166,
   0.003089565,
   0.004760971,
   0.005755542,
   0.00719875,
   0.007678734,
   0.00788814,
   0.01038028,
   0.01423662,
   0.02168118,
   0.03022339,
   0.04587544,
   0.07044269,
   0.1067108,
   0.1830763,
   0.308789,
   0.5054871,
   0.722649,
   0.8233064,
   0.8790064,
   0.9117377,
   0.9272385,
   0.9442076,
   0.9583153,
   0.9677364,
   0.9726649,
   0.9798499,
   0.9846592,
   0.9870258,
   0.9885039,
   0.9914061,
   0.9947707,
   0.99534,
   0.9963332,
   0.9969565,
   0.9988737,
   0.9989775,
   0.9990769,
   0.9995119,
   0.9995119,
   0.9996964,
   0.9997952,
   1,
   1,
   1};
   graph = new TGraph(60,Graph_fx1878,Graph_fy1878);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1878 = new TH1F("Graph_Graph1878","Mass-Matching Prioritized",100,0,1.099122);
   Graph_Graph1878->SetMinimum(0);
   Graph_Graph1878->SetMaximum(1.1);
   Graph_Graph1878->SetDirectory(0);
   Graph_Graph1878->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1878->SetLineColor(ci);
   Graph_Graph1878->GetXaxis()->SetLabelFont(42);
   Graph_Graph1878->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1878->GetXaxis()->SetTitleFont(42);
   Graph_Graph1878->GetYaxis()->SetLabelFont(42);
   Graph_Graph1878->GetYaxis()->SetTitleFont(42);
   Graph_Graph1878->GetZaxis()->SetLabelFont(42);
   Graph_Graph1878->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1878->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1878);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx1879[60] = {
   0,
   0.0001363012,
   0.0007119295,
   0.001893017,
   0.003380545,
   0.005870313,
   0.008994947,
   0.01197109,
   0.0166802,
   0.02174443,
   0.02613889,
   0.03041629,
   0.03655634,
   0.04183422,
   0.04875184,
   0.05484229,
   0.06327986,
   0.07302642,
   0.08208348,
   0.09222836,
   0.1035983,
   0.1161466,
   0.1316763,
   0.1489827,
   0.1692951,
   0.1949835,
   0.2188977,
   0.2508793,
   0.290747,
   0.3375162,
   0.4029235,
   0.4788071,
   0.5603213,
   0.6146994,
   0.6607917,
   0.6969752,
   0.7299944,
   0.7597681,
   0.7896372,
   0.814834,
   0.8382886,
   0.857448,
   0.8748629,
   0.890189,
   0.9054423,
   0.9218127,
   0.9333773,
   0.9442148,
   0.9506674,
   0.9591637,
   0.9642261,
   0.9704776,
   0.9766575,
   0.9813983,
   0.986653,
   0.9910015,
   0.9935904,
   0.9958821,
   0.9976824,
   0.9987798};
   Double_t Graph_fy1879[60] = {
   0,
   0.0001124539,
   0.0008578888,
   0.002668499,
   0.00501096,
   0.008331409,
   0.01117167,
   0.0143365,
   0.01883372,
   0.02368441,
   0.02920949,
   0.03550875,
   0.0415335,
   0.04793909,
   0.05529984,
   0.06342624,
   0.07199652,
   0.08311812,
   0.09466322,
   0.1060158,
   0.1205876,
   0.1368056,
   0.155808,
   0.1759737,
   0.2005346,
   0.2294045,
   0.2638362,
   0.3049596,
   0.355565,
   0.4273285,
   0.51924,
   0.6493853,
   0.7787669,
   0.8392515,
   0.8772669,
   0.9041087,
   0.9212332,
   0.9364206,
   0.9486123,
   0.9575146,
   0.9660774,
   0.9723586,
   0.9769916,
   0.9806086,
   0.9840147,
   0.9863426,
   0.9891496,
   0.9906796,
   0.9923094,
   0.9941017,
   0.9953739,
   0.9961352,
   0.9969771,
   0.9975281,
   0.9980894,
   0.9982571,
   0.9989391,
   0.9992157,
   0.9994526,
   0.9996838};
   graph = new TGraph(60,Graph_fx1879,Graph_fy1879);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1879 = new TH1F("Graph_Graph1879","Tagging Prioritized",100,0,1.098658);
   Graph_Graph1879->SetMinimum(0);
   Graph_Graph1879->SetMaximum(1.099652);
   Graph_Graph1879->SetDirectory(0);
   Graph_Graph1879->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1879->SetLineColor(ci);
   Graph_Graph1879->GetXaxis()->SetLabelFont(42);
   Graph_Graph1879->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1879->GetXaxis()->SetTitleFont(42);
   Graph_Graph1879->GetYaxis()->SetLabelFont(42);
   Graph_Graph1879->GetYaxis()->SetTitleFont(42);
   Graph_Graph1879->GetZaxis()->SetLabelFont(42);
   Graph_Graph1879->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1879->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1879);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04996007, 1.049161);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_16->Modified();
   ROC_dR_HZ_16->cd();
   ROC_dR_HZ_16->SetSelected(ROC_dR_HZ_16);
}
