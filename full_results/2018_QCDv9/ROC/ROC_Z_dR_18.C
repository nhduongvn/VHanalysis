#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Z_dR_18()
{
//=========Macro generated from canvas: ROC_Z_dR_18/ROC_Z_dR_18
//=========  (Thu Feb 16 10:45:49 2023) by ROOT version 6.26/06
   TCanvas *ROC_Z_dR_18 = new TCanvas("ROC_Z_dR_18", "ROC_Z_dR_18",0,0,600,600);
   ROC_Z_dR_18->SetHighLightColor(2);
   ROC_Z_dR_18->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Z_dR_18->SetFillColor(0);
   ROC_Z_dR_18->SetBorderMode(0);
   ROC_Z_dR_18->SetBorderSize(2);
   ROC_Z_dR_18->SetGridx();
   ROC_Z_dR_18->SetGridy();
   ROC_Z_dR_18->SetLeftMargin(0.15709);
   ROC_Z_dR_18->SetRightMargin(0.1234783);
   ROC_Z_dR_18->SetBottomMargin(0.12);
   ROC_Z_dR_18->SetFrameBorderMode(0);
   ROC_Z_dR_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx136[30] = {
   0,
   0,
   6.442882e-05,
   0.08200958,
   0.1631671,
   0.2228598,
   0.2823151,
   0.3325609,
   0.3781843,
   0.4227896,
   0.4813815,
   0.5348366,
   0.5884483,
   0.6504294,
   0.7175592,
   0.7928564,
   0.8697391,
   0.9114237,
   0.943251,
   0.9639408,
   0.978259,
   0.9871876,
   0.9932324,
   0.9960117,
   0.9982478,
   0.9990624,
   0.9996801,
   0.9998537,
   0.9998592,
   1};
   Double_t Graph_fy136[30] = {
   0,
   0,
   0,
   0.09014172,
   0.2278666,
   0.3695672,
   0.4893923,
   0.5712222,
   0.6245876,
   0.6673535,
   0.6996169,
   0.7317543,
   0.766585,
   0.8054264,
   0.847438,
   0.9054523,
   0.9565759,
   0.9783425,
   0.9880096,
   0.9934867,
   0.9959236,
   0.9974374,
   0.9983066,
   0.9991723,
   0.9997229,
   0.9997931,
   0.9997931,
   1,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx136,Graph_fy136);
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
   
   TH1F *Graph_Graph136 = new TH1F("Graph_Graph136","Tagging Only",100,0,1.1);
   Graph_Graph136->SetMinimum(0);
   Graph_Graph136->SetMaximum(1.1);
   Graph_Graph136->SetDirectory(0);
   Graph_Graph136->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph136->SetLineColor(ci);
   Graph_Graph136->GetXaxis()->SetLabelFont(42);
   Graph_Graph136->GetXaxis()->SetTitleOffset(1);
   Graph_Graph136->GetXaxis()->SetTitleFont(42);
   Graph_Graph136->GetYaxis()->SetLabelFont(42);
   Graph_Graph136->GetYaxis()->SetTitleFont(42);
   Graph_Graph136->GetZaxis()->SetLabelFont(42);
   Graph_Graph136->GetZaxis()->SetTitleOffset(1);
   Graph_Graph136->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph136);
   
   TLatex *   tex = new TLatex(0.2327494,0.4062642,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(137);
      tex = new TLatex(0.319509,0.6039759,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(138);
      tex = new TLatex(0.40185,0.779186,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(139);
      tex = new TLatex(0.4704794,0.8418129,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(140);
      tex = new TLatex(0.5327662,0.9066879,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(141);
      tex = new TLatex(0.5914787,0.9463441,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(142);
      tex = new TLatex(0.6786287,0.9631305,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(143);
      tex = new TLatex(0.7389956,0.9779064,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(144);
      tex = new TLatex(0.7981245,0.9904515,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(145);
      tex = new TLatex(0.8385027,1.00153,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(146);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx147[30] = {
   0,
   0,
   0.0002370998,
   0.1214967,
   0.2327494,
   0.319509,
   0.40185,
   0.4704794,
   0.5327662,
   0.5914787,
   0.6786287,
   0.7389956,
   0.7981245,
   0.8385027,
   0.8919795,
   0.925486,
   0.9584459,
   0.9763431,
   0.9851726,
   0.9923954,
   0.994271,
   0.9968015,
   0.9988508,
   0.9992797,
   0.9999347,
   0.9999898,
   0.9999938,
   0.9999999,
   1,
   1};
   Double_t Graph_fy147[30] = {
   0,
   0,
   0,
   0.1189573,
   0.3062642,
   0.5039759,
   0.679186,
   0.8018129,
   0.8666879,
   0.9063441,
   0.9231305,
   0.9379064,
   0.9504515,
   0.96153,
   0.9727748,
   0.9827606,
   0.9905096,
   0.9954716,
   0.9975084,
   0.9989634,
   0.9998598,
   0.9998598,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx147,Graph_fy147);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph147 = new TH1F("Graph_Graph147","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph147->SetMinimum(0);
   Graph_Graph147->SetMaximum(1.1);
   Graph_Graph147->SetDirectory(0);
   Graph_Graph147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph147->SetLineColor(ci);
   Graph_Graph147->GetXaxis()->SetLabelFont(42);
   Graph_Graph147->GetXaxis()->SetTitleOffset(1);
   Graph_Graph147->GetXaxis()->SetTitleFont(42);
   Graph_Graph147->GetYaxis()->SetLabelFont(42);
   Graph_Graph147->GetYaxis()->SetTitleFont(42);
   Graph_Graph147->GetZaxis()->SetLabelFont(42);
   Graph_Graph147->GetZaxis()->SetTitleOffset(1);
   Graph_Graph147->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph147);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx148[30] = {
   0,
   0,
   6.344477e-05,
   0.0815406,
   0.1625687,
   0.2222545,
   0.281652,
   0.3320807,
   0.3779491,
   0.4226398,
   0.4808516,
   0.5344615,
   0.5880434,
   0.6501892,
   0.7175575,
   0.7928864,
   0.8697418,
   0.91159,
   0.9433268,
   0.9639485,
   0.9782438,
   0.9872385,
   0.9932545,
   0.9960102,
   0.9982599,
   0.9990768,
   0.9996852,
   0.9998562,
   0.9998616,
   1};
   Double_t Graph_fy148[30] = {
   0,
   0,
   0,
   0.08979579,
   0.227921,
   0.3687172,
   0.4885941,
   0.5710293,
   0.6242742,
   0.6672824,
   0.6992717,
   0.7320295,
   0.7669292,
   0.8060508,
   0.8482079,
   0.9060161,
   0.9567353,
   0.9781699,
   0.9878642,
   0.9924702,
   0.9949148,
   0.9964619,
   0.9983405,
   0.9991888,
   0.9997284,
   0.9997972,
   0.9997972,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx148,Graph_fy148);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph148 = new TH1F("Graph_Graph148","Tagging Prioritized",100,0,1.1);
   Graph_Graph148->SetMinimum(0);
   Graph_Graph148->SetMaximum(1.1);
   Graph_Graph148->SetDirectory(0);
   Graph_Graph148->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph148->SetLineColor(ci);
   Graph_Graph148->GetXaxis()->SetLabelFont(42);
   Graph_Graph148->GetXaxis()->SetTitleOffset(1);
   Graph_Graph148->GetXaxis()->SetTitleFont(42);
   Graph_Graph148->GetYaxis()->SetLabelFont(42);
   Graph_Graph148->GetYaxis()->SetTitleFont(42);
   Graph_Graph148->GetZaxis()->SetLabelFont(42);
   Graph_Graph148->GetZaxis()->SetTitleOffset(1);
   Graph_Graph148->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph148);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_Z_dR_18->Modified();
   ROC_Z_dR_18->cd();
   ROC_Z_dR_18->SetSelected(ROC_Z_dR_18);
}
