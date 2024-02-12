#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b/SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b", "SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->Range(-400,-107.1,2266.667,963.9);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetFrameBorderMode(0);
   Double_t xAxis22[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__22 = new TH1D("refNew__22","",13, xAxis22);
   refNew__22->SetBinContent(2,3);
   refNew__22->SetBinContent(3,262);
   refNew__22->SetBinContent(4,683);
   refNew__22->SetBinContent(5,816);
   refNew__22->SetBinContent(6,716);
   refNew__22->SetBinContent(7,515);
   refNew__22->SetBinContent(8,405);
   refNew__22->SetBinContent(9,311);
   refNew__22->SetBinContent(10,188);
   refNew__22->SetBinContent(11,439);
   refNew__22->SetBinContent(12,155);
   refNew__22->SetBinContent(13,102);
   refNew__22->SetBinContent(14,2);
   refNew__22->SetEntries(4597);
   refNew__22->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__22->GetXaxis()->SetRange(1,13);
   refNew__22->GetXaxis()->SetLabelFont(42);
   refNew__22->GetXaxis()->SetTitleOffset(1);
   refNew__22->GetXaxis()->SetTitleFont(42);
   refNew__22->GetYaxis()->SetTitle("Events/Bin");
   refNew__22->GetYaxis()->SetLabelFont(42);
   refNew__22->GetYaxis()->SetTitleFont(42);
   refNew__22->GetZaxis()->SetLabelFont(42);
   refNew__22->GetZaxis()->SetTitleOffset(1);
   refNew__22->GetZaxis()->SetTitleFont(42);
   refNew__22->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2016_QuadJet_16_3b);
}
