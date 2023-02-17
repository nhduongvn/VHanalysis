#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_18/ROC_Z_dR_Bj1_18
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_18 = new TCanvas("ROC_Z_dR_Bj1_18", "ROC_Z_dR_Bj1_18",0,0,600,600);
   ROC_Z_dR_Bj1_18->SetHighLightColor(2);
   ROC_Z_dR_Bj1_18->Range(-0.2901876,-0.1615385,1.238794,1.184615);
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
   
   Double_t Graph_fx185[30] = {
   0,
   0.03489505,
   0.1960444,
   0.3498427,
   0.4668759,
   0.5580732,
   0.63033,
   0.6871726,
   0.7315914,
   0.7712944,
   0.8047196,
   0.8364698,
   0.8649484,
   0.8935222,
   0.9182731,
   0.9397592,
   0.9595722,
   0.9723809,
   0.9818206,
   0.9880848,
   0.992045,
   0.9943835,
   0.996016,
   0.9968999,
   0.9983838,
   0.9989608,
   0.9995409,
   0.9997791,
   0.999876,
   0.9999841};
   Double_t Graph_fy185[30] = {
   0,
   0.03969646,
   0.1901378,
   0.368247,
   0.5220764,
   0.6387343,
   0.7231693,
   0.7798978,
   0.8251259,
   0.8581633,
   0.8832075,
   0.9059691,
   0.9241233,
   0.9411172,
   0.9569353,
   0.9708676,
   0.9832801,
   0.9887409,
   0.9932191,
   0.9958507,
   0.9973289,
   0.997954,
   0.9987632,
   0.9991294,
   0.9997895,
   0.9998114,
   0.9999057,
   0.9999167,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx185,Graph_fy185);
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
   
   TH1F *Graph_Graph185 = new TH1F("Graph_Graph185","Tagging Only",100,0,1.099982);
   Graph_Graph185->SetMinimum(0);
   Graph_Graph185->SetMaximum(1.1);
   Graph_Graph185->SetDirectory(0);
   Graph_Graph185->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph185->SetLineColor(ci);
   Graph_Graph185->GetXaxis()->SetLabelFont(42);
   Graph_Graph185->GetXaxis()->SetTitleOffset(1);
   Graph_Graph185->GetXaxis()->SetTitleFont(42);
   Graph_Graph185->GetYaxis()->SetLabelFont(42);
   Graph_Graph185->GetYaxis()->SetTitleFont(42);
   Graph_Graph185->GetZaxis()->SetLabelFont(42);
   Graph_Graph185->GetZaxis()->SetTitleOffset(1);
   Graph_Graph185->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph185);
   
   TLatex *   tex = new TLatex(0.1958543,0.2911351,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(186);
      tex = new TLatex(0.3497189,0.4699249,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(187);
      tex = new TLatex(0.5252054,0.6693643,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(188);
      tex = new TLatex(0.6387219,0.8300477,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(189);
      tex = new TLatex(0.7240479,0.8729877,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(190);
      tex = new TLatex(0.7888855,0.9270411,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(191);
      tex = new TLatex(0.840181,0.9625777,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(192);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx193[30] = {
   0,
   6.86771e-05,
   0.1569537,
   0.3583714,
   0.5252054,
   0.6387219,
   0.7240479,
   0.7888855,
   0.840181,
   0.8652554,
   0.891401,
   0.9124117,
   0.9283762,
   0.9381905,
   0.9534815,
   0.969347,
   0.9800565,
   0.9898748,
   0.9932995,
   0.9960223,
   0.9964591,
   0.9978424,
   0.9987144,
   0.9993122,
   0.9998321,
   0.99989,
   0.9999436,
   0.9999943,
   0.9999954,
   0.9999978};
   Double_t Graph_fy193[30] = {
   0,
   0,
   0.1000882,
   0.3343206,
   0.5693643,
   0.7300477,
   0.8329877,
   0.8870411,
   0.9225777,
   0.9445689,
   0.9570553,
   0.9661651,
   0.9754529,
   0.9804041,
   0.9848599,
   0.9907711,
   0.9956526,
   0.9969996,
   0.9983759,
   0.9994752,
   0.9994752,
   0.9995742,
   0.9999505,
   0.9999505,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx193,Graph_fy193);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph193 = new TH1F("Graph_Graph193","Mass-Matching Prioritized",100,0,1.099998);
   Graph_Graph193->SetMinimum(0);
   Graph_Graph193->SetMaximum(1.1);
   Graph_Graph193->SetDirectory(0);
   Graph_Graph193->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph193->SetLineColor(ci);
   Graph_Graph193->GetXaxis()->SetLabelFont(42);
   Graph_Graph193->GetXaxis()->SetTitleOffset(1);
   Graph_Graph193->GetXaxis()->SetTitleFont(42);
   Graph_Graph193->GetYaxis()->SetLabelFont(42);
   Graph_Graph193->GetYaxis()->SetTitleFont(42);
   Graph_Graph193->GetZaxis()->SetLabelFont(42);
   Graph_Graph193->GetZaxis()->SetTitleOffset(1);
   Graph_Graph193->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph193);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx194[30] = {
   0,
   0.03526209,
   0.1958543,
   0.3497189,
   0.4670267,
   0.5580813,
   0.62998,
   0.686776,
   0.7309764,
   0.7706037,
   0.8045642,
   0.8365859,
   0.8650524,
   0.8935325,
   0.9183002,
   0.9397536,
   0.959625,
   0.9725146,
   0.9818006,
   0.9879953,
   0.9919129,
   0.9942787,
   0.9959499,
   0.9968696,
   0.9984061,
   0.9989791,
   0.9995497,
   0.9997832,
   0.9998784,
   0.9999843};
   Double_t Graph_fy194[30] = {
   0,
   0.03996006,
   0.1911351,
   0.3699249,
   0.5229616,
   0.6398672,
   0.7235236,
   0.7804158,
   0.8254997,
   0.8582019,
   0.8830232,
   0.906306,
   0.9241664,
   0.9410743,
   0.9568562,
   0.9710526,
   0.9833274,
   0.9889321,
   0.9932697,
   0.9958591,
   0.9973721,
   0.9979821,
   0.9987824,
   0.9991505,
   0.9997946,
   0.999816,
   0.999908,
   0.9999187,
   1,
   1};
   graph = new TGraph(30,Graph_fx194,Graph_fy194);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph194 = new TH1F("Graph_Graph194","Tagging Prioritized",100,0,1.099983);
   Graph_Graph194->SetMinimum(0);
   Graph_Graph194->SetMaximum(1.1);
   Graph_Graph194->SetDirectory(0);
   Graph_Graph194->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph194->SetLineColor(ci);
   Graph_Graph194->GetXaxis()->SetLabelFont(42);
   Graph_Graph194->GetXaxis()->SetTitleOffset(1);
   Graph_Graph194->GetXaxis()->SetTitleFont(42);
   Graph_Graph194->GetYaxis()->SetLabelFont(42);
   Graph_Graph194->GetYaxis()->SetTitleFont(42);
   Graph_Graph194->GetZaxis()->SetLabelFont(42);
   Graph_Graph194->GetZaxis()->SetTitleOffset(1);
   Graph_Graph194->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph194);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999989, 1.049998);
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
