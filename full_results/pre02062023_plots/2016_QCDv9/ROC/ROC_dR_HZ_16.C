#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_16()
{
//=========Macro generated from canvas: ROC_dR_HZ_16/ROC_dR_HZ_16
//=========  (Tue Jan 31 11:21:42 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_16 = new TCanvas("ROC_dR_HZ_16", "ROC_dR_HZ_16",0,0,600,600);
   ROC_dR_HZ_16->SetHighLightColor(2);
   ROC_dR_HZ_16->Range(-0.1919951,-0.06055357,1.219442,1.166165);
   ROC_dR_HZ_16->SetFillColor(0);
   ROC_dR_HZ_16->SetBorderMode(0);
   ROC_dR_HZ_16->SetBorderSize(2);
   ROC_dR_HZ_16->SetGridx();
   ROC_dR_HZ_16->SetGridy();
   ROC_dR_HZ_16->SetLeftMargin(0.15709);
   ROC_dR_HZ_16->SetRightMargin(0.1234783);
   ROC_dR_HZ_16->SetBottomMargin(0.12);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   ROC_dR_HZ_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx251[28] = {
   0.08205656,
   0.2132501,
   0.3246611,
   0.4071913,
   0.4808996,
   0.5431692,
   0.5970819,
   0.6477554,
   0.6914269,
   0.7281509,
   0.7612456,
   0.7887889,
   0.8148979,
   0.8408964,
   0.8615789,
   0.8822107,
   0.8971545,
   0.911041,
   0.9225732,
   0.9341762,
   0.9461955,
   0.9551264,
   0.9648173,
   0.9742692,
   0.9815984,
   0.9868471,
   0.9917683,
   0.9953901};
   Double_t Graph_fy251[28] = {
   0.1371135,
   0.3339304,
   0.4692139,
   0.5693125,
   0.6352436,
   0.6905155,
   0.7352959,
   0.7728867,
   0.8038316,
   0.8293343,
   0.8509741,
   0.8699441,
   0.8866822,
   0.8996751,
   0.913519,
   0.9262508,
   0.9356681,
   0.9441907,
   0.9520663,
   0.9588284,
   0.9659513,
   0.9720213,
   0.9776337,
   0.9818689,
   0.9865015,
   0.9890654,
   0.9920537,
   0.9950834};
   TGraph *graph = new TGraph(28,Graph_fx251,Graph_fy251);
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
   
   TH1F *Graph_Graph251 = new TH1F("Graph_Graph251","Tagging Only",100,0,1.086723);
   Graph_Graph251->SetMinimum(0.05131649);
   Graph_Graph251->SetMaximum(1.08088);
   Graph_Graph251->SetDirectory(0);
   Graph_Graph251->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph251->SetLineColor(ci);
   Graph_Graph251->GetXaxis()->SetLabelFont(42);
   Graph_Graph251->GetXaxis()->SetTitleOffset(1);
   Graph_Graph251->GetXaxis()->SetTitleFont(42);
   Graph_Graph251->GetYaxis()->SetLabelFont(42);
   Graph_Graph251->GetYaxis()->SetTitleFont(42);
   Graph_Graph251->GetZaxis()->SetLabelFont(42);
   Graph_Graph251->GetZaxis()->SetTitleOffset(1);
   Graph_Graph251->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph251);
   
   TLatex *   tex = new TLatex(0.2674187,0.6145174,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(252);
      tex = new TLatex(0.3917257,0.7959301,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(253);
      tex = new TLatex(0.4726673,0.8450269,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(254);
      tex = new TLatex(0.5426335,0.8967959,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.6022804,0.9383321,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(0.6619487,0.968092,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(0.7115891,0.9860552,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(0.7537487,0.9984283,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(0.7829373,1.00947,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
      tex = new TLatex(0.8052144,1.016771,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(261);
      tex = new TLatex(0.8298461,1.019347,"#pm1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(262);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx263[28] = {
   0.1211644,
   0.2674187,
   0.3917257,
   0.4726673,
   0.5426335,
   0.6022804,
   0.6619487,
   0.7115891,
   0.7537487,
   0.7829373,
   0.8052144,
   0.8298461,
   0.8522345,
   0.8748997,
   0.8999943,
   0.9191733,
   0.9284353,
   0.9406241,
   0.9503961,
   0.9628462,
   0.9732706,
   0.9765289,
   0.9828194,
   0.9876764,
   0.9941778,
   0.9960458,
   0.9976321,
   0.9990045};
   Double_t Graph_fy263[28] = {
   0.2171619,
   0.5145174,
   0.6959301,
   0.8050269,
   0.8567959,
   0.8983321,
   0.928092,
   0.9460552,
   0.9584283,
   0.9694696,
   0.976771,
   0.979347,
   0.9813052,
   0.9856506,
   0.9900097,
   0.9922504,
   0.994994,
   0.9956968,
   0.9976665,
   0.9979757,
   0.9989776,
   0.9995119,
   0.9995119,
   0.9996964,
   0.9997952,
   1,
   1,
   1};
   graph = new TGraph(28,Graph_fx263,Graph_fy263);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph263 = new TH1F("Graph_Graph263","Mass-Matching Prioritized",100,0.03338037,1.086789);
   Graph_Graph263->SetMinimum(0.1388781);
   Graph_Graph263->SetMaximum(1.078284);
   Graph_Graph263->SetDirectory(0);
   Graph_Graph263->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph263->SetLineColor(ci);
   Graph_Graph263->GetXaxis()->SetLabelFont(42);
   Graph_Graph263->GetXaxis()->SetTitleOffset(1);
   Graph_Graph263->GetXaxis()->SetTitleFont(42);
   Graph_Graph263->GetYaxis()->SetLabelFont(42);
   Graph_Graph263->GetYaxis()->SetTitleFont(42);
   Graph_Graph263->GetZaxis()->SetLabelFont(42);
   Graph_Graph263->GetZaxis()->SetTitleOffset(1);
   Graph_Graph263->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph263);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx264[29] = {
   0.07588368,
   0.2228051,
   0.3239524,
   0.4099125,
   0.4780775,
   0.5350109,
   0.590473,
   0.6406545,
   0.6831577,
   0.7221419,
   0.7538498,
   0.7826345,
   0.8081055,
   0.8324159,
   0.8585328,
   0.878535,
   0.8954629,
   0.9088332,
   0.9226074,
   0.9338098,
   0.9443387,
   0.9549131,
   0.9647181,
   0.9746819,
   0.9820065,
   0.9877201,
   0.9925016,
   0.9957894,
   0.9980679};
   Double_t Graph_fy264[29] = {
   0.1301453,
   0.3514385,
   0.4836865,
   0.5723073,
   0.6402725,
   0.6918287,
   0.735886,
   0.7726387,
   0.8017067,
   0.8292717,
   0.8517709,
   0.8709758,
   0.8859454,
   0.9008965,
   0.9143461,
   0.9257233,
   0.9353798,
   0.9443703,
   0.9525682,
   0.9598651,
   0.9669257,
   0.9732927,
   0.9786943,
   0.9837529,
   0.9870854,
   0.9906076,
   0.9942047,
   0.9967841,
   0.9988259};
   graph = new TGraph(29,Graph_fx264,Graph_fy264);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph264 = new TH1F("Graph_Graph264","Tagging Prioritized",100,0,1.090286);
   Graph_Graph264->SetMinimum(0.04327728);
   Graph_Graph264->SetMaximum(1.085694);
   Graph_Graph264->SetDirectory(0);
   Graph_Graph264->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph264->SetLineColor(ci);
   Graph_Graph264->GetXaxis()->SetLabelFont(42);
   Graph_Graph264->GetXaxis()->SetTitleOffset(1);
   Graph_Graph264->GetXaxis()->SetTitleFont(42);
   Graph_Graph264->GetYaxis()->SetLabelFont(42);
   Graph_Graph264->GetYaxis()->SetTitleFont(42);
   Graph_Graph264->GetZaxis()->SetLabelFont(42);
   Graph_Graph264->GetZaxis()->SetTitleOffset(1);
   Graph_Graph264->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph264);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.02972764, 1.045161);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_16->Modified();
   ROC_dR_HZ_16->cd();
   ROC_dR_HZ_16->SetSelected(ROC_dR_HZ_16);
}
