#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c/SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c = new TCanvas("SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c", "SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->Range(-400,-51.84375,2266.667,466.5938);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetFrameBorderMode(0);
   Double_t xAxis53[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__53 = new TH1D("probeNew__53","",13, xAxis53);
   probeNew__53->SetBinContent(4,77);
   probeNew__53->SetBinContent(5,280);
   probeNew__53->SetBinContent(6,393);
   probeNew__53->SetBinContent(7,323);
   probeNew__53->SetBinContent(8,310);
   probeNew__53->SetBinContent(9,228);
   probeNew__53->SetBinContent(10,185);
   probeNew__53->SetBinContent(11,395);
   probeNew__53->SetBinContent(12,146);
   probeNew__53->SetBinContent(13,101);
   probeNew__53->SetBinContent(14,1);
   probeNew__53->SetEntries(2439);
   probeNew__53->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__53->GetXaxis()->SetRange(1,13);
   probeNew__53->GetXaxis()->SetLabelFont(42);
   probeNew__53->GetXaxis()->SetTitleOffset(1);
   probeNew__53->GetXaxis()->SetTitleFont(42);
   probeNew__53->GetYaxis()->SetTitle("Events/Bin");
   probeNew__53->GetYaxis()->SetLabelFont(42);
   probeNew__53->GetYaxis()->SetTitleFont(42);
   probeNew__53->GetZaxis()->SetLabelFont(42);
   probeNew__53->GetZaxis()->SetTitleOffset(1);
   probeNew__53->GetZaxis()->SetTitleFont(42);
   probeNew__53->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->Modified();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->cd();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c->SetSelected(SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_2b2c);
}
