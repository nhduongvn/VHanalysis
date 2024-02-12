#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c/SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c = new TCanvas("SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c", "SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->Range(-400,-139.3875,2266.667,1254.488);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   Double_t xAxis57[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__57 = new TH1D("probeNew__57","",13, xAxis57);
   probeNew__57->SetBinContent(3,6);
   probeNew__57->SetBinContent(4,114);
   probeNew__57->SetBinContent(5,542);
   probeNew__57->SetBinContent(6,1049);
   probeNew__57->SetBinContent(7,1004);
   probeNew__57->SetBinContent(8,868);
   probeNew__57->SetBinContent(9,626);
   probeNew__57->SetBinContent(10,524);
   probeNew__57->SetBinContent(11,1062);
   probeNew__57->SetBinContent(12,395);
   probeNew__57->SetBinContent(13,243);
   probeNew__57->SetBinContent(14,2);
   probeNew__57->SetEntries(6435);
   probeNew__57->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__57->GetXaxis()->SetRange(1,13);
   probeNew__57->GetXaxis()->SetLabelFont(42);
   probeNew__57->GetXaxis()->SetTitleOffset(1);
   probeNew__57->GetXaxis()->SetTitleFont(42);
   probeNew__57->GetYaxis()->SetTitle("Events/Bin");
   probeNew__57->GetYaxis()->SetLabelFont(42);
   probeNew__57->GetYaxis()->SetTitleFont(42);
   probeNew__57->GetZaxis()->SetLabelFont(42);
   probeNew__57->GetZaxis()->SetTitleOffset(1);
   probeNew__57->GetZaxis()->SetTitleFont(42);
   probeNew__57->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->Modified();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->cd();
   SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c->SetSelected(SingleMuon_HT_Nevt_trigger_2018_QuadJet_18_2b2c);
}
