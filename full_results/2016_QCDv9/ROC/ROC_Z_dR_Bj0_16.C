#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_Bj0_16()
{
//=========Macro generated from canvas: ROC_Z_dR_Bj0_16/ROC_Z_dR_Bj0_16
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_Bj0_16 = new TCanvas("ROC_Z_dR_Bj0_16", "ROC_Z_dR_Bj0_16",0,0,600,600);
   ROC_Z_dR_Bj0_16->SetHighLightColor(2);
   ROC_Z_dR_Bj0_16->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_Bj0_16->SetFillColor(0);
   ROC_Z_dR_Bj0_16->SetBorderMode(0);
   ROC_Z_dR_Bj0_16->SetBorderSize(2);
   ROC_Z_dR_Bj0_16->SetGridx();
   ROC_Z_dR_Bj0_16->SetGridy();
   ROC_Z_dR_Bj0_16->SetLeftMargin(0.15709);
   ROC_Z_dR_Bj0_16->SetRightMargin(0.1234783);
   ROC_Z_dR_Bj0_16->SetBottomMargin(0.12);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   ROC_Z_dR_Bj0_16->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx149[30] = {
   0,
   0.03861871,
   0.2150121,
   0.3672747,
   0.4818767,
   0.5684869,
   0.636858,
   0.6921127,
   0.7396301,
   0.7754502,
   0.8082911,
   0.8400849,
   0.8684858,
   0.8909881,
   0.9157338,
   0.9351195,
   0.9507407,
   0.9661761,
   0.9800936,
   0.9871114,
   0.9911811,
   0.9944492,
   0.9960744,
   0.9975862,
   0.9987155,
   0.9995434,
   0.9997262,
   0.9999101,
   0.9999593,
   0.9999853};
   Double_t Graph_fy149[30] = {
   0,
   0.0561765,
   0.2675511,
   0.4906507,
   0.6377232,
   0.7202234,
   0.7764211,
   0.8140098,
   0.8436629,
   0.8701182,
   0.8919506,
   0.9076411,
   0.9254142,
   0.9391537,
   0.9532313,
   0.9703469,
   0.9822716,
   0.9899795,
   0.9930176,
   0.9961003,
   0.9977555,
   0.9986171,
   0.9992064,
   0.9992064,
   0.9994107,
   0.9994107,
   0.9994107,
   0.9994788,
   0.9994788,
   1};
   TGraph *graph = new TGraph(30,Graph_fx149,Graph_fy149);
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
   
   TH1F *Graph_Graph149 = new TH1F("Graph_Graph149","Tagging Only",100,0,1.099984);
   Graph_Graph149->SetMinimum(0);
   Graph_Graph149->SetMaximum(1.1);
   Graph_Graph149->SetDirectory(0);
   Graph_Graph149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph149->SetLineColor(ci);
   Graph_Graph149->GetXaxis()->SetLabelFont(42);
   Graph_Graph149->GetXaxis()->SetTitleOffset(1);
   Graph_Graph149->GetXaxis()->SetTitleFont(42);
   Graph_Graph149->GetYaxis()->SetLabelFont(42);
   Graph_Graph149->GetYaxis()->SetTitleFont(42);
   Graph_Graph149->GetZaxis()->SetLabelFont(42);
   Graph_Graph149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph149->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph149);
   
   TLatex *   tex = new TLatex(0.392721,0.6022401,"0.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(150);
      tex = new TLatex(0.5794763,0.8553904,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(151);
      tex = new TLatex(0.7010028,0.9856361,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(152);
      tex = new TLatex(0.7989603,1.012912,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(153);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx154[30] = {
   0,
   0.07408979,
   0.392721,
   0.5794763,
   0.7010028,
   0.7989603,
   0.8704034,
   0.9028584,
   0.9296907,
   0.9473082,
   0.961407,
   0.9744852,
   0.9813194,
   0.9866799,
   0.9887518,
   0.9905254,
   0.9935471,
   0.9943734,
   0.9965834,
   0.9966938,
   0.9974074,
   0.9995301,
   0.9999309,
   0.9999474,
   0.9999813,
   0.9999943,
   0.9999965,
   0.9999978,
   0.999999,
   0.9999996};
   Double_t Graph_fy154[30] = {
   0,
   0.09722109,
   0.5022401,
   0.8153904,
   0.9456361,
   0.9729122,
   0.9863124,
   0.9932999,
   0.9963625,
   0.99665,
   0.9991377,
   0.9997126,
   0.9997126,
   0.9997126,
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
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx154,Graph_fy154);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph154 = new TH1F("Graph_Graph154","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph154->SetMinimum(0);
   Graph_Graph154->SetMaximum(1.1);
   Graph_Graph154->SetDirectory(0);
   Graph_Graph154->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph154->SetLineColor(ci);
   Graph_Graph154->GetXaxis()->SetLabelFont(42);
   Graph_Graph154->GetXaxis()->SetTitleOffset(1);
   Graph_Graph154->GetXaxis()->SetTitleFont(42);
   Graph_Graph154->GetYaxis()->SetLabelFont(42);
   Graph_Graph154->GetYaxis()->SetTitleFont(42);
   Graph_Graph154->GetZaxis()->SetLabelFont(42);
   Graph_Graph154->GetZaxis()->SetTitleOffset(1);
   Graph_Graph154->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph154);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx155[30] = {
   0,
   0.03861179,
   0.2147071,
   0.3667213,
   0.4811195,
   0.5674727,
   0.636026,
   0.6910607,
   0.7386265,
   0.7744723,
   0.8071151,
   0.8389046,
   0.8672827,
   0.8898435,
   0.9148375,
   0.9344022,
   0.9503349,
   0.9659133,
   0.980089,
   0.9871696,
   0.99127,
   0.9945038,
   0.9961187,
   0.9976161,
   0.9987288,
   0.9995424,
   0.9997226,
   0.9999052,
   0.9999599,
   0.9999855};
   Double_t Graph_fy155[30] = {
   0,
   0.05642826,
   0.2681538,
   0.4904163,
   0.6383547,
   0.7234006,
   0.7788026,
   0.8168827,
   0.8462776,
   0.8718857,
   0.8919289,
   0.9073412,
   0.9248661,
   0.9384289,
   0.9523238,
   0.969648,
   0.9818063,
   0.9892439,
   0.992295,
   0.9954568,
   0.9975946,
   0.998441,
   0.9990867,
   0.9990867,
   0.9994211,
   0.9994211,
   0.9994211,
   0.999488,
   0.999488,
   1};
   graph = new TGraph(30,Graph_fx155,Graph_fy155);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph155 = new TH1F("Graph_Graph155","Tagging Prioritized",100,0,1.099984);
   Graph_Graph155->SetMinimum(0);
   Graph_Graph155->SetMaximum(1.1);
   Graph_Graph155->SetDirectory(0);
   Graph_Graph155->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph155->SetLineColor(ci);
   Graph_Graph155->GetXaxis()->SetLabelFont(42);
   Graph_Graph155->GetXaxis()->SetTitleOffset(1);
   Graph_Graph155->GetXaxis()->SetTitleFont(42);
   Graph_Graph155->GetYaxis()->SetLabelFont(42);
   Graph_Graph155->GetYaxis()->SetTitleFont(42);
   Graph_Graph155->GetZaxis()->SetLabelFont(42);
   Graph_Graph155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph155->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph155);
   
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
   ROC_Z_dR_Bj0_16->Modified();
   ROC_Z_dR_Bj0_16->cd();
   ROC_Z_dR_Bj0_16->SetSelected(ROC_Z_dR_Bj0_16);
}
