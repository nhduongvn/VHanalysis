#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_16/ROC_Z_dR_Bj1_16
//=========  (Tue Jan 17 16:04:08 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_16 = new TCanvas("ROC_Z_dR_Bj1_16", "ROC_Z_dR_Bj1_16",0,0,600,600);
   ROC_Z_dR_Bj1_16->SetHighLightColor(2);
   ROC_Z_dR_Bj1_16->Range(0,0,1,1);
   ROC_Z_dR_Bj1_16->SetFillColor(0);
   ROC_Z_dR_Bj1_16->SetBorderMode(0);
   ROC_Z_dR_Bj1_16->SetBorderSize(2);
   ROC_Z_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx118[30] = {
   0,
   0.02883814,
   0.17337,
   0.3219456,
   0.4357478,
   0.5280871,
   0.6104407,
   0.6685508,
   0.7171556,
   0.7603059,
   0.7984775,
   0.8285654,
   0.858365,
   0.8869686,
   0.9081265,
   0.9309598,
   0.9545181,
   0.9665854,
   0.9793801,
   0.985396,
   0.9904157,
   0.9940709,
   0.9964771,
   0.9979623,
   0.9987774,
   0.9991179,
   0.9993943,
   0.999655,
   0.9998449,
   0.9998931};
   Double_t Graph_fy118[30] = {
   0,
   0.03901426,
   0.180509,
   0.3423716,
   0.498334,
   0.6189234,
   0.7027576,
   0.7601413,
   0.8055001,
   0.8400943,
   0.8705871,
   0.894757,
   0.9159257,
   0.9344732,
   0.9505398,
   0.9649057,
   0.9787114,
   0.9855541,
   0.9911764,
   0.9936174,
   0.9956583,
   0.997439,
   0.9979392,
   0.9983593,
   0.9984794,
   0.9990196,
   0.9994198,
   0.9996198,
   0.9996398,
   0.9998399};
   TGraph *graph = new TGraph(30,Graph_fx118,Graph_fy118);
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
   
   TH1F *Graph_Graph118 = new TH1F("Graph_Graph118","Tagging Only",100,0,1.099882);
   Graph_Graph118->SetMinimum(0);
   Graph_Graph118->SetMaximum(1.099824);
   Graph_Graph118->SetDirectory(0);
   Graph_Graph118->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph118->SetLineColor(ci);
   Graph_Graph118->GetXaxis()->SetLabelFont(42);
   Graph_Graph118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph118->GetXaxis()->SetTitleFont(42);
   Graph_Graph118->GetYaxis()->SetLabelFont(42);
   Graph_Graph118->GetYaxis()->SetTitleFont(42);
   Graph_Graph118->GetZaxis()->SetLabelFont(42);
   Graph_Graph118->GetZaxis()->SetTitleOffset(1);
   Graph_Graph118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph118);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx119[30] = {
   0,
   0.0004562192,
   0.1370283,
   0.3321705,
   0.480402,
   0.5848351,
   0.6783451,
   0.7449996,
   0.7908391,
   0.8320816,
   0.8722943,
   0.9000606,
   0.9234753,
   0.9410431,
   0.9530769,
   0.9625168,
   0.9765059,
   0.9837585,
   0.9921912,
   0.9948357,
   0.9960255,
   0.9972216,
   0.9985483,
   0.9993604,
   0.9995738,
   0.9996555,
   0.9997256,
   0.9997364,
   0.9997373,
   0.9999996};
   Double_t Graph_fy119[30] = {
   0,
   0.0007271783,
   0.06353442,
   0.2560428,
   0.4916346,
   0.6949627,
   0.8026709,
   0.8678413,
   0.9069255,
   0.9301033,
   0.9481911,
   0.9615526,
   0.9677332,
   0.9787313,
   0.9841847,
   0.9880022,
   0.9910925,
   0.9970915,
   0.9988184,
   0.9989093,
   0.9990911,
   0.9998183,
   0.9998183,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx119,Graph_fy119);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph119 = new TH1F("Graph_Graph119","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph119->SetMinimum(0);
   Graph_Graph119->SetMaximum(1.1);
   Graph_Graph119->SetDirectory(0);
   Graph_Graph119->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph119->SetLineColor(ci);
   Graph_Graph119->GetXaxis()->SetLabelFont(42);
   Graph_Graph119->GetXaxis()->SetTitleOffset(1);
   Graph_Graph119->GetXaxis()->SetTitleFont(42);
   Graph_Graph119->GetYaxis()->SetLabelFont(42);
   Graph_Graph119->GetYaxis()->SetTitleFont(42);
   Graph_Graph119->GetZaxis()->SetLabelFont(42);
   Graph_Graph119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph119);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx120[30] = {
   0,
   0.0288582,
   0.1726396,
   0.3209093,
   0.4347413,
   0.5276209,
   0.6095419,
   0.6680915,
   0.7170216,
   0.7603457,
   0.7979695,
   0.827918,
   0.8573467,
   0.8857439,
   0.9068308,
   0.9305962,
   0.9543265,
   0.9663161,
   0.9788726,
   0.9852166,
   0.9905217,
   0.9940779,
   0.9964508,
   0.9979857,
   0.9987835,
   0.999118,
   0.9993877,
   0.999657,
   0.999842,
   0.999889};
   Double_t Graph_fy120[30] = {
   0,
   0.04072331,
   0.1820777,
   0.3453239,
   0.4963212,
   0.6142412,
   0.6977027,
   0.7561974,
   0.8021423,
   0.8370829,
   0.8670203,
   0.8914386,
   0.9127154,
   0.9321304,
   0.9496007,
   0.9642451,
   0.9786734,
   0.986087,
   0.9917387,
   0.9939162,
   0.9959109,
   0.997623,
   0.9980884,
   0.9986203,
   0.99872,
   0.9991689,
   0.9995013,
   0.9996842,
   0.9997008,
   0.999867};
   graph = new TGraph(30,Graph_fx120,Graph_fy120);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph120 = new TH1F("Graph_Graph120","Tagging Prioritized",100,0,1.099878);
   Graph_Graph120->SetMinimum(0);
   Graph_Graph120->SetMaximum(1.099854);
   Graph_Graph120->SetDirectory(0);
   Graph_Graph120->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph120->SetLineColor(ci);
   Graph_Graph120->GetXaxis()->SetLabelFont(42);
   Graph_Graph120->GetXaxis()->SetTitleOffset(1);
   Graph_Graph120->GetXaxis()->SetTitleFont(42);
   Graph_Graph120->GetYaxis()->SetLabelFont(42);
   Graph_Graph120->GetYaxis()->SetTitleFont(42);
   Graph_Graph120->GetZaxis()->SetLabelFont(42);
   Graph_Graph120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph120->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph120);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0,0.3157895,0.3,0.5257895,NULL,"brNDC");
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
   ROC_Z_dR_Bj1_16->Modified();
   ROC_Z_dR_Bj1_16->cd();
   ROC_Z_dR_Bj1_16->SetSelected(ROC_Z_dR_Bj1_16);
}
