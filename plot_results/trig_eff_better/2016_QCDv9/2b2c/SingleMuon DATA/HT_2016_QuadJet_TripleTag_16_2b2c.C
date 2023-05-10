#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: HT_2016_QuadJet_TripleTag_16_2b2c/HT_2016_QuadJet_TripleTag_16_2b2c
//=========  (Wed May 10 10:32:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_TripleTag_16_2b2c = new TCanvas("HT_2016_QuadJet_TripleTag_16_2b2c", "HT_2016_QuadJet_TripleTag_16_2b2c",0,0,600,600);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetHighLightColor(2);
   HT_2016_QuadJet_TripleTag_16_2b2c->Range(-478.1928,0.009469266,2565.877,0.7027614);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFillColor(0);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFillStyle(4000);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetBorderSize(2);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   Double_t _fx3005[12] = {
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
   Double_t _fy3005[12] = {
   0.2222222,
   0.1546455,
   0.2760392,
   0.3461691,
   0.3899848,
   0.4194066,
   0.4448966,
   0.4617049,
   0.4802956,
   0.5055603,
   0.5255776,
   0.5706941};
   Double_t _felx3005[12] = {
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
   Double_t _fely3005[12] = {
   0.08449392,
   0.008800831,
   0.006799621,
   0.006685322,
   0.007168465,
   0.008056559,
   0.009141542,
   0.01036145,
   0.01238989,
   0.008446645,
   0.01435478,
   0.0177951};
   Double_t _fehx3005[12] = {
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
   Double_t _fehy3005[12] = {
   0.1035062,
   0.009082454,
   0.006869422,
   0.006726081,
   0.007200288,
   0.008085307,
   0.009166474,
   0.01038356,
   0.01240607,
   0.008444538,
   0.01432664,
   0.01767409};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,2190);
   Graph_Graph3005->SetMinimum(0.09266432);
   Graph_Graph3005->SetMaximum(0.6334322);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3005->SetLineColor(ci);
   Graph_Graph3005->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
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
   TLegendEntry *entry=leg->AddEntry("","SingleMuon DATA 2016","L");
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
   HT_2016_QuadJet_TripleTag_16_2b2c->Modified();
   HT_2016_QuadJet_TripleTag_16_2b2c->cd();
   HT_2016_QuadJet_TripleTag_16_2b2c->SetSelected(HT_2016_QuadJet_TripleTag_16_2b2c);
}
