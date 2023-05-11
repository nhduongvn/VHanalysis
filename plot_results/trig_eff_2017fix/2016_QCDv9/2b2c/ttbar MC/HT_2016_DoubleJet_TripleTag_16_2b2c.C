#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_TripleTag_16_2b2c()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_TripleTag_16_2b2c/HT_2016_DoubleJet_TripleTag_16_2b2c
//=========  (Wed May 10 10:33:14 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_TripleTag_16_2b2c = new TCanvas("HT_2016_DoubleJet_TripleTag_16_2b2c", "HT_2016_DoubleJet_TripleTag_16_2b2c",0,0,600,600);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetHighLightColor(2);
   HT_2016_DoubleJet_TripleTag_16_2b2c->Range(-383.5411,0.07434152,2535.43,0.8414633);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFillColor(0);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFillStyle(4000);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetBorderSize(2);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetLeftMargin(0.15709);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetRightMargin(0.1234783);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetBottomMargin(0.12);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetFrameBorderMode(0);
   
   Double_t _fx3006[10] = {
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
   Double_t _fy3006[10] = {
   0.2279294,
   0.3911429,
   0.5471847,
   0.6216298,
   0.6449138,
   0.6585581,
   0.6710049,
   0.677531,
   0.7004677,
   0.711099};
   Double_t _felx3006[10] = {
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
   Double_t _fely3006[10] = {
   0.01167031,
   0.00283729,
   0.001981941,
   0.001927964,
   0.002110889,
   0.002369223,
   0.002687931,
   0.001842171,
   0.003067588,
   0.003808993};
   Double_t _fehx3006[10] = {
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
   Double_t _fehy3006[10] = {
   0.01195806,
   0.002842206,
   0.001980937,
   0.001925401,
   0.002107138,
   0.002363957,
   0.002680482,
   0.001838497,
   0.00305565,
   0.003789216};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,75,2175);
   Graph_Graph3006->SetMinimum(0.1663961);
   Graph_Graph3006->SetMaximum(0.7647512);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetTitle("H_{T} [GeV]");
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
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
   entry=leg->AddEntry("","Tagging: 2 b-jets, 2 c-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_DoubleJet_TripleTag_16_2b2c->Modified();
   HT_2016_DoubleJet_TripleTag_16_2b2c->cd();
   HT_2016_DoubleJet_TripleTag_16_2b2c->SetSelected(HT_2016_DoubleJet_TripleTag_16_2b2c);
}
