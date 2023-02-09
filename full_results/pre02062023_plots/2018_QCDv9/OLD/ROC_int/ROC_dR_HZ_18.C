#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_18()
{
//=========Macro generated from canvas: ROC_dR_HZ_18/ROC_dR_HZ_18
//=========  (Wed Jan 25 10:51:22 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_18 = new TCanvas("ROC_dR_HZ_18", "ROC_dR_HZ_18",0,0,600,600);
   ROC_dR_HZ_18->SetHighLightColor(2);
   ROC_dR_HZ_18->Range(-0.1851985,-0.05365176,1.218389,1.164829);
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
   
   Double_t Graph_fx84[28] = {
   0.08119039,
   0.2198886,
   0.3303774,
   0.4135413,
   0.4852876,
   0.5496179,
   0.6013398,
   0.6439645,
   0.68709,
   0.7233004,
   0.7574371,
   0.789247,
   0.8151947,
   0.8391455,
   0.85944,
   0.877084,
   0.8963288,
   0.9106005,
   0.9242681,
   0.9368398,
   0.9459359,
   0.9573451,
   0.9662951,
   0.9731275,
   0.9796312,
   0.9849441,
   0.9903216,
   0.9948369};
   Double_t Graph_fy84[28] = {
   0.1416868,
   0.3472588,
   0.4849959,
   0.581789,
   0.6517857,
   0.7027228,
   0.7477394,
   0.7836846,
   0.81218,
   0.8348303,
   0.8575718,
   0.8751367,
   0.8901928,
   0.9029852,
   0.915537,
   0.9264624,
   0.9355728,
   0.9431404,
   0.9514214,
   0.9601932,
   0.967515,
   0.9732947,
   0.9781023,
   0.9826461,
   0.9866042,
   0.9904778,
   0.993882,
   0.9956024};
   TGraph *graph = new TGraph(28,Graph_fx84,Graph_fy84);
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
   
   TH1F *Graph_Graph84 = new TH1F("Graph_Graph84","Tagging Only",100,0,1.086202);
   Graph_Graph84->SetMinimum(0.0562952);
   Graph_Graph84->SetMaximum(1.080994);
   Graph_Graph84->SetDirectory(0);
   Graph_Graph84->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph84->SetLineColor(ci);
   Graph_Graph84->GetXaxis()->SetLabelFont(42);
   Graph_Graph84->GetXaxis()->SetTitleOffset(1);
   Graph_Graph84->GetXaxis()->SetTitleFont(42);
   Graph_Graph84->GetYaxis()->SetLabelFont(42);
   Graph_Graph84->GetYaxis()->SetTitleFont(42);
   Graph_Graph84->GetZaxis()->SetLabelFont(42);
   Graph_Graph84->GetZaxis()->SetTitleOffset(1);
   Graph_Graph84->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph84);
   
   TLatex *   tex = new TLatex(0.09916525,0.2671496,"#pm0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(85);
      tex = new TLatex(0.2760336,0.560337,"#pm1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(86);
      tex = new TLatex(0.3944695,0.7428103,"#pm2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(87);
      tex = new TLatex(0.4792055,0.8490071,"#pm3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(88);
      tex = new TLatex(0.5475035,0.9099182,"#pm4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(89);
      tex = new TLatex(0.6154719,0.9390503,"#pm5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(90);
      tex = new TLatex(0.6728169,0.9636568,"#pm6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(91);
      tex = new TLatex(0.7173773,0.9817353,"#pm7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(92);
      tex = new TLatex(0.7531238,0.9934518,"#pm8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(93);
      tex = new TLatex(0.789096,1.000064,"#pm9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(94);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx95[28] = {
   0.09916525,
   0.2760336,
   0.3944695,
   0.4792055,
   0.5475035,
   0.6154719,
   0.6728169,
   0.7173773,
   0.7531238,
   0.789096,
   0.8316608,
   0.8549526,
   0.8707936,
   0.8923421,
   0.9084643,
   0.9213638,
   0.9400667,
   0.9487963,
   0.9540312,
   0.9648567,
   0.9725277,
   0.979389,
   0.9819711,
   0.9860457,
   0.988149,
   0.9926257,
   0.9956431,
   0.9991772};
   Double_t Graph_fy95[28] = {
   0.2271496,
   0.520337,
   0.7028103,
   0.8090071,
   0.8699182,
   0.8990503,
   0.9236568,
   0.9417353,
   0.9534518,
   0.9600645,
   0.9663161,
   0.971961,
   0.9755488,
   0.979009,
   0.9820222,
   0.9865424,
   0.9879926,
   0.9898546,
   0.9903128,
   0.9917759,
   0.992941,
   0.9932996,
   0.9948415,
   0.9970114,
   0.9979324,
   0.998369,
   0.9997798,
   0.9997798};
   graph = new TGraph(28,Graph_fx95,Graph_fy95);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph95 = new TH1F("Graph_Graph95","Mass-Matching Prioritized",100,0.009164054,1.089178);
   Graph_Graph95->SetMinimum(0.1498866);
   Graph_Graph95->SetMaximum(1.077043);
   Graph_Graph95->SetDirectory(0);
   Graph_Graph95->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph95->SetLineColor(ci);
   Graph_Graph95->GetXaxis()->SetLabelFont(42);
   Graph_Graph95->GetXaxis()->SetTitleOffset(1);
   Graph_Graph95->GetXaxis()->SetTitleFont(42);
   Graph_Graph95->GetYaxis()->SetLabelFont(42);
   Graph_Graph95->GetYaxis()->SetTitleFont(42);
   Graph_Graph95->GetZaxis()->SetLabelFont(42);
   Graph_Graph95->GetZaxis()->SetTitleOffset(1);
   Graph_Graph95->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph95);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx96[29] = {
   0.0815039,
   0.2267504,
   0.3286488,
   0.4123053,
   0.4854715,
   0.5430846,
   0.594483,
   0.6416952,
   0.6793867,
   0.7198177,
   0.7550618,
   0.7837906,
   0.8123638,
   0.8374403,
   0.8580314,
   0.8772986,
   0.893869,
   0.9102002,
   0.9229676,
   0.9349244,
   0.9471902,
   0.9566308,
   0.9664731,
   0.9747049,
   0.9801472,
   0.9850006,
   0.989536,
   0.994118,
   0.9978198};
   Double_t Graph_fy96[29] = {
   0.1357665,
   0.3618522,
   0.4977714,
   0.5899273,
   0.6530056,
   0.708266,
   0.7534581,
   0.787488,
   0.8135159,
   0.8382846,
   0.8577716,
   0.8746578,
   0.8913863,
   0.9055418,
   0.916925,
   0.9282215,
   0.9363177,
   0.9458256,
   0.9537087,
   0.9620095,
   0.9690424,
   0.9743088,
   0.9800593,
   0.9844602,
   0.9892059,
   0.9933159,
   0.99539,
   0.9975247,
   0.9987854};
   graph = new TGraph(29,Graph_fx96,Graph_fy96);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","Tagging Prioritized",100,0,1.089451);
   Graph_Graph96->SetMinimum(0.04946465);
   Graph_Graph96->SetMaximum(1.085087);
   Graph_Graph96->SetDirectory(0);
   Graph_Graph96->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph96->SetLineColor(ci);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetTitleOffset(1);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetTitleOffset(1);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.03529104, 1.045077);
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
   entry=leg->AddEntry("NULL","bin size = 0.1","lpf");
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
