#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c/SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c", "SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->Range(-400,-274.9688,2266.667,2474.719);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   Double_t xAxis54[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__54 = new TH1D("refNew__54","",13, xAxis54);
   refNew__54->SetBinContent(2,10);
   refNew__54->SetBinContent(3,632);
   refNew__54->SetBinContent(4,1766);
   refNew__54->SetBinContent(5,2095);
   refNew__54->SetBinContent(6,1831);
   refNew__54->SetBinContent(7,1449);
   refNew__54->SetBinContent(8,1155);
   refNew__54->SetBinContent(9,819);
   refNew__54->SetBinContent(10,681);
   refNew__54->SetBinContent(11,1313);
   refNew__54->SetBinContent(12,423);
   refNew__54->SetBinContent(13,284);
   refNew__54->SetBinContent(14,4);
   refNew__54->SetEntries(12462);
   refNew__54->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__54->GetXaxis()->SetRange(1,13);
   refNew__54->GetXaxis()->SetLabelFont(42);
   refNew__54->GetXaxis()->SetTitleOffset(1);
   refNew__54->GetXaxis()->SetTitleFont(42);
   refNew__54->GetYaxis()->SetTitle("Events/Bin");
   refNew__54->GetYaxis()->SetLabelFont(42);
   refNew__54->GetYaxis()->SetTitleFont(42);
   refNew__54->GetZaxis()->SetLabelFont(42);
   refNew__54->GetZaxis()->SetTitleOffset(1);
   refNew__54->GetZaxis()->SetTitleFont(42);
   refNew__54->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->cd();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_2b2c);
}
