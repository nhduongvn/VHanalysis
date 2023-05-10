#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: HT_2018_QuadJet_TripleTag_18_2b2c/HT_2018_QuadJet_TripleTag_18_2b2c
//=========  (Wed May 10 10:33:28 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("HT_2018_QuadJet_TripleTag_18_2b2c", "HT_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   HT_2018_QuadJet_TripleTag_18_2b2c->Range(-451.6423,-0.009982489,2550.728,0.4549761);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFillColor(0);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFillStyle(4000);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetBorderSize(2);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetLeftMargin(0.15709);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetRightMargin(0.1234783);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetBottomMargin(0.12);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetFrameBorderMode(0);
   
   Double_t _fx3003[11] = {
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   700,
   900,
   1500};
   Double_t _fy3003[11] = {
   0.1068682,
   0.155734,
   0.2250322,
   0.2696947,
   0.2979083,
   0.3074578,
   0.3215788,
   0.3248915,
   0.3379094,
   0.3634971,
   0.3749435};
   Double_t _felx3003[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   100,
   100,
   500};
   Double_t _fely3003[11] = {
   0.0308334,
   0.002507042,
   0.001423039,
   0.001263737,
   0.001445272,
   0.001650473,
   0.001938061,
   0.002272342,
   0.00159664,
   0.002743132,
   0.003306634};
   Double_t _fehx3003[11] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   100,
   100,
   500};
   Double_t _fehy3003[11] = {
   0.03716342,
   0.002529191,
   0.001427303,
   0.001266239,
   0.001447955,
   0.001653762,
   0.001942159,
   0.002277845,
   0.001599107,
   0.002749063,
   0.003314422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,20,2180);
   Graph_Graph3003->SetMinimum(0.04581254);
   Graph_Graph3003->SetMaximum(0.4084802);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3003->SetLineColor(ci);
   Graph_Graph3003->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("ap");
   TLatex *   tex = new TLatex(0.15,0.937775,"HLT_PTHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.025);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.5,0.2,0.8,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","ttbar MC 2018","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Tagging: 2 b-jets, 2 c-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2018_QuadJet_TripleTag_18_2b2c->Modified();
   HT_2018_QuadJet_TripleTag_18_2b2c->cd();
   HT_2018_QuadJet_TripleTag_18_2b2c->SetSelected(HT_2018_QuadJet_TripleTag_18_2b2c);
}
