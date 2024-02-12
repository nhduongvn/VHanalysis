#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_trigger_2016_DoubleJet_16_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_trigger_2016_DoubleJet_16_4b/SingleMuon_HT_trigger_2016_DoubleJet_16_4b
//=========  (Sat Feb 10 18:21:36 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_trigger_2016_DoubleJet_16_4b = new TCanvas("SingleMuon_HT_trigger_2016_DoubleJet_16_4b", "SingleMuon_HT_trigger_2016_DoubleJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetHighLightColor(2);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->Range(-400,-4.725,2266.667,42.525);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetFillColor(0);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetBorderMode(0);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetBorderSize(2);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetLeftMargin(0.15);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   Double_t xAxis2[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__2 = new TH1D("probeNew__2","",13, xAxis2);
   probeNew__2->SetBinContent(4,4);
   probeNew__2->SetBinContent(5,9);
   probeNew__2->SetBinContent(6,13);
   probeNew__2->SetBinContent(7,24);
   probeNew__2->SetBinContent(8,19);
   probeNew__2->SetBinContent(9,11);
   probeNew__2->SetBinContent(10,16);
   probeNew__2->SetBinContent(11,36);
   probeNew__2->SetBinContent(12,6);
   probeNew__2->SetBinContent(13,7);
   probeNew__2->SetEntries(145);
   probeNew__2->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__2->GetXaxis()->SetRange(1,13);
   probeNew__2->GetXaxis()->SetLabelFont(42);
   probeNew__2->GetXaxis()->SetTitleOffset(1);
   probeNew__2->GetXaxis()->SetTitleFont(42);
   probeNew__2->GetYaxis()->SetTitle("Events/Bin");
   probeNew__2->GetYaxis()->SetLabelFont(42);
   probeNew__2->GetYaxis()->SetTitleFont(42);
   probeNew__2->GetZaxis()->SetLabelFont(42);
   probeNew__2->GetZaxis()->SetTitleOffset(1);
   probeNew__2->GetZaxis()->SetTitleFont(42);
   probeNew__2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->Modified();
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->cd();
   SingleMuon_HT_trigger_2016_DoubleJet_16_4b->SetSelected(SingleMuon_HT_trigger_2016_DoubleJet_16_4b);
}
