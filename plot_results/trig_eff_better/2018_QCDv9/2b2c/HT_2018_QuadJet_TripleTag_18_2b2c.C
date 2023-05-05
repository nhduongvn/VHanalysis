#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_TripleTag_18_2b2c()
{
//=========Macro generated from canvas: HT_2018_QuadJet_TripleTag_18_2b2c/HT_2018_QuadJet_TripleTag_18_2b2c
//=========  (Fri May  5 14:04:32 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_TripleTag_18_2b2c = new TCanvas("HT_2018_QuadJet_TripleTag_18_2b2c", "HT_2018_QuadJet_TripleTag_18_2b2c",0,0,600,600);
   HT_2018_QuadJet_TripleTag_18_2b2c->SetHighLightColor(2);
   HT_2018_QuadJet_TripleTag_18_2b2c->Range(-451.6423,-0.07137331,2550.728,0.5234042);
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
   0,
   0.08781226,
   0.1607569,
   0.2513133,
   0.3033423,
   0.3368382,
   0.3283066,
   0.3584277,
   0.3733377,
   0.3993352,
   0.4078212};
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
   0,
   0.00758342,
   0.004759738,
   0.004722316,
   0.005598565,
   0.006458753,
   0.007358264,
   0.00872358,
   0.006149066,
   0.01064225,
   0.01383205};
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
   0.119839,
   0.007999838,
   0.004836928,
   0.004761952,
   0.005637729,
   0.006499643,
   0.007414907,
   0.008786488,
   0.006176483,
   0.01070599,
   0.01393012};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,20,2180);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(0.4639265);
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
   TLegendEntry *entry=leg->AddEntry("","SingleMuon 2018","L");
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
