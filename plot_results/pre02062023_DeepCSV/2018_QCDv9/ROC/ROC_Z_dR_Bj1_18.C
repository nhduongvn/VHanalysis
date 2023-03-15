#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_18/ROC_Z_dR_Bj1_18
//=========  (Fri Jan 27 13:04:53 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_18 = new TCanvas("ROC_Z_dR_Bj1_18", "ROC_Z_dR_Bj1_18",0,0,600,600);
   ROC_Z_dR_Bj1_18->SetHighLightColor(2);
   ROC_Z_dR_Bj1_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj1_18->SetFillColor(0);
   ROC_Z_dR_Bj1_18->SetBorderMode(0);
   ROC_Z_dR_Bj1_18->SetBorderSize(2);
   ROC_Z_dR_Bj1_18->SetGridx();
   ROC_Z_dR_Bj1_18->SetGridy();
   ROC_Z_dR_Bj1_18->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj1_18->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj1_18->SetBottomMargin(0.12);
   ROC_Z_dR_Bj1_18->SetFrameBorderMode(0);
   ROC_Z_dR_Bj1_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx189[30] = {
   0,
   0.02623393,
   0.1743275,
   0.3125106,
   0.4227803,
   0.5134244,
   0.5880822,
   0.6515233,
   0.7071805,
   0.752603,
   0.7893276,
   0.8210807,
   0.8525821,
   0.8798737,
   0.9057787,
   0.9296422,
   0.9519539,
   0.9648169,
   0.9756192,
   0.9825567,
   0.9872712,
   0.9916172,
   0.9945346,
   0.9964175,
   0.9978811,
   0.9985298,
   0.9990895,
   0.9998044,
   0.999901,
   0.9999521};
   Double_t Graph_fy189[30] = {
   0,
   0.03354574,
   0.1690546,
   0.3481955,
   0.4981112,
   0.6238711,
   0.712183,
   0.7737413,
   0.8152249,
   0.847419,
   0.8751684,
   0.8983445,
   0.9179,
   0.9342781,
   0.9509325,
   0.9681396,
   0.9803303,
   0.9880667,
   0.9921255,
   0.9951029,
   0.9969226,
   0.9982565,
   0.9986852,
   0.9993331,
   0.9994998,
   0.9996665,
   0.9997046,
   0.9997427,
   0.9998714,
   1};
   TGraph *graph = new TGraph(30,Graph_fx189,Graph_fy189);
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
   
   TH1F *Graph_Graph189 = new TH1F("Graph_Graph189","Tagging Only",100,0,1.099947);
   Graph_Graph189->SetMinimum(0);
   Graph_Graph189->SetMaximum(1.1);
   Graph_Graph189->SetDirectory(0);
   Graph_Graph189->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph189->SetLineColor(ci);
   Graph_Graph189->GetXaxis()->SetLabelFont(42);
   Graph_Graph189->GetXaxis()->SetTitleOffset(1);
   Graph_Graph189->GetXaxis()->SetTitleFont(42);
   Graph_Graph189->GetYaxis()->SetLabelFont(42);
   Graph_Graph189->GetYaxis()->SetTitleFont(42);
   Graph_Graph189->GetZaxis()->SetLabelFont(42);
   Graph_Graph189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph189->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph189);
   
   TLatex *   tex = new TLatex(0.1732227,0.2734352,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(190);
      tex = new TLatex(0.3105995,0.4508218,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(191);
      tex = new TLatex(0.4207492,0.5995833,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(192);
      tex = new TLatex(0.5989384,0.7893783,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(193);
      tex = new TLatex(0.6808059,0.8561473,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(194);
      tex = new TLatex(0.7483895,0.9260546,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(195);
      tex = new TLatex(0.7959856,0.9655761,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(196);
      tex = new TLatex(0.8299934,0.9828756,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(197);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx198[30] = {
   0,
   5.218507e-05,
   0.1597268,
   0.3427608,
   0.4940897,
   0.5989384,
   0.6808059,
   0.7483895,
   0.7959856,
   0.8299934,
   0.8592993,
   0.8836721,
   0.9078005,
   0.9205252,
   0.9373634,
   0.952481,
   0.9631443,
   0.9732491,
   0.9788787,
   0.987133,
   0.98813,
   0.993102,
   0.9959973,
   0.9986252,
   0.9991467,
   0.9991986,
   0.9996006,
   0.9998187,
   0.9998196,
   0.9999997};
   Double_t Graph_fy198[30] = {
   0,
   0,
   0.05676011,
   0.2465852,
   0.4966137,
   0.6893783,
   0.8161473,
   0.8860546,
   0.9255761,
   0.9428756,
   0.9562653,
   0.9659888,
   0.9719847,
   0.9775756,
   0.9860024,
   0.9890613,
   0.9933152,
   0.9941052,
   0.9959891,
   0.99842,
   0.999129,
   0.99921,
   0.999757,
   0.999838,
   0.999838,
   0.999919,
   0.999919,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx198,Graph_fy198);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph198 = new TH1F("Graph_Graph198","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph198->SetMinimum(0);
   Graph_Graph198->SetMaximum(1.1);
   Graph_Graph198->SetDirectory(0);
   Graph_Graph198->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph198->SetLineColor(ci);
   Graph_Graph198->GetXaxis()->SetLabelFont(42);
   Graph_Graph198->GetXaxis()->SetTitleOffset(1);
   Graph_Graph198->GetXaxis()->SetTitleFont(42);
   Graph_Graph198->GetYaxis()->SetLabelFont(42);
   Graph_Graph198->GetYaxis()->SetTitleFont(42);
   Graph_Graph198->GetZaxis()->SetLabelFont(42);
   Graph_Graph198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph198->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph198);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx199[30] = {
   0,
   0.0262171,
   0.1732227,
   0.3105995,
   0.4207492,
   0.5108143,
   0.5859917,
   0.6497151,
   0.7054777,
   0.7516412,
   0.7881175,
   0.8201104,
   0.8516393,
   0.8785387,
   0.9050822,
   0.9289747,
   0.9513616,
   0.9650756,
   0.9756909,
   0.9825495,
   0.9874584,
   0.9917473,
   0.9946141,
   0.9964979,
   0.9979296,
   0.9985623,
   0.9991086,
   0.9998049,
   0.9998992,
   0.9999534};
   Double_t Graph_fy199[30] = {
   0,
   0.03524485,
   0.1734352,
   0.3508218,
   0.4995833,
   0.6223101,
   0.7083351,
   0.7692282,
   0.8109896,
   0.843926,
   0.8724604,
   0.8950693,
   0.9150963,
   0.933391,
   0.9508823,
   0.9675284,
   0.9795463,
   0.9871746,
   0.9917315,
   0.9948197,
   0.9966943,
   0.9981756,
   0.9986819,
   0.9992845,
   0.9995439,
   0.9996904,
   0.9997406,
   0.999774,
   0.999887,
   1};
   graph = new TGraph(30,Graph_fx199,Graph_fy199);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph199 = new TH1F("Graph_Graph199","Tagging Prioritized",100,0,1.099949);
   Graph_Graph199->SetMinimum(0);
   Graph_Graph199->SetMaximum(1.1);
   Graph_Graph199->SetDirectory(0);
   Graph_Graph199->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph199->SetLineColor(ci);
   Graph_Graph199->GetXaxis()->SetLabelFont(42);
   Graph_Graph199->GetXaxis()->SetTitleOffset(1);
   Graph_Graph199->GetXaxis()->SetTitleFont(42);
   Graph_Graph199->GetYaxis()->SetLabelFont(42);
   Graph_Graph199->GetYaxis()->SetTitleFont(42);
   Graph_Graph199->GetZaxis()->SetLabelFont(42);
   Graph_Graph199->GetZaxis()->SetTitleOffset(1);
   Graph_Graph199->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph199);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
   ROC_Z_dR_Bj1_18->Modified();
   ROC_Z_dR_Bj1_18->cd();
   ROC_Z_dR_Bj1_18->SetSelected(ROC_Z_dR_Bj1_18);
}
