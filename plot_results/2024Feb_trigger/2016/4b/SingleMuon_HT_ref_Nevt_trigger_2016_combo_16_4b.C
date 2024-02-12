#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b/SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b", "SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->Range(-400,-5.38125,2266.667,48.43125);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetFrameBorderMode(0);
   Double_t xAxis10[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__10 = new TH1D("refNew__10","",13, xAxis10);
   refNew__10->SetBinContent(3,9);
   refNew__10->SetBinContent(4,28);
   refNew__10->SetBinContent(5,34);
   refNew__10->SetBinContent(6,27);
   refNew__10->SetBinContent(7,29);
   refNew__10->SetBinContent(8,21);
   refNew__10->SetBinContent(9,12);
   refNew__10->SetBinContent(10,17);
   refNew__10->SetBinContent(11,41);
   refNew__10->SetBinContent(12,7);
   refNew__10->SetBinContent(13,9);
   refNew__10->SetEntries(234);
   refNew__10->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__10->GetXaxis()->SetRange(1,13);
   refNew__10->GetXaxis()->SetLabelFont(42);
   refNew__10->GetXaxis()->SetTitleOffset(1);
   refNew__10->GetXaxis()->SetTitleFont(42);
   refNew__10->GetYaxis()->SetTitle("Events/Bin");
   refNew__10->GetYaxis()->SetLabelFont(42);
   refNew__10->GetYaxis()->SetTitleFont(42);
   refNew__10->GetZaxis()->SetLabelFont(42);
   refNew__10->GetZaxis()->SetTitleOffset(1);
   refNew__10->GetZaxis()->SetTitleFont(42);
   refNew__10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->cd();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_4b);
}
