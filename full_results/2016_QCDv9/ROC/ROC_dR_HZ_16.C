#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_16()
{
//=========Macro generated from canvas: ROC_dR_HZ_16/ROC_dR_HZ_16
//=========  (Wed Mar  1 15:32:57 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_16 = new TCanvas("ROC_dR_HZ_16", "ROC_dR_HZ_16",0,0,600,600);
   ROC_dR_HZ_16->SetHighLightColor(2);
   ROC_dR_HZ_16->Range(-0.1649255,-0.01243448,1.212135,1.158625);
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
   
   Double_t Graph_fx896[28] = {
   0.0969303,
   0.2507477,
   0.3701298,
   0.4603761,
   0.5367656,
   0.5983532,
   0.6532342,
   0.6951789,
   0.7337,
   0.7654158,
   0.793438,
   0.816439,
   0.8406301,
   0.8607593,
   0.8787526,
   0.8938715,
   0.9080483,
   0.9203653,
   0.9304643,
   0.9397456,
   0.9534457,
   0.9617589,
   0.9734913,
   0.9790299,
   0.9837473,
   0.9880848,
   0.9922971,
   0.9952947};
   Double_t Graph_fy896[28] = {
   0.1713072,
   0.3766815,
   0.5077052,
   0.5977374,
   0.6614045,
   0.7099206,
   0.7493136,
   0.7844896,
   0.8155085,
   0.8393802,
   0.8601938,
   0.8798816,
   0.8913986,
   0.9024112,
   0.9130105,
   0.9275083,
   0.9404869,
   0.9471779,
   0.9564857,
   0.9627269,
   0.9696918,
   0.9729093,
   0.9792849,
   0.9840575,
   0.9883998,
   0.9907611,
   0.9915289,
   0.9947779};
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
   
   TH1F *Graph_Graph896 = new TH1F("Graph_Graph896","Tagging Only",100,0.007093856,1.085131);
   Graph_Graph896->SetMinimum(0.08896008);
   Graph_Graph896->SetMaximum(1.077125);
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
   
   TLatex *   tex = new TLatex(0.261122,0.6900856,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(897);
      tex = new TLatex(0.3751439,0.8701795,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(898);
      tex = new TLatex(0.4708229,0.8961028,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(899);
      tex = new TLatex(0.5644259,0.9477866,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(900);
      tex = new TLatex(0.6216818,0.9724059,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(901);
      tex = new TLatex(0.6747388,0.99341,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(902);
      tex = new TLatex(0.7212589,1.00561,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(903);
      tex = new TLatex(0.752734,1.018591,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(904);
      tex = new TLatex(0.7838557,1.020838,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(905);
      tex = new TLatex(0.8154238,1.022994,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(906);
      tex = new TLatex(0.8408075,1.025945,"#pm1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(907);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx908[28] = {
   0.115072,
   0.261122,
   0.3751439,
   0.4708229,
   0.5644259,
   0.6216818,
   0.6747388,
   0.7212589,
   0.752734,
   0.7838557,
   0.8154238,
   0.8408075,
   0.862412,
   0.8815528,
   0.8938818,
   0.908053,
   0.9212592,
   0.929973,
   0.9346156,
   0.9419081,
   0.9494235,
   0.9574628,
   0.9851257,
   0.9868988,
   0.9894875,
   0.9925371,
   0.995575,
   0.9970663};
   Double_t Graph_fy908[28] = {
   0.2887797,
   0.5900856,
   0.7701795,
   0.8561028,
   0.9077866,
   0.9324059,
   0.95341,
   0.96561,
   0.9785907,
   0.980838,
   0.9829939,
   0.9859452,
   0.9897929,
   0.9909147,
   0.9915259,
   0.994626,
   0.9960512,
   0.9960512,
   0.9987924,
   0.9991236,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   0.999718,
   1,
   1};
   graph = new TGraph(28,Graph_fx908,Graph_fy908);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph908 = new TH1F("Graph_Graph908","Mass-Matching Prioritized",100,0.02687261,1.085266);
   Graph_Graph908->SetMinimum(0.2176577);
   Graph_Graph908->SetMaximum(1.071122);
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
   
   Double_t Graph_fx909[28] = {
   0.09642887,
   0.2493788,
   0.3680731,
   0.4582213,
   0.5341162,
   0.5960292,
   0.6514489,
   0.6933724,
   0.7319541,
   0.76385,
   0.7919412,
   0.8154178,
   0.8400642,
   0.8605849,
   0.8785364,
   0.8936165,
   0.9078736,
   0.9201739,
   0.9302511,
   0.9395411,
   0.9531875,
   0.9615367,
   0.9732157,
   0.9787545,
   0.9835483,
   0.9879342,
   0.9922342,
   0.9952374};
   Double_t Graph_fy909[28] = {
   0.1696121,
   0.3767109,
   0.5069087,
   0.5964175,
   0.6600224,
   0.7084698,
   0.7485851,
   0.7852833,
   0.8150197,
   0.8397241,
   0.8602348,
   0.8802716,
   0.8923118,
   0.9027172,
   0.9135228,
   0.9271189,
   0.9400655,
   0.947239,
   0.9562418,
   0.9623059,
   0.9691965,
   0.9728776,
   0.9791365,
   0.9842823,
   0.9890556,
   0.9913737,
   0.9921275,
   0.9953169};
   graph = new TGraph(28,Graph_fx909,Graph_fy909);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph909 = new TH1F("Graph_Graph909","Tagging Prioritized",100,0.006548012,1.085118);
   Graph_Graph909->SetMinimum(0.08704161);
   Graph_Graph909->SetMaximum(1.077887);
   Graph_Graph909->SetDirectory(0);
   Graph_Graph909->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph909->SetLineColor(ci);
   Graph_Graph909->GetXaxis()->SetLabelFont(42);
   Graph_Graph909->GetXaxis()->SetTitleOffset(1);
   Graph_Graph909->GetXaxis()->SetTitleFont(42);
   Graph_Graph909->GetYaxis()->SetLabelFont(42);
   Graph_Graph909->GetYaxis()->SetTitleFont(42);
   Graph_Graph909->GetZaxis()->SetLabelFont(42);
   Graph_Graph909->GetZaxis()->SetTitleOffset(1);
   Graph_Graph909->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph909);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.05139699, 1.042098);
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
