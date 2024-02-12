#ifdef __CLING__
#pragma cling optimize(0)
#endif
void ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c()
{
//=========Macro generated from canvas: ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c/ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c
//=========  (Mon Feb 12 14:06:33 2024) by ROOT version 6.28/10
   TCanvas *ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c = new TCanvas("ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c", "ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c",0,0,600,600);
   gStyle->SetOptStat(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetHighLightColor(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->Range(-400,-1987.772,2266.667,17889.95);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFillColor(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetBorderSize(2);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetLeftMargin(0.15);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetFrameBorderMode(0);
   Double_t xAxis60[14] = {0, 100, 200, 250, 300, 350, 400, 450, 500, 550, 600, 800, 1000, 2000}; 
   
   TH1D *refNew__60 = new TH1D("refNew__60","",13, xAxis60);
   refNew__60->SetBinContent(2,44.39082);
   refNew__60->SetBinContent(3,4172.404);
   refNew__60->SetBinContent(4,12511.97);
   refNew__60->SetBinContent(5,15144.93);
   refNew__60->SetBinContent(6,13839.46);
   refNew__60->SetBinContent(7,11185.95);
   refNew__60->SetBinContent(8,8727.36);
   refNew__60->SetBinContent(9,6602.754);
   refNew__60->SetBinContent(10,5009.343);
   refNew__60->SetBinContent(11,10427.85);
   refNew__60->SetBinContent(12,3520.706);
   refNew__60->SetBinContent(13,2199.076);
   refNew__60->SetBinContent(14,36.98163);
   refNew__60->SetBinError(2,1.906532);
   refNew__60->SetBinError(3,23.52756);
   refNew__60->SetBinError(4,39.5869);
   refNew__60->SetBinError(5,44.22668);
   refNew__60->SetBinError(6,43.19991);
   refNew__60->SetBinError(7,39.53013);
   refNew__60->SetBinError(8,34.7873);
   refNew__60->SetBinError(9,30.92861);
   refNew__60->SetBinError(10,26.09403);
   refNew__60->SetBinError(11,39.73831);
   refNew__60->SetBinError(12,24.02217);
   refNew__60->SetBinError(13,16.35833);
   refNew__60->SetBinError(14,1.983834);
   refNew__60->SetEntries(1115243);
   refNew__60->GetXaxis()->SetTitle("H_{T} [GeV]");
   refNew__60->GetXaxis()->SetRange(1,13);
   refNew__60->GetXaxis()->SetLabelFont(42);
   refNew__60->GetXaxis()->SetTitleOffset(1);
   refNew__60->GetXaxis()->SetTitleFont(42);
   refNew__60->GetYaxis()->SetTitle("Events/Bin");
   refNew__60->GetYaxis()->SetLabelFont(42);
   refNew__60->GetYaxis()->SetTitleFont(42);
   refNew__60->GetZaxis()->SetLabelFont(42);
   refNew__60->GetZaxis()->SetTitleOffset(1);
   refNew__60->GetZaxis()->SetTitleFont(42);
   refNew__60->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->Modified();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->cd();
   ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c->SetSelected(ttbar_HT_ref_Nevt_trigger_2018_QuadJet_18_2b2c);
}
