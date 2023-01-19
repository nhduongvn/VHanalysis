#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Sphericity_16()
{
//=========Macro generated from canvas: ROC_Sphericity_16/ROC_Sphericity_16
//=========  (Thu Jan 19 10:33:19 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx127[50] = {
   0,
   0.004090315,
   0.01589455,
   0.03612278,
   0.06516254,
   0.09683417,
   0.1349523,
   0.1733137,
   0.2140013,
   0.2562679,
   0.2933508,
   0.3341833,
   0.3728023,
   0.4110121,
   0.4466804,
   0.4885292,
   0.5258883,
   0.5624624,
   0.597172,
   0.6315734,
   0.6615432,
   0.6913379,
   0.7179963,
   0.7447108,
   0.7677869,
   0.791976,
   0.8151915,
   0.8380961,
   0.8587437,
   0.8790026,
   0.8966261,
   0.9168406,
   0.9331468,
   0.9463538,
   0.9564471,
   0.966724,
   0.9763393,
   0.9839183,
   0.9896346,
   0.9941651,
   0.9966169,
   0.9979302,
   0.9989144,
   0.999424,
   0.9998421,
   0.9999896,
   1,
   1,
   1,
   1};
   Double_t Graph_fy127[50] = {
   0,
   0.0119995,
   0.05043613,
   0.104747,
   0.167569,
   0.2304778,
   0.2948146,
   0.3520627,
   0.4119202,
   0.4692276,
   0.5180527,
   0.5616663,
   0.6066581,
   0.6459712,
   0.6768706,
   0.7063313,
   0.7331241,
   0.7586521,
   0.7804402,
   0.802445,
   0.8251882,
   0.8432545,
   0.8611688,
   0.8776902,
   0.8918575,
   0.9051532,
   0.9183146,
   0.9318431,
   0.9431992,
   0.9511294,
   0.9605293,
   0.96829,
   0.9758322,
   0.9813205,
   0.9855749,
   0.9905229,
   0.9935464,
   0.9954622,
   0.9966674,
   0.9974798,
   0.9979176,
   0.9991134,
   0.9997109,
   0.9998954,
   0.9999799,
   0.9999956,
   0.9999986,
   0.9999997,
   1,
   1};
   TGraph *graph = new TGraph(50,Graph_fx127,Graph_fy127);
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
   
   TH1F *Graph_Graph127 = new TH1F("Graph_Graph127","Tagging Only",100,0,1.1);
   Graph_Graph127->SetMinimum(0);
   Graph_Graph127->SetMaximum(1.1);
   Graph_Graph127->SetDirectory(0);
   Graph_Graph127->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph127->SetLineColor(ci);
   Graph_Graph127->GetXaxis()->SetLabelFont(42);
   Graph_Graph127->GetXaxis()->SetTitleOffset(1);
   Graph_Graph127->GetXaxis()->SetTitleFont(42);
   Graph_Graph127->GetYaxis()->SetLabelFont(42);
   Graph_Graph127->GetYaxis()->SetTitleFont(42);
   Graph_Graph127->GetZaxis()->SetLabelFont(42);
   Graph_Graph127->GetZaxis()->SetTitleOffset(1);
   Graph_Graph127->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph127);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx128[50] = {
   0,
   0.0008109187,
   0.006150671,
   0.01566893,
   0.03762315,
   0.0635468,
   0.09820501,
   0.1362532,
   0.1744822,
   0.2176307,
   0.2525147,
   0.2996162,
   0.330765,
   0.3715394,
   0.4162704,
   0.4510212,
   0.4847947,
   0.534351,
   0.5620293,
   0.5931676,
   0.6208674,
   0.646842,
   0.6754564,
   0.7042289,
   0.7311637,
   0.7674711,
   0.7906333,
   0.8122225,
   0.8333429,
   0.8576345,
   0.8751284,
   0.8971516,
   0.9158784,
   0.9304289,
   0.9467222,
   0.9598838,
   0.9704188,
   0.9809407,
   0.9832912,
   0.9906254,
   0.9933118,
   0.9961968,
   0.9980922,
   0.9991614,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy128[50] = {
   0,
   0.01184977,
   0.07357387,
   0.1378183,
   0.2093375,
   0.2801937,
   0.341642,
   0.3994518,
   0.4607277,
   0.5111896,
   0.568459,
   0.6188705,
   0.6775133,
   0.7070251,
   0.729279,
   0.7461883,
   0.7696779,
   0.7921191,
   0.8113918,
   0.8368155,
   0.8566138,
   0.8725783,
   0.8851289,
   0.8947676,
   0.909907,
   0.922114,
   0.9316496,
   0.9390572,
   0.9513257,
   0.9566204,
   0.9646825,
   0.9700624,
   0.9775933,
   0.9798049,
   0.9853963,
   0.9875,
   0.9926261,
   0.9941166,
   0.9953287,
   0.995937,
   0.9961125,
   0.9964348,
   0.9999787,
   0.999989,
   0.9999951,
   0.9999981,
   0.9999993,
   0.9999998,
   1,
   1};
   graph = new TGraph(50,Graph_fx128,Graph_fy128);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph128 = new TH1F("Graph_Graph128","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph128->SetMinimum(0);
   Graph_Graph128->SetMaximum(1.1);
   Graph_Graph128->SetDirectory(0);
   Graph_Graph128->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph128->SetLineColor(ci);
   Graph_Graph128->GetXaxis()->SetLabelFont(42);
   Graph_Graph128->GetXaxis()->SetTitleOffset(1);
   Graph_Graph128->GetXaxis()->SetTitleFont(42);
   Graph_Graph128->GetYaxis()->SetLabelFont(42);
   Graph_Graph128->GetYaxis()->SetTitleFont(42);
   Graph_Graph128->GetZaxis()->SetLabelFont(42);
   Graph_Graph128->GetZaxis()->SetTitleOffset(1);
   Graph_Graph128->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph128);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx129[50] = {
   0,
   0.004736256,
   0.0172221,
   0.03867208,
   0.06828613,
   0.1013504,
   0.1398322,
   0.1781337,
   0.2190268,
   0.2620947,
   0.300349,
   0.3409983,
   0.3813868,
   0.4199782,
   0.4560183,
   0.4977478,
   0.5346206,
   0.5728161,
   0.6074624,
   0.6405008,
   0.6703324,
   0.6997117,
   0.7263511,
   0.7513366,
   0.7741211,
   0.7982278,
   0.8214362,
   0.84416,
   0.8648847,
   0.8849277,
   0.9019829,
   0.9214221,
   0.9374047,
   0.9503851,
   0.959793,
   0.9693257,
   0.9782867,
   0.9853135,
   0.9905082,
   0.9948124,
   0.9971647,
   0.9982581,
   0.9990962,
   0.9995205,
   0.9998685,
   0.9999913,
   1,
   1,
   1,
   1};
   Double_t Graph_fy129[50] = {
   0,
   0.01207582,
   0.05047504,
   0.1056425,
   0.1684236,
   0.2314779,
   0.2955338,
   0.3526279,
   0.4127432,
   0.4699117,
   0.5190177,
   0.5625965,
   0.6072067,
   0.6461629,
   0.6777527,
   0.7069391,
   0.7335873,
   0.7590351,
   0.7808009,
   0.8026159,
   0.8256971,
   0.8436854,
   0.8615919,
   0.8780126,
   0.8920772,
   0.9053596,
   0.9186876,
   0.9321197,
   0.9434334,
   0.9512753,
   0.9605625,
   0.9683455,
   0.9759623,
   0.9814024,
   0.9856643,
   0.9905637,
   0.993572,
   0.9954951,
   0.9966963,
   0.9975037,
   0.9979346,
   0.9991019,
   0.9996858,
   0.9998971,
   0.9999799,
   0.9999953,
   0.9999986,
   0.9999997,
   1,
   1};
   graph = new TGraph(50,Graph_fx129,Graph_fy129);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph129 = new TH1F("Graph_Graph129","Tagging Prioritized",100,0,1.1);
   Graph_Graph129->SetMinimum(0);
   Graph_Graph129->SetMaximum(1.1);
   Graph_Graph129->SetDirectory(0);
   Graph_Graph129->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph129->SetLineColor(ci);
   Graph_Graph129->GetXaxis()->SetLabelFont(42);
   Graph_Graph129->GetXaxis()->SetTitleOffset(1);
   Graph_Graph129->GetXaxis()->SetTitleFont(42);
   Graph_Graph129->GetYaxis()->SetLabelFont(42);
   Graph_Graph129->GetYaxis()->SetTitleFont(42);
   Graph_Graph129->GetZaxis()->SetLabelFont(42);
   Graph_Graph129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph129->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph129);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Sphericity_16->Modified();
   ROC_Sphericity_16->cd();
   ROC_Sphericity_16->SetSelected(ROC_Sphericity_16);
}
