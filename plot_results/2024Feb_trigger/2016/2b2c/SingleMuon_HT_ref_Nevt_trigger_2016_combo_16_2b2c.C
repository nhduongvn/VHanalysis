#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c/SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c
//=========  (Mon Feb 12 14:06:32 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c", "SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->Range(-400,-159.4688,2266.667,1435.219);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetFrameBorderMode(0);
   Double_t xAxis50[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__50 = new TH1D("refNew__50","",13, xAxis50);
   refNew__50->SetBinContent(2,3);
   refNew__50->SetBinContent(3,415);
   refNew__50->SetBinContent(4,1059);
   refNew__50->SetBinContent(5,1215);
   refNew__50->SetBinContent(6,1085);
   refNew__50->SetBinContent(7,850);
   refNew__50->SetBinContent(8,708);
   refNew__50->SetBinContent(9,544);
   refNew__50->SetBinContent(10,375);
   refNew__50->SetBinContent(11,826);
   refNew__50->SetBinContent(12,298);
   refNew__50->SetBinContent(13,187);
   refNew__50->SetBinContent(14,1);
   refNew__50->SetEntries(7566);
   refNew__50->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__50->GetXaxis()->SetRange(1,13);
   refNew__50->GetXaxis()->SetLabelFont(42);
   refNew__50->GetXaxis()->SetTitleOffset(1);
   refNew__50->GetXaxis()->SetTitleFont(42);
   refNew__50->GetYaxis()->SetTitle("Events/Bin");
   refNew__50->GetYaxis()->SetLabelFont(42);
   refNew__50->GetYaxis()->SetTitleFont(42);
   refNew__50->GetZaxis()->SetLabelFont(42);
   refNew__50->GetZaxis()->SetTitleOffset(1);
   refNew__50->GetZaxis()->SetTitleFont(42);
   refNew__50->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->cd();
   SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2016_combo_16_2b2c);
}
