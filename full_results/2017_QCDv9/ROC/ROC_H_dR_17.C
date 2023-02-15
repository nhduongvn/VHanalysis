#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_17()
{
//=========Macro generated from canvas: ROC_H_dR_17/ROC_H_dR_17
//=========  (Tue Feb 14 15:33:17 2023) by ROOT version 6.26/06
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
   
   Double_t Graph_fx15[30] = {
   0,
   0,
   0.0004174131,
   0.0405375,
   0.08968014,
   0.1296213,
   0.1734703,
   0.2151222,
   0.2565715,
   0.3058095,
   0.3535272,
   0.4058091,
   0.4638607,
   0.5313544,
   0.6072908,
   0.6870256,
   0.7767058,
   0.8358592,
   0.8778246,
   0.9128212,
   0.940665,
   0.9598837,
   0.9748483,
   0.9855017,
   0.9919505,
   0.9967969,
   0.9984991,
   0.999304,
   0.9999487,
   1};
   Double_t Graph_fy15[30] = {
   0,
   0,
   0,
   0.01731102,
   0.05688776,
   0.1065515,
   0.1744943,
   0.2523062,
   0.3313463,
   0.4078142,
   0.484312,
   0.555912,
   0.6233764,
   0.6949085,
   0.7691835,
   0.8452391,
   0.9240992,
   0.953413,
   0.9700713,
   0.981804,
   0.9884718,
   0.9930029,
   0.9957662,
   0.9975921,
   0.9988088,
   0.9996787,
   0.9999491,
   0.9999885,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx15,Graph_fy15);
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
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","Tagging Only",100,0,1.1);
   Graph_Graph15->SetMinimum(0);
   Graph_Graph15->SetMaximum(1.1);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetTitleOffset(1);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetTitleOffset(1);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   TLatex *   tex = new TLatex(0.1681797,0.2217568,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(16);
      tex = new TLatex(0.2261347,0.3224179,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(17);
      tex = new TLatex(0.2816585,0.4402198,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(18);
      tex = new TLatex(0.3299704,0.569224,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(19);
      tex = new TLatex(0.4030617,0.6933226,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(20);
      tex = new TLatex(0.4693982,0.7927663,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(21);
      tex = new TLatex(0.5254604,0.8822912,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(22);
      tex = new TLatex(0.5966139,0.8936047,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(23);
      tex = new TLatex(0.6846237,0.9414718,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(24);
      tex = new TLatex(0.7464166,0.9794301,"2.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(25);
      tex = new TLatex(0.8143411,1.005712,"3.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(26);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx27[30] = {
   0,
   0,
   4.186396e-06,
   0.05039358,
   0.110921,
   0.1681797,
   0.2261347,
   0.2816585,
   0.3299704,
   0.4030617,
   0.4693982,
   0.5254604,
   0.5966139,
   0.6846237,
   0.7464166,
   0.8143411,
   0.8936443,
   0.9386256,
   0.9635387,
   0.9768594,
   0.9871954,
   0.9945003,
   0.9970804,
   0.9983558,
   0.999108,
   0.9996412,
   0.9999581,
   0.9999999,
   1,
   1};
   Double_t Graph_fy27[30] = {
   0,
   0,
   0,
   0.01205351,
   0.05255279,
   0.1217568,
   0.2224179,
   0.3402198,
   0.469224,
   0.5933226,
   0.6927663,
   0.7822912,
   0.8536047,
   0.9014718,
   0.9394301,
   0.9657117,
   0.9850533,
   0.9914556,
   0.9938952,
   0.9954368,
   0.9973853,
   0.9983115,
   0.9988016,
   0.999159,
   0.9996295,
   0.9996295,
   1,
   1,
   1,
   1};
   graph = new TGraph(30,Graph_fx27,Graph_fy27);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph27->SetMinimum(0);
   Graph_Graph27->SetMaximum(1.1);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetTitleOffset(1);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetTitleOffset(1);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx28[30] = {
   0,
   0,
   0.0004092019,
   0.04030608,
   0.08919495,
   0.1295149,
   0.1732769,
   0.2148775,
   0.2563844,
   0.3051396,
   0.3527998,
   0.4050191,
   0.4634537,
   0.5310595,
   0.606782,
   0.6870503,
   0.7770367,
   0.8359175,
   0.8780138,
   0.9134823,
   0.9410738,
   0.9601177,
   0.9750095,
   0.9856699,
   0.9920363,
   0.9968016,
   0.9985194,
   0.9993169,
   0.9999498,
   1};
   Double_t Graph_fy28[30] = {
   0,
   0,
   0,
   0.01778615,
   0.05791747,
   0.1083172,
   0.1768842,
   0.2548986,
   0.3346957,
   0.4109186,
   0.4865357,
   0.5581688,
   0.6252256,
   0.6967995,
   0.7706683,
   0.8459022,
   0.924227,
   0.9538114,
   0.9703742,
   0.9818001,
   0.9885329,
   0.993076,
   0.9957716,
   0.9975719,
   0.998838,
   0.9996866,
   0.9999504,
   0.9999888,
   1,
   1};
   graph = new TGraph(30,Graph_fx28,Graph_fy28);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","Tagging Prioritized",100,0,1.1);
   Graph_Graph28->SetMinimum(0);
   Graph_Graph28->SetMaximum(1.1);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetTitleOffset(1);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetTitleOffset(1);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
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
