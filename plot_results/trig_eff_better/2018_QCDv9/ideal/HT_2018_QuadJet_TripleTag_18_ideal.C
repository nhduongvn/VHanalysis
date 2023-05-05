#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: HT_2018_QuadJet_TripleTag_18_ideal/HT_2018_QuadJet_TripleTag_18_ideal
//=========  (Fri May  5 14:04:32 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_TripleTag_18_ideal = new TCanvas("HT_2018_QuadJet_TripleTag_18_ideal", "HT_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   HT_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_TripleTag_18_ideal->Range(-383.5411,-0.04806108,2535.43,1.09031);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   HT_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   HT_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   HT_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   HT_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   Double_t _fx3001[10] = {
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
   Double_t _fy3001[10] = {
   0.2156863,
   0.4037559,
   0.6238532,
   0.7435897,
   0.7831325,
   0.8379888,
   0.8344828,
   0.8456592,
   0.8151261,
   0.8666667};
   Double_t _felx3001[10] = {
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
   Double_t _fely3001[10] = {
   0.05314863,
   0.03318692,
   0.02697774,
   0.02695334,
   0.02680525,
   0.02871368,
   0.03227468,
   0.02119927,
   0.03714688,
   0.042248};
   Double_t _fehx3001[10] = {
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
   Double_t _fehy3001[10] = {
   0.06037908,
   0.03378517,
   0.02647479,
   0.02576908,
   0.02529632,
   0.02621064,
   0.02922222,
   0.01972128,
   0.03365222,
   0.03581246};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,75,2175);
   Graph_Graph3001->SetMinimum(0.0885435);
   Graph_Graph3001->SetMaximum(0.9764733);
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
   entry=leg->AddEntry("","Tagging: 4 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2018_QuadJet_TripleTag_18_ideal->Modified();
   HT_2018_QuadJet_TripleTag_18_ideal->cd();
   HT_2018_QuadJet_TripleTag_18_ideal->SetSelected(HT_2018_QuadJet_TripleTag_18_ideal);
}
