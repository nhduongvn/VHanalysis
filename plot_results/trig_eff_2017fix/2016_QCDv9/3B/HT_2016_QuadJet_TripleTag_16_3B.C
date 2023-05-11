#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: HT_2016_QuadJet_TripleTag_16_3B/HT_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May 10 10:25:50 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_TripleTag_16_3B = new TCanvas("HT_2016_QuadJet_TripleTag_16_3B", "HT_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   HT_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   HT_2016_QuadJet_TripleTag_16_3B->Range(-478.1928,-0.08424244,2565.877,0.9847679);
   HT_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   HT_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   HT_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   HT_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   HT_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   Double_t _fx3003[12] = {
   150,
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
   Double_t _fy3003[12] = {
   0.06198727,
   0.2795887,
   0.4958659,
   0.6224737,
   0.6813962,
   0.7132199,
   0.7381306,
   0.7499331,
   0.7563611,
   0.7737918,
   0.7879241,
   0.7980249};
   Double_t _felx3003[12] = {
   50,
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
   Double_t _fely3003[12] = {
   0.01305527,
   0.003020478,
   0.002089289,
   0.001914228,
   0.001969845,
   0.002164656,
   0.00242752,
   0.002779341,
   0.003224937,
   0.002199469,
   0.003719879,
   0.00453441};
   Double_t _fehx3003[12] = {
   50,
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
   Double_t _fehy3003[12] = {
   0.01503161,
   0.003033847,
   0.002089384,
   0.001911679,
   0.001965509,
   0.00215815,
   0.002417878,
   0.002765679,
   0.003205758,
   0.002189434,
   0.003688349,
   0.00448428};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2190);
   Graph_Graph3003->SetMinimum(0.0440388);
   Graph_Graph3003->SetMaximum(0.8778669);
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
   TLatex *   tex = new TLatex(0.15,0.937775,"HLT_QuadJet45_TripleBTagCSV_p087");
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
   TLegendEntry *entry=leg->AddEntry("","SingleMuon 2016","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","Tagging: at least 3 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_QuadJet_TripleTag_16_3B->Modified();
   HT_2016_QuadJet_TripleTag_16_3B->cd();
   HT_2016_QuadJet_TripleTag_16_3B->SetSelected(HT_2016_QuadJet_TripleTag_16_3B);
}
