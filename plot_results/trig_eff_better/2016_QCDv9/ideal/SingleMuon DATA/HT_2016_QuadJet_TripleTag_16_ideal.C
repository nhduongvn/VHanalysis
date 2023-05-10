#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: HT_2016_QuadJet_TripleTag_16_ideal/HT_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May 10 10:32:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_TripleTag_16_ideal = new TCanvas("HT_2016_QuadJet_TripleTag_16_ideal", "HT_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   HT_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   HT_2016_QuadJet_TripleTag_16_ideal->Range(-451.6423,0.004556854,2550.728,1.108574);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFillStyle(4000);
   HT_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   HT_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   HT_2016_QuadJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   HT_2016_QuadJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   Double_t _fx3001[11] = {
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
   Double_t _fy3001[11] = {
   0.2777778,
   0.5957447,
   0.6527778,
   0.7969925,
   0.82,
   0.8686869,
   0.8333333,
   0.8947368,
   0.8352273,
   0.8679245,
   0.7659574};
   Double_t _felx3001[11] = {
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
   Double_t _fely3001[11] = {
   0.06897778,
   0.05079426,
   0.0401385,
   0.03617851,
   0.03265674,
   0.03626744,
   0.04299054,
   0.03853991,
   0.029143,
   0.05067634,
   0.06440221};
   Double_t _fehx3001[11] = {
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
   Double_t _fehy3001[11] = {
   0.07685882,
   0.04945969,
   0.03873895,
   0.03322964,
   0.02983433,
   0.03134775,
   0.03777317,
   0.03167419,
   0.02661863,
   0.04158838,
   0.05708871};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,20,2180);
   Graph_Graph3001->SetMinimum(0.1370389);
   Graph_Graph3001->SetMaximum(0.9981721);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
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
   entry=leg->AddEntry("","Tagging: 4 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_QuadJet_TripleTag_16_ideal->Modified();
   HT_2016_QuadJet_TripleTag_16_ideal->cd();
   HT_2016_QuadJet_TripleTag_16_ideal->SetSelected(HT_2016_QuadJet_TripleTag_16_ideal);
}
