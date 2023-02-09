#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_16/ROC_Z_dR_Bj0_16
//=========  (Tue Jan 24 15:01:32 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_16 = new TCanvas("ROC_Z_dR_Bj0_16", "ROC_Z_dR_Bj0_16",0,0,600,600);
   ROC_Z_dR_Bj0_16->SetHighLightColor(2);
   ROC_Z_dR_Bj0_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_16->SetFillColor(0);
   ROC_Z_dR_Bj0_16->SetBorderMode(0);
   ROC_Z_dR_Bj0_16->SetBorderSize(2);
   ROC_Z_dR_Bj0_16->SetGridx();
   ROC_Z_dR_Bj0_16->SetGridy();
   ROC_Z_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx2039[30] = {
   0,
   0.03754676,
   0.1939476,
   0.3383802,
   0.4522899,
   0.5465002,
   0.620764,
   0.6778836,
   0.7284493,
   0.76694,
   0.799963,
   0.8336682,
   0.8640134,
   0.8879678,
   0.9115645,
   0.936397,
   0.9547344,
   0.9665304,
   0.9760835,
   0.9835033,
   0.9884302,
   0.9921218,
   0.9945188,
   0.996465,
   0.9975278,
   0.9984836,
   0.9992438,
   0.9994495,
   0.9999486,
   0.9999624};
   Double_t Graph_fy2039[30] = {
   0,
   0.0473514,
   0.1956074,
   0.3764729,
   0.5246114,
   0.6363014,
   0.7101214,
   0.7670772,
   0.8083285,
   0.8417976,
   0.8693051,
   0.8928115,
   0.9120367,
   0.9304017,
   0.9495668,
   0.9628101,
   0.9762936,
   0.9842558,
   0.9908976,
   0.9937784,
   0.9956989,
   0.9974994,
   0.9984196,
   0.9987397,
   0.9991598,
   0.9993598,
   0.9997599,
   0.99994,
   0.99998,
   1};
   TGraph *graph = new TGraph(30,Graph_fx2039,Graph_fy2039);
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
   
   TH1F *Graph_Graph2039 = new TH1F("Graph_Graph2039","Tagging Only",100,0,1.099959);
   Graph_Graph2039->SetMinimum(0);
   Graph_Graph2039->SetMaximum(1.1);
   Graph_Graph2039->SetDirectory(0);
   Graph_Graph2039->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2039->SetLineColor(ci);
   Graph_Graph2039->GetXaxis()->SetLabelFont(42);
   Graph_Graph2039->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2039->GetXaxis()->SetTitleFont(42);
   Graph_Graph2039->GetYaxis()->SetLabelFont(42);
   Graph_Graph2039->GetYaxis()->SetTitleFont(42);
   Graph_Graph2039->GetZaxis()->SetLabelFont(42);
   Graph_Graph2039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2039->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2039);
   
   TLatex *   tex = new TLatex(0.1939476,0.2556074,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2040);
      tex = new TLatex(0.3383802,0.4364729,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2041);
      tex = new TLatex(0.4522899,0.5846114,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2042);
      tex = new TLatex(0.5465002,0.6963014,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2043);
      tex = new TLatex(0.620764,0.7701214,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2044);
      tex = new TLatex(0.6778836,0.8270772,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2045);
      tex = new TLatex(0.7284493,0.8683285,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2046);
      tex = new TLatex(0.76694,0.9017976,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2047);
      tex = new TLatex(0.799963,0.9293051,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2048);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2049[30] = {
   0,
   0.06092673,
   0.3178067,
   0.528794,
   0.6900199,
   0.7927801,
   0.8456962,
   0.8822724,
   0.9083293,
   0.9195836,
   0.9410451,
   0.9627205,
   0.9679153,
   0.9738908,
   0.9814836,
   0.9855678,
   0.9859948,
   0.9891632,
   0.9957066,
   0.9959868,
   0.9964267,
   0.9999204,
   0.9999864,
   0.9999902,
   0.9999957,
   0.9999985,
   0.9999991,
   0.9999995,
   0.9999997,
   0.9999999};
   Double_t Graph_fy2049[30] = {
   0,
   0.05553528,
   0.3457531,
   0.6317896,
   0.814576,
   0.8959262,
   0.9446456,
   0.9629152,
   0.9770038,
   0.9852752,
   0.9909107,
   0.993183,
   0.9964552,
   0.9979095,
   0.9988184,
   0.9990002,
   0.9991819,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx2049,Graph_fy2049);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2049 = new TH1F("Graph_Graph2049","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph2049->SetMinimum(0);
   Graph_Graph2049->SetMaximum(1.1);
   Graph_Graph2049->SetDirectory(0);
   Graph_Graph2049->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2049->SetLineColor(ci);
   Graph_Graph2049->GetXaxis()->SetLabelFont(42);
   Graph_Graph2049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2049->GetXaxis()->SetTitleFont(42);
   Graph_Graph2049->GetYaxis()->SetLabelFont(42);
   Graph_Graph2049->GetYaxis()->SetTitleFont(42);
   Graph_Graph2049->GetZaxis()->SetLabelFont(42);
   Graph_Graph2049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2049->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2049);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2050[30] = {
   0,
   0.03751443,
   0.1944148,
   0.3377891,
   0.4512348,
   0.5450588,
   0.6187715,
   0.6758931,
   0.7271796,
   0.7661658,
   0.7989721,
   0.8333497,
   0.8639207,
   0.8877066,
   0.911147,
   0.9356974,
   0.9547644,
   0.9668521,
   0.9763677,
   0.983713,
   0.9885859,
   0.9922156,
   0.994582,
   0.9965265,
   0.997579,
   0.9985118,
   0.9992617,
   0.9994623,
   0.9999496,
   0.9999633};
   Double_t Graph_fy2050[30] = {
   0,
   0.04703539,
   0.1979486,
   0.3803925,
   0.5238956,
   0.6321304,
   0.7056611,
   0.7623054,
   0.805337,
   0.8399417,
   0.8670669,
   0.8912503,
   0.9102811,
   0.9290959,
   0.9485921,
   0.9623706,
   0.9769138,
   0.9851244,
   0.9912077,
   0.9941994,
   0.9959279,
   0.9976233,
   0.9986205,
   0.9989197,
   0.9992853,
   0.9994681,
   0.9998006,
   0.9999501,
   0.9999834,
   1};
   graph = new TGraph(30,Graph_fx2050,Graph_fy2050);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph2050 = new TH1F("Graph_Graph2050","Tagging Prioritized",100,0,1.09996);
   Graph_Graph2050->SetMinimum(0);
   Graph_Graph2050->SetMaximum(1.1);
   Graph_Graph2050->SetDirectory(0);
   Graph_Graph2050->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2050->SetLineColor(ci);
   Graph_Graph2050->GetXaxis()->SetLabelFont(42);
   Graph_Graph2050->GetXaxis()->SetTitleOffset(1);
   Graph_Graph2050->GetXaxis()->SetTitleFont(42);
   Graph_Graph2050->GetYaxis()->SetLabelFont(42);
   Graph_Graph2050->GetYaxis()->SetTitleFont(42);
   Graph_Graph2050->GetZaxis()->SetLabelFont(42);
   Graph_Graph2050->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2050->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2050);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999999, 1.05);
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
   ROC_Z_dR_Bj0_16->Modified();
   ROC_Z_dR_Bj0_16->cd();
   ROC_Z_dR_Bj0_16->SetSelected(ROC_Z_dR_Bj0_16);
}
