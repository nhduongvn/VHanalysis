#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ROC_Aplanarity_17()
{
//=========Macro generated from canvas: ROC_Aplanarity_17/ROC_Aplanarity_17
//=========  (Sun Feb 19 15:09:25 2023) by ROOT version 6.26/06
   TCanvas *ROC_Aplanarity_17 = new TCanvas("ROC_Aplanarity_17", "ROC_Aplanarity_17",0,0,600,600);
   ROC_Aplanarity_17->SetHighLightColor(2);
   ROC_Aplanarity_17->Range(-0.2901882,-0.1615385,1.238796,1.184615);
   ROC_Aplanarity_17->SetFillColor(0);
   ROC_Aplanarity_17->SetBorderMode(0);
   ROC_Aplanarity_17->SetBorderSize(2);
   ROC_Aplanarity_17->SetGridx();
   ROC_Aplanarity_17->SetGridy();
   ROC_Aplanarity_17->SetLeftMargin(0.15709);
   ROC_Aplanarity_17->SetRightMargin(0.1234783);
   ROC_Aplanarity_17->SetBottomMargin(0.12);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   ROC_Aplanarity_17->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx242[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.793069e-07,
   1.084658e-06,
   4.612711e-06,
   1.574222e-05,
   4.035521e-05,
   0.0001962132,
   0.0004180061,
   0.0005902008,
   0.001049152,
   0.00185793,
   0.002925676,
   0.004486029,
   0.007084957,
   0.01225962,
   0.0176055,
   0.03016208,
   0.04143391,
   0.0625392,
   0.08847092,
   0.1345432,
   0.2090574,
   0.331945,
   0.5596689,
   1};
   Double_t Graph_fy242[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.623071e-05,
   0.00010048,
   0.0005772152,
   0.001056585,
   0.002346972,
   0.003530579,
   0.005487445,
   0.008629235,
   0.01444931,
   0.0180147,
   0.02738951,
   0.04093835,
   0.05853428,
   0.08231354,
   0.1157975,
   0.1689187,
   0.233082,
   0.3272445,
   0.4659054,
   0.6895313,
   1};
   TGraph *graph = new TGraph(51,Graph_fx242,Graph_fy242);
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
   
   TH1F *Graph_Graph242 = new TH1F("Graph_Graph242","Tagging Only",100,0,1.1);
   Graph_Graph242->SetMinimum(0);
   Graph_Graph242->SetMaximum(1.1);
   Graph_Graph242->SetDirectory(0);
   Graph_Graph242->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph242->SetLineColor(ci);
   Graph_Graph242->GetXaxis()->SetLabelFont(42);
   Graph_Graph242->GetXaxis()->SetTitleOffset(1);
   Graph_Graph242->GetXaxis()->SetTitleFont(42);
   Graph_Graph242->GetYaxis()->SetLabelFont(42);
   Graph_Graph242->GetYaxis()->SetTitleFont(42);
   Graph_Graph242->GetZaxis()->SetLabelFont(42);
   Graph_Graph242->GetZaxis()->SetTitleOffset(1);
   Graph_Graph242->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph242);
   
   TLatex *   tex = new TLatex(0.1670686,0.474383,"0.05");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(243);
      tex = new TLatex(0.2721427,0.6069965,"0.03");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(244);
      tex = new TLatex(0.5236431,0.8358811,"0.01");
   tex->SetTextSize(0.02);
   tex->SetLineWidth(2);
   tex->Draw();
   graph->GetListOfFunctions()->Add(245);
   multigraph->Add(graph,"");
   
   Double_t Graph_fx246[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.732072e-08,
   5.641478e-07,
   2.522934e-06,
   7.642487e-06,
   1.772961e-05,
   0.0002890673,
   0.0003247666,
   0.0004175963,
   0.0005404156,
   0.0009477931,
   0.001422947,
   0.002129547,
   0.005107635,
   0.008236821,
   0.01154961,
   0.01864682,
   0.02556216,
   0.03700542,
   0.06078615,
   0.1109305,
   0.1670686,
   0.2721427,
   0.5236431,
   1};
   Double_t Graph_fy246[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.001104316,
   0.001104316,
   0.002925126,
   0.003151147,
   0.004808297,
   0.01088538,
   0.0171371,
   0.01980506,
   0.03150323,
   0.05133993,
   0.07635307,
   0.1031147,
   0.1412399,
   0.1921256,
   0.2663576,
   0.374383,
   0.5069965,
   0.7358811,
   1};
   graph = new TGraph(51,Graph_fx246,Graph_fy246);
   graph->SetName("Graph");
   graph->SetTitle("Mass-Matching Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph246 = new TH1F("Graph_Graph246","Mass-Matching Prioritized",100,0,1.1);
   Graph_Graph246->SetMinimum(0);
   Graph_Graph246->SetMaximum(1.1);
   Graph_Graph246->SetDirectory(0);
   Graph_Graph246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph246->SetLineColor(ci);
   Graph_Graph246->GetXaxis()->SetLabelFont(42);
   Graph_Graph246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph246->GetXaxis()->SetTitleFont(42);
   Graph_Graph246->GetYaxis()->SetLabelFont(42);
   Graph_Graph246->GetYaxis()->SetTitleFont(42);
   Graph_Graph246->GetZaxis()->SetLabelFont(42);
   Graph_Graph246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph246->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph246);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx247[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.761953e-07,
   1.098315e-06,
   4.608377e-06,
   1.569794e-05,
   4.028444e-05,
   0.0001940371,
   0.0004207725,
   0.0005934759,
   0.001049153,
   0.001853062,
   0.002913381,
   0.004466689,
   0.007052539,
   0.01217637,
   0.01749508,
   0.02998883,
   0.0412053,
   0.06229792,
   0.08834515,
   0.1344638,
   0.2089419,
   0.332132,
   0.5599605,
   1};
   Double_t Graph_fy247[51] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.507612e-05,
   9.841685e-05,
   0.0005653632,
   0.00103489,
   0.002329044,
   0.003488348,
   0.005405033,
   0.008512554,
   0.01423173,
   0.01785271,
   0.02707989,
   0.04044832,
   0.05774089,
   0.08114778,
   0.1144411,
   0.1675832,
   0.2315383,
   0.3252294,
   0.4632985,
   0.6870897,
   1};
   graph = new TGraph(51,Graph_fx247,Graph_fy247);
   graph->SetName("Graph");
   graph->SetTitle("Tagging Prioritized");
   graph->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph247 = new TH1F("Graph_Graph247","Tagging Prioritized",100,0,1.1);
   Graph_Graph247->SetMinimum(0);
   Graph_Graph247->SetMaximum(1.1);
   Graph_Graph247->SetDirectory(0);
   Graph_Graph247->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph247->SetLineColor(ci);
   Graph_Graph247->GetXaxis()->SetLabelFont(42);
   Graph_Graph247->GetXaxis()->SetTitleOffset(1);
   Graph_Graph247->GetXaxis()->SetTitleFont(42);
   Graph_Graph247->GetYaxis()->SetLabelFont(42);
   Graph_Graph247->GetYaxis()->SetTitleFont(42);
   Graph_Graph247->GetZaxis()->SetLabelFont(42);
   Graph_Graph247->GetZaxis()->SetTitleOffset(1);
   Graph_Graph247->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph247);
   
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
   ROC_Aplanarity_17->Modified();
   ROC_Aplanarity_17->cd();
   ROC_Aplanarity_17->SetSelected(ROC_Aplanarity_17);
}
