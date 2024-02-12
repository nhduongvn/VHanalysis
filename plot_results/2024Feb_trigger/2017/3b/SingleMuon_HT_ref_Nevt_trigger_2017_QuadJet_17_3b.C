#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b/SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b", "SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->Range(-400,-189.1313,2266.667,1702.181);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetFrameBorderMode(0);
   Double_t xAxis34[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__34 = new TH1D("refNew__34","",13, xAxis34);
   refNew__34->SetBinContent(2,8);
   refNew__34->SetBinContent(3,470);
   refNew__34->SetBinContent(4,1259);
   refNew__34->SetBinContent(5,1441);
   refNew__34->SetBinContent(6,1147);
   refNew__34->SetBinContent(7,943);
   refNew__34->SetBinContent(8,734);
   refNew__34->SetBinContent(9,524);
   refNew__34->SetBinContent(10,365);
   refNew__34->SetBinContent(11,766);
   refNew__34->SetBinContent(12,246);
   refNew__34->SetBinContent(13,142);
   refNew__34->SetBinContent(14,2);
   refNew__34->SetEntries(8047);
   refNew__34->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__34->GetXaxis()->SetRange(1,13);
   refNew__34->GetXaxis()->SetLabelFont(42);
   refNew__34->GetXaxis()->SetTitleOffset(1);
   refNew__34->GetXaxis()->SetTitleFont(42);
   refNew__34->GetYaxis()->SetTitle("Events/Bin");
   refNew__34->GetYaxis()->SetLabelFont(42);
   refNew__34->GetYaxis()->SetTitleFont(42);
   refNew__34->GetZaxis()->SetLabelFont(42);
   refNew__34->GetZaxis()->SetTitleOffset(1);
   refNew__34->GetZaxis()->SetTitleFont(42);
   refNew__34->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_3b);
}
