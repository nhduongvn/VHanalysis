#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_H_dR_Bj1_18()
{
//=========Macro generated from canvas: ROC_H_dR_Bj1_18/ROC_H_dR_Bj1_18
//=========  (Wed Mar  1 15:31:58 2023) by ROOT version 6.26/06
   TCanvas *ROC_H_dR_Bj1_18 = new TCanvas("ROC_H_dR_Bj1_18", "ROC_H_dR_Bj1_18",0,0,600,600);
   ROC_H_dR_Bj1_18->SetHighLightColor(2);
   ROC_H_dR_Bj1_18->Range(-0.2901881,-0.1615385,1.238796,1.184615);
   ROC_H_dR_Bj1_18->SetFillColor(0);
   ROC_H_dR_Bj1_18->SetBorderMode(0);
   ROC_H_dR_Bj1_18->SetBorderSize(2);
   ROC_H_dR_Bj1_18->SetGridx();
   ROC_H_dR_Bj1_18->SetGridy();
   ROC_H_dR_Bj1_18->SetLeftMargin(0.15709);
   ROC_H_dR_Bj1_18->SetRightMargin(0.1234783);
   ROC_H_dR_Bj1_18->SetBottomMargin(0.12);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   ROC_H_dR_Bj1_18->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx96[30] = {
   0,
   0.0312942,
   0.1464897,
   0.2706769,
   0.3864769,
   0.4780841,
   0.5519842,
   0.6153639,
   0.6666261,
   0.711962,
   0.7552783,
   0.7947504,
   0.8295928,
   0.8568596,
   0.8883802,
   0.9142048,
   0.9355995,
   0.9555719,
   0.9664098,
   0.9742481,
   0.9811117,
   0.9860909,
   0.9898122,
   0.9920227,
   0.9958109,
   0.9975154,
   0.9987431,
   0.9993744,
   0.9996229,
   0.9999501};
   Double_t Graph_fy96[30] = {
   0,
   0.03081498,
   0.179482,
   0.3563875,
   0.5019615,
   0.618027,
   0.7036249,
   0.7675856,
   0.8104115,
   0.8432365,
   0.8704183,
   0.8952804,
   0.9129172,
   0.9307348,
   0.9493462,
   0.9635947,
   0.9777199,
   0.9867041,
   0.991804,
   0.994427,
   0.9965358,
   0.9976108,
   0.99823,
   0.9987442,
   0.9989661,
   0.9994684,
   0.9994977,
   0.9997781,
   1,
   1};
   TGraph *graph = new TGraph(30,Graph_fx96,Graph_fy96);
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
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","Tagging Only",100,0,1.099945);
   Graph_Graph96->SetMinimum(0);
   Graph_Graph96->SetMaximum(1.1);
   Graph_Graph96->SetDirectory(0);
   Graph_Graph96->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph96->SetLineColor(ci);
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetTitleOffset(1);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetTitleOffset(1);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph96);
   
   TLatex *   tex = new TLatex(0.2707928,0.4564894,"0.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(97);
      tex = new TLatex(0.3863692,0.6040925,"0.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(98);
      tex = new TLatex(0.4782764,0.720225,"1.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(99);
      tex = new TLatex(0.3869351,0.8514428,"1.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(100);
      tex = new TLatex(0.4682435,0.8650511,"1.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(101);
      tex = new TLatex(0.5253687,0.909875,"1.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(102);
      tex = new TLatex(0.5893624,0.9387007,"1.9");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(103);
      tex = new TLatex(0.6557025,0.9573879,"2.1");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(104);
      tex = new TLatex(0.7362238,0.9771655,"2.3");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(105);
      tex = new TLatex(0.7730618,0.9906934,"2.5");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(106);
      tex = new TLatex(0.8282871,1.002451,"2.7");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(107);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx108[30] = {
   0,
   0.001139291,
   0.06144287,
   0.1496715,
   0.2224639,
   0.3187665,
   0.3869351,
   0.4682435,
   0.5253687,
   0.5893624,
   0.6557025,
   0.7362238,
   0.7730618,
   0.8282871,
   0.8709101,
   0.9032111,
   0.9387282,
   0.9568801,
   0.9747841,
   0.9836178,
   0.9904615,
   0.994126,
   0.9954129,
   0.9988714,
   0.9995735,
   0.999895,
   0.99997,
   0.9999902,
   0.9999987,
   0.9999996};
   Double_t Graph_fy108[30] = {
   0,
   0,
   0.0395552,
   0.1785924,
   0.3989592,
   0.6079642,
   0.7514428,
   0.8250511,
   0.869875,
   0.8987007,
   0.9173879,
   0.9371655,
   0.9506934,
   0.9624512,
   0.9721553,
   0.9795427,
   0.9895749,
   0.9931592,
   0.9963063,
   0.9984043,
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
   graph = new TGraph(30,Graph_fx108,Graph_fy108);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph108 = new TH1F("Graph_Graph108","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph108->SetMinimum(0);
   Graph_Graph108->SetMaximum(1.1);
   Graph_Graph108->SetDirectory(0);
   Graph_Graph108->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph108->SetLineColor(ci);
   Graph_Graph108->GetXaxis()->SetLabelFont(42);
   Graph_Graph108->GetXaxis()->SetTitleOffset(1);
   Graph_Graph108->GetXaxis()->SetTitleFont(42);
   Graph_Graph108->GetYaxis()->SetLabelFont(42);
   Graph_Graph108->GetYaxis()->SetTitleFont(42);
   Graph_Graph108->GetZaxis()->SetLabelFont(42);
   Graph_Graph108->GetZaxis()->SetTitleOffset(1);
   Graph_Graph108->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph108);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx109[30] = {
   0,
   0.03143992,
   0.1468042,
   0.2707928,
   0.3863692,
   0.4782764,
   0.5521233,
   0.6155475,
   0.6667058,
   0.7117937,
   0.7553519,
   0.7947929,
   0.8294548,
   0.8569563,
   0.8882989,
   0.9142266,
   0.9356313,
   0.9555333,
   0.9666138,
   0.9744898,
   0.9812788,
   0.9862342,
   0.9899511,
   0.9920986,
   0.995831,
   0.9975468,
   0.9987567,
   0.9993801,
   0.9996259,
   0.9999509};
   Double_t Graph_fy109[30] = {
   0,
   0.03115408,
   0.1798023,
   0.3564894,
   0.5040925,
   0.620225,
   0.7067121,
   0.7690257,
   0.8122611,
   0.8451849,
   0.8720734,
   0.8970777,
   0.9145649,
   0.9322008,
   0.9508322,
   0.9646663,
   0.9782936,
   0.986882,
   0.9920983,
   0.9946979,
   0.9967362,
   0.9977898,
   0.998454,
   0.998958,
   0.9992042,
   0.999479,
   0.9995076,
   0.9997825,
   1,
   1};
   graph = new TGraph(30,Graph_fx109,Graph_fy109);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph109 = new TH1F("Graph_Graph109","Tagging Prioritized",100,0,1.099946);
   Graph_Graph109->SetMinimum(0);
   Graph_Graph109->SetMaximum(1.1);
   Graph_Graph109->SetDirectory(0);
   Graph_Graph109->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph109->SetLineColor(ci);
   Graph_Graph109->GetXaxis()->SetLabelFont(42);
   Graph_Graph109->GetXaxis()->SetTitleOffset(1);
   Graph_Graph109->GetXaxis()->SetTitleFont(42);
   Graph_Graph109->GetYaxis()->SetLabelFont(42);
   Graph_Graph109->GetYaxis()->SetTitleFont(42);
   Graph_Graph109->GetZaxis()->SetLabelFont(42);
   Graph_Graph109->GetZaxis()->SetTitleOffset(1);
   Graph_Graph109->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph109);
   
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
      tex = new TLatex(0.35,0.927775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   ROC_H_dR_Bj1_18->Modified();
   ROC_H_dR_Bj1_18->cd();
   ROC_H_dR_Bj1_18->SetSelected(ROC_H_dR_Bj1_18);
}
