#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_16()
{
//=========Macro generated from canvas: ROC_H_dR_16/ROC_H_dR_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_16 = new TCanvas("ROC_H_dR_16", "ROC_H_dR_16",0,0,600,600);
   ROC_H_dR_16->SetHighLightColor(2);
   ROC_H_dR_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_16->SetFillColor(0);
   ROC_H_dR_16->SetBorderMode(0);
   ROC_H_dR_16->SetBorderSize(2);
   ROC_H_dR_16->SetGridx();
   ROC_H_dR_16->SetGridy();
   ROC_H_dR_16->SetLeftMargin(0.15709);
   ROC_H_dR_16->SetRightMargin(0.1234783);
   ROC_H_dR_16->SetBottomMargin(0.12);
   ROC_H_dR_16->SetFrameBorderMode(0);
   ROC_H_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1[30] = {
   0,
   0,
   1.700096e-05,
   0.04156713,
   0.09037081,
   0.129092,
   0.1667753,
   0.2081392,
   0.2461291,
   0.2892119,
   0.3345401,
   0.3876144,
   0.4520021,
   0.5165948,
   0.5917791,
   0.6750723,
   0.7615948,
   0.8217122,
   0.8633435,
   0.8979052,
   0.9279559,
   0.9496338,
   0.9658646,
   0.9786976,
   0.9876501,
   0.9943479,
   0.9972508,
   0.999673,
   0.9999723,
   1};
   Double_t Graph_fy1[30] = {
   0,
   0,
   0,
   0.02032066,
   0.05686714,
   0.1070926,
   0.1744276,
   0.2495903,
   0.3280105,
   0.4075844,
   0.4822037,
   0.5521584,
   0.6182663,
   0.6909393,
   0.7592015,
   0.8380814,
   0.9170202,
   0.949714,
   0.9692521,
   0.979498,
   0.9872488,
   0.9924697,
   0.9955143,
   0.9978165,
   0.9986188,
   0.9993499,
   0.9997119,
   0.9999536,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx1,Graph_fy1);
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
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Tagging Only",100,0,1.1);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(1.1);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   TLatex *   tex = new TLatex(0.1598366,0.221166,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(2);
      tex = new TLatex(0.2104292,0.3224092,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(3);
      tex = new TLatex(0.2592595,0.4470813,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(4);
      tex = new TLatex(0.3089276,0.5843232,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(5);
      tex = new TLatex(0.3707196,0.7238581,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(6);
      tex = new TLatex(0.4270558,0.8154031,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(7);
      tex = new TLatex(0.501196,0.8900912,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(8);
      tex = new TLatex(0.5844856,0.902727,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(9);
      tex = new TLatex(0.6555033,0.94703,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(10);
      tex = new TLatex(0.7316858,0.9703295,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(11);
      tex = new TLatex(0.8079288,1.002473,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(12);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx13[30] = {
   0,
   0,
   2.97181e-07,
   0.04918377,
   0.1062584,
   0.1598366,
   0.2104292,
   0.2592595,
   0.3089276,
   0.3707196,
   0.4270558,
   0.501196,
   0.5844856,
   0.6555033,
   0.7316858,
   0.8079288,
   0.8870907,
   0.9343136,
   0.9592131,
   0.9726653,
   0.9789099,
   0.9825424,
   0.9909971,
   0.9931408,
   0.9998261,
   0.999887,
   0.9999843,
   0.9999959,
   1,
   1};
   Double_t Graph_fy13[30] = {
   0,
   0,
   0,
   0.01354369,
   0.0427095,
   0.121166,
   0.2224092,
   0.3470813,
   0.4843232,
   0.6238581,
   0.7154031,
   0.7900912,
   0.862727,
   0.90703,
   0.9303295,
   0.9624725,
   0.9826403,
   0.9932208,
   0.9979032,
   0.9996171,
   0.9998556,
   0.9998556,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx13,Graph_fy13);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph13->SetMinimum(0);
   Graph_Graph13->SetMaximum(1.1);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetTitleOffset(1);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetTitleOffset(1);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx14[30] = {
   0,
   0,
   1.668321e-05,
   0.04148066,
   0.09005706,
   0.128771,
   0.1662595,
   0.2075444,
   0.2457317,
   0.2887257,
   0.3338442,
   0.3867594,
   0.4509066,
   0.5154137,
   0.5905754,
   0.674497,
   0.7614734,
   0.8213456,
   0.8627072,
   0.8972557,
   0.927094,
   0.9486017,
   0.9654103,
   0.9788318,
   0.9877203,
   0.9943843,
   0.9972929,
   0.9996787,
   0.9999729,
   1};
   Double_t Graph_fy14[30] = {
   0,
   0,
   0,
   0.02091357,
   0.05730466,
   0.1081011,
   0.1750145,
   0.2504709,
   0.3303395,
   0.4105961,
   0.4854587,
   0.5550976,
   0.6206502,
   0.6942368,
   0.7620225,
   0.8394007,
   0.9163858,
   0.9485916,
   0.9686309,
   0.9791472,
   0.9870275,
   0.9921452,
   0.995144,
   0.9976069,
   0.9984312,
   0.9993662,
   0.9997191,
   0.9999548,
   1,
   1};
   graph = new TGraph(30,Graph_fx14,Graph_fy14);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","Tagging Prioritized",100,0,1.1);
   Graph_Graph14->SetMinimum(0);
   Graph_Graph14->SetMaximum(1.1);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetTitleOffset(1);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetTitleOffset(1);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
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
   ROC_H_dR_16->Modified();
   ROC_H_dR_16->cd();
   ROC_H_dR_16->SetSelected(ROC_H_dR_16);
}
