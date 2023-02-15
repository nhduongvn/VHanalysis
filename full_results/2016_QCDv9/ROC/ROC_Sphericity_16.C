#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_16()
{
//=========Macro generated from canvas: ROC_Sphericity_16/ROC_Sphericity_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx240[51] = {
   0,
   0,
   5.219575e-08,
   4.199706e-07,
   1.829542e-06,
   5.816176e-06,
   2.692311e-05,
   0.0001010624,
   0.0002647694,
   0.0005053762,
   0.001078839,
   0.001658864,
   0.002911084,
   0.005052164,
   0.008979719,
   0.01234929,
   0.01686407,
   0.02202358,
   0.02817628,
   0.03581029,
   0.04262428,
   0.05058928,
   0.06050974,
   0.07308112,
   0.08624681,
   0.1001876,
   0.1145199,
   0.1288887,
   0.1453092,
   0.1658312,
   0.184733,
   0.206716,
   0.2346951,
   0.255963,
   0.2827382,
   0.3118812,
   0.3389866,
   0.3736147,
   0.4130664,
   0.4503937,
   0.4955291,
   0.5416468,
   0.5892727,
   0.6431487,
   0.7006261,
   0.7635565,
   0.8245882,
   0.8865545,
   0.9432783,
   0.9860911,
   1};
   Double_t Graph_fy240[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   2.983853e-05,
   0.0004942617,
   0.0009037591,
   0.002450695,
   0.00322557,
   0.006040806,
   0.008494004,
   0.01364674,
   0.01936809,
   0.0258604,
   0.03694406,
   0.04919856,
   0.06176185,
   0.07824825,
   0.09395063,
   0.1155915,
   0.1368735,
   0.1593915,
   0.1797421,
   0.2040364,
   0.2272021,
   0.2491372,
   0.2726135,
   0.3026698,
   0.3309413,
   0.3623487,
   0.3914614,
   0.4279884,
   0.4616471,
   0.4968928,
   0.5336804,
   0.5728443,
   0.6116187,
   0.6513553,
   0.6893045,
   0.7323901,
   0.7726636,
   0.8170001,
   0.862007,
   0.9005058,
   0.9335601,
   0.9638851,
   0.9852628,
   0.9964765,
   1};
   TGraph *graph = new TGraph(51,Graph_fx240,Graph_fy240);
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
   
   TH1F *Graph_Graph240 = new TH1F("Graph_Graph240","Tagging Only",100,0,1.1);
   Graph_Graph240->SetMinimum(0);
   Graph_Graph240->SetMaximum(1.1);
   Graph_Graph240->SetDirectory(0);
   Graph_Graph240->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph240->SetLineColor(ci);
   Graph_Graph240->GetXaxis()->SetLabelFont(42);
   Graph_Graph240->GetXaxis()->SetTitleOffset(1);
   Graph_Graph240->GetXaxis()->SetTitleFont(42);
   Graph_Graph240->GetYaxis()->SetLabelFont(42);
   Graph_Graph240->GetYaxis()->SetTitleFont(42);
   Graph_Graph240->GetZaxis()->SetLabelFont(42);
   Graph_Graph240->GetZaxis()->SetTitleOffset(1);
   Graph_Graph240->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph240);
   
   TLatex *   tex = new TLatex(0.1566694,0.4878861,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(241);
      tex = new TLatex(0.1698258,0.5157775,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(242);
      tex = new TLatex(0.1858305,0.559419,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(243);
      tex = new TLatex(0.2065407,0.5945309,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(244);
      tex = new TLatex(0.2352702,0.6266335,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(245);
      tex = new TLatex(0.2572632,0.6699914,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(246);
      tex = new TLatex(0.2950791,0.7124966,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(247);
      tex = new TLatex(0.3445027,0.7528806,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(248);
      tex = new TLatex(0.3810338,0.7898632,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(249);
      tex = new TLatex(0.4298191,0.8287973,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(250);
      tex = new TLatex(0.4792876,0.8763828,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(251);
      tex = new TLatex(0.5206815,0.8608158,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(252);
      tex = new TLatex(0.5782116,0.894787,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(253);
      tex = new TLatex(0.6369597,0.9322391,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(254);
      tex = new TLatex(0.7039596,0.9651811,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.7705947,0.9916231,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx257[51] = {
   0,
   0,
   4.139896e-08,
   2.117204e-07,
   8.888719e-07,
   2.494944e-06,
   6.370931e-06,
   1.497291e-05,
   2.893361e-05,
   0.0002205735,
   0.0007223331,
   0.0009623077,
   0.002297172,
   0.003590052,
   0.01086085,
   0.0124752,
   0.01424999,
   0.01852772,
   0.02090812,
   0.0267556,
   0.0313742,
   0.03669736,
   0.042459,
   0.04967699,
   0.05552167,
   0.0638597,
   0.07359818,
   0.09092715,
   0.1030014,
   0.1205553,
   0.1363992,
   0.1566694,
   0.1698258,
   0.1858305,
   0.2065407,
   0.2352702,
   0.2572632,
   0.2950791,
   0.3445027,
   0.3810338,
   0.4298191,
   0.4792876,
   0.5206815,
   0.5782116,
   0.6369597,
   0.7039596,
   0.7705947,
   0.8535389,
   0.9276551,
   0.9854572,
   1};
   Double_t Graph_fy257[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0009997273,
   0.002043223,
   0.00272644,
   0.006125233,
   0.007324273,
   0.01386244,
   0.01730805,
   0.02513122,
   0.03761036,
   0.05479936,
   0.0680093,
   0.08543094,
   0.1041543,
   0.127652,
   0.1512039,
   0.174451,
   0.1906759,
   0.210714,
   0.2387368,
   0.2641814,
   0.2862309,
   0.31881,
   0.3496123,
   0.3878861,
   0.4157775,
   0.459419,
   0.4945309,
   0.5266335,
   0.5699914,
   0.6124966,
   0.6528806,
   0.6898632,
   0.7287973,
   0.7763828,
   0.8208158,
   0.854787,
   0.8922391,
   0.9251811,
   0.9516231,
   0.9784083,
   0.9935885,
   0.9994078,
   1};
   graph = new TGraph(51,Graph_fx257,Graph_fy257);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph257 = new TH1F("Graph_Graph257","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph257->SetMinimum(0);
   Graph_Graph257->SetMaximum(1.1);
   Graph_Graph257->SetDirectory(0);
   Graph_Graph257->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph257->SetLineColor(ci);
   Graph_Graph257->GetXaxis()->SetLabelFont(42);
   Graph_Graph257->GetXaxis()->SetTitleOffset(1);
   Graph_Graph257->GetXaxis()->SetTitleFont(42);
   Graph_Graph257->GetYaxis()->SetLabelFont(42);
   Graph_Graph257->GetYaxis()->SetTitleFont(42);
   Graph_Graph257->GetZaxis()->SetLabelFont(42);
   Graph_Graph257->GetZaxis()->SetTitleOffset(1);
   Graph_Graph257->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph257);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx258[51] = {
   0,
   0,
   5.362138e-08,
   4.202424e-07,
   1.832092e-06,
   6.11796e-06,
   2.700774e-05,
   0.0001000998,
   0.0002612906,
   0.0004987702,
   0.001062698,
   0.001635978,
   0.002929155,
   0.005051052,
   0.008963574,
   0.01235924,
   0.01686606,
   0.02205574,
   0.0281564,
   0.03592758,
   0.04279014,
   0.05074739,
   0.06058712,
   0.07312389,
   0.08613497,
   0.09998931,
   0.1142346,
   0.1285517,
   0.1449525,
   0.1660803,
   0.1849229,
   0.2069377,
   0.2345102,
   0.2559006,
   0.2826927,
   0.3117791,
   0.3387606,
   0.3731594,
   0.4123817,
   0.4497457,
   0.4955013,
   0.5414749,
   0.5889944,
   0.6425267,
   0.6998017,
   0.7625616,
   0.8238888,
   0.8859361,
   0.9433446,
   0.9859964,
   1};
   Double_t Graph_fy258[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   2.909058e-05,
   0.0004818722,
   0.0008811047,
   0.002389264,
   0.003171538,
   0.005916205,
   0.008504712,
   0.01352828,
   0.01913294,
   0.02551166,
   0.03680059,
   0.04893832,
   0.0613233,
   0.07811042,
   0.093847,
   0.1153169,
   0.1365928,
   0.1592834,
   0.1796332,
   0.2043089,
   0.2277406,
   0.2494397,
   0.2724498,
   0.3024278,
   0.3306047,
   0.3620432,
   0.3913637,
   0.4272276,
   0.4606164,
   0.4963185,
   0.5327727,
   0.5723524,
   0.6105744,
   0.6504689,
   0.6885926,
   0.7315046,
   0.7711633,
   0.8157038,
   0.8600732,
   0.8992175,
   0.9328354,
   0.9629964,
   0.984606,
   0.9960958,
   1};
   graph = new TGraph(51,Graph_fx258,Graph_fy258);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph258 = new TH1F("Graph_Graph258","Tagging Prioritized",100,0,1.1);
   Graph_Graph258->SetMinimum(0);
   Graph_Graph258->SetMaximum(1.1);
   Graph_Graph258->SetDirectory(0);
   Graph_Graph258->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph258->SetLineColor(ci);
   Graph_Graph258->GetXaxis()->SetLabelFont(42);
   Graph_Graph258->GetXaxis()->SetTitleOffset(1);
   Graph_Graph258->GetXaxis()->SetTitleFont(42);
   Graph_Graph258->GetYaxis()->SetLabelFont(42);
   Graph_Graph258->GetYaxis()->SetTitleFont(42);
   Graph_Graph258->GetZaxis()->SetLabelFont(42);
   Graph_Graph258->GetZaxis()->SetTitleOffset(1);
   Graph_Graph258->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph258);
   
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
