#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b/SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b", "SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->Range(-400,-5.38125,2266.667,48.43125);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetFrameBorderMode(0);
   Double_t xAxis6[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__6 = new TH1D("refNew__6","",13, xAxis6);
   refNew__6->SetBinContent(3,9);
   refNew__6->SetBinContent(4,28);
   refNew__6->SetBinContent(5,34);
   refNew__6->SetBinContent(6,27);
   refNew__6->SetBinContent(7,29);
   refNew__6->SetBinContent(8,21);
   refNew__6->SetBinContent(9,12);
   refNew__6->SetBinContent(10,17);
   refNew__6->SetBinContent(11,41);
   refNew__6->SetBinContent(12,7);
   refNew__6->SetBinContent(13,9);
   refNew__6->SetEntries(234);
   refNew__6->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__6->GetXaxis()->SetRange(1,13);
   refNew__6->GetXaxis()->SetLabelFont(42);
   refNew__6->GetXaxis()->SetTitleOffset(1);
   refNew__6->GetXaxis()->SetTitleFont(42);
   refNew__6->GetYaxis()->SetTitle("Events/Bin");
   refNew__6->GetYaxis()->SetLabelFont(42);
   refNew__6->GetYaxis()->SetTitleFont(42);
   refNew__6->GetZaxis()->SetLabelFont(42);
   refNew__6->GetZaxis()->SetTitleOffset(1);
   refNew__6->GetZaxis()->SetTitleFont(42);
   refNew__6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2016_DoubleJet_16_4b);
}
