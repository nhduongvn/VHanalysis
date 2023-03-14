#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj1_18/ROC_Z_dR_Bj1_18
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj1_18 = new TCanvas("ROC_Z_dR_Bj1_18", "ROC_Z_dR_Bj1_18",0,0,600,600);
   ROC_Z_dR_Bj1_18->SetHighLightColor(2);
   ROC_Z_dR_Bj1_18->Range(-0.2901855,-0.1615385,1.238785,1.184615);
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
   
   Double_t Graph_fx192[30] = {
   0,
   0.03745516,
   0.2051684,
   0.3452818,
   0.4583496,
   0.5515509,
   0.6243264,
   0.6918859,
   0.7407486,
   0.779952,
   0.816043,
   0.848848,
   0.8759432,
   0.9021228,
   0.9258543,
   0.9440802,
   0.9608747,
   0.9734313,
   0.9840701,
   0.9890484,
   0.9929837,
   0.9953085,
   0.996879,
   0.9978459,
   0.9985256,
   0.9990999,
   0.9994202,
   0.9997136,
   0.9999152,
   0.9999595};
   Double_t Graph_fy192[30] = {
   0,
   0.05148711,
   0.2636103,
   0.4826647,
   0.644314,
   0.7355629,
   0.7832874,
   0.8192178,
   0.8511352,
   0.8739699,
   0.8925697,
   0.9102115,
   0.925213,
   0.9422521,
   0.9557633,
   0.9689529,
   0.9821718,
   0.9875346,
   0.9925522,
   0.9955605,
   0.9966939,
   0.9976227,
   0.998125,
   0.9986565,
   0.9996904,
   0.9997488,
   0.9997488,
   0.9997781,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx192,Graph_fy192);
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
   
   TH1F *Graph_Graph192 = new TH1F("Graph_Graph192","Tagging Only",100,0,1.099955);
   Graph_Graph192->SetMinimum(0);
   Graph_Graph192->SetMaximum(1.1);
   Graph_Graph192->SetDirectory(0);
   Graph_Graph192->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph192->SetLineColor(ci);
   Graph_Graph192->GetXaxis()->SetLabelFont(42);
   Graph_Graph192->GetXaxis()->SetTitleOffset(1);
   Graph_Graph192->GetXaxis()->SetTitleFont(42);
   Graph_Graph192->GetYaxis()->SetLabelFont(42);
   Graph_Graph192->GetYaxis()->SetTitleFont(42);
   Graph_Graph192->GetZaxis()->SetLabelFont(42);
   Graph_Graph192->GetZaxis()->SetTitleOffset(1);
   Graph_Graph192->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph192);
   
   TLatex *   tex = new TLatex(0.204761,0.3640934,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(193);
      tex = new TLatex(0.3447508,0.6299353,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(194);
      tex = new TLatex(0.4897234,0.872293,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(195);
      tex = new TLatex(0.5885564,0.9232285,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(196);
      tex = new TLatex(0.6585832,0.9569063,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(197);
      tex = new TLatex(0.762864,0.9775585,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(198);
      tex = new TLatex(0.822483,0.9936217,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(199);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx200[30] = {
   0,
   7.656427e-05,
   0.1809991,
   0.3447508,
   0.4897234,
   0.5885564,
   0.6585832,
   0.762864,
   0.822483,
   0.860269,
   0.8883934,
   0.9115993,
   0.9296388,
   0.9469934,
   0.9593471,
   0.972227,
   0.9825349,
   0.9872139,
   0.9914475,
   0.9939255,
   0.9949441,
   0.996599,
   0.9976059,
   0.9977235,
   0.999651,
   0.9996935,
   0.9999515,
   0.9999768,
   0.9999803,
   0.9999907};
   Double_t Graph_fy200[30] = {
   0,
   0,
   0.1800108,
   0.5299353,
   0.772293,
   0.8832285,
   0.9169063,
   0.9375585,
   0.9536217,
   0.9602232,
   0.9664522,
   0.972637,
   0.9782101,
   0.9828434,
   0.9862092,
   0.9911262,
   0.9946013,
   0.9963063,
   0.997574,
   0.9997813,
   0.9997813,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx200,Graph_fy200);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph200 = new TH1F("Graph_Graph200","Mass-Matching Prioritized",100,0,1.09999);
   Graph_Graph200->SetMinimum(0);
   Graph_Graph200->SetMaximum(1.1);
   Graph_Graph200->SetDirectory(0);
   Graph_Graph200->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph200->SetLineColor(ci);
   Graph_Graph200->GetXaxis()->SetLabelFont(42);
   Graph_Graph200->GetXaxis()->SetTitleOffset(1);
   Graph_Graph200->GetXaxis()->SetTitleFont(42);
   Graph_Graph200->GetYaxis()->SetLabelFont(42);
   Graph_Graph200->GetYaxis()->SetTitleFont(42);
   Graph_Graph200->GetZaxis()->SetLabelFont(42);
   Graph_Graph200->GetZaxis()->SetTitleOffset(1);
   Graph_Graph200->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph200);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx201[30] = {
   0,
   0.03739992,
   0.204761,
   0.3452131,
   0.4585176,
   0.5519859,
   0.6242064,
   0.6916511,
   0.7405677,
   0.7798797,
   0.8160389,
   0.8489913,
   0.8761035,
   0.9021978,
   0.92594,
   0.9442573,
   0.9610124,
   0.9735782,
   0.984141,
   0.9890809,
   0.9929415,
   0.9952855,
   0.996882,
   0.9978422,
   0.9985466,
   0.9991117,
   0.999427,
   0.9997182,
   0.9999164,
   0.9999602};
   Double_t Graph_fy201[30] = {
   0,
   0.05221175,
   0.2640934,
   0.4836443,
   0.6447254,
   0.7369115,
   0.7837748,
   0.8199884,
   0.8520512,
   0.875097,
   0.8934995,
   0.9111519,
   0.9261305,
   0.9429918,
   0.956292,
   0.9694661,
   0.9823081,
   0.9875931,
   0.9924825,
   0.9954597,
   0.9967595,
   0.9976699,
   0.9981622,
   0.9986832,
   0.9996965,
   0.9997538,
   0.9997538,
   0.9997825,
   1,
   1};
   graph = new TGraph(30,Graph_fx201,Graph_fy201);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph201 = new TH1F("Graph_Graph201","Tagging Prioritized",100,0,1.099956);
   Graph_Graph201->SetMinimum(0);
   Graph_Graph201->SetMaximum(1.1);
   Graph_Graph201->SetDirectory(0);
   Graph_Graph201->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph201->SetLineColor(ci);
   Graph_Graph201->GetXaxis()->SetLabelFont(42);
   Graph_Graph201->GetXaxis()->SetTitleOffset(1);
   Graph_Graph201->GetXaxis()->SetTitleFont(42);
   Graph_Graph201->GetYaxis()->SetLabelFont(42);
   Graph_Graph201->GetYaxis()->SetTitleFont(42);
   Graph_Graph201->GetZaxis()->SetLabelFont(42);
   Graph_Graph201->GetZaxis()->SetTitleOffset(1);
   Graph_Graph201->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph201);
   
   multigraph->Add(graph,"");
   multigraph->Draw("ALP");
   multigraph->GetXaxis()->SetLimits(-0.04999954, 1.04999);
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
