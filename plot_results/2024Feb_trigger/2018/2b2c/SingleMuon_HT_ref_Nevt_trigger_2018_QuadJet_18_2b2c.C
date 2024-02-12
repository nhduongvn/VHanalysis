#ifdef __CLING__
#pragma cling optimize(0)
#endif
void SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c()
{
//=========Macro generated from canvas: SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c/SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c = new TCanvas("SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c", "SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetHighLightColor(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->Range(-400,-591.8063,2266.667,5326.256);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFillColor(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderSize(2);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetLeftMargin(0.15);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   Double_t xAxis58[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__58 = new TH1D("refNew__58","",13, xAxis58);
   refNew__58->SetBinContent(2,23);
   refNew__58->SetBinContent(3,1535);
   refNew__58->SetBinContent(4,4081);
   refNew__58->SetBinContent(5,4509);
   refNew__58->SetBinContent(6,4185);
   refNew__58->SetBinContent(7,3310);
   refNew__58->SetBinContent(8,2670);
   refNew__58->SetBinContent(9,1988);
   refNew__58->SetBinContent(10,1469);
   refNew__58->SetBinContent(11,3066);
   refNew__58->SetBinContent(12,1018);
   refNew__58->SetBinContent(13,613);
   refNew__58->SetBinContent(14,11);
   refNew__58->SetEntries(28478);
   refNew__58->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__58->GetXaxis()->SetRange(1,13);
   refNew__58->GetXaxis()->SetLabelFont(42);
   refNew__58->GetXaxis()->SetTitleOffset(1);
   refNew__58->GetXaxis()->SetTitleFont(42);
   refNew__58->GetYaxis()->SetTitle("Events/Bin");
   refNew__58->GetYaxis()->SetLabelFont(42);
   refNew__58->GetYaxis()->SetTitleFont(42);
   refNew__58->GetZaxis()->SetLabelFont(42);
   refNew__58->GetZaxis()->SetTitleOffset(1);
   refNew__58->GetZaxis()->SetTitleFont(42);
   refNew__58->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->Modified();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->cd();
   SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetSelected(SingleMuon_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c);
}
