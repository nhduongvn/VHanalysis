#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b/SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b = new TCanvas("SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b", "SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->Range(-400,-5.64375,2266.667,50.79375);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   Double_t xAxis13[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__13 = new TH1D("probeNew__13","",13, xAxis13);
   probeNew__13->SetBinContent(4,6);
   probeNew__13->SetBinContent(5,28);
   probeNew__13->SetBinContent(6,37);
   probeNew__13->SetBinContent(7,36);
   probeNew__13->SetBinContent(8,37);
   probeNew__13->SetBinContent(9,23);
   probeNew__13->SetBinContent(10,26);
   probeNew__13->SetBinContent(11,43);
   probeNew__13->SetBinContent(12,17);
   probeNew__13->SetBinContent(13,11);
   probeNew__13->SetEntries(264);
   probeNew__13->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__13->GetXaxis()->SetRange(1,13);
   probeNew__13->GetXaxis()->SetLabelFont(42);
   probeNew__13->GetXaxis()->SetTitleOffset(1);
   probeNew__13->GetXaxis()->SetTitleFont(42);
   probeNew__13->GetYaxis()->SetTitle("Events/Bin");
   probeNew__13->GetYaxis()->SetLabelFont(42);
   probeNew__13->GetYaxis()->SetTitleFont(42);
   probeNew__13->GetZaxis()->SetLabelFont(42);
   probeNew__13->GetZaxis()->SetTitleOffset(1);
   probeNew__13->GetZaxis()->SetTitleFont(42);
   probeNew__13->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->Modified();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->cd();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b->SetSelected(SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_4b);
}
