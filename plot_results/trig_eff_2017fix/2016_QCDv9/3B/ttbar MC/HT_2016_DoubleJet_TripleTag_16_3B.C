#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_TripleTag_16_3B/HT_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May 10 10:33:14 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_TripleTag_16_3B = new TCanvas("HT_2016_DoubleJet_TripleTag_16_3B", "HT_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   HT_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   HT_2016_DoubleJet_TripleTag_16_3B->Range(-383.5411,0.09225969,2535.43,0.9557453);
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
   0.2662194,
   0.4566072,
   0.635832,
   0.726049,
   0.7634124,
   0.7774786,
   0.7858407,
   0.7940789,
   0.8027618,
   0.808882};
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
   0.01421491,
   0.003448279,
   0.002364843,
   0.002242097,
   0.002395199,
   0.002694529,
   0.00309954,
   0.002128673,
   0.003620714,
   0.004440119};
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
   0.01454492,
   0.003451061,
   0.002360484,
   0.002234505,
   0.002384095,
   0.002679092,
   0.003077925,
   0.002117867,
   0.003587592,
   0.00438821};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,75,2175);
   Graph_Graph3004->SetMinimum(0.195878);
   Graph_Graph3004->SetMaximum(0.8693968);
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
   TLegendEntry *entry=leg->AddEntry("","ttbar MC 2016","L");
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
