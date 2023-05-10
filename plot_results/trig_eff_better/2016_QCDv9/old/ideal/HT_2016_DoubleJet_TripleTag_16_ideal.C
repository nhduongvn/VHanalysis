#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_TripleTag_16_ideal/HT_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May 10 10:30:23 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("HT_2016_DoubleJet_TripleTag_16_ideal", "HT_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   HT_2016_DoubleJet_TripleTag_16_ideal->Range(-383.5411,0.2307933,2535.43,1.151999);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFillStyle(4000);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15709);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetRightMargin(0.1234783);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetBottomMargin(0.12);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   Double_t _fx3002[10] = {
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
   Double_t _fy3002[10] = {
   1,
   0.4761905,
   0.6862745,
   0.7956204,
   0.9166667,
   0.8571429,
   0.9066667,
   0.8806818,
   0.8703704,
   0.7659574};
   Double_t _felx3002[10] = {
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
   Double_t _fely3002[10] = {
   0.4369725,
   0.07497414,
   0.04675903,
   0.03570943,
   0.03111743,
   0.04076506,
   0.03714876,
   0.02583337,
   0.04985478,
   0.06440221};
   Double_t _fehx3002[10] = {
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
   Double_t _fehy3002[10] = {
   0,
   0.07569981,
   0.04436092,
   0.03285909,
   0.02534549,
   0.03516502,
   0.02996442,
   0.022961,
   0.04086904,
   0.05708871};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,75,2175);
   Graph_Graph3002->SetMinimum(0.341338);
   Graph_Graph3002->SetMaximum(1.059878);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3002->SetLineColor(ci);
   Graph_Graph3002->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
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
   entry=leg->AddEntry("","Tagging: 4 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_DoubleJet_TripleTag_16_ideal->Modified();
   HT_2016_DoubleJet_TripleTag_16_ideal->cd();
   HT_2016_DoubleJet_TripleTag_16_ideal->SetSelected(HT_2016_DoubleJet_TripleTag_16_ideal);
}
