#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_dR_HZ_17()
{
//=========Macro generated from canvas: ROC_dR_HZ_17/ROC_dR_HZ_17
//=========  (Tue Feb 14 15:34:14 2023) by ROOT version 6.26/06
   TCanvas *ROC_dR_HZ_17 = new TCanvas("ROC_dR_HZ_17", "ROC_dR_HZ_17",0,0,600,600);
   ROC_dR_HZ_17->SetHighLightColor(2);
   ROC_dR_HZ_17->Range(-0.1781015,-0.04251932,1.215921,1.162856);
   ROC_dR_HZ_17->SetFillColor(0);
   ROC_dR_HZ_17->SetBorderMode(0);
   ROC_dR_HZ_17->SetBorderSize(2);
   ROC_dR_HZ_17->SetGridx();
   ROC_dR_HZ_17->SetGridy();
   ROC_dR_HZ_17->SetLeftMargin(0.15709);
   ROC_dR_HZ_17->SetRightMargin(0.1234783);
   ROC_dR_HZ_17->SetBottomMargin(0.12);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   ROC_dR_HZ_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx883[28] = {
   0.0869781,
   0.2237009,
   0.3415185,
   0.4300435,
   0.5020395,
   0.5622392,
   0.6154769,
   0.6599762,
   0.7044594,
   0.7363463,
   0.7700483,
   0.7982677,
   0.8243335,
   0.8489343,
   0.8687343,
   0.887173,
   0.90162,
   0.9170241,
   0.9290224,
   0.9416793,
   0.9513223,
   0.959366,
   0.967586,
   0.9737195,
   0.9800044,
   0.9856657,
   0.9898661,
   0.9947451};
   Double_t Graph_fy883[28] = {
   0.1448618,
   0.3492422,
   0.4833735,
   0.5790901,
   0.6506201,
   0.7010389,
   0.7446099,
   0.7765261,
   0.8059579,
   0.8308163,
   0.852459,
   0.8713801,
   0.887711,
   0.9014341,
   0.9139444,
   0.9256425,
   0.9357331,
   0.9447158,
   0.9514203,
   0.9587884,
   0.9657289,
   0.9718373,
   0.9770344,
   0.9819842,
   0.9860913,
   0.9903409,
   0.9931034,
   0.9957958};
   TGraph *graph = new TGraph(28,Graph_fx883,Graph_fy883);
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
   
   TH1F *Graph_Graph883 = new TH1F("Graph_Graph883","Tagging Only",100,0,1.085522);
   Graph_Graph883->SetMinimum(0.05976839);
   Graph_Graph883->SetMaximum(1.080889);
   Graph_Graph883->SetDirectory(0);
   Graph_Graph883->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph883->SetLineColor(ci);
   Graph_Graph883->GetXaxis()->SetLabelFont(42);
   Graph_Graph883->GetXaxis()->SetTitleOffset(1);
   Graph_Graph883->GetXaxis()->SetTitleFont(42);
   Graph_Graph883->GetYaxis()->SetLabelFont(42);
   Graph_Graph883->GetYaxis()->SetTitleFont(42);
   Graph_Graph883->GetZaxis()->SetLabelFont(42);
   Graph_Graph883->GetZaxis()->SetTitleOffset(1);
   Graph_Graph883->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph883);
   
   TLatex *   tex = new TLatex(0.2601195,0.6666281,"#pm0.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(884);
      tex = new TLatex(0.3904268,0.8349811,"#pm0.2");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(885);
      tex = new TLatex(0.492947,0.8707584,"#pm0.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(886);
      tex = new TLatex(0.562864,0.9267862,"#pm0.4");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(887);
      tex = new TLatex(0.6301407,0.964322,"#pm0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(888);
      tex = new TLatex(0.6833182,0.9832398,"#pm0.6");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(889);
      tex = new TLatex(0.7209408,0.9975838,"#pm0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(890);
      tex = new TLatex(0.7587127,1.007803,"#pm0.8");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(891);
      tex = new TLatex(0.78658,1.013331,"#pm0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(892);
      tex = new TLatex(0.8235668,1.018957,"#pm1.0");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(893);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx894[28] = {
   0.1027476,
   0.2601195,
   0.3904268,
   0.492947,
   0.562864,
   0.6301407,
   0.6833182,
   0.7209408,
   0.7587127,
   0.78658,
   0.8235668,
   0.8530543,
   0.8745111,
   0.8960308,
   0.9157487,
   0.9279428,
   0.9375573,
   0.9502589,
   0.9575664,
   0.96916,
   0.9730016,
   0.9789199,
   0.9814364,
   0.9846381,
   0.9892675,
   0.9957687,
   0.9969933,
   0.9982026};
   Double_t Graph_fy894[28] = {
   0.2546316,
   0.5666281,
   0.7349811,
   0.8307584,
   0.8867862,
   0.924322,
   0.9432398,
   0.9575838,
   0.9678032,
   0.9733315,
   0.9789573,
   0.9828852,
   0.9863329,
   0.9892405,
   0.9903511,
   0.9907674,
   0.9933623,
   0.9941489,
   0.9944718,
   0.9951635,
   0.9960555,
   0.996869,
   0.9971615,
   0.9975913,
   0.9988734,
   0.9994941,
   0.9995483,
   0.9995827};
   graph = new TGraph(28,Graph_fx894,Graph_fy894);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph894 = new TH1F("Graph_Graph894","Mass-Matching Prioritized",100,0.01320212,1.087748);
   Graph_Graph894->SetMinimum(0.1801365);
   Graph_Graph894->SetMaximum(1.074078);
   Graph_Graph894->SetDirectory(0);
   Graph_Graph894->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph894->SetLineColor(ci);
   Graph_Graph894->GetXaxis()->SetLabelFont(42);
   Graph_Graph894->GetXaxis()->SetTitleOffset(1);
   Graph_Graph894->GetXaxis()->SetTitleFont(42);
   Graph_Graph894->GetYaxis()->SetLabelFont(42);
   Graph_Graph894->GetYaxis()->SetTitleFont(42);
   Graph_Graph894->GetZaxis()->SetLabelFont(42);
   Graph_Graph894->GetZaxis()->SetTitleOffset(1);
   Graph_Graph894->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph894);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx895[28] = {
   0.08647198,
   0.2230158,
   0.3399601,
   0.4283999,
   0.5005661,
   0.5608945,
   0.6144716,
   0.6601028,
   0.7045003,
   0.7364993,
   0.7701626,
   0.7979236,
   0.8238304,
   0.8486473,
   0.8684878,
   0.8872888,
   0.9016578,
   0.9169641,
   0.9288946,
   0.9414469,
   0.9510585,
   0.9590823,
   0.967612,
   0.9737007,
   0.9799414,
   0.9856806,
   0.9898897,
   0.9947994};
   Double_t Graph_fy895[28] = {
   0.1451571,
   0.3492557,
   0.4829876,
   0.5789252,
   0.6507053,
   0.7014789,
   0.7448492,
   0.7771959,
   0.8065236,
   0.8314523,
   0.8533002,
   0.8721015,
   0.8882005,
   0.9020369,
   0.9145243,
   0.9262543,
   0.936407,
   0.9451172,
   0.9517324,
   0.9591558,
   0.9663652,
   0.9727033,
   0.9775934,
   0.9823831,
   0.9864399,
   0.9907842,
   0.9933802,
   0.995934};
   graph = new TGraph(28,Graph_fx895,Graph_fy895);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph895 = new TH1F("Graph_Graph895","Tagging Prioritized",100,0,1.085632);
   Graph_Graph895->SetMinimum(0.06007945);
   Graph_Graph895->SetMaximum(1.081012);
   Graph_Graph895->SetDirectory(0);
   Graph_Graph895->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph895->SetLineColor(ci);
   Graph_Graph895->GetXaxis()->SetLabelFont(42);
   Graph_Graph895->GetXaxis()->SetTitleOffset(1);
   Graph_Graph895->GetXaxis()->SetTitleFont(42);
   Graph_Graph895->GetYaxis()->SetLabelFont(42);
   Graph_Graph895->GetYaxis()->SetTitleFont(42);
   Graph_Graph895->GetZaxis()->SetLabelFont(42);
   Graph_Graph895->GetZaxis()->SetTitleOffset(1);
   Graph_Graph895->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph895);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(0.04088545, 1.043789);
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_dR_HZ_17->Modified();
   ROC_dR_HZ_17->cd();
   ROC_dR_HZ_17->SetSelected(ROC_dR_HZ_17);
}
