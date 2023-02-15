#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_16/ROC_Z_dR_Bj1_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_16 = new TCanvas("ROC_Z_dR_Bj1_16", "ROC_Z_dR_Bj1_16",0,0,600,600);
   ROC_Z_dR_Bj1_16->SetHighLightColor(2);
   ROC_Z_dR_Bj1_16->Range(-0.2901874,-0.1615385,1.238793,1.184615);
   ROC_Z_dR_Bj1_16->SetFillColor(0);
   ROC_Z_dR_Bj1_16->SetBorderMode(0);
   ROC_Z_dR_Bj1_16->SetBorderSize(2);
   ROC_Z_dR_Bj1_16->SetGridx();
   ROC_Z_dR_Bj1_16->SetGridy();
   ROC_Z_dR_Bj1_16->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_16->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_16->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_16->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx165[30] = {
   0,
   0.03502891,
   0.2049615,
   0.3556267,
   0.4733865,
   0.5641033,
   0.6424545,
   0.6993774,
   0.7456043,
   0.7871989,
   0.8185054,
   0.8470769,
   0.8750672,
   0.8981883,
   0.9196495,
   0.9427165,
   0.9605473,
   0.9735096,
   0.9809935,
   0.9862795,
   0.9901131,
   0.9930604,
   0.9956353,
   0.9964034,
   0.9980359,
   0.9984178,
   0.9987461,
   0.9989251,
   0.9998265,
   0.9998866};
   Double_t Graph_fy165[30] = {
   0,
   0.04036493,
   0.1965846,
   0.38599,
   0.5406622,
   0.649744,
   0.7276226,
   0.7811331,
   0.8254482,
   0.8572806,
   0.8854808,
   0.9053867,
   0.9251702,
   0.9396734,
   0.953206,
   0.9680781,
   0.9816719,
   0.9891125,
   0.9941901,
   0.9957067,
   0.9964564,
   0.9979109,
   0.9984222,
   0.9994887,
   0.9997179,
   0.9999735,
   0.9999735,
   0.9999735,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx165,Graph_fy165);
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
   
   TH1F *Graph_Graph165 = new TH1F("Graph_Graph165","Tagging Only",100,0,1.099875);
   Graph_Graph165->SetMinimum(0);
   Graph_Graph165->SetMaximum(1.1);
   Graph_Graph165->SetDirectory(0);
   Graph_Graph165->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph165->SetLineColor(ci);
   Graph_Graph165->GetXaxis()->SetLabelFont(42);
   Graph_Graph165->GetXaxis()->SetTitleOffset(1);
   Graph_Graph165->GetXaxis()->SetTitleFont(42);
   Graph_Graph165->GetYaxis()->SetLabelFont(42);
   Graph_Graph165->GetYaxis()->SetTitleFont(42);
   Graph_Graph165->GetZaxis()->SetLabelFont(42);
   Graph_Graph165->GetZaxis()->SetTitleOffset(1);
   Graph_Graph165->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph165);
   
   TLatex *   tex = new TLatex(0.2043748,0.2988629,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(166);
      tex = new TLatex(0.3545895,0.4876639,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(167);
      tex = new TLatex(0.5087982,0.6738419,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(168);
      tex = new TLatex(0.6292829,0.849108,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(169);
      tex = new TLatex(0.7225428,0.8859729,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(170);
      tex = new TLatex(0.7935009,0.9361842,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(171);
      tex = new TLatex(0.8324485,0.9685584,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(172);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx173[30] = {
   0,
   0.0006081383,
   0.153541,
   0.3669304,
   0.5087982,
   0.6292829,
   0.7225428,
   0.7935009,
   0.8324485,
   0.8726507,
   0.9004718,
   0.9196303,
   0.936882,
   0.9496686,
   0.9615391,
   0.9688883,
   0.9780468,
   0.9883637,
   0.9922033,
   0.9949188,
   0.9967782,
   0.9978453,
   0.9986435,
   0.9993066,
   0.999357,
   0.9994706,
   0.9995613,
   0.9995756,
   0.9995768,
   0.9999971};
   Double_t Graph_fy173[30] = {
   0,
   0.0009860194,
   0.1087946,
   0.3328727,
   0.5738419,
   0.749108,
   0.8459729,
   0.8961842,
   0.9285584,
   0.950726,
   0.9654762,
   0.9719963,
   0.9805729,
   0.9856762,
   0.9882922,
   0.9928803,
   0.9961403,
   0.9962691,
   0.9976416,
   0.9988852,
   0.999014,
   0.999014,
   0.999014,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx173,Graph_fy173);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph173 = new TH1F("Graph_Graph173","Mass-Matching Prioritized",100,0,1.099997);
   Graph_Graph173->SetMinimum(0);
   Graph_Graph173->SetMaximum(1.1);
   Graph_Graph173->SetDirectory(0);
   Graph_Graph173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph173->SetLineColor(ci);
   Graph_Graph173->GetXaxis()->SetLabelFont(42);
   Graph_Graph173->GetXaxis()->SetTitleOffset(1);
   Graph_Graph173->GetXaxis()->SetTitleFont(42);
   Graph_Graph173->GetYaxis()->SetLabelFont(42);
   Graph_Graph173->GetYaxis()->SetTitleFont(42);
   Graph_Graph173->GetZaxis()->SetLabelFont(42);
   Graph_Graph173->GetZaxis()->SetTitleOffset(1);
   Graph_Graph173->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph173);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx174[30] = {
   0,
   0.03504178,
   0.2043748,
   0.3545895,
   0.472438,
   0.5625919,
   0.6414374,
   0.6981576,
   0.744689,
   0.7859676,
   0.8176186,
   0.8461378,
   0.8741001,
   0.8972592,
   0.9186031,
   0.9414515,
   0.9599041,
   0.9728889,
   0.9804101,
   0.9863861,
   0.9901826,
   0.993084,
   0.9956242,
   0.9964587,
   0.9980611,
   0.9984385,
   0.9987605,
   0.9989373,
   0.9998206,
   0.9998794};
   Double_t Graph_fy174[30] = {
   0,
   0.04070439,
   0.1988629,
   0.3876639,
   0.541918,
   0.650247,
   0.729238,
   0.783798,
   0.8276039,
   0.8586548,
   0.8863383,
   0.9063093,
   0.9253711,
   0.9400264,
   0.9537102,
   0.9678318,
   0.9815236,
   0.9889709,
   0.9939441,
   0.9954218,
   0.996178,
   0.9975694,
   0.9982652,
   0.9995018,
   0.9997251,
   0.9999742,
   0.9999742,
   0.9999742,
   1,
   1};
   graph = new TGraph(30,Graph_fx174,Graph_fy174);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph174 = new TH1F("Graph_Graph174","Tagging Prioritized",100,0,1.099867);
   Graph_Graph174->SetMinimum(0);
   Graph_Graph174->SetMaximum(1.1);
   Graph_Graph174->SetDirectory(0);
   Graph_Graph174->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph174->SetLineColor(ci);
   Graph_Graph174->GetXaxis()->SetLabelFont(42);
   Graph_Graph174->GetXaxis()->SetTitleOffset(1);
   Graph_Graph174->GetXaxis()->SetTitleFont(42);
   Graph_Graph174->GetYaxis()->SetLabelFont(42);
   Graph_Graph174->GetYaxis()->SetTitleFont(42);
   Graph_Graph174->GetZaxis()->SetLabelFont(42);
   Graph_Graph174->GetZaxis()->SetTitleOffset(1);
   Graph_Graph174->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph174);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999986, 1.049997);
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
   ROC_Z_dR_Bj1_16->Modified();
   ROC_Z_dR_Bj1_16->cd();
   ROC_Z_dR_Bj1_16->SetSelected(ROC_Z_dR_Bj1_16);
}
