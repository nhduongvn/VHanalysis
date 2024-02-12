#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b/SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b = new TCanvas("SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b", "SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->Range(-400,-54.3375,2266.667,489.0375);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetFrameBorderMode(0);
   Double_t xAxis21[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__21 = new TH1D("probeNew__21","",13, xAxis21);
   probeNew__21->SetBinContent(3,52);
   probeNew__21->SetBinContent(4,255);
   probeNew__21->SetBinContent(5,414);
   probeNew__21->SetBinContent(6,401);
   probeNew__21->SetBinContent(7,309);
   probeNew__21->SetBinContent(8,262);
   probeNew__21->SetBinContent(9,193);
   probeNew__21->SetBinContent(10,126);
   probeNew__21->SetBinContent(11,287);
   probeNew__21->SetBinContent(12,109);
   probeNew__21->SetBinContent(13,78);
   probeNew__21->SetBinContent(14,1);
   probeNew__21->SetEntries(2487);
   probeNew__21->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__21->GetXaxis()->SetRange(1,13);
   probeNew__21->GetXaxis()->SetLabelFont(42);
   probeNew__21->GetXaxis()->SetTitleOffset(1);
   probeNew__21->GetXaxis()->SetTitleFont(42);
   probeNew__21->GetYaxis()->SetTitle("Events/Bin");
   probeNew__21->GetYaxis()->SetLabelFont(42);
   probeNew__21->GetYaxis()->SetTitleFont(42);
   probeNew__21->GetZaxis()->SetLabelFont(42);
   probeNew__21->GetZaxis()->SetTitleOffset(1);
   probeNew__21->GetZaxis()->SetTitleFont(42);
   probeNew__21->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->Modified();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->cd();
   SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b->SetSelected(SingleMuon_HT_Nevt_trigger_2016_QuadJet_16_3b);
}
