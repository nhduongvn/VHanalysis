#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b/SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b", "SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->Range(-400,-9.450001,2266.667,85.05);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetFrameBorderMode(0);
   Double_t xAxis14[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__14 = new TH1D("refNew__14","",13, xAxis14);
   refNew__14->SetBinContent(3,12);
   refNew__14->SetBinContent(4,50);
   refNew__14->SetBinContent(5,72);
   refNew__14->SetBinContent(6,59);
   refNew__14->SetBinContent(7,66);
   refNew__14->SetBinContent(8,58);
   refNew__14->SetBinContent(9,38);
   refNew__14->SetBinContent(10,38);
   refNew__14->SetBinContent(11,72);
   refNew__14->SetBinContent(12,25);
   refNew__14->SetBinContent(13,18);
   refNew__14->SetEntries(508);
   refNew__14->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__14->GetXaxis()->SetRange(1,13);
   refNew__14->GetXaxis()->SetLabelFont(42);
   refNew__14->GetXaxis()->SetTitleOffset(1);
   refNew__14->GetXaxis()->SetTitleFont(42);
   refNew__14->GetYaxis()->SetTitle("Events/Bin");
   refNew__14->GetYaxis()->SetLabelFont(42);
   refNew__14->GetYaxis()->SetTitleFont(42);
   refNew__14->GetZaxis()->SetLabelFont(42);
   refNew__14->GetZaxis()->SetTitleOffset(1);
   refNew__14->GetZaxis()->SetTitleFont(42);
   refNew__14->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2017_QuadJet_17_4b);
}
