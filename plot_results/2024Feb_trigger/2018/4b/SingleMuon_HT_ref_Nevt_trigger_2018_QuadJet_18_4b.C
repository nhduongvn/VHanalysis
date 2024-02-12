#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b/SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b", "SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->Range(-400,-23.75625,2266.667,213.8063);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetFrameBorderMode(0);
   Double_t xAxis18[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__18 = new TH1D("refNew__18","",13, xAxis18);
   refNew__18->SetBinContent(3,32);
   refNew__18->SetBinContent(4,115);
   refNew__18->SetBinContent(5,142);
   refNew__18->SetBinContent(6,181);
   refNew__18->SetBinContent(7,141);
   refNew__18->SetBinContent(8,118);
   refNew__18->SetBinContent(9,96);
   refNew__18->SetBinContent(10,81);
   refNew__18->SetBinContent(11,155);
   refNew__18->SetBinContent(12,62);
   refNew__18->SetBinContent(13,33);
   refNew__18->SetEntries(1156);
   refNew__18->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__18->GetXaxis()->SetRange(1,13);
   refNew__18->GetXaxis()->SetLabelFont(42);
   refNew__18->GetXaxis()->SetTitleOffset(1);
   refNew__18->GetXaxis()->SetTitleFont(42);
   refNew__18->GetYaxis()->SetTitle("Events/Bin");
   refNew__18->GetYaxis()->SetLabelFont(42);
   refNew__18->GetYaxis()->SetTitleFont(42);
   refNew__18->GetZaxis()->SetLabelFont(42);
   refNew__18->GetZaxis()->SetTitleOffset(1);
   refNew__18->GetZaxis()->SetTitleFont(42);
   refNew__18->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_4b);
}
