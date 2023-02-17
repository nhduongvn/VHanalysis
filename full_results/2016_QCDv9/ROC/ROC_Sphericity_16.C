#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_16()
{
//=========Macro generated from canvas: ROC_Sphericity_16/ROC_Sphericity_16
//=========  (Thu Feb 16 10:45:50 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_16 = new TCanvas("ROC_Sphericity_16", "ROC_Sphericity_16",0,0,600,600);
   ROC_Sphericity_16->SetHighLightColor(2);
   ROC_Sphericity_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_16->SetFillColor(0);
   ROC_Sphericity_16->SetBorderMode(0);
   ROC_Sphericity_16->SetBorderSize(2);
   ROC_Sphericity_16->SetGridx();
   ROC_Sphericity_16->SetGridy();
   ROC_Sphericity_16->SetLeftMargin(0.15709);
   ROC_Sphericity_16->SetRightMargin(0.1234783);
   ROC_Sphericity_16->SetBottomMargin(0.12);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   ROC_Sphericity_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx254[51] = {
   0,
   0,
   7.151525e-08,
   7.85749e-07,
   3.676728e-06,
   1.200592e-05,
   3.485634e-05,
   7.409803e-05,
   0.0002033769,
   0.0005097651,
   0.0009789472,
   0.00176651,
   0.003055841,
   0.004681676,
   0.007139055,
   0.01015203,
   0.01515001,
   0.02088368,
   0.02628475,
   0.0329735,
   0.04159297,
   0.05097338,
   0.06079292,
   0.07257391,
   0.08565705,
   0.1001531,
   0.116899,
   0.1328287,
   0.1503336,
   0.1688104,
   0.1928886,
   0.217586,
   0.2406361,
   0.2652514,
   0.2919155,
   0.3230785,
   0.3573473,
   0.3906145,
   0.4283857,
   0.4679229,
   0.5114117,
   0.5543489,
   0.604241,
   0.6637037,
   0.720348,
   0.7813795,
   0.8431482,
   0.90259,
   0.9537699,
   0.9891171,
   1};
   Double_t Graph_fy254[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0005340756,
   0.0005340756,
   0.0006029396,
   0.0009397167,
   0.004690125,
   0.006725325,
   0.01381259,
   0.01941257,
   0.02753095,
   0.04056316,
   0.05246478,
   0.06543114,
   0.0822973,
   0.0962888,
   0.1162325,
   0.1370636,
   0.159595,
   0.1790438,
   0.2069408,
   0.2302757,
   0.2493302,
   0.2731617,
   0.3082962,
   0.3355734,
   0.3675946,
   0.3996069,
   0.4303913,
   0.4662008,
   0.5017726,
   0.5379655,
   0.5764505,
   0.6191161,
   0.6595028,
   0.6981909,
   0.7392116,
   0.7877319,
   0.8314158,
   0.8740903,
   0.9099302,
   0.9438388,
   0.9694122,
   0.9888956,
   0.9988243,
   1};
   TGraph *graph = new TGraph(51,Graph_fx254,Graph_fy254);
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
   
   TH1F *Graph_Graph254 = new TH1F("Graph_Graph254","Tagging Only",100,0,1.1);
   Graph_Graph254->SetMinimum(0);
   Graph_Graph254->SetMaximum(1.1);
   Graph_Graph254->SetDirectory(0);
   Graph_Graph254->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph254->SetLineColor(ci);
   Graph_Graph254->GetXaxis()->SetLabelFont(42);
   Graph_Graph254->GetXaxis()->SetTitleOffset(1);
   Graph_Graph254->GetXaxis()->SetTitleFont(42);
   Graph_Graph254->GetYaxis()->SetLabelFont(42);
   Graph_Graph254->GetYaxis()->SetTitleFont(42);
   Graph_Graph254->GetZaxis()->SetLabelFont(42);
   Graph_Graph254->GetZaxis()->SetTitleOffset(1);
   Graph_Graph254->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph254);
   
   TLatex *   tex = new TLatex(0.1628279,0.4865126,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.1829825,0.5137866,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(0.2041561,0.5503149,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(0.2302191,0.5806,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(0.2788786,0.6192745,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(0.3105484,0.6569605,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(0.3353068,0.706967,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(0.371388,0.7553817,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
      tex = new TLatex(0.4047811,0.7999235,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(263);
      tex = new TLatex(0.4412165,0.8479059,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(264);
      tex = new TLatex(0.4797647,0.8826685,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(265);
      tex = new TLatex(0.5304815,0.8676965,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(266);
      tex = new TLatex(0.588593,0.8946954,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(267);
      tex = new TLatex(0.6462962,0.9257108,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(268);
      tex = new TLatex(0.7163355,0.9577826,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(269);
      tex = new TLatex(0.7854205,0.9959007,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(270);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx271[51] = {
   0,
   0,
   1.32194e-07,
   6.241717e-07,
   2.383597e-06,
   5.865066e-06,
   1.524192e-05,
   3.775936e-05,
   6.953668e-05,
   0.0008634837,
   0.0009596766,
   0.001185928,
   0.001831147,
   0.00499119,
   0.005945952,
   0.008392546,
   0.0118437,
   0.01517744,
   0.01723178,
   0.02468043,
   0.02839521,
   0.03448347,
   0.04400381,
   0.0523949,
   0.05779688,
   0.07132491,
   0.07799878,
   0.09515439,
   0.1075244,
   0.1203799,
   0.1452826,
   0.1628279,
   0.1829825,
   0.2041561,
   0.2302191,
   0.2788786,
   0.3105484,
   0.3353068,
   0.371388,
   0.4047811,
   0.4412165,
   0.4797647,
   0.5304815,
   0.588593,
   0.6462962,
   0.7163355,
   0.7854205,
   0.8768701,
   0.9421079,
   0.9880313,
   1};
   Double_t Graph_fy271[51] = {
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
   0.005042928,
   0.006545356,
   0.0160584,
   0.02191067,
   0.0291773,
   0.04456602,
   0.05651362,
   0.07473957,
   0.09957695,
   0.1173516,
   0.1404974,
   0.1606558,
   0.1793161,
   0.1954128,
   0.218189,
   0.2526684,
   0.2703767,
   0.2852036,
   0.3148025,
   0.3477632,
   0.3865126,
   0.4137866,
   0.4503149,
   0.4806,
   0.5192745,
   0.5569605,
   0.606967,
   0.6553817,
   0.6999235,
   0.7479059,
   0.7826685,
   0.8276965,
   0.8546954,
   0.8857108,
   0.9177826,
   0.9559007,
   0.980743,
   0.9960952,
   0.9997466,
   1};
   graph = new TGraph(51,Graph_fx271,Graph_fy271);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph271 = new TH1F("Graph_Graph271","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph271->SetMinimum(0);
   Graph_Graph271->SetMaximum(1.1);
   Graph_Graph271->SetDirectory(0);
   Graph_Graph271->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph271->SetLineColor(ci);
   Graph_Graph271->GetXaxis()->SetLabelFont(42);
   Graph_Graph271->GetXaxis()->SetTitleOffset(1);
   Graph_Graph271->GetXaxis()->SetTitleFont(42);
   Graph_Graph271->GetYaxis()->SetLabelFont(42);
   Graph_Graph271->GetYaxis()->SetTitleFont(42);
   Graph_Graph271->GetZaxis()->SetLabelFont(42);
   Graph_Graph271->GetZaxis()->SetTitleOffset(1);
   Graph_Graph271->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph271);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx272[51] = {
   0,
   0,
   7.019833e-08,
   7.712798e-07,
   3.630744e-06,
   1.189779e-05,
   3.465646e-05,
   7.38857e-05,
   0.0002019196,
   0.0005065746,
   0.0009719262,
   0.001756859,
   0.003037098,
   0.004657352,
   0.007093227,
   0.01009916,
   0.01511359,
   0.02081898,
   0.02624594,
   0.03306139,
   0.04166085,
   0.05112907,
   0.06091903,
   0.07270338,
   0.08570554,
   0.1001962,
   0.1169346,
   0.1329524,
   0.150454,
   0.1688465,
   0.192757,
   0.2173048,
   0.2402206,
   0.264886,
   0.2914451,
   0.3226105,
   0.3568807,
   0.3899119,
   0.4275995,
   0.4671599,
   0.5108224,
   0.5537827,
   0.603706,
   0.6631448,
   0.7200772,
   0.7813389,
   0.843059,
   0.9025204,
   0.9537808,
   0.9891067,
   1};
   Double_t Graph_fy272[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.000524302,
   0.000524302,
   0.0005919058,
   0.0009923712,
   0.004674146,
   0.006672102,
   0.01362967,
   0.01919676,
   0.02716657,
   0.04055561,
   0.05223943,
   0.06517549,
   0.0818727,
   0.09672224,
   0.1164082,
   0.1369985,
   0.1597099,
   0.1788733,
   0.2071201,
   0.2300279,
   0.2494784,
   0.273058,
   0.3077662,
   0.3352653,
   0.3668878,
   0.3986157,
   0.4291184,
   0.464538,
   0.5013122,
   0.5371342,
   0.5760078,
   0.6185541,
   0.6583341,
   0.696658,
   0.7376453,
   0.7861482,
   0.8297501,
   0.8722234,
   0.9089805,
   0.9435043,
   0.9688134,
   0.9885681,
   0.9984505,
   1};
   graph = new TGraph(51,Graph_fx272,Graph_fy272);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph272 = new TH1F("Graph_Graph272","Tagging Prioritized",100,0,1.1);
   Graph_Graph272->SetMinimum(0);
   Graph_Graph272->SetMaximum(1.1);
   Graph_Graph272->SetDirectory(0);
   Graph_Graph272->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph272->SetLineColor(ci);
   Graph_Graph272->GetXaxis()->SetLabelFont(42);
   Graph_Graph272->GetXaxis()->SetTitleOffset(1);
   Graph_Graph272->GetXaxis()->SetTitleFont(42);
   Graph_Graph272->GetYaxis()->SetLabelFont(42);
   Graph_Graph272->GetYaxis()->SetTitleFont(42);
   Graph_Graph272->GetZaxis()->SetLabelFont(42);
   Graph_Graph272->GetZaxis()->SetTitleOffset(1);
   Graph_Graph272->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph272);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.05, 1.05);
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
   ROC_Sphericity_16->Modified();
   ROC_Sphericity_16->cd();
   ROC_Sphericity_16->SetSelected(ROC_Sphericity_16);
}
