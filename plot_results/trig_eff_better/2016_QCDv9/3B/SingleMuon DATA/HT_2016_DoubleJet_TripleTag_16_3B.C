#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_TripleTag_16_3B/HT_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May 10 10:32:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_TripleTag_16_3B = new TCanvas("HT_2016_DoubleJet_TripleTag_16_3B", "HT_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   HT_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   HT_2016_DoubleJet_TripleTag_16_3B->Range(-383.5411,-0.01702813,2535.43,0.866986);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFillStyle(4000);
   HT_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   HT_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   HT_2016_DoubleJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   HT_2016_DoubleJet_TripleTag_16_3B->SetBottomMargin(0.12);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   Double_t _fx3004[10] = {
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
   Double_t _fy3004[10] = {
   0.2051282,
   0.3253128,
   0.5177112,
   0.5932521,
   0.6510417,
   0.6531532,
   0.6610738,
   0.6723549,
   0.7030498,
   0.6976744};
   Double_t _felx3004[10] = {
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
   Double_t _fely3004[10] = {
   0.05861373,
   0.01441846,
   0.01065588,
   0.01066478,
   0.0115255,
   0.01311708,
   0.01594443,
   0.01042173,
   0.01850785,
   0.02136769};
   Double_t _fehx3004[10] = {
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
   Double_t _fehy3004[10] = {
   0.06834392,
   0.01464255,
   0.01064514,
   0.0106065,
   0.01140893,
   0.01296378,
   0.01570435,
   0.01030963,
   0.01807389,
   0.02081174};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,75,2175);
   Graph_Graph3004->SetMinimum(0.08905356);
   Graph_Graph3004->SetMaximum(0.7785846);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3004->SetLineColor(ci);
   Graph_Graph3004->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("ap");
   TLatex *   tex = new TLatex(0.15,0.937775,"HLT_DoubleJet90_Double30_TripleBTagCSV_p087");
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
   entry=leg->AddEntry("","Tagging: at least 3 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_DoubleJet_TripleTag_16_3B->Modified();
   HT_2016_DoubleJet_TripleTag_16_3B->cd();
   HT_2016_DoubleJet_TripleTag_16_3B->SetSelected(HT_2016_DoubleJet_TripleTag_16_3B);
}
