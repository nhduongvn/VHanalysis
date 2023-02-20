#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_16()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_16/ROC_H_dR_Bj1_16
//=========  (Sun Feb 19 15:09:24 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_16 = new TCanvas("ROC_H_dR_Bj1_16", "ROC_H_dR_Bj1_16",0,0,600,600);
   ROC_H_dR_Bj1_16->SetHighLightColor(2);
   ROC_H_dR_Bj1_16->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_16->SetFillColor(0);
   ROC_H_dR_Bj1_16->SetBorderMode(0);
   ROC_H_dR_Bj1_16->SetBorderSize(2);
   ROC_H_dR_Bj1_16->SetGridx();
   ROC_H_dR_Bj1_16->SetGridy();
   ROC_H_dR_Bj1_16->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_16->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_16->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_16->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx66[30] = {
   0,
   0.03187356,
   0.1514222,
   0.2769826,
   0.3797261,
   0.4703139,
   0.542572,
   0.6077229,
   0.6611709,
   0.7069522,
   0.7459022,
   0.7831256,
   0.8174039,
   0.8482465,
   0.876331,
   0.9078344,
   0.9300072,
   0.9492227,
   0.9668722,
   0.9765884,
   0.9834324,
   0.9886096,
   0.9929057,
   0.9957724,
   0.9973286,
   0.9984263,
   0.9991231,
   0.9995935,
   0.999774,
   0.9999635};
   Double_t Graph_fy66[30] = {
   0,
   0.03312082,
   0.1669493,
   0.3292826,
   0.4860797,
   0.6109113,
   0.6929842,
   0.7483036,
   0.7957532,
   0.8255448,
   0.8532726,
   0.8760817,
   0.8987758,
   0.917819,
   0.9376558,
   0.9556331,
   0.9740636,
   0.9819311,
   0.9889136,
   0.9923367,
   0.9951024,
   0.997732,
   0.9985256,
   0.9989341,
   0.9991384,
   0.9998638,
   0.9998638,
   0.9998638,
   0.9999319,
   1};
   TGraph *graph = new TGraph(30,Graph_fx66,Graph_fy66);
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
   
   TH1F *Graph_Graph66 = new TH1F("Graph_Graph66","Tagging Only",100,0,1.09996);
   Graph_Graph66->SetMinimum(0);
   Graph_Graph66->SetMaximum(1.1);
   Graph_Graph66->SetDirectory(0);
   Graph_Graph66->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph66->SetLineColor(ci);
   Graph_Graph66->GetXaxis()->SetLabelFont(42);
   Graph_Graph66->GetXaxis()->SetTitleOffset(1);
   Graph_Graph66->GetXaxis()->SetTitleFont(42);
   Graph_Graph66->GetYaxis()->SetLabelFont(42);
   Graph_Graph66->GetYaxis()->SetTitleFont(42);
   Graph_Graph66->GetZaxis()->SetLabelFont(42);
   Graph_Graph66->GetZaxis()->SetTitleOffset(1);
   Graph_Graph66->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph66);
   
   TLatex *   tex = new TLatex(0.1515788,0.2680878,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(67);
      tex = new TLatex(0.2774076,0.4321303,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(68);
      tex = new TLatex(0.3806054,0.5884194,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(69);
      tex = new TLatex(0.4708725,0.7144442,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(70);
      tex = new TLatex(0.4171459,0.8642775,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(71);
      tex = new TLatex(0.5142115,0.8763432,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(72);
      tex = new TLatex(0.5766439,0.918645,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(73);
      tex = new TLatex(0.6352198,0.9488847,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(74);
      tex = new TLatex(0.6869197,0.9628597,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(75);
      tex = new TLatex(0.7294478,0.9825735,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(76);
      tex = new TLatex(0.7768039,0.9926236,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(77);
      tex = new TLatex(0.8198641,1.004587,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(78);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx79[30] = {
   0,
   7.283633e-07,
   0.06666788,
   0.1599242,
   0.2478494,
   0.3218253,
   0.4171459,
   0.5142115,
   0.5766439,
   0.6352198,
   0.6869197,
   0.7294478,
   0.7768039,
   0.8198641,
   0.8611782,
   0.8991338,
   0.9329357,
   0.9579128,
   0.9729116,
   0.9800562,
   0.9850949,
   0.9884831,
   0.9933904,
   0.9965958,
   0.9989418,
   0.9994896,
   0.999561,
   0.9996134,
   0.9999987,
   0.9999996};
   Double_t Graph_fy79[30] = {
   0,
   0,
   0.0216267,
   0.1630625,
   0.401164,
   0.6088569,
   0.7642775,
   0.8363432,
   0.878645,
   0.9088847,
   0.9228597,
   0.9425735,
   0.9526236,
   0.9645867,
   0.9718616,
   0.9782743,
   0.9902373,
   0.9941622,
   0.9972248,
   0.9972248,
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
   graph = new TGraph(30,Graph_fx79,Graph_fy79);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph79 = new TH1F("Graph_Graph79","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph79->SetMinimum(0);
   Graph_Graph79->SetMaximum(1.1);
   Graph_Graph79->SetDirectory(0);
   Graph_Graph79->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph79->SetLineColor(ci);
   Graph_Graph79->GetXaxis()->SetLabelFont(42);
   Graph_Graph79->GetXaxis()->SetTitleOffset(1);
   Graph_Graph79->GetXaxis()->SetTitleFont(42);
   Graph_Graph79->GetYaxis()->SetLabelFont(42);
   Graph_Graph79->GetYaxis()->SetTitleFont(42);
   Graph_Graph79->GetZaxis()->SetLabelFont(42);
   Graph_Graph79->GetZaxis()->SetTitleOffset(1);
   Graph_Graph79->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph79);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx80[30] = {
   0,
   0.03208554,
   0.1515788,
   0.2774076,
   0.3806054,
   0.4708725,
   0.5426944,
   0.6078548,
   0.6612951,
   0.7072155,
   0.7462186,
   0.7833091,
   0.8178114,
   0.848671,
   0.8766453,
   0.9079225,
   0.9300861,
   0.9494158,
   0.966906,
   0.9767817,
   0.9835616,
   0.9886715,
   0.9929208,
   0.9957591,
   0.997295,
   0.9983828,
   0.9990835,
   0.9995983,
   0.9997773,
   0.9999641};
   Double_t Graph_fy80[30] = {
   0,
   0.03382514,
   0.1680878,
   0.3321303,
   0.4884194,
   0.6144442,
   0.6960653,
   0.7508723,
   0.7971024,
   0.8267002,
   0.8532908,
   0.8758731,
   0.9002128,
   0.9190522,
   0.9383597,
   0.9565972,
   0.9752129,
   0.9830748,
   0.9889763,
   0.9924726,
   0.9951893,
   0.9977053,
   0.9984848,
   0.998953,
   0.9991536,
   0.9998662,
   0.9998662,
   0.9998662,
   0.9999331,
   1};
   graph = new TGraph(30,Graph_fx80,Graph_fy80);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph80 = new TH1F("Graph_Graph80","Tagging Prioritized",100,0,1.09996);
   Graph_Graph80->SetMinimum(0);
   Graph_Graph80->SetMaximum(1.1);
   Graph_Graph80->SetDirectory(0);
   Graph_Graph80->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph80->SetLineColor(ci);
   Graph_Graph80->GetXaxis()->SetLabelFont(42);
   Graph_Graph80->GetXaxis()->SetTitleOffset(1);
   Graph_Graph80->GetXaxis()->SetTitleFont(42);
   Graph_Graph80->GetYaxis()->SetLabelFont(42);
   Graph_Graph80->GetYaxis()->SetTitleFont(42);
   Graph_Graph80->GetZaxis()->SetLabelFont(42);
   Graph_Graph80->GetZaxis()->SetTitleOffset(1);
   Graph_Graph80->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph80);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999998, 1.05);
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
   ROC_H_dR_Bj1_16->Modified();
   ROC_H_dR_Bj1_16->cd();
   ROC_H_dR_Bj1_16->SetSelected(ROC_H_dR_Bj1_16);
}
