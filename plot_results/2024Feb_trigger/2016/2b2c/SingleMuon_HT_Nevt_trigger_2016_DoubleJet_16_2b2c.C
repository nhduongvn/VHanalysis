#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c/SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c = new TCanvas("SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c", "SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->Range(-400,-55.125,2266.667,496.125);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetFrameBorderMode(0);
   Double_t xAxis45[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__45 = new TH1D("probeNew__45","",13, xAxis45);
   probeNew__45->SetBinContent(3,1);
   probeNew__45->SetBinContent(4,21);
   probeNew__45->SetBinContent(5,148);
   probeNew__45->SetBinContent(6,311);
   probeNew__45->SetBinContent(7,315);
   probeNew__45->SetBinContent(8,319);
   probeNew__45->SetBinContent(9,246);
   probeNew__45->SetBinContent(10,186);
   probeNew__45->SetBinContent(11,420);
   probeNew__45->SetBinContent(12,159);
   probeNew__45->SetBinContent(13,108);
   probeNew__45->SetBinContent(14,1);
   probeNew__45->SetEntries(2235);
   probeNew__45->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__45->GetXaxis()->SetRange(1,13);
   probeNew__45->GetXaxis()->SetLabelFont(42);
   probeNew__45->GetXaxis()->SetTitleOffset(1);
   probeNew__45->GetXaxis()->SetTitleFont(42);
   probeNew__45->GetYaxis()->SetTitle("Events/Bin");
   probeNew__45->GetYaxis()->SetLabelFont(42);
   probeNew__45->GetYaxis()->SetTitleFont(42);
   probeNew__45->GetZaxis()->SetLabelFont(42);
   probeNew__45->GetZaxis()->SetTitleOffset(1);
   probeNew__45->GetZaxis()->SetTitleFont(42);
   probeNew__45->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->Modified();
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->cd();
   SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c->SetSelected(SingleMuon_HT_Nevt_trigger_2016_DoubleJet_16_2b2c);
}
