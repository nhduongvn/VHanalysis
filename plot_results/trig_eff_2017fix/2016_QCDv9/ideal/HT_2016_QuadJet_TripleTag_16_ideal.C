#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_TripleTag_16_ideal()
{
//=========Macro generated from canvas: HT_2016_QuadJet_TripleTag_16_ideal/HT_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May 10 10:25:49 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_TripleTag_16_ideal = new TCanvas("HT_2016_QuadJet_TripleTag_16_ideal", "HT_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   HT_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   HT_2016_QuadJet_TripleTag_16_ideal->Range(-478.1928,-0.132431,2565.877,1.145099);
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
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   0.2589235,
   0.4348405,
   0.6724873,
   0.783232,
   0.8460482,
   0.8789376,
   0.892806,
   0.8962089,
   0.9022295,
   0.9293881,
   0.9231531,
   0.9055173};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   0.1550114,
   0.02157221,
   0.01148904,
   0.008503237,
   0.007499031,
   0.007207778,
   0.007497142,
   0.008502563,
   0.009210043,
   0.00513903,
   0.008446618,
   0.01110323};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   0.2129325,
   0.02173806,
   0.01135282,
   0.008345374,
   0.00730495,
   0.006969208,
   0.007201591,
   0.008110764,
   0.008721454,
   0.004918461,
   0.007914616,
   0.01037472};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2190);
   Graph_Graph3001->SetMinimum(0.02087258);
   Graph_Graph3001->SetMaximum(1.017346);
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
   TLegendEntry *entry=leg->AddEntry("","SingleMuon 2016","L");
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
