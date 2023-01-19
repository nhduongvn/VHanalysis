#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_17()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_17/ROC_Z_dR_Bj1_17
//=========  (Thu Jan 19 10:33:19 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_17 = new TCanvas("ROC_Z_dR_Bj1_17", "ROC_Z_dR_Bj1_17",0,0,600,600);
   ROC_Z_dR_Bj1_17->SetHighLightColor(2);
   ROC_Z_dR_Bj1_17->Range(-0.2901882,-0.1615384,1.238796,1.184615);
   ROC_Z_dR_Bj1_17->SetFillColor(0);
   ROC_Z_dR_Bj1_17->SetBorderMode(0);
   ROC_Z_dR_Bj1_17->SetBorderSize(2);
   ROC_Z_dR_Bj1_17->SetGridx();
   ROC_Z_dR_Bj1_17->SetGridy();
   ROC_Z_dR_Bj1_17->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_17->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_17->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx121[30] = {
   0,
   0.03594349,
   0.1592461,
   0.3323152,
   0.4817444,
   0.6021065,
   0.6898472,
   0.7576788,
   0.8059069,
   0.8477653,
   0.8767313,
   0.9009739,
   0.9186583,
   0.937326,
   0.9539292,
   0.9659256,
   0.9783516,
   0.9868374,
   0.9910598,
   0.9943324,
   0.9967446,
   0.9979044,
   0.9990674,
   0.9992946,
   0.9995768,
   0.9997523,
   0.9998762,
   0.9998762,
   0.9998762,
   0.9998762};
   Double_t Graph_fy121[30] = {
   0,
   0.02632848,
   0.1635429,
   0.3025034,
   0.4189201,
   0.5081871,
   0.5849542,
   0.6486085,
   0.6995866,
   0.7474498,
   0.7861054,
   0.8234015,
   0.8518907,
   0.8799486,
   0.9050121,
   0.92809,
   0.9493957,
   0.9640755,
   0.9740061,
   0.9822837,
   0.9872545,
   0.9912496,
   0.9936126,
   0.9962796,
   0.9977031,
   0.9992974,
   0.9997449,
   0.9999037,
   0.9999289,
   0.9999654};
   TGraph *graph = new TGraph(30,Graph_fx121,Graph_fy121);
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
   
   TH1F *Graph_Graph121 = new TH1F("Graph_Graph121","Tagging Only",100,0,1.099864);
   Graph_Graph121->SetMinimum(0);
   Graph_Graph121->SetMaximum(1.099962);
   Graph_Graph121->SetDirectory(0);
   Graph_Graph121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph121->SetLineColor(ci);
   Graph_Graph121->GetXaxis()->SetLabelFont(42);
   Graph_Graph121->GetXaxis()->SetTitleOffset(1);
   Graph_Graph121->GetXaxis()->SetTitleFont(42);
   Graph_Graph121->GetYaxis()->SetLabelFont(42);
   Graph_Graph121->GetYaxis()->SetTitleFont(42);
   Graph_Graph121->GetZaxis()->SetLabelFont(42);
   Graph_Graph121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph121->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph121);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx122[30] = {
   0,
   0,
   0.05002689,
   0.2540008,
   0.4938103,
   0.6833949,
   0.7994307,
   0.8746586,
   0.9133201,
   0.9364299,
   0.950999,
   0.9648728,
   0.9731787,
   0.9803458,
   0.9848182,
   0.9883605,
   0.9948323,
   0.9971662,
   0.9980833,
   0.9982919,
   0.9989308,
   0.9989308,
   0.9994306,
   0.9994306,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_fy122[30] = {
   0,
   0.0002877471,
   0.1394189,
   0.3265799,
   0.4493571,
   0.5697307,
   0.6477646,
   0.7221067,
   0.7873845,
   0.8317587,
   0.8559397,
   0.8885937,
   0.9154812,
   0.9354041,
   0.9447017,
   0.9588894,
   0.9676069,
   0.9719944,
   0.9813876,
   0.9912242,
   0.9944038,
   0.9970595,
   0.9993428,
   0.9994762,
   0.9998127,
   0.9999004,
   0.9999066,
   0.999908,
   0.9999981,
   0.9999998};
   graph = new TGraph(30,Graph_fx122,Graph_fy122);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph122 = new TH1F("Graph_Graph122","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph122->SetMinimum(0);
   Graph_Graph122->SetMaximum(1.1);
   Graph_Graph122->SetDirectory(0);
   Graph_Graph122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph122->SetLineColor(ci);
   Graph_Graph122->GetXaxis()->SetLabelFont(42);
   Graph_Graph122->GetXaxis()->SetTitleOffset(1);
   Graph_Graph122->GetXaxis()->SetTitleFont(42);
   Graph_Graph122->GetYaxis()->SetLabelFont(42);
   Graph_Graph122->GetYaxis()->SetTitleFont(42);
   Graph_Graph122->GetZaxis()->SetLabelFont(42);
   Graph_Graph122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph122->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph122);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx123[30] = {
   0,
   0.03609079,
   0.1619131,
   0.3341946,
   0.4820319,
   0.6005877,
   0.6865433,
   0.7532512,
   0.8016349,
   0.8424264,
   0.8718816,
   0.8964585,
   0.9171095,
   0.9357792,
   0.9530827,
   0.9653128,
   0.9774156,
   0.986023,
   0.9910056,
   0.9944622,
   0.9969388,
   0.9980694,
   0.9991262,
   0.9993506,
   0.9996074,
   0.9997728,
   0.9998938,
   0.9998938,
   0.9998938,
   0.9998938};
   Double_t Graph_fy123[30] = {
   0,
   0.02621823,
   0.1630306,
   0.3011239,
   0.4182461,
   0.5074768,
   0.5842291,
   0.647788,
   0.699036,
   0.7468536,
   0.7854917,
   0.8229702,
   0.8514315,
   0.8797346,
   0.9048231,
   0.9279339,
   0.9490173,
   0.963516,
   0.9736267,
   0.982018,
   0.9871522,
   0.9911364,
   0.9935037,
   0.9961331,
   0.9975172,
   0.999091,
   0.9995445,
   0.9999052,
   0.9999303,
   0.999966};
   graph = new TGraph(30,Graph_fx123,Graph_fy123);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph123 = new TH1F("Graph_Graph123","Tagging Prioritized",100,0,1.099883);
   Graph_Graph123->SetMinimum(0);
   Graph_Graph123->SetMaximum(1.099963);
   Graph_Graph123->SetDirectory(0);
   Graph_Graph123->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph123->SetLineColor(ci);
   Graph_Graph123->GetXaxis()->SetLabelFont(42);
   Graph_Graph123->GetXaxis()->SetTitleOffset(1);
   Graph_Graph123->GetXaxis()->SetTitleFont(42);
   Graph_Graph123->GetYaxis()->SetLabelFont(42);
   Graph_Graph123->GetYaxis()->SetTitleFont(42);
   Graph_Graph123->GetZaxis()->SetLabelFont(42);
   Graph_Graph123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph123->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph123);
   
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
   TLatex *   tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dR_Bj1_17->Modified();
   ROC_Z_dR_Bj1_17->cd();
   ROC_Z_dR_Bj1_17->SetSelected(ROC_Z_dR_Bj1_17);
}
