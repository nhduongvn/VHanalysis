#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_18()
{
//=========Macro generated from canvas: ROC_dR_HZ_18/ROC_dR_HZ_18
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_18 = new TCanvas("ROC_dR_HZ_18", "ROC_dR_HZ_18",0,0,600,600);
   ROC_dR_HZ_18->SetHighLightColor(2);
   ROC_dR_HZ_18->Range(-0.1754899,-0.04257627,1.21678,1.163348);
   ROC_dR_HZ_18->SetFillColor(0);
   ROC_dR_HZ_18->SetBorderMode(0);
   ROC_dR_HZ_18->SetBorderSize(2);
   ROC_dR_HZ_18->SetGridx();
   ROC_dR_HZ_18->SetGridy();
   ROC_dR_HZ_18->SetLeftMargin(0.15709);
   ROC_dR_HZ_18->SetRightMargin(0.1234783);
   ROC_dR_HZ_18->SetBottomMargin(0.12);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   ROC_dR_HZ_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx896[28] = {
   0.08928735,
   0.2303319,
   0.3404152,
   0.4298813,
   0.5037083,
   0.568681,
   0.620797,
   0.6648094,
   0.7112848,
   0.7467755,
   0.7778289,
   0.8047869,
   0.8288865,
   0.8500105,
   0.8689391,
   0.8865113,
   0.9048573,
   0.9188138,
   0.9320518,
   0.9417781,
   0.9516459,
   0.9608843,
   0.9686937,
   0.9752169,
   0.9816678,
   0.9864332,
   0.9911256,
   0.9945909};
   Double_t Graph_fy896[28] = {
   0.1455989,
   0.3460764,
   0.4771444,
   0.5714357,
   0.6389645,
   0.69334,
   0.7368478,
   0.7752924,
   0.8049788,
   0.8287029,
   0.8502481,
   0.870677,
   0.8875602,
   0.9020322,
   0.9149327,
   0.9280485,
   0.9375639,
   0.9451091,
   0.9539151,
   0.9614048,
   0.9673433,
   0.9727387,
   0.9771291,
   0.9815197,
   0.9863519,
   0.9899739,
   0.9927991,
   0.9954751};
   TGraph *graph = new TGraph(28,Graph_fx896,Graph_fy896);
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
   
   TH1F *Graph_Graph896 = new TH1F("Graph_Graph896","Tagging Only",100,0,1.085121);
   Graph_Graph896->SetMinimum(0.06061123);
   Graph_Graph896->SetMaximum(1.080463);
   Graph_Graph896->SetDirectory(0);
   Graph_Graph896->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph896->SetLineColor(ci);
   Graph_Graph896->GetXaxis()->SetLabelFont(42);
   Graph_Graph896->GetXaxis()->SetTitleOffset(1);
   Graph_Graph896->GetXaxis()->SetTitleFont(42);
   Graph_Graph896->GetYaxis()->SetLabelFont(42);
   Graph_Graph896->GetYaxis()->SetTitleFont(42);
   Graph_Graph896->GetZaxis()->SetLabelFont(42);
   Graph_Graph896->GetZaxis()->SetTitleOffset(1);
   Graph_Graph896->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph896);
   
   TLatex *   tex = new TLatex(0.2706272,0.670741,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(897);
      tex = new TLatex(0.3845298,0.8365563,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(898);
      tex = new TLatex(0.4898087,0.8689219,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(899);
      tex = new TLatex(0.5716363,0.9198712,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(900);
      tex = new TLatex(0.6414073,0.948946,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(901);
      tex = new TLatex(0.698819,0.9725408,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(902);
      tex = new TLatex(0.7393942,0.9903886,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(903);
      tex = new TLatex(0.7852982,1.002944,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(904);
      tex = new TLatex(0.8096977,1.009442,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(905);
      tex = new TLatex(0.8361492,1.015478,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(906);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx907[28] = {
   0.10937,
   0.2706272,
   0.3845298,
   0.4898087,
   0.5716363,
   0.6414073,
   0.698819,
   0.7393942,
   0.7852982,
   0.8096977,
   0.8361492,
   0.8588332,
   0.8809627,
   0.8975525,
   0.9130749,
   0.9278425,
   0.9375312,
   0.9446566,
   0.9544716,
   0.9586148,
   0.9639537,
   0.9752013,
   0.9829351,
   0.9844282,
   0.9901487,
   0.9948756,
   0.9987089,
   0.9993359};
   Double_t Graph_fy907[28] = {
   0.2536531,
   0.570741,
   0.7365563,
   0.8289219,
   0.8798712,
   0.908946,
   0.9325408,
   0.9503886,
   0.9629444,
   0.9694421,
   0.9754778,
   0.9812778,
   0.9848523,
   0.9884035,
   0.990503,
   0.9923977,
   0.9947087,
   0.996206,
   0.9967759,
   0.9968991,
   0.9969451,
   0.99753,
   0.9984327,
   0.9989174,
   0.9998995,
   0.9999501,
   1,
   1};
   graph = new TGraph(28,Graph_fx907,Graph_fy907);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph907 = new TH1F("Graph_Graph907","Mass-Matching Prioritized",100,0.02037342,1.088333);
   Graph_Graph907->SetMinimum(0.1790184);
   Graph_Graph907->SetMaximum(1.074635);
   Graph_Graph907->SetDirectory(0);
   Graph_Graph907->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph907->SetLineColor(ci);
   Graph_Graph907->GetXaxis()->SetLabelFont(42);
   Graph_Graph907->GetXaxis()->SetTitleOffset(1);
   Graph_Graph907->GetXaxis()->SetTitleFont(42);
   Graph_Graph907->GetYaxis()->SetLabelFont(42);
   Graph_Graph907->GetYaxis()->SetTitleFont(42);
   Graph_Graph907->GetZaxis()->SetLabelFont(42);
   Graph_Graph907->GetZaxis()->SetTitleOffset(1);
   Graph_Graph907->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph907);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx908[28] = {
   0.08875104,
   0.2298786,
   0.3394106,
   0.4295654,
   0.503414,
   0.5684329,
   0.6208337,
   0.6650541,
   0.7112338,
   0.7467218,
   0.7777062,
   0.805063,
   0.8294589,
   0.8504577,
   0.8694005,
   0.8869429,
   0.9051255,
   0.9190258,
   0.9324003,
   0.9421107,
   0.9518909,
   0.9611278,
   0.9688283,
   0.9752754,
   0.9817668,
   0.9864897,
   0.9911579,
   0.9946248};
   Double_t Graph_fy908[28] = {
   0.1448901,
   0.3445146,
   0.4743232,
   0.5687161,
   0.6366529,
   0.6927108,
   0.7363662,
   0.7748556,
   0.8048523,
   0.8281092,
   0.8499305,
   0.8706126,
   0.8875987,
   0.9022543,
   0.915045,
   0.9280717,
   0.9374292,
   0.9450325,
   0.9537653,
   0.9614272,
   0.9673711,
   0.972864,
   0.9774054,
   0.9818375,
   0.9866674,
   0.9902082,
   0.9931658,
   0.9957646};
   graph = new TGraph(28,Graph_fx908,Graph_fy908);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph908 = new TH1F("Graph_Graph908","Tagging Prioritized",100,0,1.085212);
   Graph_Graph908->SetMinimum(0.05980269);
   Graph_Graph908->SetMaximum(1.080852);
   Graph_Graph908->SetDirectory(0);
   Graph_Graph908->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph908->SetLineColor(ci);
   Graph_Graph908->GetXaxis()->SetLabelFont(42);
   Graph_Graph908->GetXaxis()->SetTitleOffset(1);
   Graph_Graph908->GetXaxis()->SetTitleFont(42);
   Graph_Graph908->GetYaxis()->SetLabelFont(42);
   Graph_Graph908->GetYaxis()->SetTitleFont(42);
   Graph_Graph908->GetZaxis()->SetLabelFont(42);
   Graph_Graph908->GetZaxis()->SetTitleOffset(1);
   Graph_Graph908->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph908);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.04322179, 1.044865);
   multigraph->GetXaxis()->SetTitle("False Signal Rate (Bckg)");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetTitleOffset(1);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("True Signal Rate");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.5,0.15,0.85,0.3,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Intervals centered around 3.15","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_18->Modified();
   ROC_dR_HZ_18->cd();
   ROC_dR_HZ_18->SetSelected(ROC_dR_HZ_18);
}
