#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b/SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b = new TCanvas("SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b", "SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetHighLightColor(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->Range(-400,-51.45,2266.667,463.05);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetFillColor(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetBorderSize(2);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetLeftMargin(0.15);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   Double_t xAxis33[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *probeNew__33 = new TH1D("probeNew__33","",13, xAxis33);
   probeNew__33->SetBinContent(3,3);
   probeNew__33->SetBinContent(4,77);
   probeNew__33->SetBinContent(5,309);
   probeNew__33->SetBinContent(6,392);
   probeNew__33->SetBinContent(7,365);
   probeNew__33->SetBinContent(8,325);
   probeNew__33->SetBinContent(9,239);
   probeNew__33->SetBinContent(10,163);
   probeNew__33->SetBinContent(11,347);
   probeNew__33->SetBinContent(12,124);
   probeNew__33->SetBinContent(13,61);
   probeNew__33->SetEntries(2405);
   probeNew__33->GetXaxis()->SetTitle("H_{T} [GeV]");
   probeNew__33->GetXaxis()->SetRange(1,13);
   probeNew__33->GetXaxis()->SetLabelFont(42);
   probeNew__33->GetXaxis()->SetTitleOffset(1);
   probeNew__33->GetXaxis()->SetTitleFont(42);
   probeNew__33->GetYaxis()->SetTitle("Events/Bin");
   probeNew__33->GetYaxis()->SetLabelFont(42);
   probeNew__33->GetYaxis()->SetTitleFont(42);
   probeNew__33->GetZaxis()->SetLabelFont(42);
   probeNew__33->GetZaxis()->SetTitleOffset(1);
   probeNew__33->GetZaxis()->SetTitleFont(42);
   probeNew__33->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->Modified();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->cd();
   SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b->SetSelected(SingleMuon_HT_Nevt_trigger_2017_QuadJet_17_3b);
}
