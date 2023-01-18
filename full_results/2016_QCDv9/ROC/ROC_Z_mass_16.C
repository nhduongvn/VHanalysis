#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_mass_16()
{
//=========Macro generated from canvas: ROC_Z_mass_16/ROC_Z_mass_16
//=========  (Tue Jan 17 16:04:06 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_mass_16 = new TCanvas("ROC_Z_mass_16", "ROC_Z_mass_16",0,0,600,600);
   ROC_Z_mass_16->SetHighLightColor(2);
   ROC_Z_mass_16->Range(0,0,1,1);
   ROC_Z_mass_16->SetFillColor(0);
   ROC_Z_mass_16->SetBorderMode(0);
   ROC_Z_mass_16->SetBorderSize(2);
   ROC_Z_mass_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle("mg");
   
   Double_t Graph_fx1[40] = {
   0,
   0,
   0.0006167755,
   0.03255077,
   0.09914077,
   0.1685281,
   0.237045,
   0.3051235,
   0.374375,
   0.4433706,
   0.5066458,
   0.5682637,
   0.6208925,
   0.6659717,
   0.7119914,
   0.7480337,
   0.7809479,
   0.8080088,
   0.8319711,
   0.851864,
   0.8699382,
   0.8857516,
   0.8994758,
   0.9119283,
   0.9230284,
   0.932154,
   0.939922,
   0.9479546,
   0.9553564,
   0.9626566,
   0.9679364,
   0.9730922,
   0.9774677,
   0.9814653,
   0.9857741,
   0.9891799,
   0.9916403,
   0.9938391,
   0.9966261,
   0.9982094};
   Double_t Graph_fy1[40] = {
   0,
   0,
   2.407217e-05,
   0.005263283,
   0.01846091,
   0.03713702,
   0.06869907,
   0.1413535,
   0.2760922,
   0.4554997,
   0.6033988,
   0.6759472,
   0.7210706,
   0.7584673,
   0.7941,
   0.8215355,
   0.8408282,
   0.8587568,
   0.8764616,
   0.8925717,
   0.9040005,
   0.9154964,
   0.9231747,
   0.9309097,
   0.9395666,
   0.9452626,
   0.9525826,
   0.9585063,
   0.964229,
   0.9685251,
   0.9715623,
   0.975147,
   0.9797573,
   0.9835788,
   0.9874642,
   0.9899447,
   0.9925603,
   0.9940536,
   0.9958072,
   0.9983734};
   TGraph *graph = new TGraph(40,Graph_fx1,Graph_fy1);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Tagging Only",100,0,1.09803);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.098211);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[40] = {
   0,
   0,
   1.50288e-06,
   0.04266553,
   0.1500754,
   0.2594562,
   0.3672963,
   0.4875592,
   0.5795627,
   0.648731,
   0.7182424,
   0.7618967,
   0.8084609,
   0.8377429,
   0.8618252,
   0.8834611,
   0.9084293,
   0.9187435,
   0.9318548,
   0.9505052,
   0.9590688,
   0.9637521,
   0.9718384,
   0.9750327,
   0.9789989,
   0.9824085,
   0.9855075,
   0.9885332,
   0.9899762,
   0.991879,
   0.9930045,
   0.9947077,
   0.995794,
   0.9968769,
   0.9975488,
   0.9979921,
   0.9984351,
   0.9989034,
   0.9992261,
   0.9996927};
   Double_t Graph_fy2[40] = {
   0,
   0,
   0,
   0.00305422,
   0.0151296,
   0.03085024,
   0.0705125,
   0.1799078,
   0.3743951,
   0.6153233,
   0.7933694,
   0.8642145,
   0.8922865,
   0.9134594,
   0.9286431,
   0.9381037,
   0.9464737,
   0.9522541,
   0.9574796,
   0.9631645,
   0.968081,
   0.9711324,
   0.975232,
   0.978123,
   0.9795905,
   0.9824296,
   0.9835624,
   0.9841819,
   0.9866426,
   0.9897755,
   0.9902818,
   0.9906363,
   0.9925907,
   0.9931645,
   0.9948195,
   0.9956991,
   0.9957952,
   0.9961264,
   0.9979938,
   0.9999066};
   graph = new TGraph(40,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Mass-Matching Prioritized",100,0,1.099662);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(1.099897);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx3[40] = {
   0,
   0,
   0.0006338925,
   0.03211308,
   0.09823425,
   0.1668237,
   0.2350676,
   0.3024277,
   0.3719334,
   0.4412313,
   0.5046204,
   0.566344,
   0.6191083,
   0.6643711,
   0.7102599,
   0.7465949,
   0.7793316,
   0.8063961,
   0.8306525,
   0.8505296,
   0.8693863,
   0.8851311,
   0.8988262,
   0.9112489,
   0.9223229,
   0.9314414,
   0.9391933,
   0.9471635,
   0.9545712,
   0.9619172,
   0.9678636,
   0.9730488,
   0.9774643,
   0.9814999,
   0.9857601,
   0.9891597,
   0.9916269,
   0.9938309,
   0.9966227,
   0.9982095};
   Double_t Graph_fy3[40] = {
   0,
   0,
   2.007223e-05,
   0.005107721,
   0.01922885,
   0.03834916,
   0.07253514,
   0.1430501,
   0.2726314,
   0.4457559,
   0.5881843,
   0.6607645,
   0.7074136,
   0.7470663,
   0.7820042,
   0.8091877,
   0.8302026,
   0.8495465,
   0.8672397,
   0.8835331,
   0.8966234,
   0.9083478,
   0.9173616,
   0.9266028,
   0.9353913,
   0.9415796,
   0.9489712,
   0.9550328,
   0.9604542,
   0.9651719,
   0.968616,
   0.9725184,
   0.9775213,
   0.9814697,
   0.9852329,
   0.988179,
   0.9914885,
   0.9934803,
   0.9952072,
   0.9979336};
   graph = new TGraph(40,Graph_fx3,Graph_fy3);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Tagging Prioritized",100,0,1.09803);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(1.097727);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   multigraph->Add(graph,"");
   multigraph->Draw("LP");
   multigraph->GetXaxis()->SetLimits(-0.04998463, 1.049677);
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
   ROC_Z_mass_16->Modified();
   ROC_Z_mass_16->cd();
   ROC_Z_mass_16->SetSelected(ROC_Z_mass_16);
}
