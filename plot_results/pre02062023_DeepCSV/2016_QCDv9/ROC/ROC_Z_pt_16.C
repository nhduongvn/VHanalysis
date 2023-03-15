#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_pt_16()
{
//=========Macro generated from canvas: ROC_Z_pt_16/ROC_Z_pt_16
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_pt_16 = new TCanvas("ROC_Z_pt_16", "ROC_Z_pt_16",0,0,600,600);
   ROC_Z_pt_16->SetHighLightColor(2);
   ROC_Z_pt_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_pt_16->SetFillColor(0);
   ROC_Z_pt_16->SetBorderMode(0);
   ROC_Z_pt_16->SetBorderSize(2);
   ROC_Z_pt_16->SetGridx();
   ROC_Z_pt_16->SetGridy();
   ROC_Z_pt_16->SetLeftMargin(0.15709);
   ROC_Z_pt_16->SetRightMargin(0.1234783);
   ROC_Z_pt_16->SetBottomMargin(0.12);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   ROC_Z_pt_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx213[41] = {
   0,
   7.877489e-08,
   1.560503e-07,
   2.990972e-07,
   4.561513e-07,
   6.006387e-07,
   8.582201e-07,
   1.190902e-06,
   1.563379e-06,
   2.100367e-06,
   2.787985e-06,
   3.667174e-06,
   5.034378e-06,
   6.857472e-06,
   9.100097e-06,
   1.193918e-05,
   1.595429e-05,
   2.118963e-05,
   2.832713e-05,
   3.756859e-05,
   5.08272e-05,
   6.837871e-05,
   9.365459e-05,
   0.0001287977,
   0.000177333,
   0.0002446782,
   0.0003444065,
   0.000488157,
   0.0006932189,
   0.001004184,
   0.001512485,
   0.002334745,
   0.00374864,
   0.006334712,
   0.01133128,
   0.02158982,
   0.04514252,
   0.108902,
   0.3065374,
   0.7335349,
   1};
   Double_t Graph_fy213[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   2.198139e-05,
   2.198139e-05,
   4.441311e-05,
   4.441311e-05,
   4.441311e-05,
   4.441311e-05,
   4.441311e-05,
   4.441311e-05,
   5.922896e-05,
   6.75592e-05,
   0.0001458438,
   0.000148185,
   0.0002374186,
   0.0002607932,
   0.0002827522,
   0.000302591,
   0.0004272627,
   0.0009577729,
   0.001336451,
   0.001588229,
   0.001859312,
   0.002622788,
   0.003582599,
   0.00495211,
   0.00642707,
   0.009131071,
   0.01464027,
   0.02648685,
   0.04673137,
   0.07807005,
   0.1397908,
   0.2622666,
   0.5014411,
   0.8285993,
   1};
   TGraph *graph = new TGraph(41,Graph_fx213,Graph_fy213);
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
   
   TH1F *Graph_Graph213 = new TH1F("Graph_Graph213","Tagging Only",100,0,1.1);
   Graph_Graph213->SetMinimum(0);
   Graph_Graph213->SetMaximum(1.1);
   Graph_Graph213->SetDirectory(0);
   Graph_Graph213->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph213->SetLineColor(ci);
   Graph_Graph213->GetXaxis()->SetLabelFont(42);
   Graph_Graph213->GetXaxis()->SetTitleOffset(1);
   Graph_Graph213->GetXaxis()->SetTitleFont(42);
   Graph_Graph213->GetYaxis()->SetLabelFont(42);
   Graph_Graph213->GetYaxis()->SetTitleFont(42);
   Graph_Graph213->GetZaxis()->SetLabelFont(42);
   Graph_Graph213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph213->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph213);
   
   TLatex *   tex = new TLatex(0.3250542,0.7031417,"75.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(214);
      tex = new TLatex(0.834875,0.9596283,"25.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(215);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx216[41] = {
   0,
   1.128181e-07,
   1.886631e-07,
   4.35205e-07,
   5.591434e-07,
   8.044211e-07,
   1.078583e-06,
   1.558149e-06,
   1.830433e-06,
   2.295244e-06,
   2.903121e-06,
   3.682292e-06,
   5.140831e-06,
   7.289512e-06,
   9.580754e-06,
   1.255882e-05,
   1.64441e-05,
   2.192771e-05,
   2.87328e-05,
   3.686418e-05,
   4.945668e-05,
   6.583006e-05,
   9.061309e-05,
   0.0001228862,
   0.000167232,
   0.0002361017,
   0.0003183504,
   0.0004427979,
   0.000630282,
   0.0009133568,
   0.001375511,
   0.002170269,
   0.003593774,
   0.006130548,
   0.01107739,
   0.02167534,
   0.04562753,
   0.1122317,
   0.3250542,
   0.834875,
   1};
   Double_t Graph_fy216[41] = {
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
   0,
   0,
   0,
   0,
   0,
   0.0001080152,
   0.0001080152,
   0.0003017573,
   0.0004073721,
   0.0004073721,
   0.0004073721,
   0.0006761784,
   0.0006761784,
   0.0007766951,
   0.0007766951,
   0.0009913379,
   0.001199457,
   0.001339997,
   0.002585978,
   0.002883502,
   0.005757442,
   0.01292825,
   0.02850622,
   0.04544784,
   0.07972886,
   0.1350725,
   0.2867422,
   0.6031417,
   0.9196283,
   1};
   graph = new TGraph(41,Graph_fx216,Graph_fy216);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph216 = new TH1F("Graph_Graph216","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph216->SetMinimum(0);
   Graph_Graph216->SetMaximum(1.1);
   Graph_Graph216->SetDirectory(0);
   Graph_Graph216->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph216->SetLineColor(ci);
   Graph_Graph216->GetXaxis()->SetLabelFont(42);
   Graph_Graph216->GetXaxis()->SetTitleOffset(1);
   Graph_Graph216->GetXaxis()->SetTitleFont(42);
   Graph_Graph216->GetYaxis()->SetLabelFont(42);
   Graph_Graph216->GetYaxis()->SetTitleFont(42);
   Graph_Graph216->GetZaxis()->SetLabelFont(42);
   Graph_Graph216->GetZaxis()->SetTitleOffset(1);
   Graph_Graph216->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph216);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx217[41] = {
   0,
   8.609234e-08,
   1.630419e-07,
   3.162061e-07,
   4.895923e-07,
   6.428985e-07,
   9.322943e-07,
   1.273624e-06,
   1.648329e-06,
   2.216491e-06,
   2.947658e-06,
   3.87729e-06,
   5.285204e-06,
   7.138728e-06,
   9.445621e-06,
   1.240545e-05,
   1.655706e-05,
   2.196841e-05,
   2.935845e-05,
   3.895537e-05,
   5.264205e-05,
   7.076153e-05,
   9.701821e-05,
   0.0001331194,
   0.0001829594,
   0.0002526103,
   0.0003551742,
   0.0005030492,
   0.0007136387,
   0.001031571,
   0.001549972,
   0.002390727,
   0.003826624,
   0.006465428,
   0.01151986,
   0.02190659,
   0.04563541,
   0.1094445,
   0.3075389,
   0.7330654,
   1};
   Double_t Graph_fy217[41] = {
   0,
   0,
   0,
   0,
   0,
   0,
   1.830079e-05,
   1.830079e-05,
   3.697652e-05,
   3.697652e-05,
   3.697652e-05,
   3.697652e-05,
   3.697652e-05,
   3.697652e-05,
   4.931158e-05,
   7.056314e-05,
   0.0001427987,
   0.0001628126,
   0.0002371048,
   0.0002565655,
   0.0002917162,
   0.0003436977,
   0.0005055248,
   0.001003893,
   0.00137031,
   0.001622845,
   0.001943911,
   0.002689087,
   0.003644498,
   0.005149981,
   0.006992313,
   0.0101754,
   0.01618861,
   0.02948333,
   0.04918099,
   0.08150257,
   0.1447544,
   0.2683768,
   0.5041184,
   0.8328132,
   1};
   graph = new TGraph(41,Graph_fx217,Graph_fy217);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph217 = new TH1F("Graph_Graph217","Tagging Prioritized",100,0,1.1);
   Graph_Graph217->SetMinimum(0);
   Graph_Graph217->SetMaximum(1.1);
   Graph_Graph217->SetDirectory(0);
   Graph_Graph217->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph217->SetLineColor(ci);
   Graph_Graph217->GetXaxis()->SetLabelFont(42);
   Graph_Graph217->GetXaxis()->SetTitleOffset(1);
   Graph_Graph217->GetXaxis()->SetTitleFont(42);
   Graph_Graph217->GetYaxis()->SetLabelFont(42);
   Graph_Graph217->GetYaxis()->SetTitleFont(42);
   Graph_Graph217->GetZaxis()->SetLabelFont(42);
   Graph_Graph217->GetZaxis()->SetTitleOffset(1);
   Graph_Graph217->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph217);
   
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
   ROC_Z_pt_16->Modified();
   ROC_Z_pt_16->cd();
   ROC_Z_pt_16->SetSelected(ROC_Z_pt_16);
}
