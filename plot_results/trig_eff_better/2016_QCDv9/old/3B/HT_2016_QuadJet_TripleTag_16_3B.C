#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_TripleTag_16_3B()
{
//=========Macro generated from canvas: HT_2016_QuadJet_TripleTag_16_3B/HT_2016_QuadJet_TripleTag_16_3B
//=========  (Wed May 10 10:30:23 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_TripleTag_16_3B = new TCanvas("HT_2016_QuadJet_TripleTag_16_3B", "HT_2016_QuadJet_TripleTag_16_3B",0,0,600,600);
   HT_2016_QuadJet_TripleTag_16_3B->SetHighLightColor(2);
   HT_2016_QuadJet_TripleTag_16_3B->Range(-478.1928,-0.09710412,2565.877,0.8654243);
   HT_2016_QuadJet_TripleTag_16_3B->SetFillColor(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetFillStyle(4000);
   HT_2016_QuadJet_TripleTag_16_3B->SetBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetBorderSize(2);
   HT_2016_QuadJet_TripleTag_16_3B->SetLeftMargin(0.15709);
   HT_2016_QuadJet_TripleTag_16_3B->SetRightMargin(0.1234783);
   HT_2016_QuadJet_TripleTag_16_3B->SetBottomMargin(0.12);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameFillStyle(1000);
   HT_2016_QuadJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
   0.1666667,
   0.1840435,
   0.3897084,
   0.476937,
   0.5579927,
   0.5889126,
   0.6219989,
   0.634757,
   0.6339581,
   0.6510949,
   0.6882068,
   0.6849894};
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.08570303,
   0.01147732,
   0.009010265,
   0.008670623,
   0.009069198,
   0.01018818,
   0.01150416,
   0.01313132,
   0.01608693,
   0.01056494,
   0.01880514,
   0.02159061};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.11927,
   0.01185927,
   0.009060742,
   0.008679901,
   0.009043497,
   0.0101376,
   0.0114133,
   0.01299901,
   0.01589013,
   0.01046687,
   0.01840033,
   0.02107034};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2190);
   Graph_Graph3003->SetMinimum(0.01839929);
   Graph_Graph3003->SetMaximum(0.7691715);
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
   entry=leg->AddEntry("","Tagging: at least 3 b-jets","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   HT_2016_QuadJet_TripleTag_16_3B->Modified();
   HT_2016_QuadJet_TripleTag_16_3B->cd();
   HT_2016_QuadJet_TripleTag_16_3B->SetSelected(HT_2016_QuadJet_TripleTag_16_3B);
}
