#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: HT_2018_QuadJet_TripleTag_18_ideal/HT_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May 10 10:33:28 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_TripleTag_18_ideal = new TCanvas("HT_2018_QuadJet_TripleTag_18_ideal", "HT_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   HT_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_TripleTag_18_ideal->Range(-451.6423,0.3144519,2550.728,0.9695527);
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
   0.6728086,
   0.4678325,
   0.6702465,
   0.7853641,
   0.8314473,
   0.85562,
   0.8449469,
   0.8489026,
   0.8428494,
   0.8309047,
   0.815343};
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
   0.237163,
   0.01718935,
   0.009354392,
   0.006759889,
   0.0057175,
   0.005975036,
   0.006948553,
   0.007723072,
   0.005951587,
   0.009236486,
   0.01116033};
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
   0.1881265,
   0.01724042,
   0.009265369,
   0.006658284,
   0.00561623,
   0.005841064,
   0.006783066,
   0.00751261,
   0.005831789,
   0.008976092,
   0.01082293};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,20,2180);
   Graph_Graph3001->SetMinimum(0.393064);
   Graph_Graph3001->SetMaximum(0.9040426);
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
   TLegendEntry *entry=leg->AddEntry("","ttbar MC 2018","L");
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
