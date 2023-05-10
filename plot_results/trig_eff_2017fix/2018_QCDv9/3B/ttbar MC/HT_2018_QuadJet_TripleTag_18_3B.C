#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_TripleTag_18_3B()
{
//=========Macro generated from canvas: HT_2018_QuadJet_TripleTag_18_3B/HT_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May 10 10:33:28 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_TripleTag_18_3B = new TCanvas("HT_2018_QuadJet_TripleTag_18_3B", "HT_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   HT_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   HT_2018_QuadJet_TripleTag_18_3B->Range(-451.6423,-0.09194386,2550.728,0.7350659);
   HT_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   HT_2018_QuadJet_TripleTag_18_3B->SetFillStyle(4000);
   HT_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   HT_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15709);
   HT_2018_QuadJet_TripleTag_18_3B->SetRightMargin(0.1234783);
   HT_2018_QuadJet_TripleTag_18_3B->SetBottomMargin(0.12);
   HT_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   HT_2018_QuadJet_TripleTag_18_3B->SetFrameFillStyle(1000);
   HT_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   Double_t _fx3002[11] = {
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
   Double_t _fy3002[11] = {
   0.1018221,
   0.3028909,
   0.4174444,
   0.5164334,
   0.5732128,
   0.5823583,
   0.5915289,
   0.591191,
   0.5965659,
   0.591703,
   0.5830467};
   Double_t _felx3002[11] = {
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
   Double_t _fely3002[11] = {
   0.0407691,
   0.004000189,
   0.001988294,
   0.001615992,
   0.001801662,
   0.00207145,
   0.002391338,
   0.00284948,
   0.002045676,
   0.003591221,
   0.004417165};
   Double_t _fehx3002[11] = {
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
   Double_t _fehy3002[11] = {
   0.05361458,
   0.004020208,
   0.001990087,
   0.001615764,
   0.001800367,
   0.002069512,
   0.00238846,
   0.002845395,
   0.002043434,
   0.003584708,
   0.004408304};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(11,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,20,2180);
   Graph_Graph3002->SetMinimum(0.007297319);
   Graph_Graph3002->SetMaximum(0.652365);
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
   entry=leg->AddEntry("","Tagging: at least 3 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2018_QuadJet_TripleTag_18_3B->Modified();
   HT_2018_QuadJet_TripleTag_18_3B->cd();
   HT_2018_QuadJet_TripleTag_18_3B->SetSelected(HT_2018_QuadJet_TripleTag_18_3B);
}
