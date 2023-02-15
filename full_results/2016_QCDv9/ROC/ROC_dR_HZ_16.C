#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_16()
{
//=========Macro generated from canvas: ROC_dR_HZ_16/ROC_dR_HZ_16
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_16 = new TCanvas("ROC_dR_HZ_16", "ROC_dR_HZ_16",0,0,600,600);
   ROC_dR_HZ_16->SetHighLightColor(2);
   ROC_dR_HZ_16->Range(-0.1744484,-0.04104472,1.216154,1.163108);
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
   
   Double_t Graph_fx869[28] = {
   0.09007275,
   0.2328643,
   0.3412363,
   0.4371399,
   0.5088658,
   0.5755333,
   0.6270602,
   0.6706262,
   0.7095671,
   0.7460122,
   0.776298,
   0.8066116,
   0.828929,
   0.8515509,
   0.8698811,
   0.8886888,
   0.9042043,
   0.9194012,
   0.9311061,
   0.9403338,
   0.9504297,
   0.9594717,
   0.9689092,
   0.9776914,
   0.9833745,
   0.9884208,
   0.9924447,
   0.9952573};
   Double_t Graph_fy869[28] = {
   0.1471421,
   0.3375111,
   0.4672269,
   0.5611795,
   0.6335888,
   0.6881294,
   0.7305355,
   0.7697593,
   0.8002457,
   0.8275636,
   0.8490856,
   0.8681384,
   0.8821403,
   0.8956018,
   0.9073979,
   0.9190736,
   0.9325403,
   0.9397467,
   0.9492344,
   0.9551931,
   0.9656959,
   0.9692711,
   0.9746584,
   0.9798078,
   0.9843952,
   0.9876617,
   0.9906278,
   0.9943147};
   TGraph *graph = new TGraph(28,Graph_fx869,Graph_fy869);
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
   
   TH1F *Graph_Graph869 = new TH1F("Graph_Graph869","Tagging Only",100,0,1.085776);
   Graph_Graph869->SetMinimum(0.06242488);
   Graph_Graph869->SetMaximum(1.079032);
   Graph_Graph869->SetDirectory(0);
   Graph_Graph869->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph869->SetLineColor(ci);
   Graph_Graph869->GetXaxis()->SetLabelFont(42);
   Graph_Graph869->GetXaxis()->SetTitleOffset(1);
   Graph_Graph869->GetXaxis()->SetTitleFont(42);
   Graph_Graph869->GetYaxis()->SetLabelFont(42);
   Graph_Graph869->GetYaxis()->SetTitleFont(42);
   Graph_Graph869->GetZaxis()->SetLabelFont(42);
   Graph_Graph869->GetZaxis()->SetTitleOffset(1);
   Graph_Graph869->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph869);
   
   TLatex *   tex = new TLatex(0.2772348,0.6698776,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(870);
      tex = new TLatex(0.4045993,0.8418846,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(871);
      tex = new TLatex(0.4846472,0.8700894,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(872);
      tex = new TLatex(0.5595784,0.9243295,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(873);
      tex = new TLatex(0.6213962,0.9553273,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(874);
      tex = new TLatex(0.6752627,0.9794003,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(875);
      tex = new TLatex(0.7169082,0.9966691,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(876);
      tex = new TLatex(0.7538318,1.008291,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(877);
      tex = new TLatex(0.7836819,1.014165,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(878);
      tex = new TLatex(0.8183368,1.01798,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(879);
      tex = new TLatex(0.8452179,1.02643,"#pm1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(880);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx881[28] = {
   0.1351125,
   0.2772348,
   0.4045993,
   0.4846472,
   0.5595784,
   0.6213962,
   0.6752627,
   0.7169082,
   0.7538318,
   0.7836819,
   0.8183368,
   0.8452179,
   0.8662175,
   0.8874021,
   0.8983291,
   0.9129126,
   0.923064,
   0.9360546,
   0.9490251,
   0.9561172,
   0.9677032,
   0.9724778,
   0.9822107,
   0.9901881,
   0.9935032,
   0.9959236,
   0.9973724,
   0.9989703};
   Double_t Graph_fy881[28] = {
   0.2704725,
   0.5698776,
   0.7418846,
   0.8300894,
   0.8843295,
   0.9153273,
   0.9394003,
   0.9566691,
   0.9682911,
   0.9741648,
   0.9779801,
   0.9864298,
   0.9892445,
   0.9900339,
   0.9916877,
   0.9943144,
   0.9952369,
   0.9962708,
   0.9979023,
   0.9982917,
   0.9995638,
   0.999696,
   0.9998177,
   0.9998177,
   0.9998177,
   0.9998733,
   1,
   1};
   graph = new TGraph(28,Graph_fx881,Graph_fy881);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph881 = new TH1F("Graph_Graph881","Mass-Matching Prioritized",100,0.04872667,1.085356);
   Graph_Graph881->SetMinimum(0.1975197);
   Graph_Graph881->SetMaximum(1.072953);
   Graph_Graph881->SetDirectory(0);
   Graph_Graph881->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph881->SetLineColor(ci);
   Graph_Graph881->GetXaxis()->SetLabelFont(42);
   Graph_Graph881->GetXaxis()->SetTitleOffset(1);
   Graph_Graph881->GetXaxis()->SetTitleFont(42);
   Graph_Graph881->GetYaxis()->SetLabelFont(42);
   Graph_Graph881->GetYaxis()->SetTitleFont(42);
   Graph_Graph881->GetZaxis()->SetLabelFont(42);
   Graph_Graph881->GetZaxis()->SetTitleOffset(1);
   Graph_Graph881->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph881);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx882[28] = {
   0.08947607,
   0.2315445,
   0.3401087,
   0.4355511,
   0.5070497,
   0.573573,
   0.6252086,
   0.6690079,
   0.7077352,
   0.7441119,
   0.7743957,
   0.8048227,
   0.8271314,
   0.8497716,
   0.8695258,
   0.8887716,
   0.9042265,
   0.919373,
   0.9311095,
   0.9403489,
   0.9504602,
   0.9595011,
   0.9689299,
   0.9776771,
   0.9833475,
   0.988464,
   0.9924625,
   0.9952515};
   Double_t Graph_fy882[28] = {
   0.1461463,
   0.3378575,
   0.4661789,
   0.559684,
   0.6319643,
   0.6867744,
   0.7298487,
   0.7692539,
   0.7998901,
   0.8275313,
   0.8488708,
   0.8679651,
   0.8825974,
   0.8954282,
   0.9073105,
   0.9185634,
   0.9321604,
   0.9396872,
   0.9486064,
   0.9545874,
   0.9652206,
   0.9691069,
   0.9745267,
   0.9797239,
   0.9843892,
   0.9875739,
   0.9904656,
   0.9942877};
   graph = new TGraph(28,Graph_fx882,Graph_fy882);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph882 = new TH1F("Graph_Graph882","Tagging Prioritized",100,0,1.085829);
   Graph_Graph882->SetMinimum(0.06133215);
   Graph_Graph882->SetMaximum(1.079102);
   Graph_Graph882->SetDirectory(0);
   Graph_Graph882->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph882->SetLineColor(ci);
   Graph_Graph882->GetXaxis()->SetLabelFont(42);
   Graph_Graph882->GetXaxis()->SetTitleOffset(1);
   Graph_Graph882->GetXaxis()->SetTitleFont(42);
   Graph_Graph882->GetYaxis()->SetLabelFont(42);
   Graph_Graph882->GetYaxis()->SetTitleFont(42);
   Graph_Graph882->GetZaxis()->SetLabelFont(42);
   Graph_Graph882->GetZaxis()->SetTitleOffset(1);
   Graph_Graph882->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph882);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.04400136, 1.044445);
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
