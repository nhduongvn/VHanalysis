#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_18()
{
//=========Macro generated from canvas: ROC_Sphericity_18/ROC_Sphericity_18
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_Sphericity_18 = new TCanvas("ROC_Sphericity_18", "ROC_Sphericity_18",0,0,600,600);
   ROC_Sphericity_18->SetHighLightColor(2);
   ROC_Sphericity_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Sphericity_18->SetFillColor(0);
   ROC_Sphericity_18->SetBorderMode(0);
   ROC_Sphericity_18->SetBorderSize(2);
   ROC_Sphericity_18->SetGridx();
   ROC_Sphericity_18->SetGridy();
   ROC_Sphericity_18->SetLeftMargin(0.15709);
   ROC_Sphericity_18->SetRightMargin(0.1234783);
   ROC_Sphericity_18->SetBottomMargin(0.12);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   ROC_Sphericity_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2172[50] = {
   0,
   0.01133827,
   0.04635427,
   0.09621403,
   0.1549718,
   0.2171269,
   0.2763254,
   0.3333176,
   0.3911092,
   0.44423,
   0.4923873,
   0.538569,
   0.5783083,
   0.6165156,
   0.6508113,
   0.6829069,
   0.7145843,
   0.7445916,
   0.7674068,
   0.7930212,
   0.8136216,
   0.834433,
   0.8529798,
   0.8700568,
   0.8840882,
   0.8987617,
   0.912112,
   0.9250278,
   0.9382695,
   0.9485859,
   0.9580521,
   0.9638048,
   0.9715971,
   0.9779477,
   0.9829219,
   0.9882607,
   0.9917838,
   0.9938007,
   0.9965407,
   0.9978187,
   0.998774,
   0.9993877,
   0.9995703,
   0.9999177,
   0.9999567,
   0.999967,
   0.9999984,
   0.9999996,
   0.9999999,
   1};
   Double_t Graph_fy2172[50] = {
   0,
   0.003093692,
   0.01581037,
   0.0369555,
   0.06303689,
   0.09981194,
   0.1428612,
   0.1849927,
   0.2269676,
   0.2672591,
   0.3127323,
   0.3561896,
   0.3910782,
   0.4282847,
   0.4627431,
   0.5005787,
   0.5405108,
   0.5750965,
   0.607688,
   0.6392466,
   0.6675908,
   0.698539,
   0.7281879,
   0.7525496,
   0.7785276,
   0.8055491,
   0.8296687,
   0.8527852,
   0.8729796,
   0.8921311,
   0.9090268,
   0.9226199,
   0.9377545,
   0.950918,
   0.9639363,
   0.9733992,
   0.9789101,
   0.9853646,
   0.9910128,
   0.9941,
   0.9969585,
   0.9983346,
   0.9990412,
   0.9996882,
   1,
   1,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(50,Graph_fx2172,Graph_fy2172);
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
   
   TH1F *Graph_Graph2172 = new TH1F("Graph_Graph2172","Tagging Only",100,0,1.1);
   Graph_Graph2172->SetMinimum(0);
   Graph_Graph2172->SetMaximum(1.1);
   Graph_Graph2172->SetDirectory(0);
   Graph_Graph2172->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2172->SetLineColor(ci);
   Graph_Graph2172->GetXaxis()->SetLabelFont(42);
   Graph_Graph2172->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2172->GetXaxis()->SetTitleFont(42);
   Graph_Graph2172->GetYaxis()->SetLabelFont(42);
   Graph_Graph2172->GetYaxis()->SetTitleFont(42);
   Graph_Graph2172->GetZaxis()->SetLabelFont(42);
   Graph_Graph2172->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2172->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2172);
   
   TLatex *   tex = new TLatex(0.09621403,0.0969555,"0.07");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2173);
      tex = new TLatex(0.1549718,0.1230369,"0.09");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2174);
      tex = new TLatex(0.2171269,0.1598119,"0.11");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2175);
      tex = new TLatex(0.2763254,0.2028612,"0.13");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2176);
      tex = new TLatex(0.3333176,0.2449927,"0.15");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2177);
      tex = new TLatex(0.3911092,0.2869676,"0.17");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2178);
      tex = new TLatex(0.44423,0.3272591,"0.19");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2179);
      tex = new TLatex(0.4923873,0.3727323,"0.21");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2180);
      tex = new TLatex(0.538569,0.4161896,"0.23");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2181);
      tex = new TLatex(0.5783083,0.4510782,"0.25");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2182);
      tex = new TLatex(0.6165156,0.4882847,"0.27");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2183);
      tex = new TLatex(0.6508113,0.5227431,"0.29");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2184);
      tex = new TLatex(0.6829069,0.5605787,"0.31");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2185);
      tex = new TLatex(0.7145843,0.6005108,"0.33");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2186);
      tex = new TLatex(0.7445916,0.6350965,"0.35");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2187);
      tex = new TLatex(0.7674068,0.667688,"0.37");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2188);
      tex = new TLatex(0.7930212,0.6992466,"0.39");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2189);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2190[50] = {
   0,
   0.01167492,
   0.05514445,
   0.1140369,
   0.1871019,
   0.2560501,
   0.3270483,
   0.3787742,
   0.4276244,
   0.4894085,
   0.5334181,
   0.5779214,
   0.6089485,
   0.6488197,
   0.6884922,
   0.7239243,
   0.7527413,
   0.7834827,
   0.8056317,
   0.8248058,
   0.8401428,
   0.8550089,
   0.8705012,
   0.889271,
   0.9027826,
   0.911209,
   0.9196576,
   0.9292125,
   0.9408959,
   0.9508885,
   0.9646848,
   0.9718711,
   0.9834661,
   0.9892848,
   0.9914222,
   0.9931722,
   0.9949201,
   0.9960719,
   0.9985776,
   0.9990702,
   0.9994687,
   0.9995679,
   0.9996553,
   0.9996657,
   0.9997739,
   0.9997767,
   0.9999993,
   0.9999998,
   1,
   1};
   Double_t Graph_fy2190[50] = {
   0,
   0,
   0.006599558,
   0.02121575,
   0.04215956,
   0.07258789,
   0.1131646,
   0.1593557,
   0.1960045,
   0.2313326,
   0.2702844,
   0.306421,
   0.3419497,
   0.3893721,
   0.4250044,
   0.4608061,
   0.5079991,
   0.5435038,
   0.5759625,
   0.6108628,
   0.6396185,
   0.6736788,
   0.7063658,
   0.736031,
   0.7686729,
   0.8011948,
   0.8224749,
   0.8421226,
   0.8619365,
   0.8858301,
   0.9040101,
   0.9211985,
   0.9351076,
   0.9476762,
   0.9634135,
   0.9717844,
   0.9770643,
   0.9871939,
   0.9929135,
   0.9964752,
   0.9989934,
   0.9990883,
   0.99986,
   0.9999383,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2190,Graph_fy2190);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2190 = new TH1F("Graph_Graph2190","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2190->SetMinimum(0);
   Graph_Graph2190->SetMaximum(1.1);
   Graph_Graph2190->SetDirectory(0);
   Graph_Graph2190->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2190->SetLineColor(ci);
   Graph_Graph2190->GetXaxis()->SetLabelFont(42);
   Graph_Graph2190->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2190->GetXaxis()->SetTitleFont(42);
   Graph_Graph2190->GetYaxis()->SetLabelFont(42);
   Graph_Graph2190->GetYaxis()->SetTitleFont(42);
   Graph_Graph2190->GetZaxis()->SetLabelFont(42);
   Graph_Graph2190->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2190->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2190);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2191[50] = {
   0,
   0.01136566,
   0.04633598,
   0.09601859,
   0.154396,
   0.2165657,
   0.2756875,
   0.3325922,
   0.3906276,
   0.4438457,
   0.4923933,
   0.5380557,
   0.5787304,
   0.6174348,
   0.6513959,
   0.6832029,
   0.7148597,
   0.745468,
   0.768339,
   0.7939419,
   0.8144004,
   0.8349777,
   0.8534296,
   0.8703623,
   0.8843279,
   0.8991884,
   0.9124526,
   0.925412,
   0.9385358,
   0.948926,
   0.9583329,
   0.9641044,
   0.9718228,
   0.9781475,
   0.9830748,
   0.9884179,
   0.9919217,
   0.993921,
   0.9966069,
   0.9978607,
   0.9987965,
   0.9993976,
   0.9995777,
   0.999918,
   0.9999568,
   0.9999675,
   0.9999984,
   0.9999996,
   0.9999999,
   1};
   Double_t Graph_fy2191[50] = {
   0,
   0.003531034,
   0.01721412,
   0.03970269,
   0.06729566,
   0.1052529,
   0.1474506,
   0.1897842,
   0.2313459,
   0.2710302,
   0.3160928,
   0.3587567,
   0.3945319,
   0.4307303,
   0.465727,
   0.5045801,
   0.5442709,
   0.5797243,
   0.6125072,
   0.6437437,
   0.6726249,
   0.7028252,
   0.7311559,
   0.7560046,
   0.7806775,
   0.80751,
   0.8314225,
   0.8542692,
   0.8749111,
   0.8935023,
   0.9102485,
   0.9238701,
   0.9389133,
   0.9522125,
   0.9644383,
   0.9737432,
   0.9792648,
   0.9860464,
   0.9916601,
   0.9947061,
   0.9972614,
   0.9984812,
   0.9991207,
   0.9997075,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(50,Graph_fx2191,Graph_fy2191);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2191 = new TH1F("Graph_Graph2191","Tagging Prioritized",100,0,1.1);
   Graph_Graph2191->SetMinimum(0);
   Graph_Graph2191->SetMaximum(1.1);
   Graph_Graph2191->SetDirectory(0);
   Graph_Graph2191->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2191->SetLineColor(ci);
   Graph_Graph2191->GetXaxis()->SetLabelFont(42);
   Graph_Graph2191->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2191->GetXaxis()->SetTitleFont(42);
   Graph_Graph2191->GetYaxis()->SetLabelFont(42);
   Graph_Graph2191->GetYaxis()->SetTitleFont(42);
   Graph_Graph2191->GetZaxis()->SetLabelFont(42);
   Graph_Graph2191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2191->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2191);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Sphericity_18->Modified();
   ROC_Sphericity_18->cd();
   ROC_Sphericity_18->SetSelected(ROC_Sphericity_18);
}
