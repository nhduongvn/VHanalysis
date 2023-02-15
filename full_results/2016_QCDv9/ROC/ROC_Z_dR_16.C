#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_16()
{
//=========Macro generated from canvas: ROC_Z_dR_16/ROC_Z_dR_16
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_16 = new TCanvas("ROC_Z_dR_16", "ROC_Z_dR_16",0,0,600,600);
   ROC_Z_dR_16->SetHighLightColor(2);
   ROC_Z_dR_16->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_16->SetFillColor(0);
   ROC_Z_dR_16->SetBorderMode(0);
   ROC_Z_dR_16->SetBorderSize(2);
   ROC_Z_dR_16->SetGridx();
   ROC_Z_dR_16->SetGridy();
   ROC_Z_dR_16->SetLeftMargin(0.15709);
   ROC_Z_dR_16->SetRightMargin(0.1234783);
   ROC_Z_dR_16->SetBottomMargin(0.12);
   ROC_Z_dR_16->SetFrameBorderMode(0);
   ROC_Z_dR_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx106[30] = {
   0,
   0,
   3.563638e-05,
   0.07271703,
   0.160411,
   0.2314226,
   0.2903641,
   0.3447979,
   0.3962956,
   0.4518421,
   0.5034089,
   0.5526107,
   0.603824,
   0.6602532,
   0.7235149,
   0.802241,
   0.8774961,
   0.9204782,
   0.9447105,
   0.964566,
   0.9753759,
   0.9844985,
   0.9920119,
   0.995481,
   0.9975755,
   0.9991833,
   0.999882,
   0.9999861,
   1,
   1};
   Double_t Graph_fy106[30] = {
   0,
   0,
   2.660433e-05,
   0.04143834,
   0.1284291,
   0.2287368,
   0.3298929,
   0.4230912,
   0.5058747,
   0.573347,
   0.6324943,
   0.685554,
   0.7349275,
   0.7867267,
   0.8416455,
   0.8965166,
   0.9547141,
   0.9775054,
   0.9866692,
   0.9918902,
   0.9959661,
   0.9979139,
   0.9991896,
   0.9994463,
   0.9995751,
   0.9998295,
   0.9998295,
   0.9999242,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx106,Graph_fy106);
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
   
   TH1F *Graph_Graph106 = new TH1F("Graph_Graph106","Tagging Only",100,0,1.1);
   Graph_Graph106->SetMinimum(0);
   Graph_Graph106->SetMaximum(1.1);
   Graph_Graph106->SetDirectory(0);
   Graph_Graph106->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph106->SetLineColor(ci);
   Graph_Graph106->GetXaxis()->SetLabelFont(42);
   Graph_Graph106->GetXaxis()->SetTitleOffset(1);
   Graph_Graph106->GetXaxis()->SetTitleFont(42);
   Graph_Graph106->GetYaxis()->SetLabelFont(42);
   Graph_Graph106->GetYaxis()->SetTitleFont(42);
   Graph_Graph106->GetZaxis()->SetLabelFont(42);
   Graph_Graph106->GetZaxis()->SetTitleOffset(1);
   Graph_Graph106->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph106);
   
   TLatex *   tex = new TLatex(0.2447288,0.2919407,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(107);
      tex = new TLatex(0.3579528,0.4425798,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(108);
      tex = new TLatex(0.4449372,0.5977246,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(109);
      tex = new TLatex(0.5175774,0.7363529,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(110);
      tex = new TLatex(0.5971996,0.8464087,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(111);
      tex = new TLatex(0.6773049,0.8767071,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(112);
      tex = new TLatex(0.7364948,0.9181221,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(113);
      tex = new TLatex(0.7821141,0.9537957,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(114);
      tex = new TLatex(0.8252271,0.9784141,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(115);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx116[30] = {
   0,
   0,
   9.451076e-06,
   0.1081871,
   0.2447288,
   0.3579528,
   0.4449372,
   0.5175774,
   0.5971996,
   0.6773049,
   0.7364948,
   0.7821141,
   0.8252271,
   0.8616994,
   0.9041984,
   0.9336217,
   0.956704,
   0.9726108,
   0.9816241,
   0.9879392,
   0.9965455,
   0.9986271,
   0.9991902,
   0.9994036,
   0.9998854,
   0.9999905,
   0.9999965,
   1,
   1,
   1};
   Double_t Graph_fy116[30] = {
   0,
   0,
   0.0001304804,
   0.06235953,
   0.1919407,
   0.3425798,
   0.4977246,
   0.6363529,
   0.7464087,
   0.8367071,
   0.8781221,
   0.9137957,
   0.9384141,
   0.957921,
   0.9701468,
   0.984819,
   0.9940818,
   0.994624,
   0.9976,
   0.9977184,
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
   graph = new TGraph(30,Graph_fx116,Graph_fy116);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph116 = new TH1F("Graph_Graph116","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph116->SetMinimum(0);
   Graph_Graph116->SetMaximum(1.1);
   Graph_Graph116->SetDirectory(0);
   Graph_Graph116->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph116->SetLineColor(ci);
   Graph_Graph116->GetXaxis()->SetLabelFont(42);
   Graph_Graph116->GetXaxis()->SetTitleOffset(1);
   Graph_Graph116->GetXaxis()->SetTitleFont(42);
   Graph_Graph116->GetYaxis()->SetLabelFont(42);
   Graph_Graph116->GetYaxis()->SetTitleFont(42);
   Graph_Graph116->GetZaxis()->SetLabelFont(42);
   Graph_Graph116->GetZaxis()->SetTitleOffset(1);
   Graph_Graph116->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph116);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx117[30] = {
   0,
   0,
   3.491421e-05,
   0.07245979,
   0.1595772,
   0.2300595,
   0.2896166,
   0.3436268,
   0.3948766,
   0.4500949,
   0.5015736,
   0.5507995,
   0.6028903,
   0.6590761,
   0.7222191,
   0.8007471,
   0.8760738,
   0.9196174,
   0.9438671,
   0.963956,
   0.9747358,
   0.9838376,
   0.9912782,
   0.9954654,
   0.9975519,
   0.9991489,
   0.9998354,
   0.9999377,
   1,
   1};
   Double_t Graph_fy117[30] = {
   0,
   0,
   2.593744e-05,
   0.04164578,
   0.1299441,
   0.2300923,
   0.3319337,
   0.4249193,
   0.5070298,
   0.5744749,
   0.6325406,
   0.6865386,
   0.7371141,
   0.7890095,
   0.8439068,
   0.8974868,
   0.9538323,
   0.976853,
   0.9859822,
   0.9917517,
   0.9958304,
   0.997753,
   0.9989732,
   0.9994484,
   0.9995858,
   0.9998338,
   0.9998338,
   0.9999261,
   1,
   1};
   graph = new TGraph(30,Graph_fx117,Graph_fy117);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph117 = new TH1F("Graph_Graph117","Tagging Prioritized",100,0,1.1);
   Graph_Graph117->SetMinimum(0);
   Graph_Graph117->SetMaximum(1.1);
   Graph_Graph117->SetDirectory(0);
   Graph_Graph117->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph117->SetLineColor(ci);
   Graph_Graph117->GetXaxis()->SetLabelFont(42);
   Graph_Graph117->GetXaxis()->SetTitleOffset(1);
   Graph_Graph117->GetXaxis()->SetTitleFont(42);
   Graph_Graph117->GetYaxis()->SetLabelFont(42);
   Graph_Graph117->GetYaxis()->SetTitleFont(42);
   Graph_Graph117->GetZaxis()->SetLabelFont(42);
   Graph_Graph117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph117->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph117);
   
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
   ROC_Z_dR_16->Modified();
   ROC_Z_dR_16->cd();
   ROC_Z_dR_16->SetSelected(ROC_Z_dR_16);
}
