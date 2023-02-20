#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_16()
{
//=========Macro generated from canvas: ROC_Z_dR_16/ROC_Z_dR_16
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_16 = new TCanvas("ROC_Z_dR_16", "ROC_Z_dR_16",0,0,600,600);
   ROC_Z_dR_16->SetHighLightColor(2);
   ROC_Z_dR_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_16->SetFillColor(0);
   ROC_Z_dR_16->SetBorderMode(0);
   ROC_Z_dR_16->SetBorderSize(2);
   ROC_Z_dR_16->SetGridx();
   ROC_Z_dR_16->SetGridy();
   ROC_Z_dR_16->SetLeftMargin(0.15709);
   ROC_Z_dR_16->SetRightMargin(0.1234783);
   ROC_Z_dR_16->SetBottomMargin(0.12);
   ROC_Z_dR_16->SetFrameBorderMode(0);
   ROC_Z_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx110[30] = {
   0,
   0,
   3.370654e-05,
   0.08215945,
   0.1697025,
   0.2414741,
   0.2988375,
   0.352562,
   0.3958681,
   0.4491189,
   0.4968235,
   0.546475,
   0.5971806,
   0.6541651,
   0.719938,
   0.8000991,
   0.8825863,
   0.9248746,
   0.9515755,
   0.9665151,
   0.9820438,
   0.9894491,
   0.9935174,
   0.9968786,
   0.998446,
   0.9993281,
   0.9998947,
   0.9999914,
   0.9999999,
   1};
   Double_t Graph_fy110[30] = {
   0,
   0,
   6.880548e-05,
   0.07925965,
   0.2218058,
   0.3623458,
   0.4770503,
   0.5666646,
   0.6295304,
   0.667837,
   0.7008299,
   0.729269,
   0.7669729,
   0.8089163,
   0.8594544,
   0.9103229,
   0.9615835,
   0.9825403,
   0.9906979,
   0.994861,
   0.9973996,
   0.9993555,
   0.9997344,
   0.9997344,
   0.9998042,
   0.9998719,
   0.9998719,
   0.9998719,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx110,Graph_fy110);
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
   
   TH1F *Graph_Graph110 = new TH1F("Graph_Graph110","Tagging Only",100,0,1.1);
   Graph_Graph110->SetMinimum(0);
   Graph_Graph110->SetMaximum(1.1);
   Graph_Graph110->SetDirectory(0);
   Graph_Graph110->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph110->SetLineColor(ci);
   Graph_Graph110->GetXaxis()->SetLabelFont(42);
   Graph_Graph110->GetXaxis()->SetTitleOffset(1);
   Graph_Graph110->GetXaxis()->SetTitleFont(42);
   Graph_Graph110->GetYaxis()->SetLabelFont(42);
   Graph_Graph110->GetYaxis()->SetTitleFont(42);
   Graph_Graph110->GetZaxis()->SetLabelFont(42);
   Graph_Graph110->GetZaxis()->SetTitleOffset(1);
   Graph_Graph110->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph110);
   
   TLatex *   tex = new TLatex(0.2497275,0.4168006,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(111);
      tex = new TLatex(0.3707886,0.6072354,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(112);
      tex = new TLatex(0.4424535,0.7867805,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(113);
      tex = new TLatex(0.5206459,0.8666366,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(114);
      tex = new TLatex(0.5732924,0.9332617,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(115);
      tex = new TLatex(0.6313227,0.9774054,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(116);
      tex = new TLatex(0.6868711,0.9926438,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(117);
      tex = new TLatex(0.7415459,0.9997232,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(118);
      tex = new TLatex(0.7881372,1.010758,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(119);
      tex = new TLatex(0.8234722,1.021211,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(120);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx121[30] = {
   0,
   0,
   1.309435e-05,
   0.114922,
   0.2497275,
   0.3707886,
   0.4424535,
   0.5206459,
   0.5732924,
   0.6313227,
   0.6868711,
   0.7415459,
   0.7881372,
   0.8234722,
   0.8652622,
   0.9035166,
   0.9278194,
   0.9435463,
   0.9563472,
   0.9668516,
   0.9934423,
   0.9971163,
   0.9992954,
   0.9998768,
   0.9999337,
   0.9999879,
   0.9999922,
   1,
   1,
   1};
   Double_t Graph_fy121[30] = {
   0,
   0,
   0.0002902881,
   0.1203607,
   0.3168006,
   0.5072354,
   0.6867805,
   0.8266366,
   0.8932617,
   0.9374054,
   0.9526438,
   0.9597232,
   0.9707584,
   0.9812105,
   0.9841178,
   0.9896668,
   0.9949728,
   0.9952756,
   0.9975391,
   0.9978026,
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
   graph = new TGraph(30,Graph_fx121,Graph_fy121);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph121 = new TH1F("Graph_Graph121","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph121->SetMinimum(0);
   Graph_Graph121->SetMaximum(1.1);
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
   3.318628e-05,
   0.08210926,
   0.1693565,
   0.2405546,
   0.2979898,
   0.3512713,
   0.3946002,
   0.447626,
   0.4958008,
   0.5453734,
   0.596343,
   0.6534143,
   0.7190538,
   0.7991114,
   0.8817223,
   0.924025,
   0.9509046,
   0.9665058,
   0.9819892,
   0.989497,
   0.9934916,
   0.9968573,
   0.9984071,
   0.9993391,
   0.9998964,
   0.9999915,
   0.9999999,
   1};
   Double_t Graph_fy122[30] = {
   0,
   0,
   6.754633e-05,
   0.07929485,
   0.2224147,
   0.3621909,
   0.4780936,
   0.5680397,
   0.6310171,
   0.6691445,
   0.7033885,
   0.7319241,
   0.7697425,
   0.810466,
   0.8604896,
   0.911248,
   0.9609181,
   0.9824981,
   0.9905639,
   0.9947902,
   0.9973473,
   0.9992636,
   0.9996406,
   0.9997084,
   0.9998077,
   0.9998742,
   0.9998742,
   0.9998742,
   1,
   1};
   graph = new TGraph(30,Graph_fx122,Graph_fy122);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph122 = new TH1F("Graph_Graph122","Tagging Prioritized",100,0,1.1);
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
   ROC_Z_dR_16->Modified();
   ROC_Z_dR_16->cd();
   ROC_Z_dR_16->SetSelected(ROC_Z_dR_16);
}
