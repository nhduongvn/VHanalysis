#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_17()
{
//=========Macro generated from canvas: ROC_Z_mass_17/ROC_Z_mass_17
//=========  (Tue Jan 17 16:04:07 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_17 = new TCanvas("ROC_Z_mass_17", "ROC_Z_mass_17",0,0,600,600);
   ROC_Z_mass_17->SetHighLightColor(2);
   ROC_Z_mass_17->Range(0,0,1,1);
   ROC_Z_mass_17->SetFillColor(0);
   ROC_Z_mass_17->SetBorderMode(0);
   ROC_Z_mass_17->SetBorderSize(2);
   ROC_Z_mass_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx4[40] = {
   0,
   0,
   0.0003570247,
   0.03047068,
   0.09895448,
   0.1697386,
   0.235533,
   0.3044369,
   0.3792505,
   0.4571417,
   0.5233346,
   0.583637,
   0.6381846,
   0.6854993,
   0.7266301,
   0.7599216,
   0.7903057,
   0.8152216,
   0.8380121,
   0.8584545,
   0.8783939,
   0.8918265,
   0.9053656,
   0.9177586,
   0.9277968,
   0.936549,
   0.9446087,
   0.9516088,
   0.9575695,
   0.9637144,
   0.9693807,
   0.9735565,
   0.9776531,
   0.9816734,
   0.9854642,
   0.9883372,
   0.9918526,
   0.9944227,
   0.9962649,
   0.9982713};
   Double_t Graph_fy4[40] = {
   0,
   0,
   2.232645e-05,
   0.003613537,
   0.01546844,
   0.03495982,
   0.07025925,
   0.1417436,
   0.2878087,
   0.4877156,
   0.6425523,
   0.7211216,
   0.7674175,
   0.8039222,
   0.8323755,
   0.8521151,
   0.8737198,
   0.8899076,
   0.9027446,
   0.9131859,
   0.9238025,
   0.9335348,
   0.9410473,
   0.9471666,
   0.952393,
   0.9584427,
   0.9651671,
   0.9702923,
   0.9734255,
   0.9771457,
   0.979283,
   0.982481,
   0.984888,
   0.9876194,
   0.9900677,
   0.9925581,
   0.9945206,
   0.9958787,
   0.9973074,
   0.9986785};
   TGraph *graph = new TGraph(40,Graph_fx4,Graph_fy4);
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
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Tagging Only",100,0,1.098098);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(1.098546);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetTitleOffset(1);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetTitleOffset(1);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx5[40] = {
   0,
   0,
   0.0003235377,
   0.04453045,
   0.1588375,
   0.2659199,
   0.3537653,
   0.4463374,
   0.5587769,
   0.6572539,
   0.726662,
   0.7898328,
   0.8263227,
   0.8599246,
   0.8939921,
   0.9189361,
   0.9359753,
   0.9494413,
   0.9577025,
   0.9654236,
   0.9705742,
   0.9753153,
   0.979314,
   0.9826141,
   0.9849119,
   0.9871327,
   0.989196,
   0.9911342,
   0.9929911,
   0.9943659,
   0.9952096,
   0.9961621,
   0.9967514,
   0.9974324,
   0.99821,
   0.9986763,
   0.9990332,
   0.999309,
   0.9995625,
   0.9998356};
   Double_t Graph_fy5[40] = {
   0,
   0,
   0,
   0.001120737,
   0.01093656,
   0.03579239,
   0.07868065,
   0.1889056,
   0.3937746,
   0.6485239,
   0.8208863,
   0.8872277,
   0.917024,
   0.9367859,
   0.9459649,
   0.9534344,
   0.9617382,
   0.9664294,
   0.9724058,
   0.9770394,
   0.980395,
   0.9833084,
   0.9868392,
   0.988878,
   0.9904685,
   0.9920343,
   0.9932567,
   0.99405,
   0.9950785,
   0.9954727,
   0.9963117,
   0.9965166,
   0.9967226,
   0.9967784,
   0.9981547,
   0.9990796,
   0.9990898,
   0.9997262,
   0.9998192,
   0.9999063};
   graph = new TGraph(40,Graph_fx5,Graph_fy5);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Mass-Matching Prioritized",100,0,1.099819);
   Graph_Graph5->SetMinimum(0);
   Graph_Graph5->SetMaximum(1.099897);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetTitleOffset(1);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetTitleOffset(1);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx6[40] = {
   0,
   0,
   0.0003547702,
   0.03005564,
   0.09789483,
   0.1687303,
   0.2342573,
   0.303754,
   0.3785897,
   0.4560055,
   0.5220641,
   0.5821375,
   0.636659,
   0.6846081,
   0.7256377,
   0.7593818,
   0.7897232,
   0.8145789,
   0.8373096,
   0.8574953,
   0.8783081,
   0.8919547,
   0.905611,
   0.9179691,
   0.9279853,
   0.9367549,
   0.9445855,
   0.9516638,
   0.9575933,
   0.96372,
   0.9693351,
   0.9735829,
   0.9776632,
   0.9816479,
   0.9854441,
   0.9883399,
   0.9918322,
   0.9943764,
   0.9962261,
   0.9982533};
   Double_t Graph_fy6[40] = {
   0,
   0,
   1.918517e-05,
   0.003806661,
   0.01675023,
   0.0369562,
   0.07410677,
   0.1458408,
   0.2885083,
   0.4804678,
   0.6301037,
   0.705694,
   0.7549926,
   0.7918844,
   0.8206303,
   0.8417887,
   0.8646489,
   0.8816433,
   0.8953094,
   0.906671,
   0.9174928,
   0.9285624,
   0.9359226,
   0.9425205,
   0.9484176,
   0.9544956,
   0.9614062,
   0.9668487,
   0.9702115,
   0.9740196,
   0.9764321,
   0.980852,
   0.9832649,
   0.9859201,
   0.98897,
   0.9915572,
   0.9937134,
   0.9953545,
   0.9971835,
   0.9986701};
   graph = new TGraph(40,Graph_fx6,Graph_fy6);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Tagging Prioritized",100,0,1.098079);
   Graph_Graph6->SetMinimum(0);
   Graph_Graph6->SetMaximum(1.098537);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetTitleOffset(1);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetTitleOffset(1);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04999178, 1.049827);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.2105263,0.3,0.4205263,NULL,"brNDC");
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
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Mass-Matching Prioritized","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph","Tagging Prioritized","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   ROC_Z_mass_17->Modified();
   ROC_Z_mass_17->cd();
   ROC_Z_mass_17->SetSelected(ROC_Z_mass_17);
}
