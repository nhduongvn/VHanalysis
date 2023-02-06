#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_17()
{
//=========Macro generated from canvas: ROC_H_dR_17/ROC_H_dR_17
//=========  (Tue Jan 24 15:01:27 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_17 = new TCanvas("ROC_H_dR_17", "ROC_H_dR_17",0,0,600,600);
   ROC_H_dR_17->SetHighLightColor(2);
   ROC_H_dR_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_17->SetFillColor(0);
   ROC_H_dR_17->SetBorderMode(0);
   ROC_H_dR_17->SetBorderSize(2);
   ROC_H_dR_17->SetGridx();
   ROC_H_dR_17->SetGridy();
   ROC_H_dR_17->SetLeftMargin(0.15709);
   ROC_H_dR_17->SetRightMargin(0.1234783);
   ROC_H_dR_17->SetBottomMargin(0.12);
   ROC_H_dR_17->SetFrameBorderMode(0);
   ROC_H_dR_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx247[30] = {
   0,
   0,
   0.0002644475,
   0.0325968,
   0.07551294,
   0.1113933,
   0.1512143,
   0.1902671,
   0.2348661,
   0.2795799,
   0.3260922,
   0.3777828,
   0.4348159,
   0.4990521,
   0.5780331,
   0.6623959,
   0.754963,
   0.8166843,
   0.8618265,
   0.899988,
   0.9326,
   0.9537515,
   0.9704614,
   0.9824594,
   0.9898613,
   0.995606,
   0.9984755,
   0.9994486,
   0.9999659,
   1};
   Double_t Graph_fy247[30] = {
   0,
   0,
   0,
   0.01784241,
   0.05254028,
   0.09809404,
   0.1610442,
   0.2327894,
   0.3068537,
   0.3888988,
   0.4644091,
   0.5354918,
   0.6029906,
   0.6756133,
   0.7545917,
   0.8396178,
   0.9244952,
   0.9558564,
   0.9733852,
   0.9823156,
   0.988528,
   0.9930686,
   0.9966271,
   0.9982177,
   0.9992007,
   0.9997207,
   1,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx247,Graph_fy247);
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
   
   TH1F *Graph_Graph247 = new TH1F("Graph_Graph247","Tagging Only",100,0,1.1);
   Graph_Graph247->SetMinimum(0);
   Graph_Graph247->SetMaximum(1.1);
   Graph_Graph247->SetDirectory(0);
   Graph_Graph247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph247->SetLineColor(ci);
   Graph_Graph247->GetXaxis()->SetLabelFont(42);
   Graph_Graph247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph247->GetXaxis()->SetTitleFont(42);
   Graph_Graph247->GetYaxis()->SetLabelFont(42);
   Graph_Graph247->GetYaxis()->SetTitleFont(42);
   Graph_Graph247->GetZaxis()->SetLabelFont(42);
   Graph_Graph247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph247);
   
   TLatex *   tex = new TLatex(0.07551294,0.1125403,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(248);
      tex = new TLatex(0.1113933,0.158094,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(249);
      tex = new TLatex(0.1512143,0.2210442,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(250);
      tex = new TLatex(0.1902671,0.2927894,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(251);
      tex = new TLatex(0.2348661,0.3668537,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(252);
      tex = new TLatex(0.2795799,0.4488988,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(253);
      tex = new TLatex(0.3260922,0.5244091,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(254);
      tex = new TLatex(0.3777828,0.5954918,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(255);
      tex = new TLatex(0.4348159,0.6629906,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(256);
      tex = new TLatex(0.4990521,0.7356133,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(257);
      tex = new TLatex(0.5780331,0.8145917,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(258);
      tex = new TLatex(0.6623959,0.8996178,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(259);
      tex = new TLatex(0.754963,0.9844952,"3.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(260);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx261[30] = {
   0,
   0,
   2.960238e-06,
   0.04102193,
   0.09822231,
   0.1516287,
   0.2073765,
   0.2633882,
   0.3226224,
   0.3921395,
   0.4541586,
   0.5144377,
   0.5880167,
   0.669633,
   0.7525668,
   0.8254039,
   0.8964171,
   0.9399519,
   0.9655029,
   0.9798614,
   0.9900715,
   0.9957368,
   0.9978503,
   0.9988473,
   0.9993573,
   0.9997405,
   0.9999691,
   0.9999996,
   1,
   1};
   Double_t Graph_fy261[30] = {
   0,
   0,
   0,
   0.01063742,
   0.0531556,
   0.09302912,
   0.1626431,
   0.2886796,
   0.4093421,
   0.5432603,
   0.6610488,
   0.7585464,
   0.8211116,
   0.8757039,
   0.9212381,
   0.9573764,
   0.9810503,
   0.989037,
   0.9954842,
   0.9974651,
   0.9987937,
   0.9991234,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx261,Graph_fy261);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph261 = new TH1F("Graph_Graph261","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph261->SetMinimum(0);
   Graph_Graph261->SetMaximum(1.1);
   Graph_Graph261->SetDirectory(0);
   Graph_Graph261->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph261->SetLineColor(ci);
   Graph_Graph261->GetXaxis()->SetLabelFont(42);
   Graph_Graph261->GetXaxis()->SetTitleOffset(1);
   Graph_Graph261->GetXaxis()->SetTitleFont(42);
   Graph_Graph261->GetYaxis()->SetLabelFont(42);
   Graph_Graph261->GetYaxis()->SetTitleFont(42);
   Graph_Graph261->GetZaxis()->SetLabelFont(42);
   Graph_Graph261->GetZaxis()->SetTitleOffset(1);
   Graph_Graph261->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph261);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx262[30] = {
   0,
   0,
   0.0002578044,
   0.03250019,
   0.07542976,
   0.1114283,
   0.1510432,
   0.1900276,
   0.2344537,
   0.2793873,
   0.3259029,
   0.377214,
   0.4341696,
   0.499015,
   0.5776091,
   0.6621903,
   0.7553158,
   0.8175455,
   0.8629996,
   0.9010425,
   0.9331423,
   0.9540507,
   0.9705809,
   0.9825288,
   0.9900057,
   0.9956758,
   0.9984981,
   0.9994618,
   0.9999668,
   1};
   Double_t Graph_fy262[30] = {
   0,
   0,
   0,
   0.01925338,
   0.05496539,
   0.09940787,
   0.1604284,
   0.2302109,
   0.3031919,
   0.3806334,
   0.4558351,
   0.5271558,
   0.5943881,
   0.6679561,
   0.7482505,
   0.8339364,
   0.9185351,
   0.9511341,
   0.9711031,
   0.9811758,
   0.9876794,
   0.9925123,
   0.9963556,
   0.9981702,
   0.9992967,
   0.9997512,
   0.9999909,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx262,Graph_fy262);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph262 = new TH1F("Graph_Graph262","Tagging Prioritized",100,0,1.1);
   Graph_Graph262->SetMinimum(0);
   Graph_Graph262->SetMaximum(1.1);
   Graph_Graph262->SetDirectory(0);
   Graph_Graph262->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph262->SetLineColor(ci);
   Graph_Graph262->GetXaxis()->SetLabelFont(42);
   Graph_Graph262->GetXaxis()->SetTitleOffset(1);
   Graph_Graph262->GetXaxis()->SetTitleFont(42);
   Graph_Graph262->GetYaxis()->SetLabelFont(42);
   Graph_Graph262->GetYaxis()->SetTitleFont(42);
   Graph_Graph262->GetZaxis()->SetLabelFont(42);
   Graph_Graph262->GetZaxis()->SetTitleOffset(1);
   Graph_Graph262->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph262);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_17->Modified();
   ROC_H_dR_17->cd();
   ROC_H_dR_17->SetSelected(ROC_H_dR_17);
}
