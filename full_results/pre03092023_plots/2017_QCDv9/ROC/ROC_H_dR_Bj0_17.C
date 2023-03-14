#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_17()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_17/ROC_H_dR_Bj0_17
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_17 = new TCanvas("ROC_H_dR_Bj0_17", "ROC_H_dR_Bj0_17",0,0,600,600);
   ROC_H_dR_Bj0_17->SetHighLightColor(2);
   ROC_H_dR_Bj0_17->Range(-0.2901386,-0.1615385,1.238585,1.184615);
   ROC_H_dR_Bj0_17->SetFillColor(0);
   ROC_H_dR_Bj0_17->SetBorderMode(0);
   ROC_H_dR_Bj0_17->SetBorderSize(2);
   ROC_H_dR_Bj0_17->SetGridx();
   ROC_H_dR_Bj0_17->SetGridy();
   ROC_H_dR_Bj0_17->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_17->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_17->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx51[30] = {
   0,
   0.02730995,
   0.1413461,
   0.2698158,
   0.3741904,
   0.4665757,
   0.5408415,
   0.6014936,
   0.6542951,
   0.6984282,
   0.743374,
   0.7794666,
   0.811215,
   0.841816,
   0.8727666,
   0.8997253,
   0.9260469,
   0.9456393,
   0.9593338,
   0.9706578,
   0.9814003,
   0.9864812,
   0.9918598,
   0.9940508,
   0.9964618,
   0.9980036,
   0.999164,
   0.999468,
   0.9996745,
   0.9998272};
   Double_t Graph_fy51[30] = {
   0,
   0.02731099,
   0.1676981,
   0.3459734,
   0.4904583,
   0.6052069,
   0.6899774,
   0.7488381,
   0.7915347,
   0.8266607,
   0.853119,
   0.8801942,
   0.904046,
   0.9224904,
   0.9413886,
   0.9579041,
   0.9711591,
   0.9797022,
   0.9862957,
   0.9915799,
   0.9952184,
   0.9962651,
   0.9971147,
   0.9980443,
   0.9992468,
   0.9995567,
   0.9999733,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx51,Graph_fy51);
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
   
   TH1F *Graph_Graph51 = new TH1F("Graph_Graph51","Tagging Only",100,0,1.09981);
   Graph_Graph51->SetMinimum(0);
   Graph_Graph51->SetMaximum(1.1);
   Graph_Graph51->SetDirectory(0);
   Graph_Graph51->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph51->SetLineColor(ci);
   Graph_Graph51->GetXaxis()->SetLabelFont(42);
   Graph_Graph51->GetXaxis()->SetTitleOffset(1);
   Graph_Graph51->GetXaxis()->SetTitleFont(42);
   Graph_Graph51->GetYaxis()->SetLabelFont(42);
   Graph_Graph51->GetYaxis()->SetTitleFont(42);
   Graph_Graph51->GetZaxis()->SetLabelFont(42);
   Graph_Graph51->GetZaxis()->SetTitleOffset(1);
   Graph_Graph51->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph51);
   
   TLatex *   tex = new TLatex(0.3435448,0.5444869,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(52);
      tex = new TLatex(0.5689732,0.8365078,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(53);
      tex = new TLatex(0.7147126,0.9174946,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(54);
      tex = new TLatex(0.8054522,0.9747311,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(55);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx56[30] = {
   0,
   0.08446367,
   0.3435448,
   0.5689732,
   0.7147126,
   0.8054522,
   0.8745666,
   0.9054806,
   0.9284331,
   0.9418478,
   0.9521364,
   0.9577296,
   0.9667063,
   0.9722602,
   0.9767947,
   0.9824118,
   0.9843624,
   0.9848201,
   0.9985173,
   0.9985836,
   0.998648,
   0.9986817,
   0.9987164,
   0.9987415,
   0.9987715,
   0.9987746,
   0.9987766,
   0.9989917,
   0.9989923,
   0.9989928};
   Double_t Graph_fy56[30] = {
   0,
   0.09164753,
   0.4444869,
   0.7365078,
   0.8774946,
   0.9347311,
   0.9640233,
   0.9783384,
   0.9848339,
   0.9893494,
   0.9949526,
   0.9989362,
   0.999149,
   0.9993617,
   0.9994681,
   0.9995745,
   0.9995745,
   0.9996809,
   0.9996809,
   0.9997872,
   0.9997872,
   0.9998936,
   0.9998936,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx56,Graph_fy56);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph56 = new TH1F("Graph_Graph56","Mass-Matching Prioritized",100,0,1.098892);
   Graph_Graph56->SetMinimum(0);
   Graph_Graph56->SetMaximum(1.1);
   Graph_Graph56->SetDirectory(0);
   Graph_Graph56->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph56->SetLineColor(ci);
   Graph_Graph56->GetXaxis()->SetLabelFont(42);
   Graph_Graph56->GetXaxis()->SetTitleOffset(1);
   Graph_Graph56->GetXaxis()->SetTitleFont(42);
   Graph_Graph56->GetYaxis()->SetLabelFont(42);
   Graph_Graph56->GetYaxis()->SetTitleFont(42);
   Graph_Graph56->GetZaxis()->SetLabelFont(42);
   Graph_Graph56->GetZaxis()->SetTitleOffset(1);
   Graph_Graph56->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph56);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx57[30] = {
   0,
   0.02742135,
   0.1415299,
   0.2699628,
   0.3747295,
   0.4668527,
   0.5412016,
   0.6015988,
   0.654169,
   0.6985726,
   0.7437022,
   0.7798608,
   0.8117747,
   0.842531,
   0.87342,
   0.900189,
   0.926339,
   0.9458418,
   0.9593389,
   0.970548,
   0.981321,
   0.9863851,
   0.9917228,
   0.9939026,
   0.9964922,
   0.9980193,
   0.9991716,
   0.99947,
   0.9996761,
   0.9998291};
   Double_t Graph_fy57[30] = {
   0,
   0.02739181,
   0.1696032,
   0.348088,
   0.491162,
   0.6048558,
   0.6894554,
   0.7478894,
   0.7913869,
   0.8268178,
   0.8534002,
   0.8795558,
   0.9032911,
   0.9221425,
   0.9412655,
   0.9578449,
   0.9714128,
   0.9802335,
   0.986772,
   0.9919755,
   0.9955142,
   0.9965397,
   0.9971731,
   0.9980839,
   0.9992882,
   0.9995918,
   0.9999739,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx57,Graph_fy57);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph57 = new TH1F("Graph_Graph57","Tagging Prioritized",100,0,1.099812);
   Graph_Graph57->SetMinimum(0);
   Graph_Graph57->SetMaximum(1.1);
   Graph_Graph57->SetDirectory(0);
   Graph_Graph57->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph57->SetLineColor(ci);
   Graph_Graph57->GetXaxis()->SetLabelFont(42);
   Graph_Graph57->GetXaxis()->SetTitleOffset(1);
   Graph_Graph57->GetXaxis()->SetTitleFont(42);
   Graph_Graph57->GetYaxis()->SetLabelFont(42);
   Graph_Graph57->GetYaxis()->SetTitleFont(42);
   Graph_Graph57->GetZaxis()->SetLabelFont(42);
   Graph_Graph57->GetZaxis()->SetTitleOffset(1);
   Graph_Graph57->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph57);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999145, 1.049821);
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
   ROC_H_dR_Bj0_17->Modified();
   ROC_H_dR_Bj0_17->cd();
   ROC_H_dR_Bj0_17->SetSelected(ROC_H_dR_Bj0_17);
}
