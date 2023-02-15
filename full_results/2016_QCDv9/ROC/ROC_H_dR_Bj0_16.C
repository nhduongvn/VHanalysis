#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj0_16/ROC_H_dR_Bj0_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj0_16 = new TCanvas("ROC_H_dR_Bj0_16", "ROC_H_dR_Bj0_16",0,0,600,600);
   ROC_H_dR_Bj0_16->SetHighLightColor(2);
   ROC_H_dR_Bj0_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj0_16->SetFillColor(0);
   ROC_H_dR_Bj0_16->SetBorderMode(0);
   ROC_H_dR_Bj0_16->SetBorderSize(2);
   ROC_H_dR_Bj0_16->SetGridx();
   ROC_H_dR_Bj0_16->SetGridy();
   ROC_H_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_H_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_H_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_H_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx43[30] = {
   0,
   0.03472525,
   0.1572986,
   0.281862,
   0.3876313,
   0.4727592,
   0.5450071,
   0.6096807,
   0.6635308,
   0.7134999,
   0.7543719,
   0.7891462,
   0.8232674,
   0.850428,
   0.8781512,
   0.9049859,
   0.9274902,
   0.9467298,
   0.960114,
   0.9713663,
   0.9782763,
   0.983264,
   0.9878521,
   0.9916181,
   0.994882,
   0.9963965,
   0.9981613,
   0.9987309,
   0.9990535,
   0.9999499};
   Double_t Graph_fy43[30] = {
   0,
   0.03529288,
   0.1602063,
   0.3115924,
   0.4421814,
   0.5507966,
   0.6344448,
   0.705553,
   0.7629532,
   0.8041592,
   0.8363549,
   0.8669638,
   0.8930859,
   0.9133542,
   0.9348031,
   0.9509818,
   0.9704293,
   0.9794395,
   0.9854438,
   0.9902484,
   0.9939071,
   0.9951945,
   0.9969403,
   0.9976105,
   0.9987391,
   0.9993828,
   0.9998411,
   0.9999206,
   0.9999206,
   0.9999735};
   TGraph *graph = new TGraph(30,Graph_fx43,Graph_fy43);
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
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","Tagging Only",100,0,1.099945);
   Graph_Graph43->SetMinimum(0);
   Graph_Graph43->SetMaximum(1.099971);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetTitleOffset(1);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetTitleOffset(1);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph43);
   
   TLatex *   tex = new TLatex(0.3720779,0.501747,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(44);
      tex = new TLatex(0.6002421,0.7785636,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(45);
      tex = new TLatex(0.729828,0.8755175,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(46);
      tex = new TLatex(0.8199214,0.9636326,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(47);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx48[30] = {
   0,
   0.1101494,
   0.3720779,
   0.6002421,
   0.729828,
   0.8199214,
   0.8763821,
   0.9094815,
   0.932361,
   0.9543322,
   0.9663814,
   0.9725937,
   0.9819038,
   0.9835991,
   0.9904317,
   0.9919174,
   0.9925575,
   0.9931885,
   0.9990108,
   0.999104,
   0.999555,
   0.9999764,
   0.9999809,
   0.9999824,
   0.9999917,
   0.9999927,
   0.9999992,
   0.9999995,
   0.9999997,
   0.9999999};
   Double_t Graph_fy48[30] = {
   0,
   0.1022745,
   0.401747,
   0.6785636,
   0.8355175,
   0.9236326,
   0.9599509,
   0.9776592,
   0.9873062,
   0.9919387,
   0.9945547,
   0.9966555,
   0.9966555,
   0.9977704,
   0.999014,
   0.999014,
   0.999014,
   0.999014,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx48,Graph_fy48);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph48->SetMinimum(0);
   Graph_Graph48->SetMaximum(1.1);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph48->SetLineColor(ci);
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetTitleOffset(1);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetTitleOffset(1);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph48);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx49[30] = {
   0,
   0.03479084,
   0.1580208,
   0.2821276,
   0.3874627,
   0.4731775,
   0.5453956,
   0.6097155,
   0.6637109,
   0.71294,
   0.7537461,
   0.7884459,
   0.8231227,
   0.8502582,
   0.8778025,
   0.9052808,
   0.9276138,
   0.9468206,
   0.9601803,
   0.9714126,
   0.9783275,
   0.9832955,
   0.9878252,
   0.9916381,
   0.9948717,
   0.9963966,
   0.9981286,
   0.998697,
   0.9990134,
   0.999941};
   Double_t Graph_fy49[30] = {
   0,
   0.03553909,
   0.1594833,
   0.3105443,
   0.4407998,
   0.5505212,
   0.6337343,
   0.7040502,
   0.7616448,
   0.8042505,
   0.8372613,
   0.8678495,
   0.8935766,
   0.9138492,
   0.9351004,
   0.9511134,
   0.9703887,
   0.979271,
   0.9850698,
   0.9902236,
   0.9938658,
   0.9953177,
   0.9970188,
   0.9976718,
   0.9987714,
   0.9993986,
   0.9998452,
   0.9999226,
   0.9999226,
   0.9999742};
   graph = new TGraph(30,Graph_fx49,Graph_fy49);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","Tagging Prioritized",100,0,1.099935);
   Graph_Graph49->SetMinimum(0);
   Graph_Graph49->SetMaximum(1.099972);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph49->SetLineColor(ci);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetTitleOffset(1);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetTitleOffset(1);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph49);
   
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
   ROC_H_dR_Bj0_16->Modified();
   ROC_H_dR_Bj0_16->cd();
   ROC_H_dR_Bj0_16->SetSelected(ROC_H_dR_Bj0_16);
}
